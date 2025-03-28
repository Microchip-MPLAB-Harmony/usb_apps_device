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

#ifndef _APP_PIC32CM_GC_CURIOSITY_H
#define _APP_PIC32CM_GC_CURIOSITY_H

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
sercom_registers_t * APP_PIC32CM_GC_CURIOSITY_USARTAddressGet ( void );
void APP_PIC32CM_GC_CURIOSITY_DmaInterruptDisbale(void);
void APP_PIC32CM_GC_CURIOSITY_DmaInterruptEnable(void);
uint32_t APP_PIC32CM_GC_CURIOSITY_USARTFrequencyGet(void);
bool APP_PIC32CM_GC_CURIOSITY_USARTSetup(USART_SERIAL_SETUP * serialSetup, uint32_t clkFrequency);
USART_ERROR APP_PIC32CM_GC_CURIOSITY_USARTErrorGet(void);
volatile uint32_t* APP_PIC32CM_GC_CURIOSITY_USARTDataGet ( void );
uint16_t APP_PIC32CM_GC_CURIOSITY_Timer16bitCounterGet(void);
void APP_PIC32CM_GC_CURIOSITY_Timer16bitCounterSet(uint16_t countVal);
void APP_PIC32CM_GC_CURIOSITY_TimerStart(void);
void U1RTS_Clear(void);
void U1RTS_Set(void);

#endif /* _APP_H */

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

/*******************************************************************************
 End of File
 */

