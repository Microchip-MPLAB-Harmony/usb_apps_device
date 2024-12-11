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
    app_sam_e54_xpro.c

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
#include "app_sam_e54_xpro.h"

// *****************************************************************************
// *****************************************************************************
// Section: Global Data Definitions
// *****************************************************************************
// *****************************************************************************
// *****************************************************************************
APP_USART_INTERFACE appUSARTInterface =
{
    .addressGet = APP_SAME54_XPRO_USARTAddressGet,
    .dmaChannelDisbale = APP_SAME54_XPRO_DmaInterruptDisbale,
    .dmaChannelEnable = APP_SAME54_XPRO_DmaInterruptEnable,
    .frequencyGet = APP_SAME54_XPRO_USARTFrequencyGet,
    .serialSetup = APP_SAME54_XPRO_USARTSetup,
    .errorGet = APP_SAME54_XPRO_USARTErrorGet
};

APP_TC_INTERFACE appTCInterface =
{
    .Timer16bitCounterGet = APP_SAME54_XPRO_Timer16bitCounterGet,
    .Timer16bitCounterSet = APP_SAME54_XPRO_Timer16bitCounterSet,
    .TimerStart = APP_SAME54_XPRO_TimerStart
};
// *****************************************************************************
// *****************************************************************************
// Section: APP USART Interface Routines
// *****************************************************************************
// *****************************************************************************
/*******************************************************************************
 * This function return SERCOM peripheral address. 
 ******************************************************************************/
sercom_registers_t * APP_SAME54_XPRO_USARTAddressGet ( void )
{
     return SERCOM0_REGS;   
}


/*******************************************************************************
 * This function disables the DMA Interrupts. 
 ******************************************************************************/
void APP_SAME54_XPRO_DmaInterruptDisbale(void)
{
    SYS_INT_SourceDisable(DMAC_0_IRQn);
    SYS_INT_SourceDisable(DMAC_1_IRQn);
}

/*******************************************************************************
 * This function enables the DMA Interrupts. 
 ******************************************************************************/
void APP_SAME54_XPRO_DmaInterruptEnable(void)
{
    SYS_INT_SourceEnable(DMAC_0_IRQn);
    SYS_INT_SourceEnable(DMAC_1_IRQn);
}

/*******************************************************************************
 * This function returns USART frequency. 
 ******************************************************************************/
uint32_t APP_SAME54_XPRO_USARTFrequencyGet(void)
{
    return SERCOM0_USART_FrequencyGet();
}

/*******************************************************************************
 * This function returns frequency  
 ******************************************************************************/
bool APP_SAME54_XPRO_USARTSetup(USART_SERIAL_SETUP * serialSetup, uint32_t clkFrequency)
{
   return SERCOM0_USART_SerialSetup(serialSetup, clkFrequency);
}

/*******************************************************************************
 * This function returns UART Error. 
 ******************************************************************************/
USART_ERROR APP_SAME54_XPRO_USARTErrorGet(void)
{
    return SERCOM0_USART_ErrorGet();
}
/*******************************************************************************
 * This function returns counter value. 
 ******************************************************************************/
uint16_t APP_SAME54_XPRO_Timer16bitCounterGet(void)
{
	return TC3_Timer16bitCounterGet();
}
/*******************************************************************************
 * This function sets the counter value. 
 ******************************************************************************/
void APP_SAME54_XPRO_Timer16bitCounterSet(uint16_t countVal)
{
	TC3_Timer16bitCounterSet(countVal);
}
/*******************************************************************************
 * This function starts the Timer. 
 ******************************************************************************/
void APP_SAME54_XPRO_TimerStart(void)
{
	TC3_TimerStart();
}
/*******************************************************************************
 End of File
 */
