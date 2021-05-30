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
 End of File
 */
