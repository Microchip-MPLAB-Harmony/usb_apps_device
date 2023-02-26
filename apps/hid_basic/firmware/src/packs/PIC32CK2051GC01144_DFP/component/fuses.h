/*
 * Component description for FUSES
 *
 * Copyright (c) 2022 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* file generated from device description version 2022-11-28T06:54:19Z */
#ifndef _PIC32CKGC01_FUSES_COMPONENT_H_
#define _PIC32CKGC01_FUSES_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR FUSES                                        */
/* ************************************************************************** */

/* -------- FUSES_BFM_CHK_TABLEPTR : (FUSES Offset: 0x08) (R/W 32) BFM CRC Table Pointer -------- */
#define FUSES_BFM_CHK_TABLEPTR_Msk            _UINT32_(0x00000000)                                 /* (FUSES_BFM_CHK_TABLEPTR) Register Mask  */


/* -------- FUSES_BLDRCFG : (FUSES Offset: 0x00) (R/W 32) Bootloader Configuration -------- */
#define FUSES_BLDRCFG_PFM_BCRP_Pos            _UINT32_(0)                                          /* (FUSES_BLDRCFG) Boot Configration Page Read Protect Position */
#define FUSES_BLDRCFG_PFM_BCRP_Msk            (_UINT32_(0x1) << FUSES_BLDRCFG_PFM_BCRP_Pos)        /* (FUSES_BLDRCFG) Boot Configration Page Read Protect Mask */
#define FUSES_BLDRCFG_PFM_BCRP(value)         (FUSES_BLDRCFG_PFM_BCRP_Msk & (_UINT32_(value) << FUSES_BLDRCFG_PFM_BCRP_Pos)) /* Assigment of value for PFM_BCRP in the FUSES_BLDRCFG register */
#define FUSES_BLDRCFG_PFM_BCWP_Pos            _UINT32_(1)                                          /* (FUSES_BLDRCFG) Boot Configration Page Write Protect Position */
#define FUSES_BLDRCFG_PFM_BCWP_Msk            (_UINT32_(0x1) << FUSES_BLDRCFG_PFM_BCWP_Pos)        /* (FUSES_BLDRCFG) Boot Configration Page Write Protect Mask */
#define FUSES_BLDRCFG_PFM_BCWP(value)         (FUSES_BLDRCFG_PFM_BCWP_Msk & (_UINT32_(value) << FUSES_BLDRCFG_PFM_BCWP_Pos)) /* Assigment of value for PFM_BCWP in the FUSES_BLDRCFG register */
#define FUSES_BLDRCFG_BROM_EN_BFMCHK_Pos      _UINT32_(28)                                         /* (FUSES_BLDRCFG) Enable BFM CRC Check Position */
#define FUSES_BLDRCFG_BROM_EN_BFMCHK_Msk      (_UINT32_(0x1) << FUSES_BLDRCFG_BROM_EN_BFMCHK_Pos)  /* (FUSES_BLDRCFG) Enable BFM CRC Check Mask */
#define FUSES_BLDRCFG_BROM_EN_BFMCHK(value)   (FUSES_BLDRCFG_BROM_EN_BFMCHK_Msk & (_UINT32_(value) << FUSES_BLDRCFG_BROM_EN_BFMCHK_Pos)) /* Assigment of value for BROM_EN_BFMCHK in the FUSES_BLDRCFG register */
#define   FUSES_BLDRCFG_BROM_EN_BFMCHK_NONE_Val _UINT32_(0x0)                                        /* (FUSES_BLDRCFG) No verification  */
#define   FUSES_BLDRCFG_BROM_EN_BFMCHK_CRC32_Val _UINT32_(0x1)                                        /* (FUSES_BLDRCFG) Verify using crc32  */
#define FUSES_BLDRCFG_BROM_EN_BFMCHK_NONE     (FUSES_BLDRCFG_BROM_EN_BFMCHK_NONE_Val << FUSES_BLDRCFG_BROM_EN_BFMCHK_Pos) /* (FUSES_BLDRCFG) No verification Position  */
#define FUSES_BLDRCFG_BROM_EN_BFMCHK_CRC32    (FUSES_BLDRCFG_BROM_EN_BFMCHK_CRC32_Val << FUSES_BLDRCFG_BROM_EN_BFMCHK_Pos) /* (FUSES_BLDRCFG) Verify using crc32 Position  */
#define FUSES_BLDRCFG_BROM_EN_PLL_Pos         _UINT32_(29)                                         /* (FUSES_BLDRCFG) Enable PLL (Settings in PLL0_<REGS> are used) Position */
#define FUSES_BLDRCFG_BROM_EN_PLL_Msk         (_UINT32_(0x1) << FUSES_BLDRCFG_BROM_EN_PLL_Pos)     /* (FUSES_BLDRCFG) Enable PLL (Settings in PLL0_<REGS> are used) Mask */
#define FUSES_BLDRCFG_BROM_EN_PLL(value)      (FUSES_BLDRCFG_BROM_EN_PLL_Msk & (_UINT32_(value) << FUSES_BLDRCFG_BROM_EN_PLL_Pos)) /* Assigment of value for BROM_EN_PLL in the FUSES_BLDRCFG register */
#define FUSES_BLDRCFG_BROM_EN_DALUN_Pos       _UINT32_(30)                                         /* (FUSES_BLDRCFG) Enable DAL Unlock Position */
#define FUSES_BLDRCFG_BROM_EN_DALUN_Msk       (_UINT32_(0x1) << FUSES_BLDRCFG_BROM_EN_DALUN_Pos)   /* (FUSES_BLDRCFG) Enable DAL Unlock Mask */
#define FUSES_BLDRCFG_BROM_EN_DALUN(value)    (FUSES_BLDRCFG_BROM_EN_DALUN_Msk & (_UINT32_(value) << FUSES_BLDRCFG_BROM_EN_DALUN_Pos)) /* Assigment of value for BROM_EN_DALUN in the FUSES_BLDRCFG register */
#define FUSES_BLDRCFG_BROM_EN_RWLOCKS_Pos     _UINT32_(31)                                         /* (FUSES_BLDRCFG) Enable Read/Write Locks Position */
#define FUSES_BLDRCFG_BROM_EN_RWLOCKS_Msk     (_UINT32_(0x1) << FUSES_BLDRCFG_BROM_EN_RWLOCKS_Pos) /* (FUSES_BLDRCFG) Enable Read/Write Locks Mask */
#define FUSES_BLDRCFG_BROM_EN_RWLOCKS(value)  (FUSES_BLDRCFG_BROM_EN_RWLOCKS_Msk & (_UINT32_(value) << FUSES_BLDRCFG_BROM_EN_RWLOCKS_Pos)) /* Assigment of value for BROM_EN_RWLOCKS in the FUSES_BLDRCFG register */
#define FUSES_BLDRCFG_Msk                     _UINT32_(0xF0000003)                                 /* (FUSES_BLDRCFG) Register Mask  */


/* -------- FUSES_BROM_BOOTCFGCRC : (FUSES Offset: 0x110) (R/W 32) Boot Configuraiton Page CRC -------- */
#define FUSES_BROM_BOOTCFGCRC_Msk             _UINT32_(0x00000000)                                 /* (FUSES_BROM_BOOTCFGCRC) Register Mask  */


/* -------- FUSES_BROM_BSEQ : (FUSES Offset: 0x04) (R/W 32) Boot Configuraiton Page Sequence Number -------- */
#define FUSES_BROM_BSEQ_SEQNUM_Pos            _UINT32_(0)                                          /* (FUSES_BROM_BSEQ) Sequence Number Position */
#define FUSES_BROM_BSEQ_SEQNUM_Msk            (_UINT32_(0xFFFF) << FUSES_BROM_BSEQ_SEQNUM_Pos)     /* (FUSES_BROM_BSEQ) Sequence Number Mask */
#define FUSES_BROM_BSEQ_SEQNUM(value)         (FUSES_BROM_BSEQ_SEQNUM_Msk & (_UINT32_(value) << FUSES_BROM_BSEQ_SEQNUM_Pos)) /* Assigment of value for SEQNUM in the FUSES_BROM_BSEQ register */
#define FUSES_BROM_BSEQ_SEQBAR_Pos            _UINT32_(16)                                         /* (FUSES_BROM_BSEQ) Sequence Number Bar (Negeated) Position */
#define FUSES_BROM_BSEQ_SEQBAR_Msk            (_UINT32_(0xFFFF) << FUSES_BROM_BSEQ_SEQBAR_Pos)     /* (FUSES_BROM_BSEQ) Sequence Number Bar (Negeated) Mask */
#define FUSES_BROM_BSEQ_SEQBAR(value)         (FUSES_BROM_BSEQ_SEQBAR_Msk & (_UINT32_(value) << FUSES_BROM_BSEQ_SEQBAR_Pos)) /* Assigment of value for SEQBAR in the FUSES_BROM_BSEQ register */
#define FUSES_BROM_BSEQ_Msk                   _UINT32_(0xFFFFFFFF)                                 /* (FUSES_BROM_BSEQ) Register Mask  */


/* -------- FUSES_BROM_PAGEEND : (FUSES Offset: 0x120) (R/W 32) Page End Marker for Verified Data -------- */
#define FUSES_BROM_PAGEEND_Msk                _UINT32_(0x00000000)                                 /* (FUSES_BROM_PAGEEND) Register Mask  */


/* -------- FUSES_CELOCK_TZ0_CE_ALL : (FUSES Offset: 0x90) (R/W 32) Chip Erase Lock for TZ0_ALL -------- */
#define FUSES_CELOCK_TZ0_CE_ALL_Msk           _UINT32_(0x00000000)                                 /* (FUSES_CELOCK_TZ0_CE_ALL) Register Mask  */


/* -------- FUSES_CELOCK_TZ1_CE_ALL : (FUSES Offset: 0x70) (R/W 32) Chip Erase Lock for TZ1_ALL -------- */
#define FUSES_CELOCK_TZ1_CE_ALL_Msk           _UINT32_(0x00000000)                                 /* (FUSES_CELOCK_TZ1_CE_ALL) Register Mask  */


/* -------- FUSES_CELOCK_TZ1_CE_NS : (FUSES Offset: 0x30) (R/W 32) Chip Erase Lock for TZ1_NS -------- */
#define FUSES_CELOCK_TZ1_CE_NS_Msk            _UINT32_(0x00000000)                                 /* (FUSES_CELOCK_TZ1_CE_NS) Register Mask  */


/* -------- FUSES_CELOCK_TZ1_CE_S : (FUSES Offset: 0x50) (R/W 32) Chip Erase Lock for TZ1_S -------- */
#define FUSES_CELOCK_TZ1_CE_S_Msk             _UINT32_(0x00000000)                                 /* (FUSES_CELOCK_TZ1_CE_S) Register Mask  */


/* -------- FUSES_FCR_CTRLA : (FUSES Offset: 0xE4) (R/W 32) FCR CTRLA Settings (BROM_PLLEN must be set) -------- */
#define FUSES_FCR_CTRLA_Msk                   _UINT32_(0x00000000)                                 /* (FUSES_FCR_CTRLA) Register Mask  */


/* -------- FUSES_GCLK_GENCTRL0 : (FUSES Offset: 0x100) (R/W 32) GCLK GENCTRL0 Settings (BROM_PLLEN must be set) -------- */
#define FUSES_GCLK_GENCTRL0_Msk               _UINT32_(0x00000000)                                 /* (FUSES_GCLK_GENCTRL0) Register Mask  */


/* -------- FUSES_KEYCONFIG_CRCCMD : (FUSES Offset: 0xB0) (R/W 32) CRC Access Key Configuration -------- */
#define FUSES_KEYCONFIG_CRCCMD_Msk            _UINT32_(0x00000000)                                 /* (FUSES_KEYCONFIG_CRCCMD) Register Mask  */


/* -------- FUSES_KEYCONFIG_HOSTDALELEV : (FUSES Offset: 0xD0) (R/W 32) Host Authenticated DAL Elevation Key Configuration -------- */
#define FUSES_KEYCONFIG_HOSTDALELEV_Msk       _UINT32_(0x00000000)                                 /* (FUSES_KEYCONFIG_HOSTDALELEV) Register Mask  */


/* -------- FUSES_KEYVAL_CRCCMD : (FUSES Offset: 0xA0) (R/W 32) CRC Access Key -------- */
#define FUSES_KEYVAL_CRCCMD_Msk               _UINT32_(0x00000000)                                 /* (FUSES_KEYVAL_CRCCMD) Register Mask  */


/* -------- FUSES_KEYVAL_HOSTDALELEV : (FUSES Offset: 0xC0) (R/W 32) Host Authenticated DAL Elevation Key -------- */
#define FUSES_KEYVAL_HOSTDALELEV_Msk          _UINT32_(0x00000000)                                 /* (FUSES_KEYVAL_HOSTDALELEV) Register Mask  */


/* -------- FUSES_KEYVAL_TZ0_CE_ALL : (FUSES Offset: 0x80) (R/W 32) Chip Erase Key for TZ0_ALL -------- */
#define FUSES_KEYVAL_TZ0_CE_ALL_Msk           _UINT32_(0x00000000)                                 /* (FUSES_KEYVAL_TZ0_CE_ALL) Register Mask  */


/* -------- FUSES_KEYVAL_TZ1_CE_ALL : (FUSES Offset: 0x60) (R/W 32) Chip Erase Key for TZ1_ALL -------- */
#define FUSES_KEYVAL_TZ1_CE_ALL_Msk           _UINT32_(0x00000000)                                 /* (FUSES_KEYVAL_TZ1_CE_ALL) Register Mask  */


/* -------- FUSES_KEYVAL_TZ1_CE_NS : (FUSES Offset: 0x20) (R/W 32) Chip Erase Key for TZ1_NS -------- */
#define FUSES_KEYVAL_TZ1_CE_NS_Msk            _UINT32_(0x00000000)                                 /* (FUSES_KEYVAL_TZ1_CE_NS) Register Mask  */


/* -------- FUSES_KEYVAL_TZ1_CE_S : (FUSES Offset: 0x40) (R/W 32) Chip Erase Key for TZ1_S -------- */
#define FUSES_KEYVAL_TZ1_CE_S_Msk             _UINT32_(0x00000000)                                 /* (FUSES_KEYVAL_TZ1_CE_S) Register Mask  */


/* -------- FUSES_MCLK_CLKDIV1 : (FUSES Offset: 0xFC) (R/W 32) MCLK CLKDIV1 Settings (BROM_PLLEN must be set) -------- */
#define FUSES_MCLK_CLKDIV1_Msk                _UINT32_(0x00000000)                                 /* (FUSES_MCLK_CLKDIV1) Register Mask  */


/* -------- FUSES_PLL0_CTRL : (FUSES Offset: 0xEC) (R/W 32) PLL0 CTRL Settings (BROM_PLLEN must be set) -------- */
#define FUSES_PLL0_CTRL_Msk                   _UINT32_(0x00000000)                                 /* (FUSES_PLL0_CTRL) Register Mask  */


/* -------- FUSES_PLL0_FBDIV : (FUSES Offset: 0xF0) (R/W 32) PLL0 FBDIV Settings (BROM_PLLEN must be set) -------- */
#define FUSES_PLL0_FBDIV_Msk                  _UINT32_(0x00000000)                                 /* (FUSES_PLL0_FBDIV) Register Mask  */


/* -------- FUSES_PLL0_POSTDIVA : (FUSES Offset: 0xF8) (R/W 32) PLL0 POSTDIVA Settings (BROM_PLLEN must be set) -------- */
#define FUSES_PLL0_POSTDIVA_Msk               _UINT32_(0x00000000)                                 /* (FUSES_PLL0_POSTDIVA) Register Mask  */


/* -------- FUSES_PLL0_REFDIV : (FUSES Offset: 0xF4) (R/W 32) PLL0 REFDIV Settings (BROM_PLLEN must be set) -------- */
#define FUSES_PLL0_REFDIV_Msk                 _UINT32_(0x00000000)                                 /* (FUSES_PLL0_REFDIV) Register Mask  */


/* -------- FUSES_ROM_CTRLA : (FUSES Offset: 0xE0) (R/W 32) ROM CTRLA Settings  (BROM_PLLEN must be set) -------- */
#define FUSES_ROM_CTRLA_Msk                   _UINT32_(0x00000000)                                 /* (FUSES_ROM_CTRLA) Register Mask  */


/* -------- FUSES_RPMU_VREGCTRL : (FUSES Offset: 0xE8) (R/W 32) RPMU VREGCTRL Settings (BROM_PLLEN must be set) -------- */
#define FUSES_RPMU_VREGCTRL_Msk               _UINT32_(0x00000000)                                 /* (FUSES_RPMU_VREGCTRL) Register Mask  */


/* -------- FUSES_DAL : (FUSES Offset: 0x00) (R/W 32) Debug Access Level -------- */
#define FUSES_DAL_RESETVALUE                  _UINT32_(0x00)                                       /*  (FUSES_DAL) Debug Access Level  Reset Value */

#define FUSES_DAL_CPU0_Pos                    _UINT32_(0)                                          /* (FUSES_DAL) Host DAL Elevation Value Position */
#define FUSES_DAL_CPU0_Msk                    (_UINT32_(0xFF) << FUSES_DAL_CPU0_Pos)               /* (FUSES_DAL) Host DAL Elevation Value Mask */
#define FUSES_DAL_CPU0(value)                 (FUSES_DAL_CPU0_Msk & (_UINT32_(value) << FUSES_DAL_CPU0_Pos)) /* Assigment of value for CPU0 in the FUSES_DAL register */
#define   FUSES_DAL_CPU0_DAL0_Val             _UINT32_(0x81)                                       /* (FUSES_DAL) FCW_DAL0_VALUE  */
#define   FUSES_DAL_CPU0_DAL1_Val             _UINT32_(0x99)                                       /* (FUSES_DAL) FCW_DAL1_VALUE  */
#define   FUSES_DAL_CPU0_DAL2_Val             _UINT32_(0xDB)                                       /* (FUSES_DAL) FCW_DAL2_VALUE  */
#define FUSES_DAL_CPU0_DAL0                   (FUSES_DAL_CPU0_DAL0_Val << FUSES_DAL_CPU0_Pos)      /* (FUSES_DAL) FCW_DAL0_VALUE Position  */
#define FUSES_DAL_CPU0_DAL1                   (FUSES_DAL_CPU0_DAL1_Val << FUSES_DAL_CPU0_Pos)      /* (FUSES_DAL) FCW_DAL1_VALUE Position  */
#define FUSES_DAL_CPU0_DAL2                   (FUSES_DAL_CPU0_DAL2_Val << FUSES_DAL_CPU0_Pos)      /* (FUSES_DAL) FCW_DAL2_VALUE Position  */
#define FUSES_DAL_CPU1_Pos                    _UINT32_(8)                                          /* (FUSES_DAL) HSM DAL Elevation Value Position */
#define FUSES_DAL_CPU1_Msk                    (_UINT32_(0xFF) << FUSES_DAL_CPU1_Pos)               /* (FUSES_DAL) HSM DAL Elevation Value Mask */
#define FUSES_DAL_CPU1(value)                 (FUSES_DAL_CPU1_Msk & (_UINT32_(value) << FUSES_DAL_CPU1_Pos)) /* Assigment of value for CPU1 in the FUSES_DAL register */
#define   FUSES_DAL_CPU1_DAL0_Val             _UINT32_(0x81)                                       /* (FUSES_DAL) FCW_DAL0_VALUE  */
#define   FUSES_DAL_CPU1_DAL1_Val             _UINT32_(0x99)                                       /* (FUSES_DAL) FCW_DAL1_VALUE  */
#define   FUSES_DAL_CPU1_DAL2_Val             _UINT32_(0xDB)                                       /* (FUSES_DAL) FCW_DAL2_VALUE  */
#define FUSES_DAL_CPU1_DAL0                   (FUSES_DAL_CPU1_DAL0_Val << FUSES_DAL_CPU1_Pos)      /* (FUSES_DAL) FCW_DAL0_VALUE Position  */
#define FUSES_DAL_CPU1_DAL1                   (FUSES_DAL_CPU1_DAL1_Val << FUSES_DAL_CPU1_Pos)      /* (FUSES_DAL) FCW_DAL1_VALUE Position  */
#define FUSES_DAL_CPU1_DAL2                   (FUSES_DAL_CPU1_DAL2_Val << FUSES_DAL_CPU1_Pos)      /* (FUSES_DAL) FCW_DAL2_VALUE Position  */
#define FUSES_DAL_Msk                         _UINT32_(0x0000FFFF)                                 /* (FUSES_DAL) Register Mask  */


/* -------- FUSES_AFSEQ : (FUSES Offset: 0x20) (R/W 32) Alternate Flash Sequence Number -------- */
#define FUSES_AFSEQ_ASEQNUM_Pos               _UINT32_(0)                                          /* (FUSES_AFSEQ) Alternate Sequence Number Position */
#define FUSES_AFSEQ_ASEQNUM_Msk               (_UINT32_(0xFFFF) << FUSES_AFSEQ_ASEQNUM_Pos)        /* (FUSES_AFSEQ) Alternate Sequence Number Mask */
#define FUSES_AFSEQ_ASEQNUM(value)            (FUSES_AFSEQ_ASEQNUM_Msk & (_UINT32_(value) << FUSES_AFSEQ_ASEQNUM_Pos)) /* Assigment of value for ASEQNUM in the FUSES_AFSEQ register */
#define FUSES_AFSEQ_ASEQBAR_Pos               _UINT32_(16)                                         /* (FUSES_AFSEQ) Alternate Sequence Number Bar (Negeated) Position */
#define FUSES_AFSEQ_ASEQBAR_Msk               (_UINT32_(0xFFFF) << FUSES_AFSEQ_ASEQBAR_Pos)        /* (FUSES_AFSEQ) Alternate Sequence Number Bar (Negeated) Mask */
#define FUSES_AFSEQ_ASEQBAR(value)            (FUSES_AFSEQ_ASEQBAR_Msk & (_UINT32_(value) << FUSES_AFSEQ_ASEQBAR_Pos)) /* Assigment of value for ASEQBAR in the FUSES_AFSEQ register */
#define FUSES_AFSEQ_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (FUSES_AFSEQ) Register Mask  */


/* -------- FUSES_FSEQ : (FUSES Offset: 0x00) (R/W 32) Flash Sequence Number -------- */
#define FUSES_FSEQ_SEQNUM_Pos                 _UINT32_(0)                                          /* (FUSES_FSEQ) Sequence Number Position */
#define FUSES_FSEQ_SEQNUM_Msk                 (_UINT32_(0xFFFF) << FUSES_FSEQ_SEQNUM_Pos)          /* (FUSES_FSEQ) Sequence Number Mask */
#define FUSES_FSEQ_SEQNUM(value)              (FUSES_FSEQ_SEQNUM_Msk & (_UINT32_(value) << FUSES_FSEQ_SEQNUM_Pos)) /* Assigment of value for SEQNUM in the FUSES_FSEQ register */
#define FUSES_FSEQ_SEQBAR_Pos                 _UINT32_(16)                                         /* (FUSES_FSEQ) Sequence Number Bar (Negeated) Position */
#define FUSES_FSEQ_SEQBAR_Msk                 (_UINT32_(0xFFFF) << FUSES_FSEQ_SEQBAR_Pos)          /* (FUSES_FSEQ) Sequence Number Bar (Negeated) Mask */
#define FUSES_FSEQ_SEQBAR(value)              (FUSES_FSEQ_SEQBAR_Msk & (_UINT32_(value) << FUSES_FSEQ_SEQBAR_Pos)) /* Assigment of value for SEQBAR in the FUSES_FSEQ register */
#define FUSES_FSEQ_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (FUSES_FSEQ) Register Mask  */


/* -------- FUSES_FUCFG0 : (FUSES Offset: 0x40) (R/W 32) WDT Configuration -------- */
#define FUSES_FUCFG0_WDT_ENABLE_Pos           _UINT32_(1)                                          /* (FUSES_FUCFG0) Enable Position */
#define FUSES_FUCFG0_WDT_ENABLE_Msk           (_UINT32_(0x1) << FUSES_FUCFG0_WDT_ENABLE_Pos)       /* (FUSES_FUCFG0) Enable Mask */
#define FUSES_FUCFG0_WDT_ENABLE(value)        (FUSES_FUCFG0_WDT_ENABLE_Msk & (_UINT32_(value) << FUSES_FUCFG0_WDT_ENABLE_Pos)) /* Assigment of value for WDT_ENABLE in the FUSES_FUCFG0 register */
#define FUSES_FUCFG0_WDT_WEN_Pos              _UINT32_(2)                                          /* (FUSES_FUCFG0) Window Mode Enable Position */
#define FUSES_FUCFG0_WDT_WEN_Msk              (_UINT32_(0x1) << FUSES_FUCFG0_WDT_WEN_Pos)          /* (FUSES_FUCFG0) Window Mode Enable Mask */
#define FUSES_FUCFG0_WDT_WEN(value)           (FUSES_FUCFG0_WDT_WEN_Msk & (_UINT32_(value) << FUSES_FUCFG0_WDT_WEN_Pos)) /* Assigment of value for WDT_WEN in the FUSES_FUCFG0 register */
#define FUSES_FUCFG0_WDT_RUNSTDBY_Pos         _UINT32_(6)                                          /* (FUSES_FUCFG0) Run in Standby Position */
#define FUSES_FUCFG0_WDT_RUNSTDBY_Msk         (_UINT32_(0x1) << FUSES_FUCFG0_WDT_RUNSTDBY_Pos)     /* (FUSES_FUCFG0) Run in Standby Mask */
#define FUSES_FUCFG0_WDT_RUNSTDBY(value)      (FUSES_FUCFG0_WDT_RUNSTDBY_Msk & (_UINT32_(value) << FUSES_FUCFG0_WDT_RUNSTDBY_Pos)) /* Assigment of value for WDT_RUNSTDBY in the FUSES_FUCFG0 register */
#define FUSES_FUCFG0_WDT_ALWAYSON_Pos         _UINT32_(7)                                          /* (FUSES_FUCFG0) Always On Position */
#define FUSES_FUCFG0_WDT_ALWAYSON_Msk         (_UINT32_(0x1) << FUSES_FUCFG0_WDT_ALWAYSON_Pos)     /* (FUSES_FUCFG0) Always On Mask */
#define FUSES_FUCFG0_WDT_ALWAYSON(value)      (FUSES_FUCFG0_WDT_ALWAYSON_Msk & (_UINT32_(value) << FUSES_FUCFG0_WDT_ALWAYSON_Pos)) /* Assigment of value for WDT_ALWAYSON in the FUSES_FUCFG0 register */
#define FUSES_FUCFG0_WDT_PER_Pos              _UINT32_(8)                                          /* (FUSES_FUCFG0) Time-out Period Position */
#define FUSES_FUCFG0_WDT_PER_Msk              (_UINT32_(0xF) << FUSES_FUCFG0_WDT_PER_Pos)          /* (FUSES_FUCFG0) Time-out Period Mask */
#define FUSES_FUCFG0_WDT_PER(value)           (FUSES_FUCFG0_WDT_PER_Msk & (_UINT32_(value) << FUSES_FUCFG0_WDT_PER_Pos)) /* Assigment of value for WDT_PER in the FUSES_FUCFG0 register */
#define FUSES_FUCFG0_WDT_WINDOW_Pos           _UINT32_(12)                                         /* (FUSES_FUCFG0) Window Mode Time-out Period Position */
#define FUSES_FUCFG0_WDT_WINDOW_Msk           (_UINT32_(0xF) << FUSES_FUCFG0_WDT_WINDOW_Pos)       /* (FUSES_FUCFG0) Window Mode Time-out Period Mask */
#define FUSES_FUCFG0_WDT_WINDOW(value)        (FUSES_FUCFG0_WDT_WINDOW_Msk & (_UINT32_(value) << FUSES_FUCFG0_WDT_WINDOW_Pos)) /* Assigment of value for WDT_WINDOW in the FUSES_FUCFG0 register */
#define FUSES_FUCFG0_WDT_EWOFFSET_Pos         _UINT32_(16)                                         /* (FUSES_FUCFG0) Early Warning Interrupt Time Offset Position */
#define FUSES_FUCFG0_WDT_EWOFFSET_Msk         (_UINT32_(0xF) << FUSES_FUCFG0_WDT_EWOFFSET_Pos)     /* (FUSES_FUCFG0) Early Warning Interrupt Time Offset Mask */
#define FUSES_FUCFG0_WDT_EWOFFSET(value)      (FUSES_FUCFG0_WDT_EWOFFSET_Msk & (_UINT32_(value) << FUSES_FUCFG0_WDT_EWOFFSET_Pos)) /* Assigment of value for WDT_EWOFFSET in the FUSES_FUCFG0 register */
#define FUSES_FUCFG0_Msk                      _UINT32_(0x000FFFC6)                                 /* (FUSES_FUCFG0) Register Mask  */


/* -------- FUSES_FUCFG1 : (FUSES Offset: 0x44) (R/W 32) User Configuration 1 (System Bus Configuration) -------- */
#define FUSES_FUCFG1_Msk                      _UINT32_(0x00000000)                                 /* (FUSES_FUCFG1) Register Mask  */


/* -------- FUSES_FUCFG10 : (FUSES Offset: 0x68) (R/W 32) IDAU_NONSECA -------- */
#define FUSES_FUCFG10_BOOTROM_NONSECA_Pos     _UINT32_(0)                                          /* (FUSES_FUCFG10) BOOTROM NONSECA Position */
#define FUSES_FUCFG10_BOOTROM_NONSECA_Msk     (_UINT32_(0xFFFFFFFF) << FUSES_FUCFG10_BOOTROM_NONSECA_Pos) /* (FUSES_FUCFG10) BOOTROM NONSECA Mask */
#define FUSES_FUCFG10_BOOTROM_NONSECA(value)  (FUSES_FUCFG10_BOOTROM_NONSECA_Msk & (_UINT32_(value) << FUSES_FUCFG10_BOOTROM_NONSECA_Pos)) /* Assigment of value for BOOTROM_NONSECA in the FUSES_FUCFG10 register */
#define FUSES_FUCFG10_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (FUSES_FUCFG10) Register Mask  */


/* -------- FUSES_FUCFG11 : (FUSES Offset: 0x6C) (R/W 32) IDAU_NONSECB -------- */
#define FUSES_FUCFG11_BOOTROM_NONSECB_Pos     _UINT32_(0)                                          /* (FUSES_FUCFG11) BOOTROM NONSECB Position */
#define FUSES_FUCFG11_BOOTROM_NONSECB_Msk     (_UINT32_(0xFFFFFFFF) << FUSES_FUCFG11_BOOTROM_NONSECB_Pos) /* (FUSES_FUCFG11) BOOTROM NONSECB Mask */
#define FUSES_FUCFG11_BOOTROM_NONSECB(value)  (FUSES_FUCFG11_BOOTROM_NONSECB_Msk & (_UINT32_(value) << FUSES_FUCFG11_BOOTROM_NONSECB_Pos)) /* Assigment of value for BOOTROM_NONSECB in the FUSES_FUCFG11 register */
#define FUSES_FUCFG11_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (FUSES_FUCFG11) Register Mask  */


/* -------- FUSES_FUCFG12 : (FUSES Offset: 0x70) (R/W 32) IDAU_NONSECC -------- */
#define FUSES_FUCFG12_BOOTROM_NONSECC_Pos     _UINT32_(0)                                          /* (FUSES_FUCFG12) BOOTROM NONSECC Position */
#define FUSES_FUCFG12_BOOTROM_NONSECC_Msk     (_UINT32_(0xFFFFFFFF) << FUSES_FUCFG12_BOOTROM_NONSECC_Pos) /* (FUSES_FUCFG12) BOOTROM NONSECC Mask */
#define FUSES_FUCFG12_BOOTROM_NONSECC(value)  (FUSES_FUCFG12_BOOTROM_NONSECC_Msk & (_UINT32_(value) << FUSES_FUCFG12_BOOTROM_NONSECC_Pos)) /* Assigment of value for BOOTROM_NONSECC in the FUSES_FUCFG12 register */
#define FUSES_FUCFG12_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (FUSES_FUCFG12) Register Mask  */


/* -------- FUSES_FUCFG13 : (FUSES Offset: 0x74) (R/W 32) IDAU_NONSECAHB -------- */
#define FUSES_FUCFG13_BOOTROM_NONSECAHB_Pos   _UINT32_(0)                                          /* (FUSES_FUCFG13) BOOTROM NONSECAHB Position */
#define FUSES_FUCFG13_BOOTROM_NONSECAHB_Msk   (_UINT32_(0xFFFFFFFF) << FUSES_FUCFG13_BOOTROM_NONSECAHB_Pos) /* (FUSES_FUCFG13) BOOTROM NONSECAHB Mask */
#define FUSES_FUCFG13_BOOTROM_NONSECAHB(value) (FUSES_FUCFG13_BOOTROM_NONSECAHB_Msk & (_UINT32_(value) << FUSES_FUCFG13_BOOTROM_NONSECAHB_Pos)) /* Assigment of value for BOOTROM_NONSECAHB in the FUSES_FUCFG13 register */
#define FUSES_FUCFG13_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (FUSES_FUCFG13) Register Mask  */


/* -------- FUSES_FUCFG14 : (FUSES Offset: 0x78) (R/W 32) PFM IDAU Configuration -------- */
#define FUSES_FUCFG14_ANS_Pos                 _UINT32_(0)                                          /* (FUSES_FUCFG14) Non-secure Flash application size Position */
#define FUSES_FUCFG14_ANS_Msk                 (_UINT32_(0x1FF) << FUSES_FUCFG14_ANS_Pos)           /* (FUSES_FUCFG14) Non-secure Flash application size Mask */
#define FUSES_FUCFG14_ANS(value)              (FUSES_FUCFG14_ANS_Msk & (_UINT32_(value) << FUSES_FUCFG14_ANS_Pos)) /* Assigment of value for ANS in the FUSES_FUCFG14 register */
#define FUSES_FUCFG14_ANSC_Pos                _UINT32_(16)                                         /* (FUSES_FUCFG14) Non-secure callable Flash application size Position */
#define FUSES_FUCFG14_ANSC_Msk                (_UINT32_(0x1) << FUSES_FUCFG14_ANSC_Pos)            /* (FUSES_FUCFG14) Non-secure callable Flash application size Mask */
#define FUSES_FUCFG14_ANSC(value)             (FUSES_FUCFG14_ANSC_Msk & (_UINT32_(value) << FUSES_FUCFG14_ANSC_Pos)) /* Assigment of value for ANSC in the FUSES_FUCFG14 register */
#define FUSES_FUCFG14_Msk                     _UINT32_(0x000101FF)                                 /* (FUSES_FUCFG14) Register Mask  */


/* -------- FUSES_FUCFG15 : (FUSES Offset: 0x7C) (R/W 32) RAM IDAU Configuration -------- */
#define FUSES_FUCFG15_RNS_Pos                 _UINT32_(0)                                          /* (FUSES_FUCFG15) Non-secure RAM size Position */
#define FUSES_FUCFG15_RNS_Msk                 (_UINT32_(0x7F) << FUSES_FUCFG15_RNS_Pos)            /* (FUSES_FUCFG15) Non-secure RAM size Mask */
#define FUSES_FUCFG15_RNS(value)              (FUSES_FUCFG15_RNS_Msk & (_UINT32_(value) << FUSES_FUCFG15_RNS_Pos)) /* Assigment of value for RNS in the FUSES_FUCFG15 register */
#define FUSES_FUCFG15_Msk                     _UINT32_(0x0000007F)                                 /* (FUSES_FUCFG15) Register Mask  */


/* -------- FUSES_FUCFG16 : (FUSES Offset: 0x80) (R/W 32) User Configuration 16 (HSM Firmware Metadata 0 Address) -------- */
#define FUSES_FUCFG16_HSM_PTRMETA0_Pos        _UINT32_(0)                                          /* (FUSES_FUCFG16) HSM Firmware Metadata pointer 0 Position */
#define FUSES_FUCFG16_HSM_PTRMETA0_Msk        (_UINT32_(0xFFFFFFFF) << FUSES_FUCFG16_HSM_PTRMETA0_Pos) /* (FUSES_FUCFG16) HSM Firmware Metadata pointer 0 Mask */
#define FUSES_FUCFG16_HSM_PTRMETA0(value)     (FUSES_FUCFG16_HSM_PTRMETA0_Msk & (_UINT32_(value) << FUSES_FUCFG16_HSM_PTRMETA0_Pos)) /* Assigment of value for HSM_PTRMETA0 in the FUSES_FUCFG16 register */
#define FUSES_FUCFG16_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (FUSES_FUCFG16) Register Mask  */


/* -------- FUSES_FUCFG2 : (FUSES Offset: 0x48) (R/W 32) User Configuration 2 (Deep Sleep SMOR Configuration) -------- */
#define FUSES_FUCFG2_BRCFGUDSSMOR_BOR_HYST_Pos _UINT32_(0)                                          /* (FUSES_FUCFG2) BOT Trip Hystersis Position */
#define FUSES_FUCFG2_BRCFGUDSSMOR_BOR_HYST_Msk (_UINT32_(0x1) << FUSES_FUCFG2_BRCFGUDSSMOR_BOR_HYST_Pos) /* (FUSES_FUCFG2) BOT Trip Hystersis Mask */
#define FUSES_FUCFG2_BRCFGUDSSMOR_BOR_HYST(value) (FUSES_FUCFG2_BRCFGUDSSMOR_BOR_HYST_Msk & (_UINT32_(value) << FUSES_FUCFG2_BRCFGUDSSMOR_BOR_HYST_Pos)) /* Assigment of value for BRCFGUDSSMOR_BOR_HYST in the FUSES_FUCFG2 register */
#define FUSES_FUCFG2_BRCFGUDSSMOR_BOR_TRIP_Pos _UINT32_(1)                                          /* (FUSES_FUCFG2) BOT Trip Points Position */
#define FUSES_FUCFG2_BRCFGUDSSMOR_BOR_TRIP_Msk (_UINT32_(0x3) << FUSES_FUCFG2_BRCFGUDSSMOR_BOR_TRIP_Pos) /* (FUSES_FUCFG2) BOT Trip Points Mask */
#define FUSES_FUCFG2_BRCFGUDSSMOR_BOR_TRIP(value) (FUSES_FUCFG2_BRCFGUDSSMOR_BOR_TRIP_Msk & (_UINT32_(value) << FUSES_FUCFG2_BRCFGUDSSMOR_BOR_TRIP_Pos)) /* Assigment of value for BRCFGUDSSMOR_BOR_TRIP in the FUSES_FUCFG2 register */
#define FUSES_FUCFG2_Msk                      _UINT32_(0x00000007)                                 /* (FUSES_FUCFG2) Register Mask  */


/* -------- FUSES_FUCFG24 : (FUSES Offset: 0xA0) (R/W 32) User Configuration 24 (HSM Firmware Metadata 1 Address) -------- */
#define FUSES_FUCFG24_HSM_PTRMETA1_Pos        _UINT32_(0)                                          /* (FUSES_FUCFG24) HSM Firmware Metadata pointer 1 Position */
#define FUSES_FUCFG24_HSM_PTRMETA1_Msk        (_UINT32_(0xFFFFFFFF) << FUSES_FUCFG24_HSM_PTRMETA1_Pos) /* (FUSES_FUCFG24) HSM Firmware Metadata pointer 1 Mask */
#define FUSES_FUCFG24_HSM_PTRMETA1(value)     (FUSES_FUCFG24_HSM_PTRMETA1_Msk & (_UINT32_(value) << FUSES_FUCFG24_HSM_PTRMETA1_Pos)) /* Assigment of value for HSM_PTRMETA1 in the FUSES_FUCFG24 register */
#define FUSES_FUCFG24_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (FUSES_FUCFG24) Register Mask  */


/* -------- FUSES_FUCFG3 : (FUSES Offset: 0x4C) (R/W 32) User Configuration 2 (SMOR Configuration) -------- */
#define FUSES_FUCFG3_HYST_BOR_VDDIO_Pos       _UINT32_(0)                                          /* (FUSES_FUCFG3) BOR Trip Point Hystersis for VDDIO Position */
#define FUSES_FUCFG3_HYST_BOR_VDDIO_Msk       (_UINT32_(0x1) << FUSES_FUCFG3_HYST_BOR_VDDIO_Pos)   /* (FUSES_FUCFG3) BOR Trip Point Hystersis for VDDIO Mask */
#define FUSES_FUCFG3_HYST_BOR_VDDIO(value)    (FUSES_FUCFG3_HYST_BOR_VDDIO_Msk & (_UINT32_(value) << FUSES_FUCFG3_HYST_BOR_VDDIO_Pos)) /* Assigment of value for HYST_BOR_VDDIO in the FUSES_FUCFG3 register */
#define FUSES_FUCFG3_BOR_TRIP_VDDIO_Pos       _UINT32_(1)                                          /* (FUSES_FUCFG3) BOR Trip Points for VDDIO Position */
#define FUSES_FUCFG3_BOR_TRIP_VDDIO_Msk       (_UINT32_(0x3) << FUSES_FUCFG3_BOR_TRIP_VDDIO_Pos)   /* (FUSES_FUCFG3) BOR Trip Points for VDDIO Mask */
#define FUSES_FUCFG3_BOR_TRIP_VDDIO(value)    (FUSES_FUCFG3_BOR_TRIP_VDDIO_Msk & (_UINT32_(value) << FUSES_FUCFG3_BOR_TRIP_VDDIO_Pos)) /* Assigment of value for BOR_TRIP_VDDIO in the FUSES_FUCFG3 register */
#define FUSES_FUCFG3_HYST_BOR_VDDIOB_Pos      _UINT32_(3)                                          /* (FUSES_FUCFG3) BOR Trip Point Hystersis for VDDIOB Position */
#define FUSES_FUCFG3_HYST_BOR_VDDIOB_Msk      (_UINT32_(0x1) << FUSES_FUCFG3_HYST_BOR_VDDIOB_Pos)  /* (FUSES_FUCFG3) BOR Trip Point Hystersis for VDDIOB Mask */
#define FUSES_FUCFG3_HYST_BOR_VDDIOB(value)   (FUSES_FUCFG3_HYST_BOR_VDDIOB_Msk & (_UINT32_(value) << FUSES_FUCFG3_HYST_BOR_VDDIOB_Pos)) /* Assigment of value for HYST_BOR_VDDIOB in the FUSES_FUCFG3 register */
#define FUSES_FUCFG3_BOR_TRIP_VDDIOB_Pos      _UINT32_(4)                                          /* (FUSES_FUCFG3) BOR Trip Points for VDDIOB Position */
#define FUSES_FUCFG3_BOR_TRIP_VDDIOB_Msk      (_UINT32_(0x3) << FUSES_FUCFG3_BOR_TRIP_VDDIOB_Pos)  /* (FUSES_FUCFG3) BOR Trip Points for VDDIOB Mask */
#define FUSES_FUCFG3_BOR_TRIP_VDDIOB(value)   (FUSES_FUCFG3_BOR_TRIP_VDDIOB_Msk & (_UINT32_(value) << FUSES_FUCFG3_BOR_TRIP_VDDIOB_Pos)) /* Assigment of value for BOR_TRIP_VDDIOB in the FUSES_FUCFG3 register */
#define FUSES_FUCFG3_HYST_BOR_VDDA_Pos        _UINT32_(6)                                          /* (FUSES_FUCFG3) BOR Trip Point Hystersis for VDDANA Position */
#define FUSES_FUCFG3_HYST_BOR_VDDA_Msk        (_UINT32_(0x1) << FUSES_FUCFG3_HYST_BOR_VDDA_Pos)    /* (FUSES_FUCFG3) BOR Trip Point Hystersis for VDDANA Mask */
#define FUSES_FUCFG3_HYST_BOR_VDDA(value)     (FUSES_FUCFG3_HYST_BOR_VDDA_Msk & (_UINT32_(value) << FUSES_FUCFG3_HYST_BOR_VDDA_Pos)) /* Assigment of value for HYST_BOR_VDDA in the FUSES_FUCFG3 register */
#define FUSES_FUCFG3_BOR_TRIP_VDDA_Pos        _UINT32_(7)                                          /* (FUSES_FUCFG3) BOR Trip Points for VDDANA Position */
#define FUSES_FUCFG3_BOR_TRIP_VDDA_Msk        (_UINT32_(0x3) << FUSES_FUCFG3_BOR_TRIP_VDDA_Pos)    /* (FUSES_FUCFG3) BOR Trip Points for VDDANA Mask */
#define FUSES_FUCFG3_BOR_TRIP_VDDA(value)     (FUSES_FUCFG3_BOR_TRIP_VDDA_Msk & (_UINT32_(value) << FUSES_FUCFG3_BOR_TRIP_VDDA_Pos)) /* Assigment of value for BOR_TRIP_VDDA in the FUSES_FUCFG3 register */
#define FUSES_FUCFG3_HYST_BOR_VDDREG_Pos      _UINT32_(10)                                         /* (FUSES_FUCFG3) BOR Trip Point Hystersis for VDDREG Position */
#define FUSES_FUCFG3_HYST_BOR_VDDREG_Msk      (_UINT32_(0x1) << FUSES_FUCFG3_HYST_BOR_VDDREG_Pos)  /* (FUSES_FUCFG3) BOR Trip Point Hystersis for VDDREG Mask */
#define FUSES_FUCFG3_HYST_BOR_VDDREG(value)   (FUSES_FUCFG3_HYST_BOR_VDDREG_Msk & (_UINT32_(value) << FUSES_FUCFG3_HYST_BOR_VDDREG_Pos)) /* Assigment of value for HYST_BOR_VDDREG in the FUSES_FUCFG3 register */
#define FUSES_FUCFG3_Msk                      _UINT32_(0x000005FF)                                 /* (FUSES_FUCFG3) Register Mask  */


/* -------- FUSES_FUCFG5 : (FUSES Offset: 0x54) (R/W 32) User Configuration 5 (VREG Charge Pump Configuration) -------- */
#define FUSES_FUCFG5_RESETVALUE               _UINT32_(0x00)                                       /*  (FUSES_FUCFG5) User Configuration 5 (VREG Charge Pump Configuration)  Reset Value */

#define FUSES_FUCFG5_UCP0_Pos                 _UINT32_(0)                                          /* (FUSES_FUCFG5) User charge pump setting Position */
#define FUSES_FUCFG5_UCP0_Msk                 (_UINT32_(0xF) << FUSES_FUCFG5_UCP0_Pos)             /* (FUSES_FUCFG5) User charge pump setting Mask */
#define FUSES_FUCFG5_UCP0(value)              (FUSES_FUCFG5_UCP0_Msk & (_UINT32_(value) << FUSES_FUCFG5_UCP0_Pos)) /* Assigment of value for UCP0 in the FUSES_FUCFG5 register */
#define FUSES_FUCFG5_UCP1_Pos                 _UINT32_(8)                                          /* (FUSES_FUCFG5) User charge pump setting Position */
#define FUSES_FUCFG5_UCP1_Msk                 (_UINT32_(0xF) << FUSES_FUCFG5_UCP1_Pos)             /* (FUSES_FUCFG5) User charge pump setting Mask */
#define FUSES_FUCFG5_UCP1(value)              (FUSES_FUCFG5_UCP1_Msk & (_UINT32_(value) << FUSES_FUCFG5_UCP1_Pos)) /* Assigment of value for UCP1 in the FUSES_FUCFG5 register */
#define FUSES_FUCFG5_Msk                      _UINT32_(0x00000F0F)                                 /* (FUSES_FUCFG5) Register Mask  */


/* -------- FUSES_FUCFG6 : (FUSES Offset: 0x58) (R/W 32) User Configuration 6 (FCR ECCCTRL Configuration) -------- */
#define FUSES_FUCFG6_PFM_ECCCTL_Pos           _UINT32_(4)                                          /* (FUSES_FUCFG6) ECC Mode Control Position */
#define FUSES_FUCFG6_PFM_ECCCTL_Msk           (_UINT32_(0x3) << FUSES_FUCFG6_PFM_ECCCTL_Pos)       /* (FUSES_FUCFG6) ECC Mode Control Mask */
#define FUSES_FUCFG6_PFM_ECCCTL(value)        (FUSES_FUCFG6_PFM_ECCCTL_Msk & (_UINT32_(value) << FUSES_FUCFG6_PFM_ECCCTL_Pos)) /* Assigment of value for PFM_ECCCTL in the FUSES_FUCFG6 register */
#define FUSES_FUCFG6_PFM_ECCUNLCK_Pos         _UINT32_(6)                                          /* (FUSES_FUCFG6) ECC Mode Control Unlock Position */
#define FUSES_FUCFG6_PFM_ECCUNLCK_Msk         (_UINT32_(0x1) << FUSES_FUCFG6_PFM_ECCUNLCK_Pos)     /* (FUSES_FUCFG6) ECC Mode Control Unlock Mask */
#define FUSES_FUCFG6_PFM_ECCUNLCK(value)      (FUSES_FUCFG6_PFM_ECCUNLCK_Msk & (_UINT32_(value) << FUSES_FUCFG6_PFM_ECCUNLCK_Pos)) /* Assigment of value for PFM_ECCUNLCK in the FUSES_FUCFG6 register */
#define FUSES_FUCFG6_PFM_SECCNT_Pos           _UINT32_(8)                                          /* (FUSES_FUCFG6) Flash SEC Count Position */
#define FUSES_FUCFG6_PFM_SECCNT_Msk           (_UINT32_(0xFF) << FUSES_FUCFG6_PFM_SECCNT_Pos)      /* (FUSES_FUCFG6) Flash SEC Count Mask */
#define FUSES_FUCFG6_PFM_SECCNT(value)        (FUSES_FUCFG6_PFM_SECCNT_Msk & (_UINT32_(value) << FUSES_FUCFG6_PFM_SECCNT_Pos)) /* Assigment of value for PFM_SECCNT in the FUSES_FUCFG6 register */
#define FUSES_FUCFG6_Msk                      _UINT32_(0x0000FF70)                                 /* (FUSES_FUCFG6) Register Mask  */


/* -------- FUSES_FUCFG7 : (FUSES Offset: 0x5C) (R/W 32) User Configuration 7 (FCR CTRLB Configuration) -------- */
#define FUSES_FUCFG7_PFM_TEMP_Pos             _UINT32_(1)                                          /* (FUSES_FUCFG7) NVM Operating Temperature Read Mode Position */
#define FUSES_FUCFG7_PFM_TEMP_Msk             (_UINT32_(0x1) << FUSES_FUCFG7_PFM_TEMP_Pos)         /* (FUSES_FUCFG7) NVM Operating Temperature Read Mode Mask */
#define FUSES_FUCFG7_PFM_TEMP(value)          (FUSES_FUCFG7_PFM_TEMP_Msk & (_UINT32_(value) << FUSES_FUCFG7_PFM_TEMP_Pos)) /* Assigment of value for PFM_TEMP in the FUSES_FUCFG7 register */
#define FUSES_FUCFG7_Msk                      _UINT32_(0x00000002)                                 /* (FUSES_FUCFG7) Register Mask  */


/* -------- FUSES_FUCFG8 : (FUSES Offset: 0x60) (R/W 32) User Configuration 8 (FCW CWP Configuration) -------- */
#define FUSES_FUCFG8_PFM_UC1WP_Pos            _UINT32_(0)                                          /* (FUSES_FUCFG8) User Configuration Page 1 Write Protect Position */
#define FUSES_FUCFG8_PFM_UC1WP_Msk            (_UINT32_(0x1) << FUSES_FUCFG8_PFM_UC1WP_Pos)        /* (FUSES_FUCFG8) User Configuration Page 1 Write Protect Mask */
#define FUSES_FUCFG8_PFM_UC1WP(value)         (FUSES_FUCFG8_PFM_UC1WP_Msk & (_UINT32_(value) << FUSES_FUCFG8_PFM_UC1WP_Pos)) /* Assigment of value for PFM_UC1WP in the FUSES_FUCFG8 register */
#define FUSES_FUCFG8_PFM_UC2WP_Pos            _UINT32_(8)                                          /* (FUSES_FUCFG8) User Configuration Page 2 Write Protect Position */
#define FUSES_FUCFG8_PFM_UC2WP_Msk            (_UINT32_(0x1) << FUSES_FUCFG8_PFM_UC2WP_Pos)        /* (FUSES_FUCFG8) User Configuration Page 2 Write Protect Mask */
#define FUSES_FUCFG8_PFM_UC2WP(value)         (FUSES_FUCFG8_PFM_UC2WP_Msk & (_UINT32_(value) << FUSES_FUCFG8_PFM_UC2WP_Pos)) /* Assigment of value for PFM_UC2WP in the FUSES_FUCFG8 register */
#define FUSES_FUCFG8_PFM_UC1WPLOCK_Pos        _UINT32_(16)                                         /* (FUSES_FUCFG8) User Configuration Page 1 Write Protection Lock Position */
#define FUSES_FUCFG8_PFM_UC1WPLOCK_Msk        (_UINT32_(0x1) << FUSES_FUCFG8_PFM_UC1WPLOCK_Pos)    /* (FUSES_FUCFG8) User Configuration Page 1 Write Protection Lock Mask */
#define FUSES_FUCFG8_PFM_UC1WPLOCK(value)     (FUSES_FUCFG8_PFM_UC1WPLOCK_Msk & (_UINT32_(value) << FUSES_FUCFG8_PFM_UC1WPLOCK_Pos)) /* Assigment of value for PFM_UC1WPLOCK in the FUSES_FUCFG8 register */
#define FUSES_FUCFG8_PFM_UC2WPLOCK_Pos        _UINT32_(24)                                         /* (FUSES_FUCFG8) User Configuration Page 2 Write Protection Lock Position */
#define FUSES_FUCFG8_PFM_UC2WPLOCK_Msk        (_UINT32_(0x1) << FUSES_FUCFG8_PFM_UC2WPLOCK_Pos)    /* (FUSES_FUCFG8) User Configuration Page 2 Write Protection Lock Mask */
#define FUSES_FUCFG8_PFM_UC2WPLOCK(value)     (FUSES_FUCFG8_PFM_UC2WPLOCK_Msk & (_UINT32_(value) << FUSES_FUCFG8_PFM_UC2WPLOCK_Pos)) /* Assigment of value for PFM_UC2WPLOCK in the FUSES_FUCFG8 register */
#define FUSES_FUCFG8_Msk                      _UINT32_(0x01010101)                                 /* (FUSES_FUCFG8) Register Mask  */


/* -------- FUSES_FUCFG9 : (FUSES Offset: 0x64) (R/W 32) User Configuration 9 (RAM BISR and ECC Configuraiton) -------- */
#define FUSES_FUCFG9_Msk                      _UINT32_(0x00000000)                                 /* (FUSES_FUCFG9) Register Mask  */


/** \brief FUSES register offsets definitions */
#define FUSES_BFM_CHK_TABLEPTR_REG_OFST _UINT32_(0x08)      /* (FUSES_BFM_CHK_TABLEPTR) BFM CRC Table Pointer Offset */
#define FUSES_BLDRCFG_REG_OFST         _UINT32_(0x00)      /* (FUSES_BLDRCFG) Bootloader Configuration Offset */
#define FUSES_BROM_BOOTCFGCRC_REG_OFST _UINT32_(0x110)     /* (FUSES_BROM_BOOTCFGCRC) Boot Configuraiton Page CRC Offset */
#define FUSES_BROM_BOOTCFGCRC0_REG_OFST _UINT32_(0x110)     /* (FUSES_BROM_BOOTCFGCRC0) Boot Configuraiton Page CRC Offset */
#define FUSES_BROM_BOOTCFGCRC1_REG_OFST _UINT32_(0x114)     /* (FUSES_BROM_BOOTCFGCRC1) Boot Configuraiton Page CRC Offset */
#define FUSES_BROM_BOOTCFGCRC2_REG_OFST _UINT32_(0x118)     /* (FUSES_BROM_BOOTCFGCRC2) Boot Configuraiton Page CRC Offset */
#define FUSES_BROM_BOOTCFGCRC3_REG_OFST _UINT32_(0x11C)     /* (FUSES_BROM_BOOTCFGCRC3) Boot Configuraiton Page CRC Offset */
#define FUSES_BROM_BSEQ_REG_OFST       _UINT32_(0x04)      /* (FUSES_BROM_BSEQ) Boot Configuraiton Page Sequence Number Offset */
#define FUSES_BROM_PAGEEND_REG_OFST    _UINT32_(0x120)     /* (FUSES_BROM_PAGEEND) Page End Marker for Verified Data Offset */
#define FUSES_CELOCK_TZ0_CE_ALL_REG_OFST _UINT32_(0x90)      /* (FUSES_CELOCK_TZ0_CE_ALL) Chip Erase Lock for TZ0_ALL Offset */
#define FUSES_CELOCK_TZ0_CE_ALL0_REG_OFST _UINT32_(0x90)      /* (FUSES_CELOCK_TZ0_CE_ALL0) Chip Erase Lock for TZ0_ALL Offset */
#define FUSES_CELOCK_TZ0_CE_ALL1_REG_OFST _UINT32_(0x94)      /* (FUSES_CELOCK_TZ0_CE_ALL1) Chip Erase Lock for TZ0_ALL Offset */
#define FUSES_CELOCK_TZ0_CE_ALL2_REG_OFST _UINT32_(0x98)      /* (FUSES_CELOCK_TZ0_CE_ALL2) Chip Erase Lock for TZ0_ALL Offset */
#define FUSES_CELOCK_TZ0_CE_ALL3_REG_OFST _UINT32_(0x9C)      /* (FUSES_CELOCK_TZ0_CE_ALL3) Chip Erase Lock for TZ0_ALL Offset */
#define FUSES_CELOCK_TZ1_CE_ALL_REG_OFST _UINT32_(0x70)      /* (FUSES_CELOCK_TZ1_CE_ALL) Chip Erase Lock for TZ1_ALL Offset */
#define FUSES_CELOCK_TZ1_CE_ALL0_REG_OFST _UINT32_(0x70)      /* (FUSES_CELOCK_TZ1_CE_ALL0) Chip Erase Lock for TZ1_ALL Offset */
#define FUSES_CELOCK_TZ1_CE_ALL1_REG_OFST _UINT32_(0x74)      /* (FUSES_CELOCK_TZ1_CE_ALL1) Chip Erase Lock for TZ1_ALL Offset */
#define FUSES_CELOCK_TZ1_CE_ALL2_REG_OFST _UINT32_(0x78)      /* (FUSES_CELOCK_TZ1_CE_ALL2) Chip Erase Lock for TZ1_ALL Offset */
#define FUSES_CELOCK_TZ1_CE_ALL3_REG_OFST _UINT32_(0x7C)      /* (FUSES_CELOCK_TZ1_CE_ALL3) Chip Erase Lock for TZ1_ALL Offset */
#define FUSES_CELOCK_TZ1_CE_NS_REG_OFST _UINT32_(0x30)      /* (FUSES_CELOCK_TZ1_CE_NS) Chip Erase Lock for TZ1_NS Offset */
#define FUSES_CELOCK_TZ1_CE_NS0_REG_OFST _UINT32_(0x30)      /* (FUSES_CELOCK_TZ1_CE_NS0) Chip Erase Lock for TZ1_NS Offset */
#define FUSES_CELOCK_TZ1_CE_NS1_REG_OFST _UINT32_(0x34)      /* (FUSES_CELOCK_TZ1_CE_NS1) Chip Erase Lock for TZ1_NS Offset */
#define FUSES_CELOCK_TZ1_CE_NS2_REG_OFST _UINT32_(0x38)      /* (FUSES_CELOCK_TZ1_CE_NS2) Chip Erase Lock for TZ1_NS Offset */
#define FUSES_CELOCK_TZ1_CE_NS3_REG_OFST _UINT32_(0x3C)      /* (FUSES_CELOCK_TZ1_CE_NS3) Chip Erase Lock for TZ1_NS Offset */
#define FUSES_CELOCK_TZ1_CE_S_REG_OFST _UINT32_(0x50)      /* (FUSES_CELOCK_TZ1_CE_S) Chip Erase Lock for TZ1_S Offset */
#define FUSES_CELOCK_TZ1_CE_S0_REG_OFST _UINT32_(0x50)      /* (FUSES_CELOCK_TZ1_CE_S0) Chip Erase Lock for TZ1_S Offset */
#define FUSES_CELOCK_TZ1_CE_S1_REG_OFST _UINT32_(0x54)      /* (FUSES_CELOCK_TZ1_CE_S1) Chip Erase Lock for TZ1_S Offset */
#define FUSES_CELOCK_TZ1_CE_S2_REG_OFST _UINT32_(0x58)      /* (FUSES_CELOCK_TZ1_CE_S2) Chip Erase Lock for TZ1_S Offset */
#define FUSES_CELOCK_TZ1_CE_S3_REG_OFST _UINT32_(0x5C)      /* (FUSES_CELOCK_TZ1_CE_S3) Chip Erase Lock for TZ1_S Offset */
#define FUSES_FCR_CTRLA_REG_OFST       _UINT32_(0xE4)      /* (FUSES_FCR_CTRLA) FCR CTRLA Settings (BROM_PLLEN must be set) Offset */
#define FUSES_GCLK_GENCTRL0_REG_OFST   _UINT32_(0x100)     /* (FUSES_GCLK_GENCTRL0) GCLK GENCTRL0 Settings (BROM_PLLEN must be set) Offset */
#define FUSES_KEYCONFIG_CRCCMD_REG_OFST _UINT32_(0xB0)      /* (FUSES_KEYCONFIG_CRCCMD) CRC Access Key Configuration Offset */
#define FUSES_KEYCONFIG_CRCCMD0_REG_OFST _UINT32_(0xB0)      /* (FUSES_KEYCONFIG_CRCCMD0) CRC Access Key Configuration Offset */
#define FUSES_KEYCONFIG_CRCCMD1_REG_OFST _UINT32_(0xB4)      /* (FUSES_KEYCONFIG_CRCCMD1) CRC Access Key Configuration Offset */
#define FUSES_KEYCONFIG_CRCCMD2_REG_OFST _UINT32_(0xB8)      /* (FUSES_KEYCONFIG_CRCCMD2) CRC Access Key Configuration Offset */
#define FUSES_KEYCONFIG_CRCCMD3_REG_OFST _UINT32_(0xBC)      /* (FUSES_KEYCONFIG_CRCCMD3) CRC Access Key Configuration Offset */
#define FUSES_KEYCONFIG_HOSTDALELEV_REG_OFST _UINT32_(0xD0)      /* (FUSES_KEYCONFIG_HOSTDALELEV) Host Authenticated DAL Elevation Key Configuration Offset */
#define FUSES_KEYCONFIG_HOSTDALELEV0_REG_OFST _UINT32_(0xD0)      /* (FUSES_KEYCONFIG_HOSTDALELEV0) Host Authenticated DAL Elevation Key Configuration Offset */
#define FUSES_KEYCONFIG_HOSTDALELEV1_REG_OFST _UINT32_(0xD4)      /* (FUSES_KEYCONFIG_HOSTDALELEV1) Host Authenticated DAL Elevation Key Configuration Offset */
#define FUSES_KEYCONFIG_HOSTDALELEV2_REG_OFST _UINT32_(0xD8)      /* (FUSES_KEYCONFIG_HOSTDALELEV2) Host Authenticated DAL Elevation Key Configuration Offset */
#define FUSES_KEYCONFIG_HOSTDALELEV3_REG_OFST _UINT32_(0xDC)      /* (FUSES_KEYCONFIG_HOSTDALELEV3) Host Authenticated DAL Elevation Key Configuration Offset */
#define FUSES_KEYVAL_CRCCMD_REG_OFST   _UINT32_(0xA0)      /* (FUSES_KEYVAL_CRCCMD) CRC Access Key Offset */
#define FUSES_KEYVAL_CRCCMD0_REG_OFST  _UINT32_(0xA0)      /* (FUSES_KEYVAL_CRCCMD0) CRC Access Key Offset */
#define FUSES_KEYVAL_CRCCMD1_REG_OFST  _UINT32_(0xA4)      /* (FUSES_KEYVAL_CRCCMD1) CRC Access Key Offset */
#define FUSES_KEYVAL_CRCCMD2_REG_OFST  _UINT32_(0xA8)      /* (FUSES_KEYVAL_CRCCMD2) CRC Access Key Offset */
#define FUSES_KEYVAL_CRCCMD3_REG_OFST  _UINT32_(0xAC)      /* (FUSES_KEYVAL_CRCCMD3) CRC Access Key Offset */
#define FUSES_KEYVAL_HOSTDALELEV_REG_OFST _UINT32_(0xC0)      /* (FUSES_KEYVAL_HOSTDALELEV) Host Authenticated DAL Elevation Key Offset */
#define FUSES_KEYVAL_HOSTDALELEV0_REG_OFST _UINT32_(0xC0)      /* (FUSES_KEYVAL_HOSTDALELEV0) Host Authenticated DAL Elevation Key Offset */
#define FUSES_KEYVAL_HOSTDALELEV1_REG_OFST _UINT32_(0xC4)      /* (FUSES_KEYVAL_HOSTDALELEV1) Host Authenticated DAL Elevation Key Offset */
#define FUSES_KEYVAL_HOSTDALELEV2_REG_OFST _UINT32_(0xC8)      /* (FUSES_KEYVAL_HOSTDALELEV2) Host Authenticated DAL Elevation Key Offset */
#define FUSES_KEYVAL_HOSTDALELEV3_REG_OFST _UINT32_(0xCC)      /* (FUSES_KEYVAL_HOSTDALELEV3) Host Authenticated DAL Elevation Key Offset */
#define FUSES_KEYVAL_TZ0_CE_ALL_REG_OFST _UINT32_(0x80)      /* (FUSES_KEYVAL_TZ0_CE_ALL) Chip Erase Key for TZ0_ALL Offset */
#define FUSES_KEYVAL_TZ0_CE_ALL0_REG_OFST _UINT32_(0x80)      /* (FUSES_KEYVAL_TZ0_CE_ALL0) Chip Erase Key for TZ0_ALL Offset */
#define FUSES_KEYVAL_TZ0_CE_ALL1_REG_OFST _UINT32_(0x84)      /* (FUSES_KEYVAL_TZ0_CE_ALL1) Chip Erase Key for TZ0_ALL Offset */
#define FUSES_KEYVAL_TZ0_CE_ALL2_REG_OFST _UINT32_(0x88)      /* (FUSES_KEYVAL_TZ0_CE_ALL2) Chip Erase Key for TZ0_ALL Offset */
#define FUSES_KEYVAL_TZ0_CE_ALL3_REG_OFST _UINT32_(0x8C)      /* (FUSES_KEYVAL_TZ0_CE_ALL3) Chip Erase Key for TZ0_ALL Offset */
#define FUSES_KEYVAL_TZ1_CE_ALL_REG_OFST _UINT32_(0x60)      /* (FUSES_KEYVAL_TZ1_CE_ALL) Chip Erase Key for TZ1_ALL Offset */
#define FUSES_KEYVAL_TZ1_CE_ALL0_REG_OFST _UINT32_(0x60)      /* (FUSES_KEYVAL_TZ1_CE_ALL0) Chip Erase Key for TZ1_ALL Offset */
#define FUSES_KEYVAL_TZ1_CE_ALL1_REG_OFST _UINT32_(0x64)      /* (FUSES_KEYVAL_TZ1_CE_ALL1) Chip Erase Key for TZ1_ALL Offset */
#define FUSES_KEYVAL_TZ1_CE_ALL2_REG_OFST _UINT32_(0x68)      /* (FUSES_KEYVAL_TZ1_CE_ALL2) Chip Erase Key for TZ1_ALL Offset */
#define FUSES_KEYVAL_TZ1_CE_ALL3_REG_OFST _UINT32_(0x6C)      /* (FUSES_KEYVAL_TZ1_CE_ALL3) Chip Erase Key for TZ1_ALL Offset */
#define FUSES_KEYVAL_TZ1_CE_NS_REG_OFST _UINT32_(0x20)      /* (FUSES_KEYVAL_TZ1_CE_NS) Chip Erase Key for TZ1_NS Offset */
#define FUSES_KEYVAL_TZ1_CE_NS0_REG_OFST _UINT32_(0x20)      /* (FUSES_KEYVAL_TZ1_CE_NS0) Chip Erase Key for TZ1_NS Offset */
#define FUSES_KEYVAL_TZ1_CE_NS1_REG_OFST _UINT32_(0x24)      /* (FUSES_KEYVAL_TZ1_CE_NS1) Chip Erase Key for TZ1_NS Offset */
#define FUSES_KEYVAL_TZ1_CE_NS2_REG_OFST _UINT32_(0x28)      /* (FUSES_KEYVAL_TZ1_CE_NS2) Chip Erase Key for TZ1_NS Offset */
#define FUSES_KEYVAL_TZ1_CE_NS3_REG_OFST _UINT32_(0x2C)      /* (FUSES_KEYVAL_TZ1_CE_NS3) Chip Erase Key for TZ1_NS Offset */
#define FUSES_KEYVAL_TZ1_CE_S_REG_OFST _UINT32_(0x40)      /* (FUSES_KEYVAL_TZ1_CE_S) Chip Erase Key for TZ1_S Offset */
#define FUSES_KEYVAL_TZ1_CE_S0_REG_OFST _UINT32_(0x40)      /* (FUSES_KEYVAL_TZ1_CE_S0) Chip Erase Key for TZ1_S Offset */
#define FUSES_KEYVAL_TZ1_CE_S1_REG_OFST _UINT32_(0x44)      /* (FUSES_KEYVAL_TZ1_CE_S1) Chip Erase Key for TZ1_S Offset */
#define FUSES_KEYVAL_TZ1_CE_S2_REG_OFST _UINT32_(0x48)      /* (FUSES_KEYVAL_TZ1_CE_S2) Chip Erase Key for TZ1_S Offset */
#define FUSES_KEYVAL_TZ1_CE_S3_REG_OFST _UINT32_(0x4C)      /* (FUSES_KEYVAL_TZ1_CE_S3) Chip Erase Key for TZ1_S Offset */
#define FUSES_MCLK_CLKDIV1_REG_OFST    _UINT32_(0xFC)      /* (FUSES_MCLK_CLKDIV1) MCLK CLKDIV1 Settings (BROM_PLLEN must be set) Offset */
#define FUSES_PLL0_CTRL_REG_OFST       _UINT32_(0xEC)      /* (FUSES_PLL0_CTRL) PLL0 CTRL Settings (BROM_PLLEN must be set) Offset */
#define FUSES_PLL0_FBDIV_REG_OFST      _UINT32_(0xF0)      /* (FUSES_PLL0_FBDIV) PLL0 FBDIV Settings (BROM_PLLEN must be set) Offset */
#define FUSES_PLL0_POSTDIVA_REG_OFST   _UINT32_(0xF8)      /* (FUSES_PLL0_POSTDIVA) PLL0 POSTDIVA Settings (BROM_PLLEN must be set) Offset */
#define FUSES_PLL0_REFDIV_REG_OFST     _UINT32_(0xF4)      /* (FUSES_PLL0_REFDIV) PLL0 REFDIV Settings (BROM_PLLEN must be set) Offset */
#define FUSES_ROM_CTRLA_REG_OFST       _UINT32_(0xE0)      /* (FUSES_ROM_CTRLA) ROM CTRLA Settings  (BROM_PLLEN must be set) Offset */
#define FUSES_RPMU_VREGCTRL_REG_OFST   _UINT32_(0xE8)      /* (FUSES_RPMU_VREGCTRL) RPMU VREGCTRL Settings (BROM_PLLEN must be set) Offset */
#define FUSES_DAL_REG_OFST             _UINT32_(0x00)      /* (FUSES_DAL) Debug Access Level Offset */
#define FUSES_AFSEQ_REG_OFST           _UINT32_(0x20)      /* (FUSES_AFSEQ) Alternate Flash Sequence Number Offset */
#define FUSES_AFSEQ0_REG_OFST          _UINT32_(0x20)      /* (FUSES_AFSEQ0) Alternate Flash Sequence Number Offset */
#define FUSES_AFSEQ1_REG_OFST          _UINT32_(0x24)      /* (FUSES_AFSEQ1) Alternate Flash Sequence Number Offset */
#define FUSES_AFSEQ2_REG_OFST          _UINT32_(0x28)      /* (FUSES_AFSEQ2) Alternate Flash Sequence Number Offset */
#define FUSES_AFSEQ3_REG_OFST          _UINT32_(0x2C)      /* (FUSES_AFSEQ3) Alternate Flash Sequence Number Offset */
#define FUSES_AFSEQ4_REG_OFST          _UINT32_(0x30)      /* (FUSES_AFSEQ4) Alternate Flash Sequence Number Offset */
#define FUSES_AFSEQ5_REG_OFST          _UINT32_(0x34)      /* (FUSES_AFSEQ5) Alternate Flash Sequence Number Offset */
#define FUSES_AFSEQ6_REG_OFST          _UINT32_(0x38)      /* (FUSES_AFSEQ6) Alternate Flash Sequence Number Offset */
#define FUSES_AFSEQ7_REG_OFST          _UINT32_(0x3C)      /* (FUSES_AFSEQ7) Alternate Flash Sequence Number Offset */
#define FUSES_FSEQ_REG_OFST            _UINT32_(0x00)      /* (FUSES_FSEQ) Flash Sequence Number Offset */
#define FUSES_FSEQ0_REG_OFST           _UINT32_(0x00)      /* (FUSES_FSEQ0) Flash Sequence Number Offset */
#define FUSES_FSEQ1_REG_OFST           _UINT32_(0x04)      /* (FUSES_FSEQ1) Flash Sequence Number Offset */
#define FUSES_FSEQ2_REG_OFST           _UINT32_(0x08)      /* (FUSES_FSEQ2) Flash Sequence Number Offset */
#define FUSES_FSEQ3_REG_OFST           _UINT32_(0x0C)      /* (FUSES_FSEQ3) Flash Sequence Number Offset */
#define FUSES_FSEQ4_REG_OFST           _UINT32_(0x10)      /* (FUSES_FSEQ4) Flash Sequence Number Offset */
#define FUSES_FSEQ5_REG_OFST           _UINT32_(0x14)      /* (FUSES_FSEQ5) Flash Sequence Number Offset */
#define FUSES_FSEQ6_REG_OFST           _UINT32_(0x18)      /* (FUSES_FSEQ6) Flash Sequence Number Offset */
#define FUSES_FSEQ7_REG_OFST           _UINT32_(0x1C)      /* (FUSES_FSEQ7) Flash Sequence Number Offset */
#define FUSES_FUCFG0_REG_OFST          _UINT32_(0x40)      /* (FUSES_FUCFG0) WDT Configuration Offset */
#define FUSES_FUCFG1_REG_OFST          _UINT32_(0x44)      /* (FUSES_FUCFG1) User Configuration 1 (System Bus Configuration) Offset */
#define FUSES_FUCFG10_REG_OFST         _UINT32_(0x68)      /* (FUSES_FUCFG10) IDAU_NONSECA Offset */
#define FUSES_FUCFG11_REG_OFST         _UINT32_(0x6C)      /* (FUSES_FUCFG11) IDAU_NONSECB Offset */
#define FUSES_FUCFG12_REG_OFST         _UINT32_(0x70)      /* (FUSES_FUCFG12) IDAU_NONSECC Offset */
#define FUSES_FUCFG13_REG_OFST         _UINT32_(0x74)      /* (FUSES_FUCFG13) IDAU_NONSECAHB Offset */
#define FUSES_FUCFG14_REG_OFST         _UINT32_(0x78)      /* (FUSES_FUCFG14) PFM IDAU Configuration Offset */
#define FUSES_FUCFG15_REG_OFST         _UINT32_(0x7C)      /* (FUSES_FUCFG15) RAM IDAU Configuration Offset */
#define FUSES_FUCFG16_REG_OFST         _UINT32_(0x80)      /* (FUSES_FUCFG16) User Configuration 16 (HSM Firmware Metadata 0 Address) Offset */
#define FUSES_FUCFG2_REG_OFST          _UINT32_(0x48)      /* (FUSES_FUCFG2) User Configuration 2 (Deep Sleep SMOR Configuration) Offset */
#define FUSES_FUCFG24_REG_OFST         _UINT32_(0xA0)      /* (FUSES_FUCFG24) User Configuration 24 (HSM Firmware Metadata 1 Address) Offset */
#define FUSES_FUCFG3_REG_OFST          _UINT32_(0x4C)      /* (FUSES_FUCFG3) User Configuration 2 (SMOR Configuration) Offset */
#define FUSES_FUCFG5_REG_OFST          _UINT32_(0x54)      /* (FUSES_FUCFG5) User Configuration 5 (VREG Charge Pump Configuration) Offset */
#define FUSES_FUCFG6_REG_OFST          _UINT32_(0x58)      /* (FUSES_FUCFG6) User Configuration 6 (FCR ECCCTRL Configuration) Offset */
#define FUSES_FUCFG7_REG_OFST          _UINT32_(0x5C)      /* (FUSES_FUCFG7) User Configuration 7 (FCR CTRLB Configuration) Offset */
#define FUSES_FUCFG8_REG_OFST          _UINT32_(0x60)      /* (FUSES_FUCFG8) User Configuration 8 (FCW CWP Configuration) Offset */
#define FUSES_FUCFG9_REG_OFST          _UINT32_(0x64)      /* (FUSES_FUCFG9) User Configuration 9 (RAM BISR and ECC Configuraiton) Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief FUSES_BOOTCFG1 register API structure */
typedef struct
{  /* Defines FUSE parameters */
  __IO  uint32_t                       FUSES_BLDRCFG;      /**< Offset: 0x00 (R/W  32) Bootloader Configuration */
  __IO  uint32_t                       FUSES_BROM_BSEQ;    /**< Offset: 0x04 (R/W  32) Boot Configuraiton Page Sequence Number */
  __IO  uint32_t                       FUSES_BFM_CHK_TABLEPTR; /**< Offset: 0x08 (R/W  32) BFM CRC Table Pointer */
  __I   uint8_t                        Reserved1[0x14];
  __IO  uint32_t                       FUSES_KEYVAL_TZ1_CE_NS[4]; /**< Offset: 0x20 (R/W  32) Chip Erase Key for TZ1_NS */
  __IO  uint32_t                       FUSES_CELOCK_TZ1_CE_NS[4]; /**< Offset: 0x30 (R/W  32) Chip Erase Lock for TZ1_NS */
  __IO  uint32_t                       FUSES_KEYVAL_TZ1_CE_S[4]; /**< Offset: 0x40 (R/W  32) Chip Erase Key for TZ1_S */
  __IO  uint32_t                       FUSES_CELOCK_TZ1_CE_S[4]; /**< Offset: 0x50 (R/W  32) Chip Erase Lock for TZ1_S */
  __IO  uint32_t                       FUSES_KEYVAL_TZ1_CE_ALL[4]; /**< Offset: 0x60 (R/W  32) Chip Erase Key for TZ1_ALL */
  __IO  uint32_t                       FUSES_CELOCK_TZ1_CE_ALL[4]; /**< Offset: 0x70 (R/W  32) Chip Erase Lock for TZ1_ALL */
  __IO  uint32_t                       FUSES_KEYVAL_TZ0_CE_ALL[4]; /**< Offset: 0x80 (R/W  32) Chip Erase Key for TZ0_ALL */
  __IO  uint32_t                       FUSES_CELOCK_TZ0_CE_ALL[4]; /**< Offset: 0x90 (R/W  32) Chip Erase Lock for TZ0_ALL */
  __IO  uint32_t                       FUSES_KEYVAL_CRCCMD[4]; /**< Offset: 0xA0 (R/W  32) CRC Access Key */
  __IO  uint32_t                       FUSES_KEYCONFIG_CRCCMD[4]; /**< Offset: 0xB0 (R/W  32) CRC Access Key Configuration */
  __IO  uint32_t                       FUSES_KEYVAL_HOSTDALELEV[4]; /**< Offset: 0xC0 (R/W  32) Host Authenticated DAL Elevation Key */
  __IO  uint32_t                       FUSES_KEYCONFIG_HOSTDALELEV[4]; /**< Offset: 0xD0 (R/W  32) Host Authenticated DAL Elevation Key Configuration */
  __IO  uint32_t                       FUSES_ROM_CTRLA;    /**< Offset: 0xE0 (R/W  32) ROM CTRLA Settings  (BROM_PLLEN must be set) */
  __IO  uint32_t                       FUSES_FCR_CTRLA;    /**< Offset: 0xE4 (R/W  32) FCR CTRLA Settings (BROM_PLLEN must be set) */
  __IO  uint32_t                       FUSES_RPMU_VREGCTRL; /**< Offset: 0xE8 (R/W  32) RPMU VREGCTRL Settings (BROM_PLLEN must be set) */
  __IO  uint32_t                       FUSES_PLL0_CTRL;    /**< Offset: 0xEC (R/W  32) PLL0 CTRL Settings (BROM_PLLEN must be set) */
  __IO  uint32_t                       FUSES_PLL0_FBDIV;   /**< Offset: 0xF0 (R/W  32) PLL0 FBDIV Settings (BROM_PLLEN must be set) */
  __IO  uint32_t                       FUSES_PLL0_REFDIV;  /**< Offset: 0xF4 (R/W  32) PLL0 REFDIV Settings (BROM_PLLEN must be set) */
  __IO  uint32_t                       FUSES_PLL0_POSTDIVA; /**< Offset: 0xF8 (R/W  32) PLL0 POSTDIVA Settings (BROM_PLLEN must be set) */
  __IO  uint32_t                       FUSES_MCLK_CLKDIV1; /**< Offset: 0xFC (R/W  32) MCLK CLKDIV1 Settings (BROM_PLLEN must be set) */
  __IO  uint32_t                       FUSES_GCLK_GENCTRL0; /**< Offset: 0x100 (R/W  32) GCLK GENCTRL0 Settings (BROM_PLLEN must be set) */
  __I   uint8_t                        Reserved2[0x0C];
  __IO  uint32_t                       FUSES_BROM_BOOTCFGCRC[4]; /**< Offset: 0x110 (R/W  32) Boot Configuraiton Page CRC */
  __IO  uint32_t                       FUSES_BROM_PAGEEND; /**< Offset: 0x120 (R/W  32) Page End Marker for Verified Data */
} fuses_bootcfg1_registers_t;

/** \brief FUSES_DALCFG register API structure */
typedef struct
{  /* Defines FUSE parameters */
  __IO  uint32_t                       FUSES_DAL;          /**< Offset: 0x00 (R/W  32) Debug Access Level */
} fuses_dalcfg_registers_t;

/** \brief FUSES_USERCFG1 register API structure */
typedef struct
{  /* Defines FUSE parameters */
  __IO  uint32_t                       FUSES_FSEQ[8];      /**< Offset: 0x00 (R/W  32) Flash Sequence Number */
  __IO  uint32_t                       FUSES_AFSEQ[8];     /**< Offset: 0x20 (R/W  32) Alternate Flash Sequence Number */
  __IO  uint32_t                       FUSES_FUCFG0;       /**< Offset: 0x40 (R/W  32) WDT Configuration */
  __IO  uint32_t                       FUSES_FUCFG1;       /**< Offset: 0x44 (R/W  32) User Configuration 1 (System Bus Configuration) */
  __IO  uint32_t                       FUSES_FUCFG2;       /**< Offset: 0x48 (R/W  32) User Configuration 2 (Deep Sleep SMOR Configuration) */
  __IO  uint32_t                       FUSES_FUCFG3;       /**< Offset: 0x4C (R/W  32) User Configuration 2 (SMOR Configuration) */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       FUSES_FUCFG5;       /**< Offset: 0x54 (R/W  32) User Configuration 5 (VREG Charge Pump Configuration) */
  __IO  uint32_t                       FUSES_FUCFG6;       /**< Offset: 0x58 (R/W  32) User Configuration 6 (FCR ECCCTRL Configuration) */
  __IO  uint32_t                       FUSES_FUCFG7;       /**< Offset: 0x5C (R/W  32) User Configuration 7 (FCR CTRLB Configuration) */
  __IO  uint32_t                       FUSES_FUCFG8;       /**< Offset: 0x60 (R/W  32) User Configuration 8 (FCW CWP Configuration) */
  __IO  uint32_t                       FUSES_FUCFG9;       /**< Offset: 0x64 (R/W  32) User Configuration 9 (RAM BISR and ECC Configuraiton) */
  __IO  uint32_t                       FUSES_FUCFG10;      /**< Offset: 0x68 (R/W  32) IDAU_NONSECA */
  __IO  uint32_t                       FUSES_FUCFG11;      /**< Offset: 0x6C (R/W  32) IDAU_NONSECB */
  __IO  uint32_t                       FUSES_FUCFG12;      /**< Offset: 0x70 (R/W  32) IDAU_NONSECC */
  __IO  uint32_t                       FUSES_FUCFG13;      /**< Offset: 0x74 (R/W  32) IDAU_NONSECAHB */
  __IO  uint32_t                       FUSES_FUCFG14;      /**< Offset: 0x78 (R/W  32) PFM IDAU Configuration */
  __IO  uint32_t                       FUSES_FUCFG15;      /**< Offset: 0x7C (R/W  32) RAM IDAU Configuration */
  __IO  uint32_t                       FUSES_FUCFG16;      /**< Offset: 0x80 (R/W  32) User Configuration 16 (HSM Firmware Metadata 0 Address) */
  __I   uint8_t                        Reserved2[0x1C];
  __IO  uint32_t                       FUSES_FUCFG24;      /**< Offset: 0xA0 (R/W  32) User Configuration 24 (HSM Firmware Metadata 1 Address) */
} fuses_usercfg1_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CKGC01_FUSES_COMPONENT_H_ */
