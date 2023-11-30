/*******************************************************************************
  System Initialization File

  File Name:
    initialization.c

  Summary:
    This file contains source code necessary to initialize the system.

  Description:
    This file contains source code necessary to initialize the system.  It
    implements the "SYS_Initialize" function, defines the configuration bits,
    and allocates any necessary global system resources,
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
#include "definitions.h"
#include "device.h"


// ****************************************************************************
// ****************************************************************************
// Section: Configuration Bits
// ****************************************************************************
// ****************************************************************************
#pragma config FUSES_USERCFG1_FSEQ_SEQNUM = 0x1U
#pragma config FUSES_USERCFG1_FSEQ_SEQBAR = 0xfffeU
#pragma config FUSES_USERCFG1_AFSEQ_ASEQNUM = 0xffffU
#pragma config FUSES_USERCFG1_AFSEQ_ASEQBAR = 0xffffU
#pragma config FUSES_USERCFG1_FUCFG0_WDT_ENABLE = CLEAR
#pragma config FUSES_USERCFG1_FUCFG0_WDT_WEN = CLEAR
#pragma config FUSES_USERCFG1_FUCFG0_WDT_RUNSTDBY = CLEAR
#pragma config FUSES_USERCFG1_FUCFG0_WDT_ALWAYSON = CLEAR
#pragma config FUSES_USERCFG1_FUCFG0_WDT_PER = 0x0U
#pragma config FUSES_USERCFG1_FUCFG0_WDT_WINDOW = 0x0U
#pragma config FUSES_USERCFG1_FUCFG0_WDT_EWOFFSET = 0x0U
#pragma config FUSES_USERCFG1_FUCFG1_SSXEXDRM = 0xffU
#pragma config FUSES_USERCFG1_FUCFG1_SSXEXEBI = 0xffU
#pragma config FUSES_USERCFG1_FUCFG1_SSXEXSQI0 = 0xffU
#pragma config FUSES_USERCFG1_FUCFG1_SSXEXSQI1 = 0xffU
#pragma config FUSES_USERCFG1_FUCFG2_BOR_HYST = SET
#pragma config FUSES_USERCFG1_FUCFG2_BOR_TRIP = 0x3U
#pragma config FUSES_USERCFG1_FUCFG3_HYST_BOR_VDDIO = SET
#pragma config FUSES_USERCFG1_FUCFG3_BOR_TRIP_VDDIO = 0x3U
#pragma config FUSES_USERCFG1_FUCFG3_HYST_BOR_VDDA = SET
#pragma config FUSES_USERCFG1_FUCFG3_BOR_TRIP_VDDA = 0x3U
#pragma config FUSES_USERCFG1_FUCFG3_HYST_BOR_VDDREG = SET
#pragma config FUSES_USERCFG1_FUCFG5_UCP0 = 0xfU
#pragma config FUSES_USERCFG1_FUCFG5_UCP1 = 0xfU
#pragma config FUSES_USERCFG1_FUCFG5_UCP2 = 0xfU
#pragma config FUSES_USERCFG1_FUCFG5_UCP3 = 0xfU
#pragma config FUSES_USERCFG1_FUCFG6_PFM_ECCCTL = 0x3U
#pragma config FUSES_USERCFG1_FUCFG6_PFM_ECCUNLCK = SET
#pragma config FUSES_USERCFG1_FUCFG7_PFM_TEMP = SET
#pragma config FUSES_USERCFG1_FUCFG8_PFM_UC1WP = CLEAR
#pragma config FUSES_USERCFG1_FUCFG8_PFM_UC2WP = CLEAR
#pragma config FUSES_USERCFG1_FUCFG8_PFM_UC1WPLOCK = CLEAR
#pragma config FUSES_USERCFG1_FUCFG8_PFM_UC2WPLOCK = CLEAR
#pragma config FUSES_USERCFG1_FUCFG9_RAM_INIT_ENB = SET
#pragma config FUSES_USERCFG1_FUCFG9_BISR_RST_EN0 = SET
#pragma config FUSES_USERCFG1_FUCFG16_HSM_PTRMETA0 = 0xffffffffU
#pragma config FUSES_USERCFG1_FUCFG24_HSM_PTRMETA1 = 0xffffffffU
#pragma config FUSES_BOOTCFG1_BLDRCFG_PFM_BCRP = CLEAR
#pragma config FUSES_BOOTCFG1_BLDRCFG_PFM_BCWP = CLEAR
#pragma config FUSES_BOOTCFG1_BLDRCFG_BROM_EN_BFMCHK = NONE
#pragma config FUSES_BOOTCFG1_BLDRCFG_BROM_EN_PLL = CLEAR
#pragma config FUSES_BOOTCFG1_BLDRCFG_BROM_EN_DALUN = SET
#pragma config FUSES_BOOTCFG1_BLDRCFG_BROM_EN_RWLOCKS = SET
#pragma config FUSES_BOOTCFG1_BROM_BSEQ_SEQNUM = 0x1U
#pragma config FUSES_BOOTCFG1_BROM_BSEQ_SEQBAR = 0xfffeU
#pragma config FUSES_BOOTCFG1_BFM_CHK_TABLEPTR_BFM_CHK_TABLEPTR = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_TZ0_CE_ALL0_KEYVAL_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_TZ0_CE_ALL1_KEYVAL_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_TZ0_CE_ALL2_KEYVAL_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_TZ0_CE_ALL3_KEYVAL_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG1_CELOCK_TZ0_CE_ALL0_CELOCK_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG1_CELOCK_TZ0_CE_ALL1_CELOCK_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG1_CELOCK_TZ0_CE_ALL2_CELOCK_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG1_CELOCK_TZ0_CE_ALL3_CELOCK_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_CRCCMD0_KEYVAL_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_CRCCMD1_KEYVAL_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_CRCCMD2_KEYVAL_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_CRCCMD3_KEYVAL_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYCONFIG_CRCCMD0_KEYCONFIG_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYCONFIG_CRCCMD1_KEYCONFIG_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYCONFIG_CRCCMD2_KEYCONFIG_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYCONFIG_CRCCMD3_KEYCONFIG_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_HOSTDALELEV0_KEYVAL_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_HOSTDALELEV1_KEYVAL_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_HOSTDALELEV2_KEYVAL_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYVAL_HOSTDALELEV3_KEYVAL_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYCONFIG_HOSTDALELEV0_KEYCONFIG_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYCONFIG_HOSTDALELEV1_KEYCONFIG_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYCONFIG_HOSTDALELEV2_KEYCONFIG_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG1_KEYCONFIG_HOSTDALELEV3_KEYCONFIG_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG1_ROM_CTRLA_SWRST = SET
#pragma config FUSES_BOOTCFG1_ROM_CTRLA_ENABLE = SET
#pragma config FUSES_BOOTCFG1_ROM_CTRLA_PRMWS = 0x7U
#pragma config FUSES_BOOTCFG1_FCR_CTRLA_ARB = SET
#pragma config FUSES_BOOTCFG1_FCR_CTRLA_FWS = 0xfU
#pragma config FUSES_BOOTCFG1_FCR_CTRLA_ADRWS = SET
#pragma config FUSES_BOOTCFG1_FCR_CTRLA_AUTOWS = SET
#pragma config FUSES_BOOTCFG1_FCR_CTRLA_RDBUFWS = 0xfU
#pragma config FUSES_BOOTCFG1_RPMU_VREGCTRL_VREGOUT = 0x2
#pragma config FUSES_BOOTCFG1_RPMU_VREGCTRL_OFFSTDBY = ON
#pragma config FUSES_BOOTCFG1_RPMU_VREGCTRL_SRAM_VLD = CLEAR
#pragma config FUSES_BOOTCFG1_RPMU_VREGCTRL_BKUP_VLD = CLEAR
#pragma config FUSES_BOOTCFG1_RPMU_VREGCTRL_CPEN = 0x7U
#pragma config FUSES_BOOTCFG1_RPMU_VREGCTRL_ULDOEN = SET
#pragma config FUSES_BOOTCFG1_RPMU_VREGCTRL_ULDOSTDBY = ONINSTDBY
#pragma config FUSES_BOOTCFG1_RPMU_VREGCTRL_ULDOLEVEL = 0x3
#pragma config FUSES_BOOTCFG1_RPMU_VREGCTRL_AVREGEN = PLL_EN
#pragma config FUSES_BOOTCFG1_RPMU_VREGCTRL_AVREGSTDBY = ONINSTDBY
#pragma config FUSES_BOOTCFG1_PLL0_CTRL_ENABLE = SET
#pragma config FUSES_BOOTCFG1_PLL0_CTRL_WRTLOCK = SET
#pragma config FUSES_BOOTCFG1_PLL0_CTRL_ONDEMAND = SET
#pragma config FUSES_BOOTCFG1_PLL0_CTRL_REFSEL = DFLL48M
#pragma config FUSES_BOOTCFG1_PLL0_CTRL_BWSEL = BWSEL7
#pragma config FUSES_BOOTCFG1_PLL0_FBDIV_FBDIV = 0x3ffU
#pragma config FUSES_BOOTCFG1_PLL0_REFDIV_REFDIV = 0x3fU
#pragma config FUSES_BOOTCFG1_PLL0_POSTDIVA_POSTDIV = 0x3fU
#pragma config FUSES_BOOTCFG1_PLL0_POSTDIVA_OUTEN = SET
#pragma config FUSES_BOOTCFG1_MCLK_CLKDIV1_MCLK_CLKDIV1 = 0xffffffffU
#pragma config FUSES_BOOTCFG1_GCLK_GENCTRL0_GCLK_GENCTRL0 = 0xffffffffU
#pragma config FUSES_BOOTCFG1_BROM_BOOTCFGCRC0_BROM_BOOTCFGCRC = 0xffffffffU
#pragma config FUSES_BOOTCFG1_BROM_BOOTCFGCRC1_BROM_BOOTCFGCRC = 0xffffffffU
#pragma config FUSES_BOOTCFG1_BROM_BOOTCFGCRC2_BROM_BOOTCFGCRC = 0xffffffffU
#pragma config FUSES_BOOTCFG1_BROM_BOOTCFGCRC3_BROM_BOOTCFGCRC = 0xffffffffU
#pragma config FUSES_BOOTCFG1_BROM_PAGEEND_BROM_PAGEEND = 0xffffffffU
#pragma config FUSES_USERCFG2_FSEQ_SEQNUM = 0x0U
#pragma config FUSES_USERCFG2_FSEQ_SEQBAR = 0xffffU
#pragma config FUSES_USERCFG2_AFSEQ_ASEQNUM = 0xffffU
#pragma config FUSES_USERCFG2_AFSEQ_ASEQBAR = 0xffffU
#pragma config FUSES_USERCFG2_FUCFG0_WDT_ENABLE = CLEAR
#pragma config FUSES_USERCFG2_FUCFG0_WDT_WEN = SET
#pragma config FUSES_USERCFG2_FUCFG0_WDT_RUNSTDBY = SET
#pragma config FUSES_USERCFG2_FUCFG0_WDT_ALWAYSON = CLEAR
#pragma config FUSES_USERCFG2_FUCFG0_WDT_PER = 0x0U
#pragma config FUSES_USERCFG2_FUCFG0_WDT_WINDOW = 0x0U
#pragma config FUSES_USERCFG2_FUCFG0_WDT_EWOFFSET = 0x0U
#pragma config FUSES_USERCFG2_FUCFG1_SSXEXDRM = 0xffU
#pragma config FUSES_USERCFG2_FUCFG1_SSXEXEBI = 0xffU
#pragma config FUSES_USERCFG2_FUCFG1_SSXEXSQI0 = 0xffU
#pragma config FUSES_USERCFG2_FUCFG1_SSXEXSQI1 = 0xffU
#pragma config FUSES_USERCFG2_FUCFG2_BOR_HYST = SET
#pragma config FUSES_USERCFG2_FUCFG2_BOR_TRIP = 0x3U
#pragma config FUSES_USERCFG2_FUCFG3_HYST_BOR_VDDIO = SET
#pragma config FUSES_USERCFG2_FUCFG3_BOR_TRIP_VDDIO = 0x3U
#pragma config FUSES_USERCFG2_FUCFG3_HYST_BOR_VDDA = SET
#pragma config FUSES_USERCFG2_FUCFG3_BOR_TRIP_VDDA = 0x3U
#pragma config FUSES_USERCFG2_FUCFG3_HYST_BOR_VDDREG = SET
#pragma config FUSES_USERCFG2_FUCFG5_UCP0 = 0xfU
#pragma config FUSES_USERCFG2_FUCFG5_UCP1 = 0xfU
#pragma config FUSES_USERCFG2_FUCFG5_UCP2 = 0xfU
#pragma config FUSES_USERCFG2_FUCFG5_UCP3 = 0xfU
#pragma config FUSES_USERCFG2_FUCFG6_PFM_ECCCTL = 0x3U
#pragma config FUSES_USERCFG2_FUCFG6_PFM_ECCUNLCK = SET
#pragma config FUSES_USERCFG2_FUCFG7_PFM_TEMP = SET
#pragma config FUSES_USERCFG2_FUCFG8_PFM_UC1WP = CLEAR
#pragma config FUSES_USERCFG2_FUCFG8_PFM_UC2WP = CLEAR
#pragma config FUSES_USERCFG2_FUCFG8_PFM_UC1WPLOCK = CLEAR
#pragma config FUSES_USERCFG2_FUCFG8_PFM_UC2WPLOCK = CLEAR
#pragma config FUSES_USERCFG2_FUCFG9_RAM_INIT_ENB = SET
#pragma config FUSES_USERCFG2_FUCFG9_BISR_RST_EN0 = SET
#pragma config FUSES_USERCFG2_FUCFG16_HSM_PTRMETA0 = 0xffffffffU
#pragma config FUSES_USERCFG2_FUCFG24_HSM_PTRMETA1 = 0xffffffffU
#pragma config FUSES_BOOTCFG2_BLDRCFG_PFM_BCRP = CLEAR
#pragma config FUSES_BOOTCFG2_BLDRCFG_PFM_BCWP = CLEAR
#pragma config FUSES_BOOTCFG2_BLDRCFG_BROM_EN_BFMCHK = NONE
#pragma config FUSES_BOOTCFG2_BLDRCFG_BROM_EN_PLL = CLEAR
#pragma config FUSES_BOOTCFG2_BLDRCFG_BROM_EN_DALUN = SET
#pragma config FUSES_BOOTCFG2_BLDRCFG_BROM_EN_RWLOCKS = SET
#pragma config FUSES_BOOTCFG2_BROM_BSEQ_SEQNUM = 0x0U
#pragma config FUSES_BOOTCFG2_BROM_BSEQ_SEQBAR = 0xffffU
#pragma config FUSES_BOOTCFG2_BFM_CHK_TABLEPTR_BFM_CHK_TABLEPTR = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_TZ0_CE_ALL0_KEYVAL_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_TZ0_CE_ALL1_KEYVAL_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_TZ0_CE_ALL2_KEYVAL_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_TZ0_CE_ALL3_KEYVAL_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG2_CELOCK_TZ0_CE_ALL0_CELOCK_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG2_CELOCK_TZ0_CE_ALL1_CELOCK_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG2_CELOCK_TZ0_CE_ALL2_CELOCK_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG2_CELOCK_TZ0_CE_ALL3_CELOCK_TZ0_CE_ALL = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_CRCCMD0_KEYVAL_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_CRCCMD1_KEYVAL_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_CRCCMD2_KEYVAL_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_CRCCMD3_KEYVAL_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYCONFIG_CRCCMD0_KEYCONFIG_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYCONFIG_CRCCMD1_KEYCONFIG_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYCONFIG_CRCCMD2_KEYCONFIG_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYCONFIG_CRCCMD3_KEYCONFIG_CRCCMD = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_HOSTDALELEV0_KEYVAL_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_HOSTDALELEV1_KEYVAL_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_HOSTDALELEV2_KEYVAL_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYVAL_HOSTDALELEV3_KEYVAL_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYCONFIG_HOSTDALELEV0_KEYCONFIG_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYCONFIG_HOSTDALELEV1_KEYCONFIG_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYCONFIG_HOSTDALELEV2_KEYCONFIG_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG2_KEYCONFIG_HOSTDALELEV3_KEYCONFIG_HOSTDALELEV = 0xffffffffU
#pragma config FUSES_BOOTCFG2_ROM_CTRLA_SWRST = SET
#pragma config FUSES_BOOTCFG2_ROM_CTRLA_ENABLE = SET
#pragma config FUSES_BOOTCFG2_ROM_CTRLA_PRMWS = 0x7U
#pragma config FUSES_BOOTCFG2_FCR_CTRLA_ARB = SET
#pragma config FUSES_BOOTCFG2_FCR_CTRLA_FWS = 0xfU
#pragma config FUSES_BOOTCFG2_FCR_CTRLA_ADRWS = SET
#pragma config FUSES_BOOTCFG2_FCR_CTRLA_AUTOWS = SET
#pragma config FUSES_BOOTCFG2_FCR_CTRLA_RDBUFWS = 0xfU
#pragma config FUSES_BOOTCFG2_RPMU_VREGCTRL_VREGOUT = 0x2
#pragma config FUSES_BOOTCFG2_RPMU_VREGCTRL_OFFSTDBY = ON
#pragma config FUSES_BOOTCFG2_RPMU_VREGCTRL_SRAM_VLD = CLEAR
#pragma config FUSES_BOOTCFG2_RPMU_VREGCTRL_BKUP_VLD = CLEAR
#pragma config FUSES_BOOTCFG2_RPMU_VREGCTRL_CPEN = 0x7U
#pragma config FUSES_BOOTCFG2_RPMU_VREGCTRL_ULDOEN = SET
#pragma config FUSES_BOOTCFG2_RPMU_VREGCTRL_ULDOSTDBY = ONINSTDBY
#pragma config FUSES_BOOTCFG2_RPMU_VREGCTRL_ULDOLEVEL = 0x3
#pragma config FUSES_BOOTCFG2_RPMU_VREGCTRL_AVREGEN = PLL_EN
#pragma config FUSES_BOOTCFG2_RPMU_VREGCTRL_AVREGSTDBY = ONINSTDBY
#pragma config FUSES_BOOTCFG2_PLL0_CTRL_ENABLE = SET
#pragma config FUSES_BOOTCFG2_PLL0_CTRL_WRTLOCK = SET
#pragma config FUSES_BOOTCFG2_PLL0_CTRL_ONDEMAND = SET
#pragma config FUSES_BOOTCFG2_PLL0_CTRL_REFSEL = DFLL48M
#pragma config FUSES_BOOTCFG2_PLL0_CTRL_BWSEL = BWSEL7
#pragma config FUSES_BOOTCFG2_PLL0_FBDIV_FBDIV = 0x3ffU
#pragma config FUSES_BOOTCFG2_PLL0_REFDIV_REFDIV = 0x3fU
#pragma config FUSES_BOOTCFG2_PLL0_POSTDIVA_POSTDIV = 0x3fU
#pragma config FUSES_BOOTCFG2_PLL0_POSTDIVA_OUTEN = SET
#pragma config FUSES_BOOTCFG2_MCLK_CLKDIV1_MCLK_CLKDIV1 = 0xffffffffU
#pragma config FUSES_BOOTCFG2_GCLK_GENCTRL0_GCLK_GENCTRL0 = 0xffffffffU
#pragma config FUSES_BOOTCFG2_BROM_BOOTCFGCRC0_BROM_BOOTCFGCRC = 0xffffffffU
#pragma config FUSES_BOOTCFG2_BROM_BOOTCFGCRC1_BROM_BOOTCFGCRC = 0xffffffffU
#pragma config FUSES_BOOTCFG2_BROM_BOOTCFGCRC2_BROM_BOOTCFGCRC = 0xffffffffU
#pragma config FUSES_BOOTCFG2_BROM_BOOTCFGCRC3_BROM_BOOTCFGCRC = 0xffffffffU
#pragma config FUSES_BOOTCFG2_BROM_PAGEEND_BROM_PAGEEND = 0xffffffffU




// *****************************************************************************
// *****************************************************************************
// Section: Driver Initialization Data
// *****************************************************************************
// *****************************************************************************
/* Following MISRA-C rules are deviated in the below code block */
/* MISRA C-2012 Rule 11.1 */
/* MISRA C-2012 Rule 11.3 */
/* MISRA C-2012 Rule 11.8 */
// <editor-fold defaultstate="collapsed" desc="DRV_MEMORY Instance 0 Initialization Data">

static uint8_t gDrvMemory0EraseBuffer[FCW_ERASE_BUFFER_SIZE] CACHE_ALIGN;

static DRV_MEMORY_CLIENT_OBJECT gDrvMemory0ClientObject[DRV_MEMORY_CLIENTS_NUMBER_IDX0];

static DRV_MEMORY_BUFFER_OBJECT gDrvMemory0BufferObject[DRV_MEMORY_BUF_Q_SIZE_IDX0];

static const DRV_MEMORY_DEVICE_INTERFACE drvMemory0DeviceAPI = {
    .Open               = DRV_FCW_Open,
    .Close              = DRV_FCW_Close,
    .Status             = DRV_FCW_Status,
    .SectorErase        = DRV_FCW_SectorErase,
    .Read               = DRV_FCW_Read,
    .PageWrite          = DRV_FCW_PageWrite,
    .EventHandlerSet    = NULL,
    .GeometryGet        = (DRV_MEMORY_DEVICE_GEOMETRY_GET)DRV_FCW_GeometryGet,
    .TransferStatusGet  = (DRV_MEMORY_DEVICE_TRANSFER_STATUS_GET)DRV_FCW_TransferStatusGet
};
static const DRV_MEMORY_INIT drvMemory0InitData =
{
    .memDevIndex                = 0,
    .memoryDevice               = &drvMemory0DeviceAPI,
    .isMemDevInterruptEnabled   = false,
    .isFsEnabled                = false,
    .ewBuffer                   = &gDrvMemory0EraseBuffer[0],
    .clientObjPool              = (uintptr_t)&gDrvMemory0ClientObject[0],
    .bufferObj                  = (uintptr_t)&gDrvMemory0BufferObject[0],
    .queueSize                  = DRV_MEMORY_BUF_Q_SIZE_IDX0,
    .nClientsMax                = DRV_MEMORY_CLIENTS_NUMBER_IDX0
};

// </editor-fold>
// <editor-fold defaultstate="collapsed" desc="DRV_SDMMC Instance 0 Initialization Data">

/* SDMMC Client Objects Pool */
static DRV_SDMMC_CLIENT_OBJ drvSDMMC0ClientObjPool[DRV_SDMMC_IDX0_CLIENTS_NUMBER];

/* SDMMC Transfer Objects Pool */
static DRV_SDMMC_BUFFER_OBJ drvSDMMC0BufferObjPool[DRV_SDMMC_IDX0_QUEUE_SIZE];

static const DRV_SDMMC_PLIB_API drvSDMMC0PlibAPI = {
    .sdhostCallbackRegister = (DRV_SDMMC_PLIB_CALLBACK_REGISTER)SDMMC1_CallbackRegister,
    .sdhostInitModule = (DRV_SDMMC_PLIB_INIT_MODULE)SDMMC1_ModuleInit,
    .sdhostSetClock  = (DRV_SDMMC_PLIB_SET_CLOCK)SDMMC1_ClockSet,
    .sdhostIsCmdLineBusy = (DRV_SDMMC_PLIB_IS_CMD_LINE_BUSY)SDMMC1_IsCmdLineBusy,
    .sdhostIsDatLineBusy = (DRV_SDMMC_PLIB_IS_DATA_LINE_BUSY)SDMMC1_IsDatLineBusy,
    .sdhostSendCommand = (DRV_SDMMC_PLIB_SEND_COMMAND)SDMMC1_CommandSend,
    .sdhostReadResponse = (DRV_SDMMC_PLIB_READ_RESPONSE)SDMMC1_ResponseRead,
    .sdhostSetBlockCount = (DRV_SDMMC_PLIB_SET_BLOCK_COUNT)SDMMC1_BlockCountSet,
    .sdhostSetBlockSize = (DRV_SDMMC_PLIB_SET_BLOCK_SIZE)SDMMC1_BlockSizeSet,
    .sdhostSetBusWidth = (DRV_SDMMC_PLIB_SET_BUS_WIDTH)SDMMC1_BusWidthSet,
    .sdhostSetSpeedMode = (DRV_SDMMC_PLIB_SET_SPEED_MODE)SDMMC1_SpeedModeSet,
    .sdhostSetupDma = (DRV_SDMMC_PLIB_SETUP_DMA)SDMMC1_DmaSetup,
    .sdhostGetCommandError = (DRV_SDMMC_PLIB_GET_COMMAND_ERROR)SDMMC1_CommandErrorGet,
    .sdhostGetDataError = (DRV_SDMMC_PLIB_GET_DATA_ERROR)SDMMC1_DataErrorGet,
    .sdhostClockEnable = (DRV_SDMMC_PLIB_CLOCK_ENABLE)SDMMC1_ClockEnable,
    .sdhostResetError = (DRV_SDMMC_PLIB_RESET_ERROR)SDMMC1_ErrorReset,
    .sdhostIsCardAttached = (DRV_SDMMC_PLIB_IS_CARD_ATTACHED)SDMMC1_IsCardAttached,
    .sdhostIsWriteProtected = (DRV_SDMMC_PLIB_IS_WRITE_PROTECTED)NULL,
};

/*** SDMMC Driver Initialization Data ***/
static const DRV_SDMMC_INIT drvSDMMC0InitData =
{
    .sdmmcPlib                      = &drvSDMMC0PlibAPI,
    .bufferObjPool                  = (uintptr_t)&drvSDMMC0BufferObjPool[0],
    .bufferObjPoolSize              = DRV_SDMMC_IDX0_QUEUE_SIZE,
    .clientObjPool                  = (uintptr_t)&drvSDMMC0ClientObjPool[0],
    .numClients                     = DRV_SDMMC_IDX0_CLIENTS_NUMBER,
    .protocol                       = DRV_SDMMC_IDX0_PROTOCOL_SUPPORT,
    .cardDetectionMethod            = DRV_SDMMC_IDX0_CARD_DETECTION_METHOD,
    .cardDetectionPollingIntervalMs = 0,
    .isWriteProtectCheckEnabled     = false,
    .speedMode                      = DRV_SDMMC_IDX0_CONFIG_SPEED_MODE,
    .busWidth                       = DRV_SDMMC_IDX0_CONFIG_BUS_WIDTH,
	.sleepWhenIdle 					= false,
    .isFsEnabled                    = false,
};
// </editor-fold>




// *****************************************************************************
// *****************************************************************************
// Section: System Data
// *****************************************************************************
// *****************************************************************************
/* Structure to hold the object handles for the modules in the system. */
SYSTEM_OBJECTS sysObj;

// *****************************************************************************
// *****************************************************************************
// Section: Library/Stack Initialization Data
// *****************************************************************************
// *****************************************************************************
/******************************************************
 * USB Driver Initialization
 ******************************************************/

static const DRV_USBHS_INIT drvUSBHSInit0 =
{

    /* Interrupt Source for USB module */
    .interruptSource = USBHS0_IRQn,

    /* Interrupt Source for USB module */
    .interruptSourceUSBDma = USBHS0_IRQn,

    /* System module initialization */
    .moduleInit = {0},

    /* USB Controller to operate as USB Device */
    .operationMode = DRV_USBHS_OPMODE_DEVICE,

    /* Enable High Speed Operation */
    .operationSpeed = USB_SPEED_HIGH,
    
    /* Stop in idle */
    .stopInIdle = true,

    /* Suspend in sleep */
    .suspendInSleep = false,

    /* Identifies peripheral (PLIB-level) ID */
    .usbID = USBHS_ID_0,
    
};




// *****************************************************************************
// *****************************************************************************
// Section: System Initialization
// *****************************************************************************
// *****************************************************************************
// <editor-fold defaultstate="collapsed" desc="SYS_TIME Initialization Data">

static const SYS_TIME_PLIB_INTERFACE sysTimePlibAPI = {
    .timerCallbackSet = (SYS_TIME_PLIB_CALLBACK_REGISTER)SYSTICK_TimerCallbackSet,
    .timerStart = (SYS_TIME_PLIB_START)SYSTICK_TimerStart,
    .timerStop = (SYS_TIME_PLIB_STOP)SYSTICK_TimerStop,
    .timerFrequencyGet = (SYS_TIME_PLIB_FREQUENCY_GET)SYSTICK_TimerFrequencyGet,
    .timerInterruptRestore = (SYS_TIME_PLIB_INTERRUPT_RESTORE)SYSTICK_TimerInterruptRestore,
    .timerInterruptDisable = (SYS_TIME_PLIB_INTERRUPT_DISABLE)SYSTICK_TimerInterruptDisable,
    .timerPeriodSet = (SYS_TIME_PLIB_PERIOD_SET)SYSTICK_TimerPeriodSet,
};

static const SYS_TIME_INIT sysTimeInitData =
{
    .timePlib = &sysTimePlibAPI,
    .hwTimerIntNum = SysTick_IRQn,
};

// </editor-fold>



// *****************************************************************************
// *****************************************************************************
// Section: Local initialization functions
// *****************************************************************************
// *****************************************************************************

/* MISRAC 2012 deviation block end */

/*******************************************************************************
  Function:
    void SYS_Initialize ( void *data )

  Summary:
    Initializes the board, services, drivers, application and other modules.

  Remarks:
 */

void SYS_Initialize ( void* data )
{

    /* MISRAC 2012 deviation block start */
    /* MISRA C-2012 Rule 2.2 deviated in this file.  Deviation record ID -  H3_MISRAC_2012_R_2_2_DR_1 */

  
    PORT_Initialize();

    CLOCK_Initialize();




    FCW_Initialize();

    EVSYS_Initialize();

	SYSTICK_TimerInitialize();
    RTC_Initialize();

	SDMMC1_Initialize();

	BSP_Initialize();


    /* MISRAC 2012 deviation block start */
    /* Following MISRA-C rules deviated in this block  */
    /* MISRA C-2012 Rule 11.3 - Deviation record ID - H3_MISRAC_2012_R_11_3_DR_1 */
    /* MISRA C-2012 Rule 11.8 - Deviation record ID - H3_MISRAC_2012_R_11_8_DR_1 */


    sysObj.drvMemory0 = DRV_MEMORY_Initialize((SYS_MODULE_INDEX)DRV_MEMORY_INDEX_0, (SYS_MODULE_INIT *)&drvMemory0InitData);

   sysObj.drvSDMMC0 = DRV_SDMMC_Initialize(DRV_SDMMC_INDEX_0,(SYS_MODULE_INIT *)&drvSDMMC0InitData);


    /* MISRA C-2012 Rule 11.3, 11.8 deviated below. Deviation record ID -  
    H3_MISRAC_2012_R_11_3_DR_1 & H3_MISRAC_2012_R_11_8_DR_1*/
        
    sysObj.sysTime = SYS_TIME_Initialize(SYS_TIME_INDEX_0, (SYS_MODULE_INIT *)&sysTimeInitData);
    
    /* MISRAC 2012 deviation block end */


    /* Initialize the USB device layer */
    sysObj.usbDevObject0 = USB_DEVICE_Initialize (USB_DEVICE_INDEX_0 , ( SYS_MODULE_INIT* ) & usbDevInitData0);


    /* Initialize USB Driver */ 
    sysObj.drvUSBHSObject0 = DRV_USBHS_Initialize(DRV_USBHS_INDEX_0, (SYS_MODULE_INIT *) &drvUSBHSInit0);    


    /* MISRAC 2012 deviation block end */
    APP_Initialize();


    NVIC_Initialize();


    /* MISRAC 2012 deviation block end */
}

/*******************************************************************************
 End of File
*/
