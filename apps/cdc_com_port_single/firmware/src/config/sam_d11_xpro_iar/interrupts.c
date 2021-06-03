/*******************************************************************************
 System Interrupts File

  Company:
    Microchip Technology Inc.

  File Name:
    interrupt.c

  Summary:
    Interrupt vectors mapping

  Description:
    This file maps all the interrupt vectors to their corresponding
    implementations. If a particular module interrupt is used, then its ISR
    definition can be found in corresponding PLIB source file. If a module
    interrupt is not used, then its ISR implementation is mapped to dummy
    handler.
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

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include "configuration.h"
#include "device_vectors.h"
#include "interrupts.h"
#include "definitions.h"


// *****************************************************************************
// *****************************************************************************
// Section: System Interrupt Vector Functions
// *****************************************************************************
// *****************************************************************************

extern const H3DeviceVectors exception_table;

extern void Dummy_Handler(void);

#pragma section="CSTACK"

void Dummy_Handler( void )
{
    while(true)
    {

    }
}
/* Device vectors list dummy definition*/
extern void SVCall_Handler ( void );
#pragma weak SVCall_Handler=Dummy_Handler
extern void PendSV_Handler ( void );
#pragma weak PendSV_Handler=Dummy_Handler
extern void SysTick_Handler ( void );
#pragma weak SysTick_Handler=Dummy_Handler
extern void PM_Handler ( void );
#pragma weak PM_Handler=Dummy_Handler
extern void SYSCTRL_Handler ( void );
#pragma weak SYSCTRL_Handler=Dummy_Handler
extern void WDT_Handler ( void );
#pragma weak WDT_Handler=Dummy_Handler
extern void RTC_Handler ( void );
#pragma weak RTC_Handler=Dummy_Handler
extern void EIC_Handler ( void );
#pragma weak EIC_Handler=Dummy_Handler
extern void NVMCTRL_Handler ( void );
#pragma weak NVMCTRL_Handler=Dummy_Handler
extern void DMAC_Handler ( void );
#pragma weak DMAC_Handler=Dummy_Handler
extern void EVSYS_Handler ( void );
#pragma weak EVSYS_Handler=Dummy_Handler
extern void SERCOM0_Handler ( void );
#pragma weak SERCOM0_Handler=Dummy_Handler
extern void SERCOM1_Handler ( void );
#pragma weak SERCOM1_Handler=Dummy_Handler
extern void SERCOM2_Handler ( void );
#pragma weak SERCOM2_Handler=Dummy_Handler
extern void TCC0_Handler ( void );
#pragma weak TCC0_Handler=Dummy_Handler
extern void TC1_Handler ( void );
#pragma weak TC1_Handler=Dummy_Handler
extern void TC2_Handler ( void );
#pragma weak TC2_Handler=Dummy_Handler
extern void ADC_Handler ( void );
#pragma weak ADC_Handler=Dummy_Handler
extern void AC_Handler ( void );
#pragma weak AC_Handler=Dummy_Handler
extern void DAC_Handler ( void );
#pragma weak DAC_Handler=Dummy_Handler
extern void PTC_Handler ( void );
#pragma weak PTC_Handler=Dummy_Handler



/* Multiple handlers for vector */



#pragma location = ".intvec"
__root const H3DeviceVectors __vector_table=
{
    /* Configure Initial Stack Pointer, using linker-generated symbols */
    .pvStack = __sfe( "CSTACK" ),

    .pfnReset_Handler              = Reset_Handler,
    .pfnNonMaskableInt_Handler     = NonMaskableInt_Handler,
    .pfnHardFault_Handler          = HardFault_Handler,
    .pfnSVCall_Handler             = SVCall_Handler,
    .pfnPendSV_Handler             = PendSV_Handler,
    .pfnSysTick_Handler            = SysTick_Handler,
    .pfnPM_Handler                 = PM_Handler,
    .pfnSYSCTRL_Handler            = SYSCTRL_Handler,
    .pfnWDT_Handler                = WDT_Handler,
    .pfnRTC_Handler                = RTC_Handler,
    .pfnEIC_Handler                = EIC_Handler,
    .pfnNVMCTRL_Handler            = NVMCTRL_Handler,
    .pfnDMAC_Handler               = DMAC_Handler,
    .pfnUSB_Handler                = DRV_USBFSV1_USB_Handler,
    .pfnEVSYS_Handler              = EVSYS_Handler,
    .pfnSERCOM0_Handler            = SERCOM0_Handler,
    .pfnSERCOM1_Handler            = SERCOM1_Handler,
    .pfnSERCOM2_Handler            = SERCOM2_Handler,
    .pfnTCC0_Handler               = TCC0_Handler,
    .pfnTC1_Handler                = TC1_Handler,
    .pfnTC2_Handler                = TC2_Handler,
    .pfnADC_Handler                = ADC_Handler,
    .pfnAC_Handler                 = AC_Handler,
    .pfnDAC_Handler                = DAC_Handler,
    .pfnPTC_Handler                = PTC_Handler,



};

/*******************************************************************************
 End of File
*/
