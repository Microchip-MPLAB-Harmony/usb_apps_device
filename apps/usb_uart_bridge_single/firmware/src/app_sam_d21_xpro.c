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
#include "app_sam_d21_xpro.h"

// *****************************************************************************
// *****************************************************************************
// Section: Global Data Definitions
// *****************************************************************************
// *****************************************************************************
// *****************************************************************************
APP_USART_INTERFACE appUSARTInterface =
{
    .addressGet = APP_SAMD21_XPRO_USARTAddressGet,
    .dmaChannelDisbale = APP_SAMD21_XPRO_DmaInterruptDisbale,
    .dmaChannelEnable = APP_SAMD21_XPRO_DmaInterruptEnable,
    .frequencyGet = APP_SAMD21_XPRO_USARTFrequencyGet,
    .serialSetup = APP_SAMD21_XPRO_USARTSetup,
    .errorGet = APP_SAMD21_XPRO_USARTErrorGet
};

// *****************************************************************************
// *****************************************************************************
// Section: APP USART Interface Routines
// *****************************************************************************
// *****************************************************************************
/*******************************************************************************
 * This function return SERCOM peripheral address. 
 ******************************************************************************/
sercom_registers_t * APP_SAMD21_XPRO_USARTAddressGet ( void )
{
     return SERCOM1_REGS;   
}


/*******************************************************************************
 * This function disables the DMA Interrupts. 
 ******************************************************************************/
void APP_SAMD21_XPRO_DmaInterruptDisbale(void)
{
    SYS_INT_SourceDisable(DMAC_IRQn);
}

/*******************************************************************************
 * This function enables the DMA Interrupts. 
 ******************************************************************************/
void APP_SAMD21_XPRO_DmaInterruptEnable(void)
{
    SYS_INT_SourceEnable(DMAC_IRQn);
}

/*******************************************************************************
 * This function returns USART frequency. 
 ******************************************************************************/
uint32_t APP_SAMD21_XPRO_USARTFrequencyGet(void)
{
    return SERCOM1_USART_FrequencyGet();
}

/*******************************************************************************
 * This function returns frequency  
 ******************************************************************************/
bool APP_SAMD21_XPRO_USARTSetup(USART_SERIAL_SETUP * serialSetup, uint32_t clkFrequency)
{
   return SERCOM1_USART_SerialSetup(serialSetup, clkFrequency);
}

/*******************************************************************************
 * This function returns UART Error. 
 ******************************************************************************/
USART_ERROR APP_SAMD21_XPRO_USARTErrorGet(void)
{
    return SERCOM1_USART_ErrorGet();
}
/*******************************************************************************
 End of File
 */
