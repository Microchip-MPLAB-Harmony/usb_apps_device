/*******************************************************************************
* Copyright (C) 2021 Microchip Technology Inc. and its subsidiaries.
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

/*******************************************************************************
  MPLAB Harmony Application Source File

  Company:
    Microchip Technology Inc.

  File Name:
    app_sam_d21_xpro.c

  Summary:
    This file contains the source code for the MPLAB Harmony application.

  Description:
    This file contains the source code for the MPLAB Harmony application. 
 *******************************************************************************/

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************
#include "app.h"
#include "app_sam_pic32cm_gc_curiosity.h"

// *****************************************************************************
// *****************************************************************************
// Section: Global Data Definitions
// *****************************************************************************
// *****************************************************************************
// *****************************************************************************
APP_USART_INTERFACE appUSARTInterface =
{
    .addressGet = APP_PIC32CM_GC_CURIOSITY_USARTAddressGet,
    .dmaChannelDisbale = APP_PIC32CM_GC_CURIOSITY_DmaInterruptDisbale,
    .dmaChannelEnable = APP_PIC32CM_GC_CURIOSITY_DmaInterruptEnable,
    .frequencyGet = APP_PIC32CM_GC_CURIOSITY_USARTFrequencyGet,
    .serialSetup = APP_PIC32CM_GC_CURIOSITY_USARTSetup,
    .errorGet = APP_PIC32CM_GC_CURIOSITY_USARTErrorGet,
    .DataGet = APP_PIC32CM_GC_CURIOSITY_USARTDataGet,
    .RTSSet = U1RTS_Set,
    .RTSClear = U1RTS_Clear
};

APP_TC_INTERFACE appTCInterface =
{
    .Timer16bitCounterGet = APP_PIC32CM_GC_CURIOSITY_Timer16bitCounterGet,
    .Timer16bitCounterSet = APP_PIC32CM_GC_CURIOSITY_Timer16bitCounterSet,
    .TimerStart = APP_PIC32CM_GC_CURIOSITY_TimerStart
};
// *****************************************************************************
// *****************************************************************************
// Section: APP USART Interface Routines
// *****************************************************************************
// *****************************************************************************
/*******************************************************************************
 * This function return SERCOM peripheral address. 
 ******************************************************************************/
sercom_registers_t * APP_PIC32CM_GC_CURIOSITY_USARTAddressGet ( void )
{
     return SERCOM0_REGS;   
}
/*******************************************************************************
 * This function return SERCOM registers. 
 ******************************************************************************/
volatile uint32_t * APP_PIC32CM_GC_CURIOSITY_USARTDataGet ( void )
{
    volatile uint32_t* data = &SERCOM0_REGS->USART.SERCOM_DATA;
    return data;   
}

/*******************************************************************************
 * This function disables the DMA Interrupts. 
 ******************************************************************************/
void APP_PIC32CM_GC_CURIOSITY_DmaInterruptDisbale(void)
{
    SYS_INT_SourceDisable(DMAC_TCMPL0_IRQn);
    SYS_INT_SourceDisable(DMAC_TCMPL1_IRQn);  
  
}

/*******************************************************************************
 * This function enables the DMA Interrupts. 
 ******************************************************************************/
void APP_PIC32CM_GC_CURIOSITY_DmaInterruptEnable(void)
{
    SYS_INT_SourceEnable(DMAC_TCMPL0_IRQn);
    SYS_INT_SourceEnable(DMAC_TCMPL1_IRQn);
}

/*******************************************************************************
 * This function returns USART frequency. 
 ******************************************************************************/
uint32_t APP_PIC32CM_GC_CURIOSITY_USARTFrequencyGet(void)
{
    return SERCOM0_USART_FrequencyGet();
}

/*******************************************************************************
 * This function returns frequency  
 ******************************************************************************/
bool APP_PIC32CM_GC_CURIOSITY_USARTSetup(USART_SERIAL_SETUP * serialSetup, uint32_t clkFrequency)
{
   return SERCOM0_USART_SerialSetup(serialSetup, clkFrequency);
}

/*******************************************************************************
 * This function returns UART Error. 
 ******************************************************************************/
USART_ERROR APP_PIC32CM_GC_CURIOSITY_USARTErrorGet(void)
{
    return SERCOM0_USART_ErrorGet();
}
/*******************************************************************************
 * This function returns counter value. 
 ******************************************************************************/
uint16_t APP_PIC32CM_GC_CURIOSITY_Timer16bitCounterGet(void)
{
	return TCC3_Timer16bitCounterGet();
}
/*******************************************************************************
 * This function sets the counter value. 
 ******************************************************************************/
void APP_PIC32CM_GC_CURIOSITY_Timer16bitCounterSet(uint16_t countVal)
{
	TCC3_Timer16bitCounterSet(countVal);
}
/*******************************************************************************
 * This function starts the Timer. 
 ******************************************************************************/
void APP_PIC32CM_GC_CURIOSITY_TimerStart(void)
{
	TCC3_TimerStart();
}
/*******************************************************************************
 * This function Sets the RTS. 
 ******************************************************************************/
void U1RTS_Set(void)
{
    //U1RTS_Set();
}
/*******************************************************************************
 * This function Clears the RTS. 
 ******************************************************************************/
void U1RTS_Clear(void)
{
    //U1RTS_Clear();
}
/*******************************************************************************
 End of File
 */


