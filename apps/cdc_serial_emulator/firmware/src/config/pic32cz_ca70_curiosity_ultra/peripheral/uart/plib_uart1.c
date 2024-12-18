/*******************************************************************************
  UART1 PLIB

  Company:
    Microchip Technology Inc.

  File Name:
    plib_uart1.c

  Summary:
    UART1 PLIB Implementation File

  Description:
    None

*******************************************************************************/

/*******************************************************************************
* Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/

#include "device.h"
#include "plib_uart1.h"
#include "interrupts.h"

// *****************************************************************************
// *****************************************************************************
// Section: UART1 Implementation
// *****************************************************************************
// *****************************************************************************

volatile static UART_OBJECT uart1Obj;

static void __attribute__((used)) UART1_ISR_RX_Handler( void )
{
    if(uart1Obj.rxBusyStatus == true)
    {
        size_t rxSize = uart1Obj.rxSize;
        size_t rxProcessedSize = uart1Obj.rxProcessedSize;

        while((UART_SR_RXRDY_Msk == (UART1_REGS->UART_SR& UART_SR_RXRDY_Msk)) && (rxSize > rxProcessedSize) )
        {
            uart1Obj.rxBuffer[rxProcessedSize] = (uint8_t)(UART1_REGS->UART_RHR& UART_RHR_RXCHR_Msk);
            rxProcessedSize++;
        }

        uart1Obj.rxProcessedSize = rxProcessedSize;

        /* Check if the buffer is done */
        if(uart1Obj.rxProcessedSize >= rxSize)
        {
            uart1Obj.rxBusyStatus = false;

            /* Disable Read, Overrun, Parity and Framing error interrupts */
            UART1_REGS->UART_IDR = (UART_IDR_RXRDY_Msk | UART_IDR_FRAME_Msk | UART_IDR_PARE_Msk | UART_IDR_OVRE_Msk);

            if(uart1Obj.rxCallback != NULL)
            {
                uintptr_t rxContext = uart1Obj.rxContext;

                uart1Obj.rxCallback(rxContext);
            }
        }
    }
    else
    {
        /* Nothing to process */
        ;
    }
}

static void __attribute__((used)) UART1_ISR_TX_Handler( void )
{
    if(uart1Obj.txBusyStatus == true)
    {
        size_t txSize = uart1Obj.txSize;
        size_t txProcessedSize = uart1Obj.txProcessedSize;

        while((UART_SR_TXRDY_Msk == (UART1_REGS->UART_SR & UART_SR_TXRDY_Msk)) && (txSize > txProcessedSize) )
        {
            UART1_REGS->UART_THR|= uart1Obj.txBuffer[txProcessedSize];
            txProcessedSize++;
        }

        uart1Obj.txProcessedSize = txProcessedSize;

        /* Check if the buffer is done */
        if(uart1Obj.txProcessedSize >= txSize)
        {
            uart1Obj.txBusyStatus = false;
            UART1_REGS->UART_IDR = UART_IDR_TXEMPTY_Msk;

            if(uart1Obj.txCallback != NULL)
            {
                uintptr_t txContext = uart1Obj.txContext;

                uart1Obj.txCallback(txContext);
            }
        }
    }
    else
    {
        /* Nothing to process */
        ;
    }
}

void __attribute__((used)) UART1_InterruptHandler( void )
{
    /* Error status */
    uint32_t errorStatusx = (UART1_REGS->UART_SR & (UART_SR_OVRE_Msk | UART_SR_FRAME_Msk | UART_SR_PARE_Msk));

    if(errorStatusx != 0U)
    {
        /* Client must call UARTx_ErrorGet() function to clear the errors */

        /* Disable Read, Overrun, Parity and Framing error interrupts */
        UART1_REGS->UART_IDR = (UART_IDR_RXRDY_Msk | UART_IDR_FRAME_Msk | UART_IDR_PARE_Msk | UART_IDR_OVRE_Msk);

        uart1Obj.rxBusyStatus = false;

        /* UART errors are normally associated with the receiver, hence calling
         * receiver callback */
        if( uart1Obj.rxCallback != NULL )
        {
            uintptr_t rxContext = uart1Obj.rxContext;

            uart1Obj.rxCallback(rxContext);
        }
    }

    /* Receiver status */
    if(UART_SR_RXRDY_Msk == (UART1_REGS->UART_SR & UART_SR_RXRDY_Msk))
    {
        UART1_ISR_RX_Handler();
    }

    /* Transmitter status */
    if(UART_SR_TXRDY_Msk == (UART1_REGS->UART_SR & UART_SR_TXRDY_Msk))
    {
        UART1_ISR_TX_Handler();
    }
}

static void UART1_ErrorClear( void )
{
    uint8_t dummyData = 0u;

    UART1_REGS->UART_CR = UART_CR_RSTSTA_Msk;

    /* Flush existing error bytes from the RX FIFO */
    while( UART_SR_RXRDY_Msk == (UART1_REGS->UART_SR & UART_SR_RXRDY_Msk) )
    {
        dummyData = (uint8_t)(UART1_REGS->UART_RHR & UART_RHR_RXCHR_Msk);
    }

    /* Ignore the warning */
    (void)dummyData;
}

void UART1_Initialize( void )
{
    /* Reset UART1 */
    UART1_REGS->UART_CR = (UART_CR_RSTRX_Msk | UART_CR_RSTTX_Msk | UART_CR_RSTSTA_Msk);

    /* Enable UART1 */
    UART1_REGS->UART_CR = (UART_CR_TXEN_Msk | UART_CR_RXEN_Msk);

    /* Configure UART1 mode */
    UART1_REGS->UART_MR = ((UART_MR_BRSRCCK_PERIPH_CLK) | (UART_MR_PAR_NO) | (0U << UART_MR_FILTER_Pos));

    /* Configure UART1 Baud Rate */
    UART1_REGS->UART_BRGR = UART_BRGR_CD(81);

    /* Initialize instance object */
    uart1Obj.rxBuffer = NULL;
    uart1Obj.rxSize = 0;
    uart1Obj.rxProcessedSize = 0;
    uart1Obj.rxBusyStatus = false;
    uart1Obj.rxCallback = NULL;
    uart1Obj.txBuffer = NULL;
    uart1Obj.txSize = 0;
    uart1Obj.txProcessedSize = 0;
    uart1Obj.txBusyStatus = false;
    uart1Obj.txCallback = NULL;
}

UART_ERROR UART1_ErrorGet( void )
{
    UART_ERROR errors = UART_ERROR_NONE;
    uint32_t status = UART1_REGS->UART_SR;

    errors = (UART_ERROR)(status & (UART_SR_OVRE_Msk | UART_SR_PARE_Msk | UART_SR_FRAME_Msk));

    if(errors != UART_ERROR_NONE)
    {
        UART1_ErrorClear();
    }

    /* All errors are cleared, but send the previous error state */
    return errors;
}

bool UART1_SerialSetup( UART_SERIAL_SETUP *setup, uint32_t srcClkFreq )
{
    bool status = false;
    uint32_t baud;
    uint32_t brgVal = 0;
    uint32_t uartMode;

    if(uart1Obj.rxBusyStatus == true)
    {
        /* Transaction is in progress, so return without updating settings */
        return false;
    }
    if(uart1Obj.txBusyStatus == true)
    {
        /* Transaction is in progress, so return without updating settings */
        return false;
    }
    if (setup != NULL)
    {
        baud = setup->baudRate;
        if(srcClkFreq == 0U)
        {
            srcClkFreq = UART1_FrequencyGet();
        }

        /* Calculate BRG value */
        brgVal = srcClkFreq / (16U * baud);

        /* If the target baud rate is acheivable using this clock */
        if (brgVal <= 65535U)
        {
            /* Configure UART1 mode */
            uartMode = UART1_REGS->UART_MR;
            uartMode &= ~UART_MR_PAR_Msk;
            UART1_REGS->UART_MR = uartMode | setup->parity ;

            /* Configure UART1 Baud Rate */
            UART1_REGS->UART_BRGR = UART_BRGR_CD(brgVal);

            status = true;
        }
    }

    return status;
}

bool UART1_Read( void *buffer, const size_t size )
{
    bool status = false;
    UART_ERROR errorinfo;

    uint8_t * lBuffer = (uint8_t *)buffer;

    if(NULL != lBuffer)
    {
        /* Clear errors before submitting the request.
         * ErrorGet clears errors internally. */
         errorinfo = UART1_ErrorGet();

         if(errorinfo != 0U)
         {
             /* Nothing to do */
         }

        /* Check if receive request is in progress */
        if(uart1Obj.rxBusyStatus == false)
        {
            uart1Obj.rxBuffer = lBuffer;
            uart1Obj.rxSize = size;
            uart1Obj.rxProcessedSize = 0;
            uart1Obj.rxBusyStatus = true;
            status = true;

            /* Enable Read, Overrun, Parity and Framing error interrupts */
            UART1_REGS->UART_IER = (UART_IER_RXRDY_Msk | UART_IER_FRAME_Msk | UART_IER_PARE_Msk | UART_IER_OVRE_Msk);
        }
    }

    return status;
}

bool UART1_Write( void *buffer, const size_t size )
{
    bool status = false;
    uint8_t * lBuffer = (uint8_t *)buffer;

    if(NULL != lBuffer)
    {
        /* Check if transmit request is in progress */
        if(uart1Obj.txBusyStatus == false)
        {
            uart1Obj.txBuffer = lBuffer;
            uart1Obj.txSize = size;
            uart1Obj.txProcessedSize = 0;
            uart1Obj.txBusyStatus = true;
            status = true;

            /* Initiate the transfer by sending first byte */
            if(UART_SR_TXRDY_Msk == (UART1_REGS->UART_SR & UART_SR_TXRDY_Msk))
            {
                UART1_REGS->UART_THR = (UART_THR_TXCHR(*lBuffer) & UART_THR_TXCHR_Msk);
                uart1Obj.txProcessedSize++;
            }

            UART1_REGS->UART_IER = UART_IER_TXEMPTY_Msk;
        }
    }

    return status;
}

void UART1_WriteCallbackRegister( UART_CALLBACK callback, uintptr_t context )
{
    uart1Obj.txCallback = callback;

    uart1Obj.txContext = context;
}

void UART1_ReadCallbackRegister( UART_CALLBACK callback, uintptr_t context )
{
    uart1Obj.rxCallback = callback;

    uart1Obj.rxContext = context;
}

bool UART1_WriteIsBusy( void )
{
    return uart1Obj.txBusyStatus;
}

bool UART1_ReadIsBusy( void )
{
    return uart1Obj.rxBusyStatus;
}

size_t UART1_WriteCountGet( void )
{
    return uart1Obj.txProcessedSize;
}

size_t UART1_ReadCountGet( void )
{
    return uart1Obj.rxProcessedSize;
}

bool UART1_ReadAbort(void)
{
    if (uart1Obj.rxBusyStatus == true)
    {
        /* Disable Read, Overrun, Parity and Framing error interrupts */
        UART1_REGS->UART_IDR = (UART_IDR_RXRDY_Msk | UART_IDR_FRAME_Msk | UART_IDR_PARE_Msk | UART_IDR_OVRE_Msk);

        uart1Obj.rxBusyStatus = false;

        /* If required application should read the num bytes processed prior to calling the read abort API */
        uart1Obj.rxSize = 0;
        uart1Obj.rxProcessedSize = 0;
    }

    return true;
}


bool UART1_TransmitComplete( void )
{
    bool status = false;

    if(UART_SR_TXEMPTY_Msk == (UART1_REGS->UART_SR & UART_SR_TXEMPTY_Msk))
    {
        status = true;
    }

    return status;
}