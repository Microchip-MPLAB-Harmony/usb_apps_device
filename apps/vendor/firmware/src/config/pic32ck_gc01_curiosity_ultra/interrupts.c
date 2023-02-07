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

/* MISRA C-2012 Rule 8.6 deviated below. Deviation record ID -  H3_MISRAC_2012_R_8_6_DR_1 */
extern uint32_t _stack;
extern const H3DeviceVectors exception_table;

extern void Dummy_Handler(void);

/* Brief default interrupt handler for unused IRQs.*/
void __attribute__((optimize("-O1"),section(".text.Dummy_Handler"),long_call, noreturn))Dummy_Handler(void)
{
#if defined(__DEBUG) || defined(__DEBUG_D) && defined(__XC32)
    __builtin_software_breakpoint();
#endif
    while (true)
    {
    }
}

/* MISRAC 2012 deviation block start */
/* MISRA C-2012 Rule 8.6 deviated 161 times.  Deviation record ID -  H3_MISRAC_2012_R_8_6_DR_1 */
/* Device vectors list dummy definition*/
extern void MemoryManagement_Handler   ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void BusFault_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void UsageFault_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SecureFaultMonitor_Handler ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SVCall_Handler             ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void DebugMonitor_Handler       ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void PendSV_Handler             ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SysTick_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void FCR_ERR_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void FCR_FLT_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void FCW_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void PM_Handler                 ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SUPC_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void OSCCTRL_XOSC_Handler       ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void OSCCTRL_DFLL_Handler       ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void OSCCTRL_PLL0_Handler       ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void OSC32KCTRL_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void MCLK_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void FREQM_Handler              ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void WDT_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void EIC_EXTINT_0_Handler       ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void EIC_EXTINT_1_Handler       ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void EIC_EXTINT_2_Handler       ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void EIC_EXTINT_3_Handler       ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void EIC_EXTINT_4_Handler       ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void EIC_EXTINT_5_Handler       ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void EIC_EXTINT_6_Handler       ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void EIC_EXTINT_7_Handler       ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void EIC_EXTINT_8_Handler       ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void EIC_EXTINT_9_Handler       ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void EIC_EXTINT_10_Handler      ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void EIC_EXTINT_11_Handler      ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void EIC_EXTINT_12_Handler      ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void EIC_EXTINT_13_Handler      ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void EIC_EXTINT_14_Handler      ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void EIC_EXTINT_15_Handler      ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void EIC_NSCHK_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void PAC_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TRAM_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void PORT_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void DMA0_PRI0_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void DMA0_PRI1_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void DMA0_PRI2_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void DMA1_PRI0_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void DMA1_PRI1_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void HMATRIX_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void EVSYS_0_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void EVSYS_1_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void EVSYS_2_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void EVSYS_3_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void EVSYS_OTHER_Handler        ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM0_56_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM0_0_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM0_1_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM0_2_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM0_3_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM0_4_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM1_56_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM1_0_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM1_1_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM1_2_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM1_3_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM1_4_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM2_56_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM2_0_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM2_1_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM2_2_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM2_3_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM2_4_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM3_56_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM3_0_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM3_1_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM3_2_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM3_3_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM3_4_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC0_OTHER_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC0_MC_0_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC0_MC_1_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC0_MC_2_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC0_MC_3_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC0_MC_4_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC0_MC_5_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC1_OTHER_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC1_MC_0_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC1_MC_1_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC1_MC_2_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC1_MC_3_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC1_MC_4_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC1_MC_5_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC2_OTHER_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC2_MC_0_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC2_MC_1_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC2_MC_2_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC2_MC_3_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC2_MC_4_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC2_MC_5_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC3_OTHER_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC3_MC_0_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC3_MC_1_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC3_MC_2_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC3_MC_3_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC3_MC_4_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC3_MC_5_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM4_56_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM4_0_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM4_1_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM4_2_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM4_3_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM4_4_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM5_56_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM5_0_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM5_1_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM5_2_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM5_3_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM5_4_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM6_56_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM6_0_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM6_1_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM6_2_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM6_3_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM6_4_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM7_56_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM7_0_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM7_1_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM7_2_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM7_3_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SERCOM7_4_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC4_OTHER_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC4_MC_0_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC4_MC_1_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC5_OTHER_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC5_MC_0_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC5_MC_1_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC6_OTHER_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC6_MC_0_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC6_MC_1_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC7_OTHER_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC7_MC_0_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TCC7_MC_1_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void ADC_0_Handler              ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void ADC_1_Handler              ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void ADC_2_Handler              ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void ADC_3_Handler              ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void ADC_4_Handler              ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void ADC_5_Handler              ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void AC_Handler                 ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void PTC_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SPI_IXS_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void PCC_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void PDEC_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void CAN0_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void CAN1_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void ETH_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SQI_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void TRNG_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SDMMC0_Handler             ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void SDMMC1_Handler             ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void USB_OTHER_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void USB_SOF_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void USB_TRCPT0_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler")));
extern void USB_TRCPT1_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler")));


/* MISRAC 2012 deviation block end */

/* Multiple handlers for vector */



__attribute__ ((section(".vectors")))
const H3DeviceVectors exception_table=
{
    /* Configure Initial Stack Pointer, using linker-generated symbols */
    .pvStack = &_stack,


    .pfnReset_Handler              = Reset_Handler,
    .pfnNonMaskableInt_Handler     = NonMaskableInt_Handler,
    .pfnHardFault_Handler          = HardFault_Handler,
    .pfnMemoryManagement_Handler   = MemoryManagement_Handler,
    .pfnBusFault_Handler           = BusFault_Handler,
    .pfnUsageFault_Handler         = UsageFault_Handler,
    .pfnSecureFaultMonitor_Handler = SecureFaultMonitor_Handler,
    .pfnSVCall_Handler             = SVCall_Handler,
    .pfnDebugMonitor_Handler       = DebugMonitor_Handler,
    .pfnPendSV_Handler             = PendSV_Handler,
    .pfnSysTick_Handler            = SysTick_Handler,
    .pfnFCR_ERR_Handler            = FCR_ERR_Handler,
    .pfnFCR_FLT_Handler            = FCR_FLT_Handler,
    .pfnFCW_Handler                = FCW_Handler,
    .pfnPM_Handler                 = PM_Handler,
    .pfnSUPC_Handler               = SUPC_Handler,
    .pfnOSCCTRL_XOSC_Handler       = OSCCTRL_XOSC_Handler,
    .pfnOSCCTRL_DFLL_Handler       = OSCCTRL_DFLL_Handler,
    .pfnOSCCTRL_PLL0_Handler       = OSCCTRL_PLL0_Handler,
    .pfnOSC32KCTRL_Handler         = OSC32KCTRL_Handler,
    .pfnMCLK_Handler               = MCLK_Handler,
    .pfnFREQM_Handler              = FREQM_Handler,
    .pfnWDT_Handler                = WDT_Handler,
    .pfnRTC_Handler                = RTC_InterruptHandler,
    .pfnEIC_EXTINT_0_Handler       = EIC_EXTINT_0_Handler,
    .pfnEIC_EXTINT_1_Handler       = EIC_EXTINT_1_Handler,
    .pfnEIC_EXTINT_2_Handler       = EIC_EXTINT_2_Handler,
    .pfnEIC_EXTINT_3_Handler       = EIC_EXTINT_3_Handler,
    .pfnEIC_EXTINT_4_Handler       = EIC_EXTINT_4_Handler,
    .pfnEIC_EXTINT_5_Handler       = EIC_EXTINT_5_Handler,
    .pfnEIC_EXTINT_6_Handler       = EIC_EXTINT_6_Handler,
    .pfnEIC_EXTINT_7_Handler       = EIC_EXTINT_7_Handler,
    .pfnEIC_EXTINT_8_Handler       = EIC_EXTINT_8_Handler,
    .pfnEIC_EXTINT_9_Handler       = EIC_EXTINT_9_Handler,
    .pfnEIC_EXTINT_10_Handler      = EIC_EXTINT_10_Handler,
    .pfnEIC_EXTINT_11_Handler      = EIC_EXTINT_11_Handler,
    .pfnEIC_EXTINT_12_Handler      = EIC_EXTINT_12_Handler,
    .pfnEIC_EXTINT_13_Handler      = EIC_EXTINT_13_Handler,
    .pfnEIC_EXTINT_14_Handler      = EIC_EXTINT_14_Handler,
    .pfnEIC_EXTINT_15_Handler      = EIC_EXTINT_15_Handler,
    .pfnEIC_NSCHK_Handler          = EIC_NSCHK_Handler,
    .pfnPAC_Handler                = PAC_Handler,
    .pfnTRAM_Handler               = TRAM_Handler,
    .pfnPORT_Handler               = PORT_Handler,
    .pfnDMA0_PRI0_Handler          = DMA0_PRI0_Handler,
    .pfnDMA0_PRI1_Handler          = DMA0_PRI1_Handler,
    .pfnDMA0_PRI2_Handler          = DMA0_PRI2_Handler,
    .pfnDMA1_PRI0_Handler          = DMA1_PRI0_Handler,
    .pfnDMA1_PRI1_Handler          = DMA1_PRI1_Handler,
    .pfnHMATRIX_Handler            = HMATRIX_Handler,
    .pfnEVSYS_0_Handler            = EVSYS_0_Handler,
    .pfnEVSYS_1_Handler            = EVSYS_1_Handler,
    .pfnEVSYS_2_Handler            = EVSYS_2_Handler,
    .pfnEVSYS_3_Handler            = EVSYS_3_Handler,
    .pfnEVSYS_OTHER_Handler        = EVSYS_OTHER_Handler,
    .pfnSERCOM0_56_Handler         = SERCOM0_56_Handler,
    .pfnSERCOM0_0_Handler          = SERCOM0_0_Handler,
    .pfnSERCOM0_1_Handler          = SERCOM0_1_Handler,
    .pfnSERCOM0_2_Handler          = SERCOM0_2_Handler,
    .pfnSERCOM0_3_Handler          = SERCOM0_3_Handler,
    .pfnSERCOM0_4_Handler          = SERCOM0_4_Handler,
    .pfnSERCOM1_56_Handler         = SERCOM1_56_Handler,
    .pfnSERCOM1_0_Handler          = SERCOM1_0_Handler,
    .pfnSERCOM1_1_Handler          = SERCOM1_1_Handler,
    .pfnSERCOM1_2_Handler          = SERCOM1_2_Handler,
    .pfnSERCOM1_3_Handler          = SERCOM1_3_Handler,
    .pfnSERCOM1_4_Handler          = SERCOM1_4_Handler,
    .pfnSERCOM2_56_Handler         = SERCOM2_56_Handler,
    .pfnSERCOM2_0_Handler          = SERCOM2_0_Handler,
    .pfnSERCOM2_1_Handler          = SERCOM2_1_Handler,
    .pfnSERCOM2_2_Handler          = SERCOM2_2_Handler,
    .pfnSERCOM2_3_Handler          = SERCOM2_3_Handler,
    .pfnSERCOM2_4_Handler          = SERCOM2_4_Handler,
    .pfnSERCOM3_56_Handler         = SERCOM3_56_Handler,
    .pfnSERCOM3_0_Handler          = SERCOM3_0_Handler,
    .pfnSERCOM3_1_Handler          = SERCOM3_1_Handler,
    .pfnSERCOM3_2_Handler          = SERCOM3_2_Handler,
    .pfnSERCOM3_3_Handler          = SERCOM3_3_Handler,
    .pfnSERCOM3_4_Handler          = SERCOM3_4_Handler,
    .pfnTCC0_OTHER_Handler         = TCC0_OTHER_Handler,
    .pfnTCC0_MC_0_Handler          = TCC0_MC_0_Handler,
    .pfnTCC0_MC_1_Handler          = TCC0_MC_1_Handler,
    .pfnTCC0_MC_2_Handler          = TCC0_MC_2_Handler,
    .pfnTCC0_MC_3_Handler          = TCC0_MC_3_Handler,
    .pfnTCC0_MC_4_Handler          = TCC0_MC_4_Handler,
    .pfnTCC0_MC_5_Handler          = TCC0_MC_5_Handler,
    .pfnTCC1_OTHER_Handler         = TCC1_OTHER_Handler,
    .pfnTCC1_MC_0_Handler          = TCC1_MC_0_Handler,
    .pfnTCC1_MC_1_Handler          = TCC1_MC_1_Handler,
    .pfnTCC1_MC_2_Handler          = TCC1_MC_2_Handler,
    .pfnTCC1_MC_3_Handler          = TCC1_MC_3_Handler,
    .pfnTCC1_MC_4_Handler          = TCC1_MC_4_Handler,
    .pfnTCC1_MC_5_Handler          = TCC1_MC_5_Handler,
    .pfnTCC2_OTHER_Handler         = TCC2_OTHER_Handler,
    .pfnTCC2_MC_0_Handler          = TCC2_MC_0_Handler,
    .pfnTCC2_MC_1_Handler          = TCC2_MC_1_Handler,
    .pfnTCC2_MC_2_Handler          = TCC2_MC_2_Handler,
    .pfnTCC2_MC_3_Handler          = TCC2_MC_3_Handler,
    .pfnTCC2_MC_4_Handler          = TCC2_MC_4_Handler,
    .pfnTCC2_MC_5_Handler          = TCC2_MC_5_Handler,
    .pfnTCC3_OTHER_Handler         = TCC3_OTHER_Handler,
    .pfnTCC3_MC_0_Handler          = TCC3_MC_0_Handler,
    .pfnTCC3_MC_1_Handler          = TCC3_MC_1_Handler,
    .pfnTCC3_MC_2_Handler          = TCC3_MC_2_Handler,
    .pfnTCC3_MC_3_Handler          = TCC3_MC_3_Handler,
    .pfnTCC3_MC_4_Handler          = TCC3_MC_4_Handler,
    .pfnTCC3_MC_5_Handler          = TCC3_MC_5_Handler,
    .pfnSERCOM4_56_Handler         = SERCOM4_56_Handler,
    .pfnSERCOM4_0_Handler          = SERCOM4_0_Handler,
    .pfnSERCOM4_1_Handler          = SERCOM4_1_Handler,
    .pfnSERCOM4_2_Handler          = SERCOM4_2_Handler,
    .pfnSERCOM4_3_Handler          = SERCOM4_3_Handler,
    .pfnSERCOM4_4_Handler          = SERCOM4_4_Handler,
    .pfnSERCOM5_56_Handler         = SERCOM5_56_Handler,
    .pfnSERCOM5_0_Handler          = SERCOM5_0_Handler,
    .pfnSERCOM5_1_Handler          = SERCOM5_1_Handler,
    .pfnSERCOM5_2_Handler          = SERCOM5_2_Handler,
    .pfnSERCOM5_3_Handler          = SERCOM5_3_Handler,
    .pfnSERCOM5_4_Handler          = SERCOM5_4_Handler,
    .pfnSERCOM6_56_Handler         = SERCOM6_56_Handler,
    .pfnSERCOM6_0_Handler          = SERCOM6_0_Handler,
    .pfnSERCOM6_1_Handler          = SERCOM6_1_Handler,
    .pfnSERCOM6_2_Handler          = SERCOM6_2_Handler,
    .pfnSERCOM6_3_Handler          = SERCOM6_3_Handler,
    .pfnSERCOM6_4_Handler          = SERCOM6_4_Handler,
    .pfnSERCOM7_56_Handler         = SERCOM7_56_Handler,
    .pfnSERCOM7_0_Handler          = SERCOM7_0_Handler,
    .pfnSERCOM7_1_Handler          = SERCOM7_1_Handler,
    .pfnSERCOM7_2_Handler          = SERCOM7_2_Handler,
    .pfnSERCOM7_3_Handler          = SERCOM7_3_Handler,
    .pfnSERCOM7_4_Handler          = SERCOM7_4_Handler,
    .pfnTCC4_OTHER_Handler         = TCC4_OTHER_Handler,
    .pfnTCC4_MC_0_Handler          = TCC4_MC_0_Handler,
    .pfnTCC4_MC_1_Handler          = TCC4_MC_1_Handler,
    .pfnTCC5_OTHER_Handler         = TCC5_OTHER_Handler,
    .pfnTCC5_MC_0_Handler          = TCC5_MC_0_Handler,
    .pfnTCC5_MC_1_Handler          = TCC5_MC_1_Handler,
    .pfnTCC6_OTHER_Handler         = TCC6_OTHER_Handler,
    .pfnTCC6_MC_0_Handler          = TCC6_MC_0_Handler,
    .pfnTCC6_MC_1_Handler          = TCC6_MC_1_Handler,
    .pfnTCC7_OTHER_Handler         = TCC7_OTHER_Handler,
    .pfnTCC7_MC_0_Handler          = TCC7_MC_0_Handler,
    .pfnTCC7_MC_1_Handler          = TCC7_MC_1_Handler,
    .pfnADC_0_Handler              = ADC_0_Handler,
    .pfnADC_1_Handler              = ADC_1_Handler,
    .pfnADC_2_Handler              = ADC_2_Handler,
    .pfnADC_3_Handler              = ADC_3_Handler,
    .pfnADC_4_Handler              = ADC_4_Handler,
    .pfnADC_5_Handler              = ADC_5_Handler,
    .pfnAC_Handler                 = AC_Handler,
    .pfnPTC_Handler                = PTC_Handler,
    .pfnSPI_IXS_Handler            = SPI_IXS_Handler,
    .pfnPCC_Handler                = PCC_Handler,
    .pfnPDEC_Handler               = PDEC_Handler,
    .pfnCAN0_Handler               = CAN0_Handler,
    .pfnCAN1_Handler               = CAN1_Handler,
    .pfnETH_Handler                = ETH_Handler,
    .pfnSQI_Handler                = SQI_Handler,
    .pfnTRNG_Handler               = TRNG_Handler,
    .pfnSDMMC0_Handler             = SDMMC0_Handler,
    .pfnSDMMC1_Handler             = SDMMC1_Handler,
    .pfnUSB_OTHER_Handler          = USB_OTHER_Handler,
    .pfnUSB_SOF_Handler            = USB_SOF_Handler,
    .pfnUSB_TRCPT0_Handler         = USB_TRCPT0_Handler,
    .pfnUSB_TRCPT1_Handler         = USB_TRCPT1_Handler,
    .pfnUSBHS_Handler              = DRV_USBHS_Handler,


};

/*******************************************************************************
 End of File
*/
