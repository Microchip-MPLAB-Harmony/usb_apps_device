/*******************************************************************************
  MPLAB Harmony Application Header File

  Company:
    Microchip Technology Inc.

  File Name:
    app_sam_d21_xpro.h

  Summary:
    This header file provides prototypes and definitions for the application.

  Description:
    This header file provides function prototypes and data type definitions for
    the application. 
*******************************************************************************/

#ifndef _APP_SAME54_XPRO_H
#define _APP_SAME54_XPRO_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include "configuration.h"
#include "definitions.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

extern "C" {

#endif
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: Function prototypes 
// *****************************************************************************
// *****************************************************************************
// *****************************************************************************
sercom_registers_t * APP_SAME54_XPRO_USARTAddressGet ( void );
void APP_SAME54_XPRO_DmaInterruptDisbale(void);
void APP_SAME54_XPRO_DmaInterruptEnable(void);
uint32_t APP_SAME54_XPRO_USARTFrequencyGet(void);
bool APP_SAME54_XPRO_USARTSetup(USART_SERIAL_SETUP * serialSetup, uint32_t clkFrequency);
USART_ERROR APP_SAME54_XPRO_USARTErrorGet(void);



#endif /* _APP_H */

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

/*******************************************************************************
 End of File
 */

