/*
 * Component description for ASRC
 *
 * Copyright (c) 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/*      file generated from device description file (ATDF) version None       */
#ifndef _SAMA7D6_ASRC_COMPONENT_H_
#define _SAMA7D6_ASRC_COMPONENT_H_

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR ASRC                      */
/* ************************************************************************** */

/* -------- ASRC_CR : (ASRC Offset: 0x00) ( /W 32) Control Register -------- */
#define ASRC_CR_SWRST_Pos                     _UINT32_(0)                                          /* (ASRC_CR) Software Reset Position */
#define ASRC_CR_SWRST_Msk                     (_UINT32_(0x1) << ASRC_CR_SWRST_Pos)                 /* (ASRC_CR) Software Reset Mask */
#define ASRC_CR_SWRST(value)                  (ASRC_CR_SWRST_Msk & (_UINT32_(value) << ASRC_CR_SWRST_Pos)) /* Assignment of value for SWRST in the ASRC_CR register */
#define   ASRC_CR_SWRST_0_Val                 _UINT32_(0x0)                                        /* (ASRC_CR) No effect.  */
#define   ASRC_CR_SWRST_1_Val                 _UINT32_(0x1)                                        /* (ASRC_CR) Resets the ASRC.  */
#define ASRC_CR_SWRST_0                       (ASRC_CR_SWRST_0_Val << ASRC_CR_SWRST_Pos)           /* (ASRC_CR) No effect. Position */
#define ASRC_CR_SWRST_1                       (ASRC_CR_SWRST_1_Val << ASRC_CR_SWRST_Pos)           /* (ASRC_CR) Resets the ASRC. Position */
#define ASRC_CR_MEMCHECK_Pos                  _UINT32_(1)                                          /* (ASRC_CR) Embedded Memory Check Position */
#define ASRC_CR_MEMCHECK_Msk                  (_UINT32_(0x1) << ASRC_CR_MEMCHECK_Pos)              /* (ASRC_CR) Embedded Memory Check Mask */
#define ASRC_CR_MEMCHECK(value)               (ASRC_CR_MEMCHECK_Msk & (_UINT32_(value) << ASRC_CR_MEMCHECK_Pos)) /* Assignment of value for MEMCHECK in the ASRC_CR register */
#define   ASRC_CR_MEMCHECK_0_Val              _UINT32_(0x0)                                        /* (ASRC_CR) No effect.  */
#define   ASRC_CR_MEMCHECK_1_Val              _UINT32_(0x1)                                        /* (ASRC_CR) Starts a memory check when all DSPs are disabled (ASRC_MR.ASRCENx=0). The end of the verification period is provided in ASRC_ISRx.EOMCP and the status is available in ASRC_ESR.ROMS/SRAMS at the end of the verification period. Clears the ASRC_ESR.ROMS/SRAMS flags.  */
#define ASRC_CR_MEMCHECK_0                    (ASRC_CR_MEMCHECK_0_Val << ASRC_CR_MEMCHECK_Pos)     /* (ASRC_CR) No effect. Position */
#define ASRC_CR_MEMCHECK_1                    (ASRC_CR_MEMCHECK_1_Val << ASRC_CR_MEMCHECK_Pos)     /* (ASRC_CR) Starts a memory check when all DSPs are disabled (ASRC_MR.ASRCENx=0). The end of the verification period is provided in ASRC_ISRx.EOMCP and the status is available in ASRC_ESR.ROMS/SRAMS at the end of the verification period. Clears the ASRC_ESR.ROMS/SRAMS flags. Position */
#define ASRC_CR_DSPMEMSEL_Pos                 _UINT32_(2)                                          /* (ASRC_CR) DSP Memory Selection Position */
#define ASRC_CR_DSPMEMSEL_Msk                 (_UINT32_(0x3) << ASRC_CR_DSPMEMSEL_Pos)             /* (ASRC_CR) DSP Memory Selection Mask */
#define ASRC_CR_DSPMEMSEL(value)              (ASRC_CR_DSPMEMSEL_Msk & (_UINT32_(value) << ASRC_CR_DSPMEMSEL_Pos)) /* Assignment of value for DSPMEMSEL in the ASRC_CR register */
#define   ASRC_CR_DSPMEMSEL_ALL_DSP_MEM_Val   _UINT32_(0x0)                                        /* (ASRC_CR) Memories of all DSPs are checked when MEMCHECK=1. When the flag ASRC_ESR.SRAMS=1, one error has been detected in one of the memories. To determine which DSP is affected, the memory check procedure must be restarted with DSPMEMSEL > 0. Note: When using only DSP0 or DSP1 or DSP3, it is possible to start the check procedure only for the selected DSP. The check of DSP2 memories requires several steps.  */
#define   ASRC_CR_DSPMEMSEL_DSP0_MEM_Val      _UINT32_(0x1)                                        /* (ASRC_CR) Only memories of DSP0 are checked when MEMCHECK=1. When the flag ASRC_ESR.SRAMS=1, one error has been detected in one of the memories associated to DSP0. The errors that may be located in other DSP memories does not impact the report on ASRC_ESR.SRAMS=1.  */
#define   ASRC_CR_DSPMEMSEL_DSP1_MEM_Val      _UINT32_(0x2)                                        /* (ASRC_CR) Only memories of DSP1 are checked when MEMCHECK=1. When the flag ASRC_ESR.SRAMS=1, one error has been detected in one of the memories associated to DSP1. The errors that may be located in other DSP memories does not impact the report on ASRC_ESR.SRAMS=1.  */
#define   ASRC_CR_DSPMEMSEL_DSP3_MEM_Val      _UINT32_(0x3)                                        /* (ASRC_CR) Only memories of DSP3 are checked when MEMCHECK=1. When the flag ASRC_ESR.SRAMS=1, one error has been detected in one of the memories associated to DSP3. The errors that may be located in other DSP memories does not impact the report on ASRC_ESR.SRAMS=1.  */
#define ASRC_CR_DSPMEMSEL_ALL_DSP_MEM         (ASRC_CR_DSPMEMSEL_ALL_DSP_MEM_Val << ASRC_CR_DSPMEMSEL_Pos) /* (ASRC_CR) Memories of all DSPs are checked when MEMCHECK=1. When the flag ASRC_ESR.SRAMS=1, one error has been detected in one of the memories. To determine which DSP is affected, the memory check procedure must be restarted with DSPMEMSEL > 0. Note: When using only DSP0 or DSP1 or DSP3, it is possible to start the check procedure only for the selected DSP. The check of DSP2 memories requires several steps. Position */
#define ASRC_CR_DSPMEMSEL_DSP0_MEM            (ASRC_CR_DSPMEMSEL_DSP0_MEM_Val << ASRC_CR_DSPMEMSEL_Pos) /* (ASRC_CR) Only memories of DSP0 are checked when MEMCHECK=1. When the flag ASRC_ESR.SRAMS=1, one error has been detected in one of the memories associated to DSP0. The errors that may be located in other DSP memories does not impact the report on ASRC_ESR.SRAMS=1. Position */
#define ASRC_CR_DSPMEMSEL_DSP1_MEM            (ASRC_CR_DSPMEMSEL_DSP1_MEM_Val << ASRC_CR_DSPMEMSEL_Pos) /* (ASRC_CR) Only memories of DSP1 are checked when MEMCHECK=1. When the flag ASRC_ESR.SRAMS=1, one error has been detected in one of the memories associated to DSP1. The errors that may be located in other DSP memories does not impact the report on ASRC_ESR.SRAMS=1. Position */
#define ASRC_CR_DSPMEMSEL_DSP3_MEM            (ASRC_CR_DSPMEMSEL_DSP3_MEM_Val << ASRC_CR_DSPMEMSEL_Pos) /* (ASRC_CR) Only memories of DSP3 are checked when MEMCHECK=1. When the flag ASRC_ESR.SRAMS=1, one error has been detected in one of the memories associated to DSP3. The errors that may be located in other DSP memories does not impact the report on ASRC_ESR.SRAMS=1. Position */
#define ASRC_CR_Msk                           _UINT32_(0x0000000F)                                 /* (ASRC_CR) Register Mask  */


/* -------- ASRC_MR : (ASRC Offset: 0x04) (R/W 32) Mode Register -------- */
#define ASRC_MR_RESETVALUE                    _UINT32_(0x00)                                       /*  (ASRC_MR) Mode Register  Reset Value */

#define ASRC_MR_ASRCEN0_Pos                   _UINT32_(0)                                          /* (ASRC_MR) ASRC Stereo Channel 0 Enable Position */
#define ASRC_MR_ASRCEN0_Msk                   (_UINT32_(0x1) << ASRC_MR_ASRCEN0_Pos)               /* (ASRC_MR) ASRC Stereo Channel 0 Enable Mask */
#define ASRC_MR_ASRCEN0(value)                (ASRC_MR_ASRCEN0_Msk & (_UINT32_(value) << ASRC_MR_ASRCEN0_Pos)) /* Assignment of value for ASRCEN0 in the ASRC_MR register */
#define   ASRC_MR_ASRCEN0_DISABLE_Val         _UINT32_(0x0)                                        /* (ASRC_MR) DSPx is disabled.  */
#define   ASRC_MR_ASRCEN0_ENABLE_Val          _UINT32_(0x1)                                        /* (ASRC_MR) DSPx is enabled.  */
#define ASRC_MR_ASRCEN0_DISABLE               (ASRC_MR_ASRCEN0_DISABLE_Val << ASRC_MR_ASRCEN0_Pos) /* (ASRC_MR) DSPx is disabled. Position */
#define ASRC_MR_ASRCEN0_ENABLE                (ASRC_MR_ASRCEN0_ENABLE_Val << ASRC_MR_ASRCEN0_Pos)  /* (ASRC_MR) DSPx is enabled. Position */
#define ASRC_MR_ASRCEN1_Pos                   _UINT32_(1)                                          /* (ASRC_MR) ASRC Stereo Channel 1 Enable Position */
#define ASRC_MR_ASRCEN1_Msk                   (_UINT32_(0x1) << ASRC_MR_ASRCEN1_Pos)               /* (ASRC_MR) ASRC Stereo Channel 1 Enable Mask */
#define ASRC_MR_ASRCEN1(value)                (ASRC_MR_ASRCEN1_Msk & (_UINT32_(value) << ASRC_MR_ASRCEN1_Pos)) /* Assignment of value for ASRCEN1 in the ASRC_MR register */
#define   ASRC_MR_ASRCEN1_DISABLE_Val         _UINT32_(0x0)                                        /* (ASRC_MR) DSPx is disabled.  */
#define   ASRC_MR_ASRCEN1_ENABLE_Val          _UINT32_(0x1)                                        /* (ASRC_MR) DSPx is enabled.  */
#define ASRC_MR_ASRCEN1_DISABLE               (ASRC_MR_ASRCEN1_DISABLE_Val << ASRC_MR_ASRCEN1_Pos) /* (ASRC_MR) DSPx is disabled. Position */
#define ASRC_MR_ASRCEN1_ENABLE                (ASRC_MR_ASRCEN1_ENABLE_Val << ASRC_MR_ASRCEN1_Pos)  /* (ASRC_MR) DSPx is enabled. Position */
#define ASRC_MR_ASRCEN2_Pos                   _UINT32_(2)                                          /* (ASRC_MR) ASRC Stereo Channel 2 Enable Position */
#define ASRC_MR_ASRCEN2_Msk                   (_UINT32_(0x1) << ASRC_MR_ASRCEN2_Pos)               /* (ASRC_MR) ASRC Stereo Channel 2 Enable Mask */
#define ASRC_MR_ASRCEN2(value)                (ASRC_MR_ASRCEN2_Msk & (_UINT32_(value) << ASRC_MR_ASRCEN2_Pos)) /* Assignment of value for ASRCEN2 in the ASRC_MR register */
#define   ASRC_MR_ASRCEN2_DISABLE_Val         _UINT32_(0x0)                                        /* (ASRC_MR) DSPx is disabled.  */
#define   ASRC_MR_ASRCEN2_ENABLE_Val          _UINT32_(0x1)                                        /* (ASRC_MR) DSPx is enabled.  */
#define ASRC_MR_ASRCEN2_DISABLE               (ASRC_MR_ASRCEN2_DISABLE_Val << ASRC_MR_ASRCEN2_Pos) /* (ASRC_MR) DSPx is disabled. Position */
#define ASRC_MR_ASRCEN2_ENABLE                (ASRC_MR_ASRCEN2_ENABLE_Val << ASRC_MR_ASRCEN2_Pos)  /* (ASRC_MR) DSPx is enabled. Position */
#define ASRC_MR_ASRCEN3_Pos                   _UINT32_(3)                                          /* (ASRC_MR) ASRC Stereo Channel 3 Enable Position */
#define ASRC_MR_ASRCEN3_Msk                   (_UINT32_(0x1) << ASRC_MR_ASRCEN3_Pos)               /* (ASRC_MR) ASRC Stereo Channel 3 Enable Mask */
#define ASRC_MR_ASRCEN3(value)                (ASRC_MR_ASRCEN3_Msk & (_UINT32_(value) << ASRC_MR_ASRCEN3_Pos)) /* Assignment of value for ASRCEN3 in the ASRC_MR register */
#define   ASRC_MR_ASRCEN3_DISABLE_Val         _UINT32_(0x0)                                        /* (ASRC_MR) DSPx is disabled.  */
#define   ASRC_MR_ASRCEN3_ENABLE_Val          _UINT32_(0x1)                                        /* (ASRC_MR) DSPx is enabled.  */
#define ASRC_MR_ASRCEN3_DISABLE               (ASRC_MR_ASRCEN3_DISABLE_Val << ASRC_MR_ASRCEN3_Pos) /* (ASRC_MR) DSPx is disabled. Position */
#define ASRC_MR_ASRCEN3_ENABLE                (ASRC_MR_ASRCEN3_ENABLE_Val << ASRC_MR_ASRCEN3_Pos)  /* (ASRC_MR) DSPx is enabled. Position */
#define ASRC_MR_DATHRM_Pos                    _UINT32_(8)                                          /* (ASRC_MR) Direct Access Transmit Holding Registers Mode Position */
#define ASRC_MR_DATHRM_Msk                    (_UINT32_(0x1) << ASRC_MR_DATHRM_Pos)                /* (ASRC_MR) Direct Access Transmit Holding Registers Mode Mask */
#define ASRC_MR_DATHRM(value)                 (ASRC_MR_DATHRM_Msk & (_UINT32_(value) << ASRC_MR_DATHRM_Pos)) /* Assignment of value for DATHRM in the ASRC_MR register */
#define   ASRC_MR_DATHRM_PER_THR_Val          _UINT32_(0x0)                                        /* (ASRC_MR) The access mode for each transmit channel (ASRC_THRx) is defined by the bits DATHRx.  */
#define   ASRC_MR_DATHRM_ALL_THR_Val          _UINT32_(0x1)                                        /* (ASRC_MR) All transmit channels are directly loaded by audio peripherals. The DATHRx bits have no effect.  */
#define ASRC_MR_DATHRM_PER_THR                (ASRC_MR_DATHRM_PER_THR_Val << ASRC_MR_DATHRM_Pos)   /* (ASRC_MR) The access mode for each transmit channel (ASRC_THRx) is defined by the bits DATHRx. Position */
#define ASRC_MR_DATHRM_ALL_THR                (ASRC_MR_DATHRM_ALL_THR_Val << ASRC_MR_DATHRM_Pos)   /* (ASRC_MR) All transmit channels are directly loaded by audio peripherals. The DATHRx bits have no effect. Position */
#define ASRC_MR_DARHRM_Pos                    _UINT32_(9)                                          /* (ASRC_MR) Direct Access Receive Holding Registers Mode Position */
#define ASRC_MR_DARHRM_Msk                    (_UINT32_(0x1) << ASRC_MR_DARHRM_Pos)                /* (ASRC_MR) Direct Access Receive Holding Registers Mode Mask */
#define ASRC_MR_DARHRM(value)                 (ASRC_MR_DARHRM_Msk & (_UINT32_(value) << ASRC_MR_DARHRM_Pos)) /* Assignment of value for DARHRM in the ASRC_MR register */
#define   ASRC_MR_DARHRM_PER_RHR_Val          _UINT32_(0x0)                                        /* (ASRC_MR) The access mode for each receive channel (ASRC_RHRx) is defined by the bits DARHRx.  */
#define   ASRC_MR_DARHRM_ALL_RHR_Val          _UINT32_(0x1)                                        /* (ASRC_MR) All receive channels are directly driving audio peripherals. The DARHRx bits have no effect.  */
#define ASRC_MR_DARHRM_PER_RHR                (ASRC_MR_DARHRM_PER_RHR_Val << ASRC_MR_DARHRM_Pos)   /* (ASRC_MR) The access mode for each receive channel (ASRC_RHRx) is defined by the bits DARHRx. Position */
#define ASRC_MR_DARHRM_ALL_RHR                (ASRC_MR_DARHRM_ALL_RHR_Val << ASRC_MR_DARHRM_Pos)   /* (ASRC_MR) All receive channels are directly driving audio peripherals. The DARHRx bits have no effect. Position */
#define ASRC_MR_DATHR0_Pos                    _UINT32_(16)                                         /* (ASRC_MR) Direct Access Transmit Holding Register Source Position */
#define ASRC_MR_DATHR0_Msk                    (_UINT32_(0x1) << ASRC_MR_DATHR0_Pos)                /* (ASRC_MR) Direct Access Transmit Holding Register Source Mask */
#define ASRC_MR_DATHR0(value)                 (ASRC_MR_DATHR0_Msk & (_UINT32_(value) << ASRC_MR_DATHR0_Pos)) /* Assignment of value for DATHR0 in the ASRC_MR register */
#define   ASRC_MR_DATHR0_DMA_Val              _UINT32_(0x0)                                        /* (ASRC_MR) The Transmit Holding register is loaded by software or DMA.  If DATHRM=1, the Transmit Holding register is directly loaded by an audio peripheral. The audio peripheral loading the Transmit Holding Register is selected by configuring ASRC_DAPSELR.IN_CHx.  */
#define   ASRC_MR_DATHR0_DIRECT_ACCESS_Val    _UINT32_(0x1)                                        /* (ASRC_MR) The Transmit Holding register is directly loaded by an audio peripheral.  The audio peripheral loading the Transmit Holding Register is selected by configuring ASRC_DAPSELR.IN_CHx.  */
#define ASRC_MR_DATHR0_DMA                    (ASRC_MR_DATHR0_DMA_Val << ASRC_MR_DATHR0_Pos)       /* (ASRC_MR) The Transmit Holding register is loaded by software or DMA.  If DATHRM=1, the Transmit Holding register is directly loaded by an audio peripheral. The audio peripheral loading the Transmit Holding Register is selected by configuring ASRC_DAPSELR.IN_CHx. Position */
#define ASRC_MR_DATHR0_DIRECT_ACCESS          (ASRC_MR_DATHR0_DIRECT_ACCESS_Val << ASRC_MR_DATHR0_Pos) /* (ASRC_MR) The Transmit Holding register is directly loaded by an audio peripheral.  The audio peripheral loading the Transmit Holding Register is selected by configuring ASRC_DAPSELR.IN_CHx. Position */
#define ASRC_MR_DATHR1_Pos                    _UINT32_(17)                                         /* (ASRC_MR) Direct Access Transmit Holding Register Source Position */
#define ASRC_MR_DATHR1_Msk                    (_UINT32_(0x1) << ASRC_MR_DATHR1_Pos)                /* (ASRC_MR) Direct Access Transmit Holding Register Source Mask */
#define ASRC_MR_DATHR1(value)                 (ASRC_MR_DATHR1_Msk & (_UINT32_(value) << ASRC_MR_DATHR1_Pos)) /* Assignment of value for DATHR1 in the ASRC_MR register */
#define   ASRC_MR_DATHR1_DMA_Val              _UINT32_(0x0)                                        /* (ASRC_MR) The Transmit Holding register is loaded by software or DMA.  If DATHRM=1, the Transmit Holding register is directly loaded by an audio peripheral. The audio peripheral loading the Transmit Holding Register is selected by configuring ASRC_DAPSELR.IN_CHx.  */
#define   ASRC_MR_DATHR1_DIRECT_ACCESS_Val    _UINT32_(0x1)                                        /* (ASRC_MR) The Transmit Holding register is directly loaded by an audio peripheral.  The audio peripheral loading the Transmit Holding Register is selected by configuring ASRC_DAPSELR.IN_CHx.  */
#define ASRC_MR_DATHR1_DMA                    (ASRC_MR_DATHR1_DMA_Val << ASRC_MR_DATHR1_Pos)       /* (ASRC_MR) The Transmit Holding register is loaded by software or DMA.  If DATHRM=1, the Transmit Holding register is directly loaded by an audio peripheral. The audio peripheral loading the Transmit Holding Register is selected by configuring ASRC_DAPSELR.IN_CHx. Position */
#define ASRC_MR_DATHR1_DIRECT_ACCESS          (ASRC_MR_DATHR1_DIRECT_ACCESS_Val << ASRC_MR_DATHR1_Pos) /* (ASRC_MR) The Transmit Holding register is directly loaded by an audio peripheral.  The audio peripheral loading the Transmit Holding Register is selected by configuring ASRC_DAPSELR.IN_CHx. Position */
#define ASRC_MR_DATHR2_Pos                    _UINT32_(18)                                         /* (ASRC_MR) Direct Access Transmit Holding Register Source Position */
#define ASRC_MR_DATHR2_Msk                    (_UINT32_(0x1) << ASRC_MR_DATHR2_Pos)                /* (ASRC_MR) Direct Access Transmit Holding Register Source Mask */
#define ASRC_MR_DATHR2(value)                 (ASRC_MR_DATHR2_Msk & (_UINT32_(value) << ASRC_MR_DATHR2_Pos)) /* Assignment of value for DATHR2 in the ASRC_MR register */
#define   ASRC_MR_DATHR2_DMA_Val              _UINT32_(0x0)                                        /* (ASRC_MR) The Transmit Holding register is loaded by software or DMA.  If DATHRM=1, the Transmit Holding register is directly loaded by an audio peripheral. The audio peripheral loading the Transmit Holding Register is selected by configuring ASRC_DAPSELR.IN_CHx.  */
#define   ASRC_MR_DATHR2_DIRECT_ACCESS_Val    _UINT32_(0x1)                                        /* (ASRC_MR) The Transmit Holding register is directly loaded by an audio peripheral.  The audio peripheral loading the Transmit Holding Register is selected by configuring ASRC_DAPSELR.IN_CHx.  */
#define ASRC_MR_DATHR2_DMA                    (ASRC_MR_DATHR2_DMA_Val << ASRC_MR_DATHR2_Pos)       /* (ASRC_MR) The Transmit Holding register is loaded by software or DMA.  If DATHRM=1, the Transmit Holding register is directly loaded by an audio peripheral. The audio peripheral loading the Transmit Holding Register is selected by configuring ASRC_DAPSELR.IN_CHx. Position */
#define ASRC_MR_DATHR2_DIRECT_ACCESS          (ASRC_MR_DATHR2_DIRECT_ACCESS_Val << ASRC_MR_DATHR2_Pos) /* (ASRC_MR) The Transmit Holding register is directly loaded by an audio peripheral.  The audio peripheral loading the Transmit Holding Register is selected by configuring ASRC_DAPSELR.IN_CHx. Position */
#define ASRC_MR_DATHR3_Pos                    _UINT32_(19)                                         /* (ASRC_MR) Direct Access Transmit Holding Register Source Position */
#define ASRC_MR_DATHR3_Msk                    (_UINT32_(0x1) << ASRC_MR_DATHR3_Pos)                /* (ASRC_MR) Direct Access Transmit Holding Register Source Mask */
#define ASRC_MR_DATHR3(value)                 (ASRC_MR_DATHR3_Msk & (_UINT32_(value) << ASRC_MR_DATHR3_Pos)) /* Assignment of value for DATHR3 in the ASRC_MR register */
#define   ASRC_MR_DATHR3_DMA_Val              _UINT32_(0x0)                                        /* (ASRC_MR) The Transmit Holding register is loaded by software or DMA.  If DATHRM=1, the Transmit Holding register is directly loaded by an audio peripheral. The audio peripheral loading the Transmit Holding Register is selected by configuring ASRC_DAPSELR.IN_CHx.  */
#define   ASRC_MR_DATHR3_DIRECT_ACCESS_Val    _UINT32_(0x1)                                        /* (ASRC_MR) The Transmit Holding register is directly loaded by an audio peripheral.  The audio peripheral loading the Transmit Holding Register is selected by configuring ASRC_DAPSELR.IN_CHx.  */
#define ASRC_MR_DATHR3_DMA                    (ASRC_MR_DATHR3_DMA_Val << ASRC_MR_DATHR3_Pos)       /* (ASRC_MR) The Transmit Holding register is loaded by software or DMA.  If DATHRM=1, the Transmit Holding register is directly loaded by an audio peripheral. The audio peripheral loading the Transmit Holding Register is selected by configuring ASRC_DAPSELR.IN_CHx. Position */
#define ASRC_MR_DATHR3_DIRECT_ACCESS          (ASRC_MR_DATHR3_DIRECT_ACCESS_Val << ASRC_MR_DATHR3_Pos) /* (ASRC_MR) The Transmit Holding register is directly loaded by an audio peripheral.  The audio peripheral loading the Transmit Holding Register is selected by configuring ASRC_DAPSELR.IN_CHx. Position */
#define ASRC_MR_DARHR0_Pos                    _UINT32_(24)                                         /* (ASRC_MR) Direct Access Receive Holding Register Destination Position */
#define ASRC_MR_DARHR0_Msk                    (_UINT32_(0x1) << ASRC_MR_DARHR0_Pos)                /* (ASRC_MR) Direct Access Receive Holding Register Destination Mask */
#define ASRC_MR_DARHR0(value)                 (ASRC_MR_DARHR0_Msk & (_UINT32_(value) << ASRC_MR_DARHR0_Pos)) /* Assignment of value for DARHR0 in the ASRC_MR register */
#define   ASRC_MR_DARHR0_DMA_Val              _UINT32_(0x0)                                        /* (ASRC_MR) The Receive Holding register is read by software or DMA.  If DARHRM=1, the Receive Holding register is directly driving an audio peripheral. The Receive Holding register x loads the audio peripheral selected by ASRC_DAPSELR.OUT_CHx.  */
#define   ASRC_MR_DARHR0_DIRECT_ACCESS_Val    _UINT32_(0x1)                                        /* (ASRC_MR) The Receive Holding register is directly driving an audio peripheral. The Receive Holding register x loads the audio peripheral selected by ASRC_DAPSELR.OUT_CHx.  */
#define ASRC_MR_DARHR0_DMA                    (ASRC_MR_DARHR0_DMA_Val << ASRC_MR_DARHR0_Pos)       /* (ASRC_MR) The Receive Holding register is read by software or DMA.  If DARHRM=1, the Receive Holding register is directly driving an audio peripheral. The Receive Holding register x loads the audio peripheral selected by ASRC_DAPSELR.OUT_CHx. Position */
#define ASRC_MR_DARHR0_DIRECT_ACCESS          (ASRC_MR_DARHR0_DIRECT_ACCESS_Val << ASRC_MR_DARHR0_Pos) /* (ASRC_MR) The Receive Holding register is directly driving an audio peripheral. The Receive Holding register x loads the audio peripheral selected by ASRC_DAPSELR.OUT_CHx. Position */
#define ASRC_MR_DARHR1_Pos                    _UINT32_(25)                                         /* (ASRC_MR) Direct Access Receive Holding Register Destination Position */
#define ASRC_MR_DARHR1_Msk                    (_UINT32_(0x1) << ASRC_MR_DARHR1_Pos)                /* (ASRC_MR) Direct Access Receive Holding Register Destination Mask */
#define ASRC_MR_DARHR1(value)                 (ASRC_MR_DARHR1_Msk & (_UINT32_(value) << ASRC_MR_DARHR1_Pos)) /* Assignment of value for DARHR1 in the ASRC_MR register */
#define   ASRC_MR_DARHR1_DMA_Val              _UINT32_(0x0)                                        /* (ASRC_MR) The Receive Holding register is read by software or DMA.  If DARHRM=1, the Receive Holding register is directly driving an audio peripheral. The Receive Holding register x loads the audio peripheral selected by ASRC_DAPSELR.OUT_CHx.  */
#define   ASRC_MR_DARHR1_DIRECT_ACCESS_Val    _UINT32_(0x1)                                        /* (ASRC_MR) The Receive Holding register is directly driving an audio peripheral. The Receive Holding register x loads the audio peripheral selected by ASRC_DAPSELR.OUT_CHx.  */
#define ASRC_MR_DARHR1_DMA                    (ASRC_MR_DARHR1_DMA_Val << ASRC_MR_DARHR1_Pos)       /* (ASRC_MR) The Receive Holding register is read by software or DMA.  If DARHRM=1, the Receive Holding register is directly driving an audio peripheral. The Receive Holding register x loads the audio peripheral selected by ASRC_DAPSELR.OUT_CHx. Position */
#define ASRC_MR_DARHR1_DIRECT_ACCESS          (ASRC_MR_DARHR1_DIRECT_ACCESS_Val << ASRC_MR_DARHR1_Pos) /* (ASRC_MR) The Receive Holding register is directly driving an audio peripheral. The Receive Holding register x loads the audio peripheral selected by ASRC_DAPSELR.OUT_CHx. Position */
#define ASRC_MR_DARHR2_Pos                    _UINT32_(26)                                         /* (ASRC_MR) Direct Access Receive Holding Register Destination Position */
#define ASRC_MR_DARHR2_Msk                    (_UINT32_(0x1) << ASRC_MR_DARHR2_Pos)                /* (ASRC_MR) Direct Access Receive Holding Register Destination Mask */
#define ASRC_MR_DARHR2(value)                 (ASRC_MR_DARHR2_Msk & (_UINT32_(value) << ASRC_MR_DARHR2_Pos)) /* Assignment of value for DARHR2 in the ASRC_MR register */
#define   ASRC_MR_DARHR2_DMA_Val              _UINT32_(0x0)                                        /* (ASRC_MR) The Receive Holding register is read by software or DMA.  If DARHRM=1, the Receive Holding register is directly driving an audio peripheral. The Receive Holding register x loads the audio peripheral selected by ASRC_DAPSELR.OUT_CHx.  */
#define   ASRC_MR_DARHR2_DIRECT_ACCESS_Val    _UINT32_(0x1)                                        /* (ASRC_MR) The Receive Holding register is directly driving an audio peripheral. The Receive Holding register x loads the audio peripheral selected by ASRC_DAPSELR.OUT_CHx.  */
#define ASRC_MR_DARHR2_DMA                    (ASRC_MR_DARHR2_DMA_Val << ASRC_MR_DARHR2_Pos)       /* (ASRC_MR) The Receive Holding register is read by software or DMA.  If DARHRM=1, the Receive Holding register is directly driving an audio peripheral. The Receive Holding register x loads the audio peripheral selected by ASRC_DAPSELR.OUT_CHx. Position */
#define ASRC_MR_DARHR2_DIRECT_ACCESS          (ASRC_MR_DARHR2_DIRECT_ACCESS_Val << ASRC_MR_DARHR2_Pos) /* (ASRC_MR) The Receive Holding register is directly driving an audio peripheral. The Receive Holding register x loads the audio peripheral selected by ASRC_DAPSELR.OUT_CHx. Position */
#define ASRC_MR_DARHR3_Pos                    _UINT32_(27)                                         /* (ASRC_MR) Direct Access Receive Holding Register Destination Position */
#define ASRC_MR_DARHR3_Msk                    (_UINT32_(0x1) << ASRC_MR_DARHR3_Pos)                /* (ASRC_MR) Direct Access Receive Holding Register Destination Mask */
#define ASRC_MR_DARHR3(value)                 (ASRC_MR_DARHR3_Msk & (_UINT32_(value) << ASRC_MR_DARHR3_Pos)) /* Assignment of value for DARHR3 in the ASRC_MR register */
#define   ASRC_MR_DARHR3_DMA_Val              _UINT32_(0x0)                                        /* (ASRC_MR) The Receive Holding register is read by software or DMA.  If DARHRM=1, the Receive Holding register is directly driving an audio peripheral. The Receive Holding register x loads the audio peripheral selected by ASRC_DAPSELR.OUT_CHx.  */
#define   ASRC_MR_DARHR3_DIRECT_ACCESS_Val    _UINT32_(0x1)                                        /* (ASRC_MR) The Receive Holding register is directly driving an audio peripheral. The Receive Holding register x loads the audio peripheral selected by ASRC_DAPSELR.OUT_CHx.  */
#define ASRC_MR_DARHR3_DMA                    (ASRC_MR_DARHR3_DMA_Val << ASRC_MR_DARHR3_Pos)       /* (ASRC_MR) The Receive Holding register is read by software or DMA.  If DARHRM=1, the Receive Holding register is directly driving an audio peripheral. The Receive Holding register x loads the audio peripheral selected by ASRC_DAPSELR.OUT_CHx. Position */
#define ASRC_MR_DARHR3_DIRECT_ACCESS          (ASRC_MR_DARHR3_DIRECT_ACCESS_Val << ASRC_MR_DARHR3_Pos) /* (ASRC_MR) The Receive Holding register is directly driving an audio peripheral. The Receive Holding register x loads the audio peripheral selected by ASRC_DAPSELR.OUT_CHx. Position */
#define ASRC_MR_Msk                           _UINT32_(0x0F0F030F)                                 /* (ASRC_MR) Register Mask  */

#define ASRC_MR_ASRCEN_Pos                    _UINT32_(0)                                          /* (ASRC_MR Position) ASRC Stereo Channel x Enable */
#define ASRC_MR_ASRCEN_Msk                    (_UINT32_(0xF) << ASRC_MR_ASRCEN_Pos)                /* (ASRC_MR Mask) ASRCEN */
#define ASRC_MR_ASRCEN(value)                 (ASRC_MR_ASRCEN_Msk & (_UINT32_(value) << ASRC_MR_ASRCEN_Pos)) 
#define ASRC_MR_DATHR_Pos                     _UINT32_(16)                                         /* (ASRC_MR Position) Direct Access Transmit Holding Register Source */
#define ASRC_MR_DATHR_Msk                     (_UINT32_(0xF) << ASRC_MR_DATHR_Pos)                 /* (ASRC_MR Mask) DATHR */
#define ASRC_MR_DATHR(value)                  (ASRC_MR_DATHR_Msk & (_UINT32_(value) << ASRC_MR_DATHR_Pos)) 
#define ASRC_MR_DARHR_Pos                     _UINT32_(24)                                         /* (ASRC_MR Position) Direct Access Receive Holding Register Destination */
#define ASRC_MR_DARHR_Msk                     (_UINT32_(0xF) << ASRC_MR_DARHR_Pos)                 /* (ASRC_MR Mask) DARHR */
#define ASRC_MR_DARHR(value)                  (ASRC_MR_DARHR_Msk & (_UINT32_(value) << ASRC_MR_DARHR_Pos)) 

/* -------- ASRC_RATIO : (ASRC Offset: 0x08) (R/W 32) Ratio Register of Stereo Channel x -------- */
#define ASRC_RATIO_RESETVALUE                 _UINT32_(0x4000400)                                  /*  (ASRC_RATIO) Ratio Register of Stereo Channel x  Reset Value */

#define ASRC_RATIO_INRATIO_Pos                _UINT32_(0)                                          /* (ASRC_RATIO) Input Internal Sampling Rate Ratio Position */
#define ASRC_RATIO_INRATIO_Msk                (_UINT32_(0xFFFF) << ASRC_RATIO_INRATIO_Pos)         /* (ASRC_RATIO) Input Internal Sampling Rate Ratio Mask */
#define ASRC_RATIO_INRATIO(value)             (ASRC_RATIO_INRATIO_Msk & (_UINT32_(value) << ASRC_RATIO_INRATIO_Pos)) /* Assignment of value for INRATIO in the ASRC_RATIO register */
#define ASRC_RATIO_OUTRATIO_Pos               _UINT32_(16)                                         /* (ASRC_RATIO) Output Internal Sampling Rate Ratio Position */
#define ASRC_RATIO_OUTRATIO_Msk               (_UINT32_(0xFFFF) << ASRC_RATIO_OUTRATIO_Pos)        /* (ASRC_RATIO) Output Internal Sampling Rate Ratio Mask */
#define ASRC_RATIO_OUTRATIO(value)            (ASRC_RATIO_OUTRATIO_Msk & (_UINT32_(value) << ASRC_RATIO_OUTRATIO_Pos)) /* Assignment of value for OUTRATIO in the ASRC_RATIO register */
#define ASRC_RATIO_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (ASRC_RATIO) Register Mask  */


/* -------- ASRC_VBPS_IN : (ASRC Offset: 0x18) (R/W 32) Valid Bit Per Sample In Register -------- */
#define ASRC_VBPS_IN_RESETVALUE               _UINT32_(0x00)                                       /*  (ASRC_VBPS_IN) Valid Bit Per Sample In Register  Reset Value */

#define ASRC_VBPS_IN_VBPS_IN0_Pos             _UINT32_(0)                                          /* (ASRC_VBPS_IN) Valid Bit Per Sample In of DSP 0 Position */
#define ASRC_VBPS_IN_VBPS_IN0_Msk             (_UINT32_(0xF) << ASRC_VBPS_IN_VBPS_IN0_Pos)         /* (ASRC_VBPS_IN) Valid Bit Per Sample In of DSP 0 Mask */
#define ASRC_VBPS_IN_VBPS_IN0(value)          (ASRC_VBPS_IN_VBPS_IN0_Msk & (_UINT32_(value) << ASRC_VBPS_IN_VBPS_IN0_Pos)) /* Assignment of value for VBPS_IN0 in the ASRC_VBPS_IN register */
#define   ASRC_VBPS_IN_VBPS_IN0_8_BIT_Val     _UINT32_(0x0)                                        /* (ASRC_VBPS_IN) The 8 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [15:8] of the 24-bit data are driven by the 8 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [7:0] are driven by 0s.  */
#define   ASRC_VBPS_IN_VBPS_IN0_16_BIT_Val    _UINT32_(0x1)                                        /* (ASRC_VBPS_IN) The 16 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [7:0] of the 24-bit data are driven by the bits [15:8] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN0_20_BIT_Val    _UINT32_(0x2)                                        /* (ASRC_VBPS_IN) The 20 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [3:0] of the 24-bit data are driven by the bits [19:16] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN0_24_BIT_Val    _UINT32_(0x3)                                        /* (ASRC_VBPS_IN) The 24 LSB of THR registers are entered to the DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN0_32_BIT_Val    _UINT32_(0x4)                                        /* (ASRC_VBPS_IN) The 24 MSB of THR registers are entered to the DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN0_10_BIT_Val    _UINT32_(0x5)                                        /* (ASRC_VBPS_IN) The 10 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [13:4] of the 24-bit data are driven by the 10 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [3:0] are driven by 0s.  */
#define   ASRC_VBPS_IN_VBPS_IN0_12_BIT_Val    _UINT32_(0x6)                                        /* (ASRC_VBPS_IN) The 12 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [11:0] of the 24-bit data are driven by the bits [11:0] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN0_14_BIT_Val    _UINT32_(0x7)                                        /* (ASRC_VBPS_IN) The 14 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [9:0] of the 24-bit data are driven by the bits [13:4] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN0_18_BIT_Val    _UINT32_(0x8)                                        /* (ASRC_VBPS_IN) The 18 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [5:0] of the 24-bit data are driven by the bits [17:12] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define ASRC_VBPS_IN_VBPS_IN0_8_BIT           (ASRC_VBPS_IN_VBPS_IN0_8_BIT_Val << ASRC_VBPS_IN_VBPS_IN0_Pos) /* (ASRC_VBPS_IN) The 8 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [15:8] of the 24-bit data are driven by the 8 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [7:0] are driven by 0s. Position */
#define ASRC_VBPS_IN_VBPS_IN0_16_BIT          (ASRC_VBPS_IN_VBPS_IN0_16_BIT_Val << ASRC_VBPS_IN_VBPS_IN0_Pos) /* (ASRC_VBPS_IN) The 16 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [7:0] of the 24-bit data are driven by the bits [15:8] of the THR registers to increase the dynamic range of the data sent to DSP. Position */
#define ASRC_VBPS_IN_VBPS_IN0_20_BIT          (ASRC_VBPS_IN_VBPS_IN0_20_BIT_Val << ASRC_VBPS_IN_VBPS_IN0_Pos) /* (ASRC_VBPS_IN) The 20 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [3:0] of the 24-bit data are driven by the bits [19:16] of the THR registers to increase the dynamic range of the data sent to DSP. Position */
#define ASRC_VBPS_IN_VBPS_IN0_24_BIT          (ASRC_VBPS_IN_VBPS_IN0_24_BIT_Val << ASRC_VBPS_IN_VBPS_IN0_Pos) /* (ASRC_VBPS_IN) The 24 LSB of THR registers are entered to the DSP. Position */
#define ASRC_VBPS_IN_VBPS_IN0_32_BIT          (ASRC_VBPS_IN_VBPS_IN0_32_BIT_Val << ASRC_VBPS_IN_VBPS_IN0_Pos) /* (ASRC_VBPS_IN) The 24 MSB of THR registers are entered to the DSP. Position */
#define ASRC_VBPS_IN_VBPS_IN0_10_BIT          (ASRC_VBPS_IN_VBPS_IN0_10_BIT_Val << ASRC_VBPS_IN_VBPS_IN0_Pos) /* (ASRC_VBPS_IN) The 10 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [13:4] of the 24-bit data are driven by the 10 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [3:0] are driven by 0s. Position */
#define ASRC_VBPS_IN_VBPS_IN0_12_BIT          (ASRC_VBPS_IN_VBPS_IN0_12_BIT_Val << ASRC_VBPS_IN_VBPS_IN0_Pos) /* (ASRC_VBPS_IN) The 12 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [11:0] of the 24-bit data are driven by the bits [11:0] of the THR registers to increase the dynamic range of the data sent to DSP. Position */
#define ASRC_VBPS_IN_VBPS_IN0_14_BIT          (ASRC_VBPS_IN_VBPS_IN0_14_BIT_Val << ASRC_VBPS_IN_VBPS_IN0_Pos) /* (ASRC_VBPS_IN) The 14 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [9:0] of the 24-bit data are driven by the bits [13:4] of the THR registers to increase the dynamic range of the data sent to DSP. Position */
#define ASRC_VBPS_IN_VBPS_IN0_18_BIT          (ASRC_VBPS_IN_VBPS_IN0_18_BIT_Val << ASRC_VBPS_IN_VBPS_IN0_Pos) /* (ASRC_VBPS_IN) The 18 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [5:0] of the 24-bit data are driven by the bits [17:12] of the THR registers to increase the dynamic range of the data sent to DSP. Position */
#define ASRC_VBPS_IN_VBPS_IN1_Pos             _UINT32_(8)                                          /* (ASRC_VBPS_IN) Valid Bit Per Sample In of DSP 1 Position */
#define ASRC_VBPS_IN_VBPS_IN1_Msk             (_UINT32_(0xF) << ASRC_VBPS_IN_VBPS_IN1_Pos)         /* (ASRC_VBPS_IN) Valid Bit Per Sample In of DSP 1 Mask */
#define ASRC_VBPS_IN_VBPS_IN1(value)          (ASRC_VBPS_IN_VBPS_IN1_Msk & (_UINT32_(value) << ASRC_VBPS_IN_VBPS_IN1_Pos)) /* Assignment of value for VBPS_IN1 in the ASRC_VBPS_IN register */
#define   ASRC_VBPS_IN_VBPS_IN1_8_BIT_Val     _UINT32_(0x0)                                        /* (ASRC_VBPS_IN) The 8 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [15:8] of the 24-bit data are driven by the 8 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [7:0] are driven by 0s.  */
#define   ASRC_VBPS_IN_VBPS_IN1_16_BIT_Val    _UINT32_(0x1)                                        /* (ASRC_VBPS_IN) The 16 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [7:0] of the 24-bit data are driven by the bits [15:8] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN1_20_BIT_Val    _UINT32_(0x2)                                        /* (ASRC_VBPS_IN) The 20 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [3:0] of the 24-bit data are driven by the bits [19:16] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN1_24_BIT_Val    _UINT32_(0x3)                                        /* (ASRC_VBPS_IN) The 24 LSB of THR registers are entered to the DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN1_32_BIT_Val    _UINT32_(0x4)                                        /* (ASRC_VBPS_IN) The 24 MSB of THR registers are entered to the DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN1_10_BIT_Val    _UINT32_(0x5)                                        /* (ASRC_VBPS_IN) The 10 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [13:4] of the 24-bit data are driven by the 10 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [3:0] are driven by 0s.  */
#define   ASRC_VBPS_IN_VBPS_IN1_12_BIT_Val    _UINT32_(0x6)                                        /* (ASRC_VBPS_IN) The 12 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [11:0] of the 24-bit data are driven by the bits [11:0] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN1_14_BIT_Val    _UINT32_(0x7)                                        /* (ASRC_VBPS_IN) The 14 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [9:0] of the 24-bit data are driven by the bits [13:4] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN1_18_BIT_Val    _UINT32_(0x8)                                        /* (ASRC_VBPS_IN) The 18 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [5:0] of the 24-bit data are driven by the bits [17:12] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define ASRC_VBPS_IN_VBPS_IN1_8_BIT           (ASRC_VBPS_IN_VBPS_IN1_8_BIT_Val << ASRC_VBPS_IN_VBPS_IN1_Pos) /* (ASRC_VBPS_IN) The 8 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [15:8] of the 24-bit data are driven by the 8 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [7:0] are driven by 0s. Position */
#define ASRC_VBPS_IN_VBPS_IN1_16_BIT          (ASRC_VBPS_IN_VBPS_IN1_16_BIT_Val << ASRC_VBPS_IN_VBPS_IN1_Pos) /* (ASRC_VBPS_IN) The 16 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [7:0] of the 24-bit data are driven by the bits [15:8] of the THR registers to increase the dynamic range of the data sent to DSP. Position */
#define ASRC_VBPS_IN_VBPS_IN1_20_BIT          (ASRC_VBPS_IN_VBPS_IN1_20_BIT_Val << ASRC_VBPS_IN_VBPS_IN1_Pos) /* (ASRC_VBPS_IN) The 20 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [3:0] of the 24-bit data are driven by the bits [19:16] of the THR registers to increase the dynamic range of the data sent to DSP. Position */
#define ASRC_VBPS_IN_VBPS_IN1_24_BIT          (ASRC_VBPS_IN_VBPS_IN1_24_BIT_Val << ASRC_VBPS_IN_VBPS_IN1_Pos) /* (ASRC_VBPS_IN) The 24 LSB of THR registers are entered to the DSP. Position */
#define ASRC_VBPS_IN_VBPS_IN1_32_BIT          (ASRC_VBPS_IN_VBPS_IN1_32_BIT_Val << ASRC_VBPS_IN_VBPS_IN1_Pos) /* (ASRC_VBPS_IN) The 24 MSB of THR registers are entered to the DSP. Position */
#define ASRC_VBPS_IN_VBPS_IN1_10_BIT          (ASRC_VBPS_IN_VBPS_IN1_10_BIT_Val << ASRC_VBPS_IN_VBPS_IN1_Pos) /* (ASRC_VBPS_IN) The 10 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [13:4] of the 24-bit data are driven by the 10 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [3:0] are driven by 0s. Position */
#define ASRC_VBPS_IN_VBPS_IN1_12_BIT          (ASRC_VBPS_IN_VBPS_IN1_12_BIT_Val << ASRC_VBPS_IN_VBPS_IN1_Pos) /* (ASRC_VBPS_IN) The 12 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [11:0] of the 24-bit data are driven by the bits [11:0] of the THR registers to increase the dynamic range of the data sent to DSP. Position */
#define ASRC_VBPS_IN_VBPS_IN1_14_BIT          (ASRC_VBPS_IN_VBPS_IN1_14_BIT_Val << ASRC_VBPS_IN_VBPS_IN1_Pos) /* (ASRC_VBPS_IN) The 14 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [9:0] of the 24-bit data are driven by the bits [13:4] of the THR registers to increase the dynamic range of the data sent to DSP. Position */
#define ASRC_VBPS_IN_VBPS_IN1_18_BIT          (ASRC_VBPS_IN_VBPS_IN1_18_BIT_Val << ASRC_VBPS_IN_VBPS_IN1_Pos) /* (ASRC_VBPS_IN) The 18 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [5:0] of the 24-bit data are driven by the bits [17:12] of the THR registers to increase the dynamic range of the data sent to DSP. Position */
#define ASRC_VBPS_IN_VBPS_IN2_Pos             _UINT32_(16)                                         /* (ASRC_VBPS_IN) Valid Bit Per Sample In of DSP 2 Position */
#define ASRC_VBPS_IN_VBPS_IN2_Msk             (_UINT32_(0xF) << ASRC_VBPS_IN_VBPS_IN2_Pos)         /* (ASRC_VBPS_IN) Valid Bit Per Sample In of DSP 2 Mask */
#define ASRC_VBPS_IN_VBPS_IN2(value)          (ASRC_VBPS_IN_VBPS_IN2_Msk & (_UINT32_(value) << ASRC_VBPS_IN_VBPS_IN2_Pos)) /* Assignment of value for VBPS_IN2 in the ASRC_VBPS_IN register */
#define   ASRC_VBPS_IN_VBPS_IN2_8_BIT_Val     _UINT32_(0x0)                                        /* (ASRC_VBPS_IN) The 8 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [15:8] of the 24-bit data are driven by the 8 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [7:0] are driven by 0s.  */
#define   ASRC_VBPS_IN_VBPS_IN2_16_BIT_Val    _UINT32_(0x1)                                        /* (ASRC_VBPS_IN) The 16 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [7:0] of the 24-bit data are driven by the bits [15:8] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN2_20_BIT_Val    _UINT32_(0x2)                                        /* (ASRC_VBPS_IN) The 20 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [3:0] of the 24-bit data are driven by the bits [19:16] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN2_24_BIT_Val    _UINT32_(0x3)                                        /* (ASRC_VBPS_IN) The 24 LSB of THR registers are entered to the DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN2_32_BIT_Val    _UINT32_(0x4)                                        /* (ASRC_VBPS_IN) The 24 MSB of THR registers are entered to the DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN2_10_BIT_Val    _UINT32_(0x5)                                        /* (ASRC_VBPS_IN) The 10 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [13:4] of the 24-bit data are driven by the 10 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [3:0] are driven by 0s.  */
#define   ASRC_VBPS_IN_VBPS_IN2_12_BIT_Val    _UINT32_(0x6)                                        /* (ASRC_VBPS_IN) The 12 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [11:0] of the 24-bit data are driven by the bits [11:0] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN2_14_BIT_Val    _UINT32_(0x7)                                        /* (ASRC_VBPS_IN) The 14 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [9:0] of the 24-bit data are driven by the bits [13:4] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN2_18_BIT_Val    _UINT32_(0x8)                                        /* (ASRC_VBPS_IN) The 18 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [5:0] of the 24-bit data are driven by the bits [17:12] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define ASRC_VBPS_IN_VBPS_IN2_8_BIT           (ASRC_VBPS_IN_VBPS_IN2_8_BIT_Val << ASRC_VBPS_IN_VBPS_IN2_Pos) /* (ASRC_VBPS_IN) The 8 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [15:8] of the 24-bit data are driven by the 8 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [7:0] are driven by 0s. Position */
#define ASRC_VBPS_IN_VBPS_IN2_16_BIT          (ASRC_VBPS_IN_VBPS_IN2_16_BIT_Val << ASRC_VBPS_IN_VBPS_IN2_Pos) /* (ASRC_VBPS_IN) The 16 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [7:0] of the 24-bit data are driven by the bits [15:8] of the THR registers to increase the dynamic range of the data sent to DSP. Position */
#define ASRC_VBPS_IN_VBPS_IN2_20_BIT          (ASRC_VBPS_IN_VBPS_IN2_20_BIT_Val << ASRC_VBPS_IN_VBPS_IN2_Pos) /* (ASRC_VBPS_IN) The 20 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [3:0] of the 24-bit data are driven by the bits [19:16] of the THR registers to increase the dynamic range of the data sent to DSP. Position */
#define ASRC_VBPS_IN_VBPS_IN2_24_BIT          (ASRC_VBPS_IN_VBPS_IN2_24_BIT_Val << ASRC_VBPS_IN_VBPS_IN2_Pos) /* (ASRC_VBPS_IN) The 24 LSB of THR registers are entered to the DSP. Position */
#define ASRC_VBPS_IN_VBPS_IN2_32_BIT          (ASRC_VBPS_IN_VBPS_IN2_32_BIT_Val << ASRC_VBPS_IN_VBPS_IN2_Pos) /* (ASRC_VBPS_IN) The 24 MSB of THR registers are entered to the DSP. Position */
#define ASRC_VBPS_IN_VBPS_IN2_10_BIT          (ASRC_VBPS_IN_VBPS_IN2_10_BIT_Val << ASRC_VBPS_IN_VBPS_IN2_Pos) /* (ASRC_VBPS_IN) The 10 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [13:4] of the 24-bit data are driven by the 10 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [3:0] are driven by 0s. Position */
#define ASRC_VBPS_IN_VBPS_IN2_12_BIT          (ASRC_VBPS_IN_VBPS_IN2_12_BIT_Val << ASRC_VBPS_IN_VBPS_IN2_Pos) /* (ASRC_VBPS_IN) The 12 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [11:0] of the 24-bit data are driven by the bits [11:0] of the THR registers to increase the dynamic range of the data sent to DSP. Position */
#define ASRC_VBPS_IN_VBPS_IN2_14_BIT          (ASRC_VBPS_IN_VBPS_IN2_14_BIT_Val << ASRC_VBPS_IN_VBPS_IN2_Pos) /* (ASRC_VBPS_IN) The 14 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [9:0] of the 24-bit data are driven by the bits [13:4] of the THR registers to increase the dynamic range of the data sent to DSP. Position */
#define ASRC_VBPS_IN_VBPS_IN2_18_BIT          (ASRC_VBPS_IN_VBPS_IN2_18_BIT_Val << ASRC_VBPS_IN_VBPS_IN2_Pos) /* (ASRC_VBPS_IN) The 18 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [5:0] of the 24-bit data are driven by the bits [17:12] of the THR registers to increase the dynamic range of the data sent to DSP. Position */
#define ASRC_VBPS_IN_VBPS_IN3_Pos             _UINT32_(24)                                         /* (ASRC_VBPS_IN) Valid Bit Per Sample In of DSP 3 Position */
#define ASRC_VBPS_IN_VBPS_IN3_Msk             (_UINT32_(0xF) << ASRC_VBPS_IN_VBPS_IN3_Pos)         /* (ASRC_VBPS_IN) Valid Bit Per Sample In of DSP 3 Mask */
#define ASRC_VBPS_IN_VBPS_IN3(value)          (ASRC_VBPS_IN_VBPS_IN3_Msk & (_UINT32_(value) << ASRC_VBPS_IN_VBPS_IN3_Pos)) /* Assignment of value for VBPS_IN3 in the ASRC_VBPS_IN register */
#define   ASRC_VBPS_IN_VBPS_IN3_8_BIT_Val     _UINT32_(0x0)                                        /* (ASRC_VBPS_IN) The 8 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [15:8] of the 24-bit data are driven by the 8 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [7:0] are driven by 0s.  */
#define   ASRC_VBPS_IN_VBPS_IN3_16_BIT_Val    _UINT32_(0x1)                                        /* (ASRC_VBPS_IN) The 16 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [7:0] of the 24-bit data are driven by the bits [15:8] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN3_20_BIT_Val    _UINT32_(0x2)                                        /* (ASRC_VBPS_IN) The 20 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [3:0] of the 24-bit data are driven by the bits [19:16] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN3_24_BIT_Val    _UINT32_(0x3)                                        /* (ASRC_VBPS_IN) The 24 LSB of THR registers are entered to the DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN3_32_BIT_Val    _UINT32_(0x4)                                        /* (ASRC_VBPS_IN) The 24 MSB of THR registers are entered to the DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN3_10_BIT_Val    _UINT32_(0x5)                                        /* (ASRC_VBPS_IN) The 10 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [13:4] of the 24-bit data are driven by the 10 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [3:0] are driven by 0s.  */
#define   ASRC_VBPS_IN_VBPS_IN3_12_BIT_Val    _UINT32_(0x6)                                        /* (ASRC_VBPS_IN) The 12 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [11:0] of the 24-bit data are driven by the bits [11:0] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN3_14_BIT_Val    _UINT32_(0x7)                                        /* (ASRC_VBPS_IN) The 14 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [9:0] of the 24-bit data are driven by the bits [13:4] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define   ASRC_VBPS_IN_VBPS_IN3_18_BIT_Val    _UINT32_(0x8)                                        /* (ASRC_VBPS_IN) The 18 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [5:0] of the 24-bit data are driven by the bits [17:12] of the THR registers to increase the dynamic range of the data sent to DSP.  */
#define ASRC_VBPS_IN_VBPS_IN3_8_BIT           (ASRC_VBPS_IN_VBPS_IN3_8_BIT_Val << ASRC_VBPS_IN_VBPS_IN3_Pos) /* (ASRC_VBPS_IN) The 8 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [15:8] of the 24-bit data are driven by the 8 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [7:0] are driven by 0s. Position */
#define ASRC_VBPS_IN_VBPS_IN3_16_BIT          (ASRC_VBPS_IN_VBPS_IN3_16_BIT_Val << ASRC_VBPS_IN_VBPS_IN3_Pos) /* (ASRC_VBPS_IN) The 16 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [7:0] of the 24-bit data are driven by the bits [15:8] of the THR registers to increase the dynamic range of the data sent to DSP. Position */
#define ASRC_VBPS_IN_VBPS_IN3_20_BIT          (ASRC_VBPS_IN_VBPS_IN3_20_BIT_Val << ASRC_VBPS_IN_VBPS_IN3_Pos) /* (ASRC_VBPS_IN) The 20 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [3:0] of the 24-bit data are driven by the bits [19:16] of the THR registers to increase the dynamic range of the data sent to DSP. Position */
#define ASRC_VBPS_IN_VBPS_IN3_24_BIT          (ASRC_VBPS_IN_VBPS_IN3_24_BIT_Val << ASRC_VBPS_IN_VBPS_IN3_Pos) /* (ASRC_VBPS_IN) The 24 LSB of THR registers are entered to the DSP. Position */
#define ASRC_VBPS_IN_VBPS_IN3_32_BIT          (ASRC_VBPS_IN_VBPS_IN3_32_BIT_Val << ASRC_VBPS_IN_VBPS_IN3_Pos) /* (ASRC_VBPS_IN) The 24 MSB of THR registers are entered to the DSP. Position */
#define ASRC_VBPS_IN_VBPS_IN3_10_BIT          (ASRC_VBPS_IN_VBPS_IN3_10_BIT_Val << ASRC_VBPS_IN_VBPS_IN3_Pos) /* (ASRC_VBPS_IN) The 10 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [13:4] of the 24-bit data are driven by the 10 LSB of THR registers to increase the dynamic range of the data sent to DSP. The bits [3:0] are driven by 0s. Position */
#define ASRC_VBPS_IN_VBPS_IN3_12_BIT          (ASRC_VBPS_IN_VBPS_IN3_12_BIT_Val << ASRC_VBPS_IN_VBPS_IN3_Pos) /* (ASRC_VBPS_IN) The 12 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [11:0] of the 24-bit data are driven by the bits [11:0] of the THR registers to increase the dynamic range of the data sent to DSP. Position */
#define ASRC_VBPS_IN_VBPS_IN3_14_BIT          (ASRC_VBPS_IN_VBPS_IN3_14_BIT_Val << ASRC_VBPS_IN_VBPS_IN3_Pos) /* (ASRC_VBPS_IN) The 14 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [9:0] of the 24-bit data are driven by the bits [13:4] of the THR registers to increase the dynamic range of the data sent to DSP. Position */
#define ASRC_VBPS_IN_VBPS_IN3_18_BIT          (ASRC_VBPS_IN_VBPS_IN3_18_BIT_Val << ASRC_VBPS_IN_VBPS_IN3_Pos) /* (ASRC_VBPS_IN) The 18 LSB of THR registers are left aligned on 24-bit data entered to the DSP. The bits [5:0] of the 24-bit data are driven by the bits [17:12] of the THR registers to increase the dynamic range of the data sent to DSP. Position */
#define ASRC_VBPS_IN_Msk                      _UINT32_(0x0F0F0F0F)                                 /* (ASRC_VBPS_IN) Register Mask  */


/* -------- ASRC_VBPS_OUT : (ASRC Offset: 0x1C) (R/W 32) Valid Bit Per Sample Out Register -------- */
#define ASRC_VBPS_OUT_RESETVALUE              _UINT32_(0x00)                                       /*  (ASRC_VBPS_OUT) Valid Bit Per Sample Out Register  Reset Value */

#define ASRC_VBPS_OUT_VBPS_OUT0_Pos           _UINT32_(0)                                          /* (ASRC_VBPS_OUT) Valid Bit Per Sample Out of DSP 0 Position */
#define ASRC_VBPS_OUT_VBPS_OUT0_Msk           (_UINT32_(0xF) << ASRC_VBPS_OUT_VBPS_OUT0_Pos)       /* (ASRC_VBPS_OUT) Valid Bit Per Sample Out of DSP 0 Mask */
#define ASRC_VBPS_OUT_VBPS_OUT0(value)        (ASRC_VBPS_OUT_VBPS_OUT0_Msk & (_UINT32_(value) << ASRC_VBPS_OUT_VBPS_OUT0_Pos)) /* Assignment of value for VBPS_OUT0 in the ASRC_VBPS_OUT register */
#define   ASRC_VBPS_OUT_VBPS_OUT0_8_BIT_Val   _UINT32_(0x0)                                        /* (ASRC_VBPS_OUT) The 8 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT0_16_BIT_Val  _UINT32_(0x1)                                        /* (ASRC_VBPS_OUT) The 16 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT0_20_BIT_Val  _UINT32_(0x2)                                        /* (ASRC_VBPS_OUT) The 20 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT0_24_BIT_Val  _UINT32_(0x3)                                        /* (ASRC_VBPS_OUT) The 24 LSB of RHR registers are read from the 24-bit DSP output.  */
#define   ASRC_VBPS_OUT_VBPS_OUT0_32_BIT_Val  _UINT32_(0x4)                                        /* (ASRC_VBPS_OUT) The 24 MSB of RHR registers are the 24-bit output of the DSP. The 8 LSB of the RHR are driven by bits [22:15] of the DSP output.  */
#define   ASRC_VBPS_OUT_VBPS_OUT0_10_BIT_Val  _UINT32_(0x5)                                        /* (ASRC_VBPS_OUT) The 10 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT0_12_BIT_Val  _UINT32_(0x6)                                        /* (ASRC_VBPS_OUT) The 12 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT0_14_BIT_Val  _UINT32_(0x7)                                        /* (ASRC_VBPS_OUT) The 14 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT0_18_BIT_Val  _UINT32_(0x8)                                        /* (ASRC_VBPS_OUT) The 18 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define ASRC_VBPS_OUT_VBPS_OUT0_8_BIT         (ASRC_VBPS_OUT_VBPS_OUT0_8_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT0_Pos) /* (ASRC_VBPS_OUT) The 8 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position */
#define ASRC_VBPS_OUT_VBPS_OUT0_16_BIT        (ASRC_VBPS_OUT_VBPS_OUT0_16_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT0_Pos) /* (ASRC_VBPS_OUT) The 16 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position */
#define ASRC_VBPS_OUT_VBPS_OUT0_20_BIT        (ASRC_VBPS_OUT_VBPS_OUT0_20_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT0_Pos) /* (ASRC_VBPS_OUT) The 20 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position */
#define ASRC_VBPS_OUT_VBPS_OUT0_24_BIT        (ASRC_VBPS_OUT_VBPS_OUT0_24_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT0_Pos) /* (ASRC_VBPS_OUT) The 24 LSB of RHR registers are read from the 24-bit DSP output. Position */
#define ASRC_VBPS_OUT_VBPS_OUT0_32_BIT        (ASRC_VBPS_OUT_VBPS_OUT0_32_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT0_Pos) /* (ASRC_VBPS_OUT) The 24 MSB of RHR registers are the 24-bit output of the DSP. The 8 LSB of the RHR are driven by bits [22:15] of the DSP output. Position */
#define ASRC_VBPS_OUT_VBPS_OUT0_10_BIT        (ASRC_VBPS_OUT_VBPS_OUT0_10_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT0_Pos) /* (ASRC_VBPS_OUT) The 10 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position */
#define ASRC_VBPS_OUT_VBPS_OUT0_12_BIT        (ASRC_VBPS_OUT_VBPS_OUT0_12_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT0_Pos) /* (ASRC_VBPS_OUT) The 12 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position */
#define ASRC_VBPS_OUT_VBPS_OUT0_14_BIT        (ASRC_VBPS_OUT_VBPS_OUT0_14_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT0_Pos) /* (ASRC_VBPS_OUT) The 14 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position */
#define ASRC_VBPS_OUT_VBPS_OUT0_18_BIT        (ASRC_VBPS_OUT_VBPS_OUT0_18_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT0_Pos) /* (ASRC_VBPS_OUT) The 18 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position */
#define ASRC_VBPS_OUT_VBPS_OUT1_Pos           _UINT32_(8)                                          /* (ASRC_VBPS_OUT) Valid Bit Per Sample Out of DSP 1 Position */
#define ASRC_VBPS_OUT_VBPS_OUT1_Msk           (_UINT32_(0xF) << ASRC_VBPS_OUT_VBPS_OUT1_Pos)       /* (ASRC_VBPS_OUT) Valid Bit Per Sample Out of DSP 1 Mask */
#define ASRC_VBPS_OUT_VBPS_OUT1(value)        (ASRC_VBPS_OUT_VBPS_OUT1_Msk & (_UINT32_(value) << ASRC_VBPS_OUT_VBPS_OUT1_Pos)) /* Assignment of value for VBPS_OUT1 in the ASRC_VBPS_OUT register */
#define   ASRC_VBPS_OUT_VBPS_OUT1_8_BIT_Val   _UINT32_(0x0)                                        /* (ASRC_VBPS_OUT) The 8 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT1_16_BIT_Val  _UINT32_(0x1)                                        /* (ASRC_VBPS_OUT) The 16 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT1_20_BIT_Val  _UINT32_(0x2)                                        /* (ASRC_VBPS_OUT) The 20 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT1_24_BIT_Val  _UINT32_(0x3)                                        /* (ASRC_VBPS_OUT) The 24 LSB of RHR registers are read from the 24-bit DSP output.  */
#define   ASRC_VBPS_OUT_VBPS_OUT1_32_BIT_Val  _UINT32_(0x4)                                        /* (ASRC_VBPS_OUT) The 24 MSB of RHR registers are the 24-bit output of the DSP. The 8 LSB of the RHR are driven by bits [22:15] of the DSP output.  */
#define   ASRC_VBPS_OUT_VBPS_OUT1_10_BIT_Val  _UINT32_(0x5)                                        /* (ASRC_VBPS_OUT) The 10 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT1_12_BIT_Val  _UINT32_(0x6)                                        /* (ASRC_VBPS_OUT) The 12 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT1_14_BIT_Val  _UINT32_(0x7)                                        /* (ASRC_VBPS_OUT) The 14 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT1_18_BIT_Val  _UINT32_(0x8)                                        /* (ASRC_VBPS_OUT) The 18 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define ASRC_VBPS_OUT_VBPS_OUT1_8_BIT         (ASRC_VBPS_OUT_VBPS_OUT1_8_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT1_Pos) /* (ASRC_VBPS_OUT) The 8 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position */
#define ASRC_VBPS_OUT_VBPS_OUT1_16_BIT        (ASRC_VBPS_OUT_VBPS_OUT1_16_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT1_Pos) /* (ASRC_VBPS_OUT) The 16 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position */
#define ASRC_VBPS_OUT_VBPS_OUT1_20_BIT        (ASRC_VBPS_OUT_VBPS_OUT1_20_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT1_Pos) /* (ASRC_VBPS_OUT) The 20 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position */
#define ASRC_VBPS_OUT_VBPS_OUT1_24_BIT        (ASRC_VBPS_OUT_VBPS_OUT1_24_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT1_Pos) /* (ASRC_VBPS_OUT) The 24 LSB of RHR registers are read from the 24-bit DSP output. Position */
#define ASRC_VBPS_OUT_VBPS_OUT1_32_BIT        (ASRC_VBPS_OUT_VBPS_OUT1_32_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT1_Pos) /* (ASRC_VBPS_OUT) The 24 MSB of RHR registers are the 24-bit output of the DSP. The 8 LSB of the RHR are driven by bits [22:15] of the DSP output. Position */
#define ASRC_VBPS_OUT_VBPS_OUT1_10_BIT        (ASRC_VBPS_OUT_VBPS_OUT1_10_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT1_Pos) /* (ASRC_VBPS_OUT) The 10 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position */
#define ASRC_VBPS_OUT_VBPS_OUT1_12_BIT        (ASRC_VBPS_OUT_VBPS_OUT1_12_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT1_Pos) /* (ASRC_VBPS_OUT) The 12 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position */
#define ASRC_VBPS_OUT_VBPS_OUT1_14_BIT        (ASRC_VBPS_OUT_VBPS_OUT1_14_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT1_Pos) /* (ASRC_VBPS_OUT) The 14 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position */
#define ASRC_VBPS_OUT_VBPS_OUT1_18_BIT        (ASRC_VBPS_OUT_VBPS_OUT1_18_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT1_Pos) /* (ASRC_VBPS_OUT) The 18 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position */
#define ASRC_VBPS_OUT_VBPS_OUT2_Pos           _UINT32_(16)                                         /* (ASRC_VBPS_OUT) Valid Bit Per Sample Out of DSP 2 Position */
#define ASRC_VBPS_OUT_VBPS_OUT2_Msk           (_UINT32_(0xF) << ASRC_VBPS_OUT_VBPS_OUT2_Pos)       /* (ASRC_VBPS_OUT) Valid Bit Per Sample Out of DSP 2 Mask */
#define ASRC_VBPS_OUT_VBPS_OUT2(value)        (ASRC_VBPS_OUT_VBPS_OUT2_Msk & (_UINT32_(value) << ASRC_VBPS_OUT_VBPS_OUT2_Pos)) /* Assignment of value for VBPS_OUT2 in the ASRC_VBPS_OUT register */
#define   ASRC_VBPS_OUT_VBPS_OUT2_8_BIT_Val   _UINT32_(0x0)                                        /* (ASRC_VBPS_OUT) The 8 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT2_16_BIT_Val  _UINT32_(0x1)                                        /* (ASRC_VBPS_OUT) The 16 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT2_20_BIT_Val  _UINT32_(0x2)                                        /* (ASRC_VBPS_OUT) The 20 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT2_24_BIT_Val  _UINT32_(0x3)                                        /* (ASRC_VBPS_OUT) The 24 LSB of RHR registers are read from the 24-bit DSP output.  */
#define   ASRC_VBPS_OUT_VBPS_OUT2_32_BIT_Val  _UINT32_(0x4)                                        /* (ASRC_VBPS_OUT) The 24 MSB of RHR registers are the 24-bit output of the DSP. The 8 LSB of the RHR are driven by bits [22:15] of the DSP output.  */
#define   ASRC_VBPS_OUT_VBPS_OUT2_10_BIT_Val  _UINT32_(0x5)                                        /* (ASRC_VBPS_OUT) The 10 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT2_12_BIT_Val  _UINT32_(0x6)                                        /* (ASRC_VBPS_OUT) The 12 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT2_14_BIT_Val  _UINT32_(0x7)                                        /* (ASRC_VBPS_OUT) The 14 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT2_18_BIT_Val  _UINT32_(0x8)                                        /* (ASRC_VBPS_OUT) The 18 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define ASRC_VBPS_OUT_VBPS_OUT2_8_BIT         (ASRC_VBPS_OUT_VBPS_OUT2_8_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT2_Pos) /* (ASRC_VBPS_OUT) The 8 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position */
#define ASRC_VBPS_OUT_VBPS_OUT2_16_BIT        (ASRC_VBPS_OUT_VBPS_OUT2_16_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT2_Pos) /* (ASRC_VBPS_OUT) The 16 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position */
#define ASRC_VBPS_OUT_VBPS_OUT2_20_BIT        (ASRC_VBPS_OUT_VBPS_OUT2_20_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT2_Pos) /* (ASRC_VBPS_OUT) The 20 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position */
#define ASRC_VBPS_OUT_VBPS_OUT2_24_BIT        (ASRC_VBPS_OUT_VBPS_OUT2_24_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT2_Pos) /* (ASRC_VBPS_OUT) The 24 LSB of RHR registers are read from the 24-bit DSP output. Position */
#define ASRC_VBPS_OUT_VBPS_OUT2_32_BIT        (ASRC_VBPS_OUT_VBPS_OUT2_32_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT2_Pos) /* (ASRC_VBPS_OUT) The 24 MSB of RHR registers are the 24-bit output of the DSP. The 8 LSB of the RHR are driven by bits [22:15] of the DSP output. Position */
#define ASRC_VBPS_OUT_VBPS_OUT2_10_BIT        (ASRC_VBPS_OUT_VBPS_OUT2_10_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT2_Pos) /* (ASRC_VBPS_OUT) The 10 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position */
#define ASRC_VBPS_OUT_VBPS_OUT2_12_BIT        (ASRC_VBPS_OUT_VBPS_OUT2_12_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT2_Pos) /* (ASRC_VBPS_OUT) The 12 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position */
#define ASRC_VBPS_OUT_VBPS_OUT2_14_BIT        (ASRC_VBPS_OUT_VBPS_OUT2_14_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT2_Pos) /* (ASRC_VBPS_OUT) The 14 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position */
#define ASRC_VBPS_OUT_VBPS_OUT2_18_BIT        (ASRC_VBPS_OUT_VBPS_OUT2_18_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT2_Pos) /* (ASRC_VBPS_OUT) The 18 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position */
#define ASRC_VBPS_OUT_VBPS_OUT3_Pos           _UINT32_(24)                                         /* (ASRC_VBPS_OUT) Valid Bit Per Sample Out of DSP 3 Position */
#define ASRC_VBPS_OUT_VBPS_OUT3_Msk           (_UINT32_(0xF) << ASRC_VBPS_OUT_VBPS_OUT3_Pos)       /* (ASRC_VBPS_OUT) Valid Bit Per Sample Out of DSP 3 Mask */
#define ASRC_VBPS_OUT_VBPS_OUT3(value)        (ASRC_VBPS_OUT_VBPS_OUT3_Msk & (_UINT32_(value) << ASRC_VBPS_OUT_VBPS_OUT3_Pos)) /* Assignment of value for VBPS_OUT3 in the ASRC_VBPS_OUT register */
#define   ASRC_VBPS_OUT_VBPS_OUT3_8_BIT_Val   _UINT32_(0x0)                                        /* (ASRC_VBPS_OUT) The 8 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT3_16_BIT_Val  _UINT32_(0x1)                                        /* (ASRC_VBPS_OUT) The 16 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT3_20_BIT_Val  _UINT32_(0x2)                                        /* (ASRC_VBPS_OUT) The 20 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT3_24_BIT_Val  _UINT32_(0x3)                                        /* (ASRC_VBPS_OUT) The 24 LSB of RHR registers are read from the 24-bit DSP output.  */
#define   ASRC_VBPS_OUT_VBPS_OUT3_32_BIT_Val  _UINT32_(0x4)                                        /* (ASRC_VBPS_OUT) The 24 MSB of RHR registers are the 24-bit output of the DSP. The 8 LSB of the RHR are driven by bits [22:15] of the DSP output.  */
#define   ASRC_VBPS_OUT_VBPS_OUT3_10_BIT_Val  _UINT32_(0x5)                                        /* (ASRC_VBPS_OUT) The 10 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT3_12_BIT_Val  _UINT32_(0x6)                                        /* (ASRC_VBPS_OUT) The 12 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT3_14_BIT_Val  _UINT32_(0x7)                                        /* (ASRC_VBPS_OUT) The 14 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define   ASRC_VBPS_OUT_VBPS_OUT3_18_BIT_Val  _UINT32_(0x8)                                        /* (ASRC_VBPS_OUT) The 18 MSB of the 24-bit read from the DSP output are right-aligned on RHR.  */
#define ASRC_VBPS_OUT_VBPS_OUT3_8_BIT         (ASRC_VBPS_OUT_VBPS_OUT3_8_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT3_Pos) /* (ASRC_VBPS_OUT) The 8 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position */
#define ASRC_VBPS_OUT_VBPS_OUT3_16_BIT        (ASRC_VBPS_OUT_VBPS_OUT3_16_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT3_Pos) /* (ASRC_VBPS_OUT) The 16 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position */
#define ASRC_VBPS_OUT_VBPS_OUT3_20_BIT        (ASRC_VBPS_OUT_VBPS_OUT3_20_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT3_Pos) /* (ASRC_VBPS_OUT) The 20 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position */
#define ASRC_VBPS_OUT_VBPS_OUT3_24_BIT        (ASRC_VBPS_OUT_VBPS_OUT3_24_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT3_Pos) /* (ASRC_VBPS_OUT) The 24 LSB of RHR registers are read from the 24-bit DSP output. Position */
#define ASRC_VBPS_OUT_VBPS_OUT3_32_BIT        (ASRC_VBPS_OUT_VBPS_OUT3_32_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT3_Pos) /* (ASRC_VBPS_OUT) The 24 MSB of RHR registers are the 24-bit output of the DSP. The 8 LSB of the RHR are driven by bits [22:15] of the DSP output. Position */
#define ASRC_VBPS_OUT_VBPS_OUT3_10_BIT        (ASRC_VBPS_OUT_VBPS_OUT3_10_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT3_Pos) /* (ASRC_VBPS_OUT) The 10 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position */
#define ASRC_VBPS_OUT_VBPS_OUT3_12_BIT        (ASRC_VBPS_OUT_VBPS_OUT3_12_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT3_Pos) /* (ASRC_VBPS_OUT) The 12 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position */
#define ASRC_VBPS_OUT_VBPS_OUT3_14_BIT        (ASRC_VBPS_OUT_VBPS_OUT3_14_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT3_Pos) /* (ASRC_VBPS_OUT) The 14 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position */
#define ASRC_VBPS_OUT_VBPS_OUT3_18_BIT        (ASRC_VBPS_OUT_VBPS_OUT3_18_BIT_Val << ASRC_VBPS_OUT_VBPS_OUT3_Pos) /* (ASRC_VBPS_OUT) The 18 MSB of the 24-bit read from the DSP output are right-aligned on RHR. Position */
#define ASRC_VBPS_OUT_Msk                     _UINT32_(0x0F0F0F0F)                                 /* (ASRC_VBPS_OUT) Register Mask  */


/* -------- ASRC_CH_CONF : (ASRC Offset: 0x20) (R/W 32) Channel Configuration Register -------- */
#define ASRC_CH_CONF_RESETVALUE               _UINT32_(0x00)                                       /*  (ASRC_CH_CONF) Channel Configuration Register  Reset Value */

#define ASRC_CH_CONF_THROPMODE_Pos            _UINT32_(0)                                          /* (ASRC_CH_CONF) Transmit Holding Registers Operating Mode Position */
#define ASRC_CH_CONF_THROPMODE_Msk            (_UINT32_(0x7) << ASRC_CH_CONF_THROPMODE_Pos)        /* (ASRC_CH_CONF) Transmit Holding Registers Operating Mode Mask */
#define ASRC_CH_CONF_THROPMODE(value)         (ASRC_CH_CONF_THROPMODE_Msk & (_UINT32_(value) << ASRC_CH_CONF_THROPMODE_Pos)) /* Assignment of value for THROPMODE in the ASRC_CH_CONF register */
#define   ASRC_CH_CONF_THROPMODE_THRX_UPTO_2CH_Val _UINT32_(0x0)                                        /* (ASRC_CH_CONF) The ASRC_THRx can receive up to 2 audio streams (e.g. 1 stereo channel for each ASRC_THR). Each ASRC_THRx is routed on each Stereo DSP x.  */
#define   ASRC_CH_CONF_THROPMODE_THR0_UPTO_4CH_Val _UINT32_(0x1)                                        /* (ASRC_CH_CONF) The ASRC_THR0 can receive up to 4 audio streams (e.g. up to 2 stereo channels on ASRC_THR0). The ARSC_THR1 can receive up to 2 audio streams (e.g. 1 stereo channel on ASRC_THR1). The ARSC_THR2 can receive up to 2 audio streams (e.g. 1 stereo channel on ASRC_THR2). ASRC_THR3 must not be used.  */
#define   ASRC_CH_CONF_THROPMODE_THR01_UPTO_4CH_Val _UINT32_(0x2)                                        /* (ASRC_CH_CONF) The ASRC_THR0 can receive up to 4 audio streams (e.g. up to 2 stereo channels on ASRC_THR0). The ASRC_THR1 can receive up to 4 audio streams (e.g. up to 2 stereo channels on ASRC_THR1). ASRC_THR2 and ASRC_THR3 must not be used.  */
#define   ASRC_CH_CONF_THROPMODE_THR0_UPTO_6CH_Val _UINT32_(0x3)                                        /* (ASRC_CH_CONF) The ASRC_THR0 can receive up to 6 audio streams (e.g. up to 3 stereo channels on ASRC_THR0). The ARSC_THR1 can receive up to 2 audio streams (e.g. 1 stereo channel on ASRC_THR1) ASRC_THR2 and ASRC_THR3 must not be used.  */
#define   ASRC_CH_CONF_THROPMODE_THR0_UPTO_8CH_Val _UINT32_(0x4)                                        /* (ASRC_CH_CONF) The ASRC_THR0 can receive up to 8 audio streams (e.g. up to 4 stereo channels on ASRC_THR0). ASRC_THR1,ASRC_THR2 and ASRC_RHR3 must not be used.  */
#define ASRC_CH_CONF_THROPMODE_THRX_UPTO_2CH  (ASRC_CH_CONF_THROPMODE_THRX_UPTO_2CH_Val << ASRC_CH_CONF_THROPMODE_Pos) /* (ASRC_CH_CONF) The ASRC_THRx can receive up to 2 audio streams (e.g. 1 stereo channel for each ASRC_THR). Each ASRC_THRx is routed on each Stereo DSP x. Position */
#define ASRC_CH_CONF_THROPMODE_THR0_UPTO_4CH  (ASRC_CH_CONF_THROPMODE_THR0_UPTO_4CH_Val << ASRC_CH_CONF_THROPMODE_Pos) /* (ASRC_CH_CONF) The ASRC_THR0 can receive up to 4 audio streams (e.g. up to 2 stereo channels on ASRC_THR0). The ARSC_THR1 can receive up to 2 audio streams (e.g. 1 stereo channel on ASRC_THR1). The ARSC_THR2 can receive up to 2 audio streams (e.g. 1 stereo channel on ASRC_THR2). ASRC_THR3 must not be used. Position */
#define ASRC_CH_CONF_THROPMODE_THR01_UPTO_4CH (ASRC_CH_CONF_THROPMODE_THR01_UPTO_4CH_Val << ASRC_CH_CONF_THROPMODE_Pos) /* (ASRC_CH_CONF) The ASRC_THR0 can receive up to 4 audio streams (e.g. up to 2 stereo channels on ASRC_THR0). The ASRC_THR1 can receive up to 4 audio streams (e.g. up to 2 stereo channels on ASRC_THR1). ASRC_THR2 and ASRC_THR3 must not be used. Position */
#define ASRC_CH_CONF_THROPMODE_THR0_UPTO_6CH  (ASRC_CH_CONF_THROPMODE_THR0_UPTO_6CH_Val << ASRC_CH_CONF_THROPMODE_Pos) /* (ASRC_CH_CONF) The ASRC_THR0 can receive up to 6 audio streams (e.g. up to 3 stereo channels on ASRC_THR0). The ARSC_THR1 can receive up to 2 audio streams (e.g. 1 stereo channel on ASRC_THR1) ASRC_THR2 and ASRC_THR3 must not be used. Position */
#define ASRC_CH_CONF_THROPMODE_THR0_UPTO_8CH  (ASRC_CH_CONF_THROPMODE_THR0_UPTO_8CH_Val << ASRC_CH_CONF_THROPMODE_Pos) /* (ASRC_CH_CONF) The ASRC_THR0 can receive up to 8 audio streams (e.g. up to 4 stereo channels on ASRC_THR0). ASRC_THR1,ASRC_THR2 and ASRC_RHR3 must not be used. Position */
#define ASRC_CH_CONF_RHROPMODE_Pos            _UINT32_(4)                                          /* (ASRC_CH_CONF) Receive Holding Registers Operating Mode Position */
#define ASRC_CH_CONF_RHROPMODE_Msk            (_UINT32_(0x7) << ASRC_CH_CONF_RHROPMODE_Pos)        /* (ASRC_CH_CONF) Receive Holding Registers Operating Mode Mask */
#define ASRC_CH_CONF_RHROPMODE(value)         (ASRC_CH_CONF_RHROPMODE_Msk & (_UINT32_(value) << ASRC_CH_CONF_RHROPMODE_Pos)) /* Assignment of value for RHROPMODE in the ASRC_CH_CONF register */
#define   ASRC_CH_CONF_RHROPMODE_RHRX_UPTO_2CH_Val _UINT32_(0x0)                                        /* (ASRC_CH_CONF) The ASRC_RHRx can receive up to 2 audio streams (e.g. 1 stereo channel for each ASRC_RHR). Each ASRC_RHRx is routed on each Stereo DSP x.  */
#define   ASRC_CH_CONF_RHROPMODE_RHR0_UPTO_4CH_Val _UINT32_(0x1)                                        /* (ASRC_CH_CONF) The ASRC_RHR0 can receive up to 4 audio streams (e.g. up to 2 stereo channels on ASRC_RHR0). The ARSC_RHR1 can receive up to 2 audio streams (e.g. 1 stereo channel on ASRC_RHR1). The ARSC_RHR2 can receive up to 2 audio streams (e.g. 1 stereo channel on ASRC_RHR2). ASRC_RHR3 must not be used.  */
#define   ASRC_CH_CONF_RHROPMODE_RHR01_UPTO_4CH_Val _UINT32_(0x2)                                        /* (ASRC_CH_CONF) The ASRC_RHR0 can receive up to 4 audio streams (e.g. up to 2 stereo channels on ASRC_RHR0). The ASRC_RHR1 can receive up to 4 audio streams (e.g. up to 2 stereo channels on ASRC_RHR1). ASRC_RHR2 and ASRC_RHR3 must not be used.  */
#define   ASRC_CH_CONF_RHROPMODE_RHR0_UPTO_6CH_Val _UINT32_(0x3)                                        /* (ASRC_CH_CONF) The ASRC_RHR0 can receive up to 6 audio streams (e.g. up to 3 stereo channels on ASRC_RHR0). The ARSC_RHR1 can receive up to 2 audio streams (e.g. 1 stereo channel on ASRC_RHR1) ASRC_RHR2 and ASRC_RHR3 must not be used.  */
#define   ASRC_CH_CONF_RHROPMODE_RHR0_UPTO_8CH_Val _UINT32_(0x4)                                        /* (ASRC_CH_CONF) The ASRC_RHR0 can receive up to 8 audio streams (e.g. up to 4 stereo channels on ASRC_RHR0). ASRC_RHR1,ASRC_RHR2 and ASRC_RHR3 must not be used.  */
#define ASRC_CH_CONF_RHROPMODE_RHRX_UPTO_2CH  (ASRC_CH_CONF_RHROPMODE_RHRX_UPTO_2CH_Val << ASRC_CH_CONF_RHROPMODE_Pos) /* (ASRC_CH_CONF) The ASRC_RHRx can receive up to 2 audio streams (e.g. 1 stereo channel for each ASRC_RHR). Each ASRC_RHRx is routed on each Stereo DSP x. Position */
#define ASRC_CH_CONF_RHROPMODE_RHR0_UPTO_4CH  (ASRC_CH_CONF_RHROPMODE_RHR0_UPTO_4CH_Val << ASRC_CH_CONF_RHROPMODE_Pos) /* (ASRC_CH_CONF) The ASRC_RHR0 can receive up to 4 audio streams (e.g. up to 2 stereo channels on ASRC_RHR0). The ARSC_RHR1 can receive up to 2 audio streams (e.g. 1 stereo channel on ASRC_RHR1). The ARSC_RHR2 can receive up to 2 audio streams (e.g. 1 stereo channel on ASRC_RHR2). ASRC_RHR3 must not be used. Position */
#define ASRC_CH_CONF_RHROPMODE_RHR01_UPTO_4CH (ASRC_CH_CONF_RHROPMODE_RHR01_UPTO_4CH_Val << ASRC_CH_CONF_RHROPMODE_Pos) /* (ASRC_CH_CONF) The ASRC_RHR0 can receive up to 4 audio streams (e.g. up to 2 stereo channels on ASRC_RHR0). The ASRC_RHR1 can receive up to 4 audio streams (e.g. up to 2 stereo channels on ASRC_RHR1). ASRC_RHR2 and ASRC_RHR3 must not be used. Position */
#define ASRC_CH_CONF_RHROPMODE_RHR0_UPTO_6CH  (ASRC_CH_CONF_RHROPMODE_RHR0_UPTO_6CH_Val << ASRC_CH_CONF_RHROPMODE_Pos) /* (ASRC_CH_CONF) The ASRC_RHR0 can receive up to 6 audio streams (e.g. up to 3 stereo channels on ASRC_RHR0). The ARSC_RHR1 can receive up to 2 audio streams (e.g. 1 stereo channel on ASRC_RHR1) ASRC_RHR2 and ASRC_RHR3 must not be used. Position */
#define ASRC_CH_CONF_RHROPMODE_RHR0_UPTO_8CH  (ASRC_CH_CONF_RHROPMODE_RHR0_UPTO_8CH_Val << ASRC_CH_CONF_RHROPMODE_Pos) /* (ASRC_CH_CONF) The ASRC_RHR0 can receive up to 8 audio streams (e.g. up to 4 stereo channels on ASRC_RHR0). ASRC_RHR1,ASRC_RHR2 and ASRC_RHR3 must not be used. Position */
#define ASRC_CH_CONF_MONO0_Pos                _UINT32_(8)                                          /* (ASRC_CH_CONF) DSP 0 Mono Operating Mode Position */
#define ASRC_CH_CONF_MONO0_Msk                (_UINT32_(0x1) << ASRC_CH_CONF_MONO0_Pos)            /* (ASRC_CH_CONF) DSP 0 Mono Operating Mode Mask */
#define ASRC_CH_CONF_MONO0(value)             (ASRC_CH_CONF_MONO0_Msk & (_UINT32_(value) << ASRC_CH_CONF_MONO0_Pos)) /* Assignment of value for MONO0 in the ASRC_CH_CONF register */
#define   ASRC_CH_CONF_MONO0_DISABLED_Val     _UINT32_(0x0)                                        /* (ASRC_CH_CONF) DSP operates in Stereo mode.  */
#define   ASRC_CH_CONF_MONO0_ENABLED_Val      _UINT32_(0x1)                                        /* (ASRC_CH_CONF) DSP operates in Mono mode.  */
#define ASRC_CH_CONF_MONO0_DISABLED           (ASRC_CH_CONF_MONO0_DISABLED_Val << ASRC_CH_CONF_MONO0_Pos) /* (ASRC_CH_CONF) DSP operates in Stereo mode. Position */
#define ASRC_CH_CONF_MONO0_ENABLED            (ASRC_CH_CONF_MONO0_ENABLED_Val << ASRC_CH_CONF_MONO0_Pos) /* (ASRC_CH_CONF) DSP operates in Mono mode. Position */
#define ASRC_CH_CONF_MONO1_Pos                _UINT32_(9)                                          /* (ASRC_CH_CONF) DSP 1 Mono Operating Mode Position */
#define ASRC_CH_CONF_MONO1_Msk                (_UINT32_(0x1) << ASRC_CH_CONF_MONO1_Pos)            /* (ASRC_CH_CONF) DSP 1 Mono Operating Mode Mask */
#define ASRC_CH_CONF_MONO1(value)             (ASRC_CH_CONF_MONO1_Msk & (_UINT32_(value) << ASRC_CH_CONF_MONO1_Pos)) /* Assignment of value for MONO1 in the ASRC_CH_CONF register */
#define   ASRC_CH_CONF_MONO1_DISABLED_Val     _UINT32_(0x0)                                        /* (ASRC_CH_CONF) DSP operates in Stereo mode.  */
#define   ASRC_CH_CONF_MONO1_ENABLED_Val      _UINT32_(0x1)                                        /* (ASRC_CH_CONF) DSP operates in Mono mode.  */
#define ASRC_CH_CONF_MONO1_DISABLED           (ASRC_CH_CONF_MONO1_DISABLED_Val << ASRC_CH_CONF_MONO1_Pos) /* (ASRC_CH_CONF) DSP operates in Stereo mode. Position */
#define ASRC_CH_CONF_MONO1_ENABLED            (ASRC_CH_CONF_MONO1_ENABLED_Val << ASRC_CH_CONF_MONO1_Pos) /* (ASRC_CH_CONF) DSP operates in Mono mode. Position */
#define ASRC_CH_CONF_MONO2_Pos                _UINT32_(10)                                         /* (ASRC_CH_CONF) DSP 2 Mono Operating Mode Position */
#define ASRC_CH_CONF_MONO2_Msk                (_UINT32_(0x1) << ASRC_CH_CONF_MONO2_Pos)            /* (ASRC_CH_CONF) DSP 2 Mono Operating Mode Mask */
#define ASRC_CH_CONF_MONO2(value)             (ASRC_CH_CONF_MONO2_Msk & (_UINT32_(value) << ASRC_CH_CONF_MONO2_Pos)) /* Assignment of value for MONO2 in the ASRC_CH_CONF register */
#define   ASRC_CH_CONF_MONO2_DISABLED_Val     _UINT32_(0x0)                                        /* (ASRC_CH_CONF) DSP operates in Stereo mode.  */
#define   ASRC_CH_CONF_MONO2_ENABLED_Val      _UINT32_(0x1)                                        /* (ASRC_CH_CONF) DSP operates in Mono mode.  */
#define ASRC_CH_CONF_MONO2_DISABLED           (ASRC_CH_CONF_MONO2_DISABLED_Val << ASRC_CH_CONF_MONO2_Pos) /* (ASRC_CH_CONF) DSP operates in Stereo mode. Position */
#define ASRC_CH_CONF_MONO2_ENABLED            (ASRC_CH_CONF_MONO2_ENABLED_Val << ASRC_CH_CONF_MONO2_Pos) /* (ASRC_CH_CONF) DSP operates in Mono mode. Position */
#define ASRC_CH_CONF_MONO3_Pos                _UINT32_(11)                                         /* (ASRC_CH_CONF) DSP 3 Mono Operating Mode Position */
#define ASRC_CH_CONF_MONO3_Msk                (_UINT32_(0x1) << ASRC_CH_CONF_MONO3_Pos)            /* (ASRC_CH_CONF) DSP 3 Mono Operating Mode Mask */
#define ASRC_CH_CONF_MONO3(value)             (ASRC_CH_CONF_MONO3_Msk & (_UINT32_(value) << ASRC_CH_CONF_MONO3_Pos)) /* Assignment of value for MONO3 in the ASRC_CH_CONF register */
#define   ASRC_CH_CONF_MONO3_DISABLED_Val     _UINT32_(0x0)                                        /* (ASRC_CH_CONF) DSP operates in Stereo mode.  */
#define   ASRC_CH_CONF_MONO3_ENABLED_Val      _UINT32_(0x1)                                        /* (ASRC_CH_CONF) DSP operates in Mono mode.  */
#define ASRC_CH_CONF_MONO3_DISABLED           (ASRC_CH_CONF_MONO3_DISABLED_Val << ASRC_CH_CONF_MONO3_Pos) /* (ASRC_CH_CONF) DSP operates in Stereo mode. Position */
#define ASRC_CH_CONF_MONO3_ENABLED            (ASRC_CH_CONF_MONO3_ENABLED_Val << ASRC_CH_CONF_MONO3_Pos) /* (ASRC_CH_CONF) DSP operates in Mono mode. Position */
#define ASRC_CH_CONF_CHUNK0_Pos               _UINT32_(16)                                         /* (ASRC_CH_CONF) DMA DSP 0 CHUNK Size Position */
#define ASRC_CH_CONF_CHUNK0_Msk               (_UINT32_(0x7) << ASRC_CH_CONF_CHUNK0_Pos)           /* (ASRC_CH_CONF) DMA DSP 0 CHUNK Size Mask */
#define ASRC_CH_CONF_CHUNK0(value)            (ASRC_CH_CONF_CHUNK0_Msk & (_UINT32_(value) << ASRC_CH_CONF_CHUNK0_Pos)) /* Assignment of value for CHUNK0 in the ASRC_CH_CONF register */
#define   ASRC_CH_CONF_CHUNK0_1_DATA_Val      _UINT32_(0x0)                                        /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 1 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK0_2_DATA_Val      _UINT32_(0x1)                                        /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 2 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK0_4_DATA_Val      _UINT32_(0x2)                                        /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 4 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK0_8_DATA_Val      _UINT32_(0x3)                                        /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 8 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK0_16_DATA_Val     _UINT32_(0x4)                                        /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 16 data for each rising edge of the trigger event.  */
#define ASRC_CH_CONF_CHUNK0_1_DATA            (ASRC_CH_CONF_CHUNK0_1_DATA_Val << ASRC_CH_CONF_CHUNK0_Pos) /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 1 data for each rising edge of the trigger event. Position */
#define ASRC_CH_CONF_CHUNK0_2_DATA            (ASRC_CH_CONF_CHUNK0_2_DATA_Val << ASRC_CH_CONF_CHUNK0_Pos) /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 2 data for each rising edge of the trigger event. Position */
#define ASRC_CH_CONF_CHUNK0_4_DATA            (ASRC_CH_CONF_CHUNK0_4_DATA_Val << ASRC_CH_CONF_CHUNK0_Pos) /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 4 data for each rising edge of the trigger event. Position */
#define ASRC_CH_CONF_CHUNK0_8_DATA            (ASRC_CH_CONF_CHUNK0_8_DATA_Val << ASRC_CH_CONF_CHUNK0_Pos) /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 8 data for each rising edge of the trigger event. Position */
#define ASRC_CH_CONF_CHUNK0_16_DATA           (ASRC_CH_CONF_CHUNK0_16_DATA_Val << ASRC_CH_CONF_CHUNK0_Pos) /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 16 data for each rising edge of the trigger event. Position */
#define ASRC_CH_CONF_CHUNK1_Pos               _UINT32_(20)                                         /* (ASRC_CH_CONF) DMA DSP 1 CHUNK Size Position */
#define ASRC_CH_CONF_CHUNK1_Msk               (_UINT32_(0x7) << ASRC_CH_CONF_CHUNK1_Pos)           /* (ASRC_CH_CONF) DMA DSP 1 CHUNK Size Mask */
#define ASRC_CH_CONF_CHUNK1(value)            (ASRC_CH_CONF_CHUNK1_Msk & (_UINT32_(value) << ASRC_CH_CONF_CHUNK1_Pos)) /* Assignment of value for CHUNK1 in the ASRC_CH_CONF register */
#define   ASRC_CH_CONF_CHUNK1_1_DATA_Val      _UINT32_(0x0)                                        /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 1 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK1_2_DATA_Val      _UINT32_(0x1)                                        /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 2 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK1_4_DATA_Val      _UINT32_(0x2)                                        /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 4 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK1_8_DATA_Val      _UINT32_(0x3)                                        /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 8 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK1_16_DATA_Val     _UINT32_(0x4)                                        /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 16 data for each rising edge of the trigger event.  */
#define ASRC_CH_CONF_CHUNK1_1_DATA            (ASRC_CH_CONF_CHUNK1_1_DATA_Val << ASRC_CH_CONF_CHUNK1_Pos) /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 1 data for each rising edge of the trigger event. Position */
#define ASRC_CH_CONF_CHUNK1_2_DATA            (ASRC_CH_CONF_CHUNK1_2_DATA_Val << ASRC_CH_CONF_CHUNK1_Pos) /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 2 data for each rising edge of the trigger event. Position */
#define ASRC_CH_CONF_CHUNK1_4_DATA            (ASRC_CH_CONF_CHUNK1_4_DATA_Val << ASRC_CH_CONF_CHUNK1_Pos) /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 4 data for each rising edge of the trigger event. Position */
#define ASRC_CH_CONF_CHUNK1_8_DATA            (ASRC_CH_CONF_CHUNK1_8_DATA_Val << ASRC_CH_CONF_CHUNK1_Pos) /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 8 data for each rising edge of the trigger event. Position */
#define ASRC_CH_CONF_CHUNK1_16_DATA           (ASRC_CH_CONF_CHUNK1_16_DATA_Val << ASRC_CH_CONF_CHUNK1_Pos) /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 16 data for each rising edge of the trigger event. Position */
#define ASRC_CH_CONF_CHUNK2_Pos               _UINT32_(24)                                         /* (ASRC_CH_CONF) DMA DSP 2 CHUNK Size Position */
#define ASRC_CH_CONF_CHUNK2_Msk               (_UINT32_(0x7) << ASRC_CH_CONF_CHUNK2_Pos)           /* (ASRC_CH_CONF) DMA DSP 2 CHUNK Size Mask */
#define ASRC_CH_CONF_CHUNK2(value)            (ASRC_CH_CONF_CHUNK2_Msk & (_UINT32_(value) << ASRC_CH_CONF_CHUNK2_Pos)) /* Assignment of value for CHUNK2 in the ASRC_CH_CONF register */
#define   ASRC_CH_CONF_CHUNK2_1_DATA_Val      _UINT32_(0x0)                                        /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 1 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK2_2_DATA_Val      _UINT32_(0x1)                                        /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 2 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK2_4_DATA_Val      _UINT32_(0x2)                                        /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 4 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK2_8_DATA_Val      _UINT32_(0x3)                                        /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 8 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK2_16_DATA_Val     _UINT32_(0x4)                                        /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 16 data for each rising edge of the trigger event.  */
#define ASRC_CH_CONF_CHUNK2_1_DATA            (ASRC_CH_CONF_CHUNK2_1_DATA_Val << ASRC_CH_CONF_CHUNK2_Pos) /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 1 data for each rising edge of the trigger event. Position */
#define ASRC_CH_CONF_CHUNK2_2_DATA            (ASRC_CH_CONF_CHUNK2_2_DATA_Val << ASRC_CH_CONF_CHUNK2_Pos) /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 2 data for each rising edge of the trigger event. Position */
#define ASRC_CH_CONF_CHUNK2_4_DATA            (ASRC_CH_CONF_CHUNK2_4_DATA_Val << ASRC_CH_CONF_CHUNK2_Pos) /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 4 data for each rising edge of the trigger event. Position */
#define ASRC_CH_CONF_CHUNK2_8_DATA            (ASRC_CH_CONF_CHUNK2_8_DATA_Val << ASRC_CH_CONF_CHUNK2_Pos) /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 8 data for each rising edge of the trigger event. Position */
#define ASRC_CH_CONF_CHUNK2_16_DATA           (ASRC_CH_CONF_CHUNK2_16_DATA_Val << ASRC_CH_CONF_CHUNK2_Pos) /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 16 data for each rising edge of the trigger event. Position */
#define ASRC_CH_CONF_CHUNK3_Pos               _UINT32_(28)                                         /* (ASRC_CH_CONF) DMA DSP 3 CHUNK Size Position */
#define ASRC_CH_CONF_CHUNK3_Msk               (_UINT32_(0x7) << ASRC_CH_CONF_CHUNK3_Pos)           /* (ASRC_CH_CONF) DMA DSP 3 CHUNK Size Mask */
#define ASRC_CH_CONF_CHUNK3(value)            (ASRC_CH_CONF_CHUNK3_Msk & (_UINT32_(value) << ASRC_CH_CONF_CHUNK3_Pos)) /* Assignment of value for CHUNK3 in the ASRC_CH_CONF register */
#define   ASRC_CH_CONF_CHUNK3_1_DATA_Val      _UINT32_(0x0)                                        /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 1 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK3_2_DATA_Val      _UINT32_(0x1)                                        /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 2 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK3_4_DATA_Val      _UINT32_(0x2)                                        /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 4 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK3_8_DATA_Val      _UINT32_(0x3)                                        /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 8 data for each rising edge of the trigger event.  */
#define   ASRC_CH_CONF_CHUNK3_16_DATA_Val     _UINT32_(0x4)                                        /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 16 data for each rising edge of the trigger event.  */
#define ASRC_CH_CONF_CHUNK3_1_DATA            (ASRC_CH_CONF_CHUNK3_1_DATA_Val << ASRC_CH_CONF_CHUNK3_Pos) /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 1 data for each rising edge of the trigger event. Position */
#define ASRC_CH_CONF_CHUNK3_2_DATA            (ASRC_CH_CONF_CHUNK3_2_DATA_Val << ASRC_CH_CONF_CHUNK3_Pos) /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 2 data for each rising edge of the trigger event. Position */
#define ASRC_CH_CONF_CHUNK3_4_DATA            (ASRC_CH_CONF_CHUNK3_4_DATA_Val << ASRC_CH_CONF_CHUNK3_Pos) /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 4 data for each rising edge of the trigger event. Position */
#define ASRC_CH_CONF_CHUNK3_8_DATA            (ASRC_CH_CONF_CHUNK3_8_DATA_Val << ASRC_CH_CONF_CHUNK3_Pos) /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 8 data for each rising edge of the trigger event. Position */
#define ASRC_CH_CONF_CHUNK3_16_DATA           (ASRC_CH_CONF_CHUNK3_16_DATA_Val << ASRC_CH_CONF_CHUNK3_Pos) /* (ASRC_CH_CONF) The DMA chunk size must be configured to transfer 16 data for each rising edge of the trigger event. Position */
#define ASRC_CH_CONF_Msk                      _UINT32_(0x77770F77)                                 /* (ASRC_CH_CONF) Register Mask  */

#define ASRC_CH_CONF_MONO_Pos                 _UINT32_(8)                                          /* (ASRC_CH_CONF Position) DSP x Mono Operating Mode */
#define ASRC_CH_CONF_MONO_Msk                 (_UINT32_(0xF) << ASRC_CH_CONF_MONO_Pos)             /* (ASRC_CH_CONF Mask) MONO */
#define ASRC_CH_CONF_MONO(value)              (ASRC_CH_CONF_MONO_Msk & (_UINT32_(value) << ASRC_CH_CONF_MONO_Pos)) 

/* -------- ASRC_TRIG : (ASRC Offset: 0x24) (R/W 32) Trigger Selection Register -------- */
#define ASRC_TRIG_RESETVALUE                  _UINT32_(0x00)                                       /*  (ASRC_TRIG) Trigger Selection Register  Reset Value */

#define ASRC_TRIG_TRIGSELIN0_Pos              _UINT32_(0)                                          /* (ASRC_TRIG) Input Trigger Source Selection of DSP 0 Position */
#define ASRC_TRIG_TRIGSELIN0_Msk              (_UINT32_(0xF) << ASRC_TRIG_TRIGSELIN0_Pos)          /* (ASRC_TRIG) Input Trigger Source Selection of DSP 0 Mask */
#define ASRC_TRIG_TRIGSELIN0(value)           (ASRC_TRIG_TRIGSELIN0_Msk & (_UINT32_(value) << ASRC_TRIG_TRIGSELIN0_Pos)) /* Assignment of value for TRIGSELIN0 in the ASRC_TRIG register */
#define   ASRC_TRIG_TRIGSELIN0_GCLKDIV_Val    _UINT32_(0x0)                                        /* (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider).  */
#define   ASRC_TRIG_TRIGSELIN0_I2SMCC0_Val    _UINT32_(0x1)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN0_I2SMCC1_Val    _UINT32_(0x2)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN0_PDMC0_Val      _UINT32_(0x3)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN0_PDMC1_Val      _UINT32_(0x4)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN0_SSC0RX_Val     _UINT32_(0x5)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN0_SSC0TX_Val     _UINT32_(0x6)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN0_SSC1RX_Val     _UINT32_(0x7)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN0_SSC1TX_Val     _UINT32_(0x8)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN0_SPDIFTX_Val    _UINT32_(0x9)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN0_SPDIFRX_Val    _UINT32_(0xA)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define ASRC_TRIG_TRIGSELIN0_GCLKDIV          (ASRC_TRIG_TRIGSELIN0_GCLKDIV_Val << ASRC_TRIG_TRIGSELIN0_Pos) /* (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider). Position */
#define ASRC_TRIG_TRIGSELIN0_I2SMCC0          (ASRC_TRIG_TRIGSELIN0_I2SMCC0_Val << ASRC_TRIG_TRIGSELIN0_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN0_I2SMCC1          (ASRC_TRIG_TRIGSELIN0_I2SMCC1_Val << ASRC_TRIG_TRIGSELIN0_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN0_PDMC0            (ASRC_TRIG_TRIGSELIN0_PDMC0_Val << ASRC_TRIG_TRIGSELIN0_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN0_PDMC1            (ASRC_TRIG_TRIGSELIN0_PDMC1_Val << ASRC_TRIG_TRIGSELIN0_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN0_SSC0RX           (ASRC_TRIG_TRIGSELIN0_SSC0RX_Val << ASRC_TRIG_TRIGSELIN0_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN0_SSC0TX           (ASRC_TRIG_TRIGSELIN0_SSC0TX_Val << ASRC_TRIG_TRIGSELIN0_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN0_SSC1RX           (ASRC_TRIG_TRIGSELIN0_SSC1RX_Val << ASRC_TRIG_TRIGSELIN0_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN0_SSC1TX           (ASRC_TRIG_TRIGSELIN0_SSC1TX_Val << ASRC_TRIG_TRIGSELIN0_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN0_SPDIFTX          (ASRC_TRIG_TRIGSELIN0_SPDIFTX_Val << ASRC_TRIG_TRIGSELIN0_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN0_SPDIFRX          (ASRC_TRIG_TRIGSELIN0_SPDIFRX_Val << ASRC_TRIG_TRIGSELIN0_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN1_Pos              _UINT32_(4)                                          /* (ASRC_TRIG) Input Trigger Source Selection of DSP 1 Position */
#define ASRC_TRIG_TRIGSELIN1_Msk              (_UINT32_(0xF) << ASRC_TRIG_TRIGSELIN1_Pos)          /* (ASRC_TRIG) Input Trigger Source Selection of DSP 1 Mask */
#define ASRC_TRIG_TRIGSELIN1(value)           (ASRC_TRIG_TRIGSELIN1_Msk & (_UINT32_(value) << ASRC_TRIG_TRIGSELIN1_Pos)) /* Assignment of value for TRIGSELIN1 in the ASRC_TRIG register */
#define   ASRC_TRIG_TRIGSELIN1_GCLKDIV_Val    _UINT32_(0x0)                                        /* (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider).  */
#define   ASRC_TRIG_TRIGSELIN1_I2SMCC0_Val    _UINT32_(0x1)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN1_I2SMCC1_Val    _UINT32_(0x2)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN1_PDMC0_Val      _UINT32_(0x3)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN1_PDMC1_Val      _UINT32_(0x4)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN1_SSC0RX_Val     _UINT32_(0x5)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN1_SSC0TX_Val     _UINT32_(0x6)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN1_SSC1RX_Val     _UINT32_(0x7)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN1_SSC1TX_Val     _UINT32_(0x8)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN1_SPDIFTX_Val    _UINT32_(0x9)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN1_SPDIFRX_Val    _UINT32_(0xA)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define ASRC_TRIG_TRIGSELIN1_GCLKDIV          (ASRC_TRIG_TRIGSELIN1_GCLKDIV_Val << ASRC_TRIG_TRIGSELIN1_Pos) /* (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider). Position */
#define ASRC_TRIG_TRIGSELIN1_I2SMCC0          (ASRC_TRIG_TRIGSELIN1_I2SMCC0_Val << ASRC_TRIG_TRIGSELIN1_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN1_I2SMCC1          (ASRC_TRIG_TRIGSELIN1_I2SMCC1_Val << ASRC_TRIG_TRIGSELIN1_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN1_PDMC0            (ASRC_TRIG_TRIGSELIN1_PDMC0_Val << ASRC_TRIG_TRIGSELIN1_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN1_PDMC1            (ASRC_TRIG_TRIGSELIN1_PDMC1_Val << ASRC_TRIG_TRIGSELIN1_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN1_SSC0RX           (ASRC_TRIG_TRIGSELIN1_SSC0RX_Val << ASRC_TRIG_TRIGSELIN1_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN1_SSC0TX           (ASRC_TRIG_TRIGSELIN1_SSC0TX_Val << ASRC_TRIG_TRIGSELIN1_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN1_SSC1RX           (ASRC_TRIG_TRIGSELIN1_SSC1RX_Val << ASRC_TRIG_TRIGSELIN1_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN1_SSC1TX           (ASRC_TRIG_TRIGSELIN1_SSC1TX_Val << ASRC_TRIG_TRIGSELIN1_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN1_SPDIFTX          (ASRC_TRIG_TRIGSELIN1_SPDIFTX_Val << ASRC_TRIG_TRIGSELIN1_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN1_SPDIFRX          (ASRC_TRIG_TRIGSELIN1_SPDIFRX_Val << ASRC_TRIG_TRIGSELIN1_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN2_Pos              _UINT32_(8)                                          /* (ASRC_TRIG) Input Trigger Source Selection of DSP 2 Position */
#define ASRC_TRIG_TRIGSELIN2_Msk              (_UINT32_(0xF) << ASRC_TRIG_TRIGSELIN2_Pos)          /* (ASRC_TRIG) Input Trigger Source Selection of DSP 2 Mask */
#define ASRC_TRIG_TRIGSELIN2(value)           (ASRC_TRIG_TRIGSELIN2_Msk & (_UINT32_(value) << ASRC_TRIG_TRIGSELIN2_Pos)) /* Assignment of value for TRIGSELIN2 in the ASRC_TRIG register */
#define   ASRC_TRIG_TRIGSELIN2_GCLKDIV_Val    _UINT32_(0x0)                                        /* (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider).  */
#define   ASRC_TRIG_TRIGSELIN2_I2SMCC0_Val    _UINT32_(0x1)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN2_I2SMCC1_Val    _UINT32_(0x2)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN2_PDMC0_Val      _UINT32_(0x3)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN2_PDMC1_Val      _UINT32_(0x4)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN2_SSC0RX_Val     _UINT32_(0x5)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN2_SSC0TX_Val     _UINT32_(0x6)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN2_SSC1RX_Val     _UINT32_(0x7)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN2_SSC1TX_Val     _UINT32_(0x8)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN2_SPDIFTX_Val    _UINT32_(0x9)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN2_SPDIFRX_Val    _UINT32_(0xA)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define ASRC_TRIG_TRIGSELIN2_GCLKDIV          (ASRC_TRIG_TRIGSELIN2_GCLKDIV_Val << ASRC_TRIG_TRIGSELIN2_Pos) /* (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider). Position */
#define ASRC_TRIG_TRIGSELIN2_I2SMCC0          (ASRC_TRIG_TRIGSELIN2_I2SMCC0_Val << ASRC_TRIG_TRIGSELIN2_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN2_I2SMCC1          (ASRC_TRIG_TRIGSELIN2_I2SMCC1_Val << ASRC_TRIG_TRIGSELIN2_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN2_PDMC0            (ASRC_TRIG_TRIGSELIN2_PDMC0_Val << ASRC_TRIG_TRIGSELIN2_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN2_PDMC1            (ASRC_TRIG_TRIGSELIN2_PDMC1_Val << ASRC_TRIG_TRIGSELIN2_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN2_SSC0RX           (ASRC_TRIG_TRIGSELIN2_SSC0RX_Val << ASRC_TRIG_TRIGSELIN2_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN2_SSC0TX           (ASRC_TRIG_TRIGSELIN2_SSC0TX_Val << ASRC_TRIG_TRIGSELIN2_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN2_SSC1RX           (ASRC_TRIG_TRIGSELIN2_SSC1RX_Val << ASRC_TRIG_TRIGSELIN2_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN2_SSC1TX           (ASRC_TRIG_TRIGSELIN2_SSC1TX_Val << ASRC_TRIG_TRIGSELIN2_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN2_SPDIFTX          (ASRC_TRIG_TRIGSELIN2_SPDIFTX_Val << ASRC_TRIG_TRIGSELIN2_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN2_SPDIFRX          (ASRC_TRIG_TRIGSELIN2_SPDIFRX_Val << ASRC_TRIG_TRIGSELIN2_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN3_Pos              _UINT32_(12)                                         /* (ASRC_TRIG) Input Trigger Source Selection of DSP 3 Position */
#define ASRC_TRIG_TRIGSELIN3_Msk              (_UINT32_(0xF) << ASRC_TRIG_TRIGSELIN3_Pos)          /* (ASRC_TRIG) Input Trigger Source Selection of DSP 3 Mask */
#define ASRC_TRIG_TRIGSELIN3(value)           (ASRC_TRIG_TRIGSELIN3_Msk & (_UINT32_(value) << ASRC_TRIG_TRIGSELIN3_Pos)) /* Assignment of value for TRIGSELIN3 in the ASRC_TRIG register */
#define   ASRC_TRIG_TRIGSELIN3_GCLKDIV_Val    _UINT32_(0x0)                                        /* (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider).  */
#define   ASRC_TRIG_TRIGSELIN3_I2SMCC0_Val    _UINT32_(0x1)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN3_I2SMCC1_Val    _UINT32_(0x2)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN3_PDMC0_Val      _UINT32_(0x3)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN3_PDMC1_Val      _UINT32_(0x4)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN3_SSC0RX_Val     _UINT32_(0x5)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN3_SSC0TX_Val     _UINT32_(0x6)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN3_SSC1RX_Val     _UINT32_(0x7)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN3_SSC1TX_Val     _UINT32_(0x8)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN3_SPDIFTX_Val    _UINT32_(0x9)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELIN3_SPDIFRX_Val    _UINT32_(0xA)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define ASRC_TRIG_TRIGSELIN3_GCLKDIV          (ASRC_TRIG_TRIGSELIN3_GCLKDIV_Val << ASRC_TRIG_TRIGSELIN3_Pos) /* (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider). Position */
#define ASRC_TRIG_TRIGSELIN3_I2SMCC0          (ASRC_TRIG_TRIGSELIN3_I2SMCC0_Val << ASRC_TRIG_TRIGSELIN3_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN3_I2SMCC1          (ASRC_TRIG_TRIGSELIN3_I2SMCC1_Val << ASRC_TRIG_TRIGSELIN3_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN3_PDMC0            (ASRC_TRIG_TRIGSELIN3_PDMC0_Val << ASRC_TRIG_TRIGSELIN3_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN3_PDMC1            (ASRC_TRIG_TRIGSELIN3_PDMC1_Val << ASRC_TRIG_TRIGSELIN3_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN3_SSC0RX           (ASRC_TRIG_TRIGSELIN3_SSC0RX_Val << ASRC_TRIG_TRIGSELIN3_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN3_SSC0TX           (ASRC_TRIG_TRIGSELIN3_SSC0TX_Val << ASRC_TRIG_TRIGSELIN3_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN3_SSC1RX           (ASRC_TRIG_TRIGSELIN3_SSC1RX_Val << ASRC_TRIG_TRIGSELIN3_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN3_SSC1TX           (ASRC_TRIG_TRIGSELIN3_SSC1TX_Val << ASRC_TRIG_TRIGSELIN3_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN3_SPDIFTX          (ASRC_TRIG_TRIGSELIN3_SPDIFTX_Val << ASRC_TRIG_TRIGSELIN3_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELIN3_SPDIFRX          (ASRC_TRIG_TRIGSELIN3_SPDIFRX_Val << ASRC_TRIG_TRIGSELIN3_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT0_Pos             _UINT32_(16)                                         /* (ASRC_TRIG) Output Trigger Source Selection of DSP 0 Position */
#define ASRC_TRIG_TRIGSELOUT0_Msk             (_UINT32_(0xF) << ASRC_TRIG_TRIGSELOUT0_Pos)         /* (ASRC_TRIG) Output Trigger Source Selection of DSP 0 Mask */
#define ASRC_TRIG_TRIGSELOUT0(value)          (ASRC_TRIG_TRIGSELOUT0_Msk & (_UINT32_(value) << ASRC_TRIG_TRIGSELOUT0_Pos)) /* Assignment of value for TRIGSELOUT0 in the ASRC_TRIG register */
#define   ASRC_TRIG_TRIGSELOUT0_GCLKDIV_Val   _UINT32_(0x0)                                        /* (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider).  */
#define   ASRC_TRIG_TRIGSELOUT0_I2SMCC0_Val   _UINT32_(0x1)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT0_I2SMCC1_Val   _UINT32_(0x2)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT0_PDMC0_Val     _UINT32_(0x3)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT0_PDMC1_Val     _UINT32_(0x4)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT0_SSC0RX_Val    _UINT32_(0x5)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT0_SSC0TX_Val    _UINT32_(0x6)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT0_SSC1RX_Val    _UINT32_(0x7)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT0_SSC1TX_Val    _UINT32_(0x8)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT0_SPDIFTX_Val   _UINT32_(0x9)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT0_SPDIFRX_Val   _UINT32_(0xA)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define ASRC_TRIG_TRIGSELOUT0_GCLKDIV         (ASRC_TRIG_TRIGSELOUT0_GCLKDIV_Val << ASRC_TRIG_TRIGSELOUT0_Pos) /* (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider). Position */
#define ASRC_TRIG_TRIGSELOUT0_I2SMCC0         (ASRC_TRIG_TRIGSELOUT0_I2SMCC0_Val << ASRC_TRIG_TRIGSELOUT0_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT0_I2SMCC1         (ASRC_TRIG_TRIGSELOUT0_I2SMCC1_Val << ASRC_TRIG_TRIGSELOUT0_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT0_PDMC0           (ASRC_TRIG_TRIGSELOUT0_PDMC0_Val << ASRC_TRIG_TRIGSELOUT0_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT0_PDMC1           (ASRC_TRIG_TRIGSELOUT0_PDMC1_Val << ASRC_TRIG_TRIGSELOUT0_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT0_SSC0RX          (ASRC_TRIG_TRIGSELOUT0_SSC0RX_Val << ASRC_TRIG_TRIGSELOUT0_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT0_SSC0TX          (ASRC_TRIG_TRIGSELOUT0_SSC0TX_Val << ASRC_TRIG_TRIGSELOUT0_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT0_SSC1RX          (ASRC_TRIG_TRIGSELOUT0_SSC1RX_Val << ASRC_TRIG_TRIGSELOUT0_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT0_SSC1TX          (ASRC_TRIG_TRIGSELOUT0_SSC1TX_Val << ASRC_TRIG_TRIGSELOUT0_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT0_SPDIFTX         (ASRC_TRIG_TRIGSELOUT0_SPDIFTX_Val << ASRC_TRIG_TRIGSELOUT0_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT0_SPDIFRX         (ASRC_TRIG_TRIGSELOUT0_SPDIFRX_Val << ASRC_TRIG_TRIGSELOUT0_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT1_Pos             _UINT32_(20)                                         /* (ASRC_TRIG) Output Trigger Source Selection of DSP 1 Position */
#define ASRC_TRIG_TRIGSELOUT1_Msk             (_UINT32_(0xF) << ASRC_TRIG_TRIGSELOUT1_Pos)         /* (ASRC_TRIG) Output Trigger Source Selection of DSP 1 Mask */
#define ASRC_TRIG_TRIGSELOUT1(value)          (ASRC_TRIG_TRIGSELOUT1_Msk & (_UINT32_(value) << ASRC_TRIG_TRIGSELOUT1_Pos)) /* Assignment of value for TRIGSELOUT1 in the ASRC_TRIG register */
#define   ASRC_TRIG_TRIGSELOUT1_GCLKDIV_Val   _UINT32_(0x0)                                        /* (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider).  */
#define   ASRC_TRIG_TRIGSELOUT1_I2SMCC0_Val   _UINT32_(0x1)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT1_I2SMCC1_Val   _UINT32_(0x2)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT1_PDMC0_Val     _UINT32_(0x3)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT1_PDMC1_Val     _UINT32_(0x4)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT1_SSC0RX_Val    _UINT32_(0x5)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT1_SSC0TX_Val    _UINT32_(0x6)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT1_SSC1RX_Val    _UINT32_(0x7)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT1_SSC1TX_Val    _UINT32_(0x8)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT1_SPDIFTX_Val   _UINT32_(0x9)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT1_SPDIFRX_Val   _UINT32_(0xA)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define ASRC_TRIG_TRIGSELOUT1_GCLKDIV         (ASRC_TRIG_TRIGSELOUT1_GCLKDIV_Val << ASRC_TRIG_TRIGSELOUT1_Pos) /* (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider). Position */
#define ASRC_TRIG_TRIGSELOUT1_I2SMCC0         (ASRC_TRIG_TRIGSELOUT1_I2SMCC0_Val << ASRC_TRIG_TRIGSELOUT1_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT1_I2SMCC1         (ASRC_TRIG_TRIGSELOUT1_I2SMCC1_Val << ASRC_TRIG_TRIGSELOUT1_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT1_PDMC0           (ASRC_TRIG_TRIGSELOUT1_PDMC0_Val << ASRC_TRIG_TRIGSELOUT1_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT1_PDMC1           (ASRC_TRIG_TRIGSELOUT1_PDMC1_Val << ASRC_TRIG_TRIGSELOUT1_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT1_SSC0RX          (ASRC_TRIG_TRIGSELOUT1_SSC0RX_Val << ASRC_TRIG_TRIGSELOUT1_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT1_SSC0TX          (ASRC_TRIG_TRIGSELOUT1_SSC0TX_Val << ASRC_TRIG_TRIGSELOUT1_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT1_SSC1RX          (ASRC_TRIG_TRIGSELOUT1_SSC1RX_Val << ASRC_TRIG_TRIGSELOUT1_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT1_SSC1TX          (ASRC_TRIG_TRIGSELOUT1_SSC1TX_Val << ASRC_TRIG_TRIGSELOUT1_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT1_SPDIFTX         (ASRC_TRIG_TRIGSELOUT1_SPDIFTX_Val << ASRC_TRIG_TRIGSELOUT1_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT1_SPDIFRX         (ASRC_TRIG_TRIGSELOUT1_SPDIFRX_Val << ASRC_TRIG_TRIGSELOUT1_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT2_Pos             _UINT32_(24)                                         /* (ASRC_TRIG) Output Trigger Source Selection of DSP 2 Position */
#define ASRC_TRIG_TRIGSELOUT2_Msk             (_UINT32_(0xF) << ASRC_TRIG_TRIGSELOUT2_Pos)         /* (ASRC_TRIG) Output Trigger Source Selection of DSP 2 Mask */
#define ASRC_TRIG_TRIGSELOUT2(value)          (ASRC_TRIG_TRIGSELOUT2_Msk & (_UINT32_(value) << ASRC_TRIG_TRIGSELOUT2_Pos)) /* Assignment of value for TRIGSELOUT2 in the ASRC_TRIG register */
#define   ASRC_TRIG_TRIGSELOUT2_GCLKDIV_Val   _UINT32_(0x0)                                        /* (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider).  */
#define   ASRC_TRIG_TRIGSELOUT2_I2SMCC0_Val   _UINT32_(0x1)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT2_I2SMCC1_Val   _UINT32_(0x2)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT2_PDMC0_Val     _UINT32_(0x3)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT2_PDMC1_Val     _UINT32_(0x4)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT2_SSC0RX_Val    _UINT32_(0x5)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT2_SSC0TX_Val    _UINT32_(0x6)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT2_SSC1RX_Val    _UINT32_(0x7)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT2_SSC1TX_Val    _UINT32_(0x8)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT2_SPDIFTX_Val   _UINT32_(0x9)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT2_SPDIFRX_Val   _UINT32_(0xA)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define ASRC_TRIG_TRIGSELOUT2_GCLKDIV         (ASRC_TRIG_TRIGSELOUT2_GCLKDIV_Val << ASRC_TRIG_TRIGSELOUT2_Pos) /* (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider). Position */
#define ASRC_TRIG_TRIGSELOUT2_I2SMCC0         (ASRC_TRIG_TRIGSELOUT2_I2SMCC0_Val << ASRC_TRIG_TRIGSELOUT2_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT2_I2SMCC1         (ASRC_TRIG_TRIGSELOUT2_I2SMCC1_Val << ASRC_TRIG_TRIGSELOUT2_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT2_PDMC0           (ASRC_TRIG_TRIGSELOUT2_PDMC0_Val << ASRC_TRIG_TRIGSELOUT2_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT2_PDMC1           (ASRC_TRIG_TRIGSELOUT2_PDMC1_Val << ASRC_TRIG_TRIGSELOUT2_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT2_SSC0RX          (ASRC_TRIG_TRIGSELOUT2_SSC0RX_Val << ASRC_TRIG_TRIGSELOUT2_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT2_SSC0TX          (ASRC_TRIG_TRIGSELOUT2_SSC0TX_Val << ASRC_TRIG_TRIGSELOUT2_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT2_SSC1RX          (ASRC_TRIG_TRIGSELOUT2_SSC1RX_Val << ASRC_TRIG_TRIGSELOUT2_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT2_SSC1TX          (ASRC_TRIG_TRIGSELOUT2_SSC1TX_Val << ASRC_TRIG_TRIGSELOUT2_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT2_SPDIFTX         (ASRC_TRIG_TRIGSELOUT2_SPDIFTX_Val << ASRC_TRIG_TRIGSELOUT2_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT2_SPDIFRX         (ASRC_TRIG_TRIGSELOUT2_SPDIFRX_Val << ASRC_TRIG_TRIGSELOUT2_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT3_Pos             _UINT32_(28)                                         /* (ASRC_TRIG) Output Trigger Source Selection of DSP 3 Position */
#define ASRC_TRIG_TRIGSELOUT3_Msk             (_UINT32_(0xF) << ASRC_TRIG_TRIGSELOUT3_Pos)         /* (ASRC_TRIG) Output Trigger Source Selection of DSP 3 Mask */
#define ASRC_TRIG_TRIGSELOUT3(value)          (ASRC_TRIG_TRIGSELOUT3_Msk & (_UINT32_(value) << ASRC_TRIG_TRIGSELOUT3_Pos)) /* Assignment of value for TRIGSELOUT3 in the ASRC_TRIG register */
#define   ASRC_TRIG_TRIGSELOUT3_GCLKDIV_Val   _UINT32_(0x0)                                        /* (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider).  */
#define   ASRC_TRIG_TRIGSELOUT3_I2SMCC0_Val   _UINT32_(0x1)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT3_I2SMCC1_Val   _UINT32_(0x2)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT3_PDMC0_Val     _UINT32_(0x3)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT3_PDMC1_Val     _UINT32_(0x4)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT3_SSC0RX_Val    _UINT32_(0x5)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT3_SSC0TX_Val    _UINT32_(0x6)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT3_SSC1RX_Val    _UINT32_(0x7)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT3_SSC1TX_Val    _UINT32_(0x8)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT3_SPDIFTX_Val   _UINT32_(0x9)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define   ASRC_TRIG_TRIGSELOUT3_SPDIFRX_Val   _UINT32_(0xA)                                        /* (ASRC_TRIG) Trigger event from audio peripheral.  */
#define ASRC_TRIG_TRIGSELOUT3_GCLKDIV         (ASRC_TRIG_TRIGSELOUT3_GCLKDIV_Val << ASRC_TRIG_TRIGSELOUT3_Pos) /* (ASRC_TRIG) Internal trigger event, a configurable division of GCLK (see ASRC_RATIOx for divider). Position */
#define ASRC_TRIG_TRIGSELOUT3_I2SMCC0         (ASRC_TRIG_TRIGSELOUT3_I2SMCC0_Val << ASRC_TRIG_TRIGSELOUT3_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT3_I2SMCC1         (ASRC_TRIG_TRIGSELOUT3_I2SMCC1_Val << ASRC_TRIG_TRIGSELOUT3_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT3_PDMC0           (ASRC_TRIG_TRIGSELOUT3_PDMC0_Val << ASRC_TRIG_TRIGSELOUT3_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT3_PDMC1           (ASRC_TRIG_TRIGSELOUT3_PDMC1_Val << ASRC_TRIG_TRIGSELOUT3_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT3_SSC0RX          (ASRC_TRIG_TRIGSELOUT3_SSC0RX_Val << ASRC_TRIG_TRIGSELOUT3_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT3_SSC0TX          (ASRC_TRIG_TRIGSELOUT3_SSC0TX_Val << ASRC_TRIG_TRIGSELOUT3_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT3_SSC1RX          (ASRC_TRIG_TRIGSELOUT3_SSC1RX_Val << ASRC_TRIG_TRIGSELOUT3_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT3_SSC1TX          (ASRC_TRIG_TRIGSELOUT3_SSC1TX_Val << ASRC_TRIG_TRIGSELOUT3_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT3_SPDIFTX         (ASRC_TRIG_TRIGSELOUT3_SPDIFTX_Val << ASRC_TRIG_TRIGSELOUT3_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_TRIGSELOUT3_SPDIFRX         (ASRC_TRIG_TRIGSELOUT3_SPDIFRX_Val << ASRC_TRIG_TRIGSELOUT3_Pos) /* (ASRC_TRIG) Trigger event from audio peripheral. Position */
#define ASRC_TRIG_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (ASRC_TRIG) Register Mask  */


/* -------- ASRC_RHR : (ASRC Offset: 0x28) ( R/ 32) Receive Holding Register x -------- */
#define ASRC_RHR_RESETVALUE                   _UINT32_(0x00)                                       /*  (ASRC_RHR) Receive Holding Register x  Reset Value */

#define ASRC_RHR_DATA_Pos                     _UINT32_(0)                                          /* (ASRC_RHR) Converted Data Position */
#define ASRC_RHR_DATA_Msk                     (_UINT32_(0xFFFFFFFF) << ASRC_RHR_DATA_Pos)          /* (ASRC_RHR) Converted Data Mask */
#define ASRC_RHR_DATA(value)                  (ASRC_RHR_DATA_Msk & (_UINT32_(value) << ASRC_RHR_DATA_Pos)) /* Assignment of value for DATA in the ASRC_RHR register */
#define ASRC_RHR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (ASRC_RHR) Register Mask  */


/* -------- ASRC_THR : (ASRC Offset: 0x48) ( /W 32) Transmit Holding Register x -------- */
#define ASRC_THR_DATA_Pos                     _UINT32_(0)                                          /* (ASRC_THR) Data to Convert Position */
#define ASRC_THR_DATA_Msk                     (_UINT32_(0xFFFFFFFF) << ASRC_THR_DATA_Pos)          /* (ASRC_THR) Data to Convert Mask */
#define ASRC_THR_DATA(value)                  (ASRC_THR_DATA_Msk & (_UINT32_(value) << ASRC_THR_DATA_Pos)) /* Assignment of value for DATA in the ASRC_THR register */
#define ASRC_THR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (ASRC_THR) Register Mask  */


/* -------- ASRC_IER : (ASRC Offset: 0x68) ( /W 32) Interrupt Enable Register x -------- */
#define ASRC_IER_RXRDY_Pos                    _UINT32_(0)                                          /* (ASRC_IER) Receive Ready Interrupt Enable Position */
#define ASRC_IER_RXRDY_Msk                    (_UINT32_(0x1) << ASRC_IER_RXRDY_Pos)                /* (ASRC_IER) Receive Ready Interrupt Enable Mask */
#define ASRC_IER_RXRDY(value)                 (ASRC_IER_RXRDY_Msk & (_UINT32_(value) << ASRC_IER_RXRDY_Pos)) /* Assignment of value for RXRDY in the ASRC_IER register */
#define ASRC_IER_RXEMPTY_Pos                  _UINT32_(1)                                          /* (ASRC_IER) Receive FIFO Empty Interrupt Enable Position */
#define ASRC_IER_RXEMPTY_Msk                  (_UINT32_(0x1) << ASRC_IER_RXEMPTY_Pos)              /* (ASRC_IER) Receive FIFO Empty Interrupt Enable Mask */
#define ASRC_IER_RXEMPTY(value)               (ASRC_IER_RXEMPTY_Msk & (_UINT32_(value) << ASRC_IER_RXEMPTY_Pos)) /* Assignment of value for RXEMPTY in the ASRC_IER register */
#define ASRC_IER_RXFULL_Pos                   _UINT32_(2)                                          /* (ASRC_IER) Receive FIFO Full Interrupt Enable Position */
#define ASRC_IER_RXFULL_Msk                   (_UINT32_(0x1) << ASRC_IER_RXFULL_Pos)               /* (ASRC_IER) Receive FIFO Full Interrupt Enable Mask */
#define ASRC_IER_RXFULL(value)                (ASRC_IER_RXFULL_Msk & (_UINT32_(value) << ASRC_IER_RXFULL_Pos)) /* Assignment of value for RXFULL in the ASRC_IER register */
#define ASRC_IER_RXCHUNK_Pos                  _UINT32_(3)                                          /* (ASRC_IER) Receive FIFO Chunk Interrupt Enable Position */
#define ASRC_IER_RXCHUNK_Msk                  (_UINT32_(0x1) << ASRC_IER_RXCHUNK_Pos)              /* (ASRC_IER) Receive FIFO Chunk Interrupt Enable Mask */
#define ASRC_IER_RXCHUNK(value)               (ASRC_IER_RXCHUNK_Msk & (_UINT32_(value) << ASRC_IER_RXCHUNK_Pos)) /* Assignment of value for RXCHUNK in the ASRC_IER register */
#define ASRC_IER_RXUDR_Pos                    _UINT32_(4)                                          /* (ASRC_IER) Receive Under Flow Interrupt Enable Position */
#define ASRC_IER_RXUDR_Msk                    (_UINT32_(0x1) << ASRC_IER_RXUDR_Pos)                /* (ASRC_IER) Receive Under Flow Interrupt Enable Mask */
#define ASRC_IER_RXUDR(value)                 (ASRC_IER_RXUDR_Msk & (_UINT32_(value) << ASRC_IER_RXUDR_Pos)) /* Assignment of value for RXUDR in the ASRC_IER register */
#define ASRC_IER_RXOVR_Pos                    _UINT32_(5)                                          /* (ASRC_IER) Receive Over Flow Interrupt Enable Position */
#define ASRC_IER_RXOVR_Msk                    (_UINT32_(0x1) << ASRC_IER_RXOVR_Pos)                /* (ASRC_IER) Receive Over Flow Interrupt Enable Mask */
#define ASRC_IER_RXOVR(value)                 (ASRC_IER_RXOVR_Msk & (_UINT32_(value) << ASRC_IER_RXOVR_Pos)) /* Assignment of value for RXOVR in the ASRC_IER register */
#define ASRC_IER_TXRDY_Pos                    _UINT32_(8)                                          /* (ASRC_IER) Transmit Ready Interrupt Enable Position */
#define ASRC_IER_TXRDY_Msk                    (_UINT32_(0x1) << ASRC_IER_TXRDY_Pos)                /* (ASRC_IER) Transmit Ready Interrupt Enable Mask */
#define ASRC_IER_TXRDY(value)                 (ASRC_IER_TXRDY_Msk & (_UINT32_(value) << ASRC_IER_TXRDY_Pos)) /* Assignment of value for TXRDY in the ASRC_IER register */
#define ASRC_IER_TXEMPTY_Pos                  _UINT32_(9)                                          /* (ASRC_IER) Transmit FIFO Empty Interrupt Enable Position */
#define ASRC_IER_TXEMPTY_Msk                  (_UINT32_(0x1) << ASRC_IER_TXEMPTY_Pos)              /* (ASRC_IER) Transmit FIFO Empty Interrupt Enable Mask */
#define ASRC_IER_TXEMPTY(value)               (ASRC_IER_TXEMPTY_Msk & (_UINT32_(value) << ASRC_IER_TXEMPTY_Pos)) /* Assignment of value for TXEMPTY in the ASRC_IER register */
#define ASRC_IER_TXFULL_Pos                   _UINT32_(10)                                         /* (ASRC_IER) Transmit FIFO Full Interrupt Enable Position */
#define ASRC_IER_TXFULL_Msk                   (_UINT32_(0x1) << ASRC_IER_TXFULL_Pos)               /* (ASRC_IER) Transmit FIFO Full Interrupt Enable Mask */
#define ASRC_IER_TXFULL(value)                (ASRC_IER_TXFULL_Msk & (_UINT32_(value) << ASRC_IER_TXFULL_Pos)) /* Assignment of value for TXFULL in the ASRC_IER register */
#define ASRC_IER_TXCHUNK_Pos                  _UINT32_(11)                                         /* (ASRC_IER) Transmit FIFO Chunk Interrupt Enable Position */
#define ASRC_IER_TXCHUNK_Msk                  (_UINT32_(0x1) << ASRC_IER_TXCHUNK_Pos)              /* (ASRC_IER) Transmit FIFO Chunk Interrupt Enable Mask */
#define ASRC_IER_TXCHUNK(value)               (ASRC_IER_TXCHUNK_Msk & (_UINT32_(value) << ASRC_IER_TXCHUNK_Pos)) /* Assignment of value for TXCHUNK in the ASRC_IER register */
#define ASRC_IER_TXUDR_Pos                    _UINT32_(12)                                         /* (ASRC_IER) Transmit Under Flow Interrupt Enable Position */
#define ASRC_IER_TXUDR_Msk                    (_UINT32_(0x1) << ASRC_IER_TXUDR_Pos)                /* (ASRC_IER) Transmit Under Flow Interrupt Enable Mask */
#define ASRC_IER_TXUDR(value)                 (ASRC_IER_TXUDR_Msk & (_UINT32_(value) << ASRC_IER_TXUDR_Pos)) /* Assignment of value for TXUDR in the ASRC_IER register */
#define ASRC_IER_TXOVR_Pos                    _UINT32_(13)                                         /* (ASRC_IER) Transmit Over Flow Interrupt Enable Position */
#define ASRC_IER_TXOVR_Msk                    (_UINT32_(0x1) << ASRC_IER_TXOVR_Pos)                /* (ASRC_IER) Transmit Over Flow Interrupt Enable Mask */
#define ASRC_IER_TXOVR(value)                 (ASRC_IER_TXOVR_Msk & (_UINT32_(value) << ASRC_IER_TXOVR_Pos)) /* Assignment of value for TXOVR in the ASRC_IER register */
#define ASRC_IER_SECE_Pos                     _UINT32_(16)                                         /* (ASRC_IER) Security/Safety Report Interrupt Enable Position */
#define ASRC_IER_SECE_Msk                     (_UINT32_(0x1) << ASRC_IER_SECE_Pos)                 /* (ASRC_IER) Security/Safety Report Interrupt Enable Mask */
#define ASRC_IER_SECE(value)                  (ASRC_IER_SECE_Msk & (_UINT32_(value) << ASRC_IER_SECE_Pos)) /* Assignment of value for SECE in the ASRC_IER register */
#define ASRC_IER_EOMCP_Pos                    _UINT32_(17)                                         /* (ASRC_IER) End of Memory Check Period Interrupt Enable Position */
#define ASRC_IER_EOMCP_Msk                    (_UINT32_(0x1) << ASRC_IER_EOMCP_Pos)                /* (ASRC_IER) End of Memory Check Period Interrupt Enable Mask */
#define ASRC_IER_EOMCP(value)                 (ASRC_IER_EOMCP_Msk & (_UINT32_(value) << ASRC_IER_EOMCP_Pos)) /* Assignment of value for EOMCP in the ASRC_IER register */
#define ASRC_IER_FSINLOSS_Pos                 _UINT32_(28)                                         /* (ASRC_IER) Input Sampling Frequency Loss Interrupt Enable Position */
#define ASRC_IER_FSINLOSS_Msk                 (_UINT32_(0x1) << ASRC_IER_FSINLOSS_Pos)             /* (ASRC_IER) Input Sampling Frequency Loss Interrupt Enable Mask */
#define ASRC_IER_FSINLOSS(value)              (ASRC_IER_FSINLOSS_Msk & (_UINT32_(value) << ASRC_IER_FSINLOSS_Pos)) /* Assignment of value for FSINLOSS in the ASRC_IER register */
#define ASRC_IER_FSOUTLOSS_Pos                _UINT32_(29)                                         /* (ASRC_IER) Output Sampling Frequency Loss Interrupt Enable Position */
#define ASRC_IER_FSOUTLOSS_Msk                (_UINT32_(0x1) << ASRC_IER_FSOUTLOSS_Pos)            /* (ASRC_IER) Output Sampling Frequency Loss Interrupt Enable Mask */
#define ASRC_IER_FSOUTLOSS(value)             (ASRC_IER_FSOUTLOSS_Msk & (_UINT32_(value) << ASRC_IER_FSOUTLOSS_Pos)) /* Assignment of value for FSOUTLOSS in the ASRC_IER register */
#define ASRC_IER_LOCK_Pos                     _UINT32_(30)                                         /* (ASRC_IER) DPLL locked Interrupt Enable Position */
#define ASRC_IER_LOCK_Msk                     (_UINT32_(0x1) << ASRC_IER_LOCK_Pos)                 /* (ASRC_IER) DPLL locked Interrupt Enable Mask */
#define ASRC_IER_LOCK(value)                  (ASRC_IER_LOCK_Msk & (_UINT32_(value) << ASRC_IER_LOCK_Pos)) /* Assignment of value for LOCK in the ASRC_IER register */
#define ASRC_IER_Msk                          _UINT32_(0x70033F3F)                                 /* (ASRC_IER) Register Mask  */


/* -------- ASRC_IDR : (ASRC Offset: 0x78) ( /W 32) Interrupt Disable Register x -------- */
#define ASRC_IDR_RXRDY_Pos                    _UINT32_(0)                                          /* (ASRC_IDR) Receive Ready Interrupt Disable Position */
#define ASRC_IDR_RXRDY_Msk                    (_UINT32_(0x1) << ASRC_IDR_RXRDY_Pos)                /* (ASRC_IDR) Receive Ready Interrupt Disable Mask */
#define ASRC_IDR_RXRDY(value)                 (ASRC_IDR_RXRDY_Msk & (_UINT32_(value) << ASRC_IDR_RXRDY_Pos)) /* Assignment of value for RXRDY in the ASRC_IDR register */
#define ASRC_IDR_RXEMPTY_Pos                  _UINT32_(1)                                          /* (ASRC_IDR) Receive FIFO Empty Interrupt Disable Position */
#define ASRC_IDR_RXEMPTY_Msk                  (_UINT32_(0x1) << ASRC_IDR_RXEMPTY_Pos)              /* (ASRC_IDR) Receive FIFO Empty Interrupt Disable Mask */
#define ASRC_IDR_RXEMPTY(value)               (ASRC_IDR_RXEMPTY_Msk & (_UINT32_(value) << ASRC_IDR_RXEMPTY_Pos)) /* Assignment of value for RXEMPTY in the ASRC_IDR register */
#define ASRC_IDR_RXFULL_Pos                   _UINT32_(2)                                          /* (ASRC_IDR) Receive FIFO Full Interrupt Disable Position */
#define ASRC_IDR_RXFULL_Msk                   (_UINT32_(0x1) << ASRC_IDR_RXFULL_Pos)               /* (ASRC_IDR) Receive FIFO Full Interrupt Disable Mask */
#define ASRC_IDR_RXFULL(value)                (ASRC_IDR_RXFULL_Msk & (_UINT32_(value) << ASRC_IDR_RXFULL_Pos)) /* Assignment of value for RXFULL in the ASRC_IDR register */
#define ASRC_IDR_RXCHUNK_Pos                  _UINT32_(3)                                          /* (ASRC_IDR) Receive FIFO Chunk Interrupt Disable Position */
#define ASRC_IDR_RXCHUNK_Msk                  (_UINT32_(0x1) << ASRC_IDR_RXCHUNK_Pos)              /* (ASRC_IDR) Receive FIFO Chunk Interrupt Disable Mask */
#define ASRC_IDR_RXCHUNK(value)               (ASRC_IDR_RXCHUNK_Msk & (_UINT32_(value) << ASRC_IDR_RXCHUNK_Pos)) /* Assignment of value for RXCHUNK in the ASRC_IDR register */
#define ASRC_IDR_RXUDR_Pos                    _UINT32_(4)                                          /* (ASRC_IDR) Receive Under Flow Interrupt Disable Position */
#define ASRC_IDR_RXUDR_Msk                    (_UINT32_(0x1) << ASRC_IDR_RXUDR_Pos)                /* (ASRC_IDR) Receive Under Flow Interrupt Disable Mask */
#define ASRC_IDR_RXUDR(value)                 (ASRC_IDR_RXUDR_Msk & (_UINT32_(value) << ASRC_IDR_RXUDR_Pos)) /* Assignment of value for RXUDR in the ASRC_IDR register */
#define ASRC_IDR_RXOVR_Pos                    _UINT32_(5)                                          /* (ASRC_IDR) Receive Over Flow Interrupt Disable Position */
#define ASRC_IDR_RXOVR_Msk                    (_UINT32_(0x1) << ASRC_IDR_RXOVR_Pos)                /* (ASRC_IDR) Receive Over Flow Interrupt Disable Mask */
#define ASRC_IDR_RXOVR(value)                 (ASRC_IDR_RXOVR_Msk & (_UINT32_(value) << ASRC_IDR_RXOVR_Pos)) /* Assignment of value for RXOVR in the ASRC_IDR register */
#define ASRC_IDR_TXRDY_Pos                    _UINT32_(8)                                          /* (ASRC_IDR) Transmit Ready Interrupt Disable Position */
#define ASRC_IDR_TXRDY_Msk                    (_UINT32_(0x1) << ASRC_IDR_TXRDY_Pos)                /* (ASRC_IDR) Transmit Ready Interrupt Disable Mask */
#define ASRC_IDR_TXRDY(value)                 (ASRC_IDR_TXRDY_Msk & (_UINT32_(value) << ASRC_IDR_TXRDY_Pos)) /* Assignment of value for TXRDY in the ASRC_IDR register */
#define ASRC_IDR_TXEMPTY_Pos                  _UINT32_(9)                                          /* (ASRC_IDR) Transmit FIFO Empty Interrupt Disable Position */
#define ASRC_IDR_TXEMPTY_Msk                  (_UINT32_(0x1) << ASRC_IDR_TXEMPTY_Pos)              /* (ASRC_IDR) Transmit FIFO Empty Interrupt Disable Mask */
#define ASRC_IDR_TXEMPTY(value)               (ASRC_IDR_TXEMPTY_Msk & (_UINT32_(value) << ASRC_IDR_TXEMPTY_Pos)) /* Assignment of value for TXEMPTY in the ASRC_IDR register */
#define ASRC_IDR_TXFULL_Pos                   _UINT32_(10)                                         /* (ASRC_IDR) Transmit FIFO Full Interrupt Disable Position */
#define ASRC_IDR_TXFULL_Msk                   (_UINT32_(0x1) << ASRC_IDR_TXFULL_Pos)               /* (ASRC_IDR) Transmit FIFO Full Interrupt Disable Mask */
#define ASRC_IDR_TXFULL(value)                (ASRC_IDR_TXFULL_Msk & (_UINT32_(value) << ASRC_IDR_TXFULL_Pos)) /* Assignment of value for TXFULL in the ASRC_IDR register */
#define ASRC_IDR_TXCHUNK_Pos                  _UINT32_(11)                                         /* (ASRC_IDR) Transmit FIFO Chunk Interrupt Disable Position */
#define ASRC_IDR_TXCHUNK_Msk                  (_UINT32_(0x1) << ASRC_IDR_TXCHUNK_Pos)              /* (ASRC_IDR) Transmit FIFO Chunk Interrupt Disable Mask */
#define ASRC_IDR_TXCHUNK(value)               (ASRC_IDR_TXCHUNK_Msk & (_UINT32_(value) << ASRC_IDR_TXCHUNK_Pos)) /* Assignment of value for TXCHUNK in the ASRC_IDR register */
#define ASRC_IDR_TXUDR_Pos                    _UINT32_(12)                                         /* (ASRC_IDR) Transmit Under Flow Interrupt Disable Position */
#define ASRC_IDR_TXUDR_Msk                    (_UINT32_(0x1) << ASRC_IDR_TXUDR_Pos)                /* (ASRC_IDR) Transmit Under Flow Interrupt Disable Mask */
#define ASRC_IDR_TXUDR(value)                 (ASRC_IDR_TXUDR_Msk & (_UINT32_(value) << ASRC_IDR_TXUDR_Pos)) /* Assignment of value for TXUDR in the ASRC_IDR register */
#define ASRC_IDR_TXOVR_Pos                    _UINT32_(13)                                         /* (ASRC_IDR) Transmit Over Flow Interrupt Disable Position */
#define ASRC_IDR_TXOVR_Msk                    (_UINT32_(0x1) << ASRC_IDR_TXOVR_Pos)                /* (ASRC_IDR) Transmit Over Flow Interrupt Disable Mask */
#define ASRC_IDR_TXOVR(value)                 (ASRC_IDR_TXOVR_Msk & (_UINT32_(value) << ASRC_IDR_TXOVR_Pos)) /* Assignment of value for TXOVR in the ASRC_IDR register */
#define ASRC_IDR_SECE_Pos                     _UINT32_(16)                                         /* (ASRC_IDR) Security/Safety Report Interrupt Disable Position */
#define ASRC_IDR_SECE_Msk                     (_UINT32_(0x1) << ASRC_IDR_SECE_Pos)                 /* (ASRC_IDR) Security/Safety Report Interrupt Disable Mask */
#define ASRC_IDR_SECE(value)                  (ASRC_IDR_SECE_Msk & (_UINT32_(value) << ASRC_IDR_SECE_Pos)) /* Assignment of value for SECE in the ASRC_IDR register */
#define ASRC_IDR_EOMCP_Pos                    _UINT32_(17)                                         /* (ASRC_IDR) End of Memory Check Period Interrupt Disable Position */
#define ASRC_IDR_EOMCP_Msk                    (_UINT32_(0x1) << ASRC_IDR_EOMCP_Pos)                /* (ASRC_IDR) End of Memory Check Period Interrupt Disable Mask */
#define ASRC_IDR_EOMCP(value)                 (ASRC_IDR_EOMCP_Msk & (_UINT32_(value) << ASRC_IDR_EOMCP_Pos)) /* Assignment of value for EOMCP in the ASRC_IDR register */
#define ASRC_IDR_FSINLOSS_Pos                 _UINT32_(28)                                         /* (ASRC_IDR) Input Sampling Frequency Loss Interrupt Disable Position */
#define ASRC_IDR_FSINLOSS_Msk                 (_UINT32_(0x1) << ASRC_IDR_FSINLOSS_Pos)             /* (ASRC_IDR) Input Sampling Frequency Loss Interrupt Disable Mask */
#define ASRC_IDR_FSINLOSS(value)              (ASRC_IDR_FSINLOSS_Msk & (_UINT32_(value) << ASRC_IDR_FSINLOSS_Pos)) /* Assignment of value for FSINLOSS in the ASRC_IDR register */
#define ASRC_IDR_FSOUTLOSS_Pos                _UINT32_(29)                                         /* (ASRC_IDR) Output Sampling Frequency Loss Interrupt Disable Position */
#define ASRC_IDR_FSOUTLOSS_Msk                (_UINT32_(0x1) << ASRC_IDR_FSOUTLOSS_Pos)            /* (ASRC_IDR) Output Sampling Frequency Loss Interrupt Disable Mask */
#define ASRC_IDR_FSOUTLOSS(value)             (ASRC_IDR_FSOUTLOSS_Msk & (_UINT32_(value) << ASRC_IDR_FSOUTLOSS_Pos)) /* Assignment of value for FSOUTLOSS in the ASRC_IDR register */
#define ASRC_IDR_LOCK_Pos                     _UINT32_(30)                                         /* (ASRC_IDR) DPLL locked Interrupt Disable Position */
#define ASRC_IDR_LOCK_Msk                     (_UINT32_(0x1) << ASRC_IDR_LOCK_Pos)                 /* (ASRC_IDR) DPLL locked Interrupt Disable Mask */
#define ASRC_IDR_LOCK(value)                  (ASRC_IDR_LOCK_Msk & (_UINT32_(value) << ASRC_IDR_LOCK_Pos)) /* Assignment of value for LOCK in the ASRC_IDR register */
#define ASRC_IDR_Msk                          _UINT32_(0x70033F3F)                                 /* (ASRC_IDR) Register Mask  */


/* -------- ASRC_IMR : (ASRC Offset: 0x88) ( R/ 32) Interrupt Mask Register x -------- */
#define ASRC_IMR_RESETVALUE                   _UINT32_(0x00)                                       /*  (ASRC_IMR) Interrupt Mask Register x  Reset Value */

#define ASRC_IMR_RXRDY_Pos                    _UINT32_(0)                                          /* (ASRC_IMR) Receive Ready Interrupt Mask Position */
#define ASRC_IMR_RXRDY_Msk                    (_UINT32_(0x1) << ASRC_IMR_RXRDY_Pos)                /* (ASRC_IMR) Receive Ready Interrupt Mask Mask */
#define ASRC_IMR_RXRDY(value)                 (ASRC_IMR_RXRDY_Msk & (_UINT32_(value) << ASRC_IMR_RXRDY_Pos)) /* Assignment of value for RXRDY in the ASRC_IMR register */
#define ASRC_IMR_RXEMPTY_Pos                  _UINT32_(1)                                          /* (ASRC_IMR) Receive FIFO Empty Interrupt Mask Position */
#define ASRC_IMR_RXEMPTY_Msk                  (_UINT32_(0x1) << ASRC_IMR_RXEMPTY_Pos)              /* (ASRC_IMR) Receive FIFO Empty Interrupt Mask Mask */
#define ASRC_IMR_RXEMPTY(value)               (ASRC_IMR_RXEMPTY_Msk & (_UINT32_(value) << ASRC_IMR_RXEMPTY_Pos)) /* Assignment of value for RXEMPTY in the ASRC_IMR register */
#define ASRC_IMR_RXFULL_Pos                   _UINT32_(2)                                          /* (ASRC_IMR) Receive FIFO Full Interrupt Mask Position */
#define ASRC_IMR_RXFULL_Msk                   (_UINT32_(0x1) << ASRC_IMR_RXFULL_Pos)               /* (ASRC_IMR) Receive FIFO Full Interrupt Mask Mask */
#define ASRC_IMR_RXFULL(value)                (ASRC_IMR_RXFULL_Msk & (_UINT32_(value) << ASRC_IMR_RXFULL_Pos)) /* Assignment of value for RXFULL in the ASRC_IMR register */
#define ASRC_IMR_RXCHUNK_Pos                  _UINT32_(3)                                          /* (ASRC_IMR) Receive FIFO Chunk Interrupt Mask Position */
#define ASRC_IMR_RXCHUNK_Msk                  (_UINT32_(0x1) << ASRC_IMR_RXCHUNK_Pos)              /* (ASRC_IMR) Receive FIFO Chunk Interrupt Mask Mask */
#define ASRC_IMR_RXCHUNK(value)               (ASRC_IMR_RXCHUNK_Msk & (_UINT32_(value) << ASRC_IMR_RXCHUNK_Pos)) /* Assignment of value for RXCHUNK in the ASRC_IMR register */
#define ASRC_IMR_RXUDR_Pos                    _UINT32_(4)                                          /* (ASRC_IMR) Receive Under Flow Interrupt Mask Position */
#define ASRC_IMR_RXUDR_Msk                    (_UINT32_(0x1) << ASRC_IMR_RXUDR_Pos)                /* (ASRC_IMR) Receive Under Flow Interrupt Mask Mask */
#define ASRC_IMR_RXUDR(value)                 (ASRC_IMR_RXUDR_Msk & (_UINT32_(value) << ASRC_IMR_RXUDR_Pos)) /* Assignment of value for RXUDR in the ASRC_IMR register */
#define ASRC_IMR_RXOVR_Pos                    _UINT32_(5)                                          /* (ASRC_IMR) Receive Over Flow Interrupt Mask Position */
#define ASRC_IMR_RXOVR_Msk                    (_UINT32_(0x1) << ASRC_IMR_RXOVR_Pos)                /* (ASRC_IMR) Receive Over Flow Interrupt Mask Mask */
#define ASRC_IMR_RXOVR(value)                 (ASRC_IMR_RXOVR_Msk & (_UINT32_(value) << ASRC_IMR_RXOVR_Pos)) /* Assignment of value for RXOVR in the ASRC_IMR register */
#define ASRC_IMR_TXRDY_Pos                    _UINT32_(8)                                          /* (ASRC_IMR) Transmit Ready Interrupt Mask Position */
#define ASRC_IMR_TXRDY_Msk                    (_UINT32_(0x1) << ASRC_IMR_TXRDY_Pos)                /* (ASRC_IMR) Transmit Ready Interrupt Mask Mask */
#define ASRC_IMR_TXRDY(value)                 (ASRC_IMR_TXRDY_Msk & (_UINT32_(value) << ASRC_IMR_TXRDY_Pos)) /* Assignment of value for TXRDY in the ASRC_IMR register */
#define ASRC_IMR_TXEMPTY_Pos                  _UINT32_(9)                                          /* (ASRC_IMR) Transmit FIFO Empty Interrupt Mask Position */
#define ASRC_IMR_TXEMPTY_Msk                  (_UINT32_(0x1) << ASRC_IMR_TXEMPTY_Pos)              /* (ASRC_IMR) Transmit FIFO Empty Interrupt Mask Mask */
#define ASRC_IMR_TXEMPTY(value)               (ASRC_IMR_TXEMPTY_Msk & (_UINT32_(value) << ASRC_IMR_TXEMPTY_Pos)) /* Assignment of value for TXEMPTY in the ASRC_IMR register */
#define ASRC_IMR_TXFULL_Pos                   _UINT32_(10)                                         /* (ASRC_IMR) Transmit FIFO Full Interrupt Mask Position */
#define ASRC_IMR_TXFULL_Msk                   (_UINT32_(0x1) << ASRC_IMR_TXFULL_Pos)               /* (ASRC_IMR) Transmit FIFO Full Interrupt Mask Mask */
#define ASRC_IMR_TXFULL(value)                (ASRC_IMR_TXFULL_Msk & (_UINT32_(value) << ASRC_IMR_TXFULL_Pos)) /* Assignment of value for TXFULL in the ASRC_IMR register */
#define ASRC_IMR_TXCHUNK_Pos                  _UINT32_(11)                                         /* (ASRC_IMR) Transmit FIFO Chunk Interrupt Mask Position */
#define ASRC_IMR_TXCHUNK_Msk                  (_UINT32_(0x1) << ASRC_IMR_TXCHUNK_Pos)              /* (ASRC_IMR) Transmit FIFO Chunk Interrupt Mask Mask */
#define ASRC_IMR_TXCHUNK(value)               (ASRC_IMR_TXCHUNK_Msk & (_UINT32_(value) << ASRC_IMR_TXCHUNK_Pos)) /* Assignment of value for TXCHUNK in the ASRC_IMR register */
#define ASRC_IMR_TXUDR_Pos                    _UINT32_(12)                                         /* (ASRC_IMR) Transmit Under Flow Interrupt Mask Position */
#define ASRC_IMR_TXUDR_Msk                    (_UINT32_(0x1) << ASRC_IMR_TXUDR_Pos)                /* (ASRC_IMR) Transmit Under Flow Interrupt Mask Mask */
#define ASRC_IMR_TXUDR(value)                 (ASRC_IMR_TXUDR_Msk & (_UINT32_(value) << ASRC_IMR_TXUDR_Pos)) /* Assignment of value for TXUDR in the ASRC_IMR register */
#define ASRC_IMR_TXOVR_Pos                    _UINT32_(13)                                         /* (ASRC_IMR) Transmit Over Flow Interrupt Mask Position */
#define ASRC_IMR_TXOVR_Msk                    (_UINT32_(0x1) << ASRC_IMR_TXOVR_Pos)                /* (ASRC_IMR) Transmit Over Flow Interrupt Mask Mask */
#define ASRC_IMR_TXOVR(value)                 (ASRC_IMR_TXOVR_Msk & (_UINT32_(value) << ASRC_IMR_TXOVR_Pos)) /* Assignment of value for TXOVR in the ASRC_IMR register */
#define ASRC_IMR_SECE_Pos                     _UINT32_(16)                                         /* (ASRC_IMR) Security/Safety Report Interrupt Mask Position */
#define ASRC_IMR_SECE_Msk                     (_UINT32_(0x1) << ASRC_IMR_SECE_Pos)                 /* (ASRC_IMR) Security/Safety Report Interrupt Mask Mask */
#define ASRC_IMR_SECE(value)                  (ASRC_IMR_SECE_Msk & (_UINT32_(value) << ASRC_IMR_SECE_Pos)) /* Assignment of value for SECE in the ASRC_IMR register */
#define ASRC_IMR_EOMCP_Pos                    _UINT32_(17)                                         /* (ASRC_IMR) End of Memory Check Period Interrupt Mask Position */
#define ASRC_IMR_EOMCP_Msk                    (_UINT32_(0x1) << ASRC_IMR_EOMCP_Pos)                /* (ASRC_IMR) End of Memory Check Period Interrupt Mask Mask */
#define ASRC_IMR_EOMCP(value)                 (ASRC_IMR_EOMCP_Msk & (_UINT32_(value) << ASRC_IMR_EOMCP_Pos)) /* Assignment of value for EOMCP in the ASRC_IMR register */
#define ASRC_IMR_FSINLOSS_Pos                 _UINT32_(28)                                         /* (ASRC_IMR) Input Sampling Frequency Loss Interrupt Mask Position */
#define ASRC_IMR_FSINLOSS_Msk                 (_UINT32_(0x1) << ASRC_IMR_FSINLOSS_Pos)             /* (ASRC_IMR) Input Sampling Frequency Loss Interrupt Mask Mask */
#define ASRC_IMR_FSINLOSS(value)              (ASRC_IMR_FSINLOSS_Msk & (_UINT32_(value) << ASRC_IMR_FSINLOSS_Pos)) /* Assignment of value for FSINLOSS in the ASRC_IMR register */
#define ASRC_IMR_FSOUTLOSS_Pos                _UINT32_(29)                                         /* (ASRC_IMR) Output Sampling Frequency Loss Interrupt Mask Position */
#define ASRC_IMR_FSOUTLOSS_Msk                (_UINT32_(0x1) << ASRC_IMR_FSOUTLOSS_Pos)            /* (ASRC_IMR) Output Sampling Frequency Loss Interrupt Mask Mask */
#define ASRC_IMR_FSOUTLOSS(value)             (ASRC_IMR_FSOUTLOSS_Msk & (_UINT32_(value) << ASRC_IMR_FSOUTLOSS_Pos)) /* Assignment of value for FSOUTLOSS in the ASRC_IMR register */
#define ASRC_IMR_LOCK_Pos                     _UINT32_(30)                                         /* (ASRC_IMR) DPLL locked Interrupt Mask Position */
#define ASRC_IMR_LOCK_Msk                     (_UINT32_(0x1) << ASRC_IMR_LOCK_Pos)                 /* (ASRC_IMR) DPLL locked Interrupt Mask Mask */
#define ASRC_IMR_LOCK(value)                  (ASRC_IMR_LOCK_Msk & (_UINT32_(value) << ASRC_IMR_LOCK_Pos)) /* Assignment of value for LOCK in the ASRC_IMR register */
#define ASRC_IMR_Msk                          _UINT32_(0x70033F3F)                                 /* (ASRC_IMR) Register Mask  */


/* -------- ASRC_ISR : (ASRC Offset: 0x98) ( R/ 32) Interrupt Status Register x -------- */
#define ASRC_ISR_RESETVALUE                   _UINT32_(0x302)                                      /*  (ASRC_ISR) Interrupt Status Register x  Reset Value */

#define ASRC_ISR_RXRDY_Pos                    _UINT32_(0)                                          /* (ASRC_ISR) Receive Ready Interrupt Status (cleared when output FIFO is empty after reading ASRC_RHRx) Position */
#define ASRC_ISR_RXRDY_Msk                    (_UINT32_(0x1) << ASRC_ISR_RXRDY_Pos)                /* (ASRC_ISR) Receive Ready Interrupt Status (cleared when output FIFO is empty after reading ASRC_RHRx) Mask */
#define ASRC_ISR_RXRDY(value)                 (ASRC_ISR_RXRDY_Msk & (_UINT32_(value) << ASRC_ISR_RXRDY_Pos)) /* Assignment of value for RXRDY in the ASRC_ISR register */
#define ASRC_ISR_RXEMPTY_Pos                  _UINT32_(1)                                          /* (ASRC_ISR) Receive FIFO Empty Interrupt Status (cleared automatically when ASRC has converted one sample) Position */
#define ASRC_ISR_RXEMPTY_Msk                  (_UINT32_(0x1) << ASRC_ISR_RXEMPTY_Pos)              /* (ASRC_ISR) Receive FIFO Empty Interrupt Status (cleared automatically when ASRC has converted one sample) Mask */
#define ASRC_ISR_RXEMPTY(value)               (ASRC_ISR_RXEMPTY_Msk & (_UINT32_(value) << ASRC_ISR_RXEMPTY_Pos)) /* Assignment of value for RXEMPTY in the ASRC_ISR register */
#define ASRC_ISR_RXFULL_Pos                   _UINT32_(2)                                          /* (ASRC_ISR) Receive FIFO Full Interrupt Status (cleared by reading ASRC_RHRx) Position */
#define ASRC_ISR_RXFULL_Msk                   (_UINT32_(0x1) << ASRC_ISR_RXFULL_Pos)               /* (ASRC_ISR) Receive FIFO Full Interrupt Status (cleared by reading ASRC_RHRx) Mask */
#define ASRC_ISR_RXFULL(value)                (ASRC_ISR_RXFULL_Msk & (_UINT32_(value) << ASRC_ISR_RXFULL_Pos)) /* Assignment of value for RXFULL in the ASRC_ISR register */
#define ASRC_ISR_RXCHUNK_Pos                  _UINT32_(3)                                          /* (ASRC_ISR) Receive FIFO Chunk Interrupt Status (cleared automatically when the output FIFO has fewer samples than configured in ASRC_CH_CONF.CHUNKx) Position */
#define ASRC_ISR_RXCHUNK_Msk                  (_UINT32_(0x1) << ASRC_ISR_RXCHUNK_Pos)              /* (ASRC_ISR) Receive FIFO Chunk Interrupt Status (cleared automatically when the output FIFO has fewer samples than configured in ASRC_CH_CONF.CHUNKx) Mask */
#define ASRC_ISR_RXCHUNK(value)               (ASRC_ISR_RXCHUNK_Msk & (_UINT32_(value) << ASRC_ISR_RXCHUNK_Pos)) /* Assignment of value for RXCHUNK in the ASRC_ISR register */
#define ASRC_ISR_RXUDR_Pos                    _UINT32_(4)                                          /* (ASRC_ISR) Receive Under Flow Interrupt Status (cleared on read) Position */
#define ASRC_ISR_RXUDR_Msk                    (_UINT32_(0x1) << ASRC_ISR_RXUDR_Pos)                /* (ASRC_ISR) Receive Under Flow Interrupt Status (cleared on read) Mask */
#define ASRC_ISR_RXUDR(value)                 (ASRC_ISR_RXUDR_Msk & (_UINT32_(value) << ASRC_ISR_RXUDR_Pos)) /* Assignment of value for RXUDR in the ASRC_ISR register */
#define ASRC_ISR_RXOVR_Pos                    _UINT32_(5)                                          /* (ASRC_ISR) Receive Over Flow Interrupt Status (cleared on read) Position */
#define ASRC_ISR_RXOVR_Msk                    (_UINT32_(0x1) << ASRC_ISR_RXOVR_Pos)                /* (ASRC_ISR) Receive Over Flow Interrupt Status (cleared on read) Mask */
#define ASRC_ISR_RXOVR(value)                 (ASRC_ISR_RXOVR_Msk & (_UINT32_(value) << ASRC_ISR_RXOVR_Pos)) /* Assignment of value for RXOVR in the ASRC_ISR register */
#define ASRC_ISR_TXRDY_Pos                    _UINT32_(8)                                          /* (ASRC_ISR) Transmit Ready Interrupt Status (cleared automatically when input FIFO is full) Position */
#define ASRC_ISR_TXRDY_Msk                    (_UINT32_(0x1) << ASRC_ISR_TXRDY_Pos)                /* (ASRC_ISR) Transmit Ready Interrupt Status (cleared automatically when input FIFO is full) Mask */
#define ASRC_ISR_TXRDY(value)                 (ASRC_ISR_TXRDY_Msk & (_UINT32_(value) << ASRC_ISR_TXRDY_Pos)) /* Assignment of value for TXRDY in the ASRC_ISR register */
#define ASRC_ISR_TXEMPTY_Pos                  _UINT32_(9)                                          /* (ASRC_ISR) Transmit FIFO Empty Interrupt Status (cleared when writing in ASRC_THRx) Position */
#define ASRC_ISR_TXEMPTY_Msk                  (_UINT32_(0x1) << ASRC_ISR_TXEMPTY_Pos)              /* (ASRC_ISR) Transmit FIFO Empty Interrupt Status (cleared when writing in ASRC_THRx) Mask */
#define ASRC_ISR_TXEMPTY(value)               (ASRC_ISR_TXEMPTY_Msk & (_UINT32_(value) << ASRC_ISR_TXEMPTY_Pos)) /* Assignment of value for TXEMPTY in the ASRC_ISR register */
#define ASRC_ISR_TXFULL_Pos                   _UINT32_(10)                                         /* (ASRC_ISR) Transmit FIFO Full Interrupt Status (cleared automatically when ASRC starts converting data) Position */
#define ASRC_ISR_TXFULL_Msk                   (_UINT32_(0x1) << ASRC_ISR_TXFULL_Pos)               /* (ASRC_ISR) Transmit FIFO Full Interrupt Status (cleared automatically when ASRC starts converting data) Mask */
#define ASRC_ISR_TXFULL(value)                (ASRC_ISR_TXFULL_Msk & (_UINT32_(value) << ASRC_ISR_TXFULL_Pos)) /* Assignment of value for TXFULL in the ASRC_ISR register */
#define ASRC_ISR_TXCHUNK_Pos                  _UINT32_(11)                                         /* (ASRC_ISR) Transmit FIFO Chunk Interrupt Status (cleared automatically when the input FIFO has fewer samples than configured in ASRC_CH_CONF.CHUNKx) Position */
#define ASRC_ISR_TXCHUNK_Msk                  (_UINT32_(0x1) << ASRC_ISR_TXCHUNK_Pos)              /* (ASRC_ISR) Transmit FIFO Chunk Interrupt Status (cleared automatically when the input FIFO has fewer samples than configured in ASRC_CH_CONF.CHUNKx) Mask */
#define ASRC_ISR_TXCHUNK(value)               (ASRC_ISR_TXCHUNK_Msk & (_UINT32_(value) << ASRC_ISR_TXCHUNK_Pos)) /* Assignment of value for TXCHUNK in the ASRC_ISR register */
#define ASRC_ISR_TXUDR_Pos                    _UINT32_(12)                                         /* (ASRC_ISR) Transmit Under Flow Interrupt Status (cleared on read) Position */
#define ASRC_ISR_TXUDR_Msk                    (_UINT32_(0x1) << ASRC_ISR_TXUDR_Pos)                /* (ASRC_ISR) Transmit Under Flow Interrupt Status (cleared on read) Mask */
#define ASRC_ISR_TXUDR(value)                 (ASRC_ISR_TXUDR_Msk & (_UINT32_(value) << ASRC_ISR_TXUDR_Pos)) /* Assignment of value for TXUDR in the ASRC_ISR register */
#define ASRC_ISR_TXOVR_Pos                    _UINT32_(13)                                         /* (ASRC_ISR) Transmit Over Flow Interrupt Status (cleared on read) Position */
#define ASRC_ISR_TXOVR_Msk                    (_UINT32_(0x1) << ASRC_ISR_TXOVR_Pos)                /* (ASRC_ISR) Transmit Over Flow Interrupt Status (cleared on read) Mask */
#define ASRC_ISR_TXOVR(value)                 (ASRC_ISR_TXOVR_Msk & (_UINT32_(value) << ASRC_ISR_TXOVR_Pos)) /* Assignment of value for TXOVR in the ASRC_ISR register */
#define ASRC_ISR_SECE_Pos                     _UINT32_(16)                                         /* (ASRC_ISR) Security and/or Safety Event Interrupt Status (cleared on read) Position */
#define ASRC_ISR_SECE_Msk                     (_UINT32_(0x1) << ASRC_ISR_SECE_Pos)                 /* (ASRC_ISR) Security and/or Safety Event Interrupt Status (cleared on read) Mask */
#define ASRC_ISR_SECE(value)                  (ASRC_ISR_SECE_Msk & (_UINT32_(value) << ASRC_ISR_SECE_Pos)) /* Assignment of value for SECE in the ASRC_ISR register */
#define   ASRC_ISR_SECE_0_Val                 _UINT32_(0x0)                                        /* (ASRC_ISR) No security or safety event has occurred since the last read of ASRC_ISR register  */
#define   ASRC_ISR_SECE_1_Val                 _UINT32_(0x1)                                        /* (ASRC_ISR) One or more safety or security events has occurred since the last read of ASRC_ISR. For details on the event, refer to ASRC_WPSR and ASRC_ESR direct access related error reports.  */
#define ASRC_ISR_SECE_0                       (ASRC_ISR_SECE_0_Val << ASRC_ISR_SECE_Pos)           /* (ASRC_ISR) No security or safety event has occurred since the last read of ASRC_ISR register Position */
#define ASRC_ISR_SECE_1                       (ASRC_ISR_SECE_1_Val << ASRC_ISR_SECE_Pos)           /* (ASRC_ISR) One or more safety or security events has occurred since the last read of ASRC_ISR. For details on the event, refer to ASRC_WPSR and ASRC_ESR direct access related error reports. Position */
#define ASRC_ISR_EOMCP_Pos                    _UINT32_(17)                                         /* (ASRC_ISR) End of Memory Check Period Interrupt Status (cleared on read) Position */
#define ASRC_ISR_EOMCP_Msk                    (_UINT32_(0x1) << ASRC_ISR_EOMCP_Pos)                /* (ASRC_ISR) End of Memory Check Period Interrupt Status (cleared on read) Mask */
#define ASRC_ISR_EOMCP(value)                 (ASRC_ISR_EOMCP_Msk & (_UINT32_(value) << ASRC_ISR_EOMCP_Pos)) /* Assignment of value for EOMCP in the ASRC_ISR register */
#define ASRC_ISR_FSINLOSS_Pos                 _UINT32_(28)                                         /* (ASRC_ISR) Input Sampling Frequency Loss Interrupt Status (cleared on read) Position */
#define ASRC_ISR_FSINLOSS_Msk                 (_UINT32_(0x1) << ASRC_ISR_FSINLOSS_Pos)             /* (ASRC_ISR) Input Sampling Frequency Loss Interrupt Status (cleared on read) Mask */
#define ASRC_ISR_FSINLOSS(value)              (ASRC_ISR_FSINLOSS_Msk & (_UINT32_(value) << ASRC_ISR_FSINLOSS_Pos)) /* Assignment of value for FSINLOSS in the ASRC_ISR register */
#define ASRC_ISR_FSOUTLOSS_Pos                _UINT32_(29)                                         /* (ASRC_ISR) Output Sampling Frequency Loss Interrupt Status (cleared on read) Position */
#define ASRC_ISR_FSOUTLOSS_Msk                (_UINT32_(0x1) << ASRC_ISR_FSOUTLOSS_Pos)            /* (ASRC_ISR) Output Sampling Frequency Loss Interrupt Status (cleared on read) Mask */
#define ASRC_ISR_FSOUTLOSS(value)             (ASRC_ISR_FSOUTLOSS_Msk & (_UINT32_(value) << ASRC_ISR_FSOUTLOSS_Pos)) /* Assignment of value for FSOUTLOSS in the ASRC_ISR register */
#define ASRC_ISR_LOCK_Pos                     _UINT32_(30)                                         /* (ASRC_ISR) DPLL Locked Interrupt Status (cleared by writing ASRC_MR.ASRCENx=0) Position */
#define ASRC_ISR_LOCK_Msk                     (_UINT32_(0x1) << ASRC_ISR_LOCK_Pos)                 /* (ASRC_ISR) DPLL Locked Interrupt Status (cleared by writing ASRC_MR.ASRCENx=0) Mask */
#define ASRC_ISR_LOCK(value)                  (ASRC_ISR_LOCK_Msk & (_UINT32_(value) << ASRC_ISR_LOCK_Pos)) /* Assignment of value for LOCK in the ASRC_ISR register */
#define ASRC_ISR_Msk                          _UINT32_(0x70033F3F)                                 /* (ASRC_ISR) Register Mask  */


/* -------- ASRC_ESR : (ASRC Offset: 0xA8) ( R/ 32) Error Status Register -------- */
#define ASRC_ESR_RESETVALUE                   _UINT32_(0x00)                                       /*  (ASRC_ESR) Error Status Register  Reset Value */

#define ASRC_ESR_INCFGERR_Pos                 _UINT32_(0)                                          /* (ASRC_ESR) Input Configuration Error Position */
#define ASRC_ESR_INCFGERR_Msk                 (_UINT32_(0x1F) << ASRC_ESR_INCFGERR_Pos)            /* (ASRC_ESR) Input Configuration Error Mask */
#define ASRC_ESR_INCFGERR(value)              (ASRC_ESR_INCFGERR_Msk & (_UINT32_(value) << ASRC_ESR_INCFGERR_Pos)) /* Assignment of value for INCFGERR in the ASRC_ESR register */
#define   ASRC_ESR_INCFGERR_OUTCFG_OK_Val     _UINT32_(0x0)                                        /* (ASRC_ESR) Correct configuration of ASRC_MR, ASRC_VBPS_OUT, ASRC_CH_CONF.  */
#define   ASRC_ESR_INCFGERR_OP0_D0_CHK16_8M_Val _UINT32_(0x1)                                        /* (ASRC_ESR) Channel operating mode 0, DSP0: CHUNK0=16 or CHUNK0=8 and MONO0=1 is not supported.  */
#define   ASRC_ESR_INCFGERR_OP0_D1_CHK16_8M_Val _UINT32_(0x2)                                        /* (ASRC_ESR) Channel operating mode 0, DSP1: CHUNK1=16 or CHUNK1=8 and MONO1=1 is not supported.  */
#define   ASRC_ESR_INCFGERR_OP0_D2_CHK16_8M_Val _UINT32_(0x3)                                        /* (ASRC_ESR) Channel operating mode 0, DSP2: CHUNK2=16 or CHUNK2=8 and MONO2=1 is not supported.  */
#define   ASRC_ESR_INCFGERR_OP0_D3_CHK16_8M_Val _UINT32_(0x4)                                        /* (ASRC_ESR) Channel operating mode 0, DSP3: CHUNK3=16 or CHUNK3=8 and MONO3=1 is not supported.  */
#define   ASRC_ESR_INCFGERR_OP1_D01_EN_Val    _UINT32_(0x5)                                        /* (ASRC_ESR) Channel operating mode 1, DSP0/1: enable configuration is not correct (1 DSP is disabled)  */
#define   ASRC_ESR_INCFGERR_OP1_D01_M_Val     _UINT32_(0x6)                                        /* (ASRC_ESR) Channel operating mode 1, DSP0/1: MONO0=1, MONO1=0 is not supported.  */
#define   ASRC_ESR_INCFGERR_OP1_D01_CHK16_Val _UINT32_(0x7)                                        /* (ASRC_ESR) Channel operating mode 1, DSP0/1: CHUNK0=16 is not supported.  */
#define   ASRC_ESR_INCFGERR_OP1_D2_CHK16_8M_Val _UINT32_(0x8)                                        /* (ASRC_ESR) Channel operating mode 1, DSP2: CHUNK2=16 or CHUNK2=8 and MONO2=1 is not supported.  */
#define   ASRC_ESR_INCFGERR_OP1_D3_CHK16_8M_Val _UINT32_(0x9)                                        /* (ASRC_ESR) Channel operating mode 1, DSP3: CHUNK3=16 or CHUNK3=8 and MONO3=1 is not supported.  */
#define   ASRC_ESR_INCFGERR_OP2_D01_EN_Val    _UINT32_(0xA)                                        /* (ASRC_ESR) Channel operating mode 2, DSP0/1: enable configuration is not correct (1 DSP is disabled)  */
#define   ASRC_ESR_INCFGERR_OP2_D01_M_Val     _UINT32_(0xB)                                        /* (ASRC_ESR) Channel operating mode 2, DSP0/1: MONO0=1, MONO1=0 is not supported.  */
#define   ASRC_ESR_INCFGERR_OP2_D01_CHK16_Val _UINT32_(0xC)                                        /* (ASRC_ESR) Channel operating mode 2, DSP0/1: CHUNK0=16 is not supported.  */
#define   ASRC_ESR_INCFGERR_OP2_D23_EN_Val    _UINT32_(0xD)                                        /* (ASRC_ESR) Channel operating mode 2, DSP2/3: enable configuration is not correct (1 DSP is disabled)  */
#define   ASRC_ESR_INCFGERR_OP2_D23_M_Val     _UINT32_(0xE)                                        /* (ASRC_ESR) Channel operating mode 2, DSP2/3: MONO2=1, MONO3=0 is not supported.  */
#define   ASRC_ESR_INCFGERR_OP2_D23_CHK16_Val _UINT32_(0xF)                                        /* (ASRC_ESR) Channel operating mode 2, DSP2/3: CHUNK2=16 is not supported.  */
#define   ASRC_ESR_INCFGERR_OP3_D012_EN_Val   _UINT32_(0x10)                                       /* (ASRC_ESR) Channel operating mode 3, DSP0/1/2: enable configuration is not correct (at least 1 DSP is disabled)  */
#define   ASRC_ESR_INCFGERR_OP3_D012_M_Val    _UINT32_(0x11)                                       /* (ASRC_ESR) Channel operating mode 3, DSP0/1/2: mono configuration is not correct (e.g. MONO0=1, MONO1=0 or MONO2=0 is not supported).  */
#define   ASRC_ESR_INCFGERR_OP3_D012_CHK16_Val _UINT32_(0x12)                                       /* (ASRC_ESR) Channel operating mode 3, DSP0/1/2: CHUNK0=16 is not supported.  */
#define   ASRC_ESR_INCFGERR_OP3_D3_CHK16_8M_Val _UINT32_(0x13)                                       /* (ASRC_ESR) Channel operating mode 3, DSP3: CHUNK3=16 or CHUNK3=8 and MONO3 is not supported.  */
#define   ASRC_ESR_INCFGERR_OP4_D0123_EN_Val  _UINT32_(0x14)                                       /* (ASRC_ESR) Channel operating mode 4, DSP0/1/2/3: enable configuration is not correct (at least 1 DSP is disabled)  */
#define   ASRC_ESR_INCFGERR_OP4_D0123_M_Val   _UINT32_(0x15)                                       /* (ASRC_ESR) Channel operating mode 4, DSP0/1/2/3: mono configuration is not correct (e.g. MONO0=1, MONO1=0 or MONO2=0 or MONO3=0 is not supported).  */
#define ASRC_ESR_INCFGERR_OUTCFG_OK           (ASRC_ESR_INCFGERR_OUTCFG_OK_Val << ASRC_ESR_INCFGERR_Pos) /* (ASRC_ESR) Correct configuration of ASRC_MR, ASRC_VBPS_OUT, ASRC_CH_CONF. Position */
#define ASRC_ESR_INCFGERR_OP0_D0_CHK16_8M     (ASRC_ESR_INCFGERR_OP0_D0_CHK16_8M_Val << ASRC_ESR_INCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 0, DSP0: CHUNK0=16 or CHUNK0=8 and MONO0=1 is not supported. Position */
#define ASRC_ESR_INCFGERR_OP0_D1_CHK16_8M     (ASRC_ESR_INCFGERR_OP0_D1_CHK16_8M_Val << ASRC_ESR_INCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 0, DSP1: CHUNK1=16 or CHUNK1=8 and MONO1=1 is not supported. Position */
#define ASRC_ESR_INCFGERR_OP0_D2_CHK16_8M     (ASRC_ESR_INCFGERR_OP0_D2_CHK16_8M_Val << ASRC_ESR_INCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 0, DSP2: CHUNK2=16 or CHUNK2=8 and MONO2=1 is not supported. Position */
#define ASRC_ESR_INCFGERR_OP0_D3_CHK16_8M     (ASRC_ESR_INCFGERR_OP0_D3_CHK16_8M_Val << ASRC_ESR_INCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 0, DSP3: CHUNK3=16 or CHUNK3=8 and MONO3=1 is not supported. Position */
#define ASRC_ESR_INCFGERR_OP1_D01_EN          (ASRC_ESR_INCFGERR_OP1_D01_EN_Val << ASRC_ESR_INCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 1, DSP0/1: enable configuration is not correct (1 DSP is disabled) Position */
#define ASRC_ESR_INCFGERR_OP1_D01_M           (ASRC_ESR_INCFGERR_OP1_D01_M_Val << ASRC_ESR_INCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 1, DSP0/1: MONO0=1, MONO1=0 is not supported. Position */
#define ASRC_ESR_INCFGERR_OP1_D01_CHK16       (ASRC_ESR_INCFGERR_OP1_D01_CHK16_Val << ASRC_ESR_INCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 1, DSP0/1: CHUNK0=16 is not supported. Position */
#define ASRC_ESR_INCFGERR_OP1_D2_CHK16_8M     (ASRC_ESR_INCFGERR_OP1_D2_CHK16_8M_Val << ASRC_ESR_INCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 1, DSP2: CHUNK2=16 or CHUNK2=8 and MONO2=1 is not supported. Position */
#define ASRC_ESR_INCFGERR_OP1_D3_CHK16_8M     (ASRC_ESR_INCFGERR_OP1_D3_CHK16_8M_Val << ASRC_ESR_INCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 1, DSP3: CHUNK3=16 or CHUNK3=8 and MONO3=1 is not supported. Position */
#define ASRC_ESR_INCFGERR_OP2_D01_EN          (ASRC_ESR_INCFGERR_OP2_D01_EN_Val << ASRC_ESR_INCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 2, DSP0/1: enable configuration is not correct (1 DSP is disabled) Position */
#define ASRC_ESR_INCFGERR_OP2_D01_M           (ASRC_ESR_INCFGERR_OP2_D01_M_Val << ASRC_ESR_INCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 2, DSP0/1: MONO0=1, MONO1=0 is not supported. Position */
#define ASRC_ESR_INCFGERR_OP2_D01_CHK16       (ASRC_ESR_INCFGERR_OP2_D01_CHK16_Val << ASRC_ESR_INCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 2, DSP0/1: CHUNK0=16 is not supported. Position */
#define ASRC_ESR_INCFGERR_OP2_D23_EN          (ASRC_ESR_INCFGERR_OP2_D23_EN_Val << ASRC_ESR_INCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 2, DSP2/3: enable configuration is not correct (1 DSP is disabled) Position */
#define ASRC_ESR_INCFGERR_OP2_D23_M           (ASRC_ESR_INCFGERR_OP2_D23_M_Val << ASRC_ESR_INCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 2, DSP2/3: MONO2=1, MONO3=0 is not supported. Position */
#define ASRC_ESR_INCFGERR_OP2_D23_CHK16       (ASRC_ESR_INCFGERR_OP2_D23_CHK16_Val << ASRC_ESR_INCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 2, DSP2/3: CHUNK2=16 is not supported. Position */
#define ASRC_ESR_INCFGERR_OP3_D012_EN         (ASRC_ESR_INCFGERR_OP3_D012_EN_Val << ASRC_ESR_INCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 3, DSP0/1/2: enable configuration is not correct (at least 1 DSP is disabled) Position */
#define ASRC_ESR_INCFGERR_OP3_D012_M          (ASRC_ESR_INCFGERR_OP3_D012_M_Val << ASRC_ESR_INCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 3, DSP0/1/2: mono configuration is not correct (e.g. MONO0=1, MONO1=0 or MONO2=0 is not supported). Position */
#define ASRC_ESR_INCFGERR_OP3_D012_CHK16      (ASRC_ESR_INCFGERR_OP3_D012_CHK16_Val << ASRC_ESR_INCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 3, DSP0/1/2: CHUNK0=16 is not supported. Position */
#define ASRC_ESR_INCFGERR_OP3_D3_CHK16_8M     (ASRC_ESR_INCFGERR_OP3_D3_CHK16_8M_Val << ASRC_ESR_INCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 3, DSP3: CHUNK3=16 or CHUNK3=8 and MONO3 is not supported. Position */
#define ASRC_ESR_INCFGERR_OP4_D0123_EN        (ASRC_ESR_INCFGERR_OP4_D0123_EN_Val << ASRC_ESR_INCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 4, DSP0/1/2/3: enable configuration is not correct (at least 1 DSP is disabled) Position */
#define ASRC_ESR_INCFGERR_OP4_D0123_M         (ASRC_ESR_INCFGERR_OP4_D0123_M_Val << ASRC_ESR_INCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 4, DSP0/1/2/3: mono configuration is not correct (e.g. MONO0=1, MONO1=0 or MONO2=0 or MONO3=0 is not supported). Position */
#define ASRC_ESR_SRAMS_Pos                    _UINT32_(6)                                          /* (ASRC_ESR) DSP SRAM Memory Check Status Position */
#define ASRC_ESR_SRAMS_Msk                    (_UINT32_(0x1) << ASRC_ESR_SRAMS_Pos)                /* (ASRC_ESR) DSP SRAM Memory Check Status Mask */
#define ASRC_ESR_SRAMS(value)                 (ASRC_ESR_SRAMS_Msk & (_UINT32_(value) << ASRC_ESR_SRAMS_Pos)) /* Assignment of value for SRAMS in the ASRC_ESR register */
#define   ASRC_ESR_SRAMS_0_Val                _UINT32_(0x0)                                        /* (ASRC_ESR) No error detected in the embedded memory when the check period is completed. When testing the ability for SRAMS to rise by writing ASRC_FIR.F0=1, the clear is performed by first clearing ASRC_FIR.F0 followed by an additional read of the ASRC_WPSR to clear ASRC_ISRx.SECE, then restarting a memory check period again. When a permanent memory hardware failure exists for a selected channel, it is possible to clear this flag by starting the memory check for another channel where memories does not embed permanent hardware failure.  */
#define   ASRC_ESR_SRAMS_1_Val                _UINT32_(0x1)                                        /* (ASRC_ESR) One of the embedded RAM memories contains a failure. When ASRC_MR.DSPMEMSEL=0, one of the RAMs fails. ASRC_MR.DSPMEMSEL must be configured successively with values greater than 0 to determine the affected channel/DSP. This flag is cleared at the start of any memory check procedure.  */
#define ASRC_ESR_SRAMS_0                      (ASRC_ESR_SRAMS_0_Val << ASRC_ESR_SRAMS_Pos)         /* (ASRC_ESR) No error detected in the embedded memory when the check period is completed. When testing the ability for SRAMS to rise by writing ASRC_FIR.F0=1, the clear is performed by first clearing ASRC_FIR.F0 followed by an additional read of the ASRC_WPSR to clear ASRC_ISRx.SECE, then restarting a memory check period again. When a permanent memory hardware failure exists for a selected channel, it is possible to clear this flag by starting the memory check for another channel where memories does not embed permanent hardware failure. Position */
#define ASRC_ESR_SRAMS_1                      (ASRC_ESR_SRAMS_1_Val << ASRC_ESR_SRAMS_Pos)         /* (ASRC_ESR) One of the embedded RAM memories contains a failure. When ASRC_MR.DSPMEMSEL=0, one of the RAMs fails. ASRC_MR.DSPMEMSEL must be configured successively with values greater than 0 to determine the affected channel/DSP. This flag is cleared at the start of any memory check procedure. Position */
#define ASRC_ESR_ROMS_Pos                     _UINT32_(7)                                          /* (ASRC_ESR) DSP ROM Memory Check Status Position */
#define ASRC_ESR_ROMS_Msk                     (_UINT32_(0x1) << ASRC_ESR_ROMS_Pos)                 /* (ASRC_ESR) DSP ROM Memory Check Status Mask */
#define ASRC_ESR_ROMS(value)                  (ASRC_ESR_ROMS_Msk & (_UINT32_(value) << ASRC_ESR_ROMS_Pos)) /* Assignment of value for ROMS in the ASRC_ESR register */
#define   ASRC_ESR_ROMS_0_Val                 _UINT32_(0x0)                                        /* (ASRC_ESR) No error detected in the embedded memory when the check period is completed. When testing the ability for ROMS to rise by writing ASRC_FIR.F0=1, the clear is performed by first clearing ASRC_FIR.F0 followed by an additional read of the ASRC_WPSR to clear ASRC_ISRx.SECE, then restarting a memory check period again. When a permanent memory hardware failure exists, there is no way to clear this flag.  */
#define   ASRC_ESR_ROMS_1_Val                 _UINT32_(0x1)                                        /* (ASRC_ESR) The embedded ROM memory contains a failure (check done with a CRC24, polynomial: 0x864CFB). This flag is cleared at the start of any memory check procedure.  */
#define ASRC_ESR_ROMS_0                       (ASRC_ESR_ROMS_0_Val << ASRC_ESR_ROMS_Pos)           /* (ASRC_ESR) No error detected in the embedded memory when the check period is completed. When testing the ability for ROMS to rise by writing ASRC_FIR.F0=1, the clear is performed by first clearing ASRC_FIR.F0 followed by an additional read of the ASRC_WPSR to clear ASRC_ISRx.SECE, then restarting a memory check period again. When a permanent memory hardware failure exists, there is no way to clear this flag. Position */
#define ASRC_ESR_ROMS_1                       (ASRC_ESR_ROMS_1_Val << ASRC_ESR_ROMS_Pos)           /* (ASRC_ESR) The embedded ROM memory contains a failure (check done with a CRC24, polynomial: 0x864CFB). This flag is cleared at the start of any memory check procedure. Position */
#define ASRC_ESR_OUTCFGERR_Pos                _UINT32_(8)                                          /* (ASRC_ESR) Output Configuration Error Position */
#define ASRC_ESR_OUTCFGERR_Msk                (_UINT32_(0x1F) << ASRC_ESR_OUTCFGERR_Pos)           /* (ASRC_ESR) Output Configuration Error Mask */
#define ASRC_ESR_OUTCFGERR(value)             (ASRC_ESR_OUTCFGERR_Msk & (_UINT32_(value) << ASRC_ESR_OUTCFGERR_Pos)) /* Assignment of value for OUTCFGERR in the ASRC_ESR register */
#define   ASRC_ESR_OUTCFGERR_OUTCFG_OK_Val    _UINT32_(0x0)                                        /* (ASRC_ESR) Correct configuration of ASRC_MR, ASRC_VBPS_OUT, ASRC_CH_CONF.  */
#define   ASRC_ESR_OUTCFGERR_OP0_D0_CHK16_8M_Val _UINT32_(0x1)                                        /* (ASRC_ESR) Channel operating mode 0, DSP0: CHUNK0=16 or CHUNK0=8 and MONO0=1 is not supported.  */
#define   ASRC_ESR_OUTCFGERR_OP0_D1_CHK16_8M_Val _UINT32_(0x2)                                        /* (ASRC_ESR) Channel operating mode 0, DSP1: CHUNK1=16 or CHUNK1=8 and MONO1=1 is not supported.  */
#define   ASRC_ESR_OUTCFGERR_OP0_D2_CHK16_8M_Val _UINT32_(0x3)                                        /* (ASRC_ESR) Channel operating mode 0, DSP2: CHUNK2=16 or CHUNK2=8 and MONO2=1 is not supported.  */
#define   ASRC_ESR_OUTCFGERR_OP0_D3_CHK16_8M_Val _UINT32_(0x4)                                        /* (ASRC_ESR) Channel operating mode 0, DSP3: CHUNK3=16 or CHUNK3=8 and MONO3=1 is not supported.  */
#define   ASRC_ESR_OUTCFGERR_OP1_D01_EN_Val   _UINT32_(0x5)                                        /* (ASRC_ESR) Channel operating mode 1, DSP0/1: enable configuration is not correct (1 DSP is disabled)  */
#define   ASRC_ESR_OUTCFGERR_OP1_D01_M_Val    _UINT32_(0x6)                                        /* (ASRC_ESR) Channel operating mode 1, DSP0/1: MONO0=1, MONO1=0 is not supported.  */
#define   ASRC_ESR_OUTCFGERR_OP1_D01_CHK16_Val _UINT32_(0x7)                                        /* (ASRC_ESR) Channel operating mode 1, DSP0/1: CHUNK0=16 is not supported.  */
#define   ASRC_ESR_OUTCFGERR_OP1_D2_CHK16_8M_Val _UINT32_(0x8)                                        /* (ASRC_ESR) Channel operating mode 1, DSP2: CHUNK2=16 or CHUNK2=8 and MONO2=1 is not supported.  */
#define   ASRC_ESR_OUTCFGERR_OP1_D3_CHK16_8M_Val _UINT32_(0x9)                                        /* (ASRC_ESR) Channel operating mode 1, DSP3: CHUNK3=16 or CHUNK3=8 and MONO3=1 is not supported.  */
#define   ASRC_ESR_OUTCFGERR_OP2_D01_EN_Val   _UINT32_(0xA)                                        /* (ASRC_ESR) Channel operating mode 2, DSP0/1: enable configuration is not correct (1 DSP is disabled)  */
#define   ASRC_ESR_OUTCFGERR_OP2_D01_M_Val    _UINT32_(0xB)                                        /* (ASRC_ESR) Channel operating mode 2, DSP0/1: MONO0=1, MONO1=0 is not supported.  */
#define   ASRC_ESR_OUTCFGERR_OP2_D01_CHK16_Val _UINT32_(0xC)                                        /* (ASRC_ESR) Channel operating mode 2, DSP0/1: CHUNK0=16 is not supported.  */
#define   ASRC_ESR_OUTCFGERR_OP2_D23_EN_Val   _UINT32_(0xD)                                        /* (ASRC_ESR) Channel operating mode 2, DSP2/3: enable configuration is not correct (1 DSP is disabled)  */
#define   ASRC_ESR_OUTCFGERR_OP2_D23_M_Val    _UINT32_(0xE)                                        /* (ASRC_ESR) Channel operating mode 2, DSP2/3: MONO2=1, MONO3=0 is not supported.  */
#define   ASRC_ESR_OUTCFGERR_OP2_D23_CHK16_Val _UINT32_(0xF)                                        /* (ASRC_ESR) Channel operating mode 2, DSP2/3: CHUNK2=16 is not supported.  */
#define   ASRC_ESR_OUTCFGERR_OP3_D012_EN_Val  _UINT32_(0x10)                                       /* (ASRC_ESR) Channel operating mode 3, DSP0/1/2: enable configuration is not correct (at least 1 DSP is disabled)  */
#define   ASRC_ESR_OUTCFGERR_OP3_D012_M_Val   _UINT32_(0x11)                                       /* (ASRC_ESR) Channel operating mode 3, DSP0/1/2: mono configuration is not correct (e.g. MONO0=1, MONO1=0 or MONO2=0 is not supported).  */
#define   ASRC_ESR_OUTCFGERR_OP3_D012_CHK16_Val _UINT32_(0x12)                                       /* (ASRC_ESR) Channel operating mode 3, DSP0/1/2: CHUNK0=16 is not supported.  */
#define   ASRC_ESR_OUTCFGERR_OP3_D3_CHK16_8M_Val _UINT32_(0x13)                                       /* (ASRC_ESR) Channel operating mode 3, DSP3: CHUNK3=16 or CHUNK3=8 and MONO3 is not supported.  */
#define   ASRC_ESR_OUTCFGERR_OP4_D0123_EN_Val _UINT32_(0x14)                                       /* (ASRC_ESR) Channel operating mode 4, DSP0/1/2/3: enable configuration is not correct (at least 1 DSP is disabled)  */
#define   ASRC_ESR_OUTCFGERR_OP4_D0123_M_Val  _UINT32_(0x15)                                       /* (ASRC_ESR) Channel operating mode 4, DSP0/1/2/3: mono configuration is not correct (e.g. MONO0=1, MONO1=0 or MONO2=0 or MONO3=0 is not supported).  */
#define ASRC_ESR_OUTCFGERR_OUTCFG_OK          (ASRC_ESR_OUTCFGERR_OUTCFG_OK_Val << ASRC_ESR_OUTCFGERR_Pos) /* (ASRC_ESR) Correct configuration of ASRC_MR, ASRC_VBPS_OUT, ASRC_CH_CONF. Position */
#define ASRC_ESR_OUTCFGERR_OP0_D0_CHK16_8M    (ASRC_ESR_OUTCFGERR_OP0_D0_CHK16_8M_Val << ASRC_ESR_OUTCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 0, DSP0: CHUNK0=16 or CHUNK0=8 and MONO0=1 is not supported. Position */
#define ASRC_ESR_OUTCFGERR_OP0_D1_CHK16_8M    (ASRC_ESR_OUTCFGERR_OP0_D1_CHK16_8M_Val << ASRC_ESR_OUTCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 0, DSP1: CHUNK1=16 or CHUNK1=8 and MONO1=1 is not supported. Position */
#define ASRC_ESR_OUTCFGERR_OP0_D2_CHK16_8M    (ASRC_ESR_OUTCFGERR_OP0_D2_CHK16_8M_Val << ASRC_ESR_OUTCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 0, DSP2: CHUNK2=16 or CHUNK2=8 and MONO2=1 is not supported. Position */
#define ASRC_ESR_OUTCFGERR_OP0_D3_CHK16_8M    (ASRC_ESR_OUTCFGERR_OP0_D3_CHK16_8M_Val << ASRC_ESR_OUTCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 0, DSP3: CHUNK3=16 or CHUNK3=8 and MONO3=1 is not supported. Position */
#define ASRC_ESR_OUTCFGERR_OP1_D01_EN         (ASRC_ESR_OUTCFGERR_OP1_D01_EN_Val << ASRC_ESR_OUTCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 1, DSP0/1: enable configuration is not correct (1 DSP is disabled) Position */
#define ASRC_ESR_OUTCFGERR_OP1_D01_M          (ASRC_ESR_OUTCFGERR_OP1_D01_M_Val << ASRC_ESR_OUTCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 1, DSP0/1: MONO0=1, MONO1=0 is not supported. Position */
#define ASRC_ESR_OUTCFGERR_OP1_D01_CHK16      (ASRC_ESR_OUTCFGERR_OP1_D01_CHK16_Val << ASRC_ESR_OUTCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 1, DSP0/1: CHUNK0=16 is not supported. Position */
#define ASRC_ESR_OUTCFGERR_OP1_D2_CHK16_8M    (ASRC_ESR_OUTCFGERR_OP1_D2_CHK16_8M_Val << ASRC_ESR_OUTCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 1, DSP2: CHUNK2=16 or CHUNK2=8 and MONO2=1 is not supported. Position */
#define ASRC_ESR_OUTCFGERR_OP1_D3_CHK16_8M    (ASRC_ESR_OUTCFGERR_OP1_D3_CHK16_8M_Val << ASRC_ESR_OUTCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 1, DSP3: CHUNK3=16 or CHUNK3=8 and MONO3=1 is not supported. Position */
#define ASRC_ESR_OUTCFGERR_OP2_D01_EN         (ASRC_ESR_OUTCFGERR_OP2_D01_EN_Val << ASRC_ESR_OUTCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 2, DSP0/1: enable configuration is not correct (1 DSP is disabled) Position */
#define ASRC_ESR_OUTCFGERR_OP2_D01_M          (ASRC_ESR_OUTCFGERR_OP2_D01_M_Val << ASRC_ESR_OUTCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 2, DSP0/1: MONO0=1, MONO1=0 is not supported. Position */
#define ASRC_ESR_OUTCFGERR_OP2_D01_CHK16      (ASRC_ESR_OUTCFGERR_OP2_D01_CHK16_Val << ASRC_ESR_OUTCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 2, DSP0/1: CHUNK0=16 is not supported. Position */
#define ASRC_ESR_OUTCFGERR_OP2_D23_EN         (ASRC_ESR_OUTCFGERR_OP2_D23_EN_Val << ASRC_ESR_OUTCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 2, DSP2/3: enable configuration is not correct (1 DSP is disabled) Position */
#define ASRC_ESR_OUTCFGERR_OP2_D23_M          (ASRC_ESR_OUTCFGERR_OP2_D23_M_Val << ASRC_ESR_OUTCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 2, DSP2/3: MONO2=1, MONO3=0 is not supported. Position */
#define ASRC_ESR_OUTCFGERR_OP2_D23_CHK16      (ASRC_ESR_OUTCFGERR_OP2_D23_CHK16_Val << ASRC_ESR_OUTCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 2, DSP2/3: CHUNK2=16 is not supported. Position */
#define ASRC_ESR_OUTCFGERR_OP3_D012_EN        (ASRC_ESR_OUTCFGERR_OP3_D012_EN_Val << ASRC_ESR_OUTCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 3, DSP0/1/2: enable configuration is not correct (at least 1 DSP is disabled) Position */
#define ASRC_ESR_OUTCFGERR_OP3_D012_M         (ASRC_ESR_OUTCFGERR_OP3_D012_M_Val << ASRC_ESR_OUTCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 3, DSP0/1/2: mono configuration is not correct (e.g. MONO0=1, MONO1=0 or MONO2=0 is not supported). Position */
#define ASRC_ESR_OUTCFGERR_OP3_D012_CHK16     (ASRC_ESR_OUTCFGERR_OP3_D012_CHK16_Val << ASRC_ESR_OUTCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 3, DSP0/1/2: CHUNK0=16 is not supported. Position */
#define ASRC_ESR_OUTCFGERR_OP3_D3_CHK16_8M    (ASRC_ESR_OUTCFGERR_OP3_D3_CHK16_8M_Val << ASRC_ESR_OUTCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 3, DSP3: CHUNK3=16 or CHUNK3=8 and MONO3 is not supported. Position */
#define ASRC_ESR_OUTCFGERR_OP4_D0123_EN       (ASRC_ESR_OUTCFGERR_OP4_D0123_EN_Val << ASRC_ESR_OUTCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 4, DSP0/1/2/3: enable configuration is not correct (at least 1 DSP is disabled) Position */
#define ASRC_ESR_OUTCFGERR_OP4_D0123_M        (ASRC_ESR_OUTCFGERR_OP4_D0123_M_Val << ASRC_ESR_OUTCFGERR_Pos) /* (ASRC_ESR) Channel operating mode 4, DSP0/1/2/3: mono configuration is not correct (e.g. MONO0=1, MONO1=0 or MONO2=0 or MONO3=0 is not supported). Position */
#define ASRC_ESR_DERR_Pos                     _UINT32_(15)                                         /* (ASRC_ESR) DSP Overflow Error (cleared on read) Position */
#define ASRC_ESR_DERR_Msk                     (_UINT32_(0x1) << ASRC_ESR_DERR_Pos)                 /* (ASRC_ESR) DSP Overflow Error (cleared on read) Mask */
#define ASRC_ESR_DERR(value)                  (ASRC_ESR_DERR_Msk & (_UINT32_(value) << ASRC_ESR_DERR_Pos)) /* Assignment of value for DERR in the ASRC_ESR register */
#define   ASRC_ESR_DERR_0_Val                 _UINT32_(0x0)                                        /* (ASRC_ESR) No DSP overflow error detected.  */
#define   ASRC_ESR_DERR_1_Val                 _UINT32_(0x1)                                        /* (ASRC_ESR) The sampling frequency overpasses the value allowed by the configuration.  */
#define ASRC_ESR_DERR_0                       (ASRC_ESR_DERR_0_Val << ASRC_ESR_DERR_Pos)           /* (ASRC_ESR) No DSP overflow error detected. Position */
#define ASRC_ESR_DERR_1                       (ASRC_ESR_DERR_1_Val << ASRC_ESR_DERR_Pos)           /* (ASRC_ESR) The sampling frequency overpasses the value allowed by the configuration. Position */
#define ASRC_ESR_DAPSELIMAXERR_Pos            _UINT32_(16)                                         /* (ASRC_ESR) Direct Access Input Peripheral Selection Configuration Error on Maximum Values Position */
#define ASRC_ESR_DAPSELIMAXERR_Msk            (_UINT32_(0x1) << ASRC_ESR_DAPSELIMAXERR_Pos)        /* (ASRC_ESR) Direct Access Input Peripheral Selection Configuration Error on Maximum Values Mask */
#define ASRC_ESR_DAPSELIMAXERR(value)         (ASRC_ESR_DAPSELIMAXERR_Msk & (_UINT32_(value) << ASRC_ESR_DAPSELIMAXERR_Pos)) /* Assignment of value for DAPSELIMAXERR in the ASRC_ESR register */
#define   ASRC_ESR_DAPSELIMAXERR_0_Val        _UINT32_(0x0)                                        /* (ASRC_ESR) None of the values in ASRC_DAPSELR.IN_CHx fields overpass the maximum number of audio peripherals allowed to transfer data directly to the ASRC or the related direct access transmit channel is disabled in ASRC_MR.DATHRx.  */
#define   ASRC_ESR_DAPSELIMAXERR_1_Val        _UINT32_(0x1)                                        /* (ASRC_ESR) One of the values in ASRC_DAPSELR.IN_CHx fields overpass the maximum number of audio peripherals allowed to transfer data directly to the ASRC and the related direct access transmit channel is enabled in ASRC_MR.DATHRx. The error is cleared when the configuration is correct.  */
#define ASRC_ESR_DAPSELIMAXERR_0              (ASRC_ESR_DAPSELIMAXERR_0_Val << ASRC_ESR_DAPSELIMAXERR_Pos) /* (ASRC_ESR) None of the values in ASRC_DAPSELR.IN_CHx fields overpass the maximum number of audio peripherals allowed to transfer data directly to the ASRC or the related direct access transmit channel is disabled in ASRC_MR.DATHRx. Position */
#define ASRC_ESR_DAPSELIMAXERR_1              (ASRC_ESR_DAPSELIMAXERR_1_Val << ASRC_ESR_DAPSELIMAXERR_Pos) /* (ASRC_ESR) One of the values in ASRC_DAPSELR.IN_CHx fields overpass the maximum number of audio peripherals allowed to transfer data directly to the ASRC and the related direct access transmit channel is enabled in ASRC_MR.DATHRx. The error is cleared when the configuration is correct. Position */
#define ASRC_ESR_DAPSELOMAXERR_Pos            _UINT32_(17)                                         /* (ASRC_ESR) Direct Access Output Peripheral Selection Configuration Error on Maximum Values Position */
#define ASRC_ESR_DAPSELOMAXERR_Msk            (_UINT32_(0x1) << ASRC_ESR_DAPSELOMAXERR_Pos)        /* (ASRC_ESR) Direct Access Output Peripheral Selection Configuration Error on Maximum Values Mask */
#define ASRC_ESR_DAPSELOMAXERR(value)         (ASRC_ESR_DAPSELOMAXERR_Msk & (_UINT32_(value) << ASRC_ESR_DAPSELOMAXERR_Pos)) /* Assignment of value for DAPSELOMAXERR in the ASRC_ESR register */
#define   ASRC_ESR_DAPSELOMAXERR_0_Val        _UINT32_(0x0)                                        /* (ASRC_ESR) None of the values in ASRC_DAPSELR.OUT_CHx fields overpass the maximum number of audio peripherals allowed to transfer data directly from the ASRC or the related direct access receive channel is disabled in ASRC_MR.DARHRx.  */
#define   ASRC_ESR_DAPSELOMAXERR_1_Val        _UINT32_(0x1)                                        /* (ASRC_ESR) One of the values in ASRC_DAPSELR.OUT_CHx fields overpass the maximum number of audio peripherals allowed to transfer data directly from the ASRC and the related direct access receive channel is enabled in ASRC_MR.DARHRx. The error is cleared when the configuration is correct.  */
#define ASRC_ESR_DAPSELOMAXERR_0              (ASRC_ESR_DAPSELOMAXERR_0_Val << ASRC_ESR_DAPSELOMAXERR_Pos) /* (ASRC_ESR) None of the values in ASRC_DAPSELR.OUT_CHx fields overpass the maximum number of audio peripherals allowed to transfer data directly from the ASRC or the related direct access receive channel is disabled in ASRC_MR.DARHRx. Position */
#define ASRC_ESR_DAPSELOMAXERR_1              (ASRC_ESR_DAPSELOMAXERR_1_Val << ASRC_ESR_DAPSELOMAXERR_Pos) /* (ASRC_ESR) One of the values in ASRC_DAPSELR.OUT_CHx fields overpass the maximum number of audio peripherals allowed to transfer data directly from the ASRC and the related direct access receive channel is enabled in ASRC_MR.DARHRx. The error is cleared when the configuration is correct. Position */
#define ASRC_ESR_DAPSELIREDERR_Pos            _UINT32_(18)                                         /* (ASRC_ESR) Direct Access Input Peripheral Selection Redundant Configuration Error Position */
#define ASRC_ESR_DAPSELIREDERR_Msk            (_UINT32_(0x1) << ASRC_ESR_DAPSELIREDERR_Pos)        /* (ASRC_ESR) Direct Access Input Peripheral Selection Redundant Configuration Error Mask */
#define ASRC_ESR_DAPSELIREDERR(value)         (ASRC_ESR_DAPSELIREDERR_Msk & (_UINT32_(value) << ASRC_ESR_DAPSELIREDERR_Pos)) /* Assignment of value for DAPSELIREDERR in the ASRC_ESR register */
#define   ASRC_ESR_DAPSELIREDERR_0_Val        _UINT32_(0x0)                                        /* (ASRC_ESR) Validates the configuration of ASRC_DAPSELR.IN_CHx and ASRC_MR.DATHRx.  */
#define   ASRC_ESR_DAPSELIREDERR_1_Val        _UINT32_(0x1)                                        /* (ASRC_ESR) The same audio peripheral is enabled to receive data into more than one direct access channel. The ASRC_DAPSELR.IN_CHx and ASRC_MR.DATHRx must be correctly configured to clear the error.  */
#define ASRC_ESR_DAPSELIREDERR_0              (ASRC_ESR_DAPSELIREDERR_0_Val << ASRC_ESR_DAPSELIREDERR_Pos) /* (ASRC_ESR) Validates the configuration of ASRC_DAPSELR.IN_CHx and ASRC_MR.DATHRx. Position */
#define ASRC_ESR_DAPSELIREDERR_1              (ASRC_ESR_DAPSELIREDERR_1_Val << ASRC_ESR_DAPSELIREDERR_Pos) /* (ASRC_ESR) The same audio peripheral is enabled to receive data into more than one direct access channel. The ASRC_DAPSELR.IN_CHx and ASRC_MR.DATHRx must be correctly configured to clear the error. Position */
#define ASRC_ESR_DAPSELOREDERR_Pos            _UINT32_(19)                                         /* (ASRC_ESR) Direct Access Output Peripheral Selection Redundancy Configuration Error Position */
#define ASRC_ESR_DAPSELOREDERR_Msk            (_UINT32_(0x1) << ASRC_ESR_DAPSELOREDERR_Pos)        /* (ASRC_ESR) Direct Access Output Peripheral Selection Redundancy Configuration Error Mask */
#define ASRC_ESR_DAPSELOREDERR(value)         (ASRC_ESR_DAPSELOREDERR_Msk & (_UINT32_(value) << ASRC_ESR_DAPSELOREDERR_Pos)) /* Assignment of value for DAPSELOREDERR in the ASRC_ESR register */
#define   ASRC_ESR_DAPSELOREDERR_0_Val        _UINT32_(0x0)                                        /* (ASRC_ESR) Validates the configuration of ASRC_DAPSELR.OUT_CHx and ASRC_MR.DARHRx.  */
#define   ASRC_ESR_DAPSELOREDERR_1_Val        _UINT32_(0x1)                                        /* (ASRC_ESR) The same audio peripheral is enabled to transmit data into more than one direct access channel. The ASRC_DAPSELR.OUT_CHx and ASRC_MR.DARHRx must be correctly configured to clear the error.  */
#define ASRC_ESR_DAPSELOREDERR_0              (ASRC_ESR_DAPSELOREDERR_0_Val << ASRC_ESR_DAPSELOREDERR_Pos) /* (ASRC_ESR) Validates the configuration of ASRC_DAPSELR.OUT_CHx and ASRC_MR.DARHRx. Position */
#define ASRC_ESR_DAPSELOREDERR_1              (ASRC_ESR_DAPSELOREDERR_1_Val << ASRC_ESR_DAPSELOREDERR_Pos) /* (ASRC_ESR) The same audio peripheral is enabled to transmit data into more than one direct access channel. The ASRC_DAPSELR.OUT_CHx and ASRC_MR.DARHRx must be correctly configured to clear the error. Position */
#define ASRC_ESR_DATHXERR_Pos                 _UINT32_(20)                                         /* (ASRC_ESR) Direct Access DATHM/DATHRx Configuration Error Position */
#define ASRC_ESR_DATHXERR_Msk                 (_UINT32_(0x1) << ASRC_ESR_DATHXERR_Pos)             /* (ASRC_ESR) Direct Access DATHM/DATHRx Configuration Error Mask */
#define ASRC_ESR_DATHXERR(value)              (ASRC_ESR_DATHXERR_Msk & (_UINT32_(value) << ASRC_ESR_DATHXERR_Pos)) /* Assignment of value for DATHXERR in the ASRC_ESR register */
#define   ASRC_ESR_DATHXERR_0_Val             _UINT32_(0x0)                                        /* (ASRC_ESR) Validates the configuration of ASRC_MR.DATHM/DATHRx.  */
#define   ASRC_ESR_DATHXERR_1_Val             _UINT32_(0x1)                                        /* (ASRC_ESR) The configuration of ASRC_MR.DATHM/DATHRx is incompatible with the configuration of ASRC_CH_CONF.THROPMODE. The error is only reported when 1 DSP is enabled (ASRC_MR.ASRCENx differs from 0). The error is cleared when the configuration is correct.  */
#define ASRC_ESR_DATHXERR_0                   (ASRC_ESR_DATHXERR_0_Val << ASRC_ESR_DATHXERR_Pos)   /* (ASRC_ESR) Validates the configuration of ASRC_MR.DATHM/DATHRx. Position */
#define ASRC_ESR_DATHXERR_1                   (ASRC_ESR_DATHXERR_1_Val << ASRC_ESR_DATHXERR_Pos)   /* (ASRC_ESR) The configuration of ASRC_MR.DATHM/DATHRx is incompatible with the configuration of ASRC_CH_CONF.THROPMODE. The error is only reported when 1 DSP is enabled (ASRC_MR.ASRCENx differs from 0). The error is cleared when the configuration is correct. Position */
#define ASRC_ESR_DARHXERR_Pos                 _UINT32_(21)                                         /* (ASRC_ESR) Direct Access DARHM/DARHRx Configuration Error Position */
#define ASRC_ESR_DARHXERR_Msk                 (_UINT32_(0x1) << ASRC_ESR_DARHXERR_Pos)             /* (ASRC_ESR) Direct Access DARHM/DARHRx Configuration Error Mask */
#define ASRC_ESR_DARHXERR(value)              (ASRC_ESR_DARHXERR_Msk & (_UINT32_(value) << ASRC_ESR_DARHXERR_Pos)) /* Assignment of value for DARHXERR in the ASRC_ESR register */
#define   ASRC_ESR_DARHXERR_0_Val             _UINT32_(0x0)                                        /* (ASRC_ESR) Validates the configuration of ASRC_MR.DARHM/DARHRx.  */
#define   ASRC_ESR_DARHXERR_1_Val             _UINT32_(0x1)                                        /* (ASRC_ESR) The configuration of ASRC_MR.DARHM/DARHRx is incompatible with the configuration of ASRC_CH_CONF.RHROPMODE. The error is only reported when 1 DSP is enabled (ASRC_MR.ASRCENx differs from 0). The error is cleared when the configuration is correct.  */
#define ASRC_ESR_DARHXERR_0                   (ASRC_ESR_DARHXERR_0_Val << ASRC_ESR_DARHXERR_Pos)   /* (ASRC_ESR) Validates the configuration of ASRC_MR.DARHM/DARHRx. Position */
#define ASRC_ESR_DARHXERR_1                   (ASRC_ESR_DARHXERR_1_Val << ASRC_ESR_DARHXERR_Pos)   /* (ASRC_ESR) The configuration of ASRC_MR.DARHM/DARHRx is incompatible with the configuration of ASRC_CH_CONF.RHROPMODE. The error is only reported when 1 DSP is enabled (ASRC_MR.ASRCENx differs from 0). The error is cleared when the configuration is correct. Position */
#define ASRC_ESR_ITRIGERR_Pos                 _UINT32_(22)                                         /* (ASRC_ESR) Input Trigger Configuration Error Position */
#define ASRC_ESR_ITRIGERR_Msk                 (_UINT32_(0x1) << ASRC_ESR_ITRIGERR_Pos)             /* (ASRC_ESR) Input Trigger Configuration Error Mask */
#define ASRC_ESR_ITRIGERR(value)              (ASRC_ESR_ITRIGERR_Msk & (_UINT32_(value) << ASRC_ESR_ITRIGERR_Pos)) /* Assignment of value for ITRIGERR in the ASRC_ESR register */
#define   ASRC_ESR_ITRIGERR_0_Val             _UINT32_(0x0)                                        /* (ASRC_ESR) Validates the configuration of ASRC_TRIG.TRIGSELINx versus ASRC_CH_CONF.THROPMODE.  */
#define   ASRC_ESR_ITRIGERR_1_Val             _UINT32_(0x1)                                        /* (ASRC_ESR) The configuration of ASRC_TRIG.TRIGSELINx is incompatible with the configuration of ASRC_CH_CONF.THROPMODE. The error is only reported when 1 DSP is enabled (ASRC_MR.ASRCENx differs from 0). The error is cleared when the configuration is correct.  */
#define ASRC_ESR_ITRIGERR_0                   (ASRC_ESR_ITRIGERR_0_Val << ASRC_ESR_ITRIGERR_Pos)   /* (ASRC_ESR) Validates the configuration of ASRC_TRIG.TRIGSELINx versus ASRC_CH_CONF.THROPMODE. Position */
#define ASRC_ESR_ITRIGERR_1                   (ASRC_ESR_ITRIGERR_1_Val << ASRC_ESR_ITRIGERR_Pos)   /* (ASRC_ESR) The configuration of ASRC_TRIG.TRIGSELINx is incompatible with the configuration of ASRC_CH_CONF.THROPMODE. The error is only reported when 1 DSP is enabled (ASRC_MR.ASRCENx differs from 0). The error is cleared when the configuration is correct. Position */
#define ASRC_ESR_OTRIGERR_Pos                 _UINT32_(23)                                         /* (ASRC_ESR) Output Trigger Configuration Error Position */
#define ASRC_ESR_OTRIGERR_Msk                 (_UINT32_(0x1) << ASRC_ESR_OTRIGERR_Pos)             /* (ASRC_ESR) Output Trigger Configuration Error Mask */
#define ASRC_ESR_OTRIGERR(value)              (ASRC_ESR_OTRIGERR_Msk & (_UINT32_(value) << ASRC_ESR_OTRIGERR_Pos)) /* Assignment of value for OTRIGERR in the ASRC_ESR register */
#define   ASRC_ESR_OTRIGERR_0_Val             _UINT32_(0x0)                                        /* (ASRC_ESR) Validates the configuration of ASRC_TRIG.TRIGSELOUTx versus ASRC_CH_CONF.RHROPMODE.  */
#define   ASRC_ESR_OTRIGERR_1_Val             _UINT32_(0x1)                                        /* (ASRC_ESR) The configuration of ASRC_TRIG.TRIGSELOUTx is incompatible with the configuration of ASRC_CH_CONF.RHROPMODE. The error is only reported when 1 DSP is enabled (ASRC_MR.ASRCENx differs from 0). The error is cleared when the configuration is correct.  */
#define ASRC_ESR_OTRIGERR_0                   (ASRC_ESR_OTRIGERR_0_Val << ASRC_ESR_OTRIGERR_Pos)   /* (ASRC_ESR) Validates the configuration of ASRC_TRIG.TRIGSELOUTx versus ASRC_CH_CONF.RHROPMODE. Position */
#define ASRC_ESR_OTRIGERR_1                   (ASRC_ESR_OTRIGERR_1_Val << ASRC_ESR_OTRIGERR_Pos)   /* (ASRC_ESR) The configuration of ASRC_TRIG.TRIGSELOUTx is incompatible with the configuration of ASRC_CH_CONF.RHROPMODE. The error is only reported when 1 DSP is enabled (ASRC_MR.ASRCENx differs from 0). The error is cleared when the configuration is correct. Position */
#define ASRC_ESR_DAIERR0_Pos                  _UINT32_(24)                                         /* (ASRC_ESR) Direct Access Input Transfer Error Status (cleared on read) Position */
#define ASRC_ESR_DAIERR0_Msk                  (_UINT32_(0x1) << ASRC_ESR_DAIERR0_Pos)              /* (ASRC_ESR) Direct Access Input Transfer Error Status (cleared on read) Mask */
#define ASRC_ESR_DAIERR0(value)               (ASRC_ESR_DAIERR0_Msk & (_UINT32_(value) << ASRC_ESR_DAIERR0_Pos)) /* Assignment of value for DAIERR0 in the ASRC_ESR register */
#define   ASRC_ESR_DAIERR0_0_Val              _UINT32_(0x0)                                        /* (ASRC_ESR) No error detected in the direct access link with audio peripherals providing data to ASRC.  */
#define   ASRC_ESR_DAIERR0_1_Val              _UINT32_(0x1)                                        /* (ASRC_ESR) A data is missing in the direct access transfer between two synchronization events (ASRC trigger events). This may be due to a bad configuration of the audio peripheral transmitting the data (for example, direct access is disabled or a hardware failure) or the ASRC direct access enable for channel x is disabled whereas a synchronization event is valid on the direct access physical link (the audio peripheral transmitting the data is enabled and a data has been already transmitted). The error may also rise if the ASRC direct access is being disabled when there is data pending on the direct access link.  */
#define ASRC_ESR_DAIERR0_0                    (ASRC_ESR_DAIERR0_0_Val << ASRC_ESR_DAIERR0_Pos)     /* (ASRC_ESR) No error detected in the direct access link with audio peripherals providing data to ASRC. Position */
#define ASRC_ESR_DAIERR0_1                    (ASRC_ESR_DAIERR0_1_Val << ASRC_ESR_DAIERR0_Pos)     /* (ASRC_ESR) A data is missing in the direct access transfer between two synchronization events (ASRC trigger events). This may be due to a bad configuration of the audio peripheral transmitting the data (for example, direct access is disabled or a hardware failure) or the ASRC direct access enable for channel x is disabled whereas a synchronization event is valid on the direct access physical link (the audio peripheral transmitting the data is enabled and a data has been already transmitted). The error may also rise if the ASRC direct access is being disabled when there is data pending on the direct access link. Position */
#define ASRC_ESR_DAIERR1_Pos                  _UINT32_(25)                                         /* (ASRC_ESR) Direct Access Input Transfer Error Status (cleared on read) Position */
#define ASRC_ESR_DAIERR1_Msk                  (_UINT32_(0x1) << ASRC_ESR_DAIERR1_Pos)              /* (ASRC_ESR) Direct Access Input Transfer Error Status (cleared on read) Mask */
#define ASRC_ESR_DAIERR1(value)               (ASRC_ESR_DAIERR1_Msk & (_UINT32_(value) << ASRC_ESR_DAIERR1_Pos)) /* Assignment of value for DAIERR1 in the ASRC_ESR register */
#define   ASRC_ESR_DAIERR1_0_Val              _UINT32_(0x0)                                        /* (ASRC_ESR) No error detected in the direct access link with audio peripherals providing data to ASRC.  */
#define   ASRC_ESR_DAIERR1_1_Val              _UINT32_(0x1)                                        /* (ASRC_ESR) A data is missing in the direct access transfer between two synchronization events (ASRC trigger events). This may be due to a bad configuration of the audio peripheral transmitting the data (for example, direct access is disabled or a hardware failure) or the ASRC direct access enable for channel x is disabled whereas a synchronization event is valid on the direct access physical link (the audio peripheral transmitting the data is enabled and a data has been already transmitted). The error may also rise if the ASRC direct access is being disabled when there is data pending on the direct access link.  */
#define ASRC_ESR_DAIERR1_0                    (ASRC_ESR_DAIERR1_0_Val << ASRC_ESR_DAIERR1_Pos)     /* (ASRC_ESR) No error detected in the direct access link with audio peripherals providing data to ASRC. Position */
#define ASRC_ESR_DAIERR1_1                    (ASRC_ESR_DAIERR1_1_Val << ASRC_ESR_DAIERR1_Pos)     /* (ASRC_ESR) A data is missing in the direct access transfer between two synchronization events (ASRC trigger events). This may be due to a bad configuration of the audio peripheral transmitting the data (for example, direct access is disabled or a hardware failure) or the ASRC direct access enable for channel x is disabled whereas a synchronization event is valid on the direct access physical link (the audio peripheral transmitting the data is enabled and a data has been already transmitted). The error may also rise if the ASRC direct access is being disabled when there is data pending on the direct access link. Position */
#define ASRC_ESR_DAIERR2_Pos                  _UINT32_(26)                                         /* (ASRC_ESR) Direct Access Input Transfer Error Status (cleared on read) Position */
#define ASRC_ESR_DAIERR2_Msk                  (_UINT32_(0x1) << ASRC_ESR_DAIERR2_Pos)              /* (ASRC_ESR) Direct Access Input Transfer Error Status (cleared on read) Mask */
#define ASRC_ESR_DAIERR2(value)               (ASRC_ESR_DAIERR2_Msk & (_UINT32_(value) << ASRC_ESR_DAIERR2_Pos)) /* Assignment of value for DAIERR2 in the ASRC_ESR register */
#define   ASRC_ESR_DAIERR2_0_Val              _UINT32_(0x0)                                        /* (ASRC_ESR) No error detected in the direct access link with audio peripherals providing data to ASRC.  */
#define   ASRC_ESR_DAIERR2_1_Val              _UINT32_(0x1)                                        /* (ASRC_ESR) A data is missing in the direct access transfer between two synchronization events (ASRC trigger events). This may be due to a bad configuration of the audio peripheral transmitting the data (for example, direct access is disabled or a hardware failure) or the ASRC direct access enable for channel x is disabled whereas a synchronization event is valid on the direct access physical link (the audio peripheral transmitting the data is enabled and a data has been already transmitted). The error may also rise if the ASRC direct access is being disabled when there is data pending on the direct access link.  */
#define ASRC_ESR_DAIERR2_0                    (ASRC_ESR_DAIERR2_0_Val << ASRC_ESR_DAIERR2_Pos)     /* (ASRC_ESR) No error detected in the direct access link with audio peripherals providing data to ASRC. Position */
#define ASRC_ESR_DAIERR2_1                    (ASRC_ESR_DAIERR2_1_Val << ASRC_ESR_DAIERR2_Pos)     /* (ASRC_ESR) A data is missing in the direct access transfer between two synchronization events (ASRC trigger events). This may be due to a bad configuration of the audio peripheral transmitting the data (for example, direct access is disabled or a hardware failure) or the ASRC direct access enable for channel x is disabled whereas a synchronization event is valid on the direct access physical link (the audio peripheral transmitting the data is enabled and a data has been already transmitted). The error may also rise if the ASRC direct access is being disabled when there is data pending on the direct access link. Position */
#define ASRC_ESR_DAIERR3_Pos                  _UINT32_(27)                                         /* (ASRC_ESR) Direct Access Input Transfer Error Status (cleared on read) Position */
#define ASRC_ESR_DAIERR3_Msk                  (_UINT32_(0x1) << ASRC_ESR_DAIERR3_Pos)              /* (ASRC_ESR) Direct Access Input Transfer Error Status (cleared on read) Mask */
#define ASRC_ESR_DAIERR3(value)               (ASRC_ESR_DAIERR3_Msk & (_UINT32_(value) << ASRC_ESR_DAIERR3_Pos)) /* Assignment of value for DAIERR3 in the ASRC_ESR register */
#define   ASRC_ESR_DAIERR3_0_Val              _UINT32_(0x0)                                        /* (ASRC_ESR) No error detected in the direct access link with audio peripherals providing data to ASRC.  */
#define   ASRC_ESR_DAIERR3_1_Val              _UINT32_(0x1)                                        /* (ASRC_ESR) A data is missing in the direct access transfer between two synchronization events (ASRC trigger events). This may be due to a bad configuration of the audio peripheral transmitting the data (for example, direct access is disabled or a hardware failure) or the ASRC direct access enable for channel x is disabled whereas a synchronization event is valid on the direct access physical link (the audio peripheral transmitting the data is enabled and a data has been already transmitted). The error may also rise if the ASRC direct access is being disabled when there is data pending on the direct access link.  */
#define ASRC_ESR_DAIERR3_0                    (ASRC_ESR_DAIERR3_0_Val << ASRC_ESR_DAIERR3_Pos)     /* (ASRC_ESR) No error detected in the direct access link with audio peripherals providing data to ASRC. Position */
#define ASRC_ESR_DAIERR3_1                    (ASRC_ESR_DAIERR3_1_Val << ASRC_ESR_DAIERR3_Pos)     /* (ASRC_ESR) A data is missing in the direct access transfer between two synchronization events (ASRC trigger events). This may be due to a bad configuration of the audio peripheral transmitting the data (for example, direct access is disabled or a hardware failure) or the ASRC direct access enable for channel x is disabled whereas a synchronization event is valid on the direct access physical link (the audio peripheral transmitting the data is enabled and a data has been already transmitted). The error may also rise if the ASRC direct access is being disabled when there is data pending on the direct access link. Position */
#define ASRC_ESR_DAOERR0_Pos                  _UINT32_(28)                                         /* (ASRC_ESR) Direct Access Output Transfer Error Status (cleared on read) Position */
#define ASRC_ESR_DAOERR0_Msk                  (_UINT32_(0x1) << ASRC_ESR_DAOERR0_Pos)              /* (ASRC_ESR) Direct Access Output Transfer Error Status (cleared on read) Mask */
#define ASRC_ESR_DAOERR0(value)               (ASRC_ESR_DAOERR0_Msk & (_UINT32_(value) << ASRC_ESR_DAOERR0_Pos)) /* Assignment of value for DAOERR0 in the ASRC_ESR register */
#define   ASRC_ESR_DAOERR0_0_Val              _UINT32_(0x0)                                        /* (ASRC_ESR) No error detected in the direct access link with audio peripherals receiving data from ASRC.  */
#define   ASRC_ESR_DAOERR0_1_Val              _UINT32_(0x1)                                        /* (ASRC_ESR) A data is missing in the direct access transfer between two synchronization events (ASRC trigger events). This may be due to a bad configuration of the audio peripheral receiving the data (for example, direct access is disabled or a hardware failure).  */
#define ASRC_ESR_DAOERR0_0                    (ASRC_ESR_DAOERR0_0_Val << ASRC_ESR_DAOERR0_Pos)     /* (ASRC_ESR) No error detected in the direct access link with audio peripherals receiving data from ASRC. Position */
#define ASRC_ESR_DAOERR0_1                    (ASRC_ESR_DAOERR0_1_Val << ASRC_ESR_DAOERR0_Pos)     /* (ASRC_ESR) A data is missing in the direct access transfer between two synchronization events (ASRC trigger events). This may be due to a bad configuration of the audio peripheral receiving the data (for example, direct access is disabled or a hardware failure). Position */
#define ASRC_ESR_DAOERR1_Pos                  _UINT32_(29)                                         /* (ASRC_ESR) Direct Access Output Transfer Error Status (cleared on read) Position */
#define ASRC_ESR_DAOERR1_Msk                  (_UINT32_(0x1) << ASRC_ESR_DAOERR1_Pos)              /* (ASRC_ESR) Direct Access Output Transfer Error Status (cleared on read) Mask */
#define ASRC_ESR_DAOERR1(value)               (ASRC_ESR_DAOERR1_Msk & (_UINT32_(value) << ASRC_ESR_DAOERR1_Pos)) /* Assignment of value for DAOERR1 in the ASRC_ESR register */
#define   ASRC_ESR_DAOERR1_0_Val              _UINT32_(0x0)                                        /* (ASRC_ESR) No error detected in the direct access link with audio peripherals receiving data from ASRC.  */
#define   ASRC_ESR_DAOERR1_1_Val              _UINT32_(0x1)                                        /* (ASRC_ESR) A data is missing in the direct access transfer between two synchronization events (ASRC trigger events). This may be due to a bad configuration of the audio peripheral receiving the data (for example, direct access is disabled or a hardware failure).  */
#define ASRC_ESR_DAOERR1_0                    (ASRC_ESR_DAOERR1_0_Val << ASRC_ESR_DAOERR1_Pos)     /* (ASRC_ESR) No error detected in the direct access link with audio peripherals receiving data from ASRC. Position */
#define ASRC_ESR_DAOERR1_1                    (ASRC_ESR_DAOERR1_1_Val << ASRC_ESR_DAOERR1_Pos)     /* (ASRC_ESR) A data is missing in the direct access transfer between two synchronization events (ASRC trigger events). This may be due to a bad configuration of the audio peripheral receiving the data (for example, direct access is disabled or a hardware failure). Position */
#define ASRC_ESR_DAOERR2_Pos                  _UINT32_(30)                                         /* (ASRC_ESR) Direct Access Output Transfer Error Status (cleared on read) Position */
#define ASRC_ESR_DAOERR2_Msk                  (_UINT32_(0x1) << ASRC_ESR_DAOERR2_Pos)              /* (ASRC_ESR) Direct Access Output Transfer Error Status (cleared on read) Mask */
#define ASRC_ESR_DAOERR2(value)               (ASRC_ESR_DAOERR2_Msk & (_UINT32_(value) << ASRC_ESR_DAOERR2_Pos)) /* Assignment of value for DAOERR2 in the ASRC_ESR register */
#define   ASRC_ESR_DAOERR2_0_Val              _UINT32_(0x0)                                        /* (ASRC_ESR) No error detected in the direct access link with audio peripherals receiving data from ASRC.  */
#define   ASRC_ESR_DAOERR2_1_Val              _UINT32_(0x1)                                        /* (ASRC_ESR) A data is missing in the direct access transfer between two synchronization events (ASRC trigger events). This may be due to a bad configuration of the audio peripheral receiving the data (for example, direct access is disabled or a hardware failure).  */
#define ASRC_ESR_DAOERR2_0                    (ASRC_ESR_DAOERR2_0_Val << ASRC_ESR_DAOERR2_Pos)     /* (ASRC_ESR) No error detected in the direct access link with audio peripherals receiving data from ASRC. Position */
#define ASRC_ESR_DAOERR2_1                    (ASRC_ESR_DAOERR2_1_Val << ASRC_ESR_DAOERR2_Pos)     /* (ASRC_ESR) A data is missing in the direct access transfer between two synchronization events (ASRC trigger events). This may be due to a bad configuration of the audio peripheral receiving the data (for example, direct access is disabled or a hardware failure). Position */
#define ASRC_ESR_DAOERR3_Pos                  _UINT32_(31)                                         /* (ASRC_ESR) Direct Access Output Transfer Error Status (cleared on read) Position */
#define ASRC_ESR_DAOERR3_Msk                  (_UINT32_(0x1) << ASRC_ESR_DAOERR3_Pos)              /* (ASRC_ESR) Direct Access Output Transfer Error Status (cleared on read) Mask */
#define ASRC_ESR_DAOERR3(value)               (ASRC_ESR_DAOERR3_Msk & (_UINT32_(value) << ASRC_ESR_DAOERR3_Pos)) /* Assignment of value for DAOERR3 in the ASRC_ESR register */
#define   ASRC_ESR_DAOERR3_0_Val              _UINT32_(0x0)                                        /* (ASRC_ESR) No error detected in the direct access link with audio peripherals receiving data from ASRC.  */
#define   ASRC_ESR_DAOERR3_1_Val              _UINT32_(0x1)                                        /* (ASRC_ESR) A data is missing in the direct access transfer between two synchronization events (ASRC trigger events). This may be due to a bad configuration of the audio peripheral receiving the data (for example, direct access is disabled or a hardware failure).  */
#define ASRC_ESR_DAOERR3_0                    (ASRC_ESR_DAOERR3_0_Val << ASRC_ESR_DAOERR3_Pos)     /* (ASRC_ESR) No error detected in the direct access link with audio peripherals receiving data from ASRC. Position */
#define ASRC_ESR_DAOERR3_1                    (ASRC_ESR_DAOERR3_1_Val << ASRC_ESR_DAOERR3_Pos)     /* (ASRC_ESR) A data is missing in the direct access transfer between two synchronization events (ASRC trigger events). This may be due to a bad configuration of the audio peripheral receiving the data (for example, direct access is disabled or a hardware failure). Position */
#define ASRC_ESR_Msk                          _UINT32_(0xFFFF9FDF)                                 /* (ASRC_ESR) Register Mask  */

#define ASRC_ESR_DAIERR_Pos                   _UINT32_(24)                                         /* (ASRC_ESR Position) Direct Access Input Transfer Error Status (cleared on read) */
#define ASRC_ESR_DAIERR_Msk                   (_UINT32_(0xF) << ASRC_ESR_DAIERR_Pos)               /* (ASRC_ESR Mask) DAIERR */
#define ASRC_ESR_DAIERR(value)                (ASRC_ESR_DAIERR_Msk & (_UINT32_(value) << ASRC_ESR_DAIERR_Pos)) 
#define ASRC_ESR_DAOERR_Pos                   _UINT32_(28)                                         /* (ASRC_ESR Position) Direct Access Output Transfer Error Status (cleared on read) */
#define ASRC_ESR_DAOERR_Msk                   (_UINT32_(0xF) << ASRC_ESR_DAOERR_Pos)               /* (ASRC_ESR Mask) DAOERR */
#define ASRC_ESR_DAOERR(value)                (ASRC_ESR_DAOERR_Msk & (_UINT32_(value) << ASRC_ESR_DAOERR_Pos)) 

/* -------- ASRC_DAVCR : (ASRC Offset: 0xAC) (R/W 32) Direct Access Valid Channels Register -------- */
#define ASRC_DAVCR_RESETVALUE                 _UINT32_(0xFFFFFFFF)                                 /*  (ASRC_DAVCR) Direct Access Valid Channels Register  Reset Value */

#define ASRC_DAVCR_DA0CH0_Pos                 _UINT32_(0)                                          /* (ASRC_DAVCR) Direct Access Input Stream 0 Channel 0 Selection Position */
#define ASRC_DAVCR_DA0CH0_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA0CH0_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 0 Channel 0 Selection Mask */
#define ASRC_DAVCR_DA0CH0(value)              (ASRC_DAVCR_DA0CH0_Msk & (_UINT32_(value) << ASRC_DAVCR_DA0CH0_Pos)) /* Assignment of value for DA0CH0 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA0CH0_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA0CH0_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is converted by a DSP.  */
#define ASRC_DAVCR_DA0CH0_DISABLE             (ASRC_DAVCR_DA0CH0_DISABLE_Val << ASRC_DAVCR_DA0CH0_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA0CH0_ENABLE              (ASRC_DAVCR_DA0CH0_ENABLE_Val << ASRC_DAVCR_DA0CH0_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is converted by a DSP. Position */
#define ASRC_DAVCR_DA0CH1_Pos                 _UINT32_(1)                                          /* (ASRC_DAVCR) Direct Access Input Stream 0 Channel 1 Selection Position */
#define ASRC_DAVCR_DA0CH1_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA0CH1_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 0 Channel 1 Selection Mask */
#define ASRC_DAVCR_DA0CH1(value)              (ASRC_DAVCR_DA0CH1_Msk & (_UINT32_(value) << ASRC_DAVCR_DA0CH1_Pos)) /* Assignment of value for DA0CH1 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA0CH1_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA0CH1_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is converted by a DSP.  */
#define ASRC_DAVCR_DA0CH1_DISABLE             (ASRC_DAVCR_DA0CH1_DISABLE_Val << ASRC_DAVCR_DA0CH1_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA0CH1_ENABLE              (ASRC_DAVCR_DA0CH1_ENABLE_Val << ASRC_DAVCR_DA0CH1_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is converted by a DSP. Position */
#define ASRC_DAVCR_DA0CH2_Pos                 _UINT32_(2)                                          /* (ASRC_DAVCR) Direct Access Input Stream 0 Channel 2 Selection Position */
#define ASRC_DAVCR_DA0CH2_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA0CH2_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 0 Channel 2 Selection Mask */
#define ASRC_DAVCR_DA0CH2(value)              (ASRC_DAVCR_DA0CH2_Msk & (_UINT32_(value) << ASRC_DAVCR_DA0CH2_Pos)) /* Assignment of value for DA0CH2 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA0CH2_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA0CH2_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is converted by a DSP.  */
#define ASRC_DAVCR_DA0CH2_DISABLE             (ASRC_DAVCR_DA0CH2_DISABLE_Val << ASRC_DAVCR_DA0CH2_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA0CH2_ENABLE              (ASRC_DAVCR_DA0CH2_ENABLE_Val << ASRC_DAVCR_DA0CH2_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is converted by a DSP. Position */
#define ASRC_DAVCR_DA0CH3_Pos                 _UINT32_(3)                                          /* (ASRC_DAVCR) Direct Access Input Stream 0 Channel 3 Selection Position */
#define ASRC_DAVCR_DA0CH3_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA0CH3_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 0 Channel 3 Selection Mask */
#define ASRC_DAVCR_DA0CH3(value)              (ASRC_DAVCR_DA0CH3_Msk & (_UINT32_(value) << ASRC_DAVCR_DA0CH3_Pos)) /* Assignment of value for DA0CH3 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA0CH3_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA0CH3_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is converted by a DSP.  */
#define ASRC_DAVCR_DA0CH3_DISABLE             (ASRC_DAVCR_DA0CH3_DISABLE_Val << ASRC_DAVCR_DA0CH3_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA0CH3_ENABLE              (ASRC_DAVCR_DA0CH3_ENABLE_Val << ASRC_DAVCR_DA0CH3_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is converted by a DSP. Position */
#define ASRC_DAVCR_DA0CH4_Pos                 _UINT32_(4)                                          /* (ASRC_DAVCR) Direct Access Input Stream 0 Channel 4 Selection Position */
#define ASRC_DAVCR_DA0CH4_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA0CH4_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 0 Channel 4 Selection Mask */
#define ASRC_DAVCR_DA0CH4(value)              (ASRC_DAVCR_DA0CH4_Msk & (_UINT32_(value) << ASRC_DAVCR_DA0CH4_Pos)) /* Assignment of value for DA0CH4 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA0CH4_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA0CH4_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is converted by a DSP.  */
#define ASRC_DAVCR_DA0CH4_DISABLE             (ASRC_DAVCR_DA0CH4_DISABLE_Val << ASRC_DAVCR_DA0CH4_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA0CH4_ENABLE              (ASRC_DAVCR_DA0CH4_ENABLE_Val << ASRC_DAVCR_DA0CH4_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is converted by a DSP. Position */
#define ASRC_DAVCR_DA0CH5_Pos                 _UINT32_(5)                                          /* (ASRC_DAVCR) Direct Access Input Stream 0 Channel 5 Selection Position */
#define ASRC_DAVCR_DA0CH5_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA0CH5_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 0 Channel 5 Selection Mask */
#define ASRC_DAVCR_DA0CH5(value)              (ASRC_DAVCR_DA0CH5_Msk & (_UINT32_(value) << ASRC_DAVCR_DA0CH5_Pos)) /* Assignment of value for DA0CH5 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA0CH5_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA0CH5_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is converted by a DSP.  */
#define ASRC_DAVCR_DA0CH5_DISABLE             (ASRC_DAVCR_DA0CH5_DISABLE_Val << ASRC_DAVCR_DA0CH5_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA0CH5_ENABLE              (ASRC_DAVCR_DA0CH5_ENABLE_Val << ASRC_DAVCR_DA0CH5_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is converted by a DSP. Position */
#define ASRC_DAVCR_DA0CH6_Pos                 _UINT32_(6)                                          /* (ASRC_DAVCR) Direct Access Input Stream 0 Channel 6 Selection Position */
#define ASRC_DAVCR_DA0CH6_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA0CH6_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 0 Channel 6 Selection Mask */
#define ASRC_DAVCR_DA0CH6(value)              (ASRC_DAVCR_DA0CH6_Msk & (_UINT32_(value) << ASRC_DAVCR_DA0CH6_Pos)) /* Assignment of value for DA0CH6 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA0CH6_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA0CH6_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is converted by a DSP.  */
#define ASRC_DAVCR_DA0CH6_DISABLE             (ASRC_DAVCR_DA0CH6_DISABLE_Val << ASRC_DAVCR_DA0CH6_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA0CH6_ENABLE              (ASRC_DAVCR_DA0CH6_ENABLE_Val << ASRC_DAVCR_DA0CH6_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is converted by a DSP. Position */
#define ASRC_DAVCR_DA0CH7_Pos                 _UINT32_(7)                                          /* (ASRC_DAVCR) Direct Access Input Stream 0 Channel 7 Selection Position */
#define ASRC_DAVCR_DA0CH7_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA0CH7_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 0 Channel 7 Selection Mask */
#define ASRC_DAVCR_DA0CH7(value)              (ASRC_DAVCR_DA0CH7_Msk & (_UINT32_(value) << ASRC_DAVCR_DA0CH7_Pos)) /* Assignment of value for DA0CH7 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA0CH7_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA0CH7_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is converted by a DSP.  */
#define ASRC_DAVCR_DA0CH7_DISABLE             (ASRC_DAVCR_DA0CH7_DISABLE_Val << ASRC_DAVCR_DA0CH7_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA0CH7_ENABLE              (ASRC_DAVCR_DA0CH7_ENABLE_Val << ASRC_DAVCR_DA0CH7_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 0 is converted by a DSP. Position */
#define ASRC_DAVCR_DA1CH0_Pos                 _UINT32_(8)                                          /* (ASRC_DAVCR) Direct Access Input Stream 1 Channel 0 Enable Position */
#define ASRC_DAVCR_DA1CH0_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA1CH0_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 1 Channel 0 Enable Mask */
#define ASRC_DAVCR_DA1CH0(value)              (ASRC_DAVCR_DA1CH0_Msk & (_UINT32_(value) << ASRC_DAVCR_DA1CH0_Pos)) /* Assignment of value for DA1CH0 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA1CH0_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA1CH0_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is converted by a DSP.  */
#define ASRC_DAVCR_DA1CH0_DISABLE             (ASRC_DAVCR_DA1CH0_DISABLE_Val << ASRC_DAVCR_DA1CH0_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA1CH0_ENABLE              (ASRC_DAVCR_DA1CH0_ENABLE_Val << ASRC_DAVCR_DA1CH0_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is converted by a DSP. Position */
#define ASRC_DAVCR_DA1CH1_Pos                 _UINT32_(9)                                          /* (ASRC_DAVCR) Direct Access Input Stream 1 Channel 1 Enable Position */
#define ASRC_DAVCR_DA1CH1_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA1CH1_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 1 Channel 1 Enable Mask */
#define ASRC_DAVCR_DA1CH1(value)              (ASRC_DAVCR_DA1CH1_Msk & (_UINT32_(value) << ASRC_DAVCR_DA1CH1_Pos)) /* Assignment of value for DA1CH1 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA1CH1_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA1CH1_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is converted by a DSP.  */
#define ASRC_DAVCR_DA1CH1_DISABLE             (ASRC_DAVCR_DA1CH1_DISABLE_Val << ASRC_DAVCR_DA1CH1_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA1CH1_ENABLE              (ASRC_DAVCR_DA1CH1_ENABLE_Val << ASRC_DAVCR_DA1CH1_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is converted by a DSP. Position */
#define ASRC_DAVCR_DA1CH2_Pos                 _UINT32_(10)                                         /* (ASRC_DAVCR) Direct Access Input Stream 1 Channel 2 Enable Position */
#define ASRC_DAVCR_DA1CH2_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA1CH2_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 1 Channel 2 Enable Mask */
#define ASRC_DAVCR_DA1CH2(value)              (ASRC_DAVCR_DA1CH2_Msk & (_UINT32_(value) << ASRC_DAVCR_DA1CH2_Pos)) /* Assignment of value for DA1CH2 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA1CH2_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA1CH2_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is converted by a DSP.  */
#define ASRC_DAVCR_DA1CH2_DISABLE             (ASRC_DAVCR_DA1CH2_DISABLE_Val << ASRC_DAVCR_DA1CH2_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA1CH2_ENABLE              (ASRC_DAVCR_DA1CH2_ENABLE_Val << ASRC_DAVCR_DA1CH2_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is converted by a DSP. Position */
#define ASRC_DAVCR_DA1CH3_Pos                 _UINT32_(11)                                         /* (ASRC_DAVCR) Direct Access Input Stream 1 Channel 3 Enable Position */
#define ASRC_DAVCR_DA1CH3_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA1CH3_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 1 Channel 3 Enable Mask */
#define ASRC_DAVCR_DA1CH3(value)              (ASRC_DAVCR_DA1CH3_Msk & (_UINT32_(value) << ASRC_DAVCR_DA1CH3_Pos)) /* Assignment of value for DA1CH3 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA1CH3_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA1CH3_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is converted by a DSP.  */
#define ASRC_DAVCR_DA1CH3_DISABLE             (ASRC_DAVCR_DA1CH3_DISABLE_Val << ASRC_DAVCR_DA1CH3_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA1CH3_ENABLE              (ASRC_DAVCR_DA1CH3_ENABLE_Val << ASRC_DAVCR_DA1CH3_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is converted by a DSP. Position */
#define ASRC_DAVCR_DA1CH4_Pos                 _UINT32_(12)                                         /* (ASRC_DAVCR) Direct Access Input Stream 1 Channel 4 Enable Position */
#define ASRC_DAVCR_DA1CH4_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA1CH4_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 1 Channel 4 Enable Mask */
#define ASRC_DAVCR_DA1CH4(value)              (ASRC_DAVCR_DA1CH4_Msk & (_UINT32_(value) << ASRC_DAVCR_DA1CH4_Pos)) /* Assignment of value for DA1CH4 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA1CH4_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA1CH4_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is converted by a DSP.  */
#define ASRC_DAVCR_DA1CH4_DISABLE             (ASRC_DAVCR_DA1CH4_DISABLE_Val << ASRC_DAVCR_DA1CH4_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA1CH4_ENABLE              (ASRC_DAVCR_DA1CH4_ENABLE_Val << ASRC_DAVCR_DA1CH4_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is converted by a DSP. Position */
#define ASRC_DAVCR_DA1CH5_Pos                 _UINT32_(13)                                         /* (ASRC_DAVCR) Direct Access Input Stream 1 Channel 5 Enable Position */
#define ASRC_DAVCR_DA1CH5_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA1CH5_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 1 Channel 5 Enable Mask */
#define ASRC_DAVCR_DA1CH5(value)              (ASRC_DAVCR_DA1CH5_Msk & (_UINT32_(value) << ASRC_DAVCR_DA1CH5_Pos)) /* Assignment of value for DA1CH5 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA1CH5_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA1CH5_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is converted by a DSP.  */
#define ASRC_DAVCR_DA1CH5_DISABLE             (ASRC_DAVCR_DA1CH5_DISABLE_Val << ASRC_DAVCR_DA1CH5_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA1CH5_ENABLE              (ASRC_DAVCR_DA1CH5_ENABLE_Val << ASRC_DAVCR_DA1CH5_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is converted by a DSP. Position */
#define ASRC_DAVCR_DA1CH6_Pos                 _UINT32_(14)                                         /* (ASRC_DAVCR) Direct Access Input Stream 1 Channel 6 Enable Position */
#define ASRC_DAVCR_DA1CH6_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA1CH6_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 1 Channel 6 Enable Mask */
#define ASRC_DAVCR_DA1CH6(value)              (ASRC_DAVCR_DA1CH6_Msk & (_UINT32_(value) << ASRC_DAVCR_DA1CH6_Pos)) /* Assignment of value for DA1CH6 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA1CH6_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA1CH6_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is converted by a DSP.  */
#define ASRC_DAVCR_DA1CH6_DISABLE             (ASRC_DAVCR_DA1CH6_DISABLE_Val << ASRC_DAVCR_DA1CH6_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA1CH6_ENABLE              (ASRC_DAVCR_DA1CH6_ENABLE_Val << ASRC_DAVCR_DA1CH6_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is converted by a DSP. Position */
#define ASRC_DAVCR_DA1CH7_Pos                 _UINT32_(15)                                         /* (ASRC_DAVCR) Direct Access Input Stream 1 Channel 7 Enable Position */
#define ASRC_DAVCR_DA1CH7_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA1CH7_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 1 Channel 7 Enable Mask */
#define ASRC_DAVCR_DA1CH7(value)              (ASRC_DAVCR_DA1CH7_Msk & (_UINT32_(value) << ASRC_DAVCR_DA1CH7_Pos)) /* Assignment of value for DA1CH7 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA1CH7_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA1CH7_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is converted by a DSP.  */
#define ASRC_DAVCR_DA1CH7_DISABLE             (ASRC_DAVCR_DA1CH7_DISABLE_Val << ASRC_DAVCR_DA1CH7_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA1CH7_ENABLE              (ASRC_DAVCR_DA1CH7_ENABLE_Val << ASRC_DAVCR_DA1CH7_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 1 is converted by a DSP. Position */
#define ASRC_DAVCR_DA2CH0_Pos                 _UINT32_(16)                                         /* (ASRC_DAVCR) Direct Access Input Stream 2 Channel 0 Enable Position */
#define ASRC_DAVCR_DA2CH0_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA2CH0_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 2 Channel 0 Enable Mask */
#define ASRC_DAVCR_DA2CH0(value)              (ASRC_DAVCR_DA2CH0_Msk & (_UINT32_(value) << ASRC_DAVCR_DA2CH0_Pos)) /* Assignment of value for DA2CH0 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA2CH0_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA2CH0_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is converted by a DSP.  */
#define ASRC_DAVCR_DA2CH0_DISABLE             (ASRC_DAVCR_DA2CH0_DISABLE_Val << ASRC_DAVCR_DA2CH0_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA2CH0_ENABLE              (ASRC_DAVCR_DA2CH0_ENABLE_Val << ASRC_DAVCR_DA2CH0_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is converted by a DSP. Position */
#define ASRC_DAVCR_DA2CH1_Pos                 _UINT32_(17)                                         /* (ASRC_DAVCR) Direct Access Input Stream 2 Channel 1 Enable Position */
#define ASRC_DAVCR_DA2CH1_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA2CH1_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 2 Channel 1 Enable Mask */
#define ASRC_DAVCR_DA2CH1(value)              (ASRC_DAVCR_DA2CH1_Msk & (_UINT32_(value) << ASRC_DAVCR_DA2CH1_Pos)) /* Assignment of value for DA2CH1 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA2CH1_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA2CH1_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is converted by a DSP.  */
#define ASRC_DAVCR_DA2CH1_DISABLE             (ASRC_DAVCR_DA2CH1_DISABLE_Val << ASRC_DAVCR_DA2CH1_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA2CH1_ENABLE              (ASRC_DAVCR_DA2CH1_ENABLE_Val << ASRC_DAVCR_DA2CH1_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is converted by a DSP. Position */
#define ASRC_DAVCR_DA2CH2_Pos                 _UINT32_(18)                                         /* (ASRC_DAVCR) Direct Access Input Stream 2 Channel 2 Enable Position */
#define ASRC_DAVCR_DA2CH2_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA2CH2_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 2 Channel 2 Enable Mask */
#define ASRC_DAVCR_DA2CH2(value)              (ASRC_DAVCR_DA2CH2_Msk & (_UINT32_(value) << ASRC_DAVCR_DA2CH2_Pos)) /* Assignment of value for DA2CH2 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA2CH2_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA2CH2_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is converted by a DSP.  */
#define ASRC_DAVCR_DA2CH2_DISABLE             (ASRC_DAVCR_DA2CH2_DISABLE_Val << ASRC_DAVCR_DA2CH2_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA2CH2_ENABLE              (ASRC_DAVCR_DA2CH2_ENABLE_Val << ASRC_DAVCR_DA2CH2_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is converted by a DSP. Position */
#define ASRC_DAVCR_DA2CH3_Pos                 _UINT32_(19)                                         /* (ASRC_DAVCR) Direct Access Input Stream 2 Channel 3 Enable Position */
#define ASRC_DAVCR_DA2CH3_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA2CH3_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 2 Channel 3 Enable Mask */
#define ASRC_DAVCR_DA2CH3(value)              (ASRC_DAVCR_DA2CH3_Msk & (_UINT32_(value) << ASRC_DAVCR_DA2CH3_Pos)) /* Assignment of value for DA2CH3 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA2CH3_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA2CH3_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is converted by a DSP.  */
#define ASRC_DAVCR_DA2CH3_DISABLE             (ASRC_DAVCR_DA2CH3_DISABLE_Val << ASRC_DAVCR_DA2CH3_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA2CH3_ENABLE              (ASRC_DAVCR_DA2CH3_ENABLE_Val << ASRC_DAVCR_DA2CH3_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is converted by a DSP. Position */
#define ASRC_DAVCR_DA2CH4_Pos                 _UINT32_(20)                                         /* (ASRC_DAVCR) Direct Access Input Stream 2 Channel 4 Enable Position */
#define ASRC_DAVCR_DA2CH4_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA2CH4_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 2 Channel 4 Enable Mask */
#define ASRC_DAVCR_DA2CH4(value)              (ASRC_DAVCR_DA2CH4_Msk & (_UINT32_(value) << ASRC_DAVCR_DA2CH4_Pos)) /* Assignment of value for DA2CH4 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA2CH4_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA2CH4_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is converted by a DSP.  */
#define ASRC_DAVCR_DA2CH4_DISABLE             (ASRC_DAVCR_DA2CH4_DISABLE_Val << ASRC_DAVCR_DA2CH4_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA2CH4_ENABLE              (ASRC_DAVCR_DA2CH4_ENABLE_Val << ASRC_DAVCR_DA2CH4_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is converted by a DSP. Position */
#define ASRC_DAVCR_DA2CH5_Pos                 _UINT32_(21)                                         /* (ASRC_DAVCR) Direct Access Input Stream 2 Channel 5 Enable Position */
#define ASRC_DAVCR_DA2CH5_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA2CH5_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 2 Channel 5 Enable Mask */
#define ASRC_DAVCR_DA2CH5(value)              (ASRC_DAVCR_DA2CH5_Msk & (_UINT32_(value) << ASRC_DAVCR_DA2CH5_Pos)) /* Assignment of value for DA2CH5 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA2CH5_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA2CH5_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is converted by a DSP.  */
#define ASRC_DAVCR_DA2CH5_DISABLE             (ASRC_DAVCR_DA2CH5_DISABLE_Val << ASRC_DAVCR_DA2CH5_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA2CH5_ENABLE              (ASRC_DAVCR_DA2CH5_ENABLE_Val << ASRC_DAVCR_DA2CH5_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is converted by a DSP. Position */
#define ASRC_DAVCR_DA2CH6_Pos                 _UINT32_(22)                                         /* (ASRC_DAVCR) Direct Access Input Stream 2 Channel 6 Enable Position */
#define ASRC_DAVCR_DA2CH6_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA2CH6_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 2 Channel 6 Enable Mask */
#define ASRC_DAVCR_DA2CH6(value)              (ASRC_DAVCR_DA2CH6_Msk & (_UINT32_(value) << ASRC_DAVCR_DA2CH6_Pos)) /* Assignment of value for DA2CH6 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA2CH6_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA2CH6_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is converted by a DSP.  */
#define ASRC_DAVCR_DA2CH6_DISABLE             (ASRC_DAVCR_DA2CH6_DISABLE_Val << ASRC_DAVCR_DA2CH6_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA2CH6_ENABLE              (ASRC_DAVCR_DA2CH6_ENABLE_Val << ASRC_DAVCR_DA2CH6_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is converted by a DSP. Position */
#define ASRC_DAVCR_DA2CH7_Pos                 _UINT32_(23)                                         /* (ASRC_DAVCR) Direct Access Input Stream 2 Channel 7 Enable Position */
#define ASRC_DAVCR_DA2CH7_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA2CH7_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 2 Channel 7 Enable Mask */
#define ASRC_DAVCR_DA2CH7(value)              (ASRC_DAVCR_DA2CH7_Msk & (_UINT32_(value) << ASRC_DAVCR_DA2CH7_Pos)) /* Assignment of value for DA2CH7 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA2CH7_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA2CH7_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is converted by a DSP.  */
#define ASRC_DAVCR_DA2CH7_DISABLE             (ASRC_DAVCR_DA2CH7_DISABLE_Val << ASRC_DAVCR_DA2CH7_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA2CH7_ENABLE              (ASRC_DAVCR_DA2CH7_ENABLE_Val << ASRC_DAVCR_DA2CH7_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 2 is converted by a DSP. Position */
#define ASRC_DAVCR_DA3CH0_Pos                 _UINT32_(24)                                         /* (ASRC_DAVCR) Direct Access Input Stream 3 Channel 0 Enable Position */
#define ASRC_DAVCR_DA3CH0_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA3CH0_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 3 Channel 0 Enable Mask */
#define ASRC_DAVCR_DA3CH0(value)              (ASRC_DAVCR_DA3CH0_Msk & (_UINT32_(value) << ASRC_DAVCR_DA3CH0_Pos)) /* Assignment of value for DA3CH0 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA3CH0_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA3CH0_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is converted by a DSP.  */
#define ASRC_DAVCR_DA3CH0_DISABLE             (ASRC_DAVCR_DA3CH0_DISABLE_Val << ASRC_DAVCR_DA3CH0_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA3CH0_ENABLE              (ASRC_DAVCR_DA3CH0_ENABLE_Val << ASRC_DAVCR_DA3CH0_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is converted by a DSP. Position */
#define ASRC_DAVCR_DA3CH1_Pos                 _UINT32_(25)                                         /* (ASRC_DAVCR) Direct Access Input Stream 3 Channel 1 Enable Position */
#define ASRC_DAVCR_DA3CH1_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA3CH1_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 3 Channel 1 Enable Mask */
#define ASRC_DAVCR_DA3CH1(value)              (ASRC_DAVCR_DA3CH1_Msk & (_UINT32_(value) << ASRC_DAVCR_DA3CH1_Pos)) /* Assignment of value for DA3CH1 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA3CH1_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA3CH1_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is converted by a DSP.  */
#define ASRC_DAVCR_DA3CH1_DISABLE             (ASRC_DAVCR_DA3CH1_DISABLE_Val << ASRC_DAVCR_DA3CH1_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA3CH1_ENABLE              (ASRC_DAVCR_DA3CH1_ENABLE_Val << ASRC_DAVCR_DA3CH1_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is converted by a DSP. Position */
#define ASRC_DAVCR_DA3CH2_Pos                 _UINT32_(26)                                         /* (ASRC_DAVCR) Direct Access Input Stream 3 Channel 2 Enable Position */
#define ASRC_DAVCR_DA3CH2_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA3CH2_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 3 Channel 2 Enable Mask */
#define ASRC_DAVCR_DA3CH2(value)              (ASRC_DAVCR_DA3CH2_Msk & (_UINT32_(value) << ASRC_DAVCR_DA3CH2_Pos)) /* Assignment of value for DA3CH2 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA3CH2_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA3CH2_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is converted by a DSP.  */
#define ASRC_DAVCR_DA3CH2_DISABLE             (ASRC_DAVCR_DA3CH2_DISABLE_Val << ASRC_DAVCR_DA3CH2_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA3CH2_ENABLE              (ASRC_DAVCR_DA3CH2_ENABLE_Val << ASRC_DAVCR_DA3CH2_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is converted by a DSP. Position */
#define ASRC_DAVCR_DA3CH3_Pos                 _UINT32_(27)                                         /* (ASRC_DAVCR) Direct Access Input Stream 3 Channel 3 Enable Position */
#define ASRC_DAVCR_DA3CH3_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA3CH3_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 3 Channel 3 Enable Mask */
#define ASRC_DAVCR_DA3CH3(value)              (ASRC_DAVCR_DA3CH3_Msk & (_UINT32_(value) << ASRC_DAVCR_DA3CH3_Pos)) /* Assignment of value for DA3CH3 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA3CH3_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA3CH3_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is converted by a DSP.  */
#define ASRC_DAVCR_DA3CH3_DISABLE             (ASRC_DAVCR_DA3CH3_DISABLE_Val << ASRC_DAVCR_DA3CH3_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA3CH3_ENABLE              (ASRC_DAVCR_DA3CH3_ENABLE_Val << ASRC_DAVCR_DA3CH3_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is converted by a DSP. Position */
#define ASRC_DAVCR_DA3CH4_Pos                 _UINT32_(28)                                         /* (ASRC_DAVCR) Direct Access Input Stream 3 Channel 4 Enable Position */
#define ASRC_DAVCR_DA3CH4_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA3CH4_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 3 Channel 4 Enable Mask */
#define ASRC_DAVCR_DA3CH4(value)              (ASRC_DAVCR_DA3CH4_Msk & (_UINT32_(value) << ASRC_DAVCR_DA3CH4_Pos)) /* Assignment of value for DA3CH4 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA3CH4_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA3CH4_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is converted by a DSP.  */
#define ASRC_DAVCR_DA3CH4_DISABLE             (ASRC_DAVCR_DA3CH4_DISABLE_Val << ASRC_DAVCR_DA3CH4_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA3CH4_ENABLE              (ASRC_DAVCR_DA3CH4_ENABLE_Val << ASRC_DAVCR_DA3CH4_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is converted by a DSP. Position */
#define ASRC_DAVCR_DA3CH5_Pos                 _UINT32_(29)                                         /* (ASRC_DAVCR) Direct Access Input Stream 3 Channel 5 Enable Position */
#define ASRC_DAVCR_DA3CH5_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA3CH5_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 3 Channel 5 Enable Mask */
#define ASRC_DAVCR_DA3CH5(value)              (ASRC_DAVCR_DA3CH5_Msk & (_UINT32_(value) << ASRC_DAVCR_DA3CH5_Pos)) /* Assignment of value for DA3CH5 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA3CH5_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA3CH5_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is converted by a DSP.  */
#define ASRC_DAVCR_DA3CH5_DISABLE             (ASRC_DAVCR_DA3CH5_DISABLE_Val << ASRC_DAVCR_DA3CH5_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA3CH5_ENABLE              (ASRC_DAVCR_DA3CH5_ENABLE_Val << ASRC_DAVCR_DA3CH5_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is converted by a DSP. Position */
#define ASRC_DAVCR_DA3CH6_Pos                 _UINT32_(30)                                         /* (ASRC_DAVCR) Direct Access Input Stream 3 Channel 6 Enable Position */
#define ASRC_DAVCR_DA3CH6_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA3CH6_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 3 Channel 6 Enable Mask */
#define ASRC_DAVCR_DA3CH6(value)              (ASRC_DAVCR_DA3CH6_Msk & (_UINT32_(value) << ASRC_DAVCR_DA3CH6_Pos)) /* Assignment of value for DA3CH6 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA3CH6_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA3CH6_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is converted by a DSP.  */
#define ASRC_DAVCR_DA3CH6_DISABLE             (ASRC_DAVCR_DA3CH6_DISABLE_Val << ASRC_DAVCR_DA3CH6_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA3CH6_ENABLE              (ASRC_DAVCR_DA3CH6_ENABLE_Val << ASRC_DAVCR_DA3CH6_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is converted by a DSP. Position */
#define ASRC_DAVCR_DA3CH7_Pos                 _UINT32_(31)                                         /* (ASRC_DAVCR) Direct Access Input Stream 3 Channel 7 Enable Position */
#define ASRC_DAVCR_DA3CH7_Msk                 (_UINT32_(0x1) << ASRC_DAVCR_DA3CH7_Pos)             /* (ASRC_DAVCR) Direct Access Input Stream 3 Channel 7 Enable Mask */
#define ASRC_DAVCR_DA3CH7(value)              (ASRC_DAVCR_DA3CH7_Msk & (_UINT32_(value) << ASRC_DAVCR_DA3CH7_Pos)) /* Assignment of value for DA3CH7 in the ASRC_DAVCR register */
#define   ASRC_DAVCR_DA3CH7_DISABLE_Val       _UINT32_(0x0)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is not passed to any DSP.  */
#define   ASRC_DAVCR_DA3CH7_ENABLE_Val        _UINT32_(0x1)                                        /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is converted by a DSP.  */
#define ASRC_DAVCR_DA3CH7_DISABLE             (ASRC_DAVCR_DA3CH7_DISABLE_Val << ASRC_DAVCR_DA3CH7_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is not passed to any DSP. Position */
#define ASRC_DAVCR_DA3CH7_ENABLE              (ASRC_DAVCR_DA3CH7_ENABLE_Val << ASRC_DAVCR_DA3CH7_Pos) /* (ASRC_DAVCR) The channel x of the direct access input stream 3 is converted by a DSP. Position */
#define ASRC_DAVCR_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (ASRC_DAVCR) Register Mask  */

#define ASRC_DAVCR_DA0CH_Pos                  _UINT32_(0)                                          /* (ASRC_DAVCR Position) Direct Access Input Stream x Channel x Selection */
#define ASRC_DAVCR_DA0CH_Msk                  (_UINT32_(0xFF) << ASRC_DAVCR_DA0CH_Pos)             /* (ASRC_DAVCR Mask) DA0CH */
#define ASRC_DAVCR_DA0CH(value)               (ASRC_DAVCR_DA0CH_Msk & (_UINT32_(value) << ASRC_DAVCR_DA0CH_Pos)) 
#define ASRC_DAVCR_DA1CH_Pos                  _UINT32_(8)                                          /* (ASRC_DAVCR Position) Direct Access Input Stream x Channel x Enable */
#define ASRC_DAVCR_DA1CH_Msk                  (_UINT32_(0xFF) << ASRC_DAVCR_DA1CH_Pos)             /* (ASRC_DAVCR Mask) DA1CH */
#define ASRC_DAVCR_DA1CH(value)               (ASRC_DAVCR_DA1CH_Msk & (_UINT32_(value) << ASRC_DAVCR_DA1CH_Pos)) 
#define ASRC_DAVCR_DA2CH_Pos                  _UINT32_(16)                                         /* (ASRC_DAVCR Position) Direct Access Input Stream 2 Channel x Enable */
#define ASRC_DAVCR_DA2CH_Msk                  (_UINT32_(0xFF) << ASRC_DAVCR_DA2CH_Pos)             /* (ASRC_DAVCR Mask) DA2CH */
#define ASRC_DAVCR_DA2CH(value)               (ASRC_DAVCR_DA2CH_Msk & (_UINT32_(value) << ASRC_DAVCR_DA2CH_Pos)) 
#define ASRC_DAVCR_DA3CH_Pos                  _UINT32_(24)                                         /* (ASRC_DAVCR Position) Direct Access Input Stream 3 Channel 7 Enable */
#define ASRC_DAVCR_DA3CH_Msk                  (_UINT32_(0xFF) << ASRC_DAVCR_DA3CH_Pos)             /* (ASRC_DAVCR Mask) DA3CH */
#define ASRC_DAVCR_DA3CH(value)               (ASRC_DAVCR_DA3CH_Msk & (_UINT32_(value) << ASRC_DAVCR_DA3CH_Pos)) 

/* -------- ASRC_FIR : (ASRC Offset: 0xB0) (R/W 32) Fault Injection Register -------- */
#define ASRC_FIR_RESETVALUE                   _UINT32_(0x00)                                       /*  (ASRC_FIR) Fault Injection Register  Reset Value */

#define ASRC_FIR_F0_Pos                       _UINT32_(0)                                          /* (ASRC_FIR) Single Fault for ASRC DSP0 Enable (ASRC_MR.ASRCEN0) Position */
#define ASRC_FIR_F0_Msk                       (_UINT32_(0x1) << ASRC_FIR_F0_Pos)                   /* (ASRC_FIR) Single Fault for ASRC DSP0 Enable (ASRC_MR.ASRCEN0) Mask */
#define ASRC_FIR_F0(value)                    (ASRC_FIR_F0_Msk & (_UINT32_(value) << ASRC_FIR_F0_Pos)) /* Assignment of value for F0 in the ASRC_FIR register */
#define   ASRC_FIR_F0_0_Val                   _UINT32_(0x0)                                        /* (ASRC_FIR) Clears the fault. Writing a 0 to this bit clears ASRC_ESR.ROMS/SRAMS if the write is done before reading ASRC_WPSR and before starting a new memory check procedure.  */
#define   ASRC_FIR_F0_1_Val                   _UINT32_(0x1)                                        /* (ASRC_FIR) Injects a single fault on the reinforced safety for the ASRC_MR.ASRCENx bit if 0x414649 ("AFI" in ASCII) is written in the FIKEY field at the same time. The ASRC remains in the same state, the flag ASRC_ISRx.SECE=1 and the flag ASRC_WPSR.SDEE=1. When the memory check is started (ASRC_CR.MEMCHECK=1), injects also a fault in the data read from embedded memories to verify the memory checker. Thus at the end of the memory check period (ASRC_ISRx.EOMCP=1) the flag ASRC_ESR.ROMS=1 and ASRC_ESR.SRAMS=1.  */
#define ASRC_FIR_F0_0                         (ASRC_FIR_F0_0_Val << ASRC_FIR_F0_Pos)               /* (ASRC_FIR) Clears the fault. Writing a 0 to this bit clears ASRC_ESR.ROMS/SRAMS if the write is done before reading ASRC_WPSR and before starting a new memory check procedure. Position */
#define ASRC_FIR_F0_1                         (ASRC_FIR_F0_1_Val << ASRC_FIR_F0_Pos)               /* (ASRC_FIR) Injects a single fault on the reinforced safety for the ASRC_MR.ASRCENx bit if 0x414649 ("AFI" in ASCII) is written in the FIKEY field at the same time. The ASRC remains in the same state, the flag ASRC_ISRx.SECE=1 and the flag ASRC_WPSR.SDEE=1. When the memory check is started (ASRC_CR.MEMCHECK=1), injects also a fault in the data read from embedded memories to verify the memory checker. Thus at the end of the memory check period (ASRC_ISRx.EOMCP=1) the flag ASRC_ESR.ROMS=1 and ASRC_ESR.SRAMS=1. Position */
#define ASRC_FIR_F1_Pos                       _UINT32_(1)                                          /* (ASRC_FIR) Single Fault for ASRC Write Protection Configuration Enable (ASRC_WPMR.WPEN) Position */
#define ASRC_FIR_F1_Msk                       (_UINT32_(0x1) << ASRC_FIR_F1_Pos)                   /* (ASRC_FIR) Single Fault for ASRC Write Protection Configuration Enable (ASRC_WPMR.WPEN) Mask */
#define ASRC_FIR_F1(value)                    (ASRC_FIR_F1_Msk & (_UINT32_(value) << ASRC_FIR_F1_Pos)) /* Assignment of value for F1 in the ASRC_FIR register */
#define   ASRC_FIR_F1_0_Val                   _UINT32_(0x0)                                        /* (ASRC_FIR) Clears the fault.  */
#define   ASRC_FIR_F1_1_Val                   _UINT32_(0x1)                                        /* (ASRC_FIR) Injects a single fault on the reinforced safety for the ASRC_WPMR.WPEN bit if 0x414649 ("AFI" in ASCII) is written in the FIKEY field at the same time. The ASRC remains in the same state, the flag ASRC_ISRx.SECE=1 and the flag ASRC_WPSR.SDEE=1.  */
#define ASRC_FIR_F1_0                         (ASRC_FIR_F1_0_Val << ASRC_FIR_F1_Pos)               /* (ASRC_FIR) Clears the fault. Position */
#define ASRC_FIR_F1_1                         (ASRC_FIR_F1_1_Val << ASRC_FIR_F1_Pos)               /* (ASRC_FIR) Injects a single fault on the reinforced safety for the ASRC_WPMR.WPEN bit if 0x414649 ("AFI" in ASCII) is written in the FIKEY field at the same time. The ASRC remains in the same state, the flag ASRC_ISRx.SECE=1 and the flag ASRC_WPSR.SDEE=1. Position */
#define ASRC_FIR_F2_Pos                       _UINT32_(2)                                          /* (ASRC_FIR) Single Fault for ASRC Write Protection Interrupt Enable (ASRC_WPMR.WPITEN) Position */
#define ASRC_FIR_F2_Msk                       (_UINT32_(0x1) << ASRC_FIR_F2_Pos)                   /* (ASRC_FIR) Single Fault for ASRC Write Protection Interrupt Enable (ASRC_WPMR.WPITEN) Mask */
#define ASRC_FIR_F2(value)                    (ASRC_FIR_F2_Msk & (_UINT32_(value) << ASRC_FIR_F2_Pos)) /* Assignment of value for F2 in the ASRC_FIR register */
#define   ASRC_FIR_F2_0_Val                   _UINT32_(0x0)                                        /* (ASRC_FIR) Clears the fault.  */
#define   ASRC_FIR_F2_1_Val                   _UINT32_(0x1)                                        /* (ASRC_FIR) Injects a single fault on the reinforced safety for the ASRC_WPMR.WPITEN bit if 0x414649 ("AFI" in ASCII) is written in the FIKEY field at the same time. The ASRC remains in the same state, the flag ASRC_ISRx.SECE=1 and the flag ASRC_WPSR.SDEE=1.  */
#define ASRC_FIR_F2_0                         (ASRC_FIR_F2_0_Val << ASRC_FIR_F2_Pos)               /* (ASRC_FIR) Clears the fault. Position */
#define ASRC_FIR_F2_1                         (ASRC_FIR_F2_1_Val << ASRC_FIR_F2_Pos)               /* (ASRC_FIR) Injects a single fault on the reinforced safety for the ASRC_WPMR.WPITEN bit if 0x414649 ("AFI" in ASCII) is written in the FIKEY field at the same time. The ASRC remains in the same state, the flag ASRC_ISRx.SECE=1 and the flag ASRC_WPSR.SDEE=1. Position */
#define ASRC_FIR_F3_Pos                       _UINT32_(3)                                          /* (ASRC_FIR) Single Fault for ASRC Write Protection Control Enable (ASRC_WPMR.WPCREN) Position */
#define ASRC_FIR_F3_Msk                       (_UINT32_(0x1) << ASRC_FIR_F3_Pos)                   /* (ASRC_FIR) Single Fault for ASRC Write Protection Control Enable (ASRC_WPMR.WPCREN) Mask */
#define ASRC_FIR_F3(value)                    (ASRC_FIR_F3_Msk & (_UINT32_(value) << ASRC_FIR_F3_Pos)) /* Assignment of value for F3 in the ASRC_FIR register */
#define   ASRC_FIR_F3_0_Val                   _UINT32_(0x0)                                        /* (ASRC_FIR) Clears the fault.  */
#define   ASRC_FIR_F3_1_Val                   _UINT32_(0x1)                                        /* (ASRC_FIR) Injects a single fault on the reinforced safety for the ASRC_WPMR.WPCREN bit if 0x414649 ("AFI" in ASCII) is written in the FIKEY field at the same time. The ASRC remains in the same state, the flag ASRC_ISRx.SECE=1 and the flag ASRC_WPSR.SDEE=1.  */
#define ASRC_FIR_F3_0                         (ASRC_FIR_F3_0_Val << ASRC_FIR_F3_Pos)               /* (ASRC_FIR) Clears the fault. Position */
#define ASRC_FIR_F3_1                         (ASRC_FIR_F3_1_Val << ASRC_FIR_F3_Pos)               /* (ASRC_FIR) Injects a single fault on the reinforced safety for the ASRC_WPMR.WPCREN bit if 0x414649 ("AFI" in ASCII) is written in the FIKEY field at the same time. The ASRC remains in the same state, the flag ASRC_ISRx.SECE=1 and the flag ASRC_WPSR.SDEE=1. Position */
#define ASRC_FIR_FPARE_Pos                    _UINT32_(5)                                          /* (ASRC_FIR) Single Fault for ASRC Mode Register Position */
#define ASRC_FIR_FPARE_Msk                    (_UINT32_(0x1) << ASRC_FIR_FPARE_Pos)                /* (ASRC_FIR) Single Fault for ASRC Mode Register Mask */
#define ASRC_FIR_FPARE(value)                 (ASRC_FIR_FPARE_Msk & (_UINT32_(value) << ASRC_FIR_FPARE_Pos)) /* Assignment of value for FPARE in the ASRC_FIR register */
#define   ASRC_FIR_FPARE_NO_EFFECT_Val        _UINT32_(0x0)                                        /* (ASRC_FIR) No effect.  */
#define   ASRC_FIR_FPARE_INJECT_CLEAR_Val     _UINT32_(0x1)                                        /* (ASRC_FIR) Injects a single fault on the configuration register if the ASRC DSP are all disabled (for security reason), the flag ASRC_WPSR.SEQE=1 and the flag ASRC_ISRx.SECE =1. Clears the fault if it has been previously injected.  */
#define ASRC_FIR_FPARE_NO_EFFECT              (ASRC_FIR_FPARE_NO_EFFECT_Val << ASRC_FIR_FPARE_Pos) /* (ASRC_FIR) No effect. Position */
#define ASRC_FIR_FPARE_INJECT_CLEAR           (ASRC_FIR_FPARE_INJECT_CLEAR_Val << ASRC_FIR_FPARE_Pos) /* (ASRC_FIR) Injects a single fault on the configuration register if the ASRC DSP are all disabled (for security reason), the flag ASRC_WPSR.SEQE=1 and the flag ASRC_ISRx.SECE =1. Clears the fault if it has been previously injected. Position */
#define ASRC_FIR_FIRDIS_Pos                   _UINT32_(7)                                          /* (ASRC_FIR) Fault Injection Register Disable Position */
#define ASRC_FIR_FIRDIS_Msk                   (_UINT32_(0x1) << ASRC_FIR_FIRDIS_Pos)               /* (ASRC_FIR) Fault Injection Register Disable Mask */
#define ASRC_FIR_FIRDIS(value)                (ASRC_FIR_FIRDIS_Msk & (_UINT32_(value) << ASRC_FIR_FIRDIS_Pos)) /* Assignment of value for FIRDIS in the ASRC_FIR register */
#define   ASRC_FIR_FIRDIS_NO_EFFECT_Val       _UINT32_(0x0)                                        /* (ASRC_FIR) No effect.  */
#define   ASRC_FIR_FIRDIS_ACTIVE_Val          _UINT32_(0x1)                                        /* (ASRC_FIR) Disables the fault injection until the next hardware reset. The command is valid only if the ASRCC_WPSR.SEQE=0 and the other bits are cleared (F0=F1=F2=F3=FPARE=0).  */
#define ASRC_FIR_FIRDIS_NO_EFFECT             (ASRC_FIR_FIRDIS_NO_EFFECT_Val << ASRC_FIR_FIRDIS_Pos) /* (ASRC_FIR) No effect. Position */
#define ASRC_FIR_FIRDIS_ACTIVE                (ASRC_FIR_FIRDIS_ACTIVE_Val << ASRC_FIR_FIRDIS_Pos)  /* (ASRC_FIR) Disables the fault injection until the next hardware reset. The command is valid only if the ASRCC_WPSR.SEQE=0 and the other bits are cleared (F0=F1=F2=F3=FPARE=0). Position */
#define ASRC_FIR_FIKEY_Pos                    _UINT32_(8)                                          /* (ASRC_FIR) Fault Injection Access Key Position */
#define ASRC_FIR_FIKEY_Msk                    (_UINT32_(0xFFFFFF) << ASRC_FIR_FIKEY_Pos)           /* (ASRC_FIR) Fault Injection Access Key Mask */
#define ASRC_FIR_FIKEY(value)                 (ASRC_FIR_FIKEY_Msk & (_UINT32_(value) << ASRC_FIR_FIKEY_Pos)) /* Assignment of value for FIKEY in the ASRC_FIR register */
#define   ASRC_FIR_FIKEY_PASSWD_Val           _UINT32_(0x414649)                                   /* (ASRC_FIR) Writing any other value in this field aborts the write operation.  */
#define ASRC_FIR_FIKEY_PASSWD                 (ASRC_FIR_FIKEY_PASSWD_Val << ASRC_FIR_FIKEY_Pos)    /* (ASRC_FIR) Writing any other value in this field aborts the write operation. Position */
#define ASRC_FIR_Msk                          _UINT32_(0xFFFFFFAF)                                 /* (ASRC_FIR) Register Mask  */

#define ASRC_FIR_F_Pos                        _UINT32_(0)                                          /* (ASRC_FIR Position) Single Fault for ASRC DSPx Enable (ASRC_MR.ASRCENx) */
#define ASRC_FIR_F_Msk                        (_UINT32_(0xF) << ASRC_FIR_F_Pos)                    /* (ASRC_FIR Mask) F */
#define ASRC_FIR_F(value)                     (ASRC_FIR_F_Msk & (_UINT32_(value) << ASRC_FIR_F_Pos)) 

/* -------- ASRC_DAPSELR : (ASRC Offset: 0xB4) (R/W 32) Direct Access Peripheral Select Register -------- */
#define ASRC_DAPSELR_RESETVALUE               _UINT32_(0x32103210)                                 /*  (ASRC_DAPSELR) Direct Access Peripheral Select Register  Reset Value */

#define ASRC_DAPSELR_IN_CH0_Pos               _UINT32_(0)                                          /* (ASRC_DAPSELR) Direct Access Channel 0 Input Audio Peripheral Source Position */
#define ASRC_DAPSELR_IN_CH0_Msk               (_UINT32_(0x7) << ASRC_DAPSELR_IN_CH0_Pos)           /* (ASRC_DAPSELR) Direct Access Channel 0 Input Audio Peripheral Source Mask */
#define ASRC_DAPSELR_IN_CH0(value)            (ASRC_DAPSELR_IN_CH0_Msk & (_UINT32_(value) << ASRC_DAPSELR_IN_CH0_Pos)) /* Assignment of value for IN_CH0 in the ASRC_DAPSELR register */
#define   ASRC_DAPSELR_IN_CH0_AUDIOSTREAM0_Val _UINT32_(0x0)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driven by I2SMCC0 RX when ASRC_MR.DATHRx=1or ASRC_MR.DATHRM=1.  */
#define   ASRC_DAPSELR_IN_CH0_AUDIOSTREAM1_Val _UINT32_(0x1)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driven by I2SMCC1 RX when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1.  */
#define   ASRC_DAPSELR_IN_CH0_AUDIOSTREAM2_Val _UINT32_(0x2)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driven by SPDIFRX. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1.  */
#define   ASRC_DAPSELR_IN_CH0_AUDIOSTREAM3_Val _UINT32_(0x3)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driven by PDMC0. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1.  */
#define   ASRC_DAPSELR_IN_CH0_AUDIOSTREAM4_Val _UINT32_(0x4)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driven by PDMC1. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1.  */
#define   ASRC_DAPSELR_IN_CH0_AUDIOSTREAM5_Val _UINT32_(0x5)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driven by SSC0 RX. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1.  */
#define   ASRC_DAPSELR_IN_CH0_AUDIOSTREAM6_Val _UINT32_(0x6)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driven by SSC1 RX. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1.  */
#define ASRC_DAPSELR_IN_CH0_AUDIOSTREAM0      (ASRC_DAPSELR_IN_CH0_AUDIOSTREAM0_Val << ASRC_DAPSELR_IN_CH0_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driven by I2SMCC0 RX when ASRC_MR.DATHRx=1or ASRC_MR.DATHRM=1. Position */
#define ASRC_DAPSELR_IN_CH0_AUDIOSTREAM1      (ASRC_DAPSELR_IN_CH0_AUDIOSTREAM1_Val << ASRC_DAPSELR_IN_CH0_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driven by I2SMCC1 RX when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1. Position */
#define ASRC_DAPSELR_IN_CH0_AUDIOSTREAM2      (ASRC_DAPSELR_IN_CH0_AUDIOSTREAM2_Val << ASRC_DAPSELR_IN_CH0_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driven by SPDIFRX. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1. Position */
#define ASRC_DAPSELR_IN_CH0_AUDIOSTREAM3      (ASRC_DAPSELR_IN_CH0_AUDIOSTREAM3_Val << ASRC_DAPSELR_IN_CH0_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driven by PDMC0. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1. Position */
#define ASRC_DAPSELR_IN_CH0_AUDIOSTREAM4      (ASRC_DAPSELR_IN_CH0_AUDIOSTREAM4_Val << ASRC_DAPSELR_IN_CH0_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driven by PDMC1. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1. Position */
#define ASRC_DAPSELR_IN_CH0_AUDIOSTREAM5      (ASRC_DAPSELR_IN_CH0_AUDIOSTREAM5_Val << ASRC_DAPSELR_IN_CH0_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driven by SSC0 RX. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1. Position */
#define ASRC_DAPSELR_IN_CH0_AUDIOSTREAM6      (ASRC_DAPSELR_IN_CH0_AUDIOSTREAM6_Val << ASRC_DAPSELR_IN_CH0_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driven by SSC1 RX. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1. Position */
#define ASRC_DAPSELR_IN_CH1_Pos               _UINT32_(4)                                          /* (ASRC_DAPSELR) Direct Access Channel 1 Input Audio Peripheral Source Position */
#define ASRC_DAPSELR_IN_CH1_Msk               (_UINT32_(0x7) << ASRC_DAPSELR_IN_CH1_Pos)           /* (ASRC_DAPSELR) Direct Access Channel 1 Input Audio Peripheral Source Mask */
#define ASRC_DAPSELR_IN_CH1(value)            (ASRC_DAPSELR_IN_CH1_Msk & (_UINT32_(value) << ASRC_DAPSELR_IN_CH1_Pos)) /* Assignment of value for IN_CH1 in the ASRC_DAPSELR register */
#define   ASRC_DAPSELR_IN_CH1_AUDIOSTREAM0_Val _UINT32_(0x0)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driven by I2SMCC0 RX when ASRC_MR.DATHRx=1or ASRC_MR.DATHRM=1.  */
#define   ASRC_DAPSELR_IN_CH1_AUDIOSTREAM1_Val _UINT32_(0x1)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driven by I2SMCC1 RX when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1.  */
#define   ASRC_DAPSELR_IN_CH1_AUDIOSTREAM2_Val _UINT32_(0x2)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driven by SPDIFRX. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1.  */
#define   ASRC_DAPSELR_IN_CH1_AUDIOSTREAM3_Val _UINT32_(0x3)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driven by PDMC0. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1.  */
#define   ASRC_DAPSELR_IN_CH1_AUDIOSTREAM4_Val _UINT32_(0x4)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driven by PDMC1. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1.  */
#define   ASRC_DAPSELR_IN_CH1_AUDIOSTREAM5_Val _UINT32_(0x5)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driven by SSC0 RX. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1.  */
#define   ASRC_DAPSELR_IN_CH1_AUDIOSTREAM6_Val _UINT32_(0x6)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driven by SSC1 RX. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1.  */
#define ASRC_DAPSELR_IN_CH1_AUDIOSTREAM0      (ASRC_DAPSELR_IN_CH1_AUDIOSTREAM0_Val << ASRC_DAPSELR_IN_CH1_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driven by I2SMCC0 RX when ASRC_MR.DATHRx=1or ASRC_MR.DATHRM=1. Position */
#define ASRC_DAPSELR_IN_CH1_AUDIOSTREAM1      (ASRC_DAPSELR_IN_CH1_AUDIOSTREAM1_Val << ASRC_DAPSELR_IN_CH1_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driven by I2SMCC1 RX when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1. Position */
#define ASRC_DAPSELR_IN_CH1_AUDIOSTREAM2      (ASRC_DAPSELR_IN_CH1_AUDIOSTREAM2_Val << ASRC_DAPSELR_IN_CH1_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driven by SPDIFRX. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1. Position */
#define ASRC_DAPSELR_IN_CH1_AUDIOSTREAM3      (ASRC_DAPSELR_IN_CH1_AUDIOSTREAM3_Val << ASRC_DAPSELR_IN_CH1_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driven by PDMC0. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1. Position */
#define ASRC_DAPSELR_IN_CH1_AUDIOSTREAM4      (ASRC_DAPSELR_IN_CH1_AUDIOSTREAM4_Val << ASRC_DAPSELR_IN_CH1_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driven by PDMC1. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1. Position */
#define ASRC_DAPSELR_IN_CH1_AUDIOSTREAM5      (ASRC_DAPSELR_IN_CH1_AUDIOSTREAM5_Val << ASRC_DAPSELR_IN_CH1_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driven by SSC0 RX. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1. Position */
#define ASRC_DAPSELR_IN_CH1_AUDIOSTREAM6      (ASRC_DAPSELR_IN_CH1_AUDIOSTREAM6_Val << ASRC_DAPSELR_IN_CH1_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driven by SSC1 RX. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1. Position */
#define ASRC_DAPSELR_IN_CH2_Pos               _UINT32_(8)                                          /* (ASRC_DAPSELR) Direct Access Channel 2 Input Audio Peripheral Source Position */
#define ASRC_DAPSELR_IN_CH2_Msk               (_UINT32_(0x7) << ASRC_DAPSELR_IN_CH2_Pos)           /* (ASRC_DAPSELR) Direct Access Channel 2 Input Audio Peripheral Source Mask */
#define ASRC_DAPSELR_IN_CH2(value)            (ASRC_DAPSELR_IN_CH2_Msk & (_UINT32_(value) << ASRC_DAPSELR_IN_CH2_Pos)) /* Assignment of value for IN_CH2 in the ASRC_DAPSELR register */
#define   ASRC_DAPSELR_IN_CH2_AUDIOSTREAM0_Val _UINT32_(0x0)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driven by I2SMCC0 RX when ASRC_MR.DATHRx=1or ASRC_MR.DATHRM=1.  */
#define   ASRC_DAPSELR_IN_CH2_AUDIOSTREAM1_Val _UINT32_(0x1)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driven by I2SMCC1 RX when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1.  */
#define   ASRC_DAPSELR_IN_CH2_AUDIOSTREAM2_Val _UINT32_(0x2)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driven by SPDIFRX. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1.  */
#define   ASRC_DAPSELR_IN_CH2_AUDIOSTREAM3_Val _UINT32_(0x3)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driven by PDMC0. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1.  */
#define   ASRC_DAPSELR_IN_CH2_AUDIOSTREAM4_Val _UINT32_(0x4)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driven by PDMC1. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1.  */
#define   ASRC_DAPSELR_IN_CH2_AUDIOSTREAM5_Val _UINT32_(0x5)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driven by SSC0 RX. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1.  */
#define   ASRC_DAPSELR_IN_CH2_AUDIOSTREAM6_Val _UINT32_(0x6)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driven by SSC1 RX. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1.  */
#define ASRC_DAPSELR_IN_CH2_AUDIOSTREAM0      (ASRC_DAPSELR_IN_CH2_AUDIOSTREAM0_Val << ASRC_DAPSELR_IN_CH2_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driven by I2SMCC0 RX when ASRC_MR.DATHRx=1or ASRC_MR.DATHRM=1. Position */
#define ASRC_DAPSELR_IN_CH2_AUDIOSTREAM1      (ASRC_DAPSELR_IN_CH2_AUDIOSTREAM1_Val << ASRC_DAPSELR_IN_CH2_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driven by I2SMCC1 RX when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1. Position */
#define ASRC_DAPSELR_IN_CH2_AUDIOSTREAM2      (ASRC_DAPSELR_IN_CH2_AUDIOSTREAM2_Val << ASRC_DAPSELR_IN_CH2_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driven by SPDIFRX. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1. Position */
#define ASRC_DAPSELR_IN_CH2_AUDIOSTREAM3      (ASRC_DAPSELR_IN_CH2_AUDIOSTREAM3_Val << ASRC_DAPSELR_IN_CH2_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driven by PDMC0. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1. Position */
#define ASRC_DAPSELR_IN_CH2_AUDIOSTREAM4      (ASRC_DAPSELR_IN_CH2_AUDIOSTREAM4_Val << ASRC_DAPSELR_IN_CH2_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driven by PDMC1. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1. Position */
#define ASRC_DAPSELR_IN_CH2_AUDIOSTREAM5      (ASRC_DAPSELR_IN_CH2_AUDIOSTREAM5_Val << ASRC_DAPSELR_IN_CH2_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driven by SSC0 RX. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1. Position */
#define ASRC_DAPSELR_IN_CH2_AUDIOSTREAM6      (ASRC_DAPSELR_IN_CH2_AUDIOSTREAM6_Val << ASRC_DAPSELR_IN_CH2_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driven by SSC1 RX. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1. Position */
#define ASRC_DAPSELR_IN_CH3_Pos               _UINT32_(12)                                         /* (ASRC_DAPSELR) Direct Access Channel 3 Input Audio Peripheral Source Position */
#define ASRC_DAPSELR_IN_CH3_Msk               (_UINT32_(0x7) << ASRC_DAPSELR_IN_CH3_Pos)           /* (ASRC_DAPSELR) Direct Access Channel 3 Input Audio Peripheral Source Mask */
#define ASRC_DAPSELR_IN_CH3(value)            (ASRC_DAPSELR_IN_CH3_Msk & (_UINT32_(value) << ASRC_DAPSELR_IN_CH3_Pos)) /* Assignment of value for IN_CH3 in the ASRC_DAPSELR register */
#define   ASRC_DAPSELR_IN_CH3_AUDIOSTREAM0_Val _UINT32_(0x0)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driven by I2SMCC0 RX when ASRC_MR.DATHRx=1or ASRC_MR.DATHRM=1.  */
#define   ASRC_DAPSELR_IN_CH3_AUDIOSTREAM1_Val _UINT32_(0x1)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driven by I2SMCC1 RX when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1.  */
#define   ASRC_DAPSELR_IN_CH3_AUDIOSTREAM2_Val _UINT32_(0x2)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driven by SPDIFRX. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1.  */
#define   ASRC_DAPSELR_IN_CH3_AUDIOSTREAM3_Val _UINT32_(0x3)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driven by PDMC0. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1.  */
#define   ASRC_DAPSELR_IN_CH3_AUDIOSTREAM4_Val _UINT32_(0x4)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driven by PDMC1. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1.  */
#define   ASRC_DAPSELR_IN_CH3_AUDIOSTREAM5_Val _UINT32_(0x5)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driven by SSC0 RX. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1.  */
#define   ASRC_DAPSELR_IN_CH3_AUDIOSTREAM6_Val _UINT32_(0x6)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driven by SSC1 RX. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1.  */
#define ASRC_DAPSELR_IN_CH3_AUDIOSTREAM0      (ASRC_DAPSELR_IN_CH3_AUDIOSTREAM0_Val << ASRC_DAPSELR_IN_CH3_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driven by I2SMCC0 RX when ASRC_MR.DATHRx=1or ASRC_MR.DATHRM=1. Position */
#define ASRC_DAPSELR_IN_CH3_AUDIOSTREAM1      (ASRC_DAPSELR_IN_CH3_AUDIOSTREAM1_Val << ASRC_DAPSELR_IN_CH3_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driven by I2SMCC1 RX when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1. Position */
#define ASRC_DAPSELR_IN_CH3_AUDIOSTREAM2      (ASRC_DAPSELR_IN_CH3_AUDIOSTREAM2_Val << ASRC_DAPSELR_IN_CH3_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driven by SPDIFRX. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1. Position */
#define ASRC_DAPSELR_IN_CH3_AUDIOSTREAM3      (ASRC_DAPSELR_IN_CH3_AUDIOSTREAM3_Val << ASRC_DAPSELR_IN_CH3_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driven by PDMC0. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1. Position */
#define ASRC_DAPSELR_IN_CH3_AUDIOSTREAM4      (ASRC_DAPSELR_IN_CH3_AUDIOSTREAM4_Val << ASRC_DAPSELR_IN_CH3_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driven by PDMC1. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1. Position */
#define ASRC_DAPSELR_IN_CH3_AUDIOSTREAM5      (ASRC_DAPSELR_IN_CH3_AUDIOSTREAM5_Val << ASRC_DAPSELR_IN_CH3_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driven by SSC0 RX. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1. Position */
#define ASRC_DAPSELR_IN_CH3_AUDIOSTREAM6      (ASRC_DAPSELR_IN_CH3_AUDIOSTREAM6_Val << ASRC_DAPSELR_IN_CH3_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driven by SSC1 RX. when ASRC_MR.DATHRx=1 or ASRC_MR.DATHRM=1. Position */
#define ASRC_DAPSELR_OUT_CH0_Pos              _UINT32_(16)                                         /* (ASRC_DAPSELR) Direct Access Channel 0 Output Audio Peripheral Destination Position */
#define ASRC_DAPSELR_OUT_CH0_Msk              (_UINT32_(0x7) << ASRC_DAPSELR_OUT_CH0_Pos)          /* (ASRC_DAPSELR) Direct Access Channel 0 Output Audio Peripheral Destination Mask */
#define ASRC_DAPSELR_OUT_CH0(value)           (ASRC_DAPSELR_OUT_CH0_Msk & (_UINT32_(value) << ASRC_DAPSELR_OUT_CH0_Pos)) /* Assignment of value for OUT_CH0 in the ASRC_DAPSELR register */
#define   ASRC_DAPSELR_OUT_CH0_AUDIOSTREAM0_Val _UINT32_(0x0)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driving the I2SMCC1 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1.  */
#define   ASRC_DAPSELR_OUT_CH0_AUDIOSTREAM1_Val _UINT32_(0x1)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driving the I2SMCC0 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1.  */
#define   ASRC_DAPSELR_OUT_CH0_AUDIOSTREAM2_Val _UINT32_(0x2)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driving the SPDIFTX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1.  */
#define   ASRC_DAPSELR_OUT_CH0_AUDIOSTREAM3_Val _UINT32_(0x3)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driving the SSC0 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1.  */
#define   ASRC_DAPSELR_OUT_CH0_AUDIOSTREAM4_Val _UINT32_(0x4)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driving the SSC1 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1.  */
#define ASRC_DAPSELR_OUT_CH0_AUDIOSTREAM0     (ASRC_DAPSELR_OUT_CH0_AUDIOSTREAM0_Val << ASRC_DAPSELR_OUT_CH0_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driving the I2SMCC1 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1. Position */
#define ASRC_DAPSELR_OUT_CH0_AUDIOSTREAM1     (ASRC_DAPSELR_OUT_CH0_AUDIOSTREAM1_Val << ASRC_DAPSELR_OUT_CH0_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driving the I2SMCC0 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1. Position */
#define ASRC_DAPSELR_OUT_CH0_AUDIOSTREAM2     (ASRC_DAPSELR_OUT_CH0_AUDIOSTREAM2_Val << ASRC_DAPSELR_OUT_CH0_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driving the SPDIFTX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1. Position */
#define ASRC_DAPSELR_OUT_CH0_AUDIOSTREAM3     (ASRC_DAPSELR_OUT_CH0_AUDIOSTREAM3_Val << ASRC_DAPSELR_OUT_CH0_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driving the SSC0 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1. Position */
#define ASRC_DAPSELR_OUT_CH0_AUDIOSTREAM4     (ASRC_DAPSELR_OUT_CH0_AUDIOSTREAM4_Val << ASRC_DAPSELR_OUT_CH0_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driving the SSC1 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1. Position */
#define ASRC_DAPSELR_OUT_CH1_Pos              _UINT32_(20)                                         /* (ASRC_DAPSELR) Direct Access Channel 1 Output Audio Peripheral Destination Position */
#define ASRC_DAPSELR_OUT_CH1_Msk              (_UINT32_(0x7) << ASRC_DAPSELR_OUT_CH1_Pos)          /* (ASRC_DAPSELR) Direct Access Channel 1 Output Audio Peripheral Destination Mask */
#define ASRC_DAPSELR_OUT_CH1(value)           (ASRC_DAPSELR_OUT_CH1_Msk & (_UINT32_(value) << ASRC_DAPSELR_OUT_CH1_Pos)) /* Assignment of value for OUT_CH1 in the ASRC_DAPSELR register */
#define   ASRC_DAPSELR_OUT_CH1_AUDIOSTREAM0_Val _UINT32_(0x0)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driving the I2SMCC1 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1.  */
#define   ASRC_DAPSELR_OUT_CH1_AUDIOSTREAM1_Val _UINT32_(0x1)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driving the I2SMCC0 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1.  */
#define   ASRC_DAPSELR_OUT_CH1_AUDIOSTREAM2_Val _UINT32_(0x2)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driving the SPDIFTX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1.  */
#define   ASRC_DAPSELR_OUT_CH1_AUDIOSTREAM3_Val _UINT32_(0x3)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driving the SSC0 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1.  */
#define   ASRC_DAPSELR_OUT_CH1_AUDIOSTREAM4_Val _UINT32_(0x4)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driving the SSC1 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1.  */
#define ASRC_DAPSELR_OUT_CH1_AUDIOSTREAM0     (ASRC_DAPSELR_OUT_CH1_AUDIOSTREAM0_Val << ASRC_DAPSELR_OUT_CH1_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driving the I2SMCC1 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1. Position */
#define ASRC_DAPSELR_OUT_CH1_AUDIOSTREAM1     (ASRC_DAPSELR_OUT_CH1_AUDIOSTREAM1_Val << ASRC_DAPSELR_OUT_CH1_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driving the I2SMCC0 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1. Position */
#define ASRC_DAPSELR_OUT_CH1_AUDIOSTREAM2     (ASRC_DAPSELR_OUT_CH1_AUDIOSTREAM2_Val << ASRC_DAPSELR_OUT_CH1_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driving the SPDIFTX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1. Position */
#define ASRC_DAPSELR_OUT_CH1_AUDIOSTREAM3     (ASRC_DAPSELR_OUT_CH1_AUDIOSTREAM3_Val << ASRC_DAPSELR_OUT_CH1_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driving the SSC0 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1. Position */
#define ASRC_DAPSELR_OUT_CH1_AUDIOSTREAM4     (ASRC_DAPSELR_OUT_CH1_AUDIOSTREAM4_Val << ASRC_DAPSELR_OUT_CH1_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driving the SSC1 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1. Position */
#define ASRC_DAPSELR_OUT_CH2_Pos              _UINT32_(24)                                         /* (ASRC_DAPSELR) Direct Access Channel 2 Output Audio Peripheral Destination Position */
#define ASRC_DAPSELR_OUT_CH2_Msk              (_UINT32_(0x7) << ASRC_DAPSELR_OUT_CH2_Pos)          /* (ASRC_DAPSELR) Direct Access Channel 2 Output Audio Peripheral Destination Mask */
#define ASRC_DAPSELR_OUT_CH2(value)           (ASRC_DAPSELR_OUT_CH2_Msk & (_UINT32_(value) << ASRC_DAPSELR_OUT_CH2_Pos)) /* Assignment of value for OUT_CH2 in the ASRC_DAPSELR register */
#define   ASRC_DAPSELR_OUT_CH2_AUDIOSTREAM0_Val _UINT32_(0x0)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driving the I2SMCC1 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1.  */
#define   ASRC_DAPSELR_OUT_CH2_AUDIOSTREAM1_Val _UINT32_(0x1)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driving the I2SMCC0 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1.  */
#define   ASRC_DAPSELR_OUT_CH2_AUDIOSTREAM2_Val _UINT32_(0x2)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driving the SPDIFTX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1.  */
#define   ASRC_DAPSELR_OUT_CH2_AUDIOSTREAM3_Val _UINT32_(0x3)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driving the SSC0 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1.  */
#define   ASRC_DAPSELR_OUT_CH2_AUDIOSTREAM4_Val _UINT32_(0x4)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driving the SSC1 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1.  */
#define ASRC_DAPSELR_OUT_CH2_AUDIOSTREAM0     (ASRC_DAPSELR_OUT_CH2_AUDIOSTREAM0_Val << ASRC_DAPSELR_OUT_CH2_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driving the I2SMCC1 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1. Position */
#define ASRC_DAPSELR_OUT_CH2_AUDIOSTREAM1     (ASRC_DAPSELR_OUT_CH2_AUDIOSTREAM1_Val << ASRC_DAPSELR_OUT_CH2_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driving the I2SMCC0 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1. Position */
#define ASRC_DAPSELR_OUT_CH2_AUDIOSTREAM2     (ASRC_DAPSELR_OUT_CH2_AUDIOSTREAM2_Val << ASRC_DAPSELR_OUT_CH2_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driving the SPDIFTX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1. Position */
#define ASRC_DAPSELR_OUT_CH2_AUDIOSTREAM3     (ASRC_DAPSELR_OUT_CH2_AUDIOSTREAM3_Val << ASRC_DAPSELR_OUT_CH2_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driving the SSC0 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1. Position */
#define ASRC_DAPSELR_OUT_CH2_AUDIOSTREAM4     (ASRC_DAPSELR_OUT_CH2_AUDIOSTREAM4_Val << ASRC_DAPSELR_OUT_CH2_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driving the SSC1 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1. Position */
#define ASRC_DAPSELR_OUT_CH3_Pos              _UINT32_(28)                                         /* (ASRC_DAPSELR) Direct Access Channel 3 Output Audio Peripheral Destination Position */
#define ASRC_DAPSELR_OUT_CH3_Msk              (_UINT32_(0x7) << ASRC_DAPSELR_OUT_CH3_Pos)          /* (ASRC_DAPSELR) Direct Access Channel 3 Output Audio Peripheral Destination Mask */
#define ASRC_DAPSELR_OUT_CH3(value)           (ASRC_DAPSELR_OUT_CH3_Msk & (_UINT32_(value) << ASRC_DAPSELR_OUT_CH3_Pos)) /* Assignment of value for OUT_CH3 in the ASRC_DAPSELR register */
#define   ASRC_DAPSELR_OUT_CH3_AUDIOSTREAM0_Val _UINT32_(0x0)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driving the I2SMCC1 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1.  */
#define   ASRC_DAPSELR_OUT_CH3_AUDIOSTREAM1_Val _UINT32_(0x1)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driving the I2SMCC0 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1.  */
#define   ASRC_DAPSELR_OUT_CH3_AUDIOSTREAM2_Val _UINT32_(0x2)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driving the SPDIFTX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1.  */
#define   ASRC_DAPSELR_OUT_CH3_AUDIOSTREAM3_Val _UINT32_(0x3)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driving the SSC0 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1.  */
#define   ASRC_DAPSELR_OUT_CH3_AUDIOSTREAM4_Val _UINT32_(0x4)                                        /* (ASRC_DAPSELR) The direct access channel x is directly driving the SSC1 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1.  */
#define ASRC_DAPSELR_OUT_CH3_AUDIOSTREAM0     (ASRC_DAPSELR_OUT_CH3_AUDIOSTREAM0_Val << ASRC_DAPSELR_OUT_CH3_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driving the I2SMCC1 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1. Position */
#define ASRC_DAPSELR_OUT_CH3_AUDIOSTREAM1     (ASRC_DAPSELR_OUT_CH3_AUDIOSTREAM1_Val << ASRC_DAPSELR_OUT_CH3_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driving the I2SMCC0 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1. Position */
#define ASRC_DAPSELR_OUT_CH3_AUDIOSTREAM2     (ASRC_DAPSELR_OUT_CH3_AUDIOSTREAM2_Val << ASRC_DAPSELR_OUT_CH3_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driving the SPDIFTX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1. Position */
#define ASRC_DAPSELR_OUT_CH3_AUDIOSTREAM3     (ASRC_DAPSELR_OUT_CH3_AUDIOSTREAM3_Val << ASRC_DAPSELR_OUT_CH3_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driving the SSC0 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1. Position */
#define ASRC_DAPSELR_OUT_CH3_AUDIOSTREAM4     (ASRC_DAPSELR_OUT_CH3_AUDIOSTREAM4_Val << ASRC_DAPSELR_OUT_CH3_Pos) /* (ASRC_DAPSELR) The direct access channel x is directly driving the SSC1 TX when ASRC_MR.DARHRx=1 or ASRC_MR.DARHRM=1. Position */
#define ASRC_DAPSELR_Msk                      _UINT32_(0x77777777)                                 /* (ASRC_DAPSELR) Register Mask  */


/* -------- ASRC_DABMR : (ASRC Offset: 0xB8) (R/W 32) Direct Access Bridge Mode Register -------- */
#define ASRC_DABMR_RESETVALUE                 _UINT32_(0x00)                                       /*  (ASRC_DABMR) Direct Access Bridge Mode Register  Reset Value */

#define ASRC_DABMR_BREN0_Pos                  _UINT32_(0)                                          /* (ASRC_DABMR) Direct Access Input/Output Bridging Enable for Channel 0 Position */
#define ASRC_DABMR_BREN0_Msk                  (_UINT32_(0x1) << ASRC_DABMR_BREN0_Pos)              /* (ASRC_DABMR) Direct Access Input/Output Bridging Enable for Channel 0 Mask */
#define ASRC_DABMR_BREN0(value)               (ASRC_DABMR_BREN0_Msk & (_UINT32_(value) << ASRC_DABMR_BREN0_Pos)) /* Assignment of value for BREN0 in the ASRC_DABMR register */
#define   ASRC_DABMR_BREN0_0_Val              _UINT32_(0x0)                                        /* (ASRC_DABMR) Disables the input/output direct bridging capability for direct channel x (data rate conversion is possible for channel x).  */
#define   ASRC_DABMR_BREN0_1_Val              _UINT32_(0x1)                                        /* (ASRC_DABMR) Enables the input/output direct bridging capability for direct channel x (no data rate conversion is performed on channel x ). Any input audio peripheral can drive directly an output audio peripheral. Peripherals are selected via ASRC_DAPSELR. Direct Access mode must be enabled in ASRC_MR.  */
#define ASRC_DABMR_BREN0_0                    (ASRC_DABMR_BREN0_0_Val << ASRC_DABMR_BREN0_Pos)     /* (ASRC_DABMR) Disables the input/output direct bridging capability for direct channel x (data rate conversion is possible for channel x). Position */
#define ASRC_DABMR_BREN0_1                    (ASRC_DABMR_BREN0_1_Val << ASRC_DABMR_BREN0_Pos)     /* (ASRC_DABMR) Enables the input/output direct bridging capability for direct channel x (no data rate conversion is performed on channel x ). Any input audio peripheral can drive directly an output audio peripheral. Peripherals are selected via ASRC_DAPSELR. Direct Access mode must be enabled in ASRC_MR. Position */
#define ASRC_DABMR_BREN1_Pos                  _UINT32_(1)                                          /* (ASRC_DABMR) Direct Access Input/Output Bridging Enable for Channel 1 Position */
#define ASRC_DABMR_BREN1_Msk                  (_UINT32_(0x1) << ASRC_DABMR_BREN1_Pos)              /* (ASRC_DABMR) Direct Access Input/Output Bridging Enable for Channel 1 Mask */
#define ASRC_DABMR_BREN1(value)               (ASRC_DABMR_BREN1_Msk & (_UINT32_(value) << ASRC_DABMR_BREN1_Pos)) /* Assignment of value for BREN1 in the ASRC_DABMR register */
#define   ASRC_DABMR_BREN1_0_Val              _UINT32_(0x0)                                        /* (ASRC_DABMR) Disables the input/output direct bridging capability for direct channel x (data rate conversion is possible for channel x).  */
#define   ASRC_DABMR_BREN1_1_Val              _UINT32_(0x1)                                        /* (ASRC_DABMR) Enables the input/output direct bridging capability for direct channel x (no data rate conversion is performed on channel x ). Any input audio peripheral can drive directly an output audio peripheral. Peripherals are selected via ASRC_DAPSELR. Direct Access mode must be enabled in ASRC_MR.  */
#define ASRC_DABMR_BREN1_0                    (ASRC_DABMR_BREN1_0_Val << ASRC_DABMR_BREN1_Pos)     /* (ASRC_DABMR) Disables the input/output direct bridging capability for direct channel x (data rate conversion is possible for channel x). Position */
#define ASRC_DABMR_BREN1_1                    (ASRC_DABMR_BREN1_1_Val << ASRC_DABMR_BREN1_Pos)     /* (ASRC_DABMR) Enables the input/output direct bridging capability for direct channel x (no data rate conversion is performed on channel x ). Any input audio peripheral can drive directly an output audio peripheral. Peripherals are selected via ASRC_DAPSELR. Direct Access mode must be enabled in ASRC_MR. Position */
#define ASRC_DABMR_BREN2_Pos                  _UINT32_(2)                                          /* (ASRC_DABMR) Direct Access Input/Output Bridging Enable for Channel 2 Position */
#define ASRC_DABMR_BREN2_Msk                  (_UINT32_(0x1) << ASRC_DABMR_BREN2_Pos)              /* (ASRC_DABMR) Direct Access Input/Output Bridging Enable for Channel 2 Mask */
#define ASRC_DABMR_BREN2(value)               (ASRC_DABMR_BREN2_Msk & (_UINT32_(value) << ASRC_DABMR_BREN2_Pos)) /* Assignment of value for BREN2 in the ASRC_DABMR register */
#define   ASRC_DABMR_BREN2_0_Val              _UINT32_(0x0)                                        /* (ASRC_DABMR) Disables the input/output direct bridging capability for direct channel x (data rate conversion is possible for channel x).  */
#define   ASRC_DABMR_BREN2_1_Val              _UINT32_(0x1)                                        /* (ASRC_DABMR) Enables the input/output direct bridging capability for direct channel x (no data rate conversion is performed on channel x ). Any input audio peripheral can drive directly an output audio peripheral. Peripherals are selected via ASRC_DAPSELR. Direct Access mode must be enabled in ASRC_MR.  */
#define ASRC_DABMR_BREN2_0                    (ASRC_DABMR_BREN2_0_Val << ASRC_DABMR_BREN2_Pos)     /* (ASRC_DABMR) Disables the input/output direct bridging capability for direct channel x (data rate conversion is possible for channel x). Position */
#define ASRC_DABMR_BREN2_1                    (ASRC_DABMR_BREN2_1_Val << ASRC_DABMR_BREN2_Pos)     /* (ASRC_DABMR) Enables the input/output direct bridging capability for direct channel x (no data rate conversion is performed on channel x ). Any input audio peripheral can drive directly an output audio peripheral. Peripherals are selected via ASRC_DAPSELR. Direct Access mode must be enabled in ASRC_MR. Position */
#define ASRC_DABMR_BREN3_Pos                  _UINT32_(3)                                          /* (ASRC_DABMR) Direct Access Input/Output Bridging Enable for Channel 3 Position */
#define ASRC_DABMR_BREN3_Msk                  (_UINT32_(0x1) << ASRC_DABMR_BREN3_Pos)              /* (ASRC_DABMR) Direct Access Input/Output Bridging Enable for Channel 3 Mask */
#define ASRC_DABMR_BREN3(value)               (ASRC_DABMR_BREN3_Msk & (_UINT32_(value) << ASRC_DABMR_BREN3_Pos)) /* Assignment of value for BREN3 in the ASRC_DABMR register */
#define   ASRC_DABMR_BREN3_0_Val              _UINT32_(0x0)                                        /* (ASRC_DABMR) Disables the input/output direct bridging capability for direct channel x (data rate conversion is possible for channel x).  */
#define   ASRC_DABMR_BREN3_1_Val              _UINT32_(0x1)                                        /* (ASRC_DABMR) Enables the input/output direct bridging capability for direct channel x (no data rate conversion is performed on channel x ). Any input audio peripheral can drive directly an output audio peripheral. Peripherals are selected via ASRC_DAPSELR. Direct Access mode must be enabled in ASRC_MR.  */
#define ASRC_DABMR_BREN3_0                    (ASRC_DABMR_BREN3_0_Val << ASRC_DABMR_BREN3_Pos)     /* (ASRC_DABMR) Disables the input/output direct bridging capability for direct channel x (data rate conversion is possible for channel x). Position */
#define ASRC_DABMR_BREN3_1                    (ASRC_DABMR_BREN3_1_Val << ASRC_DABMR_BREN3_Pos)     /* (ASRC_DABMR) Enables the input/output direct bridging capability for direct channel x (no data rate conversion is performed on channel x ). Any input audio peripheral can drive directly an output audio peripheral. Peripherals are selected via ASRC_DAPSELR. Direct Access mode must be enabled in ASRC_MR. Position */
#define ASRC_DABMR_BRMONO0_Pos                _UINT32_(8)                                          /* (ASRC_DABMR) Direct Access Input/Output Bridging Mono Transfer for Channel 0 Position */
#define ASRC_DABMR_BRMONO0_Msk                (_UINT32_(0x1) << ASRC_DABMR_BRMONO0_Pos)            /* (ASRC_DABMR) Direct Access Input/Output Bridging Mono Transfer for Channel 0 Mask */
#define ASRC_DABMR_BRMONO0(value)             (ASRC_DABMR_BRMONO0_Msk & (_UINT32_(value) << ASRC_DABMR_BRMONO0_Pos)) /* Assignment of value for BRMONO0 in the ASRC_DABMR register */
#define   ASRC_DABMR_BRMONO0_0_Val            _UINT32_(0x0)                                        /* (ASRC_DABMR) Disables mono audio transfer when the corresponding channel is configured in Bridging mode (BRENx=1).  */
#define   ASRC_DABMR_BRMONO0_1_Val            _UINT32_(0x1)                                        /* (ASRC_DABMR) Enables mono audio transfer when the corresponding channel is configured in Bridging mode (BRENx=1).  */
#define ASRC_DABMR_BRMONO0_0                  (ASRC_DABMR_BRMONO0_0_Val << ASRC_DABMR_BRMONO0_Pos) /* (ASRC_DABMR) Disables mono audio transfer when the corresponding channel is configured in Bridging mode (BRENx=1). Position */
#define ASRC_DABMR_BRMONO0_1                  (ASRC_DABMR_BRMONO0_1_Val << ASRC_DABMR_BRMONO0_Pos) /* (ASRC_DABMR) Enables mono audio transfer when the corresponding channel is configured in Bridging mode (BRENx=1). Position */
#define ASRC_DABMR_BRMONO1_Pos                _UINT32_(9)                                          /* (ASRC_DABMR) Direct Access Input/Output Bridging Mono Transfer for Channel 1 Position */
#define ASRC_DABMR_BRMONO1_Msk                (_UINT32_(0x1) << ASRC_DABMR_BRMONO1_Pos)            /* (ASRC_DABMR) Direct Access Input/Output Bridging Mono Transfer for Channel 1 Mask */
#define ASRC_DABMR_BRMONO1(value)             (ASRC_DABMR_BRMONO1_Msk & (_UINT32_(value) << ASRC_DABMR_BRMONO1_Pos)) /* Assignment of value for BRMONO1 in the ASRC_DABMR register */
#define   ASRC_DABMR_BRMONO1_0_Val            _UINT32_(0x0)                                        /* (ASRC_DABMR) Disables mono audio transfer when the corresponding channel is configured in Bridging mode (BRENx=1).  */
#define   ASRC_DABMR_BRMONO1_1_Val            _UINT32_(0x1)                                        /* (ASRC_DABMR) Enables mono audio transfer when the corresponding channel is configured in Bridging mode (BRENx=1).  */
#define ASRC_DABMR_BRMONO1_0                  (ASRC_DABMR_BRMONO1_0_Val << ASRC_DABMR_BRMONO1_Pos) /* (ASRC_DABMR) Disables mono audio transfer when the corresponding channel is configured in Bridging mode (BRENx=1). Position */
#define ASRC_DABMR_BRMONO1_1                  (ASRC_DABMR_BRMONO1_1_Val << ASRC_DABMR_BRMONO1_Pos) /* (ASRC_DABMR) Enables mono audio transfer when the corresponding channel is configured in Bridging mode (BRENx=1). Position */
#define ASRC_DABMR_BRMONO2_Pos                _UINT32_(10)                                         /* (ASRC_DABMR) Direct Access Input/Output Bridging Mono Transfer for Channel 2 Position */
#define ASRC_DABMR_BRMONO2_Msk                (_UINT32_(0x1) << ASRC_DABMR_BRMONO2_Pos)            /* (ASRC_DABMR) Direct Access Input/Output Bridging Mono Transfer for Channel 2 Mask */
#define ASRC_DABMR_BRMONO2(value)             (ASRC_DABMR_BRMONO2_Msk & (_UINT32_(value) << ASRC_DABMR_BRMONO2_Pos)) /* Assignment of value for BRMONO2 in the ASRC_DABMR register */
#define   ASRC_DABMR_BRMONO2_0_Val            _UINT32_(0x0)                                        /* (ASRC_DABMR) Disables mono audio transfer when the corresponding channel is configured in Bridging mode (BRENx=1).  */
#define   ASRC_DABMR_BRMONO2_1_Val            _UINT32_(0x1)                                        /* (ASRC_DABMR) Enables mono audio transfer when the corresponding channel is configured in Bridging mode (BRENx=1).  */
#define ASRC_DABMR_BRMONO2_0                  (ASRC_DABMR_BRMONO2_0_Val << ASRC_DABMR_BRMONO2_Pos) /* (ASRC_DABMR) Disables mono audio transfer when the corresponding channel is configured in Bridging mode (BRENx=1). Position */
#define ASRC_DABMR_BRMONO2_1                  (ASRC_DABMR_BRMONO2_1_Val << ASRC_DABMR_BRMONO2_Pos) /* (ASRC_DABMR) Enables mono audio transfer when the corresponding channel is configured in Bridging mode (BRENx=1). Position */
#define ASRC_DABMR_BRMONO3_Pos                _UINT32_(11)                                         /* (ASRC_DABMR) Direct Access Input/Output Bridging Mono Transfer for Channel 3 Position */
#define ASRC_DABMR_BRMONO3_Msk                (_UINT32_(0x1) << ASRC_DABMR_BRMONO3_Pos)            /* (ASRC_DABMR) Direct Access Input/Output Bridging Mono Transfer for Channel 3 Mask */
#define ASRC_DABMR_BRMONO3(value)             (ASRC_DABMR_BRMONO3_Msk & (_UINT32_(value) << ASRC_DABMR_BRMONO3_Pos)) /* Assignment of value for BRMONO3 in the ASRC_DABMR register */
#define   ASRC_DABMR_BRMONO3_0_Val            _UINT32_(0x0)                                        /* (ASRC_DABMR) Disables mono audio transfer when the corresponding channel is configured in Bridging mode (BRENx=1).  */
#define   ASRC_DABMR_BRMONO3_1_Val            _UINT32_(0x1)                                        /* (ASRC_DABMR) Enables mono audio transfer when the corresponding channel is configured in Bridging mode (BRENx=1).  */
#define ASRC_DABMR_BRMONO3_0                  (ASRC_DABMR_BRMONO3_0_Val << ASRC_DABMR_BRMONO3_Pos) /* (ASRC_DABMR) Disables mono audio transfer when the corresponding channel is configured in Bridging mode (BRENx=1). Position */
#define ASRC_DABMR_BRMONO3_1                  (ASRC_DABMR_BRMONO3_1_Val << ASRC_DABMR_BRMONO3_Pos) /* (ASRC_DABMR) Enables mono audio transfer when the corresponding channel is configured in Bridging mode (BRENx=1). Position */
#define ASRC_DABMR_Msk                        _UINT32_(0x00000F0F)                                 /* (ASRC_DABMR) Register Mask  */

#define ASRC_DABMR_BREN_Pos                   _UINT32_(0)                                          /* (ASRC_DABMR Position) Direct Access Input/Output Bridging Enable for Channel x */
#define ASRC_DABMR_BREN_Msk                   (_UINT32_(0xF) << ASRC_DABMR_BREN_Pos)               /* (ASRC_DABMR Mask) BREN */
#define ASRC_DABMR_BREN(value)                (ASRC_DABMR_BREN_Msk & (_UINT32_(value) << ASRC_DABMR_BREN_Pos)) 
#define ASRC_DABMR_BRMONO_Pos                 _UINT32_(8)                                          /* (ASRC_DABMR Position) Direct Access Input/Output Bridging Mono Transfer for Channel 3 */
#define ASRC_DABMR_BRMONO_Msk                 (_UINT32_(0xF) << ASRC_DABMR_BRMONO_Pos)             /* (ASRC_DABMR Mask) BRMONO */
#define ASRC_DABMR_BRMONO(value)              (ASRC_DABMR_BRMONO_Msk & (_UINT32_(value) << ASRC_DABMR_BRMONO_Pos)) 

/* -------- ASRC_SR : (ASRC Offset: 0xBC) ( R/ 32) Status Register -------- */
#define ASRC_SR_RESETVALUE                    _UINT32_(0x2020202)                                  /*  (ASRC_SR) Status Register  Reset Value */

#define ASRC_SR_FIFOFULL0_Pos                 _UINT32_(0)                                          /* (ASRC_SR) DSPx FIFO Full Position */
#define ASRC_SR_FIFOFULL0_Msk                 (_UINT32_(0x1) << ASRC_SR_FIFOFULL0_Pos)             /* (ASRC_SR) DSPx FIFO Full Mask */
#define ASRC_SR_FIFOFULL0(value)              (ASRC_SR_FIFOFULL0_Msk & (_UINT32_(value) << ASRC_SR_FIFOFULL0_Pos)) /* Assignment of value for FIFOFULL0 in the ASRC_SR register */
#define   ASRC_SR_FIFOFULL0_0_Val             _UINT32_(0x0)                                        /* (ASRC_SR) DSPx FIFO is not full.  */
#define   ASRC_SR_FIFOFULL0_1_Val             _UINT32_(0x1)                                        /* (ASRC_SR) DSPx FIFO is full.  */
#define ASRC_SR_FIFOFULL0_0                   (ASRC_SR_FIFOFULL0_0_Val << ASRC_SR_FIFOFULL0_Pos)   /* (ASRC_SR) DSPx FIFO is not full. Position */
#define ASRC_SR_FIFOFULL0_1                   (ASRC_SR_FIFOFULL0_1_Val << ASRC_SR_FIFOFULL0_Pos)   /* (ASRC_SR) DSPx FIFO is full. Position */
#define ASRC_SR_FIFOEMPTY0_Pos                _UINT32_(1)                                          /* (ASRC_SR) DSPx FIFO Empty Position */
#define ASRC_SR_FIFOEMPTY0_Msk                (_UINT32_(0x1) << ASRC_SR_FIFOEMPTY0_Pos)            /* (ASRC_SR) DSPx FIFO Empty Mask */
#define ASRC_SR_FIFOEMPTY0(value)             (ASRC_SR_FIFOEMPTY0_Msk & (_UINT32_(value) << ASRC_SR_FIFOEMPTY0_Pos)) /* Assignment of value for FIFOEMPTY0 in the ASRC_SR register */
#define   ASRC_SR_FIFOEMPTY0_0_Val            _UINT32_(0x0)                                        /* (ASRC_SR) DSPx FIFO is not empty.  */
#define   ASRC_SR_FIFOEMPTY0_1_Val            _UINT32_(0x1)                                        /* (ASRC_SR) DSPx FIFO is empty.  */
#define ASRC_SR_FIFOEMPTY0_0                  (ASRC_SR_FIFOEMPTY0_0_Val << ASRC_SR_FIFOEMPTY0_Pos) /* (ASRC_SR) DSPx FIFO is not empty. Position */
#define ASRC_SR_FIFOEMPTY0_1                  (ASRC_SR_FIFOEMPTY0_1_Val << ASRC_SR_FIFOEMPTY0_Pos) /* (ASRC_SR) DSPx FIFO is empty. Position */
#define ASRC_SR_DPLL0_Pos                     _UINT32_(2)                                          /* (ASRC_SR) DSPx Digital PLL Status Position */
#define ASRC_SR_DPLL0_Msk                     (_UINT32_(0x1) << ASRC_SR_DPLL0_Pos)                 /* (ASRC_SR) DSPx Digital PLL Status Mask */
#define ASRC_SR_DPLL0(value)                  (ASRC_SR_DPLL0_Msk & (_UINT32_(value) << ASRC_SR_DPLL0_Pos)) /* Assignment of value for DPLL0 in the ASRC_SR register */
#define   ASRC_SR_DPLL0_UNLOCKED_Val          _UINT32_(0x0)                                        /* (ASRC_SR) DSPx Digital PLL is unlocked.  */
#define   ASRC_SR_DPLL0_LOCKED_Val            _UINT32_(0x1)                                        /* (ASRC_SR) DSPx Digital PLL is locked.  */
#define ASRC_SR_DPLL0_UNLOCKED                (ASRC_SR_DPLL0_UNLOCKED_Val << ASRC_SR_DPLL0_Pos)    /* (ASRC_SR) DSPx Digital PLL is unlocked. Position */
#define ASRC_SR_DPLL0_LOCKED                  (ASRC_SR_DPLL0_LOCKED_Val << ASRC_SR_DPLL0_Pos)      /* (ASRC_SR) DSPx Digital PLL is locked. Position */
#define ASRC_SR_FSINERR0_Pos                  _UINT32_(3)                                          /* (ASRC_SR) DSPx Input Sampling Frequency Status Position */
#define ASRC_SR_FSINERR0_Msk                  (_UINT32_(0x1) << ASRC_SR_FSINERR0_Pos)              /* (ASRC_SR) DSPx Input Sampling Frequency Status Mask */
#define ASRC_SR_FSINERR0(value)               (ASRC_SR_FSINERR0_Msk & (_UINT32_(value) << ASRC_SR_FSINERR0_Pos)) /* Assignment of value for FSINERR0 in the ASRC_SR register */
#define   ASRC_SR_FSINERR0_0_Val              _UINT32_(0x0)                                        /* (ASRC_SR) DSPx input sampling frequency is correct.  */
#define   ASRC_SR_FSINERR0_1_Val              _UINT32_(0x1)                                        /* (ASRC_SR) DSPx input sampling frequency is abnormal (loss or deviation greater than 4 times the initial value registered when the conversion has been enabled).  */
#define ASRC_SR_FSINERR0_0                    (ASRC_SR_FSINERR0_0_Val << ASRC_SR_FSINERR0_Pos)     /* (ASRC_SR) DSPx input sampling frequency is correct. Position */
#define ASRC_SR_FSINERR0_1                    (ASRC_SR_FSINERR0_1_Val << ASRC_SR_FSINERR0_Pos)     /* (ASRC_SR) DSPx input sampling frequency is abnormal (loss or deviation greater than 4 times the initial value registered when the conversion has been enabled). Position */
#define ASRC_SR_FSOUTERR0_Pos                 _UINT32_(4)                                          /* (ASRC_SR) DSPx Output Sampling Frequency Status Position */
#define ASRC_SR_FSOUTERR0_Msk                 (_UINT32_(0x1) << ASRC_SR_FSOUTERR0_Pos)             /* (ASRC_SR) DSPx Output Sampling Frequency Status Mask */
#define ASRC_SR_FSOUTERR0(value)              (ASRC_SR_FSOUTERR0_Msk & (_UINT32_(value) << ASRC_SR_FSOUTERR0_Pos)) /* Assignment of value for FSOUTERR0 in the ASRC_SR register */
#define   ASRC_SR_FSOUTERR0_0_Val             _UINT32_(0x0)                                        /* (ASRC_SR) DSPx output sampling frequency is correct.  */
#define   ASRC_SR_FSOUTERR0_1_Val             _UINT32_(0x1)                                        /* (ASRC_SR) DSPx output sampling frequency is abnormal (loss or deviation greater than 4 times the initial value registered when the conversion has been enabled).  */
#define ASRC_SR_FSOUTERR0_0                   (ASRC_SR_FSOUTERR0_0_Val << ASRC_SR_FSOUTERR0_Pos)   /* (ASRC_SR) DSPx output sampling frequency is correct. Position */
#define ASRC_SR_FSOUTERR0_1                   (ASRC_SR_FSOUTERR0_1_Val << ASRC_SR_FSOUTERR0_Pos)   /* (ASRC_SR) DSPx output sampling frequency is abnormal (loss or deviation greater than 4 times the initial value registered when the conversion has been enabled). Position */
#define ASRC_SR_FIFOFULL1_Pos                 _UINT32_(8)                                          /* (ASRC_SR) DSPx FIFO Full Position */
#define ASRC_SR_FIFOFULL1_Msk                 (_UINT32_(0x1) << ASRC_SR_FIFOFULL1_Pos)             /* (ASRC_SR) DSPx FIFO Full Mask */
#define ASRC_SR_FIFOFULL1(value)              (ASRC_SR_FIFOFULL1_Msk & (_UINT32_(value) << ASRC_SR_FIFOFULL1_Pos)) /* Assignment of value for FIFOFULL1 in the ASRC_SR register */
#define   ASRC_SR_FIFOFULL1_0_Val             _UINT32_(0x0)                                        /* (ASRC_SR) DSPx FIFO is not full.  */
#define   ASRC_SR_FIFOFULL1_1_Val             _UINT32_(0x1)                                        /* (ASRC_SR) DSPx FIFO is full.  */
#define ASRC_SR_FIFOFULL1_0                   (ASRC_SR_FIFOFULL1_0_Val << ASRC_SR_FIFOFULL1_Pos)   /* (ASRC_SR) DSPx FIFO is not full. Position */
#define ASRC_SR_FIFOFULL1_1                   (ASRC_SR_FIFOFULL1_1_Val << ASRC_SR_FIFOFULL1_Pos)   /* (ASRC_SR) DSPx FIFO is full. Position */
#define ASRC_SR_FIFOEMPTY1_Pos                _UINT32_(9)                                          /* (ASRC_SR) DSPx FIFO Empty Position */
#define ASRC_SR_FIFOEMPTY1_Msk                (_UINT32_(0x1) << ASRC_SR_FIFOEMPTY1_Pos)            /* (ASRC_SR) DSPx FIFO Empty Mask */
#define ASRC_SR_FIFOEMPTY1(value)             (ASRC_SR_FIFOEMPTY1_Msk & (_UINT32_(value) << ASRC_SR_FIFOEMPTY1_Pos)) /* Assignment of value for FIFOEMPTY1 in the ASRC_SR register */
#define   ASRC_SR_FIFOEMPTY1_0_Val            _UINT32_(0x0)                                        /* (ASRC_SR) DSPx FIFO is not empty.  */
#define   ASRC_SR_FIFOEMPTY1_1_Val            _UINT32_(0x1)                                        /* (ASRC_SR) DSPx FIFO is empty.  */
#define ASRC_SR_FIFOEMPTY1_0                  (ASRC_SR_FIFOEMPTY1_0_Val << ASRC_SR_FIFOEMPTY1_Pos) /* (ASRC_SR) DSPx FIFO is not empty. Position */
#define ASRC_SR_FIFOEMPTY1_1                  (ASRC_SR_FIFOEMPTY1_1_Val << ASRC_SR_FIFOEMPTY1_Pos) /* (ASRC_SR) DSPx FIFO is empty. Position */
#define ASRC_SR_DPLL1_Pos                     _UINT32_(10)                                         /* (ASRC_SR) DSPx Digital PLL Status Position */
#define ASRC_SR_DPLL1_Msk                     (_UINT32_(0x1) << ASRC_SR_DPLL1_Pos)                 /* (ASRC_SR) DSPx Digital PLL Status Mask */
#define ASRC_SR_DPLL1(value)                  (ASRC_SR_DPLL1_Msk & (_UINT32_(value) << ASRC_SR_DPLL1_Pos)) /* Assignment of value for DPLL1 in the ASRC_SR register */
#define   ASRC_SR_DPLL1_UNLOCKED_Val          _UINT32_(0x0)                                        /* (ASRC_SR) DSPx Digital PLL is unlocked.  */
#define   ASRC_SR_DPLL1_LOCKED_Val            _UINT32_(0x1)                                        /* (ASRC_SR) DSPx Digital PLL is locked.  */
#define ASRC_SR_DPLL1_UNLOCKED                (ASRC_SR_DPLL1_UNLOCKED_Val << ASRC_SR_DPLL1_Pos)    /* (ASRC_SR) DSPx Digital PLL is unlocked. Position */
#define ASRC_SR_DPLL1_LOCKED                  (ASRC_SR_DPLL1_LOCKED_Val << ASRC_SR_DPLL1_Pos)      /* (ASRC_SR) DSPx Digital PLL is locked. Position */
#define ASRC_SR_FSINERR1_Pos                  _UINT32_(11)                                         /* (ASRC_SR) DSPx Input Sampling Frequency Status Position */
#define ASRC_SR_FSINERR1_Msk                  (_UINT32_(0x1) << ASRC_SR_FSINERR1_Pos)              /* (ASRC_SR) DSPx Input Sampling Frequency Status Mask */
#define ASRC_SR_FSINERR1(value)               (ASRC_SR_FSINERR1_Msk & (_UINT32_(value) << ASRC_SR_FSINERR1_Pos)) /* Assignment of value for FSINERR1 in the ASRC_SR register */
#define   ASRC_SR_FSINERR1_0_Val              _UINT32_(0x0)                                        /* (ASRC_SR) DSPx input sampling frequency is correct.  */
#define   ASRC_SR_FSINERR1_1_Val              _UINT32_(0x1)                                        /* (ASRC_SR) DSPx input sampling frequency is abnormal (loss or deviation greater than 4 times the initial value registered when the conversion has been enabled).  */
#define ASRC_SR_FSINERR1_0                    (ASRC_SR_FSINERR1_0_Val << ASRC_SR_FSINERR1_Pos)     /* (ASRC_SR) DSPx input sampling frequency is correct. Position */
#define ASRC_SR_FSINERR1_1                    (ASRC_SR_FSINERR1_1_Val << ASRC_SR_FSINERR1_Pos)     /* (ASRC_SR) DSPx input sampling frequency is abnormal (loss or deviation greater than 4 times the initial value registered when the conversion has been enabled). Position */
#define ASRC_SR_FSOUTERR1_Pos                 _UINT32_(12)                                         /* (ASRC_SR) DSPx Output Sampling Frequency Status Position */
#define ASRC_SR_FSOUTERR1_Msk                 (_UINT32_(0x1) << ASRC_SR_FSOUTERR1_Pos)             /* (ASRC_SR) DSPx Output Sampling Frequency Status Mask */
#define ASRC_SR_FSOUTERR1(value)              (ASRC_SR_FSOUTERR1_Msk & (_UINT32_(value) << ASRC_SR_FSOUTERR1_Pos)) /* Assignment of value for FSOUTERR1 in the ASRC_SR register */
#define   ASRC_SR_FSOUTERR1_0_Val             _UINT32_(0x0)                                        /* (ASRC_SR) DSPx output sampling frequency is correct.  */
#define   ASRC_SR_FSOUTERR1_1_Val             _UINT32_(0x1)                                        /* (ASRC_SR) DSPx output sampling frequency is abnormal (loss or deviation greater than 4 times the initial value registered when the conversion has been enabled).  */
#define ASRC_SR_FSOUTERR1_0                   (ASRC_SR_FSOUTERR1_0_Val << ASRC_SR_FSOUTERR1_Pos)   /* (ASRC_SR) DSPx output sampling frequency is correct. Position */
#define ASRC_SR_FSOUTERR1_1                   (ASRC_SR_FSOUTERR1_1_Val << ASRC_SR_FSOUTERR1_Pos)   /* (ASRC_SR) DSPx output sampling frequency is abnormal (loss or deviation greater than 4 times the initial value registered when the conversion has been enabled). Position */
#define ASRC_SR_FIFOFULL2_Pos                 _UINT32_(16)                                         /* (ASRC_SR) DSPx FIFO Full Position */
#define ASRC_SR_FIFOFULL2_Msk                 (_UINT32_(0x1) << ASRC_SR_FIFOFULL2_Pos)             /* (ASRC_SR) DSPx FIFO Full Mask */
#define ASRC_SR_FIFOFULL2(value)              (ASRC_SR_FIFOFULL2_Msk & (_UINT32_(value) << ASRC_SR_FIFOFULL2_Pos)) /* Assignment of value for FIFOFULL2 in the ASRC_SR register */
#define   ASRC_SR_FIFOFULL2_0_Val             _UINT32_(0x0)                                        /* (ASRC_SR) DSPx FIFO is not full.  */
#define   ASRC_SR_FIFOFULL2_1_Val             _UINT32_(0x1)                                        /* (ASRC_SR) DSPx FIFO is full.  */
#define ASRC_SR_FIFOFULL2_0                   (ASRC_SR_FIFOFULL2_0_Val << ASRC_SR_FIFOFULL2_Pos)   /* (ASRC_SR) DSPx FIFO is not full. Position */
#define ASRC_SR_FIFOFULL2_1                   (ASRC_SR_FIFOFULL2_1_Val << ASRC_SR_FIFOFULL2_Pos)   /* (ASRC_SR) DSPx FIFO is full. Position */
#define ASRC_SR_FIFOEMPTY2_Pos                _UINT32_(17)                                         /* (ASRC_SR) DSPx FIFO Empty Position */
#define ASRC_SR_FIFOEMPTY2_Msk                (_UINT32_(0x1) << ASRC_SR_FIFOEMPTY2_Pos)            /* (ASRC_SR) DSPx FIFO Empty Mask */
#define ASRC_SR_FIFOEMPTY2(value)             (ASRC_SR_FIFOEMPTY2_Msk & (_UINT32_(value) << ASRC_SR_FIFOEMPTY2_Pos)) /* Assignment of value for FIFOEMPTY2 in the ASRC_SR register */
#define   ASRC_SR_FIFOEMPTY2_0_Val            _UINT32_(0x0)                                        /* (ASRC_SR) DSPx FIFO is not empty.  */
#define   ASRC_SR_FIFOEMPTY2_1_Val            _UINT32_(0x1)                                        /* (ASRC_SR) DSPx FIFO is empty.  */
#define ASRC_SR_FIFOEMPTY2_0                  (ASRC_SR_FIFOEMPTY2_0_Val << ASRC_SR_FIFOEMPTY2_Pos) /* (ASRC_SR) DSPx FIFO is not empty. Position */
#define ASRC_SR_FIFOEMPTY2_1                  (ASRC_SR_FIFOEMPTY2_1_Val << ASRC_SR_FIFOEMPTY2_Pos) /* (ASRC_SR) DSPx FIFO is empty. Position */
#define ASRC_SR_DPLL2_Pos                     _UINT32_(18)                                         /* (ASRC_SR) DSPx Digital PLL Status Position */
#define ASRC_SR_DPLL2_Msk                     (_UINT32_(0x1) << ASRC_SR_DPLL2_Pos)                 /* (ASRC_SR) DSPx Digital PLL Status Mask */
#define ASRC_SR_DPLL2(value)                  (ASRC_SR_DPLL2_Msk & (_UINT32_(value) << ASRC_SR_DPLL2_Pos)) /* Assignment of value for DPLL2 in the ASRC_SR register */
#define   ASRC_SR_DPLL2_UNLOCKED_Val          _UINT32_(0x0)                                        /* (ASRC_SR) DSPx Digital PLL is unlocked.  */
#define   ASRC_SR_DPLL2_LOCKED_Val            _UINT32_(0x1)                                        /* (ASRC_SR) DSPx Digital PLL is locked.  */
#define ASRC_SR_DPLL2_UNLOCKED                (ASRC_SR_DPLL2_UNLOCKED_Val << ASRC_SR_DPLL2_Pos)    /* (ASRC_SR) DSPx Digital PLL is unlocked. Position */
#define ASRC_SR_DPLL2_LOCKED                  (ASRC_SR_DPLL2_LOCKED_Val << ASRC_SR_DPLL2_Pos)      /* (ASRC_SR) DSPx Digital PLL is locked. Position */
#define ASRC_SR_FSINERR2_Pos                  _UINT32_(19)                                         /* (ASRC_SR) DSPx Input Sampling Frequency Status Position */
#define ASRC_SR_FSINERR2_Msk                  (_UINT32_(0x1) << ASRC_SR_FSINERR2_Pos)              /* (ASRC_SR) DSPx Input Sampling Frequency Status Mask */
#define ASRC_SR_FSINERR2(value)               (ASRC_SR_FSINERR2_Msk & (_UINT32_(value) << ASRC_SR_FSINERR2_Pos)) /* Assignment of value for FSINERR2 in the ASRC_SR register */
#define   ASRC_SR_FSINERR2_0_Val              _UINT32_(0x0)                                        /* (ASRC_SR) DSPx input sampling frequency is correct.  */
#define   ASRC_SR_FSINERR2_1_Val              _UINT32_(0x1)                                        /* (ASRC_SR) DSPx input sampling frequency is abnormal (loss or deviation greater than 4 times the initial value registered when the conversion has been enabled).  */
#define ASRC_SR_FSINERR2_0                    (ASRC_SR_FSINERR2_0_Val << ASRC_SR_FSINERR2_Pos)     /* (ASRC_SR) DSPx input sampling frequency is correct. Position */
#define ASRC_SR_FSINERR2_1                    (ASRC_SR_FSINERR2_1_Val << ASRC_SR_FSINERR2_Pos)     /* (ASRC_SR) DSPx input sampling frequency is abnormal (loss or deviation greater than 4 times the initial value registered when the conversion has been enabled). Position */
#define ASRC_SR_FSOUTERR2_Pos                 _UINT32_(20)                                         /* (ASRC_SR) DSPx Output Sampling Frequency Status Position */
#define ASRC_SR_FSOUTERR2_Msk                 (_UINT32_(0x1) << ASRC_SR_FSOUTERR2_Pos)             /* (ASRC_SR) DSPx Output Sampling Frequency Status Mask */
#define ASRC_SR_FSOUTERR2(value)              (ASRC_SR_FSOUTERR2_Msk & (_UINT32_(value) << ASRC_SR_FSOUTERR2_Pos)) /* Assignment of value for FSOUTERR2 in the ASRC_SR register */
#define   ASRC_SR_FSOUTERR2_0_Val             _UINT32_(0x0)                                        /* (ASRC_SR) DSPx output sampling frequency is correct.  */
#define   ASRC_SR_FSOUTERR2_1_Val             _UINT32_(0x1)                                        /* (ASRC_SR) DSPx output sampling frequency is abnormal (loss or deviation greater than 4 times the initial value registered when the conversion has been enabled).  */
#define ASRC_SR_FSOUTERR2_0                   (ASRC_SR_FSOUTERR2_0_Val << ASRC_SR_FSOUTERR2_Pos)   /* (ASRC_SR) DSPx output sampling frequency is correct. Position */
#define ASRC_SR_FSOUTERR2_1                   (ASRC_SR_FSOUTERR2_1_Val << ASRC_SR_FSOUTERR2_Pos)   /* (ASRC_SR) DSPx output sampling frequency is abnormal (loss or deviation greater than 4 times the initial value registered when the conversion has been enabled). Position */
#define ASRC_SR_FIFOFULL3_Pos                 _UINT32_(24)                                         /* (ASRC_SR) DSPx FIFO Full Position */
#define ASRC_SR_FIFOFULL3_Msk                 (_UINT32_(0x1) << ASRC_SR_FIFOFULL3_Pos)             /* (ASRC_SR) DSPx FIFO Full Mask */
#define ASRC_SR_FIFOFULL3(value)              (ASRC_SR_FIFOFULL3_Msk & (_UINT32_(value) << ASRC_SR_FIFOFULL3_Pos)) /* Assignment of value for FIFOFULL3 in the ASRC_SR register */
#define   ASRC_SR_FIFOFULL3_0_Val             _UINT32_(0x0)                                        /* (ASRC_SR) DSPx FIFO is not full.  */
#define   ASRC_SR_FIFOFULL3_1_Val             _UINT32_(0x1)                                        /* (ASRC_SR) DSPx FIFO is full.  */
#define ASRC_SR_FIFOFULL3_0                   (ASRC_SR_FIFOFULL3_0_Val << ASRC_SR_FIFOFULL3_Pos)   /* (ASRC_SR) DSPx FIFO is not full. Position */
#define ASRC_SR_FIFOFULL3_1                   (ASRC_SR_FIFOFULL3_1_Val << ASRC_SR_FIFOFULL3_Pos)   /* (ASRC_SR) DSPx FIFO is full. Position */
#define ASRC_SR_FIFOEMPTY3_Pos                _UINT32_(25)                                         /* (ASRC_SR) DSPx FIFO Empty Position */
#define ASRC_SR_FIFOEMPTY3_Msk                (_UINT32_(0x1) << ASRC_SR_FIFOEMPTY3_Pos)            /* (ASRC_SR) DSPx FIFO Empty Mask */
#define ASRC_SR_FIFOEMPTY3(value)             (ASRC_SR_FIFOEMPTY3_Msk & (_UINT32_(value) << ASRC_SR_FIFOEMPTY3_Pos)) /* Assignment of value for FIFOEMPTY3 in the ASRC_SR register */
#define   ASRC_SR_FIFOEMPTY3_0_Val            _UINT32_(0x0)                                        /* (ASRC_SR) DSPx FIFO is not empty.  */
#define   ASRC_SR_FIFOEMPTY3_1_Val            _UINT32_(0x1)                                        /* (ASRC_SR) DSPx FIFO is empty.  */
#define ASRC_SR_FIFOEMPTY3_0                  (ASRC_SR_FIFOEMPTY3_0_Val << ASRC_SR_FIFOEMPTY3_Pos) /* (ASRC_SR) DSPx FIFO is not empty. Position */
#define ASRC_SR_FIFOEMPTY3_1                  (ASRC_SR_FIFOEMPTY3_1_Val << ASRC_SR_FIFOEMPTY3_Pos) /* (ASRC_SR) DSPx FIFO is empty. Position */
#define ASRC_SR_DPLL3_Pos                     _UINT32_(26)                                         /* (ASRC_SR) DSPx Digital PLL Status Position */
#define ASRC_SR_DPLL3_Msk                     (_UINT32_(0x1) << ASRC_SR_DPLL3_Pos)                 /* (ASRC_SR) DSPx Digital PLL Status Mask */
#define ASRC_SR_DPLL3(value)                  (ASRC_SR_DPLL3_Msk & (_UINT32_(value) << ASRC_SR_DPLL3_Pos)) /* Assignment of value for DPLL3 in the ASRC_SR register */
#define   ASRC_SR_DPLL3_UNLOCKED_Val          _UINT32_(0x0)                                        /* (ASRC_SR) DSPx Digital PLL is unlocked.  */
#define   ASRC_SR_DPLL3_LOCKED_Val            _UINT32_(0x1)                                        /* (ASRC_SR) DSPx Digital PLL is locked.  */
#define ASRC_SR_DPLL3_UNLOCKED                (ASRC_SR_DPLL3_UNLOCKED_Val << ASRC_SR_DPLL3_Pos)    /* (ASRC_SR) DSPx Digital PLL is unlocked. Position */
#define ASRC_SR_DPLL3_LOCKED                  (ASRC_SR_DPLL3_LOCKED_Val << ASRC_SR_DPLL3_Pos)      /* (ASRC_SR) DSPx Digital PLL is locked. Position */
#define ASRC_SR_FSINERR3_Pos                  _UINT32_(27)                                         /* (ASRC_SR) DSPx Input Sampling Frequency Status Position */
#define ASRC_SR_FSINERR3_Msk                  (_UINT32_(0x1) << ASRC_SR_FSINERR3_Pos)              /* (ASRC_SR) DSPx Input Sampling Frequency Status Mask */
#define ASRC_SR_FSINERR3(value)               (ASRC_SR_FSINERR3_Msk & (_UINT32_(value) << ASRC_SR_FSINERR3_Pos)) /* Assignment of value for FSINERR3 in the ASRC_SR register */
#define   ASRC_SR_FSINERR3_0_Val              _UINT32_(0x0)                                        /* (ASRC_SR) DSPx input sampling frequency is correct.  */
#define   ASRC_SR_FSINERR3_1_Val              _UINT32_(0x1)                                        /* (ASRC_SR) DSPx input sampling frequency is abnormal (loss or deviation greater than 4 times the initial value registered when the conversion has been enabled).  */
#define ASRC_SR_FSINERR3_0                    (ASRC_SR_FSINERR3_0_Val << ASRC_SR_FSINERR3_Pos)     /* (ASRC_SR) DSPx input sampling frequency is correct. Position */
#define ASRC_SR_FSINERR3_1                    (ASRC_SR_FSINERR3_1_Val << ASRC_SR_FSINERR3_Pos)     /* (ASRC_SR) DSPx input sampling frequency is abnormal (loss or deviation greater than 4 times the initial value registered when the conversion has been enabled). Position */
#define ASRC_SR_FSOUTERR3_Pos                 _UINT32_(28)                                         /* (ASRC_SR) DSPx Output Sampling Frequency Status Position */
#define ASRC_SR_FSOUTERR3_Msk                 (_UINT32_(0x1) << ASRC_SR_FSOUTERR3_Pos)             /* (ASRC_SR) DSPx Output Sampling Frequency Status Mask */
#define ASRC_SR_FSOUTERR3(value)              (ASRC_SR_FSOUTERR3_Msk & (_UINT32_(value) << ASRC_SR_FSOUTERR3_Pos)) /* Assignment of value for FSOUTERR3 in the ASRC_SR register */
#define   ASRC_SR_FSOUTERR3_0_Val             _UINT32_(0x0)                                        /* (ASRC_SR) DSPx output sampling frequency is correct.  */
#define   ASRC_SR_FSOUTERR3_1_Val             _UINT32_(0x1)                                        /* (ASRC_SR) DSPx output sampling frequency is abnormal (loss or deviation greater than 4 times the initial value registered when the conversion has been enabled).  */
#define ASRC_SR_FSOUTERR3_0                   (ASRC_SR_FSOUTERR3_0_Val << ASRC_SR_FSOUTERR3_Pos)   /* (ASRC_SR) DSPx output sampling frequency is correct. Position */
#define ASRC_SR_FSOUTERR3_1                   (ASRC_SR_FSOUTERR3_1_Val << ASRC_SR_FSOUTERR3_Pos)   /* (ASRC_SR) DSPx output sampling frequency is abnormal (loss or deviation greater than 4 times the initial value registered when the conversion has been enabled). Position */
#define ASRC_SR_Msk                           _UINT32_(0x1F1F1F1F)                                 /* (ASRC_SR) Register Mask  */


/* -------- ASRC_WPMR : (ASRC Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define ASRC_WPMR_RESETVALUE                  _UINT32_(0x00)                                       /*  (ASRC_WPMR) Write Protection Mode Register  Reset Value */

#define ASRC_WPMR_WPEN_Pos                    _UINT32_(0)                                          /* (ASRC_WPMR) Write Protection Enable Position */
#define ASRC_WPMR_WPEN_Msk                    (_UINT32_(0x1) << ASRC_WPMR_WPEN_Pos)                /* (ASRC_WPMR) Write Protection Enable Mask */
#define ASRC_WPMR_WPEN(value)                 (ASRC_WPMR_WPEN_Msk & (_UINT32_(value) << ASRC_WPMR_WPEN_Pos)) /* Assignment of value for WPEN in the ASRC_WPMR register */
#define   ASRC_WPMR_WPEN_0_Val                _UINT32_(0x0)                                        /* (ASRC_WPMR) The write protection is disabled  */
#define   ASRC_WPMR_WPEN_1_Val                _UINT32_(0x1)                                        /* (ASRC_WPMR) The write protection is enabled. All write accesses to configuration registers are canceled and generate an error in the ASRC_WPSR register  */
#define ASRC_WPMR_WPEN_0                      (ASRC_WPMR_WPEN_0_Val << ASRC_WPMR_WPEN_Pos)         /* (ASRC_WPMR) The write protection is disabled Position */
#define ASRC_WPMR_WPEN_1                      (ASRC_WPMR_WPEN_1_Val << ASRC_WPMR_WPEN_Pos)         /* (ASRC_WPMR) The write protection is enabled. All write accesses to configuration registers are canceled and generate an error in the ASRC_WPSR register Position */
#define ASRC_WPMR_WPITEN_Pos                  _UINT32_(1)                                          /* (ASRC_WPMR) Write Protection Interrupt Enable Position */
#define ASRC_WPMR_WPITEN_Msk                  (_UINT32_(0x1) << ASRC_WPMR_WPITEN_Pos)              /* (ASRC_WPMR) Write Protection Interrupt Enable Mask */
#define ASRC_WPMR_WPITEN(value)               (ASRC_WPMR_WPITEN_Msk & (_UINT32_(value) << ASRC_WPMR_WPITEN_Pos)) /* Assignment of value for WPITEN in the ASRC_WPMR register */
#define   ASRC_WPMR_WPITEN_0_Val              _UINT32_(0x0)                                        /* (ASRC_WPMR) The write protection of interrupt registers is disabled  */
#define   ASRC_WPMR_WPITEN_1_Val              _UINT32_(0x1)                                        /* (ASRC_WPMR) The write protection of interrupt registers is enabled. Any attempt to modify the interrupt configuration is cancelled and leads to an error in the ASRC_WPSR register.  */
#define ASRC_WPMR_WPITEN_0                    (ASRC_WPMR_WPITEN_0_Val << ASRC_WPMR_WPITEN_Pos)     /* (ASRC_WPMR) The write protection of interrupt registers is disabled Position */
#define ASRC_WPMR_WPITEN_1                    (ASRC_WPMR_WPITEN_1_Val << ASRC_WPMR_WPITEN_Pos)     /* (ASRC_WPMR) The write protection of interrupt registers is enabled. Any attempt to modify the interrupt configuration is cancelled and leads to an error in the ASRC_WPSR register. Position */
#define ASRC_WPMR_WPCREN_Pos                  _UINT32_(2)                                          /* (ASRC_WPMR) Write Protection Control Register Enable Position */
#define ASRC_WPMR_WPCREN_Msk                  (_UINT32_(0x1) << ASRC_WPMR_WPCREN_Pos)              /* (ASRC_WPMR) Write Protection Control Register Enable Mask */
#define ASRC_WPMR_WPCREN(value)               (ASRC_WPMR_WPCREN_Msk & (_UINT32_(value) << ASRC_WPMR_WPCREN_Pos)) /* Assignment of value for WPCREN in the ASRC_WPMR register */
#define   ASRC_WPMR_WPCREN_0_Val              _UINT32_(0x0)                                        /* (ASRC_WPMR) The write protection of control registers is disabled  */
#define   ASRC_WPMR_WPCREN_1_Val              _UINT32_(0x1)                                        /* (ASRC_WPMR) The write protection of control registers is enabled. Any attempt to modify the control register configuration is cancelled and leads to an error in the ASRC_WPSR register.  */
#define ASRC_WPMR_WPCREN_0                    (ASRC_WPMR_WPCREN_0_Val << ASRC_WPMR_WPCREN_Pos)     /* (ASRC_WPMR) The write protection of control registers is disabled Position */
#define ASRC_WPMR_WPCREN_1                    (ASRC_WPMR_WPCREN_1_Val << ASRC_WPMR_WPCREN_Pos)     /* (ASRC_WPMR) The write protection of control registers is enabled. Any attempt to modify the control register configuration is cancelled and leads to an error in the ASRC_WPSR register. Position */
#define ASRC_WPMR_WPKEY_Pos                   _UINT32_(8)                                          /* (ASRC_WPMR) Write Protection Key Position */
#define ASRC_WPMR_WPKEY_Msk                   (_UINT32_(0xFFFFFF) << ASRC_WPMR_WPKEY_Pos)          /* (ASRC_WPMR) Write Protection Key Mask */
#define ASRC_WPMR_WPKEY(value)                (ASRC_WPMR_WPKEY_Msk & (_UINT32_(value) << ASRC_WPMR_WPKEY_Pos)) /* Assignment of value for WPKEY in the ASRC_WPMR register */
#define   ASRC_WPMR_WPKEY_PASSWD_Val          _UINT32_(0x535243)                                   /* (ASRC_WPMR) Writing any other value in this field aborts the write operation of the WPEN, WPITEN and WPCREN bits. Always read at 0.  */
#define ASRC_WPMR_WPKEY_PASSWD                (ASRC_WPMR_WPKEY_PASSWD_Val << ASRC_WPMR_WPKEY_Pos)  /* (ASRC_WPMR) Writing any other value in this field aborts the write operation of the WPEN, WPITEN and WPCREN bits. Always read at 0. Position */
#define ASRC_WPMR_Msk                         _UINT32_(0xFFFFFF07)                                 /* (ASRC_WPMR) Register Mask  */


/* -------- ASRC_WPSR : (ASRC Offset: 0xE8) (R/W 32) Write Protection Status Register -------- */
#define ASRC_WPSR_RESETVALUE                  _UINT32_(0x00)                                       /*  (ASRC_WPSR) Write Protection Status Register  Reset Value */

#define ASRC_WPSR_WPVS_Pos                    _UINT32_(0)                                          /* (ASRC_WPSR) Write Protection Violation Status (cleared on read) Position */
#define ASRC_WPSR_WPVS_Msk                    (_UINT32_(0x1) << ASRC_WPSR_WPVS_Pos)                /* (ASRC_WPSR) Write Protection Violation Status (cleared on read) Mask */
#define ASRC_WPSR_WPVS(value)                 (ASRC_WPSR_WPVS_Msk & (_UINT32_(value) << ASRC_WPSR_WPVS_Pos)) /* Assignment of value for WPVS in the ASRC_WPSR register */
#define   ASRC_WPSR_WPVS_0_Val                _UINT32_(0x0)                                        /* (ASRC_WPSR) No write protection violation has occurred since the last read of ASRC_WPSR  */
#define   ASRC_WPSR_WPVS_1_Val                _UINT32_(0x1)                                        /* (ASRC_WPSR) A write protection violation has occurred since the last read of ASRC_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported in field WPSRC.  */
#define ASRC_WPSR_WPVS_0                      (ASRC_WPSR_WPVS_0_Val << ASRC_WPSR_WPVS_Pos)         /* (ASRC_WPSR) No write protection violation has occurred since the last read of ASRC_WPSR Position */
#define ASRC_WPSR_WPVS_1                      (ASRC_WPSR_WPVS_1_Val << ASRC_WPSR_WPVS_Pos)         /* (ASRC_WPSR) A write protection violation has occurred since the last read of ASRC_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported in field WPSRC. Position */
#define ASRC_WPSR_CFGERR_Pos                  _UINT32_(1)                                          /* (ASRC_WPSR) SRC Configuration Error (cleared by correcting the faulty configuration) Position */
#define ASRC_WPSR_CFGERR_Msk                  (_UINT32_(0x1) << ASRC_WPSR_CFGERR_Pos)              /* (ASRC_WPSR) SRC Configuration Error (cleared by correcting the faulty configuration) Mask */
#define ASRC_WPSR_CFGERR(value)               (ASRC_WPSR_CFGERR_Msk & (_UINT32_(value) << ASRC_WPSR_CFGERR_Pos)) /* Assignment of value for CFGERR in the ASRC_WPSR register */
#define   ASRC_WPSR_CFGERR_0_Val              _UINT32_(0x0)                                        /* (ASRC_WPSR) No configuration error is reported in ASRC_ESR since the last read of ASRC_WPSR.  */
#define   ASRC_WPSR_CFGERR_1_Val              _UINT32_(0x1)                                        /* (ASRC_WPSR) A configuration error has been detected and reported in ASRC_ESR, since the last read of ASRC_WPSR.  */
#define ASRC_WPSR_CFGERR_0                    (ASRC_WPSR_CFGERR_0_Val << ASRC_WPSR_CFGERR_Pos)     /* (ASRC_WPSR) No configuration error is reported in ASRC_ESR since the last read of ASRC_WPSR. Position */
#define ASRC_WPSR_CFGERR_1                    (ASRC_WPSR_CFGERR_1_Val << ASRC_WPSR_CFGERR_Pos)     /* (ASRC_WPSR) A configuration error has been detected and reported in ASRC_ESR, since the last read of ASRC_WPSR. Position */
#define ASRC_WPSR_SEQE_Pos                    _UINT32_(2)                                          /* (ASRC_WPSR) Internal Sequencer Error (cleared on read) Position */
#define ASRC_WPSR_SEQE_Msk                    (_UINT32_(0x1) << ASRC_WPSR_SEQE_Pos)                /* (ASRC_WPSR) Internal Sequencer Error (cleared on read) Mask */
#define ASRC_WPSR_SEQE(value)                 (ASRC_WPSR_SEQE_Msk & (_UINT32_(value) << ASRC_WPSR_SEQE_Pos)) /* Assignment of value for SEQE in the ASRC_WPSR register */
#define   ASRC_WPSR_SEQE_0_Val                _UINT32_(0x0)                                        /* (ASRC_WPSR) No peripheral internal sequencer error has occurred since the last read of ASRC_WPSR  */
#define   ASRC_WPSR_SEQE_1_Val                _UINT32_(0x1)                                        /* (ASRC_WPSR) A peripheral internal sequencer error has occurred since the last read of ASRC_WPSR. This flag is set under abnormal operating conditions or if the fault injection ASRC_FIR.FPARE is performed (only available if ASRC DSPs are all disabled). All ASRC configuration registers are monitored with a parity check for each register.  */
#define ASRC_WPSR_SEQE_0                      (ASRC_WPSR_SEQE_0_Val << ASRC_WPSR_SEQE_Pos)         /* (ASRC_WPSR) No peripheral internal sequencer error has occurred since the last read of ASRC_WPSR Position */
#define ASRC_WPSR_SEQE_1                      (ASRC_WPSR_SEQE_1_Val << ASRC_WPSR_SEQE_Pos)         /* (ASRC_WPSR) A peripheral internal sequencer error has occurred since the last read of ASRC_WPSR. This flag is set under abnormal operating conditions or if the fault injection ASRC_FIR.FPARE is performed (only available if ASRC DSPs are all disabled). All ASRC configuration registers are monitored with a parity check for each register. Position */
#define ASRC_WPSR_SWE_Pos                     _UINT32_(3)                                          /* (ASRC_WPSR) Software Control Error (cleared on read) Position */
#define ASRC_WPSR_SWE_Msk                     (_UINT32_(0x1) << ASRC_WPSR_SWE_Pos)                 /* (ASRC_WPSR) Software Control Error (cleared on read) Mask */
#define ASRC_WPSR_SWE(value)                  (ASRC_WPSR_SWE_Msk & (_UINT32_(value) << ASRC_WPSR_SWE_Pos)) /* Assignment of value for SWE in the ASRC_WPSR register */
#define   ASRC_WPSR_SWE_0_Val                 _UINT32_(0x0)                                        /* (ASRC_WPSR) No software error has occurred since the last read of ASRC_WPSR.  */
#define   ASRC_WPSR_SWE_1_Val                 _UINT32_(0x1)                                        /* (ASRC_WPSR) A software error has occurred since the last read of ASRC_WPSR. The field SWETYP details the type of software error; the associated incorrect software access is reported in the field WPVSRC (if WPVS=0).  */
#define ASRC_WPSR_SWE_0                       (ASRC_WPSR_SWE_0_Val << ASRC_WPSR_SWE_Pos)           /* (ASRC_WPSR) No software error has occurred since the last read of ASRC_WPSR. Position */
#define ASRC_WPSR_SWE_1                       (ASRC_WPSR_SWE_1_Val << ASRC_WPSR_SWE_Pos)           /* (ASRC_WPSR) A software error has occurred since the last read of ASRC_WPSR. The field SWETYP details the type of software error; the associated incorrect software access is reported in the field WPVSRC (if WPVS=0). Position */
#define ASRC_WPSR_SDEE_Pos                    _UINT32_(4)                                          /* (ASRC_WPSR) Single or Dual Event Error (cleared by reconfiguring the faulty registers or by clearing the error via ASRC_FIR) Position */
#define ASRC_WPSR_SDEE_Msk                    (_UINT32_(0x1) << ASRC_WPSR_SDEE_Pos)                /* (ASRC_WPSR) Single or Dual Event Error (cleared by reconfiguring the faulty registers or by clearing the error via ASRC_FIR) Mask */
#define ASRC_WPSR_SDEE(value)                 (ASRC_WPSR_SDEE_Msk & (_UINT32_(value) << ASRC_WPSR_SDEE_Pos)) /* Assignment of value for SDEE in the ASRC_WPSR register */
#define   ASRC_WPSR_SDEE_0_Val                _UINT32_(0x0)                                        /* (ASRC_WPSR) No single or dual error detected in ASRC_MR.ASRCENx, ASRC_WPMR.WPEN/WPITEN/WPCREN bits. When testing the ability for SDEE to rise by introducing a fault via ASRC_FIR, the clear is performed by first clearing the fault via ASRC_FIR, then reading ASRC_WPSR again.  */
#define   ASRC_WPSR_SDEE_1_Val                _UINT32_(0x1)                                        /* (ASRC_WPSR) Single or dual error detected in ASRC_MR.ASRCENx, ASRC_WPMR.WPEN/WPITEN/WPCREN bits. If a single error event occurred, the error is filtered and has no effect on ASRC.  */
#define ASRC_WPSR_SDEE_0                      (ASRC_WPSR_SDEE_0_Val << ASRC_WPSR_SDEE_Pos)         /* (ASRC_WPSR) No single or dual error detected in ASRC_MR.ASRCENx, ASRC_WPMR.WPEN/WPITEN/WPCREN bits. When testing the ability for SDEE to rise by introducing a fault via ASRC_FIR, the clear is performed by first clearing the fault via ASRC_FIR, then reading ASRC_WPSR again. Position */
#define ASRC_WPSR_SDEE_1                      (ASRC_WPSR_SDEE_1_Val << ASRC_WPSR_SDEE_Pos)         /* (ASRC_WPSR) Single or dual error detected in ASRC_MR.ASRCENx, ASRC_WPMR.WPEN/WPITEN/WPCREN bits. If a single error event occurred, the error is filtered and has no effect on ASRC. Position */
#define ASRC_WPSR_WPSRC_Pos                   _UINT32_(8)                                          /* (ASRC_WPSR) Write Protection Source (cleared on read) Position */
#define ASRC_WPSR_WPSRC_Msk                   (_UINT32_(0xFFFF) << ASRC_WPSR_WPSRC_Pos)            /* (ASRC_WPSR) Write Protection Source (cleared on read) Mask */
#define ASRC_WPSR_WPSRC(value)                (ASRC_WPSR_WPSRC_Msk & (_UINT32_(value) << ASRC_WPSR_WPSRC_Pos)) /* Assignment of value for WPSRC in the ASRC_WPSR register */
#define ASRC_WPSR_SWETYP_Pos                  _UINT32_(24)                                         /* (ASRC_WPSR) Software Error Type (cleared on read) Position */
#define ASRC_WPSR_SWETYP_Msk                  (_UINT32_(0x3) << ASRC_WPSR_SWETYP_Pos)              /* (ASRC_WPSR) Software Error Type (cleared on read) Mask */
#define ASRC_WPSR_SWETYP(value)               (ASRC_WPSR_SWETYP_Msk & (_UINT32_(value) << ASRC_WPSR_SWETYP_Pos)) /* Assignment of value for SWETYP in the ASRC_WPSR register */
#define   ASRC_WPSR_SWETYP_READ_WO_Val        _UINT32_(0x0)                                        /* (ASRC_WPSR) A Write-only register has been read.  */
#define   ASRC_WPSR_SWETYP_WRITE_RO_Val       _UINT32_(0x1)                                        /* (ASRC_WPSR) A write access has been performed on a Read-only register.  */
#define   ASRC_WPSR_SWETYP_UNDEF_RW_Val       _UINT32_(0x2)                                        /* (ASRC_WPSR) Access to an undefined address.  */
#define ASRC_WPSR_SWETYP_READ_WO              (ASRC_WPSR_SWETYP_READ_WO_Val << ASRC_WPSR_SWETYP_Pos) /* (ASRC_WPSR) A Write-only register has been read. Position */
#define ASRC_WPSR_SWETYP_WRITE_RO             (ASRC_WPSR_SWETYP_WRITE_RO_Val << ASRC_WPSR_SWETYP_Pos) /* (ASRC_WPSR) A write access has been performed on a Read-only register. Position */
#define ASRC_WPSR_SWETYP_UNDEF_RW             (ASRC_WPSR_SWETYP_UNDEF_RW_Val << ASRC_WPSR_SWETYP_Pos) /* (ASRC_WPSR) Access to an undefined address. Position */
#define ASRC_WPSR_Msk                         _UINT32_(0x03FFFF1F)                                 /* (ASRC_WPSR) Register Mask  */


/* ASRC register offsets definitions */
#define ASRC_CR_REG_OFST               _UINT32_(0x00)      /* (ASRC_CR) Control Register Offset */
#define ASRC_MR_REG_OFST               _UINT32_(0x04)      /* (ASRC_MR) Mode Register Offset */
#define ASRC_RATIO_REG_OFST            _UINT32_(0x08)      /* (ASRC_RATIO) Ratio Register of Stereo Channel x Offset */
#define ASRC_RATIO0_REG_OFST           _UINT32_(0x08)      /* (ASRC_RATIO0) Ratio Register of Stereo Channel x Offset */
#define ASRC_RATIO1_REG_OFST           _UINT32_(0x0C)      /* (ASRC_RATIO1) Ratio Register of Stereo Channel x Offset */
#define ASRC_RATIO2_REG_OFST           _UINT32_(0x10)      /* (ASRC_RATIO2) Ratio Register of Stereo Channel x Offset */
#define ASRC_RATIO3_REG_OFST           _UINT32_(0x14)      /* (ASRC_RATIO3) Ratio Register of Stereo Channel x Offset */
#define ASRC_VBPS_IN_REG_OFST          _UINT32_(0x18)      /* (ASRC_VBPS_IN) Valid Bit Per Sample In Register Offset */
#define ASRC_VBPS_OUT_REG_OFST         _UINT32_(0x1C)      /* (ASRC_VBPS_OUT) Valid Bit Per Sample Out Register Offset */
#define ASRC_CH_CONF_REG_OFST          _UINT32_(0x20)      /* (ASRC_CH_CONF) Channel Configuration Register Offset */
#define ASRC_TRIG_REG_OFST             _UINT32_(0x24)      /* (ASRC_TRIG) Trigger Selection Register Offset */
#define ASRC_RHR_REG_OFST              _UINT32_(0x28)      /* (ASRC_RHR) Receive Holding Register x Offset */
#define ASRC_RHR0_REG_OFST             _UINT32_(0x28)      /* (ASRC_RHR0) Receive Holding Register x Offset */
#define ASRC_RHR1_REG_OFST             _UINT32_(0x2C)      /* (ASRC_RHR1) Receive Holding Register x Offset */
#define ASRC_RHR2_REG_OFST             _UINT32_(0x30)      /* (ASRC_RHR2) Receive Holding Register x Offset */
#define ASRC_RHR3_REG_OFST             _UINT32_(0x34)      /* (ASRC_RHR3) Receive Holding Register x Offset */
#define ASRC_THR_REG_OFST              _UINT32_(0x48)      /* (ASRC_THR) Transmit Holding Register x Offset */
#define ASRC_THR0_REG_OFST             _UINT32_(0x48)      /* (ASRC_THR0) Transmit Holding Register x Offset */
#define ASRC_THR1_REG_OFST             _UINT32_(0x4C)      /* (ASRC_THR1) Transmit Holding Register x Offset */
#define ASRC_THR2_REG_OFST             _UINT32_(0x50)      /* (ASRC_THR2) Transmit Holding Register x Offset */
#define ASRC_THR3_REG_OFST             _UINT32_(0x54)      /* (ASRC_THR3) Transmit Holding Register x Offset */
#define ASRC_IER_REG_OFST              _UINT32_(0x68)      /* (ASRC_IER) Interrupt Enable Register x Offset */
#define ASRC_IER0_REG_OFST             _UINT32_(0x68)      /* (ASRC_IER0) Interrupt Enable Register x Offset */
#define ASRC_IER1_REG_OFST             _UINT32_(0x6C)      /* (ASRC_IER1) Interrupt Enable Register x Offset */
#define ASRC_IER2_REG_OFST             _UINT32_(0x70)      /* (ASRC_IER2) Interrupt Enable Register x Offset */
#define ASRC_IER3_REG_OFST             _UINT32_(0x74)      /* (ASRC_IER3) Interrupt Enable Register x Offset */
#define ASRC_IDR_REG_OFST              _UINT32_(0x78)      /* (ASRC_IDR) Interrupt Disable Register x Offset */
#define ASRC_IDR0_REG_OFST             _UINT32_(0x78)      /* (ASRC_IDR0) Interrupt Disable Register x Offset */
#define ASRC_IDR1_REG_OFST             _UINT32_(0x7C)      /* (ASRC_IDR1) Interrupt Disable Register x Offset */
#define ASRC_IDR2_REG_OFST             _UINT32_(0x80)      /* (ASRC_IDR2) Interrupt Disable Register x Offset */
#define ASRC_IDR3_REG_OFST             _UINT32_(0x84)      /* (ASRC_IDR3) Interrupt Disable Register x Offset */
#define ASRC_IMR_REG_OFST              _UINT32_(0x88)      /* (ASRC_IMR) Interrupt Mask Register x Offset */
#define ASRC_IMR0_REG_OFST             _UINT32_(0x88)      /* (ASRC_IMR0) Interrupt Mask Register x Offset */
#define ASRC_IMR1_REG_OFST             _UINT32_(0x8C)      /* (ASRC_IMR1) Interrupt Mask Register x Offset */
#define ASRC_IMR2_REG_OFST             _UINT32_(0x90)      /* (ASRC_IMR2) Interrupt Mask Register x Offset */
#define ASRC_IMR3_REG_OFST             _UINT32_(0x94)      /* (ASRC_IMR3) Interrupt Mask Register x Offset */
#define ASRC_ISR_REG_OFST              _UINT32_(0x98)      /* (ASRC_ISR) Interrupt Status Register x Offset */
#define ASRC_ISR0_REG_OFST             _UINT32_(0x98)      /* (ASRC_ISR0) Interrupt Status Register x Offset */
#define ASRC_ISR1_REG_OFST             _UINT32_(0x9C)      /* (ASRC_ISR1) Interrupt Status Register x Offset */
#define ASRC_ISR2_REG_OFST             _UINT32_(0xA0)      /* (ASRC_ISR2) Interrupt Status Register x Offset */
#define ASRC_ISR3_REG_OFST             _UINT32_(0xA4)      /* (ASRC_ISR3) Interrupt Status Register x Offset */
#define ASRC_ESR_REG_OFST              _UINT32_(0xA8)      /* (ASRC_ESR) Error Status Register Offset */
#define ASRC_DAVCR_REG_OFST            _UINT32_(0xAC)      /* (ASRC_DAVCR) Direct Access Valid Channels Register Offset */
#define ASRC_FIR_REG_OFST              _UINT32_(0xB0)      /* (ASRC_FIR) Fault Injection Register Offset */
#define ASRC_DAPSELR_REG_OFST          _UINT32_(0xB4)      /* (ASRC_DAPSELR) Direct Access Peripheral Select Register Offset */
#define ASRC_DABMR_REG_OFST            _UINT32_(0xB8)      /* (ASRC_DABMR) Direct Access Bridge Mode Register Offset */
#define ASRC_SR_REG_OFST               _UINT32_(0xBC)      /* (ASRC_SR) Status Register Offset */
#define ASRC_WPMR_REG_OFST             _UINT32_(0xE4)      /* (ASRC_WPMR) Write Protection Mode Register Offset */
#define ASRC_WPSR_REG_OFST             _UINT32_(0xE8)      /* (ASRC_WPSR) Write Protection Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* ASRC register API structure */
typedef struct
{  /* Asynchronous Sample Rate Converter */
  __O   uint32_t                       ASRC_CR;            /* Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       ASRC_MR;            /* Offset: 0x04 (R/W  32) Mode Register */
  __IO  uint32_t                       ASRC_RATIO[4];      /* Offset: 0x08 (R/W  32) Ratio Register of Stereo Channel x */
  __IO  uint32_t                       ASRC_VBPS_IN;       /* Offset: 0x18 (R/W  32) Valid Bit Per Sample In Register */
  __IO  uint32_t                       ASRC_VBPS_OUT;      /* Offset: 0x1C (R/W  32) Valid Bit Per Sample Out Register */
  __IO  uint32_t                       ASRC_CH_CONF;       /* Offset: 0x20 (R/W  32) Channel Configuration Register */
  __IO  uint32_t                       ASRC_TRIG;          /* Offset: 0x24 (R/W  32) Trigger Selection Register */
  __I   uint32_t                       ASRC_RHR[4];        /* Offset: 0x28 (R/   32) Receive Holding Register x */
  __I   uint8_t                        Reserved1[0x10];
  __O   uint32_t                       ASRC_THR[4];        /* Offset: 0x48 ( /W  32) Transmit Holding Register x */
  __I   uint8_t                        Reserved2[0x10];
  __O   uint32_t                       ASRC_IER[4];        /* Offset: 0x68 ( /W  32) Interrupt Enable Register x */
  __O   uint32_t                       ASRC_IDR[4];        /* Offset: 0x78 ( /W  32) Interrupt Disable Register x */
  __I   uint32_t                       ASRC_IMR[4];        /* Offset: 0x88 (R/   32) Interrupt Mask Register x */
  __I   uint32_t                       ASRC_ISR[4];        /* Offset: 0x98 (R/   32) Interrupt Status Register x */
  __I   uint32_t                       ASRC_ESR;           /* Offset: 0xA8 (R/   32) Error Status Register */
  __IO  uint32_t                       ASRC_DAVCR;         /* Offset: 0xAC (R/W  32) Direct Access Valid Channels Register */
  __IO  uint32_t                       ASRC_FIR;           /* Offset: 0xB0 (R/W  32) Fault Injection Register */
  __IO  uint32_t                       ASRC_DAPSELR;       /* Offset: 0xB4 (R/W  32) Direct Access Peripheral Select Register */
  __IO  uint32_t                       ASRC_DABMR;         /* Offset: 0xB8 (R/W  32) Direct Access Bridge Mode Register */
  __I   uint32_t                       ASRC_SR;            /* Offset: 0xBC (R/   32) Status Register */
  __I   uint8_t                        Reserved3[0x24];
  __IO  uint32_t                       ASRC_WPMR;          /* Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __IO  uint32_t                       ASRC_WPSR;          /* Offset: 0xE8 (R/W  32) Write Protection Status Register */
} asrc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7D6_ASRC_COMPONENT_H_ */
