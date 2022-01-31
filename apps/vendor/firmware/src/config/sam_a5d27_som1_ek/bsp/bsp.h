/*******************************************************************************
  Board Support Package Header File.

  Company:
    Microchip Technology Inc.

  File Name:
    bsp.h

  Summary:
    Board Support Package Header File 

  Description:
    This file contains constants, macros, type definitions and function
    declarations 
*******************************************************************************/

// DOM-IGNORE-BEGIN
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
// DOM-IGNORE-END

#ifndef _BSP_H
#define _BSP_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include "device.h"

// *****************************************************************************
// *****************************************************************************
// Section: BSP Macros
// *****************************************************************************
// *****************************************************************************

#define PIOA_REGS       ((pio_group_registers_t*)(&(PIO_REGS->PIO_GROUP[0])))
#define PIOB_REGS       ((pio_group_registers_t*)(&(PIO_REGS->PIO_GROUP[1])))
#define PIOC_REGS       ((pio_group_registers_t*)(&(PIO_REGS->PIO_GROUP[2])))
#define PIOD_REGS       ((pio_group_registers_t*)(&(PIO_REGS->PIO_GROUP[3])))



/*** LED Macros for LED ***/
#define LED_Toggle() do { PIOB_REGS->PIO_MSKR = (1U<<1); (PIOB_REGS->PIO_ODSR ^= (1U<<1)); } while (0)
#define LED_Get() ((PIOB_REGS->PIO_PDSR >> 1) & 0x1)
#define LED_On() (PIOB_REGS->PIO_SODR = (1U<<1))
#define LED_Off() (PIOB_REGS->PIO_CODR = (1U<<1))
/*** LED Macros for LED_BLUE ***/
#define LED_BLUE_Toggle() do { PIOA_REGS->PIO_MSKR = (1U<<31); (PIOA_REGS->PIO_ODSR ^= (1U<<31)); } while (0)
#define LED_BLUE_Get() ((PIOA_REGS->PIO_PDSR >> 31) & 0x1)
#define LED_BLUE_On() (PIOA_REGS->PIO_SODR = (1U<<31))
#define LED_BLUE_Off() (PIOA_REGS->PIO_CODR = (1U<<31))
/*** LED Macros for LED_RED ***/
#define LED_RED_Toggle() do { PIOA_REGS->PIO_MSKR = (1U<<10); (PIOA_REGS->PIO_ODSR ^= (1U<<10)); } while (0)
#define LED_RED_Get() ((PIOA_REGS->PIO_PDSR >> 10) & 0x1)
#define LED_RED_On() (PIOA_REGS->PIO_SODR = (1U<<10))
#define LED_RED_Off() (PIOA_REGS->PIO_CODR = (1U<<10))
/*** SWITCH Macros for SWITCH ***/
#define SWITCH_Get() ((PIOA_REGS->PIO_PDSR >> 29) & 0x1)
#define SWITCH_STATE_PRESSED 0
#define SWITCH_STATE_RELEASED 1




// *****************************************************************************
// *****************************************************************************
// Section: Interface Routines
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Function:
    void BSP_Initialize(void)

  Summary:
    Performs the necessary actions to initialize a board

  Description:
    This function initializes the LED and Switch ports on the board.  This
    function must be called by the user before using any APIs present on this
    BSP.

  Precondition:
    None.

  Parameters:
    None

  Returns:
    None.

  Example:
    <code>
    //Initialize the BSP
    BSP_Initialize();
    </code>

  Remarks:
    None
*/

void BSP_Initialize(void);

#endif // _BSP_H

/*******************************************************************************
 End of File
*/