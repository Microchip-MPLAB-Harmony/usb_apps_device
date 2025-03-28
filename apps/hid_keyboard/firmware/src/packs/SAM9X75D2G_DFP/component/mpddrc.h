/*
 * Component description for MPDDRC
 *
 * Copyright (c) 2025 Microchip Technology Inc. and its subsidiaries.
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

/*  file generated from device description file (ATDF) version 2024-06-25T17:22:56Z  */
#ifndef _SAM9X7_MPDDRC_COMPONENT_H_
#define _SAM9X7_MPDDRC_COMPONENT_H_

/* ************************************************************************** */
/*                     SOFTWARE API DEFINITION FOR MPDDRC                     */
/* ************************************************************************** */

/* -------- MPDDRC_MR : (MPDDRC Offset: 0x00) (R/W 32) Mode Register -------- */
#define MPDDRC_MR_RESETVALUE                  _UINT32_(0x00)                                       /*  (MPDDRC_MR) Mode Register  Reset Value */

#define MPDDRC_MR_MODE_Pos                    _UINT32_(0)                                          /* (MPDDRC_MR) MPDDRC Command Mode Position */
#define MPDDRC_MR_MODE_Msk                    (_UINT32_(0x7) << MPDDRC_MR_MODE_Pos)                /* (MPDDRC_MR) MPDDRC Command Mode Mask */
#define MPDDRC_MR_MODE(value)                 (MPDDRC_MR_MODE_Msk & (_UINT32_(value) << MPDDRC_MR_MODE_Pos)) /* Assignment of value for MODE in the MPDDRC_MR register */
#define   MPDDRC_MR_MODE_NORMAL_CMD_Val       _UINT32_(0x0)                                        /* (MPDDRC_MR) Normal Mode. Any access to the MPDDRC is decoded normally. To activate this mode, the command must be followed by a write to the DDR-SDRAM.  */
#define   MPDDRC_MR_MODE_NOP_CMD_Val          _UINT32_(0x1)                                        /* (MPDDRC_MR) The MPDDRC issues a NOP command when the DDR-SDRAM device is accessed regardless of the cycle. To activate this mode, the command must be followed by a write to the DDR-SDRAM.  */
#define   MPDDRC_MR_MODE_PRCGALL_CMD_Val      _UINT32_(0x2)                                        /* (MPDDRC_MR) The MPDDRC issues the All Banks Precharge command when the DDR-SDRAM device is accessed regardless of the cycle. To activate this mode, the command must be followed by a write to the SDRAM.  */
#define   MPDDRC_MR_MODE_LMR_CMD_Val          _UINT32_(0x3)                                        /* (MPDDRC_MR) The MPDDRC issues a Load Mode Register command when the DDR-SDRAM device is accessed regardless of the cycle. To activate this mode, the command must be followed by a write to the DDR-SDRAM.  */
#define   MPDDRC_MR_MODE_RFSH_CMD_Val         _UINT32_(0x4)                                        /* (MPDDRC_MR) The MPDDRC issues an Autorefresh command when the DDR-SDRAM device is accessed regardless of the cycle. Previously, an All Banks Precharge command must be issued. To activate this mode, the command must be followed by a write to the DDR-SDRAM.  */
#define   MPDDRC_MR_MODE_EXT_LMR_CMD_Val      _UINT32_(0x5)                                        /* (MPDDRC_MR) The MPDDRC issues an Extended Load Mode Register command when the SDRAM device is accessed regardless of the cycle. To activate this mode, the command must be followed by a write to the DDR-SDRAM. The write in the DDR-SDRAM must be done in the appropriate bank.  */
#define   MPDDRC_MR_MODE_DEEP_CALIB_MD_Val    _UINT32_(0x6)                                        /* (MPDDRC_MR) Deep Power mode: Access to Deep Powerdown mode Calibration command: to calibrate RTT and RON values for the Process Voltage Temperature (PVT) (DDR3-SDRAM device)  */
#define MPDDRC_MR_MODE_NORMAL_CMD             (MPDDRC_MR_MODE_NORMAL_CMD_Val << MPDDRC_MR_MODE_Pos) /* (MPDDRC_MR) Normal Mode. Any access to the MPDDRC is decoded normally. To activate this mode, the command must be followed by a write to the DDR-SDRAM. Position */
#define MPDDRC_MR_MODE_NOP_CMD                (MPDDRC_MR_MODE_NOP_CMD_Val << MPDDRC_MR_MODE_Pos)   /* (MPDDRC_MR) The MPDDRC issues a NOP command when the DDR-SDRAM device is accessed regardless of the cycle. To activate this mode, the command must be followed by a write to the DDR-SDRAM. Position */
#define MPDDRC_MR_MODE_PRCGALL_CMD            (MPDDRC_MR_MODE_PRCGALL_CMD_Val << MPDDRC_MR_MODE_Pos) /* (MPDDRC_MR) The MPDDRC issues the All Banks Precharge command when the DDR-SDRAM device is accessed regardless of the cycle. To activate this mode, the command must be followed by a write to the SDRAM. Position */
#define MPDDRC_MR_MODE_LMR_CMD                (MPDDRC_MR_MODE_LMR_CMD_Val << MPDDRC_MR_MODE_Pos)   /* (MPDDRC_MR) The MPDDRC issues a Load Mode Register command when the DDR-SDRAM device is accessed regardless of the cycle. To activate this mode, the command must be followed by a write to the DDR-SDRAM. Position */
#define MPDDRC_MR_MODE_RFSH_CMD               (MPDDRC_MR_MODE_RFSH_CMD_Val << MPDDRC_MR_MODE_Pos)  /* (MPDDRC_MR) The MPDDRC issues an Autorefresh command when the DDR-SDRAM device is accessed regardless of the cycle. Previously, an All Banks Precharge command must be issued. To activate this mode, the command must be followed by a write to the DDR-SDRAM. Position */
#define MPDDRC_MR_MODE_EXT_LMR_CMD            (MPDDRC_MR_MODE_EXT_LMR_CMD_Val << MPDDRC_MR_MODE_Pos) /* (MPDDRC_MR) The MPDDRC issues an Extended Load Mode Register command when the SDRAM device is accessed regardless of the cycle. To activate this mode, the command must be followed by a write to the DDR-SDRAM. The write in the DDR-SDRAM must be done in the appropriate bank. Position */
#define MPDDRC_MR_MODE_DEEP_CALIB_MD          (MPDDRC_MR_MODE_DEEP_CALIB_MD_Val << MPDDRC_MR_MODE_Pos) /* (MPDDRC_MR) Deep Power mode: Access to Deep Powerdown mode Calibration command: to calibrate RTT and RON values for the Process Voltage Temperature (PVT) (DDR3-SDRAM device) Position */
#define MPDDRC_MR_Msk                         _UINT32_(0x00000007)                                 /* (MPDDRC_MR) Register Mask  */


/* -------- MPDDRC_RTR : (MPDDRC Offset: 0x04) (R/W 32) Refresh Timer Register -------- */
#define MPDDRC_RTR_RESETVALUE                 _UINT32_(0x00)                                       /*  (MPDDRC_RTR) Refresh Timer Register  Reset Value */

#define MPDDRC_RTR_COUNT_Pos                  _UINT32_(0)                                          /* (MPDDRC_RTR) MPDDRC Refresh Timer Count Position */
#define MPDDRC_RTR_COUNT_Msk                  (_UINT32_(0xFFF) << MPDDRC_RTR_COUNT_Pos)            /* (MPDDRC_RTR) MPDDRC Refresh Timer Count Mask */
#define MPDDRC_RTR_COUNT(value)               (MPDDRC_RTR_COUNT_Msk & (_UINT32_(value) << MPDDRC_RTR_COUNT_Pos)) /* Assignment of value for COUNT in the MPDDRC_RTR register */
#define MPDDRC_RTR_Msk                        _UINT32_(0x00000FFF)                                 /* (MPDDRC_RTR) Register Mask  */


/* -------- MPDDRC_CR : (MPDDRC Offset: 0x08) (R/W 32) Configuration Register -------- */
#define MPDDRC_CR_RESETVALUE                  _UINT32_(0x207024)                                   /*  (MPDDRC_CR) Configuration Register  Reset Value */

#define MPDDRC_CR_NC_Pos                      _UINT32_(0)                                          /* (MPDDRC_CR) Number of Column Bits Position */
#define MPDDRC_CR_NC_Msk                      (_UINT32_(0x3) << MPDDRC_CR_NC_Pos)                  /* (MPDDRC_CR) Number of Column Bits Mask */
#define MPDDRC_CR_NC(value)                   (MPDDRC_CR_NC_Msk & (_UINT32_(value) << MPDDRC_CR_NC_Pos)) /* Assignment of value for NC in the MPDDRC_CR register */
#define   MPDDRC_CR_NC_DDR9_MDDR8_COL_BITS_Val _UINT32_(0x0)                                        /* (MPDDRC_CR) 9 bits to define the column number, up to 512 columns, for DDR2/DDR3-SDRAM 8 bits to define the column number, up to 256 columns, for LPDDR1-SDRAM  */
#define   MPDDRC_CR_NC_DDR10_MDDR9_COL_BITS_Val _UINT32_(0x1)                                        /* (MPDDRC_CR) 10 bits to define the column number, up to 1024 columns, for DDR2/DDR3-SDRAM 9 bits to define the column number, up to 512 columns, for LPDDR1-SDRAM  */
#define   MPDDRC_CR_NC_DDR11_MDDR10_COL_BITS_Val _UINT32_(0x2)                                        /* (MPDDRC_CR) 11 bits to define the column number, up to 2048 columns, for DDR2/DDR3-SDRAM 10 bits to define the column number, up to 1024 columns, for LPDDR1-SDRAM  */
#define   MPDDRC_CR_NC_DDR12_MDDR11_COL_BITS_Val _UINT32_(0x3)                                        /* (MPDDRC_CR) 12 bits to define the column number, up to 4096 columns, for DDR2/DDR3-SDRAM 11 bits to define the column number, up to 2048 columns, for LPDDR1-SDRAM  */
#define MPDDRC_CR_NC_DDR9_MDDR8_COL_BITS      (MPDDRC_CR_NC_DDR9_MDDR8_COL_BITS_Val << MPDDRC_CR_NC_Pos) /* (MPDDRC_CR) 9 bits to define the column number, up to 512 columns, for DDR2/DDR3-SDRAM 8 bits to define the column number, up to 256 columns, for LPDDR1-SDRAM Position */
#define MPDDRC_CR_NC_DDR10_MDDR9_COL_BITS     (MPDDRC_CR_NC_DDR10_MDDR9_COL_BITS_Val << MPDDRC_CR_NC_Pos) /* (MPDDRC_CR) 10 bits to define the column number, up to 1024 columns, for DDR2/DDR3-SDRAM 9 bits to define the column number, up to 512 columns, for LPDDR1-SDRAM Position */
#define MPDDRC_CR_NC_DDR11_MDDR10_COL_BITS    (MPDDRC_CR_NC_DDR11_MDDR10_COL_BITS_Val << MPDDRC_CR_NC_Pos) /* (MPDDRC_CR) 11 bits to define the column number, up to 2048 columns, for DDR2/DDR3-SDRAM 10 bits to define the column number, up to 1024 columns, for LPDDR1-SDRAM Position */
#define MPDDRC_CR_NC_DDR12_MDDR11_COL_BITS    (MPDDRC_CR_NC_DDR12_MDDR11_COL_BITS_Val << MPDDRC_CR_NC_Pos) /* (MPDDRC_CR) 12 bits to define the column number, up to 4096 columns, for DDR2/DDR3-SDRAM 11 bits to define the column number, up to 2048 columns, for LPDDR1-SDRAM Position */
#define MPDDRC_CR_NR_Pos                      _UINT32_(2)                                          /* (MPDDRC_CR) Number of Row Bits Position */
#define MPDDRC_CR_NR_Msk                      (_UINT32_(0x3) << MPDDRC_CR_NR_Pos)                  /* (MPDDRC_CR) Number of Row Bits Mask */
#define MPDDRC_CR_NR(value)                   (MPDDRC_CR_NR_Msk & (_UINT32_(value) << MPDDRC_CR_NR_Pos)) /* Assignment of value for NR in the MPDDRC_CR register */
#define   MPDDRC_CR_NR_11_ROW_BITS_Val        _UINT32_(0x0)                                        /* (MPDDRC_CR) 11 bits to define the row number, up to 2048 rows  */
#define   MPDDRC_CR_NR_12_ROW_BITS_Val        _UINT32_(0x1)                                        /* (MPDDRC_CR) 12 bits to define the row number, up to 4096 rows  */
#define   MPDDRC_CR_NR_13_ROW_BITS_Val        _UINT32_(0x2)                                        /* (MPDDRC_CR) 13 bits to define the row number, up to 8192 rows  */
#define   MPDDRC_CR_NR_14_ROW_BITS_Val        _UINT32_(0x3)                                        /* (MPDDRC_CR) 14 bits to define the row number, up to 16384 rows  */
#define MPDDRC_CR_NR_11_ROW_BITS              (MPDDRC_CR_NR_11_ROW_BITS_Val << MPDDRC_CR_NR_Pos)   /* (MPDDRC_CR) 11 bits to define the row number, up to 2048 rows Position */
#define MPDDRC_CR_NR_12_ROW_BITS              (MPDDRC_CR_NR_12_ROW_BITS_Val << MPDDRC_CR_NR_Pos)   /* (MPDDRC_CR) 12 bits to define the row number, up to 4096 rows Position */
#define MPDDRC_CR_NR_13_ROW_BITS              (MPDDRC_CR_NR_13_ROW_BITS_Val << MPDDRC_CR_NR_Pos)   /* (MPDDRC_CR) 13 bits to define the row number, up to 8192 rows Position */
#define MPDDRC_CR_NR_14_ROW_BITS              (MPDDRC_CR_NR_14_ROW_BITS_Val << MPDDRC_CR_NR_Pos)   /* (MPDDRC_CR) 14 bits to define the row number, up to 16384 rows Position */
#define MPDDRC_CR_CAS_Pos                     _UINT32_(4)                                          /* (MPDDRC_CR) CAS Latency Position */
#define MPDDRC_CR_CAS_Msk                     (_UINT32_(0x7) << MPDDRC_CR_CAS_Pos)                 /* (MPDDRC_CR) CAS Latency Mask */
#define MPDDRC_CR_CAS(value)                  (MPDDRC_CR_CAS_Msk & (_UINT32_(value) << MPDDRC_CR_CAS_Pos)) /* Assignment of value for CAS in the MPDDRC_CR register */
#define   MPDDRC_CR_CAS_DDR_CAS3_Val          _UINT32_(0x3)                                        /* (MPDDRC_CR) DDR2 CAS Latency 3  */
#define   MPDDRC_CR_CAS_DDR_CAS4_Val          _UINT32_(0x4)                                        /* (MPDDRC_CR) DDR2 CAS Latency 4  */
#define   MPDDRC_CR_CAS_DDR_CAS5_Val          _UINT32_(0x5)                                        /* (MPDDRC_CR) DDR2/DDR3 CAS Latency 5  */
#define   MPDDRC_CR_CAS_DDR_CAS6_Val          _UINT32_(0x6)                                        /* (MPDDRC_CR) DDR3 CAS Latency 6  */
#define MPDDRC_CR_CAS_DDR_CAS3                (MPDDRC_CR_CAS_DDR_CAS3_Val << MPDDRC_CR_CAS_Pos)    /* (MPDDRC_CR) DDR2 CAS Latency 3 Position */
#define MPDDRC_CR_CAS_DDR_CAS4                (MPDDRC_CR_CAS_DDR_CAS4_Val << MPDDRC_CR_CAS_Pos)    /* (MPDDRC_CR) DDR2 CAS Latency 4 Position */
#define MPDDRC_CR_CAS_DDR_CAS5                (MPDDRC_CR_CAS_DDR_CAS5_Val << MPDDRC_CR_CAS_Pos)    /* (MPDDRC_CR) DDR2/DDR3 CAS Latency 5 Position */
#define MPDDRC_CR_CAS_DDR_CAS6                (MPDDRC_CR_CAS_DDR_CAS6_Val << MPDDRC_CR_CAS_Pos)    /* (MPDDRC_CR) DDR3 CAS Latency 6 Position */
#define MPDDRC_CR_DLL_Pos                     _UINT32_(7)                                          /* (MPDDRC_CR) Reset DLL Position */
#define MPDDRC_CR_DLL_Msk                     (_UINT32_(0x1) << MPDDRC_CR_DLL_Pos)                 /* (MPDDRC_CR) Reset DLL Mask */
#define MPDDRC_CR_DLL(value)                  (MPDDRC_CR_DLL_Msk & (_UINT32_(value) << MPDDRC_CR_DLL_Pos)) /* Assignment of value for DLL in the MPDDRC_CR register */
#define   MPDDRC_CR_DLL_RESET_DISABLED_Val    _UINT32_(0x0)                                        /* (MPDDRC_CR) Disable DLL reset  */
#define   MPDDRC_CR_DLL_RESET_ENABLED_Val     _UINT32_(0x1)                                        /* (MPDDRC_CR) Enable DLL reset  */
#define MPDDRC_CR_DLL_RESET_DISABLED          (MPDDRC_CR_DLL_RESET_DISABLED_Val << MPDDRC_CR_DLL_Pos) /* (MPDDRC_CR) Disable DLL reset Position */
#define MPDDRC_CR_DLL_RESET_ENABLED           (MPDDRC_CR_DLL_RESET_ENABLED_Val << MPDDRC_CR_DLL_Pos) /* (MPDDRC_CR) Enable DLL reset Position */
#define MPDDRC_CR_DIC_DS_Pos                  _UINT32_(8)                                          /* (MPDDRC_CR) Output Driver Impedance Control (Drive Strength) Position */
#define MPDDRC_CR_DIC_DS_Msk                  (_UINT32_(0x1) << MPDDRC_CR_DIC_DS_Pos)              /* (MPDDRC_CR) Output Driver Impedance Control (Drive Strength) Mask */
#define MPDDRC_CR_DIC_DS(value)               (MPDDRC_CR_DIC_DS_Msk & (_UINT32_(value) << MPDDRC_CR_DIC_DS_Pos)) /* Assignment of value for DIC_DS in the MPDDRC_CR register */
#define   MPDDRC_CR_DIC_DS_DDR2_NORMALSTRENGTH_DDR3_RZQ_6_Val _UINT32_(0x0)                                        /* (MPDDRC_CR) Normal drive strength (DDR2)- RZQ_6 (40 [NOM], DDR3)  */
#define   MPDDRC_CR_DIC_DS_DDR2_WEAKSTRENGTH_DDR3_RZQ_7_Val _UINT32_(0x1)                                        /* (MPDDRC_CR) Weak drive strength (DDR2)- RZQ_7 (34 [NOM], DDR3)  */
#define MPDDRC_CR_DIC_DS_DDR2_NORMALSTRENGTH_DDR3_RZQ_6 (MPDDRC_CR_DIC_DS_DDR2_NORMALSTRENGTH_DDR3_RZQ_6_Val << MPDDRC_CR_DIC_DS_Pos) /* (MPDDRC_CR) Normal drive strength (DDR2)- RZQ_6 (40 [NOM], DDR3) Position */
#define MPDDRC_CR_DIC_DS_DDR2_WEAKSTRENGTH_DDR3_RZQ_7 (MPDDRC_CR_DIC_DS_DDR2_WEAKSTRENGTH_DDR3_RZQ_7_Val << MPDDRC_CR_DIC_DS_Pos) /* (MPDDRC_CR) Weak drive strength (DDR2)- RZQ_7 (34 [NOM], DDR3) Position */
#define MPDDRC_CR_DIS_DLL_Pos                 _UINT32_(9)                                          /* (MPDDRC_CR) Disable DLL Position */
#define MPDDRC_CR_DIS_DLL_Msk                 (_UINT32_(0x1) << MPDDRC_CR_DIS_DLL_Pos)             /* (MPDDRC_CR) Disable DLL Mask */
#define MPDDRC_CR_DIS_DLL(value)              (MPDDRC_CR_DIS_DLL_Msk & (_UINT32_(value) << MPDDRC_CR_DIS_DLL_Pos)) /* Assignment of value for DIS_DLL in the MPDDRC_CR register */
#define   MPDDRC_CR_DIS_DLL_0_Val             _UINT32_(0x0)                                        /* (MPDDRC_CR) Enable DLL.  */
#define   MPDDRC_CR_DIS_DLL_1_Val             _UINT32_(0x1)                                        /* (MPDDRC_CR) Disable DLL.  */
#define MPDDRC_CR_DIS_DLL_0                   (MPDDRC_CR_DIS_DLL_0_Val << MPDDRC_CR_DIS_DLL_Pos)   /* (MPDDRC_CR) Enable DLL. Position */
#define MPDDRC_CR_DIS_DLL_1                   (MPDDRC_CR_DIS_DLL_1_Val << MPDDRC_CR_DIS_DLL_Pos)   /* (MPDDRC_CR) Disable DLL. Position */
#define MPDDRC_CR_OCD_Pos                     _UINT32_(12)                                         /* (MPDDRC_CR) Off-chip Driver Position */
#define MPDDRC_CR_OCD_Msk                     (_UINT32_(0x7) << MPDDRC_CR_OCD_Pos)                 /* (MPDDRC_CR) Off-chip Driver Mask */
#define MPDDRC_CR_OCD(value)                  (MPDDRC_CR_OCD_Msk & (_UINT32_(value) << MPDDRC_CR_OCD_Pos)) /* Assignment of value for OCD in the MPDDRC_CR register */
#define   MPDDRC_CR_OCD_DDR2_EXITCALIB_Val    _UINT32_(0x0)                                        /* (MPDDRC_CR) Exit from OCD Calibration mode and maintain settings  */
#define   MPDDRC_CR_OCD_DDR2_DEFAULT_CALIB_Val _UINT32_(0x7)                                        /* (MPDDRC_CR) OCD calibration default  */
#define MPDDRC_CR_OCD_DDR2_EXITCALIB          (MPDDRC_CR_OCD_DDR2_EXITCALIB_Val << MPDDRC_CR_OCD_Pos) /* (MPDDRC_CR) Exit from OCD Calibration mode and maintain settings Position */
#define MPDDRC_CR_OCD_DDR2_DEFAULT_CALIB      (MPDDRC_CR_OCD_DDR2_DEFAULT_CALIB_Val << MPDDRC_CR_OCD_Pos) /* (MPDDRC_CR) OCD calibration default Position */
#define MPDDRC_CR_SUP_DDR3_Pos                _UINT32_(15)                                         /* (MPDDRC_CR) Supply DDR3-SDRAM or DDR3L-SDRAM Position */
#define MPDDRC_CR_SUP_DDR3_Msk                (_UINT32_(0x1) << MPDDRC_CR_SUP_DDR3_Pos)            /* (MPDDRC_CR) Supply DDR3-SDRAM or DDR3L-SDRAM Mask */
#define MPDDRC_CR_SUP_DDR3(value)             (MPDDRC_CR_SUP_DDR3_Msk & (_UINT32_(value) << MPDDRC_CR_SUP_DDR3_Pos)) /* Assignment of value for SUP_DDR3 in the MPDDRC_CR register */
#define   MPDDRC_CR_SUP_DDR3_0_Val            _UINT32_(0x0)                                        /* (MPDDRC_CR) 1.35V DDR3L-SDRAM is used.  */
#define   MPDDRC_CR_SUP_DDR3_1_Val            _UINT32_(0x1)                                        /* (MPDDRC_CR) 1.5V DDR3-SDRAM is used.  */
#define MPDDRC_CR_SUP_DDR3_0                  (MPDDRC_CR_SUP_DDR3_0_Val << MPDDRC_CR_SUP_DDR3_Pos) /* (MPDDRC_CR) 1.35V DDR3L-SDRAM is used. Position */
#define MPDDRC_CR_SUP_DDR3_1                  (MPDDRC_CR_SUP_DDR3_1_Val << MPDDRC_CR_SUP_DDR3_Pos) /* (MPDDRC_CR) 1.5V DDR3-SDRAM is used. Position */
#define MPDDRC_CR_DQMS_Pos                    _UINT32_(16)                                         /* (MPDDRC_CR) Mask Data is Shared Position */
#define MPDDRC_CR_DQMS_Msk                    (_UINT32_(0x1) << MPDDRC_CR_DQMS_Pos)                /* (MPDDRC_CR) Mask Data is Shared Mask */
#define MPDDRC_CR_DQMS(value)                 (MPDDRC_CR_DQMS_Msk & (_UINT32_(value) << MPDDRC_CR_DQMS_Pos)) /* Assignment of value for DQMS in the MPDDRC_CR register */
#define   MPDDRC_CR_DQMS_NOT_SHARED_Val       _UINT32_(0x0)                                        /* (MPDDRC_CR) DQM is not shared with another controller  */
#define   MPDDRC_CR_DQMS_SHARED_Val           _UINT32_(0x1)                                        /* (MPDDRC_CR) DQM is shared with another controller  */
#define MPDDRC_CR_DQMS_NOT_SHARED             (MPDDRC_CR_DQMS_NOT_SHARED_Val << MPDDRC_CR_DQMS_Pos) /* (MPDDRC_CR) DQM is not shared with another controller Position */
#define MPDDRC_CR_DQMS_SHARED                 (MPDDRC_CR_DQMS_SHARED_Val << MPDDRC_CR_DQMS_Pos)    /* (MPDDRC_CR) DQM is shared with another controller Position */
#define MPDDRC_CR_NB_Pos                      _UINT32_(20)                                         /* (MPDDRC_CR) Number of Banks Position */
#define MPDDRC_CR_NB_Msk                      (_UINT32_(0x1) << MPDDRC_CR_NB_Pos)                  /* (MPDDRC_CR) Number of Banks Mask */
#define MPDDRC_CR_NB(value)                   (MPDDRC_CR_NB_Msk & (_UINT32_(value) << MPDDRC_CR_NB_Pos)) /* Assignment of value for NB in the MPDDRC_CR register */
#define   MPDDRC_CR_NB_4_BANKS_Val            _UINT32_(0x0)                                        /* (MPDDRC_CR) 4-bank memory devices  */
#define   MPDDRC_CR_NB_8_BANKS_Val            _UINT32_(0x1)                                        /* (MPDDRC_CR) 8 banks. Only possible when using DDR2-SDRAMand DDR3-SDRAM devices.  */
#define MPDDRC_CR_NB_4_BANKS                  (MPDDRC_CR_NB_4_BANKS_Val << MPDDRC_CR_NB_Pos)       /* (MPDDRC_CR) 4-bank memory devices Position */
#define MPDDRC_CR_NB_8_BANKS                  (MPDDRC_CR_NB_8_BANKS_Val << MPDDRC_CR_NB_Pos)       /* (MPDDRC_CR) 8 banks. Only possible when using DDR2-SDRAMand DDR3-SDRAM devices. Position */
#define MPDDRC_CR_NDQS_Pos                    _UINT32_(21)                                         /* (MPDDRC_CR) Not DQS. Position */
#define MPDDRC_CR_NDQS_Msk                    (_UINT32_(0x1) << MPDDRC_CR_NDQS_Pos)                /* (MPDDRC_CR) Not DQS. Mask */
#define MPDDRC_CR_NDQS(value)                 (MPDDRC_CR_NDQS_Msk & (_UINT32_(value) << MPDDRC_CR_NDQS_Pos)) /* Assignment of value for NDQS in the MPDDRC_CR register */
#define   MPDDRC_CR_NDQS_ENABLED_Val          _UINT32_(0x0)                                        /* (MPDDRC_CR) 'Not DQS' is enabled.  */
#define   MPDDRC_CR_NDQS_DISABLED_Val         _UINT32_(0x1)                                        /* (MPDDRC_CR) 'Not DQS' is disabled.  */
#define MPDDRC_CR_NDQS_ENABLED                (MPDDRC_CR_NDQS_ENABLED_Val << MPDDRC_CR_NDQS_Pos)   /* (MPDDRC_CR) 'Not DQS' is enabled. Position */
#define MPDDRC_CR_NDQS_DISABLED               (MPDDRC_CR_NDQS_DISABLED_Val << MPDDRC_CR_NDQS_Pos)  /* (MPDDRC_CR) 'Not DQS' is disabled. Position */
#define MPDDRC_CR_DECOD_Pos                   _UINT32_(22)                                         /* (MPDDRC_CR) Type of Decoding Position */
#define MPDDRC_CR_DECOD_Msk                   (_UINT32_(0x1) << MPDDRC_CR_DECOD_Pos)               /* (MPDDRC_CR) Type of Decoding Mask */
#define MPDDRC_CR_DECOD(value)                (MPDDRC_CR_DECOD_Msk & (_UINT32_(value) << MPDDRC_CR_DECOD_Pos)) /* Assignment of value for DECOD in the MPDDRC_CR register */
#define   MPDDRC_CR_DECOD_SEQUENTIAL_Val      _UINT32_(0x0)                                        /* (MPDDRC_CR) Method for address mapping where banks alternate at each last DDR-SDRAM page of the current bank.  */
#define   MPDDRC_CR_DECOD_INTERLEAVED_Val     _UINT32_(0x1)                                        /* (MPDDRC_CR) Method for address mapping where banks alternate at each DDR-SDRAM end of page of the current bank.  */
#define MPDDRC_CR_DECOD_SEQUENTIAL            (MPDDRC_CR_DECOD_SEQUENTIAL_Val << MPDDRC_CR_DECOD_Pos) /* (MPDDRC_CR) Method for address mapping where banks alternate at each last DDR-SDRAM page of the current bank. Position */
#define MPDDRC_CR_DECOD_INTERLEAVED           (MPDDRC_CR_DECOD_INTERLEAVED_Val << MPDDRC_CR_DECOD_Pos) /* (MPDDRC_CR) Method for address mapping where banks alternate at each DDR-SDRAM end of page of the current bank. Position */
#define MPDDRC_CR_UNAL_Pos                    _UINT32_(23)                                         /* (MPDDRC_CR) This bit must always be written to 1 Position */
#define MPDDRC_CR_UNAL_Msk                    (_UINT32_(0x1) << MPDDRC_CR_UNAL_Pos)                /* (MPDDRC_CR) This bit must always be written to 1 Mask */
#define MPDDRC_CR_UNAL(value)                 (MPDDRC_CR_UNAL_Msk & (_UINT32_(value) << MPDDRC_CR_UNAL_Pos)) /* Assignment of value for UNAL in the MPDDRC_CR register */
#define MPDDRC_CR_CAS_WR_Pos                  _UINT32_(26)                                         /* (MPDDRC_CR) CAS Write Latency Position */
#define MPDDRC_CR_CAS_WR_Msk                  (_UINT32_(0x7) << MPDDRC_CR_CAS_WR_Pos)              /* (MPDDRC_CR) CAS Write Latency Mask */
#define MPDDRC_CR_CAS_WR(value)               (MPDDRC_CR_CAS_WR_Msk & (_UINT32_(value) << MPDDRC_CR_CAS_WR_Pos)) /* Assignment of value for CAS_WR in the MPDDRC_CR register */
#define   MPDDRC_CR_CAS_WR_DDR3_CAS5_Val      _UINT32_(0x5)                                        /* (MPDDRC_CR) DDR3 CAS write latency 5, DLL must be enabled, DLL On mode  */
#define   MPDDRC_CR_CAS_WR_DDR3_CAS6_Val      _UINT32_(0x6)                                        /* (MPDDRC_CR) DDR3 CAS write latency 6, DLL enabled or not, DLL On/Off mode  */
#define MPDDRC_CR_CAS_WR_DDR3_CAS5            (MPDDRC_CR_CAS_WR_DDR3_CAS5_Val << MPDDRC_CR_CAS_WR_Pos) /* (MPDDRC_CR) DDR3 CAS write latency 5, DLL must be enabled, DLL On mode Position */
#define MPDDRC_CR_CAS_WR_DDR3_CAS6            (MPDDRC_CR_CAS_WR_DDR3_CAS6_Val << MPDDRC_CR_CAS_WR_Pos) /* (MPDDRC_CR) DDR3 CAS write latency 6, DLL enabled or not, DLL On/Off mode Position */
#define MPDDRC_CR_Msk                         _UINT32_(0x1CF1F3FF)                                 /* (MPDDRC_CR) Register Mask  */

#define MPDDRC_CR_SUP_DDR_Pos                 _UINT32_(15)                                         /* (MPDDRC_CR Position) Supply DDR3-SDRAM or DDR3L-SDRAM */
#define MPDDRC_CR_SUP_DDR_Msk                 (_UINT32_(0x1) << MPDDRC_CR_SUP_DDR_Pos)             /* (MPDDRC_CR Mask) SUP_DDR */
#define MPDDRC_CR_SUP_DDR(value)              (MPDDRC_CR_SUP_DDR_Msk & (_UINT32_(value) << MPDDRC_CR_SUP_DDR_Pos)) 

/* -------- MPDDRC_TPR0 : (MPDDRC Offset: 0x0C) (R/W 32) Timing Parameter 0 Register -------- */
#define MPDDRC_TPR0_RESETVALUE                _UINT32_(0x20227225)                                 /*  (MPDDRC_TPR0) Timing Parameter 0 Register  Reset Value */

#define MPDDRC_TPR0_TRAS_Pos                  _UINT32_(0)                                          /* (MPDDRC_TPR0) Active to Precharge Delay Position */
#define MPDDRC_TPR0_TRAS_Msk                  (_UINT32_(0xF) << MPDDRC_TPR0_TRAS_Pos)              /* (MPDDRC_TPR0) Active to Precharge Delay Mask */
#define MPDDRC_TPR0_TRAS(value)               (MPDDRC_TPR0_TRAS_Msk & (_UINT32_(value) << MPDDRC_TPR0_TRAS_Pos)) /* Assignment of value for TRAS in the MPDDRC_TPR0 register */
#define MPDDRC_TPR0_TRCD_Pos                  _UINT32_(4)                                          /* (MPDDRC_TPR0) Row to Column Delay Position */
#define MPDDRC_TPR0_TRCD_Msk                  (_UINT32_(0xF) << MPDDRC_TPR0_TRCD_Pos)              /* (MPDDRC_TPR0) Row to Column Delay Mask */
#define MPDDRC_TPR0_TRCD(value)               (MPDDRC_TPR0_TRCD_Msk & (_UINT32_(value) << MPDDRC_TPR0_TRCD_Pos)) /* Assignment of value for TRCD in the MPDDRC_TPR0 register */
#define MPDDRC_TPR0_TWR_Pos                   _UINT32_(8)                                          /* (MPDDRC_TPR0) Write Recovery Delay Position */
#define MPDDRC_TPR0_TWR_Msk                   (_UINT32_(0xF) << MPDDRC_TPR0_TWR_Pos)               /* (MPDDRC_TPR0) Write Recovery Delay Mask */
#define MPDDRC_TPR0_TWR(value)                (MPDDRC_TPR0_TWR_Msk & (_UINT32_(value) << MPDDRC_TPR0_TWR_Pos)) /* Assignment of value for TWR in the MPDDRC_TPR0 register */
#define MPDDRC_TPR0_TRC_Pos                   _UINT32_(12)                                         /* (MPDDRC_TPR0) Row Cycle Delay Position */
#define MPDDRC_TPR0_TRC_Msk                   (_UINT32_(0xF) << MPDDRC_TPR0_TRC_Pos)               /* (MPDDRC_TPR0) Row Cycle Delay Mask */
#define MPDDRC_TPR0_TRC(value)                (MPDDRC_TPR0_TRC_Msk & (_UINT32_(value) << MPDDRC_TPR0_TRC_Pos)) /* Assignment of value for TRC in the MPDDRC_TPR0 register */
#define MPDDRC_TPR0_TRP_Pos                   _UINT32_(16)                                         /* (MPDDRC_TPR0) Row Precharge Delay Position */
#define MPDDRC_TPR0_TRP_Msk                   (_UINT32_(0xF) << MPDDRC_TPR0_TRP_Pos)               /* (MPDDRC_TPR0) Row Precharge Delay Mask */
#define MPDDRC_TPR0_TRP(value)                (MPDDRC_TPR0_TRP_Msk & (_UINT32_(value) << MPDDRC_TPR0_TRP_Pos)) /* Assignment of value for TRP in the MPDDRC_TPR0 register */
#define MPDDRC_TPR0_TRRD_Pos                  _UINT32_(20)                                         /* (MPDDRC_TPR0) Active BankA to Active BankB Position */
#define MPDDRC_TPR0_TRRD_Msk                  (_UINT32_(0xF) << MPDDRC_TPR0_TRRD_Pos)              /* (MPDDRC_TPR0) Active BankA to Active BankB Mask */
#define MPDDRC_TPR0_TRRD(value)               (MPDDRC_TPR0_TRRD_Msk & (_UINT32_(value) << MPDDRC_TPR0_TRRD_Pos)) /* Assignment of value for TRRD in the MPDDRC_TPR0 register */
#define MPDDRC_TPR0_TWTR_Pos                  _UINT32_(24)                                         /* (MPDDRC_TPR0) Internal Write to Read Delay Position */
#define MPDDRC_TPR0_TWTR_Msk                  (_UINT32_(0x7) << MPDDRC_TPR0_TWTR_Pos)              /* (MPDDRC_TPR0) Internal Write to Read Delay Mask */
#define MPDDRC_TPR0_TWTR(value)               (MPDDRC_TPR0_TWTR_Msk & (_UINT32_(value) << MPDDRC_TPR0_TWTR_Pos)) /* Assignment of value for TWTR in the MPDDRC_TPR0 register */
#define MPDDRC_TPR0_TMRD_Pos                  _UINT32_(28)                                         /* (MPDDRC_TPR0) Load Mode Register Command to Activate or Refresh Command Position */
#define MPDDRC_TPR0_TMRD_Msk                  (_UINT32_(0xF) << MPDDRC_TPR0_TMRD_Pos)              /* (MPDDRC_TPR0) Load Mode Register Command to Activate or Refresh Command Mask */
#define MPDDRC_TPR0_TMRD(value)               (MPDDRC_TPR0_TMRD_Msk & (_UINT32_(value) << MPDDRC_TPR0_TMRD_Pos)) /* Assignment of value for TMRD in the MPDDRC_TPR0 register */
#define MPDDRC_TPR0_Msk                       _UINT32_(0xF7FFFFFF)                                 /* (MPDDRC_TPR0) Register Mask  */


/* -------- MPDDRC_TPR1 : (MPDDRC Offset: 0x10) (R/W 32) Timing Parameter 1 Register -------- */
#define MPDDRC_TPR1_RESETVALUE                _UINT32_(0x3C80808)                                  /*  (MPDDRC_TPR1) Timing Parameter 1 Register  Reset Value */

#define MPDDRC_TPR1_TRFC_Pos                  _UINT32_(0)                                          /* (MPDDRC_TPR1) Row Refresh Cycle Position */
#define MPDDRC_TPR1_TRFC_Msk                  (_UINT32_(0x7F) << MPDDRC_TPR1_TRFC_Pos)             /* (MPDDRC_TPR1) Row Refresh Cycle Mask */
#define MPDDRC_TPR1_TRFC(value)               (MPDDRC_TPR1_TRFC_Msk & (_UINT32_(value) << MPDDRC_TPR1_TRFC_Pos)) /* Assignment of value for TRFC in the MPDDRC_TPR1 register */
#define MPDDRC_TPR1_TXSNR_Pos                 _UINT32_(8)                                          /* (MPDDRC_TPR1) Exit Self-refresh Delay to Non-Read Command Position */
#define MPDDRC_TPR1_TXSNR_Msk                 (_UINT32_(0xFF) << MPDDRC_TPR1_TXSNR_Pos)            /* (MPDDRC_TPR1) Exit Self-refresh Delay to Non-Read Command Mask */
#define MPDDRC_TPR1_TXSNR(value)              (MPDDRC_TPR1_TXSNR_Msk & (_UINT32_(value) << MPDDRC_TPR1_TXSNR_Pos)) /* Assignment of value for TXSNR in the MPDDRC_TPR1 register */
#define MPDDRC_TPR1_TXSRD_Pos                 _UINT32_(16)                                         /* (MPDDRC_TPR1) Exit Self-refresh Delay to Read Command Position */
#define MPDDRC_TPR1_TXSRD_Msk                 (_UINT32_(0xFF) << MPDDRC_TPR1_TXSRD_Pos)            /* (MPDDRC_TPR1) Exit Self-refresh Delay to Read Command Mask */
#define MPDDRC_TPR1_TXSRD(value)              (MPDDRC_TPR1_TXSRD_Msk & (_UINT32_(value) << MPDDRC_TPR1_TXSRD_Pos)) /* Assignment of value for TXSRD in the MPDDRC_TPR1 register */
#define MPDDRC_TPR1_TXP_Pos                   _UINT32_(24)                                         /* (MPDDRC_TPR1) Exit Powerdown Delay to First Command Position */
#define MPDDRC_TPR1_TXP_Msk                   (_UINT32_(0xF) << MPDDRC_TPR1_TXP_Pos)               /* (MPDDRC_TPR1) Exit Powerdown Delay to First Command Mask */
#define MPDDRC_TPR1_TXP(value)                (MPDDRC_TPR1_TXP_Msk & (_UINT32_(value) << MPDDRC_TPR1_TXP_Pos)) /* Assignment of value for TXP in the MPDDRC_TPR1 register */
#define MPDDRC_TPR1_Msk                       _UINT32_(0x0FFFFF7F)                                 /* (MPDDRC_TPR1) Register Mask  */


/* -------- MPDDRC_TPR2 : (MPDDRC Offset: 0x14) (R/W 32) Timing Parameter 2 Register -------- */
#define MPDDRC_TPR2_RESETVALUE                _UINT32_(0x42062)                                    /*  (MPDDRC_TPR2) Timing Parameter 2 Register  Reset Value */

#define MPDDRC_TPR2_TXARD_Pos                 _UINT32_(0)                                          /* (MPDDRC_TPR2) Exit Active Power Down Delay to Read Command in Mode "Fast Exit" Position */
#define MPDDRC_TPR2_TXARD_Msk                 (_UINT32_(0xF) << MPDDRC_TPR2_TXARD_Pos)             /* (MPDDRC_TPR2) Exit Active Power Down Delay to Read Command in Mode "Fast Exit" Mask */
#define MPDDRC_TPR2_TXARD(value)              (MPDDRC_TPR2_TXARD_Msk & (_UINT32_(value) << MPDDRC_TPR2_TXARD_Pos)) /* Assignment of value for TXARD in the MPDDRC_TPR2 register */
#define MPDDRC_TPR2_TXARDS_Pos                _UINT32_(4)                                          /* (MPDDRC_TPR2) Exit Active Power Down Delay to Read Command in Mode "Slow Exit" Position */
#define MPDDRC_TPR2_TXARDS_Msk                (_UINT32_(0xF) << MPDDRC_TPR2_TXARDS_Pos)            /* (MPDDRC_TPR2) Exit Active Power Down Delay to Read Command in Mode "Slow Exit" Mask */
#define MPDDRC_TPR2_TXARDS(value)             (MPDDRC_TPR2_TXARDS_Msk & (_UINT32_(value) << MPDDRC_TPR2_TXARDS_Pos)) /* Assignment of value for TXARDS in the MPDDRC_TPR2 register */
#define MPDDRC_TPR2_TRPA_Pos                  _UINT32_(8)                                          /* (MPDDRC_TPR2) Row Precharge All Delay Position */
#define MPDDRC_TPR2_TRPA_Msk                  (_UINT32_(0xF) << MPDDRC_TPR2_TRPA_Pos)              /* (MPDDRC_TPR2) Row Precharge All Delay Mask */
#define MPDDRC_TPR2_TRPA(value)               (MPDDRC_TPR2_TRPA_Msk & (_UINT32_(value) << MPDDRC_TPR2_TRPA_Pos)) /* Assignment of value for TRPA in the MPDDRC_TPR2 register */
#define MPDDRC_TPR2_TRTP_Pos                  _UINT32_(12)                                         /* (MPDDRC_TPR2) Read to Precharge Position */
#define MPDDRC_TPR2_TRTP_Msk                  (_UINT32_(0x7) << MPDDRC_TPR2_TRTP_Pos)              /* (MPDDRC_TPR2) Read to Precharge Mask */
#define MPDDRC_TPR2_TRTP(value)               (MPDDRC_TPR2_TRTP_Msk & (_UINT32_(value) << MPDDRC_TPR2_TRTP_Pos)) /* Assignment of value for TRTP in the MPDDRC_TPR2 register */
#define MPDDRC_TPR2_TFAW_Pos                  _UINT32_(16)                                         /* (MPDDRC_TPR2) Four Active Windows Position */
#define MPDDRC_TPR2_TFAW_Msk                  (_UINT32_(0xF) << MPDDRC_TPR2_TFAW_Pos)              /* (MPDDRC_TPR2) Four Active Windows Mask */
#define MPDDRC_TPR2_TFAW(value)               (MPDDRC_TPR2_TFAW_Msk & (_UINT32_(value) << MPDDRC_TPR2_TFAW_Pos)) /* Assignment of value for TFAW in the MPDDRC_TPR2 register */
#define MPDDRC_TPR2_TMOD_Pos                  _UINT32_(20)                                         /* (MPDDRC_TPR2) Mode Register Set Command Update Delay Position */
#define MPDDRC_TPR2_TMOD_Msk                  (_UINT32_(0xF) << MPDDRC_TPR2_TMOD_Pos)              /* (MPDDRC_TPR2) Mode Register Set Command Update Delay Mask */
#define MPDDRC_TPR2_TMOD(value)               (MPDDRC_TPR2_TMOD_Msk & (_UINT32_(value) << MPDDRC_TPR2_TMOD_Pos)) /* Assignment of value for TMOD in the MPDDRC_TPR2 register */
#define MPDDRC_TPR2_Msk                       _UINT32_(0x00FF7FFF)                                 /* (MPDDRC_TPR2) Register Mask  */


/* -------- MPDDRC_LPR : (MPDDRC Offset: 0x1C) (R/W 32) Low-Power Register -------- */
#define MPDDRC_LPR_RESETVALUE                 _UINT32_(0x10000)                                    /*  (MPDDRC_LPR) Low-Power Register  Reset Value */

#define MPDDRC_LPR_LPCB_Pos                   _UINT32_(0)                                          /* (MPDDRC_LPR) Low-power Command Bit Position */
#define MPDDRC_LPR_LPCB_Msk                   (_UINT32_(0x3) << MPDDRC_LPR_LPCB_Pos)               /* (MPDDRC_LPR) Low-power Command Bit Mask */
#define MPDDRC_LPR_LPCB(value)                (MPDDRC_LPR_LPCB_Msk & (_UINT32_(value) << MPDDRC_LPR_LPCB_Pos)) /* Assignment of value for LPCB in the MPDDRC_LPR register */
#define   MPDDRC_LPR_LPCB_NOLOWPOWER_Val      _UINT32_(0x0)                                        /* (MPDDRC_LPR) Low-power feature is inhibited. No Powerdown, Self-refresh and Deep power modes are issued to the DDR-SDRAM device.  */
#define   MPDDRC_LPR_LPCB_SELFREFRESH_Val     _UINT32_(0x1)                                        /* (MPDDRC_LPR) The MPDDRC issues a self-refresh command to the DDR-SDRAM device, the clock(s) is/are deactivated and the CKE signal is set low. The DDR-SDRAM device leaves the Self-refresh mode when accessed and reenters it after the access.  */
#define   MPDDRC_LPR_LPCB_POWERDOWN_Val       _UINT32_(0x2)                                        /* (MPDDRC_LPR) The MPDDRC issues a Powerdown command to the DDR-SDRAM device after each access, the CKE signal is set low. The DDR-SDRAM device leaves the Powerdown mode when accessed and reenters it after the access.  */
#define MPDDRC_LPR_LPCB_NOLOWPOWER            (MPDDRC_LPR_LPCB_NOLOWPOWER_Val << MPDDRC_LPR_LPCB_Pos) /* (MPDDRC_LPR) Low-power feature is inhibited. No Powerdown, Self-refresh and Deep power modes are issued to the DDR-SDRAM device. Position */
#define MPDDRC_LPR_LPCB_SELFREFRESH           (MPDDRC_LPR_LPCB_SELFREFRESH_Val << MPDDRC_LPR_LPCB_Pos) /* (MPDDRC_LPR) The MPDDRC issues a self-refresh command to the DDR-SDRAM device, the clock(s) is/are deactivated and the CKE signal is set low. The DDR-SDRAM device leaves the Self-refresh mode when accessed and reenters it after the access. Position */
#define MPDDRC_LPR_LPCB_POWERDOWN             (MPDDRC_LPR_LPCB_POWERDOWN_Val << MPDDRC_LPR_LPCB_Pos) /* (MPDDRC_LPR) The MPDDRC issues a Powerdown command to the DDR-SDRAM device after each access, the CKE signal is set low. The DDR-SDRAM device leaves the Powerdown mode when accessed and reenters it after the access. Position */
#define MPDDRC_LPR_CLK_FR_Pos                 _UINT32_(2)                                          /* (MPDDRC_LPR) Clock Frozen Command Bit Position */
#define MPDDRC_LPR_CLK_FR_Msk                 (_UINT32_(0x1) << MPDDRC_LPR_CLK_FR_Pos)             /* (MPDDRC_LPR) Clock Frozen Command Bit Mask */
#define MPDDRC_LPR_CLK_FR(value)              (MPDDRC_LPR_CLK_FR_Msk & (_UINT32_(value) << MPDDRC_LPR_CLK_FR_Pos)) /* Assignment of value for CLK_FR in the MPDDRC_LPR register */
#define   MPDDRC_LPR_CLK_FR_DISABLED_Val      _UINT32_(0x0)                                        /* (MPDDRC_LPR) Clock(s) is/are not frozen.  */
#define   MPDDRC_LPR_CLK_FR_ENABLED_Val       _UINT32_(0x1)                                        /* (MPDDRC_LPR) Clock(s) is/are frozen.  */
#define MPDDRC_LPR_CLK_FR_DISABLED            (MPDDRC_LPR_CLK_FR_DISABLED_Val << MPDDRC_LPR_CLK_FR_Pos) /* (MPDDRC_LPR) Clock(s) is/are not frozen. Position */
#define MPDDRC_LPR_CLK_FR_ENABLED             (MPDDRC_LPR_CLK_FR_ENABLED_Val << MPDDRC_LPR_CLK_FR_Pos) /* (MPDDRC_LPR) Clock(s) is/are frozen. Position */
#define MPDDRC_LPR_TIMEOUT_Pos                _UINT32_(12)                                         /* (MPDDRC_LPR) Time Between Last Transfer and Low-Power Mode Position */
#define MPDDRC_LPR_TIMEOUT_Msk                (_UINT32_(0x3) << MPDDRC_LPR_TIMEOUT_Pos)            /* (MPDDRC_LPR) Time Between Last Transfer and Low-Power Mode Mask */
#define MPDDRC_LPR_TIMEOUT(value)             (MPDDRC_LPR_TIMEOUT_Msk & (_UINT32_(value) << MPDDRC_LPR_TIMEOUT_Pos)) /* Assignment of value for TIMEOUT in the MPDDRC_LPR register */
#define   MPDDRC_LPR_TIMEOUT_NONE_Val         _UINT32_(0x0)                                        /* (MPDDRC_LPR) SDRAM Low-power mode is activated immediately after the end of the last transfer.  */
#define   MPDDRC_LPR_TIMEOUT_DELAY_64_CLK_Val _UINT32_(0x1)                                        /* (MPDDRC_LPR) SDRAM Low-power mode is activated 64 clock cycles after the end of the last transfer.  */
#define   MPDDRC_LPR_TIMEOUT_DELAY_128_CLK_Val _UINT32_(0x2)                                        /* (MPDDRC_LPR) SDRAM Low-power mode is activated 128 clock cycles after the end of the last transfer.  */
#define MPDDRC_LPR_TIMEOUT_NONE               (MPDDRC_LPR_TIMEOUT_NONE_Val << MPDDRC_LPR_TIMEOUT_Pos) /* (MPDDRC_LPR) SDRAM Low-power mode is activated immediately after the end of the last transfer. Position */
#define MPDDRC_LPR_TIMEOUT_DELAY_64_CLK       (MPDDRC_LPR_TIMEOUT_DELAY_64_CLK_Val << MPDDRC_LPR_TIMEOUT_Pos) /* (MPDDRC_LPR) SDRAM Low-power mode is activated 64 clock cycles after the end of the last transfer. Position */
#define MPDDRC_LPR_TIMEOUT_DELAY_128_CLK      (MPDDRC_LPR_TIMEOUT_DELAY_128_CLK_Val << MPDDRC_LPR_TIMEOUT_Pos) /* (MPDDRC_LPR) SDRAM Low-power mode is activated 128 clock cycles after the end of the last transfer. Position */
#define MPDDRC_LPR_SELFAUTO_Pos               _UINT32_(14)                                         /* (MPDDRC_LPR) Self-refresh Exit Autorefresh Position */
#define MPDDRC_LPR_SELFAUTO_Msk               (_UINT32_(0x1) << MPDDRC_LPR_SELFAUTO_Pos)           /* (MPDDRC_LPR) Self-refresh Exit Autorefresh Mask */
#define MPDDRC_LPR_SELFAUTO(value)            (MPDDRC_LPR_SELFAUTO_Msk & (_UINT32_(value) << MPDDRC_LPR_SELFAUTO_Pos)) /* Assignment of value for SELFAUTO in the MPDDRC_LPR register */
#define   MPDDRC_LPR_SELFAUTO_0_Val           _UINT32_(0x0)                                        /* (MPDDRC_LPR) Upon exiting Self-refresh mode, active command is immediately performed after tXSNR. The autorefresh command is issued every 15.6 \xb5 s or less.  */
#define   MPDDRC_LPR_SELFAUTO_1_Val           _UINT32_(0x1)                                        /* (MPDDRC_LPR) Upon exiting Self-refresh mode, autorefresh command is immediately performed after tXSNR.  */
#define MPDDRC_LPR_SELFAUTO_0                 (MPDDRC_LPR_SELFAUTO_0_Val << MPDDRC_LPR_SELFAUTO_Pos) /* (MPDDRC_LPR) Upon exiting Self-refresh mode, active command is immediately performed after tXSNR. The autorefresh command is issued every 15.6 \xb5 s or less. Position */
#define MPDDRC_LPR_SELFAUTO_1                 (MPDDRC_LPR_SELFAUTO_1_Val << MPDDRC_LPR_SELFAUTO_Pos) /* (MPDDRC_LPR) Upon exiting Self-refresh mode, autorefresh command is immediately performed after tXSNR. Position */
#define MPDDRC_LPR_SRT_Pos                    _UINT32_(15)                                         /* (MPDDRC_LPR) High Temperature Self-refresh Rate Position */
#define MPDDRC_LPR_SRT_Msk                    (_UINT32_(0x1) << MPDDRC_LPR_SRT_Pos)                /* (MPDDRC_LPR) High Temperature Self-refresh Rate Mask */
#define MPDDRC_LPR_SRT(value)                 (MPDDRC_LPR_SRT_Msk & (_UINT32_(value) << MPDDRC_LPR_SRT_Pos)) /* Assignment of value for SRT in the MPDDRC_LPR register */
#define   MPDDRC_LPR_SRT_0_Val                _UINT32_(0x0)                                        /* (MPDDRC_LPR) 1x refresh rate. Industrial and automative devices with temperatures that do not exceed 85\xfb C.  */
#define   MPDDRC_LPR_SRT_1_Val                _UINT32_(0x1)                                        /* (MPDDRC_LPR) 2x refresh rate. Provides a faster rate on industrial and automotive devices if temperature exceeds 85\xfb C.  */
#define MPDDRC_LPR_SRT_0                      (MPDDRC_LPR_SRT_0_Val << MPDDRC_LPR_SRT_Pos)         /* (MPDDRC_LPR) 1x refresh rate. Industrial and automative devices with temperatures that do not exceed 85\xfb C. Position */
#define MPDDRC_LPR_SRT_1                      (MPDDRC_LPR_SRT_1_Val << MPDDRC_LPR_SRT_Pos)         /* (MPDDRC_LPR) 2x refresh rate. Provides a faster rate on industrial and automotive devices if temperature exceeds 85\xfb C. Position */
#define MPDDRC_LPR_APDE_Pos                   _UINT32_(16)                                         /* (MPDDRC_LPR) Active Power Down Exit Time Position */
#define MPDDRC_LPR_APDE_Msk                   (_UINT32_(0x1) << MPDDRC_LPR_APDE_Pos)               /* (MPDDRC_LPR) Active Power Down Exit Time Mask */
#define MPDDRC_LPR_APDE(value)                (MPDDRC_LPR_APDE_Msk & (_UINT32_(value) << MPDDRC_LPR_APDE_Pos)) /* Assignment of value for APDE in the MPDDRC_LPR register */
#define   MPDDRC_LPR_APDE_DDR2_FAST_EXIT_Val  _UINT32_(0x0)                                        /* (MPDDRC_LPR) Fast Exit from Power Down. DDR2-SDRAM and DDR3-SDRAM devices only.  */
#define   MPDDRC_LPR_APDE_DDR2_SLOW_EXIT_Val  _UINT32_(0x1)                                        /* (MPDDRC_LPR) Slow Exit from Power Down. DDR2-SDRAM and DDR3-SDRAM devices only.  */
#define MPDDRC_LPR_APDE_DDR2_FAST_EXIT        (MPDDRC_LPR_APDE_DDR2_FAST_EXIT_Val << MPDDRC_LPR_APDE_Pos) /* (MPDDRC_LPR) Fast Exit from Power Down. DDR2-SDRAM and DDR3-SDRAM devices only. Position */
#define MPDDRC_LPR_APDE_DDR2_SLOW_EXIT        (MPDDRC_LPR_APDE_DDR2_SLOW_EXIT_Val << MPDDRC_LPR_APDE_Pos) /* (MPDDRC_LPR) Slow Exit from Power Down. DDR2-SDRAM and DDR3-SDRAM devices only. Position */
#define MPDDRC_LPR_ASR_Pos                    _UINT32_(17)                                         /* (MPDDRC_LPR) Auto Self-refresh Position */
#define MPDDRC_LPR_ASR_Msk                    (_UINT32_(0x1) << MPDDRC_LPR_ASR_Pos)                /* (MPDDRC_LPR) Auto Self-refresh Mask */
#define MPDDRC_LPR_ASR(value)                 (MPDDRC_LPR_ASR_Msk & (_UINT32_(value) << MPDDRC_LPR_ASR_Pos)) /* Assignment of value for ASR in the MPDDRC_LPR register */
#define   MPDDRC_LPR_ASR_0_Val                _UINT32_(0x0)                                        /* (MPDDRC_LPR) Manual Self-refresh reference must be applied.  */
#define   MPDDRC_LPR_ASR_1_Val                _UINT32_(0x1)                                        /* (MPDDRC_LPR) DRAM manages Self-refresh entry in either the normal or extended temperature range. In this mode, DRAM manages Self-refresh power consumption when operating conditions change - lower at low temperatures and higher at high temperatures.  */
#define MPDDRC_LPR_ASR_0                      (MPDDRC_LPR_ASR_0_Val << MPDDRC_LPR_ASR_Pos)         /* (MPDDRC_LPR) Manual Self-refresh reference must be applied. Position */
#define MPDDRC_LPR_ASR_1                      (MPDDRC_LPR_ASR_1_Val << MPDDRC_LPR_ASR_Pos)         /* (MPDDRC_LPR) DRAM manages Self-refresh entry in either the normal or extended temperature range. In this mode, DRAM manages Self-refresh power consumption when operating conditions change - lower at low temperatures and higher at high temperatures. Position */
#define MPDDRC_LPR_UPD_MR_Pos                 _UINT32_(20)                                         /* (MPDDRC_LPR) Update Load Mode Register and Extended Mode Register Position */
#define MPDDRC_LPR_UPD_MR_Msk                 (_UINT32_(0x3) << MPDDRC_LPR_UPD_MR_Pos)             /* (MPDDRC_LPR) Update Load Mode Register and Extended Mode Register Mask */
#define MPDDRC_LPR_UPD_MR(value)              (MPDDRC_LPR_UPD_MR_Msk & (_UINT32_(value) << MPDDRC_LPR_UPD_MR_Pos)) /* Assignment of value for UPD_MR in the MPDDRC_LPR register */
#define   MPDDRC_LPR_UPD_MR_NO_UPDATE_Val     _UINT32_(0x0)                                        /* (MPDDRC_LPR) Update of Load Mode and Extended Mode registers is disabled.  */
#define   MPDDRC_LPR_UPD_MR_UPDATE_SHAREDBUS_Val _UINT32_(0x1)                                        /* (MPDDRC_LPR) MPDDRC shares an external bus. Automatic update is done during a refresh command and a pending read or write access in the SDRAM device.  */
#define   MPDDRC_LPR_UPD_MR_UPDATE_NOSHAREDBUS_Val _UINT32_(0x2)                                        /* (MPDDRC_LPR) MPDDRC does not share an external bus. Automatic update is done before entering Self-refresh mode.  */
#define MPDDRC_LPR_UPD_MR_NO_UPDATE           (MPDDRC_LPR_UPD_MR_NO_UPDATE_Val << MPDDRC_LPR_UPD_MR_Pos) /* (MPDDRC_LPR) Update of Load Mode and Extended Mode registers is disabled. Position */
#define MPDDRC_LPR_UPD_MR_UPDATE_SHAREDBUS    (MPDDRC_LPR_UPD_MR_UPDATE_SHAREDBUS_Val << MPDDRC_LPR_UPD_MR_Pos) /* (MPDDRC_LPR) MPDDRC shares an external bus. Automatic update is done during a refresh command and a pending read or write access in the SDRAM device. Position */
#define MPDDRC_LPR_UPD_MR_UPDATE_NOSHAREDBUS  (MPDDRC_LPR_UPD_MR_UPDATE_NOSHAREDBUS_Val << MPDDRC_LPR_UPD_MR_Pos) /* (MPDDRC_LPR) MPDDRC does not share an external bus. Automatic update is done before entering Self-refresh mode. Position */
#define MPDDRC_LPR_CHG_FRQ_Pos                _UINT32_(24)                                         /* (MPDDRC_LPR) Change Clock Frequency During Self-refresh Mode Position */
#define MPDDRC_LPR_CHG_FRQ_Msk                (_UINT32_(0x1) << MPDDRC_LPR_CHG_FRQ_Pos)            /* (MPDDRC_LPR) Change Clock Frequency During Self-refresh Mode Mask */
#define MPDDRC_LPR_CHG_FRQ(value)             (MPDDRC_LPR_CHG_FRQ_Msk & (_UINT32_(value) << MPDDRC_LPR_CHG_FRQ_Pos)) /* Assignment of value for CHG_FRQ in the MPDDRC_LPR register */
#define MPDDRC_LPR_SELF_DONE_Pos              _UINT32_(25)                                         /* (MPDDRC_LPR) Self-refresh is Done (read-only) Position */
#define MPDDRC_LPR_SELF_DONE_Msk              (_UINT32_(0x1) << MPDDRC_LPR_SELF_DONE_Pos)          /* (MPDDRC_LPR) Self-refresh is Done (read-only) Mask */
#define MPDDRC_LPR_SELF_DONE(value)           (MPDDRC_LPR_SELF_DONE_Msk & (_UINT32_(value) << MPDDRC_LPR_SELF_DONE_Pos)) /* Assignment of value for SELF_DONE in the MPDDRC_LPR register */
#define MPDDRC_LPR_DISTOEN_DONE_Pos           _UINT32_(26)                                         /* (MPDDRC_LPR) DLL Disabled to DLL Enabled is Done (read-only) Position */
#define MPDDRC_LPR_DISTOEN_DONE_Msk           (_UINT32_(0x1) << MPDDRC_LPR_DISTOEN_DONE_Pos)       /* (MPDDRC_LPR) DLL Disabled to DLL Enabled is Done (read-only) Mask */
#define MPDDRC_LPR_DISTOEN_DONE(value)        (MPDDRC_LPR_DISTOEN_DONE_Msk & (_UINT32_(value) << MPDDRC_LPR_DISTOEN_DONE_Pos)) /* Assignment of value for DISTOEN_DONE in the MPDDRC_LPR register */
#define MPDDRC_LPR_Msk                        _UINT32_(0x0733F007)                                 /* (MPDDRC_LPR) Register Mask  */


/* -------- MPDDRC_MD : (MPDDRC Offset: 0x20) (R/W 32) Memory Device Register -------- */
#define MPDDRC_MD_RESETVALUE                  _UINT32_(0x13)                                       /*  (MPDDRC_MD) Memory Device Register  Reset Value */

#define MPDDRC_MD_MD_Pos                      _UINT32_(0)                                          /* (MPDDRC_MD) Memory Device Position */
#define MPDDRC_MD_MD_Msk                      (_UINT32_(0x7) << MPDDRC_MD_MD_Pos)                  /* (MPDDRC_MD) Memory Device Mask */
#define MPDDRC_MD_MD(value)                   (MPDDRC_MD_MD_Msk & (_UINT32_(value) << MPDDRC_MD_MD_Pos)) /* Assignment of value for MD in the MPDDRC_MD register */
#define   MPDDRC_MD_MD_DDR3_SDRAM_Val         _UINT32_(0x4)                                        /* (MPDDRC_MD) DDR3-SDRAM  */
#define   MPDDRC_MD_MD_DDR2_SDRAM_Val         _UINT32_(0x6)                                        /* (MPDDRC_MD) DDR2-SDRAM  */
#define MPDDRC_MD_MD_DDR3_SDRAM               (MPDDRC_MD_MD_DDR3_SDRAM_Val << MPDDRC_MD_MD_Pos)    /* (MPDDRC_MD) DDR3-SDRAM Position */
#define MPDDRC_MD_MD_DDR2_SDRAM               (MPDDRC_MD_MD_DDR2_SDRAM_Val << MPDDRC_MD_MD_Pos)    /* (MPDDRC_MD) DDR2-SDRAM Position */
#define MPDDRC_MD_DBW_Pos                     _UINT32_(4)                                          /* (MPDDRC_MD) Data Bus Width Position */
#define MPDDRC_MD_DBW_Msk                     (_UINT32_(0x1) << MPDDRC_MD_DBW_Pos)                 /* (MPDDRC_MD) Data Bus Width Mask */
#define MPDDRC_MD_DBW(value)                  (MPDDRC_MD_DBW_Msk & (_UINT32_(value) << MPDDRC_MD_DBW_Pos)) /* Assignment of value for DBW in the MPDDRC_MD register */
#define   MPDDRC_MD_DBW_DBW_16_BITS_Val       _UINT32_(0x1)                                        /* (MPDDRC_MD) Data bus width is 16 bits.  */
#define MPDDRC_MD_DBW_DBW_16_BITS             (MPDDRC_MD_DBW_DBW_16_BITS_Val << MPDDRC_MD_DBW_Pos) /* (MPDDRC_MD) Data bus width is 16 bits. Position */
#define MPDDRC_MD_Msk                         _UINT32_(0x00000017)                                 /* (MPDDRC_MD) Register Mask  */


/* -------- MPDDRC_DDR3_CAL : (MPDDRC Offset: 0x2C) (R/W 32) DDR3 Calibration Register -------- */
#define MPDDRC_DDR3_CAL_RESETVALUE            _UINT32_(0x00)                                       /*  (MPDDRC_DDR3_CAL) DDR3 Calibration Register  Reset Value */

#define MPDDRC_DDR3_CAL_COUNT_CAL_Pos         _UINT32_(0)                                          /* (MPDDRC_DDR3_CAL) DDR3 Calibration Timer Count Position */
#define MPDDRC_DDR3_CAL_COUNT_CAL_Msk         (_UINT32_(0xFFFF) << MPDDRC_DDR3_CAL_COUNT_CAL_Pos)  /* (MPDDRC_DDR3_CAL) DDR3 Calibration Timer Count Mask */
#define MPDDRC_DDR3_CAL_COUNT_CAL(value)      (MPDDRC_DDR3_CAL_COUNT_CAL_Msk & (_UINT32_(value) << MPDDRC_DDR3_CAL_COUNT_CAL_Pos)) /* Assignment of value for COUNT_CAL in the MPDDRC_DDR3_CAL register */
#define MPDDRC_DDR3_CAL_Msk                   _UINT32_(0x0000FFFF)                                 /* (MPDDRC_DDR3_CAL) Register Mask  */


/* -------- MPDDRC_DDR3_TIM_CAL : (MPDDRC Offset: 0x30) (R/W 32) DDR3 Timing Calibration Register -------- */
#define MPDDRC_DDR3_TIM_CAL_RESETVALUE        _UINT32_(0x06)                                       /*  (MPDDRC_DDR3_TIM_CAL) DDR3 Timing Calibration Register  Reset Value */

#define MPDDRC_DDR3_TIM_CAL_ZQCS_Pos          _UINT32_(0)                                          /* (MPDDRC_DDR3_TIM_CAL) ZQ Calibration Short Position */
#define MPDDRC_DDR3_TIM_CAL_ZQCS_Msk          (_UINT32_(0xFF) << MPDDRC_DDR3_TIM_CAL_ZQCS_Pos)     /* (MPDDRC_DDR3_TIM_CAL) ZQ Calibration Short Mask */
#define MPDDRC_DDR3_TIM_CAL_ZQCS(value)       (MPDDRC_DDR3_TIM_CAL_ZQCS_Msk & (_UINT32_(value) << MPDDRC_DDR3_TIM_CAL_ZQCS_Pos)) /* Assignment of value for ZQCS in the MPDDRC_DDR3_TIM_CAL register */
#define MPDDRC_DDR3_TIM_CAL_Msk               _UINT32_(0x000000FF)                                 /* (MPDDRC_DDR3_TIM_CAL) Register Mask  */


/* -------- MPDDRC_IO_CALIBR : (MPDDRC Offset: 0x34) (R/W 32) I/O Calibration Register -------- */
#define MPDDRC_IO_CALIBR_RESETVALUE           _UINT32_(0x870000)                                   /*  (MPDDRC_IO_CALIBR) I/O Calibration Register  Reset Value */

#define MPDDRC_IO_CALIBR_CK_F_RANGE_Pos       _UINT32_(0)                                          /* (MPDDRC_IO_CALIBR) DDRCK Maximum Clock Frequency Range Position */
#define MPDDRC_IO_CALIBR_CK_F_RANGE_Msk       (_UINT32_(0x1F) << MPDDRC_IO_CALIBR_CK_F_RANGE_Pos)  /* (MPDDRC_IO_CALIBR) DDRCK Maximum Clock Frequency Range Mask */
#define MPDDRC_IO_CALIBR_CK_F_RANGE(value)    (MPDDRC_IO_CALIBR_CK_F_RANGE_Msk & (_UINT32_(value) << MPDDRC_IO_CALIBR_CK_F_RANGE_Pos)) /* Assignment of value for CK_F_RANGE in the MPDDRC_IO_CALIBR register */
#define MPDDRC_IO_CALIBR_EN_CALIB_Pos         _UINT32_(5)                                          /* (MPDDRC_IO_CALIBR) Enable Calibration Position */
#define MPDDRC_IO_CALIBR_EN_CALIB_Msk         (_UINT32_(0x1) << MPDDRC_IO_CALIBR_EN_CALIB_Pos)     /* (MPDDRC_IO_CALIBR) Enable Calibration Mask */
#define MPDDRC_IO_CALIBR_EN_CALIB(value)      (MPDDRC_IO_CALIBR_EN_CALIB_Msk & (_UINT32_(value) << MPDDRC_IO_CALIBR_EN_CALIB_Pos)) /* Assignment of value for EN_CALIB in the MPDDRC_IO_CALIBR register */
#define   MPDDRC_IO_CALIBR_EN_CALIB_DISABLE_CALIBRATION_Val _UINT32_(0x0)                                        /* (MPDDRC_IO_CALIBR) Calibration is disabled.  */
#define   MPDDRC_IO_CALIBR_EN_CALIB_ENABLE_CALIBRATION_Val _UINT32_(0x1)                                        /* (MPDDRC_IO_CALIBR) Calibration is enabled.  */
#define MPDDRC_IO_CALIBR_EN_CALIB_DISABLE_CALIBRATION (MPDDRC_IO_CALIBR_EN_CALIB_DISABLE_CALIBRATION_Val << MPDDRC_IO_CALIBR_EN_CALIB_Pos) /* (MPDDRC_IO_CALIBR) Calibration is disabled. Position */
#define MPDDRC_IO_CALIBR_EN_CALIB_ENABLE_CALIBRATION (MPDDRC_IO_CALIBR_EN_CALIB_ENABLE_CALIBRATION_Val << MPDDRC_IO_CALIBR_EN_CALIB_Pos) /* (MPDDRC_IO_CALIBR) Calibration is enabled. Position */
#define MPDDRC_IO_CALIBR_TZQIO_Pos            _UINT32_(6)                                          /* (MPDDRC_IO_CALIBR) IO Calibration Position */
#define MPDDRC_IO_CALIBR_TZQIO_Msk            (_UINT32_(0x1FF) << MPDDRC_IO_CALIBR_TZQIO_Pos)      /* (MPDDRC_IO_CALIBR) IO Calibration Mask */
#define MPDDRC_IO_CALIBR_TZQIO(value)         (MPDDRC_IO_CALIBR_TZQIO_Msk & (_UINT32_(value) << MPDDRC_IO_CALIBR_TZQIO_Pos)) /* Assignment of value for TZQIO in the MPDDRC_IO_CALIBR register */
#define MPDDRC_IO_CALIBR_CALCODEP_Pos         _UINT32_(16)                                         /* (MPDDRC_IO_CALIBR) Number of P-type Transistors (read-only) Position */
#define MPDDRC_IO_CALIBR_CALCODEP_Msk         (_UINT32_(0xF) << MPDDRC_IO_CALIBR_CALCODEP_Pos)     /* (MPDDRC_IO_CALIBR) Number of P-type Transistors (read-only) Mask */
#define MPDDRC_IO_CALIBR_CALCODEP(value)      (MPDDRC_IO_CALIBR_CALCODEP_Msk & (_UINT32_(value) << MPDDRC_IO_CALIBR_CALCODEP_Pos)) /* Assignment of value for CALCODEP in the MPDDRC_IO_CALIBR register */
#define MPDDRC_IO_CALIBR_CALCODEN_Pos         _UINT32_(20)                                         /* (MPDDRC_IO_CALIBR) Number of N-type Transistors (read-only) Position */
#define MPDDRC_IO_CALIBR_CALCODEN_Msk         (_UINT32_(0xF) << MPDDRC_IO_CALIBR_CALCODEN_Pos)     /* (MPDDRC_IO_CALIBR) Number of N-type Transistors (read-only) Mask */
#define MPDDRC_IO_CALIBR_CALCODEN(value)      (MPDDRC_IO_CALIBR_CALCODEN_Msk & (_UINT32_(value) << MPDDRC_IO_CALIBR_CALCODEN_Pos)) /* Assignment of value for CALCODEN in the MPDDRC_IO_CALIBR register */
#define MPDDRC_IO_CALIBR_Msk                  _UINT32_(0x00FF7FFF)                                 /* (MPDDRC_IO_CALIBR) Register Mask  */


/* -------- MPDDRC_OCMS : (MPDDRC Offset: 0x38) (R/W 32) OCMS Register -------- */
#define MPDDRC_OCMS_RESETVALUE                _UINT32_(0x00)                                       /*  (MPDDRC_OCMS) OCMS Register  Reset Value */

#define MPDDRC_OCMS_SCR_EN_Pos                _UINT32_(0)                                          /* (MPDDRC_OCMS) Scrambling Enable Position */
#define MPDDRC_OCMS_SCR_EN_Msk                (_UINT32_(0x1) << MPDDRC_OCMS_SCR_EN_Pos)            /* (MPDDRC_OCMS) Scrambling Enable Mask */
#define MPDDRC_OCMS_SCR_EN(value)             (MPDDRC_OCMS_SCR_EN_Msk & (_UINT32_(value) << MPDDRC_OCMS_SCR_EN_Pos)) /* Assignment of value for SCR_EN in the MPDDRC_OCMS register */
#define   MPDDRC_OCMS_SCR_EN_0_Val            _UINT32_(0x0)                                        /* (MPDDRC_OCMS) Disables "Off-chip" scrambling for SDRAM access.  */
#define   MPDDRC_OCMS_SCR_EN_1_Val            _UINT32_(0x1)                                        /* (MPDDRC_OCMS) Enables "Off-chip" scrambling for SDRAM access.  */
#define MPDDRC_OCMS_SCR_EN_0                  (MPDDRC_OCMS_SCR_EN_0_Val << MPDDRC_OCMS_SCR_EN_Pos) /* (MPDDRC_OCMS) Disables "Off-chip" scrambling for SDRAM access. Position */
#define MPDDRC_OCMS_SCR_EN_1                  (MPDDRC_OCMS_SCR_EN_1_Val << MPDDRC_OCMS_SCR_EN_Pos) /* (MPDDRC_OCMS) Enables "Off-chip" scrambling for SDRAM access. Position */
#define MPDDRC_OCMS_TAMPCLR_Pos               _UINT32_(4)                                          /* (MPDDRC_OCMS) Tamper Clear Enable Position */
#define MPDDRC_OCMS_TAMPCLR_Msk               (_UINT32_(0x1) << MPDDRC_OCMS_TAMPCLR_Pos)           /* (MPDDRC_OCMS) Tamper Clear Enable Mask */
#define MPDDRC_OCMS_TAMPCLR(value)            (MPDDRC_OCMS_TAMPCLR_Msk & (_UINT32_(value) << MPDDRC_OCMS_TAMPCLR_Pos)) /* Assignment of value for TAMPCLR in the MPDDRC_OCMS register */
#define   MPDDRC_OCMS_TAMPCLR_0_Val           _UINT32_(0x0)                                        /* (MPDDRC_OCMS) A tamper detection event has no effect on MPDDRC scrambling keys.  */
#define   MPDDRC_OCMS_TAMPCLR_1_Val           _UINT32_(0x1)                                        /* (MPDDRC_OCMS) A tamper detection event immediately clears MPDDRC scrambling keys.  */
#define MPDDRC_OCMS_TAMPCLR_0                 (MPDDRC_OCMS_TAMPCLR_0_Val << MPDDRC_OCMS_TAMPCLR_Pos) /* (MPDDRC_OCMS) A tamper detection event has no effect on MPDDRC scrambling keys. Position */
#define MPDDRC_OCMS_TAMPCLR_1                 (MPDDRC_OCMS_TAMPCLR_1_Val << MPDDRC_OCMS_TAMPCLR_Pos) /* (MPDDRC_OCMS) A tamper detection event immediately clears MPDDRC scrambling keys. Position */
#define MPDDRC_OCMS_Msk                       _UINT32_(0x00000011)                                 /* (MPDDRC_OCMS) Register Mask  */


/* -------- MPDDRC_OCMS_KEY1 : (MPDDRC Offset: 0x3C) ( /W 32) OCMS KEY1 Register -------- */
#define MPDDRC_OCMS_KEY1_KEY1_Pos             _UINT32_(0)                                          /* (MPDDRC_OCMS_KEY1) Off-chip Memory Scrambling (OCMS) Key Part 1 Position */
#define MPDDRC_OCMS_KEY1_KEY1_Msk             (_UINT32_(0xFFFFFFFF) << MPDDRC_OCMS_KEY1_KEY1_Pos)  /* (MPDDRC_OCMS_KEY1) Off-chip Memory Scrambling (OCMS) Key Part 1 Mask */
#define MPDDRC_OCMS_KEY1_KEY1(value)          (MPDDRC_OCMS_KEY1_KEY1_Msk & (_UINT32_(value) << MPDDRC_OCMS_KEY1_KEY1_Pos)) /* Assignment of value for KEY1 in the MPDDRC_OCMS_KEY1 register */
#define MPDDRC_OCMS_KEY1_Msk                  _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_OCMS_KEY1) Register Mask  */


/* -------- MPDDRC_OCMS_KEY2 : (MPDDRC Offset: 0x40) ( /W 32) OCMS KEY2 Register -------- */
#define MPDDRC_OCMS_KEY2_KEY2_Pos             _UINT32_(0)                                          /* (MPDDRC_OCMS_KEY2) Off-chip Memory Scrambling (OCMS) Key Part 2 Position */
#define MPDDRC_OCMS_KEY2_KEY2_Msk             (_UINT32_(0xFFFFFFFF) << MPDDRC_OCMS_KEY2_KEY2_Pos)  /* (MPDDRC_OCMS_KEY2) Off-chip Memory Scrambling (OCMS) Key Part 2 Mask */
#define MPDDRC_OCMS_KEY2_KEY2(value)          (MPDDRC_OCMS_KEY2_KEY2_Msk & (_UINT32_(value) << MPDDRC_OCMS_KEY2_KEY2_Pos)) /* Assignment of value for KEY2 in the MPDDRC_OCMS_KEY2 register */
#define MPDDRC_OCMS_KEY2_Msk                  _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_OCMS_KEY2) Register Mask  */


/* -------- MPDDRC_CONF_ARBITER : (MPDDRC Offset: 0x44) (R/W 32) Configuration Arbiter Register -------- */
#define MPDDRC_CONF_ARBITER_RESETVALUE        _UINT32_(0x00)                                       /*  (MPDDRC_CONF_ARBITER) Configuration Arbiter Register  Reset Value */

#define MPDDRC_CONF_ARBITER_ARB_Pos           _UINT32_(0)                                          /* (MPDDRC_CONF_ARBITER) Type of Arbitration Position */
#define MPDDRC_CONF_ARBITER_ARB_Msk           (_UINT32_(0x3) << MPDDRC_CONF_ARBITER_ARB_Pos)       /* (MPDDRC_CONF_ARBITER) Type of Arbitration Mask */
#define MPDDRC_CONF_ARBITER_ARB(value)        (MPDDRC_CONF_ARBITER_ARB_Msk & (_UINT32_(value) << MPDDRC_CONF_ARBITER_ARB_Pos)) /* Assignment of value for ARB in the MPDDRC_CONF_ARBITER register */
#define   MPDDRC_CONF_ARBITER_ARB_ROUND_Val   _UINT32_(0x0)                                        /* (MPDDRC_CONF_ARBITER) Round-Robin Policy  */
#define   MPDDRC_CONF_ARBITER_ARB_NB_REQUEST_Val _UINT32_(0x1)                                        /* (MPDDRC_CONF_ARBITER) Request Policy  */
#define   MPDDRC_CONF_ARBITER_ARB_BANDWIDTH_Val _UINT32_(0x2)                                        /* (MPDDRC_CONF_ARBITER) Bandwidth Policy  */
#define   MPDDRC_CONF_ARBITER_ARB_LQOS_Val    _UINT32_(0x3)                                        /* (MPDDRC_CONF_ARBITER) Quality of Service Policy  */
#define MPDDRC_CONF_ARBITER_ARB_ROUND         (MPDDRC_CONF_ARBITER_ARB_ROUND_Val << MPDDRC_CONF_ARBITER_ARB_Pos) /* (MPDDRC_CONF_ARBITER) Round-Robin Policy Position */
#define MPDDRC_CONF_ARBITER_ARB_NB_REQUEST    (MPDDRC_CONF_ARBITER_ARB_NB_REQUEST_Val << MPDDRC_CONF_ARBITER_ARB_Pos) /* (MPDDRC_CONF_ARBITER) Request Policy Position */
#define MPDDRC_CONF_ARBITER_ARB_BANDWIDTH     (MPDDRC_CONF_ARBITER_ARB_BANDWIDTH_Val << MPDDRC_CONF_ARBITER_ARB_Pos) /* (MPDDRC_CONF_ARBITER) Bandwidth Policy Position */
#define MPDDRC_CONF_ARBITER_ARB_LQOS          (MPDDRC_CONF_ARBITER_ARB_LQOS_Val << MPDDRC_CONF_ARBITER_ARB_Pos) /* (MPDDRC_CONF_ARBITER) Quality of Service Policy Position */
#define MPDDRC_CONF_ARBITER_KEEP_LAYER_Pos    _UINT32_(2)                                          /* (MPDDRC_CONF_ARBITER) Layer (Port) Kept by Host Position */
#define MPDDRC_CONF_ARBITER_KEEP_LAYER_Msk    (_UINT32_(0x1) << MPDDRC_CONF_ARBITER_KEEP_LAYER_Pos) /* (MPDDRC_CONF_ARBITER) Layer (Port) Kept by Host Mask */
#define MPDDRC_CONF_ARBITER_KEEP_LAYER(value) (MPDDRC_CONF_ARBITER_KEEP_LAYER_Msk & (_UINT32_(value) << MPDDRC_CONF_ARBITER_KEEP_LAYER_Pos)) /* Assignment of value for KEEP_LAYER in the MPDDRC_CONF_ARBITER register */
#define   MPDDRC_CONF_ARBITER_KEEP_LAYER_0_Val _UINT32_(0x0)                                        /* (MPDDRC_CONF_ARBITER) No impact on arbitration scheme.  */
#define   MPDDRC_CONF_ARBITER_KEEP_LAYER_1_Val _UINT32_(0x1)                                        /* (MPDDRC_CONF_ARBITER) Some hosts, such as LCD or DMA, drive a signal named HNBREQ on the system bus to indicate the number of transfers to be performed. The host with the highest LQOS value and a HNBREQ value different from 0 continues to be granted, even during a last data phase with IDLE cycles. This function is effective if the type of arbitration is LQOS.  */
#define MPDDRC_CONF_ARBITER_KEEP_LAYER_0      (MPDDRC_CONF_ARBITER_KEEP_LAYER_0_Val << MPDDRC_CONF_ARBITER_KEEP_LAYER_Pos) /* (MPDDRC_CONF_ARBITER) No impact on arbitration scheme. Position */
#define MPDDRC_CONF_ARBITER_KEEP_LAYER_1      (MPDDRC_CONF_ARBITER_KEEP_LAYER_1_Val << MPDDRC_CONF_ARBITER_KEEP_LAYER_Pos) /* (MPDDRC_CONF_ARBITER) Some hosts, such as LCD or DMA, drive a signal named HNBREQ on the system bus to indicate the number of transfers to be performed. The host with the highest LQOS value and a HNBREQ value different from 0 continues to be granted, even during a last data phase with IDLE cycles. This function is effective if the type of arbitration is LQOS. Position */
#define MPDDRC_CONF_ARBITER_BDW_MAX_CUR_Pos   _UINT32_(3)                                          /* (MPDDRC_CONF_ARBITER) Bandwidth Max or Current Position */
#define MPDDRC_CONF_ARBITER_BDW_MAX_CUR_Msk   (_UINT32_(0x1) << MPDDRC_CONF_ARBITER_BDW_MAX_CUR_Pos) /* (MPDDRC_CONF_ARBITER) Bandwidth Max or Current Mask */
#define MPDDRC_CONF_ARBITER_BDW_MAX_CUR(value) (MPDDRC_CONF_ARBITER_BDW_MAX_CUR_Msk & (_UINT32_(value) << MPDDRC_CONF_ARBITER_BDW_MAX_CUR_Pos)) /* Assignment of value for BDW_MAX_CUR in the MPDDRC_CONF_ARBITER register */
#define   MPDDRC_CONF_ARBITER_BDW_MAX_CUR_0_Val _UINT32_(0x0)                                        /* (MPDDRC_CONF_ARBITER) Current bandwidth is displayed.  */
#define   MPDDRC_CONF_ARBITER_BDW_MAX_CUR_1_Val _UINT32_(0x1)                                        /* (MPDDRC_CONF_ARBITER) Maximum of the bandwidth is displayed.  */
#define MPDDRC_CONF_ARBITER_BDW_MAX_CUR_0     (MPDDRC_CONF_ARBITER_BDW_MAX_CUR_0_Val << MPDDRC_CONF_ARBITER_BDW_MAX_CUR_Pos) /* (MPDDRC_CONF_ARBITER) Current bandwidth is displayed. Position */
#define MPDDRC_CONF_ARBITER_BDW_MAX_CUR_1     (MPDDRC_CONF_ARBITER_BDW_MAX_CUR_1_Val << MPDDRC_CONF_ARBITER_BDW_MAX_CUR_Pos) /* (MPDDRC_CONF_ARBITER) Maximum of the bandwidth is displayed. Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P0_Pos      _UINT32_(8)                                          /* (MPDDRC_CONF_ARBITER) Request or Word from Port X Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P0_Msk      (_UINT32_(0x1) << MPDDRC_CONF_ARBITER_RQ_WD_P0_Pos)  /* (MPDDRC_CONF_ARBITER) Request or Word from Port X Mask */
#define MPDDRC_CONF_ARBITER_RQ_WD_P0(value)   (MPDDRC_CONF_ARBITER_RQ_WD_P0_Msk & (_UINT32_(value) << MPDDRC_CONF_ARBITER_RQ_WD_P0_Pos)) /* Assignment of value for RQ_WD_P0 in the MPDDRC_CONF_ARBITER register */
#define   MPDDRC_CONF_ARBITER_RQ_WD_P0_0_Val  _UINT32_(0x0)                                        /* (MPDDRC_CONF_ARBITER) Number of requests is selected.  */
#define   MPDDRC_CONF_ARBITER_RQ_WD_P0_1_Val  _UINT32_(0x1)                                        /* (MPDDRC_CONF_ARBITER) Number of words is selected.  */
#define MPDDRC_CONF_ARBITER_RQ_WD_P0_0        (MPDDRC_CONF_ARBITER_RQ_WD_P0_0_Val << MPDDRC_CONF_ARBITER_RQ_WD_P0_Pos) /* (MPDDRC_CONF_ARBITER) Number of requests is selected. Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P0_1        (MPDDRC_CONF_ARBITER_RQ_WD_P0_1_Val << MPDDRC_CONF_ARBITER_RQ_WD_P0_Pos) /* (MPDDRC_CONF_ARBITER) Number of words is selected. Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P1_Pos      _UINT32_(9)                                          /* (MPDDRC_CONF_ARBITER) Request or Word from Port X Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P1_Msk      (_UINT32_(0x1) << MPDDRC_CONF_ARBITER_RQ_WD_P1_Pos)  /* (MPDDRC_CONF_ARBITER) Request or Word from Port X Mask */
#define MPDDRC_CONF_ARBITER_RQ_WD_P1(value)   (MPDDRC_CONF_ARBITER_RQ_WD_P1_Msk & (_UINT32_(value) << MPDDRC_CONF_ARBITER_RQ_WD_P1_Pos)) /* Assignment of value for RQ_WD_P1 in the MPDDRC_CONF_ARBITER register */
#define   MPDDRC_CONF_ARBITER_RQ_WD_P1_0_Val  _UINT32_(0x0)                                        /* (MPDDRC_CONF_ARBITER) Number of requests is selected.  */
#define   MPDDRC_CONF_ARBITER_RQ_WD_P1_1_Val  _UINT32_(0x1)                                        /* (MPDDRC_CONF_ARBITER) Number of words is selected.  */
#define MPDDRC_CONF_ARBITER_RQ_WD_P1_0        (MPDDRC_CONF_ARBITER_RQ_WD_P1_0_Val << MPDDRC_CONF_ARBITER_RQ_WD_P1_Pos) /* (MPDDRC_CONF_ARBITER) Number of requests is selected. Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P1_1        (MPDDRC_CONF_ARBITER_RQ_WD_P1_1_Val << MPDDRC_CONF_ARBITER_RQ_WD_P1_Pos) /* (MPDDRC_CONF_ARBITER) Number of words is selected. Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P2_Pos      _UINT32_(10)                                         /* (MPDDRC_CONF_ARBITER) Request or Word from Port X Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P2_Msk      (_UINT32_(0x1) << MPDDRC_CONF_ARBITER_RQ_WD_P2_Pos)  /* (MPDDRC_CONF_ARBITER) Request or Word from Port X Mask */
#define MPDDRC_CONF_ARBITER_RQ_WD_P2(value)   (MPDDRC_CONF_ARBITER_RQ_WD_P2_Msk & (_UINT32_(value) << MPDDRC_CONF_ARBITER_RQ_WD_P2_Pos)) /* Assignment of value for RQ_WD_P2 in the MPDDRC_CONF_ARBITER register */
#define   MPDDRC_CONF_ARBITER_RQ_WD_P2_0_Val  _UINT32_(0x0)                                        /* (MPDDRC_CONF_ARBITER) Number of requests is selected.  */
#define   MPDDRC_CONF_ARBITER_RQ_WD_P2_1_Val  _UINT32_(0x1)                                        /* (MPDDRC_CONF_ARBITER) Number of words is selected.  */
#define MPDDRC_CONF_ARBITER_RQ_WD_P2_0        (MPDDRC_CONF_ARBITER_RQ_WD_P2_0_Val << MPDDRC_CONF_ARBITER_RQ_WD_P2_Pos) /* (MPDDRC_CONF_ARBITER) Number of requests is selected. Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P2_1        (MPDDRC_CONF_ARBITER_RQ_WD_P2_1_Val << MPDDRC_CONF_ARBITER_RQ_WD_P2_Pos) /* (MPDDRC_CONF_ARBITER) Number of words is selected. Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P3_Pos      _UINT32_(11)                                         /* (MPDDRC_CONF_ARBITER) Request or Word from Port X Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P3_Msk      (_UINT32_(0x1) << MPDDRC_CONF_ARBITER_RQ_WD_P3_Pos)  /* (MPDDRC_CONF_ARBITER) Request or Word from Port X Mask */
#define MPDDRC_CONF_ARBITER_RQ_WD_P3(value)   (MPDDRC_CONF_ARBITER_RQ_WD_P3_Msk & (_UINT32_(value) << MPDDRC_CONF_ARBITER_RQ_WD_P3_Pos)) /* Assignment of value for RQ_WD_P3 in the MPDDRC_CONF_ARBITER register */
#define   MPDDRC_CONF_ARBITER_RQ_WD_P3_0_Val  _UINT32_(0x0)                                        /* (MPDDRC_CONF_ARBITER) Number of requests is selected.  */
#define   MPDDRC_CONF_ARBITER_RQ_WD_P3_1_Val  _UINT32_(0x1)                                        /* (MPDDRC_CONF_ARBITER) Number of words is selected.  */
#define MPDDRC_CONF_ARBITER_RQ_WD_P3_0        (MPDDRC_CONF_ARBITER_RQ_WD_P3_0_Val << MPDDRC_CONF_ARBITER_RQ_WD_P3_Pos) /* (MPDDRC_CONF_ARBITER) Number of requests is selected. Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P3_1        (MPDDRC_CONF_ARBITER_RQ_WD_P3_1_Val << MPDDRC_CONF_ARBITER_RQ_WD_P3_Pos) /* (MPDDRC_CONF_ARBITER) Number of words is selected. Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P4_Pos      _UINT32_(12)                                         /* (MPDDRC_CONF_ARBITER) Request or Word from Port X Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P4_Msk      (_UINT32_(0x1) << MPDDRC_CONF_ARBITER_RQ_WD_P4_Pos)  /* (MPDDRC_CONF_ARBITER) Request or Word from Port X Mask */
#define MPDDRC_CONF_ARBITER_RQ_WD_P4(value)   (MPDDRC_CONF_ARBITER_RQ_WD_P4_Msk & (_UINT32_(value) << MPDDRC_CONF_ARBITER_RQ_WD_P4_Pos)) /* Assignment of value for RQ_WD_P4 in the MPDDRC_CONF_ARBITER register */
#define   MPDDRC_CONF_ARBITER_RQ_WD_P4_0_Val  _UINT32_(0x0)                                        /* (MPDDRC_CONF_ARBITER) Number of requests is selected.  */
#define   MPDDRC_CONF_ARBITER_RQ_WD_P4_1_Val  _UINT32_(0x1)                                        /* (MPDDRC_CONF_ARBITER) Number of words is selected.  */
#define MPDDRC_CONF_ARBITER_RQ_WD_P4_0        (MPDDRC_CONF_ARBITER_RQ_WD_P4_0_Val << MPDDRC_CONF_ARBITER_RQ_WD_P4_Pos) /* (MPDDRC_CONF_ARBITER) Number of requests is selected. Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P4_1        (MPDDRC_CONF_ARBITER_RQ_WD_P4_1_Val << MPDDRC_CONF_ARBITER_RQ_WD_P4_Pos) /* (MPDDRC_CONF_ARBITER) Number of words is selected. Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P5_Pos      _UINT32_(13)                                         /* (MPDDRC_CONF_ARBITER) Request or Word from Port X Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P5_Msk      (_UINT32_(0x1) << MPDDRC_CONF_ARBITER_RQ_WD_P5_Pos)  /* (MPDDRC_CONF_ARBITER) Request or Word from Port X Mask */
#define MPDDRC_CONF_ARBITER_RQ_WD_P5(value)   (MPDDRC_CONF_ARBITER_RQ_WD_P5_Msk & (_UINT32_(value) << MPDDRC_CONF_ARBITER_RQ_WD_P5_Pos)) /* Assignment of value for RQ_WD_P5 in the MPDDRC_CONF_ARBITER register */
#define   MPDDRC_CONF_ARBITER_RQ_WD_P5_0_Val  _UINT32_(0x0)                                        /* (MPDDRC_CONF_ARBITER) Number of requests is selected.  */
#define   MPDDRC_CONF_ARBITER_RQ_WD_P5_1_Val  _UINT32_(0x1)                                        /* (MPDDRC_CONF_ARBITER) Number of words is selected.  */
#define MPDDRC_CONF_ARBITER_RQ_WD_P5_0        (MPDDRC_CONF_ARBITER_RQ_WD_P5_0_Val << MPDDRC_CONF_ARBITER_RQ_WD_P5_Pos) /* (MPDDRC_CONF_ARBITER) Number of requests is selected. Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P5_1        (MPDDRC_CONF_ARBITER_RQ_WD_P5_1_Val << MPDDRC_CONF_ARBITER_RQ_WD_P5_Pos) /* (MPDDRC_CONF_ARBITER) Number of words is selected. Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P6_Pos      _UINT32_(14)                                         /* (MPDDRC_CONF_ARBITER) Request or Word from Port X Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P6_Msk      (_UINT32_(0x1) << MPDDRC_CONF_ARBITER_RQ_WD_P6_Pos)  /* (MPDDRC_CONF_ARBITER) Request or Word from Port X Mask */
#define MPDDRC_CONF_ARBITER_RQ_WD_P6(value)   (MPDDRC_CONF_ARBITER_RQ_WD_P6_Msk & (_UINT32_(value) << MPDDRC_CONF_ARBITER_RQ_WD_P6_Pos)) /* Assignment of value for RQ_WD_P6 in the MPDDRC_CONF_ARBITER register */
#define   MPDDRC_CONF_ARBITER_RQ_WD_P6_0_Val  _UINT32_(0x0)                                        /* (MPDDRC_CONF_ARBITER) Number of requests is selected.  */
#define   MPDDRC_CONF_ARBITER_RQ_WD_P6_1_Val  _UINT32_(0x1)                                        /* (MPDDRC_CONF_ARBITER) Number of words is selected.  */
#define MPDDRC_CONF_ARBITER_RQ_WD_P6_0        (MPDDRC_CONF_ARBITER_RQ_WD_P6_0_Val << MPDDRC_CONF_ARBITER_RQ_WD_P6_Pos) /* (MPDDRC_CONF_ARBITER) Number of requests is selected. Position */
#define MPDDRC_CONF_ARBITER_RQ_WD_P6_1        (MPDDRC_CONF_ARBITER_RQ_WD_P6_1_Val << MPDDRC_CONF_ARBITER_RQ_WD_P6_Pos) /* (MPDDRC_CONF_ARBITER) Number of words is selected. Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P0_Pos      _UINT32_(16)                                         /* (MPDDRC_CONF_ARBITER) Host or Software Provide Information Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P0_Msk      (_UINT32_(0x1) << MPDDRC_CONF_ARBITER_MA_PR_P0_Pos)  /* (MPDDRC_CONF_ARBITER) Host or Software Provide Information Mask */
#define MPDDRC_CONF_ARBITER_MA_PR_P0(value)   (MPDDRC_CONF_ARBITER_MA_PR_P0_Msk & (_UINT32_(value) << MPDDRC_CONF_ARBITER_MA_PR_P0_Pos)) /* Assignment of value for MA_PR_P0 in the MPDDRC_CONF_ARBITER register */
#define   MPDDRC_CONF_ARBITER_MA_PR_P0_0_Val  _UINT32_(0x0)                                        /* (MPDDRC_CONF_ARBITER) Number of requests or words is provided by the host, if the host supports this feature.  */
#define   MPDDRC_CONF_ARBITER_MA_PR_P0_1_Val  _UINT32_(0x1)                                        /* (MPDDRC_CONF_ARBITER) Number of requests or words is provided by software, see "NRQ_NWD_BDW_Px: Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3".  */
#define MPDDRC_CONF_ARBITER_MA_PR_P0_0        (MPDDRC_CONF_ARBITER_MA_PR_P0_0_Val << MPDDRC_CONF_ARBITER_MA_PR_P0_Pos) /* (MPDDRC_CONF_ARBITER) Number of requests or words is provided by the host, if the host supports this feature. Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P0_1        (MPDDRC_CONF_ARBITER_MA_PR_P0_1_Val << MPDDRC_CONF_ARBITER_MA_PR_P0_Pos) /* (MPDDRC_CONF_ARBITER) Number of requests or words is provided by software, see "NRQ_NWD_BDW_Px: Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3". Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P1_Pos      _UINT32_(17)                                         /* (MPDDRC_CONF_ARBITER) Host or Software Provide Information Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P1_Msk      (_UINT32_(0x1) << MPDDRC_CONF_ARBITER_MA_PR_P1_Pos)  /* (MPDDRC_CONF_ARBITER) Host or Software Provide Information Mask */
#define MPDDRC_CONF_ARBITER_MA_PR_P1(value)   (MPDDRC_CONF_ARBITER_MA_PR_P1_Msk & (_UINT32_(value) << MPDDRC_CONF_ARBITER_MA_PR_P1_Pos)) /* Assignment of value for MA_PR_P1 in the MPDDRC_CONF_ARBITER register */
#define   MPDDRC_CONF_ARBITER_MA_PR_P1_0_Val  _UINT32_(0x0)                                        /* (MPDDRC_CONF_ARBITER) Number of requests or words is provided by the host, if the host supports this feature.  */
#define   MPDDRC_CONF_ARBITER_MA_PR_P1_1_Val  _UINT32_(0x1)                                        /* (MPDDRC_CONF_ARBITER) Number of requests or words is provided by software, see "NRQ_NWD_BDW_Px: Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3".  */
#define MPDDRC_CONF_ARBITER_MA_PR_P1_0        (MPDDRC_CONF_ARBITER_MA_PR_P1_0_Val << MPDDRC_CONF_ARBITER_MA_PR_P1_Pos) /* (MPDDRC_CONF_ARBITER) Number of requests or words is provided by the host, if the host supports this feature. Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P1_1        (MPDDRC_CONF_ARBITER_MA_PR_P1_1_Val << MPDDRC_CONF_ARBITER_MA_PR_P1_Pos) /* (MPDDRC_CONF_ARBITER) Number of requests or words is provided by software, see "NRQ_NWD_BDW_Px: Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3". Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P2_Pos      _UINT32_(18)                                         /* (MPDDRC_CONF_ARBITER) Host or Software Provide Information Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P2_Msk      (_UINT32_(0x1) << MPDDRC_CONF_ARBITER_MA_PR_P2_Pos)  /* (MPDDRC_CONF_ARBITER) Host or Software Provide Information Mask */
#define MPDDRC_CONF_ARBITER_MA_PR_P2(value)   (MPDDRC_CONF_ARBITER_MA_PR_P2_Msk & (_UINT32_(value) << MPDDRC_CONF_ARBITER_MA_PR_P2_Pos)) /* Assignment of value for MA_PR_P2 in the MPDDRC_CONF_ARBITER register */
#define   MPDDRC_CONF_ARBITER_MA_PR_P2_0_Val  _UINT32_(0x0)                                        /* (MPDDRC_CONF_ARBITER) Number of requests or words is provided by the host, if the host supports this feature.  */
#define   MPDDRC_CONF_ARBITER_MA_PR_P2_1_Val  _UINT32_(0x1)                                        /* (MPDDRC_CONF_ARBITER) Number of requests or words is provided by software, see "NRQ_NWD_BDW_Px: Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3".  */
#define MPDDRC_CONF_ARBITER_MA_PR_P2_0        (MPDDRC_CONF_ARBITER_MA_PR_P2_0_Val << MPDDRC_CONF_ARBITER_MA_PR_P2_Pos) /* (MPDDRC_CONF_ARBITER) Number of requests or words is provided by the host, if the host supports this feature. Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P2_1        (MPDDRC_CONF_ARBITER_MA_PR_P2_1_Val << MPDDRC_CONF_ARBITER_MA_PR_P2_Pos) /* (MPDDRC_CONF_ARBITER) Number of requests or words is provided by software, see "NRQ_NWD_BDW_Px: Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3". Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P3_Pos      _UINT32_(19)                                         /* (MPDDRC_CONF_ARBITER) Host or Software Provide Information Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P3_Msk      (_UINT32_(0x1) << MPDDRC_CONF_ARBITER_MA_PR_P3_Pos)  /* (MPDDRC_CONF_ARBITER) Host or Software Provide Information Mask */
#define MPDDRC_CONF_ARBITER_MA_PR_P3(value)   (MPDDRC_CONF_ARBITER_MA_PR_P3_Msk & (_UINT32_(value) << MPDDRC_CONF_ARBITER_MA_PR_P3_Pos)) /* Assignment of value for MA_PR_P3 in the MPDDRC_CONF_ARBITER register */
#define   MPDDRC_CONF_ARBITER_MA_PR_P3_0_Val  _UINT32_(0x0)                                        /* (MPDDRC_CONF_ARBITER) Number of requests or words is provided by the host, if the host supports this feature.  */
#define   MPDDRC_CONF_ARBITER_MA_PR_P3_1_Val  _UINT32_(0x1)                                        /* (MPDDRC_CONF_ARBITER) Number of requests or words is provided by software, see "NRQ_NWD_BDW_Px: Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3".  */
#define MPDDRC_CONF_ARBITER_MA_PR_P3_0        (MPDDRC_CONF_ARBITER_MA_PR_P3_0_Val << MPDDRC_CONF_ARBITER_MA_PR_P3_Pos) /* (MPDDRC_CONF_ARBITER) Number of requests or words is provided by the host, if the host supports this feature. Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P3_1        (MPDDRC_CONF_ARBITER_MA_PR_P3_1_Val << MPDDRC_CONF_ARBITER_MA_PR_P3_Pos) /* (MPDDRC_CONF_ARBITER) Number of requests or words is provided by software, see "NRQ_NWD_BDW_Px: Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3". Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P4_Pos      _UINT32_(20)                                         /* (MPDDRC_CONF_ARBITER) Host or Software Provide Information Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P4_Msk      (_UINT32_(0x1) << MPDDRC_CONF_ARBITER_MA_PR_P4_Pos)  /* (MPDDRC_CONF_ARBITER) Host or Software Provide Information Mask */
#define MPDDRC_CONF_ARBITER_MA_PR_P4(value)   (MPDDRC_CONF_ARBITER_MA_PR_P4_Msk & (_UINT32_(value) << MPDDRC_CONF_ARBITER_MA_PR_P4_Pos)) /* Assignment of value for MA_PR_P4 in the MPDDRC_CONF_ARBITER register */
#define   MPDDRC_CONF_ARBITER_MA_PR_P4_0_Val  _UINT32_(0x0)                                        /* (MPDDRC_CONF_ARBITER) Number of requests or words is provided by the host, if the host supports this feature.  */
#define   MPDDRC_CONF_ARBITER_MA_PR_P4_1_Val  _UINT32_(0x1)                                        /* (MPDDRC_CONF_ARBITER) Number of requests or words is provided by software, see "NRQ_NWD_BDW_Px: Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3".  */
#define MPDDRC_CONF_ARBITER_MA_PR_P4_0        (MPDDRC_CONF_ARBITER_MA_PR_P4_0_Val << MPDDRC_CONF_ARBITER_MA_PR_P4_Pos) /* (MPDDRC_CONF_ARBITER) Number of requests or words is provided by the host, if the host supports this feature. Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P4_1        (MPDDRC_CONF_ARBITER_MA_PR_P4_1_Val << MPDDRC_CONF_ARBITER_MA_PR_P4_Pos) /* (MPDDRC_CONF_ARBITER) Number of requests or words is provided by software, see "NRQ_NWD_BDW_Px: Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3". Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P5_Pos      _UINT32_(21)                                         /* (MPDDRC_CONF_ARBITER) Host or Software Provide Information Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P5_Msk      (_UINT32_(0x1) << MPDDRC_CONF_ARBITER_MA_PR_P5_Pos)  /* (MPDDRC_CONF_ARBITER) Host or Software Provide Information Mask */
#define MPDDRC_CONF_ARBITER_MA_PR_P5(value)   (MPDDRC_CONF_ARBITER_MA_PR_P5_Msk & (_UINT32_(value) << MPDDRC_CONF_ARBITER_MA_PR_P5_Pos)) /* Assignment of value for MA_PR_P5 in the MPDDRC_CONF_ARBITER register */
#define   MPDDRC_CONF_ARBITER_MA_PR_P5_0_Val  _UINT32_(0x0)                                        /* (MPDDRC_CONF_ARBITER) Number of requests or words is provided by the host, if the host supports this feature.  */
#define   MPDDRC_CONF_ARBITER_MA_PR_P5_1_Val  _UINT32_(0x1)                                        /* (MPDDRC_CONF_ARBITER) Number of requests or words is provided by software, see "NRQ_NWD_BDW_Px: Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3".  */
#define MPDDRC_CONF_ARBITER_MA_PR_P5_0        (MPDDRC_CONF_ARBITER_MA_PR_P5_0_Val << MPDDRC_CONF_ARBITER_MA_PR_P5_Pos) /* (MPDDRC_CONF_ARBITER) Number of requests or words is provided by the host, if the host supports this feature. Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P5_1        (MPDDRC_CONF_ARBITER_MA_PR_P5_1_Val << MPDDRC_CONF_ARBITER_MA_PR_P5_Pos) /* (MPDDRC_CONF_ARBITER) Number of requests or words is provided by software, see "NRQ_NWD_BDW_Px: Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3". Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P6_Pos      _UINT32_(22)                                         /* (MPDDRC_CONF_ARBITER) Host or Software Provide Information Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P6_Msk      (_UINT32_(0x1) << MPDDRC_CONF_ARBITER_MA_PR_P6_Pos)  /* (MPDDRC_CONF_ARBITER) Host or Software Provide Information Mask */
#define MPDDRC_CONF_ARBITER_MA_PR_P6(value)   (MPDDRC_CONF_ARBITER_MA_PR_P6_Msk & (_UINT32_(value) << MPDDRC_CONF_ARBITER_MA_PR_P6_Pos)) /* Assignment of value for MA_PR_P6 in the MPDDRC_CONF_ARBITER register */
#define   MPDDRC_CONF_ARBITER_MA_PR_P6_0_Val  _UINT32_(0x0)                                        /* (MPDDRC_CONF_ARBITER) Number of requests or words is provided by the host, if the host supports this feature.  */
#define   MPDDRC_CONF_ARBITER_MA_PR_P6_1_Val  _UINT32_(0x1)                                        /* (MPDDRC_CONF_ARBITER) Number of requests or words is provided by software, see "NRQ_NWD_BDW_Px: Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3".  */
#define MPDDRC_CONF_ARBITER_MA_PR_P6_0        (MPDDRC_CONF_ARBITER_MA_PR_P6_0_Val << MPDDRC_CONF_ARBITER_MA_PR_P6_Pos) /* (MPDDRC_CONF_ARBITER) Number of requests or words is provided by the host, if the host supports this feature. Position */
#define MPDDRC_CONF_ARBITER_MA_PR_P6_1        (MPDDRC_CONF_ARBITER_MA_PR_P6_1_Val << MPDDRC_CONF_ARBITER_MA_PR_P6_Pos) /* (MPDDRC_CONF_ARBITER) Number of requests or words is provided by software, see "NRQ_NWD_BDW_Px: Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3". Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P0_Pos  _UINT32_(24)                                         /* (MPDDRC_CONF_ARBITER) Bandwidth Arbitration Mode on Port X Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P0_Msk  (_UINT32_(0x1) << MPDDRC_CONF_ARBITER_BDW_BURST_P0_Pos) /* (MPDDRC_CONF_ARBITER) Bandwidth Arbitration Mode on Port X Mask */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P0(value) (MPDDRC_CONF_ARBITER_BDW_BURST_P0_Msk & (_UINT32_(value) << MPDDRC_CONF_ARBITER_BDW_BURST_P0_Pos)) /* Assignment of value for BDW_BURST_P0 in the MPDDRC_CONF_ARBITER register */
#define   MPDDRC_CONF_ARBITER_BDW_BURST_P0_0_Val _UINT32_(0x0)                                        /* (MPDDRC_CONF_ARBITER) The arbitration is done when the bandwidth limit defined in MPDDRC_BDW_PORT_0123/456.BDW_Px is reached. If the bandwidth limit is reached during a burst access, the burst is completed.  */
#define   MPDDRC_CONF_ARBITER_BDW_BURST_P0_1_Val _UINT32_(0x1)                                        /* (MPDDRC_CONF_ARBITER) The arbitration is done when the bandwidth limit defined in MPDDRC_BDW_PORT_0123/456.BDW_Px is reached. If the bandwidth limit is reached during a burst access, the burst is broken.  */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P0_0    (MPDDRC_CONF_ARBITER_BDW_BURST_P0_0_Val << MPDDRC_CONF_ARBITER_BDW_BURST_P0_Pos) /* (MPDDRC_CONF_ARBITER) The arbitration is done when the bandwidth limit defined in MPDDRC_BDW_PORT_0123/456.BDW_Px is reached. If the bandwidth limit is reached during a burst access, the burst is completed. Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P0_1    (MPDDRC_CONF_ARBITER_BDW_BURST_P0_1_Val << MPDDRC_CONF_ARBITER_BDW_BURST_P0_Pos) /* (MPDDRC_CONF_ARBITER) The arbitration is done when the bandwidth limit defined in MPDDRC_BDW_PORT_0123/456.BDW_Px is reached. If the bandwidth limit is reached during a burst access, the burst is broken. Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P1_Pos  _UINT32_(25)                                         /* (MPDDRC_CONF_ARBITER) Bandwidth Arbitration Mode on Port X Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P1_Msk  (_UINT32_(0x1) << MPDDRC_CONF_ARBITER_BDW_BURST_P1_Pos) /* (MPDDRC_CONF_ARBITER) Bandwidth Arbitration Mode on Port X Mask */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P1(value) (MPDDRC_CONF_ARBITER_BDW_BURST_P1_Msk & (_UINT32_(value) << MPDDRC_CONF_ARBITER_BDW_BURST_P1_Pos)) /* Assignment of value for BDW_BURST_P1 in the MPDDRC_CONF_ARBITER register */
#define   MPDDRC_CONF_ARBITER_BDW_BURST_P1_0_Val _UINT32_(0x0)                                        /* (MPDDRC_CONF_ARBITER) The arbitration is done when the bandwidth limit defined in MPDDRC_BDW_PORT_0123/456.BDW_Px is reached. If the bandwidth limit is reached during a burst access, the burst is completed.  */
#define   MPDDRC_CONF_ARBITER_BDW_BURST_P1_1_Val _UINT32_(0x1)                                        /* (MPDDRC_CONF_ARBITER) The arbitration is done when the bandwidth limit defined in MPDDRC_BDW_PORT_0123/456.BDW_Px is reached. If the bandwidth limit is reached during a burst access, the burst is broken.  */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P1_0    (MPDDRC_CONF_ARBITER_BDW_BURST_P1_0_Val << MPDDRC_CONF_ARBITER_BDW_BURST_P1_Pos) /* (MPDDRC_CONF_ARBITER) The arbitration is done when the bandwidth limit defined in MPDDRC_BDW_PORT_0123/456.BDW_Px is reached. If the bandwidth limit is reached during a burst access, the burst is completed. Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P1_1    (MPDDRC_CONF_ARBITER_BDW_BURST_P1_1_Val << MPDDRC_CONF_ARBITER_BDW_BURST_P1_Pos) /* (MPDDRC_CONF_ARBITER) The arbitration is done when the bandwidth limit defined in MPDDRC_BDW_PORT_0123/456.BDW_Px is reached. If the bandwidth limit is reached during a burst access, the burst is broken. Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P2_Pos  _UINT32_(26)                                         /* (MPDDRC_CONF_ARBITER) Bandwidth Arbitration Mode on Port X Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P2_Msk  (_UINT32_(0x1) << MPDDRC_CONF_ARBITER_BDW_BURST_P2_Pos) /* (MPDDRC_CONF_ARBITER) Bandwidth Arbitration Mode on Port X Mask */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P2(value) (MPDDRC_CONF_ARBITER_BDW_BURST_P2_Msk & (_UINT32_(value) << MPDDRC_CONF_ARBITER_BDW_BURST_P2_Pos)) /* Assignment of value for BDW_BURST_P2 in the MPDDRC_CONF_ARBITER register */
#define   MPDDRC_CONF_ARBITER_BDW_BURST_P2_0_Val _UINT32_(0x0)                                        /* (MPDDRC_CONF_ARBITER) The arbitration is done when the bandwidth limit defined in MPDDRC_BDW_PORT_0123/456.BDW_Px is reached. If the bandwidth limit is reached during a burst access, the burst is completed.  */
#define   MPDDRC_CONF_ARBITER_BDW_BURST_P2_1_Val _UINT32_(0x1)                                        /* (MPDDRC_CONF_ARBITER) The arbitration is done when the bandwidth limit defined in MPDDRC_BDW_PORT_0123/456.BDW_Px is reached. If the bandwidth limit is reached during a burst access, the burst is broken.  */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P2_0    (MPDDRC_CONF_ARBITER_BDW_BURST_P2_0_Val << MPDDRC_CONF_ARBITER_BDW_BURST_P2_Pos) /* (MPDDRC_CONF_ARBITER) The arbitration is done when the bandwidth limit defined in MPDDRC_BDW_PORT_0123/456.BDW_Px is reached. If the bandwidth limit is reached during a burst access, the burst is completed. Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P2_1    (MPDDRC_CONF_ARBITER_BDW_BURST_P2_1_Val << MPDDRC_CONF_ARBITER_BDW_BURST_P2_Pos) /* (MPDDRC_CONF_ARBITER) The arbitration is done when the bandwidth limit defined in MPDDRC_BDW_PORT_0123/456.BDW_Px is reached. If the bandwidth limit is reached during a burst access, the burst is broken. Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P3_Pos  _UINT32_(27)                                         /* (MPDDRC_CONF_ARBITER) Bandwidth Arbitration Mode on Port X Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P3_Msk  (_UINT32_(0x1) << MPDDRC_CONF_ARBITER_BDW_BURST_P3_Pos) /* (MPDDRC_CONF_ARBITER) Bandwidth Arbitration Mode on Port X Mask */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P3(value) (MPDDRC_CONF_ARBITER_BDW_BURST_P3_Msk & (_UINT32_(value) << MPDDRC_CONF_ARBITER_BDW_BURST_P3_Pos)) /* Assignment of value for BDW_BURST_P3 in the MPDDRC_CONF_ARBITER register */
#define   MPDDRC_CONF_ARBITER_BDW_BURST_P3_0_Val _UINT32_(0x0)                                        /* (MPDDRC_CONF_ARBITER) The arbitration is done when the bandwidth limit defined in MPDDRC_BDW_PORT_0123/456.BDW_Px is reached. If the bandwidth limit is reached during a burst access, the burst is completed.  */
#define   MPDDRC_CONF_ARBITER_BDW_BURST_P3_1_Val _UINT32_(0x1)                                        /* (MPDDRC_CONF_ARBITER) The arbitration is done when the bandwidth limit defined in MPDDRC_BDW_PORT_0123/456.BDW_Px is reached. If the bandwidth limit is reached during a burst access, the burst is broken.  */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P3_0    (MPDDRC_CONF_ARBITER_BDW_BURST_P3_0_Val << MPDDRC_CONF_ARBITER_BDW_BURST_P3_Pos) /* (MPDDRC_CONF_ARBITER) The arbitration is done when the bandwidth limit defined in MPDDRC_BDW_PORT_0123/456.BDW_Px is reached. If the bandwidth limit is reached during a burst access, the burst is completed. Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P3_1    (MPDDRC_CONF_ARBITER_BDW_BURST_P3_1_Val << MPDDRC_CONF_ARBITER_BDW_BURST_P3_Pos) /* (MPDDRC_CONF_ARBITER) The arbitration is done when the bandwidth limit defined in MPDDRC_BDW_PORT_0123/456.BDW_Px is reached. If the bandwidth limit is reached during a burst access, the burst is broken. Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P4_Pos  _UINT32_(28)                                         /* (MPDDRC_CONF_ARBITER) Bandwidth Arbitration Mode on Port X Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P4_Msk  (_UINT32_(0x1) << MPDDRC_CONF_ARBITER_BDW_BURST_P4_Pos) /* (MPDDRC_CONF_ARBITER) Bandwidth Arbitration Mode on Port X Mask */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P4(value) (MPDDRC_CONF_ARBITER_BDW_BURST_P4_Msk & (_UINT32_(value) << MPDDRC_CONF_ARBITER_BDW_BURST_P4_Pos)) /* Assignment of value for BDW_BURST_P4 in the MPDDRC_CONF_ARBITER register */
#define   MPDDRC_CONF_ARBITER_BDW_BURST_P4_0_Val _UINT32_(0x0)                                        /* (MPDDRC_CONF_ARBITER) The arbitration is done when the bandwidth limit defined in MPDDRC_BDW_PORT_0123/456.BDW_Px is reached. If the bandwidth limit is reached during a burst access, the burst is completed.  */
#define   MPDDRC_CONF_ARBITER_BDW_BURST_P4_1_Val _UINT32_(0x1)                                        /* (MPDDRC_CONF_ARBITER) The arbitration is done when the bandwidth limit defined in MPDDRC_BDW_PORT_0123/456.BDW_Px is reached. If the bandwidth limit is reached during a burst access, the burst is broken.  */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P4_0    (MPDDRC_CONF_ARBITER_BDW_BURST_P4_0_Val << MPDDRC_CONF_ARBITER_BDW_BURST_P4_Pos) /* (MPDDRC_CONF_ARBITER) The arbitration is done when the bandwidth limit defined in MPDDRC_BDW_PORT_0123/456.BDW_Px is reached. If the bandwidth limit is reached during a burst access, the burst is completed. Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P4_1    (MPDDRC_CONF_ARBITER_BDW_BURST_P4_1_Val << MPDDRC_CONF_ARBITER_BDW_BURST_P4_Pos) /* (MPDDRC_CONF_ARBITER) The arbitration is done when the bandwidth limit defined in MPDDRC_BDW_PORT_0123/456.BDW_Px is reached. If the bandwidth limit is reached during a burst access, the burst is broken. Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P5_Pos  _UINT32_(29)                                         /* (MPDDRC_CONF_ARBITER) Bandwidth Arbitration Mode on Port X Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P5_Msk  (_UINT32_(0x1) << MPDDRC_CONF_ARBITER_BDW_BURST_P5_Pos) /* (MPDDRC_CONF_ARBITER) Bandwidth Arbitration Mode on Port X Mask */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P5(value) (MPDDRC_CONF_ARBITER_BDW_BURST_P5_Msk & (_UINT32_(value) << MPDDRC_CONF_ARBITER_BDW_BURST_P5_Pos)) /* Assignment of value for BDW_BURST_P5 in the MPDDRC_CONF_ARBITER register */
#define   MPDDRC_CONF_ARBITER_BDW_BURST_P5_0_Val _UINT32_(0x0)                                        /* (MPDDRC_CONF_ARBITER) The arbitration is done when the bandwidth limit defined in MPDDRC_BDW_PORT_0123/456.BDW_Px is reached. If the bandwidth limit is reached during a burst access, the burst is completed.  */
#define   MPDDRC_CONF_ARBITER_BDW_BURST_P5_1_Val _UINT32_(0x1)                                        /* (MPDDRC_CONF_ARBITER) The arbitration is done when the bandwidth limit defined in MPDDRC_BDW_PORT_0123/456.BDW_Px is reached. If the bandwidth limit is reached during a burst access, the burst is broken.  */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P5_0    (MPDDRC_CONF_ARBITER_BDW_BURST_P5_0_Val << MPDDRC_CONF_ARBITER_BDW_BURST_P5_Pos) /* (MPDDRC_CONF_ARBITER) The arbitration is done when the bandwidth limit defined in MPDDRC_BDW_PORT_0123/456.BDW_Px is reached. If the bandwidth limit is reached during a burst access, the burst is completed. Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P5_1    (MPDDRC_CONF_ARBITER_BDW_BURST_P5_1_Val << MPDDRC_CONF_ARBITER_BDW_BURST_P5_Pos) /* (MPDDRC_CONF_ARBITER) The arbitration is done when the bandwidth limit defined in MPDDRC_BDW_PORT_0123/456.BDW_Px is reached. If the bandwidth limit is reached during a burst access, the burst is broken. Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P6_Pos  _UINT32_(30)                                         /* (MPDDRC_CONF_ARBITER) Bandwidth Arbitration Mode on Port X Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P6_Msk  (_UINT32_(0x1) << MPDDRC_CONF_ARBITER_BDW_BURST_P6_Pos) /* (MPDDRC_CONF_ARBITER) Bandwidth Arbitration Mode on Port X Mask */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P6(value) (MPDDRC_CONF_ARBITER_BDW_BURST_P6_Msk & (_UINT32_(value) << MPDDRC_CONF_ARBITER_BDW_BURST_P6_Pos)) /* Assignment of value for BDW_BURST_P6 in the MPDDRC_CONF_ARBITER register */
#define   MPDDRC_CONF_ARBITER_BDW_BURST_P6_0_Val _UINT32_(0x0)                                        /* (MPDDRC_CONF_ARBITER) The arbitration is done when the bandwidth limit defined in MPDDRC_BDW_PORT_0123/456.BDW_Px is reached. If the bandwidth limit is reached during a burst access, the burst is completed.  */
#define   MPDDRC_CONF_ARBITER_BDW_BURST_P6_1_Val _UINT32_(0x1)                                        /* (MPDDRC_CONF_ARBITER) The arbitration is done when the bandwidth limit defined in MPDDRC_BDW_PORT_0123/456.BDW_Px is reached. If the bandwidth limit is reached during a burst access, the burst is broken.  */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P6_0    (MPDDRC_CONF_ARBITER_BDW_BURST_P6_0_Val << MPDDRC_CONF_ARBITER_BDW_BURST_P6_Pos) /* (MPDDRC_CONF_ARBITER) The arbitration is done when the bandwidth limit defined in MPDDRC_BDW_PORT_0123/456.BDW_Px is reached. If the bandwidth limit is reached during a burst access, the burst is completed. Position */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P6_1    (MPDDRC_CONF_ARBITER_BDW_BURST_P6_1_Val << MPDDRC_CONF_ARBITER_BDW_BURST_P6_Pos) /* (MPDDRC_CONF_ARBITER) The arbitration is done when the bandwidth limit defined in MPDDRC_BDW_PORT_0123/456.BDW_Px is reached. If the bandwidth limit is reached during a burst access, the burst is broken. Position */
#define MPDDRC_CONF_ARBITER_Msk               _UINT32_(0x7F7F7F0F)                                 /* (MPDDRC_CONF_ARBITER) Register Mask  */

#define MPDDRC_CONF_ARBITER_RQ_WD_P_Pos       _UINT32_(8)                                          /* (MPDDRC_CONF_ARBITER Position) Request or Word from Port X */
#define MPDDRC_CONF_ARBITER_RQ_WD_P_Msk       (_UINT32_(0x7F) << MPDDRC_CONF_ARBITER_RQ_WD_P_Pos)  /* (MPDDRC_CONF_ARBITER Mask) RQ_WD_P */
#define MPDDRC_CONF_ARBITER_RQ_WD_P(value)    (MPDDRC_CONF_ARBITER_RQ_WD_P_Msk & (_UINT32_(value) << MPDDRC_CONF_ARBITER_RQ_WD_P_Pos)) 
#define MPDDRC_CONF_ARBITER_MA_PR_P_Pos       _UINT32_(16)                                         /* (MPDDRC_CONF_ARBITER Position) Host or Software Provide Information */
#define MPDDRC_CONF_ARBITER_MA_PR_P_Msk       (_UINT32_(0x7F) << MPDDRC_CONF_ARBITER_MA_PR_P_Pos)  /* (MPDDRC_CONF_ARBITER Mask) MA_PR_P */
#define MPDDRC_CONF_ARBITER_MA_PR_P(value)    (MPDDRC_CONF_ARBITER_MA_PR_P_Msk & (_UINT32_(value) << MPDDRC_CONF_ARBITER_MA_PR_P_Pos)) 
#define MPDDRC_CONF_ARBITER_BDW_BURST_P_Pos   _UINT32_(24)                                         /* (MPDDRC_CONF_ARBITER Position) Bandwidth Arbitration Mode on Port X */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P_Msk   (_UINT32_(0x7F) << MPDDRC_CONF_ARBITER_BDW_BURST_P_Pos) /* (MPDDRC_CONF_ARBITER Mask) BDW_BURST_P */
#define MPDDRC_CONF_ARBITER_BDW_BURST_P(value) (MPDDRC_CONF_ARBITER_BDW_BURST_P_Msk & (_UINT32_(value) << MPDDRC_CONF_ARBITER_BDW_BURST_P_Pos)) 

/* -------- MPDDRC_TIMEOUT : (MPDDRC Offset: 0x48) (R/W 32) Timeout Register -------- */
#define MPDDRC_TIMEOUT_RESETVALUE             _UINT32_(0x00)                                       /*  (MPDDRC_TIMEOUT) Timeout Register  Reset Value */

#define MPDDRC_TIMEOUT_TIMEOUT_P0_Pos         _UINT32_(0)                                          /* (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3, 4, 5, 6 Position */
#define MPDDRC_TIMEOUT_TIMEOUT_P0_Msk         (_UINT32_(0xF) << MPDDRC_TIMEOUT_TIMEOUT_P0_Pos)     /* (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3, 4, 5, 6 Mask */
#define MPDDRC_TIMEOUT_TIMEOUT_P0(value)      (MPDDRC_TIMEOUT_TIMEOUT_P0_Msk & (_UINT32_(value) << MPDDRC_TIMEOUT_TIMEOUT_P0_Pos)) /* Assignment of value for TIMEOUT_P0 in the MPDDRC_TIMEOUT register */
#define MPDDRC_TIMEOUT_TIMEOUT_P1_Pos         _UINT32_(4)                                          /* (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3, 4, 5, 6 Position */
#define MPDDRC_TIMEOUT_TIMEOUT_P1_Msk         (_UINT32_(0xF) << MPDDRC_TIMEOUT_TIMEOUT_P1_Pos)     /* (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3, 4, 5, 6 Mask */
#define MPDDRC_TIMEOUT_TIMEOUT_P1(value)      (MPDDRC_TIMEOUT_TIMEOUT_P1_Msk & (_UINT32_(value) << MPDDRC_TIMEOUT_TIMEOUT_P1_Pos)) /* Assignment of value for TIMEOUT_P1 in the MPDDRC_TIMEOUT register */
#define MPDDRC_TIMEOUT_TIMEOUT_P2_Pos         _UINT32_(8)                                          /* (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3, 4, 5, 6 Position */
#define MPDDRC_TIMEOUT_TIMEOUT_P2_Msk         (_UINT32_(0xF) << MPDDRC_TIMEOUT_TIMEOUT_P2_Pos)     /* (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3, 4, 5, 6 Mask */
#define MPDDRC_TIMEOUT_TIMEOUT_P2(value)      (MPDDRC_TIMEOUT_TIMEOUT_P2_Msk & (_UINT32_(value) << MPDDRC_TIMEOUT_TIMEOUT_P2_Pos)) /* Assignment of value for TIMEOUT_P2 in the MPDDRC_TIMEOUT register */
#define MPDDRC_TIMEOUT_TIMEOUT_P3_Pos         _UINT32_(12)                                         /* (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3, 4, 5, 6 Position */
#define MPDDRC_TIMEOUT_TIMEOUT_P3_Msk         (_UINT32_(0xF) << MPDDRC_TIMEOUT_TIMEOUT_P3_Pos)     /* (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3, 4, 5, 6 Mask */
#define MPDDRC_TIMEOUT_TIMEOUT_P3(value)      (MPDDRC_TIMEOUT_TIMEOUT_P3_Msk & (_UINT32_(value) << MPDDRC_TIMEOUT_TIMEOUT_P3_Pos)) /* Assignment of value for TIMEOUT_P3 in the MPDDRC_TIMEOUT register */
#define MPDDRC_TIMEOUT_TIMEOUT_P4_Pos         _UINT32_(16)                                         /* (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3, 4, 5, 6 Position */
#define MPDDRC_TIMEOUT_TIMEOUT_P4_Msk         (_UINT32_(0xF) << MPDDRC_TIMEOUT_TIMEOUT_P4_Pos)     /* (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3, 4, 5, 6 Mask */
#define MPDDRC_TIMEOUT_TIMEOUT_P4(value)      (MPDDRC_TIMEOUT_TIMEOUT_P4_Msk & (_UINT32_(value) << MPDDRC_TIMEOUT_TIMEOUT_P4_Pos)) /* Assignment of value for TIMEOUT_P4 in the MPDDRC_TIMEOUT register */
#define MPDDRC_TIMEOUT_TIMEOUT_P5_Pos         _UINT32_(20)                                         /* (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3, 4, 5, 6 Position */
#define MPDDRC_TIMEOUT_TIMEOUT_P5_Msk         (_UINT32_(0xF) << MPDDRC_TIMEOUT_TIMEOUT_P5_Pos)     /* (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3, 4, 5, 6 Mask */
#define MPDDRC_TIMEOUT_TIMEOUT_P5(value)      (MPDDRC_TIMEOUT_TIMEOUT_P5_Msk & (_UINT32_(value) << MPDDRC_TIMEOUT_TIMEOUT_P5_Pos)) /* Assignment of value for TIMEOUT_P5 in the MPDDRC_TIMEOUT register */
#define MPDDRC_TIMEOUT_TIMEOUT_P6_Pos         _UINT32_(24)                                         /* (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3, 4, 5, 6 Position */
#define MPDDRC_TIMEOUT_TIMEOUT_P6_Msk         (_UINT32_(0xF) << MPDDRC_TIMEOUT_TIMEOUT_P6_Pos)     /* (MPDDRC_TIMEOUT) Timeout for Ports 0, 1, 2, 3, 4, 5, 6 Mask */
#define MPDDRC_TIMEOUT_TIMEOUT_P6(value)      (MPDDRC_TIMEOUT_TIMEOUT_P6_Msk & (_UINT32_(value) << MPDDRC_TIMEOUT_TIMEOUT_P6_Pos)) /* Assignment of value for TIMEOUT_P6 in the MPDDRC_TIMEOUT register */
#define MPDDRC_TIMEOUT_Msk                    _UINT32_(0x0FFFFFFF)                                 /* (MPDDRC_TIMEOUT) Register Mask  */


/* -------- MPDDRC_REQ_PORT_0123 : (MPDDRC Offset: 0x4C) (R/W 32) Request Port 0-1-2-3 Register -------- */
#define MPDDRC_REQ_PORT_0123_RESETVALUE       _UINT32_(0x00)                                       /*  (MPDDRC_REQ_PORT_0123) Request Port 0-1-2-3 Register  Reset Value */

#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P0_Pos _UINT32_(0)                                          /* (MPDDRC_REQ_PORT_0123) Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3 Position */
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P0_Msk (_UINT32_(0xFF) << MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P0_Pos) /* (MPDDRC_REQ_PORT_0123) Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3 Mask */
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P0(value) (MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P0_Msk & (_UINT32_(value) << MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P0_Pos)) /* Assignment of value for NRQ_NWD_BDW_P0 in the MPDDRC_REQ_PORT_0123 register */
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P1_Pos _UINT32_(8)                                          /* (MPDDRC_REQ_PORT_0123) Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3 Position */
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P1_Msk (_UINT32_(0xFF) << MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P1_Pos) /* (MPDDRC_REQ_PORT_0123) Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3 Mask */
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P1(value) (MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P1_Msk & (_UINT32_(value) << MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P1_Pos)) /* Assignment of value for NRQ_NWD_BDW_P1 in the MPDDRC_REQ_PORT_0123 register */
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P2_Pos _UINT32_(16)                                         /* (MPDDRC_REQ_PORT_0123) Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3 Position */
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P2_Msk (_UINT32_(0xFF) << MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P2_Pos) /* (MPDDRC_REQ_PORT_0123) Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3 Mask */
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P2(value) (MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P2_Msk & (_UINT32_(value) << MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P2_Pos)) /* Assignment of value for NRQ_NWD_BDW_P2 in the MPDDRC_REQ_PORT_0123 register */
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P3_Pos _UINT32_(24)                                         /* (MPDDRC_REQ_PORT_0123) Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3 Position */
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P3_Msk (_UINT32_(0xFF) << MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P3_Pos) /* (MPDDRC_REQ_PORT_0123) Number of Requests, Number of Words or Bandwidth Allocation from Port 0-1-2-3 Mask */
#define MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P3(value) (MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P3_Msk & (_UINT32_(value) << MPDDRC_REQ_PORT_0123_NRQ_NWD_BDW_P3_Pos)) /* Assignment of value for NRQ_NWD_BDW_P3 in the MPDDRC_REQ_PORT_0123 register */
#define MPDDRC_REQ_PORT_0123_Msk              _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_REQ_PORT_0123) Register Mask  */


/* -------- MPDDRC_REQ_PORT_456 : (MPDDRC Offset: 0x50) (R/W 32) Request Port 4-5-6 Register -------- */
#define MPDDRC_REQ_PORT_456_RESETVALUE        _UINT32_(0x00)                                       /*  (MPDDRC_REQ_PORT_456) Request Port 4-5-6 Register  Reset Value */

#define MPDDRC_REQ_PORT_456_NRQ_NWD_BDW_P4_Pos _UINT32_(0)                                          /* (MPDDRC_REQ_PORT_456) Number of Requests, Number of Words or Bandwidth allocation from port 4-5-6 Position */
#define MPDDRC_REQ_PORT_456_NRQ_NWD_BDW_P4_Msk (_UINT32_(0xFF) << MPDDRC_REQ_PORT_456_NRQ_NWD_BDW_P4_Pos) /* (MPDDRC_REQ_PORT_456) Number of Requests, Number of Words or Bandwidth allocation from port 4-5-6 Mask */
#define MPDDRC_REQ_PORT_456_NRQ_NWD_BDW_P4(value) (MPDDRC_REQ_PORT_456_NRQ_NWD_BDW_P4_Msk & (_UINT32_(value) << MPDDRC_REQ_PORT_456_NRQ_NWD_BDW_P4_Pos)) /* Assignment of value for NRQ_NWD_BDW_P4 in the MPDDRC_REQ_PORT_456 register */
#define MPDDRC_REQ_PORT_456_NRQ_NWD_BDW_P5_Pos _UINT32_(8)                                          /* (MPDDRC_REQ_PORT_456) Number of Requests, Number of Words or Bandwidth allocation from port 4-5-6 Position */
#define MPDDRC_REQ_PORT_456_NRQ_NWD_BDW_P5_Msk (_UINT32_(0xFF) << MPDDRC_REQ_PORT_456_NRQ_NWD_BDW_P5_Pos) /* (MPDDRC_REQ_PORT_456) Number of Requests, Number of Words or Bandwidth allocation from port 4-5-6 Mask */
#define MPDDRC_REQ_PORT_456_NRQ_NWD_BDW_P5(value) (MPDDRC_REQ_PORT_456_NRQ_NWD_BDW_P5_Msk & (_UINT32_(value) << MPDDRC_REQ_PORT_456_NRQ_NWD_BDW_P5_Pos)) /* Assignment of value for NRQ_NWD_BDW_P5 in the MPDDRC_REQ_PORT_456 register */
#define MPDDRC_REQ_PORT_456_NRQ_NWD_BDW_P6_Pos _UINT32_(16)                                         /* (MPDDRC_REQ_PORT_456) Number of Requests, Number of Words or Bandwidth allocation from port 4-5-6 Position */
#define MPDDRC_REQ_PORT_456_NRQ_NWD_BDW_P6_Msk (_UINT32_(0xFF) << MPDDRC_REQ_PORT_456_NRQ_NWD_BDW_P6_Pos) /* (MPDDRC_REQ_PORT_456) Number of Requests, Number of Words or Bandwidth allocation from port 4-5-6 Mask */
#define MPDDRC_REQ_PORT_456_NRQ_NWD_BDW_P6(value) (MPDDRC_REQ_PORT_456_NRQ_NWD_BDW_P6_Msk & (_UINT32_(value) << MPDDRC_REQ_PORT_456_NRQ_NWD_BDW_P6_Pos)) /* Assignment of value for NRQ_NWD_BDW_P6 in the MPDDRC_REQ_PORT_456 register */
#define MPDDRC_REQ_PORT_456_Msk               _UINT32_(0x00FFFFFF)                                 /* (MPDDRC_REQ_PORT_456) Register Mask  */


/* -------- MPDDRC_BDW_PORT_0123 : (MPDDRC Offset: 0x54) ( R/ 32) Current/Maximum Bandwidth Port 0-1-2-3 Register -------- */
#define MPDDRC_BDW_PORT_0123_RESETVALUE       _UINT32_(0x00)                                       /*  (MPDDRC_BDW_PORT_0123) Current/Maximum Bandwidth Port 0-1-2-3 Register  Reset Value */

#define MPDDRC_BDW_PORT_0123_BDW_P0_Pos       _UINT32_(0)                                          /* (MPDDRC_BDW_PORT_0123) Current/Maximum Bandwidth from Port 0-1-2-3 Position */
#define MPDDRC_BDW_PORT_0123_BDW_P0_Msk       (_UINT32_(0x7F) << MPDDRC_BDW_PORT_0123_BDW_P0_Pos)  /* (MPDDRC_BDW_PORT_0123) Current/Maximum Bandwidth from Port 0-1-2-3 Mask */
#define MPDDRC_BDW_PORT_0123_BDW_P0(value)    (MPDDRC_BDW_PORT_0123_BDW_P0_Msk & (_UINT32_(value) << MPDDRC_BDW_PORT_0123_BDW_P0_Pos)) /* Assignment of value for BDW_P0 in the MPDDRC_BDW_PORT_0123 register */
#define MPDDRC_BDW_PORT_0123_BDW_P1_Pos       _UINT32_(8)                                          /* (MPDDRC_BDW_PORT_0123) Current/Maximum Bandwidth from Port 0-1-2-3 Position */
#define MPDDRC_BDW_PORT_0123_BDW_P1_Msk       (_UINT32_(0x7F) << MPDDRC_BDW_PORT_0123_BDW_P1_Pos)  /* (MPDDRC_BDW_PORT_0123) Current/Maximum Bandwidth from Port 0-1-2-3 Mask */
#define MPDDRC_BDW_PORT_0123_BDW_P1(value)    (MPDDRC_BDW_PORT_0123_BDW_P1_Msk & (_UINT32_(value) << MPDDRC_BDW_PORT_0123_BDW_P1_Pos)) /* Assignment of value for BDW_P1 in the MPDDRC_BDW_PORT_0123 register */
#define MPDDRC_BDW_PORT_0123_BDW_P2_Pos       _UINT32_(16)                                         /* (MPDDRC_BDW_PORT_0123) Current/Maximum Bandwidth from Port 0-1-2-3 Position */
#define MPDDRC_BDW_PORT_0123_BDW_P2_Msk       (_UINT32_(0x7F) << MPDDRC_BDW_PORT_0123_BDW_P2_Pos)  /* (MPDDRC_BDW_PORT_0123) Current/Maximum Bandwidth from Port 0-1-2-3 Mask */
#define MPDDRC_BDW_PORT_0123_BDW_P2(value)    (MPDDRC_BDW_PORT_0123_BDW_P2_Msk & (_UINT32_(value) << MPDDRC_BDW_PORT_0123_BDW_P2_Pos)) /* Assignment of value for BDW_P2 in the MPDDRC_BDW_PORT_0123 register */
#define MPDDRC_BDW_PORT_0123_BDW_P3_Pos       _UINT32_(24)                                         /* (MPDDRC_BDW_PORT_0123) Current/Maximum Bandwidth from Port 0-1-2-3 Position */
#define MPDDRC_BDW_PORT_0123_BDW_P3_Msk       (_UINT32_(0x7F) << MPDDRC_BDW_PORT_0123_BDW_P3_Pos)  /* (MPDDRC_BDW_PORT_0123) Current/Maximum Bandwidth from Port 0-1-2-3 Mask */
#define MPDDRC_BDW_PORT_0123_BDW_P3(value)    (MPDDRC_BDW_PORT_0123_BDW_P3_Msk & (_UINT32_(value) << MPDDRC_BDW_PORT_0123_BDW_P3_Pos)) /* Assignment of value for BDW_P3 in the MPDDRC_BDW_PORT_0123 register */
#define MPDDRC_BDW_PORT_0123_Msk              _UINT32_(0x7F7F7F7F)                                 /* (MPDDRC_BDW_PORT_0123) Register Mask  */


/* -------- MPDDRC_BDW_PORT_456 : (MPDDRC Offset: 0x58) ( R/ 32) Current/Maximum Bandwidth Port 4-5-6 Register -------- */
#define MPDDRC_BDW_PORT_456_RESETVALUE        _UINT32_(0x00)                                       /*  (MPDDRC_BDW_PORT_456) Current/Maximum Bandwidth Port 4-5-6 Register  Reset Value */

#define MPDDRC_BDW_PORT_456_BDW_P4_Pos        _UINT32_(0)                                          /* (MPDDRC_BDW_PORT_456) Current/Maximum Bandwidth from Port 4-5-6 Position */
#define MPDDRC_BDW_PORT_456_BDW_P4_Msk        (_UINT32_(0x7F) << MPDDRC_BDW_PORT_456_BDW_P4_Pos)   /* (MPDDRC_BDW_PORT_456) Current/Maximum Bandwidth from Port 4-5-6 Mask */
#define MPDDRC_BDW_PORT_456_BDW_P4(value)     (MPDDRC_BDW_PORT_456_BDW_P4_Msk & (_UINT32_(value) << MPDDRC_BDW_PORT_456_BDW_P4_Pos)) /* Assignment of value for BDW_P4 in the MPDDRC_BDW_PORT_456 register */
#define MPDDRC_BDW_PORT_456_BDW_P5_Pos        _UINT32_(8)                                          /* (MPDDRC_BDW_PORT_456) Current/Maximum Bandwidth from Port 4-5-6 Position */
#define MPDDRC_BDW_PORT_456_BDW_P5_Msk        (_UINT32_(0x7F) << MPDDRC_BDW_PORT_456_BDW_P5_Pos)   /* (MPDDRC_BDW_PORT_456) Current/Maximum Bandwidth from Port 4-5-6 Mask */
#define MPDDRC_BDW_PORT_456_BDW_P5(value)     (MPDDRC_BDW_PORT_456_BDW_P5_Msk & (_UINT32_(value) << MPDDRC_BDW_PORT_456_BDW_P5_Pos)) /* Assignment of value for BDW_P5 in the MPDDRC_BDW_PORT_456 register */
#define MPDDRC_BDW_PORT_456_BDW_P6_Pos        _UINT32_(16)                                         /* (MPDDRC_BDW_PORT_456) Current/Maximum Bandwidth from Port 4-5-6 Position */
#define MPDDRC_BDW_PORT_456_BDW_P6_Msk        (_UINT32_(0x7F) << MPDDRC_BDW_PORT_456_BDW_P6_Pos)   /* (MPDDRC_BDW_PORT_456) Current/Maximum Bandwidth from Port 4-5-6 Mask */
#define MPDDRC_BDW_PORT_456_BDW_P6(value)     (MPDDRC_BDW_PORT_456_BDW_P6_Msk & (_UINT32_(value) << MPDDRC_BDW_PORT_456_BDW_P6_Pos)) /* Assignment of value for BDW_P6 in the MPDDRC_BDW_PORT_456 register */
#define MPDDRC_BDW_PORT_456_Msk               _UINT32_(0x007F7F7F)                                 /* (MPDDRC_BDW_PORT_456) Register Mask  */


/* -------- MPDDRC_RD_DATA_PATH : (MPDDRC Offset: 0x5C) (R/W 32) Read Data Path Register -------- */
#define MPDDRC_RD_DATA_PATH_RESETVALUE        _UINT32_(0x00)                                       /*  (MPDDRC_RD_DATA_PATH) Read Data Path Register  Reset Value */

#define MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_Pos _UINT32_(0)                                          /* (MPDDRC_RD_DATA_PATH) Shift Sampling Point of Data Position */
#define MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_Msk (_UINT32_(0x3) << MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_Pos) /* (MPDDRC_RD_DATA_PATH) Shift Sampling Point of Data Mask */
#define MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING(value) (MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_Msk & (_UINT32_(value) << MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_Pos)) /* Assignment of value for SHIFT_SAMPLING in the MPDDRC_RD_DATA_PATH register */
#define   MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_NO_SHIFT_Val _UINT32_(0x0)                                        /* (MPDDRC_RD_DATA_PATH) Initial sampling point.  */
#define   MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_SHIFT_ONE_CYCLE_Val _UINT32_(0x1)                                        /* (MPDDRC_RD_DATA_PATH) Sampling point is shifted by one cycle.  */
#define   MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_SHIFT_TWO_CYCLES_Val _UINT32_(0x2)                                        /* (MPDDRC_RD_DATA_PATH) Sampling point is shifted by two cycles.  */
#define   MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_SHIFT_THREE_CYCLES_Val _UINT32_(0x3)                                        /* (MPDDRC_RD_DATA_PATH) Sampling point is shifted by three cycles, unique for DDR2 and DDR3.  */
#define MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_NO_SHIFT (MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_NO_SHIFT_Val << MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_Pos) /* (MPDDRC_RD_DATA_PATH) Initial sampling point. Position */
#define MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_SHIFT_ONE_CYCLE (MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_SHIFT_ONE_CYCLE_Val << MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_Pos) /* (MPDDRC_RD_DATA_PATH) Sampling point is shifted by one cycle. Position */
#define MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_SHIFT_TWO_CYCLES (MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_SHIFT_TWO_CYCLES_Val << MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_Pos) /* (MPDDRC_RD_DATA_PATH) Sampling point is shifted by two cycles. Position */
#define MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_SHIFT_THREE_CYCLES (MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_SHIFT_THREE_CYCLES_Val << MPDDRC_RD_DATA_PATH_SHIFT_SAMPLING_Pos) /* (MPDDRC_RD_DATA_PATH) Sampling point is shifted by three cycles, unique for DDR2 and DDR3. Position */
#define MPDDRC_RD_DATA_PATH_Msk               _UINT32_(0x00000003)                                 /* (MPDDRC_RD_DATA_PATH) Register Mask  */


/* -------- MPDDRC_MCFGR : (MPDDRC Offset: 0x60) (R/W 32) Monitor Configuration Register -------- */
#define MPDDRC_MCFGR_RESETVALUE               _UINT32_(0x00)                                       /*  (MPDDRC_MCFGR) Monitor Configuration Register  Reset Value */

#define MPDDRC_MCFGR_EN_MONI_Pos              _UINT32_(0)                                          /* (MPDDRC_MCFGR) Enable Monitor Position */
#define MPDDRC_MCFGR_EN_MONI_Msk              (_UINT32_(0x1) << MPDDRC_MCFGR_EN_MONI_Pos)          /* (MPDDRC_MCFGR) Enable Monitor Mask */
#define MPDDRC_MCFGR_EN_MONI(value)           (MPDDRC_MCFGR_EN_MONI_Msk & (_UINT32_(value) << MPDDRC_MCFGR_EN_MONI_Pos)) /* Assignment of value for EN_MONI in the MPDDRC_MCFGR register */
#define   MPDDRC_MCFGR_EN_MONI_0_Val          _UINT32_(0x0)                                        /* (MPDDRC_MCFGR) Monitor is disabled.  */
#define   MPDDRC_MCFGR_EN_MONI_1_Val          _UINT32_(0x1)                                        /* (MPDDRC_MCFGR) Monitor is enabled.  */
#define MPDDRC_MCFGR_EN_MONI_0                (MPDDRC_MCFGR_EN_MONI_0_Val << MPDDRC_MCFGR_EN_MONI_Pos) /* (MPDDRC_MCFGR) Monitor is disabled. Position */
#define MPDDRC_MCFGR_EN_MONI_1                (MPDDRC_MCFGR_EN_MONI_1_Val << MPDDRC_MCFGR_EN_MONI_Pos) /* (MPDDRC_MCFGR) Monitor is enabled. Position */
#define MPDDRC_MCFGR_SOFT_RESET_Pos           _UINT32_(1)                                          /* (MPDDRC_MCFGR) Soft Reset Position */
#define MPDDRC_MCFGR_SOFT_RESET_Msk           (_UINT32_(0x1) << MPDDRC_MCFGR_SOFT_RESET_Pos)       /* (MPDDRC_MCFGR) Soft Reset Mask */
#define MPDDRC_MCFGR_SOFT_RESET(value)        (MPDDRC_MCFGR_SOFT_RESET_Msk & (_UINT32_(value) << MPDDRC_MCFGR_SOFT_RESET_Pos)) /* Assignment of value for SOFT_RESET in the MPDDRC_MCFGR register */
#define   MPDDRC_MCFGR_SOFT_RESET_0_Val       _UINT32_(0x0)                                        /* (MPDDRC_MCFGR) Soft reset is not performed.  */
#define   MPDDRC_MCFGR_SOFT_RESET_1_Val       _UINT32_(0x1)                                        /* (MPDDRC_MCFGR) Soft reset is performed.  */
#define MPDDRC_MCFGR_SOFT_RESET_0             (MPDDRC_MCFGR_SOFT_RESET_0_Val << MPDDRC_MCFGR_SOFT_RESET_Pos) /* (MPDDRC_MCFGR) Soft reset is not performed. Position */
#define MPDDRC_MCFGR_SOFT_RESET_1             (MPDDRC_MCFGR_SOFT_RESET_1_Val << MPDDRC_MCFGR_SOFT_RESET_Pos) /* (MPDDRC_MCFGR) Soft reset is performed. Position */
#define MPDDRC_MCFGR_RUN_Pos                  _UINT32_(4)                                          /* (MPDDRC_MCFGR) Control Monitor Position */
#define MPDDRC_MCFGR_RUN_Msk                  (_UINT32_(0x1) << MPDDRC_MCFGR_RUN_Pos)              /* (MPDDRC_MCFGR) Control Monitor Mask */
#define MPDDRC_MCFGR_RUN(value)               (MPDDRC_MCFGR_RUN_Msk & (_UINT32_(value) << MPDDRC_MCFGR_RUN_Pos)) /* Assignment of value for RUN in the MPDDRC_MCFGR register */
#define   MPDDRC_MCFGR_RUN_0_Val              _UINT32_(0x0)                                        /* (MPDDRC_MCFGR) Monitoring is halted. All counters are stopped.  */
#define   MPDDRC_MCFGR_RUN_1_Val              _UINT32_(0x1)                                        /* (MPDDRC_MCFGR) Monitoring is launched.  */
#define MPDDRC_MCFGR_RUN_0                    (MPDDRC_MCFGR_RUN_0_Val << MPDDRC_MCFGR_RUN_Pos)     /* (MPDDRC_MCFGR) Monitoring is halted. All counters are stopped. Position */
#define MPDDRC_MCFGR_RUN_1                    (MPDDRC_MCFGR_RUN_1_Val << MPDDRC_MCFGR_RUN_Pos)     /* (MPDDRC_MCFGR) Monitoring is launched. Position */
#define MPDDRC_MCFGR_READ_WRITE_Pos           _UINT32_(8)                                          /* (MPDDRC_MCFGR) Read/Write Access Position */
#define MPDDRC_MCFGR_READ_WRITE_Msk           (_UINT32_(0x3) << MPDDRC_MCFGR_READ_WRITE_Pos)       /* (MPDDRC_MCFGR) Read/Write Access Mask */
#define MPDDRC_MCFGR_READ_WRITE(value)        (MPDDRC_MCFGR_READ_WRITE_Msk & (_UINT32_(value) << MPDDRC_MCFGR_READ_WRITE_Pos)) /* Assignment of value for READ_WRITE in the MPDDRC_MCFGR register */
#define   MPDDRC_MCFGR_READ_WRITE_TRIG_RD_WR_Val _UINT32_(0x0)                                        /* (MPDDRC_MCFGR) Read and Write accesses are triggered.  */
#define   MPDDRC_MCFGR_READ_WRITE_TRIG_WR_Val _UINT32_(0x1)                                        /* (MPDDRC_MCFGR) Only Write accesses are triggered.  */
#define   MPDDRC_MCFGR_READ_WRITE_TRIG_RD_Val _UINT32_(0x2)                                        /* (MPDDRC_MCFGR) Only Read accesses are triggered.  */
#define MPDDRC_MCFGR_READ_WRITE_TRIG_RD_WR    (MPDDRC_MCFGR_READ_WRITE_TRIG_RD_WR_Val << MPDDRC_MCFGR_READ_WRITE_Pos) /* (MPDDRC_MCFGR) Read and Write accesses are triggered. Position */
#define MPDDRC_MCFGR_READ_WRITE_TRIG_WR       (MPDDRC_MCFGR_READ_WRITE_TRIG_WR_Val << MPDDRC_MCFGR_READ_WRITE_Pos) /* (MPDDRC_MCFGR) Only Write accesses are triggered. Position */
#define MPDDRC_MCFGR_READ_WRITE_TRIG_RD       (MPDDRC_MCFGR_READ_WRITE_TRIG_RD_Val << MPDDRC_MCFGR_READ_WRITE_Pos) /* (MPDDRC_MCFGR) Only Read accesses are triggered. Position */
#define MPDDRC_MCFGR_REFR_CALIB_Pos           _UINT32_(10)                                         /* (MPDDRC_MCFGR) Refresh Calibration Position */
#define MPDDRC_MCFGR_REFR_CALIB_Msk           (_UINT32_(0x1) << MPDDRC_MCFGR_REFR_CALIB_Pos)       /* (MPDDRC_MCFGR) Refresh Calibration Mask */
#define MPDDRC_MCFGR_REFR_CALIB(value)        (MPDDRC_MCFGR_REFR_CALIB_Msk & (_UINT32_(value) << MPDDRC_MCFGR_REFR_CALIB_Pos)) /* Assignment of value for REFR_CALIB in the MPDDRC_MCFGR register */
#define   MPDDRC_MCFGR_REFR_CALIB_0_Val       _UINT32_(0x0)                                        /* (MPDDRC_MCFGR) Monitoring does not depend on Autorefresh mode, Self-refresh mode, Powerdown mode, DLL nor calibration impact.  */
#define   MPDDRC_MCFGR_REFR_CALIB_1_Val       _UINT32_(0x1)                                        /* (MPDDRC_MCFGR) Monitoring depends on Autorefresh mode, Self-refresh mode, Powerdown mode, DLL and calibration impact./mi/m.  */
#define MPDDRC_MCFGR_REFR_CALIB_0             (MPDDRC_MCFGR_REFR_CALIB_0_Val << MPDDRC_MCFGR_REFR_CALIB_Pos) /* (MPDDRC_MCFGR) Monitoring does not depend on Autorefresh mode, Self-refresh mode, Powerdown mode, DLL nor calibration impact. Position */
#define MPDDRC_MCFGR_REFR_CALIB_1             (MPDDRC_MCFGR_REFR_CALIB_1_Val << MPDDRC_MCFGR_REFR_CALIB_Pos) /* (MPDDRC_MCFGR) Monitoring depends on Autorefresh mode, Self-refresh mode, Powerdown mode, DLL and calibration impact./mi/m. Position */
#define MPDDRC_MCFGR_INFO_Pos                 _UINT32_(11)                                         /* (MPDDRC_MCFGR) Information Type Position */
#define MPDDRC_MCFGR_INFO_Msk                 (_UINT32_(0x7) << MPDDRC_MCFGR_INFO_Pos)             /* (MPDDRC_MCFGR) Information Type Mask */
#define MPDDRC_MCFGR_INFO(value)              (MPDDRC_MCFGR_INFO_Msk & (_UINT32_(value) << MPDDRC_MCFGR_INFO_Pos)) /* Assignment of value for INFO in the MPDDRC_MCFGR register */
#define   MPDDRC_MCFGR_INFO_MAX_WAIT_Val      _UINT32_(0x0)                                        /* (MPDDRC_MCFGR) Information concerning the transfer with the longest waiting time  */
#define   MPDDRC_MCFGR_INFO_NB_TRANSFERS_Val  _UINT32_(0x1)                                        /* (MPDDRC_MCFGR) Number of transfers on the port  */
#define   MPDDRC_MCFGR_INFO_TOTAL_LATENCY_Val _UINT32_(0x2)                                        /* (MPDDRC_MCFGR) Total latency on the port  */
#define   MPDDRC_MCFGR_INFO_MAX_WAIT_QOS01_Val _UINT32_(0x4)                                        /* (MPDDRC_MCFGR) Information concerning the transfer with the longest waiting time, depending on QOS values (0 and 1)  */
#define   MPDDRC_MCFGR_INFO_MAX_WAIT_QOS23_Val _UINT32_(0x5)                                        /* (MPDDRC_MCFGR) Information concerning the transfer with the longest waiting time, depending on QOS values (2 and 3)  */
#define   MPDDRC_MCFGR_INFO_TOTAL_CYCLE_COUNT_Val _UINT32_(0x6)                                        /* (MPDDRC_MCFGR) Indicates the total number of cycles from beginning to end of monitoring.  */
#define MPDDRC_MCFGR_INFO_MAX_WAIT            (MPDDRC_MCFGR_INFO_MAX_WAIT_Val << MPDDRC_MCFGR_INFO_Pos) /* (MPDDRC_MCFGR) Information concerning the transfer with the longest waiting time Position */
#define MPDDRC_MCFGR_INFO_NB_TRANSFERS        (MPDDRC_MCFGR_INFO_NB_TRANSFERS_Val << MPDDRC_MCFGR_INFO_Pos) /* (MPDDRC_MCFGR) Number of transfers on the port Position */
#define MPDDRC_MCFGR_INFO_TOTAL_LATENCY       (MPDDRC_MCFGR_INFO_TOTAL_LATENCY_Val << MPDDRC_MCFGR_INFO_Pos) /* (MPDDRC_MCFGR) Total latency on the port Position */
#define MPDDRC_MCFGR_INFO_MAX_WAIT_QOS01      (MPDDRC_MCFGR_INFO_MAX_WAIT_QOS01_Val << MPDDRC_MCFGR_INFO_Pos) /* (MPDDRC_MCFGR) Information concerning the transfer with the longest waiting time, depending on QOS values (0 and 1) Position */
#define MPDDRC_MCFGR_INFO_MAX_WAIT_QOS23      (MPDDRC_MCFGR_INFO_MAX_WAIT_QOS23_Val << MPDDRC_MCFGR_INFO_Pos) /* (MPDDRC_MCFGR) Information concerning the transfer with the longest waiting time, depending on QOS values (2 and 3) Position */
#define MPDDRC_MCFGR_INFO_TOTAL_CYCLE_COUNT   (MPDDRC_MCFGR_INFO_TOTAL_CYCLE_COUNT_Val << MPDDRC_MCFGR_INFO_Pos) /* (MPDDRC_MCFGR) Indicates the total number of cycles from beginning to end of monitoring. Position */
#define MPDDRC_MCFGR_Msk                      _UINT32_(0x00003F13)                                 /* (MPDDRC_MCFGR) Register Mask  */


/* -------- MPDDRC_MADDR0 : (MPDDRC Offset: 0x64) (R/W 32) Monitor Address High/Low Port 0 Register -------- */
#define MPDDRC_MADDR0_RESETVALUE              _UINT32_(0x00)                                       /*  (MPDDRC_MADDR0) Monitor Address High/Low Port 0 Register  Reset Value */

#define MPDDRC_MADDR0_ADDR_LOW_PORT0_Pos      _UINT32_(0)                                          /* (MPDDRC_MADDR0) Address Low on Port [x = 0..6] Position */
#define MPDDRC_MADDR0_ADDR_LOW_PORT0_Msk      (_UINT32_(0xFFFF) << MPDDRC_MADDR0_ADDR_LOW_PORT0_Pos) /* (MPDDRC_MADDR0) Address Low on Port [x = 0..6] Mask */
#define MPDDRC_MADDR0_ADDR_LOW_PORT0(value)   (MPDDRC_MADDR0_ADDR_LOW_PORT0_Msk & (_UINT32_(value) << MPDDRC_MADDR0_ADDR_LOW_PORT0_Pos)) /* Assignment of value for ADDR_LOW_PORT0 in the MPDDRC_MADDR0 register */
#define MPDDRC_MADDR0_ADDR_HIGH_PORT0_Pos     _UINT32_(16)                                         /* (MPDDRC_MADDR0) Address High on Port [x = 0..6] Position */
#define MPDDRC_MADDR0_ADDR_HIGH_PORT0_Msk     (_UINT32_(0xFFFF) << MPDDRC_MADDR0_ADDR_HIGH_PORT0_Pos) /* (MPDDRC_MADDR0) Address High on Port [x = 0..6] Mask */
#define MPDDRC_MADDR0_ADDR_HIGH_PORT0(value)  (MPDDRC_MADDR0_ADDR_HIGH_PORT0_Msk & (_UINT32_(value) << MPDDRC_MADDR0_ADDR_HIGH_PORT0_Pos)) /* Assignment of value for ADDR_HIGH_PORT0 in the MPDDRC_MADDR0 register */
#define MPDDRC_MADDR0_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MADDR0) Register Mask  */


/* -------- MPDDRC_MADDR1 : (MPDDRC Offset: 0x68) (R/W 32) Monitor Address High/Low Port 1 Register -------- */
#define MPDDRC_MADDR1_RESETVALUE              _UINT32_(0x00)                                       /*  (MPDDRC_MADDR1) Monitor Address High/Low Port 1 Register  Reset Value */

#define MPDDRC_MADDR1_ADDR_LOW_PORT1_Pos      _UINT32_(0)                                          /* (MPDDRC_MADDR1) Address Low on Port [x = 0..6] Position */
#define MPDDRC_MADDR1_ADDR_LOW_PORT1_Msk      (_UINT32_(0xFFFF) << MPDDRC_MADDR1_ADDR_LOW_PORT1_Pos) /* (MPDDRC_MADDR1) Address Low on Port [x = 0..6] Mask */
#define MPDDRC_MADDR1_ADDR_LOW_PORT1(value)   (MPDDRC_MADDR1_ADDR_LOW_PORT1_Msk & (_UINT32_(value) << MPDDRC_MADDR1_ADDR_LOW_PORT1_Pos)) /* Assignment of value for ADDR_LOW_PORT1 in the MPDDRC_MADDR1 register */
#define MPDDRC_MADDR1_ADDR_HIGH_PORT1_Pos     _UINT32_(16)                                         /* (MPDDRC_MADDR1) Address High on Port [x = 0..6] Position */
#define MPDDRC_MADDR1_ADDR_HIGH_PORT1_Msk     (_UINT32_(0xFFFF) << MPDDRC_MADDR1_ADDR_HIGH_PORT1_Pos) /* (MPDDRC_MADDR1) Address High on Port [x = 0..6] Mask */
#define MPDDRC_MADDR1_ADDR_HIGH_PORT1(value)  (MPDDRC_MADDR1_ADDR_HIGH_PORT1_Msk & (_UINT32_(value) << MPDDRC_MADDR1_ADDR_HIGH_PORT1_Pos)) /* Assignment of value for ADDR_HIGH_PORT1 in the MPDDRC_MADDR1 register */
#define MPDDRC_MADDR1_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MADDR1) Register Mask  */


/* -------- MPDDRC_MADDR2 : (MPDDRC Offset: 0x6C) (R/W 32) Monitor Address High/Low Port 2 Register -------- */
#define MPDDRC_MADDR2_RESETVALUE              _UINT32_(0x00)                                       /*  (MPDDRC_MADDR2) Monitor Address High/Low Port 2 Register  Reset Value */

#define MPDDRC_MADDR2_ADDR_LOW_PORT2_Pos      _UINT32_(0)                                          /* (MPDDRC_MADDR2) Address Low on Port [x = 0..6] Position */
#define MPDDRC_MADDR2_ADDR_LOW_PORT2_Msk      (_UINT32_(0xFFFF) << MPDDRC_MADDR2_ADDR_LOW_PORT2_Pos) /* (MPDDRC_MADDR2) Address Low on Port [x = 0..6] Mask */
#define MPDDRC_MADDR2_ADDR_LOW_PORT2(value)   (MPDDRC_MADDR2_ADDR_LOW_PORT2_Msk & (_UINT32_(value) << MPDDRC_MADDR2_ADDR_LOW_PORT2_Pos)) /* Assignment of value for ADDR_LOW_PORT2 in the MPDDRC_MADDR2 register */
#define MPDDRC_MADDR2_ADDR_HIGH_PORT2_Pos     _UINT32_(16)                                         /* (MPDDRC_MADDR2) Address High on Port [x = 0..6] Position */
#define MPDDRC_MADDR2_ADDR_HIGH_PORT2_Msk     (_UINT32_(0xFFFF) << MPDDRC_MADDR2_ADDR_HIGH_PORT2_Pos) /* (MPDDRC_MADDR2) Address High on Port [x = 0..6] Mask */
#define MPDDRC_MADDR2_ADDR_HIGH_PORT2(value)  (MPDDRC_MADDR2_ADDR_HIGH_PORT2_Msk & (_UINT32_(value) << MPDDRC_MADDR2_ADDR_HIGH_PORT2_Pos)) /* Assignment of value for ADDR_HIGH_PORT2 in the MPDDRC_MADDR2 register */
#define MPDDRC_MADDR2_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MADDR2) Register Mask  */


/* -------- MPDDRC_MADDR3 : (MPDDRC Offset: 0x70) (R/W 32) Monitor Address High/Low Port 3 Register -------- */
#define MPDDRC_MADDR3_RESETVALUE              _UINT32_(0x00)                                       /*  (MPDDRC_MADDR3) Monitor Address High/Low Port 3 Register  Reset Value */

#define MPDDRC_MADDR3_ADDR_LOW_PORT3_Pos      _UINT32_(0)                                          /* (MPDDRC_MADDR3) Address Low on Port [x = 0..6] Position */
#define MPDDRC_MADDR3_ADDR_LOW_PORT3_Msk      (_UINT32_(0xFFFF) << MPDDRC_MADDR3_ADDR_LOW_PORT3_Pos) /* (MPDDRC_MADDR3) Address Low on Port [x = 0..6] Mask */
#define MPDDRC_MADDR3_ADDR_LOW_PORT3(value)   (MPDDRC_MADDR3_ADDR_LOW_PORT3_Msk & (_UINT32_(value) << MPDDRC_MADDR3_ADDR_LOW_PORT3_Pos)) /* Assignment of value for ADDR_LOW_PORT3 in the MPDDRC_MADDR3 register */
#define MPDDRC_MADDR3_ADDR_HIGH_PORT3_Pos     _UINT32_(16)                                         /* (MPDDRC_MADDR3) Address High on Port [x = 0..6] Position */
#define MPDDRC_MADDR3_ADDR_HIGH_PORT3_Msk     (_UINT32_(0xFFFF) << MPDDRC_MADDR3_ADDR_HIGH_PORT3_Pos) /* (MPDDRC_MADDR3) Address High on Port [x = 0..6] Mask */
#define MPDDRC_MADDR3_ADDR_HIGH_PORT3(value)  (MPDDRC_MADDR3_ADDR_HIGH_PORT3_Msk & (_UINT32_(value) << MPDDRC_MADDR3_ADDR_HIGH_PORT3_Pos)) /* Assignment of value for ADDR_HIGH_PORT3 in the MPDDRC_MADDR3 register */
#define MPDDRC_MADDR3_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MADDR3) Register Mask  */


/* -------- MPDDRC_MADDR4 : (MPDDRC Offset: 0x74) (R/W 32) Monitor Address High/Low Port 4 Register -------- */
#define MPDDRC_MADDR4_RESETVALUE              _UINT32_(0x00)                                       /*  (MPDDRC_MADDR4) Monitor Address High/Low Port 4 Register  Reset Value */

#define MPDDRC_MADDR4_ADDR_LOW_PORT4_Pos      _UINT32_(0)                                          /* (MPDDRC_MADDR4) Address Low on Port [x = 0..6] Position */
#define MPDDRC_MADDR4_ADDR_LOW_PORT4_Msk      (_UINT32_(0xFFFF) << MPDDRC_MADDR4_ADDR_LOW_PORT4_Pos) /* (MPDDRC_MADDR4) Address Low on Port [x = 0..6] Mask */
#define MPDDRC_MADDR4_ADDR_LOW_PORT4(value)   (MPDDRC_MADDR4_ADDR_LOW_PORT4_Msk & (_UINT32_(value) << MPDDRC_MADDR4_ADDR_LOW_PORT4_Pos)) /* Assignment of value for ADDR_LOW_PORT4 in the MPDDRC_MADDR4 register */
#define MPDDRC_MADDR4_ADDR_HIGH_PORT4_Pos     _UINT32_(16)                                         /* (MPDDRC_MADDR4) Address High on Port [x = 0..6] Position */
#define MPDDRC_MADDR4_ADDR_HIGH_PORT4_Msk     (_UINT32_(0xFFFF) << MPDDRC_MADDR4_ADDR_HIGH_PORT4_Pos) /* (MPDDRC_MADDR4) Address High on Port [x = 0..6] Mask */
#define MPDDRC_MADDR4_ADDR_HIGH_PORT4(value)  (MPDDRC_MADDR4_ADDR_HIGH_PORT4_Msk & (_UINT32_(value) << MPDDRC_MADDR4_ADDR_HIGH_PORT4_Pos)) /* Assignment of value for ADDR_HIGH_PORT4 in the MPDDRC_MADDR4 register */
#define MPDDRC_MADDR4_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MADDR4) Register Mask  */


/* -------- MPDDRC_MADDR5 : (MPDDRC Offset: 0x78) (R/W 32) Monitor Address High/Low Port 5 Register -------- */
#define MPDDRC_MADDR5_RESETVALUE              _UINT32_(0x00)                                       /*  (MPDDRC_MADDR5) Monitor Address High/Low Port 5 Register  Reset Value */

#define MPDDRC_MADDR5_ADDR_LOW_PORT5_Pos      _UINT32_(0)                                          /* (MPDDRC_MADDR5) Address Low on Port [x = 0..6] Position */
#define MPDDRC_MADDR5_ADDR_LOW_PORT5_Msk      (_UINT32_(0xFFFF) << MPDDRC_MADDR5_ADDR_LOW_PORT5_Pos) /* (MPDDRC_MADDR5) Address Low on Port [x = 0..6] Mask */
#define MPDDRC_MADDR5_ADDR_LOW_PORT5(value)   (MPDDRC_MADDR5_ADDR_LOW_PORT5_Msk & (_UINT32_(value) << MPDDRC_MADDR5_ADDR_LOW_PORT5_Pos)) /* Assignment of value for ADDR_LOW_PORT5 in the MPDDRC_MADDR5 register */
#define MPDDRC_MADDR5_ADDR_HIGH_PORT5_Pos     _UINT32_(16)                                         /* (MPDDRC_MADDR5) Address High on Port [x = 0..6] Position */
#define MPDDRC_MADDR5_ADDR_HIGH_PORT5_Msk     (_UINT32_(0xFFFF) << MPDDRC_MADDR5_ADDR_HIGH_PORT5_Pos) /* (MPDDRC_MADDR5) Address High on Port [x = 0..6] Mask */
#define MPDDRC_MADDR5_ADDR_HIGH_PORT5(value)  (MPDDRC_MADDR5_ADDR_HIGH_PORT5_Msk & (_UINT32_(value) << MPDDRC_MADDR5_ADDR_HIGH_PORT5_Pos)) /* Assignment of value for ADDR_HIGH_PORT5 in the MPDDRC_MADDR5 register */
#define MPDDRC_MADDR5_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MADDR5) Register Mask  */


/* -------- MPDDRC_MADDR6 : (MPDDRC Offset: 0x7C) (R/W 32) Monitor Address High/Low Port 6 Register -------- */
#define MPDDRC_MADDR6_RESETVALUE              _UINT32_(0x00)                                       /*  (MPDDRC_MADDR6) Monitor Address High/Low Port 6 Register  Reset Value */

#define MPDDRC_MADDR6_ADDR_LOW_PORT6_Pos      _UINT32_(0)                                          /* (MPDDRC_MADDR6) Address Low on Port [x = 0..6] Position */
#define MPDDRC_MADDR6_ADDR_LOW_PORT6_Msk      (_UINT32_(0xFFFF) << MPDDRC_MADDR6_ADDR_LOW_PORT6_Pos) /* (MPDDRC_MADDR6) Address Low on Port [x = 0..6] Mask */
#define MPDDRC_MADDR6_ADDR_LOW_PORT6(value)   (MPDDRC_MADDR6_ADDR_LOW_PORT6_Msk & (_UINT32_(value) << MPDDRC_MADDR6_ADDR_LOW_PORT6_Pos)) /* Assignment of value for ADDR_LOW_PORT6 in the MPDDRC_MADDR6 register */
#define MPDDRC_MADDR6_ADDR_HIGH_PORT6_Pos     _UINT32_(16)                                         /* (MPDDRC_MADDR6) Address High on Port [x = 0..6] Position */
#define MPDDRC_MADDR6_ADDR_HIGH_PORT6_Msk     (_UINT32_(0xFFFF) << MPDDRC_MADDR6_ADDR_HIGH_PORT6_Pos) /* (MPDDRC_MADDR6) Address High on Port [x = 0..6] Mask */
#define MPDDRC_MADDR6_ADDR_HIGH_PORT6(value)  (MPDDRC_MADDR6_ADDR_HIGH_PORT6_Msk & (_UINT32_(value) << MPDDRC_MADDR6_ADDR_HIGH_PORT6_Pos)) /* Assignment of value for ADDR_HIGH_PORT6 in the MPDDRC_MADDR6 register */
#define MPDDRC_MADDR6_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MADDR6) Register Mask  */


/* -------- MPDDRC_MINFO0 : (MPDDRC Offset: 0x84) ( R/ 32) Monitor Information Port 0 Register -------- */
#define MPDDRC_MINFO0_RESETVALUE              _UINT32_(0x00)                                       /*  (MPDDRC_MINFO0) Monitor Information Port 0 Register  Reset Value */

#define MPDDRC_MINFO0_Msk                     _UINT32_(0x00000000)                                 /* (MPDDRC_MINFO0) Register Mask  */

/* MAX_WAIT mode */
#define MPDDRC_MINFO0_MAX_WAIT_MAX_PORT0_WAITING_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO0) Address High on Port [x = 0..6] Position */
#define MPDDRC_MINFO0_MAX_WAIT_MAX_PORT0_WAITING_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO0_MAX_WAIT_MAX_PORT0_WAITING_Pos) /* (MPDDRC_MINFO0) Address High on Port [x = 0..6] Mask */
#define MPDDRC_MINFO0_MAX_WAIT_MAX_PORT0_WAITING(value) (MPDDRC_MINFO0_MAX_WAIT_MAX_PORT0_WAITING_Msk & (_UINT32_(value) << MPDDRC_MINFO0_MAX_WAIT_MAX_PORT0_WAITING_Pos))
#define MPDDRC_MINFO0_MAX_WAIT_BURST_Pos      _UINT32_(16)                                         /* (MPDDRC_MINFO0) Type of Burst on Port [x = 0..6] Position */
#define MPDDRC_MINFO0_MAX_WAIT_BURST_Msk      (_UINT32_(0x7) << MPDDRC_MINFO0_MAX_WAIT_BURST_Pos)  /* (MPDDRC_MINFO0) Type of Burst on Port [x = 0..6] Mask */
#define MPDDRC_MINFO0_MAX_WAIT_BURST(value)   (MPDDRC_MINFO0_MAX_WAIT_BURST_Msk & (_UINT32_(value) << MPDDRC_MINFO0_MAX_WAIT_BURST_Pos))
#define   MPDDRC_MINFO0_MAX_WAIT_BURST_SINGLE_Val _UINT32_(0x0)                                        /* (MPDDRC_MINFO0) Single transfer  */
#define   MPDDRC_MINFO0_MAX_WAIT_BURST_INCR_Val _UINT32_(0x1)                                        /* (MPDDRC_MINFO0) Incrementing burst of unspecified length  */
#define   MPDDRC_MINFO0_MAX_WAIT_BURST_WRAP4_Val _UINT32_(0x2)                                        /* (MPDDRC_MINFO0) 4-beat wrapping burst  */
#define   MPDDRC_MINFO0_MAX_WAIT_BURST_INCR4_Val _UINT32_(0x3)                                        /* (MPDDRC_MINFO0) 4-beat incrementing burst  */
#define   MPDDRC_MINFO0_MAX_WAIT_BURST_WRAP8_Val _UINT32_(0x4)                                        /* (MPDDRC_MINFO0) 8-beat wrapping burst  */
#define   MPDDRC_MINFO0_MAX_WAIT_BURST_INCR8_Val _UINT32_(0x5)                                        /* (MPDDRC_MINFO0) 8-beat incrementing burst  */
#define   MPDDRC_MINFO0_MAX_WAIT_BURST_WRAP16_Val _UINT32_(0x6)                                        /* (MPDDRC_MINFO0) 16-beat wrapping burst  */
#define   MPDDRC_MINFO0_MAX_WAIT_BURST_INCR16_Val _UINT32_(0x7)                                        /* (MPDDRC_MINFO0) 16-beat incrementing burst  */
#define MPDDRC_MINFO0_MAX_WAIT_BURST_SINGLE   (MPDDRC_MINFO0_MAX_WAIT_BURST_SINGLE_Val << MPDDRC_MINFO0_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO0) Single transfer Position */
#define MPDDRC_MINFO0_MAX_WAIT_BURST_INCR     (MPDDRC_MINFO0_MAX_WAIT_BURST_INCR_Val << MPDDRC_MINFO0_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO0) Incrementing burst of unspecified length Position */
#define MPDDRC_MINFO0_MAX_WAIT_BURST_WRAP4    (MPDDRC_MINFO0_MAX_WAIT_BURST_WRAP4_Val << MPDDRC_MINFO0_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO0) 4-beat wrapping burst Position */
#define MPDDRC_MINFO0_MAX_WAIT_BURST_INCR4    (MPDDRC_MINFO0_MAX_WAIT_BURST_INCR4_Val << MPDDRC_MINFO0_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO0) 4-beat incrementing burst Position */
#define MPDDRC_MINFO0_MAX_WAIT_BURST_WRAP8    (MPDDRC_MINFO0_MAX_WAIT_BURST_WRAP8_Val << MPDDRC_MINFO0_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO0) 8-beat wrapping burst Position */
#define MPDDRC_MINFO0_MAX_WAIT_BURST_INCR8    (MPDDRC_MINFO0_MAX_WAIT_BURST_INCR8_Val << MPDDRC_MINFO0_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO0) 8-beat incrementing burst Position */
#define MPDDRC_MINFO0_MAX_WAIT_BURST_WRAP16   (MPDDRC_MINFO0_MAX_WAIT_BURST_WRAP16_Val << MPDDRC_MINFO0_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO0) 16-beat wrapping burst Position */
#define MPDDRC_MINFO0_MAX_WAIT_BURST_INCR16   (MPDDRC_MINFO0_MAX_WAIT_BURST_INCR16_Val << MPDDRC_MINFO0_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO0) 16-beat incrementing burst Position */
#define MPDDRC_MINFO0_MAX_WAIT_SIZE_Pos       _UINT32_(20)                                         /* (MPDDRC_MINFO0) Transfer Size on Port [x = 0..6] Position */
#define MPDDRC_MINFO0_MAX_WAIT_SIZE_Msk       (_UINT32_(0x7) << MPDDRC_MINFO0_MAX_WAIT_SIZE_Pos)   /* (MPDDRC_MINFO0) Transfer Size on Port [x = 0..6] Mask */
#define MPDDRC_MINFO0_MAX_WAIT_SIZE(value)    (MPDDRC_MINFO0_MAX_WAIT_SIZE_Msk & (_UINT32_(value) << MPDDRC_MINFO0_MAX_WAIT_SIZE_Pos))
#define   MPDDRC_MINFO0_MAX_WAIT_SIZE_8BITS_Val _UINT32_(0x0)                                        /* (MPDDRC_MINFO0) Byte transfer  */
#define   MPDDRC_MINFO0_MAX_WAIT_SIZE_16BITS_Val _UINT32_(0x1)                                        /* (MPDDRC_MINFO0) Halfword transfer  */
#define   MPDDRC_MINFO0_MAX_WAIT_SIZE_32BITS_Val _UINT32_(0x2)                                        /* (MPDDRC_MINFO0) Word transfer  */
#define   MPDDRC_MINFO0_MAX_WAIT_SIZE_64BITS_Val _UINT32_(0x3)                                        /* (MPDDRC_MINFO0) Dword transfer  */
#define MPDDRC_MINFO0_MAX_WAIT_SIZE_8BITS     (MPDDRC_MINFO0_MAX_WAIT_SIZE_8BITS_Val << MPDDRC_MINFO0_MAX_WAIT_SIZE_Pos) /* (MPDDRC_MINFO0) Byte transfer Position */
#define MPDDRC_MINFO0_MAX_WAIT_SIZE_16BITS    (MPDDRC_MINFO0_MAX_WAIT_SIZE_16BITS_Val << MPDDRC_MINFO0_MAX_WAIT_SIZE_Pos) /* (MPDDRC_MINFO0) Halfword transfer Position */
#define MPDDRC_MINFO0_MAX_WAIT_SIZE_32BITS    (MPDDRC_MINFO0_MAX_WAIT_SIZE_32BITS_Val << MPDDRC_MINFO0_MAX_WAIT_SIZE_Pos) /* (MPDDRC_MINFO0) Word transfer Position */
#define MPDDRC_MINFO0_MAX_WAIT_SIZE_64BITS    (MPDDRC_MINFO0_MAX_WAIT_SIZE_64BITS_Val << MPDDRC_MINFO0_MAX_WAIT_SIZE_Pos) /* (MPDDRC_MINFO0) Dword transfer Position */
#define MPDDRC_MINFO0_MAX_WAIT_READ_WRITE_Pos _UINT32_(24)                                         /* (MPDDRC_MINFO0) Read or Write Access on Port [x = 0..6] Position */
#define MPDDRC_MINFO0_MAX_WAIT_READ_WRITE_Msk (_UINT32_(0x1) << MPDDRC_MINFO0_MAX_WAIT_READ_WRITE_Pos) /* (MPDDRC_MINFO0) Read or Write Access on Port [x = 0..6] Mask */
#define MPDDRC_MINFO0_MAX_WAIT_READ_WRITE(value) (MPDDRC_MINFO0_MAX_WAIT_READ_WRITE_Msk & (_UINT32_(value) << MPDDRC_MINFO0_MAX_WAIT_READ_WRITE_Pos))
#define   MPDDRC_MINFO0_MAX_WAIT_READ_WRITE_0_Val _UINT32_(0x0)                                        /* (MPDDRC_MINFO0) Read transfer.  */
#define   MPDDRC_MINFO0_MAX_WAIT_READ_WRITE_1_Val _UINT32_(0x1)                                        /* (MPDDRC_MINFO0) Write transfer.  */
#define MPDDRC_MINFO0_MAX_WAIT_READ_WRITE_0   (MPDDRC_MINFO0_MAX_WAIT_READ_WRITE_0_Val << MPDDRC_MINFO0_MAX_WAIT_READ_WRITE_Pos) /* (MPDDRC_MINFO0) Read transfer. Position */
#define MPDDRC_MINFO0_MAX_WAIT_READ_WRITE_1   (MPDDRC_MINFO0_MAX_WAIT_READ_WRITE_1_Val << MPDDRC_MINFO0_MAX_WAIT_READ_WRITE_Pos) /* (MPDDRC_MINFO0) Write transfer. Position */
#define MPDDRC_MINFO0_MAX_WAIT_LQOS_Pos       _UINT32_(25)                                         /* (MPDDRC_MINFO0) Value of Quality Of Service on Port [x = 0..6] Position */
#define MPDDRC_MINFO0_MAX_WAIT_LQOS_Msk       (_UINT32_(0x3) << MPDDRC_MINFO0_MAX_WAIT_LQOS_Pos)   /* (MPDDRC_MINFO0) Value of Quality Of Service on Port [x = 0..6] Mask */
#define MPDDRC_MINFO0_MAX_WAIT_LQOS(value)    (MPDDRC_MINFO0_MAX_WAIT_LQOS_Msk & (_UINT32_(value) << MPDDRC_MINFO0_MAX_WAIT_LQOS_Pos))
#define   MPDDRC_MINFO0_MAX_WAIT_LQOS_BACKGROUND_Val _UINT32_(0x0)                                        /* (MPDDRC_MINFO0) Background transfers  */
#define   MPDDRC_MINFO0_MAX_WAIT_LQOS_BANDWIDTH_Val _UINT32_(0x1)                                        /* (MPDDRC_MINFO0) Bandwidth sensitive  */
#define   MPDDRC_MINFO0_MAX_WAIT_LQOS_SENSITIVE_LAT_Val _UINT32_(0x2)                                        /* (MPDDRC_MINFO0) Latency sensitive  */
#define   MPDDRC_MINFO0_MAX_WAIT_LQOS_CRITICAL_LAT_Val _UINT32_(0x3)                                        /* (MPDDRC_MINFO0) Latency critical  */
#define MPDDRC_MINFO0_MAX_WAIT_LQOS_BACKGROUND (MPDDRC_MINFO0_MAX_WAIT_LQOS_BACKGROUND_Val << MPDDRC_MINFO0_MAX_WAIT_LQOS_Pos) /* (MPDDRC_MINFO0) Background transfers Position */
#define MPDDRC_MINFO0_MAX_WAIT_LQOS_BANDWIDTH (MPDDRC_MINFO0_MAX_WAIT_LQOS_BANDWIDTH_Val << MPDDRC_MINFO0_MAX_WAIT_LQOS_Pos) /* (MPDDRC_MINFO0) Bandwidth sensitive Position */
#define MPDDRC_MINFO0_MAX_WAIT_LQOS_SENSITIVE_LAT (MPDDRC_MINFO0_MAX_WAIT_LQOS_SENSITIVE_LAT_Val << MPDDRC_MINFO0_MAX_WAIT_LQOS_Pos) /* (MPDDRC_MINFO0) Latency sensitive Position */
#define MPDDRC_MINFO0_MAX_WAIT_LQOS_CRITICAL_LAT (MPDDRC_MINFO0_MAX_WAIT_LQOS_CRITICAL_LAT_Val << MPDDRC_MINFO0_MAX_WAIT_LQOS_Pos) /* (MPDDRC_MINFO0) Latency critical Position */
#define MPDDRC_MINFO0_MAX_WAIT_Msk            _UINT32_(0x0777FFFF)                                 /* (MPDDRC_MINFO0_MAX_WAIT) Register Mask  */

/* NB_TRANSFERS mode */
#define MPDDRC_MINFO0_NB_TRANSFERS_P0_NB_TRANSFERS_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO0) Number of Transfers on Port [x = 0..6] Position */
#define MPDDRC_MINFO0_NB_TRANSFERS_P0_NB_TRANSFERS_Msk (_UINT32_(0xFFFFFFFF) << MPDDRC_MINFO0_NB_TRANSFERS_P0_NB_TRANSFERS_Pos) /* (MPDDRC_MINFO0) Number of Transfers on Port [x = 0..6] Mask */
#define MPDDRC_MINFO0_NB_TRANSFERS_P0_NB_TRANSFERS(value) (MPDDRC_MINFO0_NB_TRANSFERS_P0_NB_TRANSFERS_Msk & (_UINT32_(value) << MPDDRC_MINFO0_NB_TRANSFERS_P0_NB_TRANSFERS_Pos))
#define MPDDRC_MINFO0_NB_TRANSFERS_Msk        _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO0_NB_TRANSFERS) Register Mask  */

/* TOTAL_CYCLE_COUNT mode */
#define MPDDRC_MINFO0_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO0) Total Cycle Count Position */
#define MPDDRC_MINFO0_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Msk (_UINT32_(0xFFFFFFFF) << MPDDRC_MINFO0_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Pos) /* (MPDDRC_MINFO0) Total Cycle Count Mask */
#define MPDDRC_MINFO0_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT(value) (MPDDRC_MINFO0_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Msk & (_UINT32_(value) << MPDDRC_MINFO0_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Pos))
#define MPDDRC_MINFO0_TOTAL_CYCLE_COUNT_Msk   _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO0_TOTAL_CYCLE_COUNT) Register Mask  */

/* TOTAL_LATENCY mode */
#define MPDDRC_MINFO0_TOTAL_LATENCY_P0_TOTAL_LATENCY_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO0) Total Latency on Port [x = 0..6] Position */
#define MPDDRC_MINFO0_TOTAL_LATENCY_P0_TOTAL_LATENCY_Msk (_UINT32_(0xFFFFFFFF) << MPDDRC_MINFO0_TOTAL_LATENCY_P0_TOTAL_LATENCY_Pos) /* (MPDDRC_MINFO0) Total Latency on Port [x = 0..6] Mask */
#define MPDDRC_MINFO0_TOTAL_LATENCY_P0_TOTAL_LATENCY(value) (MPDDRC_MINFO0_TOTAL_LATENCY_P0_TOTAL_LATENCY_Msk & (_UINT32_(value) << MPDDRC_MINFO0_TOTAL_LATENCY_P0_TOTAL_LATENCY_Pos))
#define MPDDRC_MINFO0_TOTAL_LATENCY_Msk       _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO0_TOTAL_LATENCY) Register Mask  */

/* TOTAL_LATENCY_QOS01 mode */
#define MPDDRC_MINFO0_TOTAL_LATENCY_QOS01_P0_TOTAL_LATENCY_QOS0_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO0) Total Latency on Port [x = 0..6] when value of qos is 0 Position */
#define MPDDRC_MINFO0_TOTAL_LATENCY_QOS01_P0_TOTAL_LATENCY_QOS0_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO0_TOTAL_LATENCY_QOS01_P0_TOTAL_LATENCY_QOS0_Pos) /* (MPDDRC_MINFO0) Total Latency on Port [x = 0..6] when value of qos is 0 Mask */
#define MPDDRC_MINFO0_TOTAL_LATENCY_QOS01_P0_TOTAL_LATENCY_QOS0(value) (MPDDRC_MINFO0_TOTAL_LATENCY_QOS01_P0_TOTAL_LATENCY_QOS0_Msk & (_UINT32_(value) << MPDDRC_MINFO0_TOTAL_LATENCY_QOS01_P0_TOTAL_LATENCY_QOS0_Pos))
#define MPDDRC_MINFO0_TOTAL_LATENCY_QOS01_P0_TOTAL_LATENCY_QOS1_Pos _UINT32_(16)                                         /* (MPDDRC_MINFO0) Total Latency on Port [x = 0..6] when value of qos is 1 Position */
#define MPDDRC_MINFO0_TOTAL_LATENCY_QOS01_P0_TOTAL_LATENCY_QOS1_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO0_TOTAL_LATENCY_QOS01_P0_TOTAL_LATENCY_QOS1_Pos) /* (MPDDRC_MINFO0) Total Latency on Port [x = 0..6] when value of qos is 1 Mask */
#define MPDDRC_MINFO0_TOTAL_LATENCY_QOS01_P0_TOTAL_LATENCY_QOS1(value) (MPDDRC_MINFO0_TOTAL_LATENCY_QOS01_P0_TOTAL_LATENCY_QOS1_Msk & (_UINT32_(value) << MPDDRC_MINFO0_TOTAL_LATENCY_QOS01_P0_TOTAL_LATENCY_QOS1_Pos))
#define MPDDRC_MINFO0_TOTAL_LATENCY_QOS01_Msk _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO0_TOTAL_LATENCY_QOS01) Register Mask  */

/* TOTAL_LATENCY_QOS23 mode */
#define MPDDRC_MINFO0_TOTAL_LATENCY_QOS23_P0_TOTAL_LATENCY_QOS2_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO0) Total Latency on Port [x = 0..6] when value of qos is 2 Position */
#define MPDDRC_MINFO0_TOTAL_LATENCY_QOS23_P0_TOTAL_LATENCY_QOS2_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO0_TOTAL_LATENCY_QOS23_P0_TOTAL_LATENCY_QOS2_Pos) /* (MPDDRC_MINFO0) Total Latency on Port [x = 0..6] when value of qos is 2 Mask */
#define MPDDRC_MINFO0_TOTAL_LATENCY_QOS23_P0_TOTAL_LATENCY_QOS2(value) (MPDDRC_MINFO0_TOTAL_LATENCY_QOS23_P0_TOTAL_LATENCY_QOS2_Msk & (_UINT32_(value) << MPDDRC_MINFO0_TOTAL_LATENCY_QOS23_P0_TOTAL_LATENCY_QOS2_Pos))
#define MPDDRC_MINFO0_TOTAL_LATENCY_QOS23_P0_TOTAL_LATENCY_QOS3_Pos _UINT32_(16)                                         /* (MPDDRC_MINFO0) Total Latency on Port [x = 0..6] when value of qos is 3 Position */
#define MPDDRC_MINFO0_TOTAL_LATENCY_QOS23_P0_TOTAL_LATENCY_QOS3_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO0_TOTAL_LATENCY_QOS23_P0_TOTAL_LATENCY_QOS3_Pos) /* (MPDDRC_MINFO0) Total Latency on Port [x = 0..6] when value of qos is 3 Mask */
#define MPDDRC_MINFO0_TOTAL_LATENCY_QOS23_P0_TOTAL_LATENCY_QOS3(value) (MPDDRC_MINFO0_TOTAL_LATENCY_QOS23_P0_TOTAL_LATENCY_QOS3_Msk & (_UINT32_(value) << MPDDRC_MINFO0_TOTAL_LATENCY_QOS23_P0_TOTAL_LATENCY_QOS3_Pos))
#define MPDDRC_MINFO0_TOTAL_LATENCY_QOS23_Msk _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO0_TOTAL_LATENCY_QOS23) Register Mask  */


/* -------- MPDDRC_MINFO1 : (MPDDRC Offset: 0x88) ( R/ 32) Monitor Information Port 1 Register -------- */
#define MPDDRC_MINFO1_RESETVALUE              _UINT32_(0x00)                                       /*  (MPDDRC_MINFO1) Monitor Information Port 1 Register  Reset Value */

#define MPDDRC_MINFO1_Msk                     _UINT32_(0x00000000)                                 /* (MPDDRC_MINFO1) Register Mask  */

/* MAX_WAIT mode */
#define MPDDRC_MINFO1_MAX_WAIT_MAX_PORT1_WAITING_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO1) Address High on Port [x = 0..6] Position */
#define MPDDRC_MINFO1_MAX_WAIT_MAX_PORT1_WAITING_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO1_MAX_WAIT_MAX_PORT1_WAITING_Pos) /* (MPDDRC_MINFO1) Address High on Port [x = 0..6] Mask */
#define MPDDRC_MINFO1_MAX_WAIT_MAX_PORT1_WAITING(value) (MPDDRC_MINFO1_MAX_WAIT_MAX_PORT1_WAITING_Msk & (_UINT32_(value) << MPDDRC_MINFO1_MAX_WAIT_MAX_PORT1_WAITING_Pos))
#define MPDDRC_MINFO1_MAX_WAIT_BURST_Pos      _UINT32_(16)                                         /* (MPDDRC_MINFO1) Type of Burst on Port [x = 0..6] Position */
#define MPDDRC_MINFO1_MAX_WAIT_BURST_Msk      (_UINT32_(0x7) << MPDDRC_MINFO1_MAX_WAIT_BURST_Pos)  /* (MPDDRC_MINFO1) Type of Burst on Port [x = 0..6] Mask */
#define MPDDRC_MINFO1_MAX_WAIT_BURST(value)   (MPDDRC_MINFO1_MAX_WAIT_BURST_Msk & (_UINT32_(value) << MPDDRC_MINFO1_MAX_WAIT_BURST_Pos))
#define   MPDDRC_MINFO1_MAX_WAIT_BURST_SINGLE_Val _UINT32_(0x0)                                        /* (MPDDRC_MINFO1) Single transfer  */
#define   MPDDRC_MINFO1_MAX_WAIT_BURST_INCR_Val _UINT32_(0x1)                                        /* (MPDDRC_MINFO1) Incrementing burst of unspecified length  */
#define   MPDDRC_MINFO1_MAX_WAIT_BURST_WRAP4_Val _UINT32_(0x2)                                        /* (MPDDRC_MINFO1) 4-beat wrapping burst  */
#define   MPDDRC_MINFO1_MAX_WAIT_BURST_INCR4_Val _UINT32_(0x3)                                        /* (MPDDRC_MINFO1) 4-beat incrementing burst  */
#define   MPDDRC_MINFO1_MAX_WAIT_BURST_WRAP8_Val _UINT32_(0x4)                                        /* (MPDDRC_MINFO1) 8-beat wrapping burst  */
#define   MPDDRC_MINFO1_MAX_WAIT_BURST_INCR8_Val _UINT32_(0x5)                                        /* (MPDDRC_MINFO1) 8-beat incrementing burst  */
#define   MPDDRC_MINFO1_MAX_WAIT_BURST_WRAP16_Val _UINT32_(0x6)                                        /* (MPDDRC_MINFO1) 16-beat wrapping burst  */
#define   MPDDRC_MINFO1_MAX_WAIT_BURST_INCR16_Val _UINT32_(0x7)                                        /* (MPDDRC_MINFO1) 16-beat incrementing burst  */
#define MPDDRC_MINFO1_MAX_WAIT_BURST_SINGLE   (MPDDRC_MINFO1_MAX_WAIT_BURST_SINGLE_Val << MPDDRC_MINFO1_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO1) Single transfer Position */
#define MPDDRC_MINFO1_MAX_WAIT_BURST_INCR     (MPDDRC_MINFO1_MAX_WAIT_BURST_INCR_Val << MPDDRC_MINFO1_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO1) Incrementing burst of unspecified length Position */
#define MPDDRC_MINFO1_MAX_WAIT_BURST_WRAP4    (MPDDRC_MINFO1_MAX_WAIT_BURST_WRAP4_Val << MPDDRC_MINFO1_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO1) 4-beat wrapping burst Position */
#define MPDDRC_MINFO1_MAX_WAIT_BURST_INCR4    (MPDDRC_MINFO1_MAX_WAIT_BURST_INCR4_Val << MPDDRC_MINFO1_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO1) 4-beat incrementing burst Position */
#define MPDDRC_MINFO1_MAX_WAIT_BURST_WRAP8    (MPDDRC_MINFO1_MAX_WAIT_BURST_WRAP8_Val << MPDDRC_MINFO1_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO1) 8-beat wrapping burst Position */
#define MPDDRC_MINFO1_MAX_WAIT_BURST_INCR8    (MPDDRC_MINFO1_MAX_WAIT_BURST_INCR8_Val << MPDDRC_MINFO1_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO1) 8-beat incrementing burst Position */
#define MPDDRC_MINFO1_MAX_WAIT_BURST_WRAP16   (MPDDRC_MINFO1_MAX_WAIT_BURST_WRAP16_Val << MPDDRC_MINFO1_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO1) 16-beat wrapping burst Position */
#define MPDDRC_MINFO1_MAX_WAIT_BURST_INCR16   (MPDDRC_MINFO1_MAX_WAIT_BURST_INCR16_Val << MPDDRC_MINFO1_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO1) 16-beat incrementing burst Position */
#define MPDDRC_MINFO1_MAX_WAIT_SIZE_Pos       _UINT32_(20)                                         /* (MPDDRC_MINFO1) Transfer Size on Port [x = 0..6] Position */
#define MPDDRC_MINFO1_MAX_WAIT_SIZE_Msk       (_UINT32_(0x7) << MPDDRC_MINFO1_MAX_WAIT_SIZE_Pos)   /* (MPDDRC_MINFO1) Transfer Size on Port [x = 0..6] Mask */
#define MPDDRC_MINFO1_MAX_WAIT_SIZE(value)    (MPDDRC_MINFO1_MAX_WAIT_SIZE_Msk & (_UINT32_(value) << MPDDRC_MINFO1_MAX_WAIT_SIZE_Pos))
#define   MPDDRC_MINFO1_MAX_WAIT_SIZE_8BITS_Val _UINT32_(0x0)                                        /* (MPDDRC_MINFO1) Byte transfer  */
#define   MPDDRC_MINFO1_MAX_WAIT_SIZE_16BITS_Val _UINT32_(0x1)                                        /* (MPDDRC_MINFO1) Halfword transfer  */
#define   MPDDRC_MINFO1_MAX_WAIT_SIZE_32BITS_Val _UINT32_(0x2)                                        /* (MPDDRC_MINFO1) Word transfer  */
#define   MPDDRC_MINFO1_MAX_WAIT_SIZE_64BITS_Val _UINT32_(0x3)                                        /* (MPDDRC_MINFO1) Dword transfer  */
#define MPDDRC_MINFO1_MAX_WAIT_SIZE_8BITS     (MPDDRC_MINFO1_MAX_WAIT_SIZE_8BITS_Val << MPDDRC_MINFO1_MAX_WAIT_SIZE_Pos) /* (MPDDRC_MINFO1) Byte transfer Position */
#define MPDDRC_MINFO1_MAX_WAIT_SIZE_16BITS    (MPDDRC_MINFO1_MAX_WAIT_SIZE_16BITS_Val << MPDDRC_MINFO1_MAX_WAIT_SIZE_Pos) /* (MPDDRC_MINFO1) Halfword transfer Position */
#define MPDDRC_MINFO1_MAX_WAIT_SIZE_32BITS    (MPDDRC_MINFO1_MAX_WAIT_SIZE_32BITS_Val << MPDDRC_MINFO1_MAX_WAIT_SIZE_Pos) /* (MPDDRC_MINFO1) Word transfer Position */
#define MPDDRC_MINFO1_MAX_WAIT_SIZE_64BITS    (MPDDRC_MINFO1_MAX_WAIT_SIZE_64BITS_Val << MPDDRC_MINFO1_MAX_WAIT_SIZE_Pos) /* (MPDDRC_MINFO1) Dword transfer Position */
#define MPDDRC_MINFO1_MAX_WAIT_READ_WRITE_Pos _UINT32_(24)                                         /* (MPDDRC_MINFO1) Read or Write Access on Port [x = 0..6] Position */
#define MPDDRC_MINFO1_MAX_WAIT_READ_WRITE_Msk (_UINT32_(0x1) << MPDDRC_MINFO1_MAX_WAIT_READ_WRITE_Pos) /* (MPDDRC_MINFO1) Read or Write Access on Port [x = 0..6] Mask */
#define MPDDRC_MINFO1_MAX_WAIT_READ_WRITE(value) (MPDDRC_MINFO1_MAX_WAIT_READ_WRITE_Msk & (_UINT32_(value) << MPDDRC_MINFO1_MAX_WAIT_READ_WRITE_Pos))
#define   MPDDRC_MINFO1_MAX_WAIT_READ_WRITE_0_Val _UINT32_(0x0)                                        /* (MPDDRC_MINFO1) Read transfer.  */
#define   MPDDRC_MINFO1_MAX_WAIT_READ_WRITE_1_Val _UINT32_(0x1)                                        /* (MPDDRC_MINFO1) Write transfer.  */
#define MPDDRC_MINFO1_MAX_WAIT_READ_WRITE_0   (MPDDRC_MINFO1_MAX_WAIT_READ_WRITE_0_Val << MPDDRC_MINFO1_MAX_WAIT_READ_WRITE_Pos) /* (MPDDRC_MINFO1) Read transfer. Position */
#define MPDDRC_MINFO1_MAX_WAIT_READ_WRITE_1   (MPDDRC_MINFO1_MAX_WAIT_READ_WRITE_1_Val << MPDDRC_MINFO1_MAX_WAIT_READ_WRITE_Pos) /* (MPDDRC_MINFO1) Write transfer. Position */
#define MPDDRC_MINFO1_MAX_WAIT_LQOS_Pos       _UINT32_(25)                                         /* (MPDDRC_MINFO1) Value of Quality Of Service on Port [x = 0..6] Position */
#define MPDDRC_MINFO1_MAX_WAIT_LQOS_Msk       (_UINT32_(0x3) << MPDDRC_MINFO1_MAX_WAIT_LQOS_Pos)   /* (MPDDRC_MINFO1) Value of Quality Of Service on Port [x = 0..6] Mask */
#define MPDDRC_MINFO1_MAX_WAIT_LQOS(value)    (MPDDRC_MINFO1_MAX_WAIT_LQOS_Msk & (_UINT32_(value) << MPDDRC_MINFO1_MAX_WAIT_LQOS_Pos))
#define   MPDDRC_MINFO1_MAX_WAIT_LQOS_BACKGROUND_Val _UINT32_(0x0)                                        /* (MPDDRC_MINFO1) Background transfers  */
#define   MPDDRC_MINFO1_MAX_WAIT_LQOS_BANDWIDTH_Val _UINT32_(0x1)                                        /* (MPDDRC_MINFO1) Bandwidth sensitive  */
#define   MPDDRC_MINFO1_MAX_WAIT_LQOS_SENSITIVE_LAT_Val _UINT32_(0x2)                                        /* (MPDDRC_MINFO1) Latency sensitive  */
#define   MPDDRC_MINFO1_MAX_WAIT_LQOS_CRITICAL_LAT_Val _UINT32_(0x3)                                        /* (MPDDRC_MINFO1) Latency critical  */
#define MPDDRC_MINFO1_MAX_WAIT_LQOS_BACKGROUND (MPDDRC_MINFO1_MAX_WAIT_LQOS_BACKGROUND_Val << MPDDRC_MINFO1_MAX_WAIT_LQOS_Pos) /* (MPDDRC_MINFO1) Background transfers Position */
#define MPDDRC_MINFO1_MAX_WAIT_LQOS_BANDWIDTH (MPDDRC_MINFO1_MAX_WAIT_LQOS_BANDWIDTH_Val << MPDDRC_MINFO1_MAX_WAIT_LQOS_Pos) /* (MPDDRC_MINFO1) Bandwidth sensitive Position */
#define MPDDRC_MINFO1_MAX_WAIT_LQOS_SENSITIVE_LAT (MPDDRC_MINFO1_MAX_WAIT_LQOS_SENSITIVE_LAT_Val << MPDDRC_MINFO1_MAX_WAIT_LQOS_Pos) /* (MPDDRC_MINFO1) Latency sensitive Position */
#define MPDDRC_MINFO1_MAX_WAIT_LQOS_CRITICAL_LAT (MPDDRC_MINFO1_MAX_WAIT_LQOS_CRITICAL_LAT_Val << MPDDRC_MINFO1_MAX_WAIT_LQOS_Pos) /* (MPDDRC_MINFO1) Latency critical Position */
#define MPDDRC_MINFO1_MAX_WAIT_Msk            _UINT32_(0x0777FFFF)                                 /* (MPDDRC_MINFO1_MAX_WAIT) Register Mask  */

/* NB_TRANSFERS mode */
#define MPDDRC_MINFO1_NB_TRANSFERS_P1_NB_TRANSFERS_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO1) Number of Transfers on Port [x = 0..6] Position */
#define MPDDRC_MINFO1_NB_TRANSFERS_P1_NB_TRANSFERS_Msk (_UINT32_(0xFFFFFFFF) << MPDDRC_MINFO1_NB_TRANSFERS_P1_NB_TRANSFERS_Pos) /* (MPDDRC_MINFO1) Number of Transfers on Port [x = 0..6] Mask */
#define MPDDRC_MINFO1_NB_TRANSFERS_P1_NB_TRANSFERS(value) (MPDDRC_MINFO1_NB_TRANSFERS_P1_NB_TRANSFERS_Msk & (_UINT32_(value) << MPDDRC_MINFO1_NB_TRANSFERS_P1_NB_TRANSFERS_Pos))
#define MPDDRC_MINFO1_NB_TRANSFERS_Msk        _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO1_NB_TRANSFERS) Register Mask  */

/* TOTAL_CYCLE_COUNT mode */
#define MPDDRC_MINFO1_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO1) Total Cycle Count Position */
#define MPDDRC_MINFO1_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Msk (_UINT32_(0xFFFFFFFF) << MPDDRC_MINFO1_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Pos) /* (MPDDRC_MINFO1) Total Cycle Count Mask */
#define MPDDRC_MINFO1_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT(value) (MPDDRC_MINFO1_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Msk & (_UINT32_(value) << MPDDRC_MINFO1_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Pos))
#define MPDDRC_MINFO1_TOTAL_CYCLE_COUNT_Msk   _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO1_TOTAL_CYCLE_COUNT) Register Mask  */

/* TOTAL_LATENCY mode */
#define MPDDRC_MINFO1_TOTAL_LATENCY_P1_TOTAL_LATENCY_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO1) Total Latency on Port [x = 0..6] Position */
#define MPDDRC_MINFO1_TOTAL_LATENCY_P1_TOTAL_LATENCY_Msk (_UINT32_(0xFFFFFFFF) << MPDDRC_MINFO1_TOTAL_LATENCY_P1_TOTAL_LATENCY_Pos) /* (MPDDRC_MINFO1) Total Latency on Port [x = 0..6] Mask */
#define MPDDRC_MINFO1_TOTAL_LATENCY_P1_TOTAL_LATENCY(value) (MPDDRC_MINFO1_TOTAL_LATENCY_P1_TOTAL_LATENCY_Msk & (_UINT32_(value) << MPDDRC_MINFO1_TOTAL_LATENCY_P1_TOTAL_LATENCY_Pos))
#define MPDDRC_MINFO1_TOTAL_LATENCY_Msk       _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO1_TOTAL_LATENCY) Register Mask  */

/* TOTAL_LATENCY_QOS01 mode */
#define MPDDRC_MINFO1_TOTAL_LATENCY_QOS01_P1_TOTAL_LATENCY_QOS0_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO1) Total Latency on Port [x = 0..6] when value of qos is 0 Position */
#define MPDDRC_MINFO1_TOTAL_LATENCY_QOS01_P1_TOTAL_LATENCY_QOS0_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO1_TOTAL_LATENCY_QOS01_P1_TOTAL_LATENCY_QOS0_Pos) /* (MPDDRC_MINFO1) Total Latency on Port [x = 0..6] when value of qos is 0 Mask */
#define MPDDRC_MINFO1_TOTAL_LATENCY_QOS01_P1_TOTAL_LATENCY_QOS0(value) (MPDDRC_MINFO1_TOTAL_LATENCY_QOS01_P1_TOTAL_LATENCY_QOS0_Msk & (_UINT32_(value) << MPDDRC_MINFO1_TOTAL_LATENCY_QOS01_P1_TOTAL_LATENCY_QOS0_Pos))
#define MPDDRC_MINFO1_TOTAL_LATENCY_QOS01_P1_TOTAL_LATENCY_QOS1_Pos _UINT32_(16)                                         /* (MPDDRC_MINFO1) Total Latency on Port [x = 0..6] when value of qos is 1 Position */
#define MPDDRC_MINFO1_TOTAL_LATENCY_QOS01_P1_TOTAL_LATENCY_QOS1_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO1_TOTAL_LATENCY_QOS01_P1_TOTAL_LATENCY_QOS1_Pos) /* (MPDDRC_MINFO1) Total Latency on Port [x = 0..6] when value of qos is 1 Mask */
#define MPDDRC_MINFO1_TOTAL_LATENCY_QOS01_P1_TOTAL_LATENCY_QOS1(value) (MPDDRC_MINFO1_TOTAL_LATENCY_QOS01_P1_TOTAL_LATENCY_QOS1_Msk & (_UINT32_(value) << MPDDRC_MINFO1_TOTAL_LATENCY_QOS01_P1_TOTAL_LATENCY_QOS1_Pos))
#define MPDDRC_MINFO1_TOTAL_LATENCY_QOS01_Msk _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO1_TOTAL_LATENCY_QOS01) Register Mask  */

/* TOTAL_LATENCY_QOS23 mode */
#define MPDDRC_MINFO1_TOTAL_LATENCY_QOS23_P1_TOTAL_LATENCY_QOS2_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO1) Total Latency on Port [x = 0..6] when value of qos is 2 Position */
#define MPDDRC_MINFO1_TOTAL_LATENCY_QOS23_P1_TOTAL_LATENCY_QOS2_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO1_TOTAL_LATENCY_QOS23_P1_TOTAL_LATENCY_QOS2_Pos) /* (MPDDRC_MINFO1) Total Latency on Port [x = 0..6] when value of qos is 2 Mask */
#define MPDDRC_MINFO1_TOTAL_LATENCY_QOS23_P1_TOTAL_LATENCY_QOS2(value) (MPDDRC_MINFO1_TOTAL_LATENCY_QOS23_P1_TOTAL_LATENCY_QOS2_Msk & (_UINT32_(value) << MPDDRC_MINFO1_TOTAL_LATENCY_QOS23_P1_TOTAL_LATENCY_QOS2_Pos))
#define MPDDRC_MINFO1_TOTAL_LATENCY_QOS23_P1_TOTAL_LATENCY_QOS3_Pos _UINT32_(16)                                         /* (MPDDRC_MINFO1) Total Latency on Port [x = 0..6] when value of qos is 3 Position */
#define MPDDRC_MINFO1_TOTAL_LATENCY_QOS23_P1_TOTAL_LATENCY_QOS3_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO1_TOTAL_LATENCY_QOS23_P1_TOTAL_LATENCY_QOS3_Pos) /* (MPDDRC_MINFO1) Total Latency on Port [x = 0..6] when value of qos is 3 Mask */
#define MPDDRC_MINFO1_TOTAL_LATENCY_QOS23_P1_TOTAL_LATENCY_QOS3(value) (MPDDRC_MINFO1_TOTAL_LATENCY_QOS23_P1_TOTAL_LATENCY_QOS3_Msk & (_UINT32_(value) << MPDDRC_MINFO1_TOTAL_LATENCY_QOS23_P1_TOTAL_LATENCY_QOS3_Pos))
#define MPDDRC_MINFO1_TOTAL_LATENCY_QOS23_Msk _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO1_TOTAL_LATENCY_QOS23) Register Mask  */


/* -------- MPDDRC_MINFO2 : (MPDDRC Offset: 0x8C) ( R/ 32) Monitor Information Port 2 Register -------- */
#define MPDDRC_MINFO2_RESETVALUE              _UINT32_(0x00)                                       /*  (MPDDRC_MINFO2) Monitor Information Port 2 Register  Reset Value */

#define MPDDRC_MINFO2_Msk                     _UINT32_(0x00000000)                                 /* (MPDDRC_MINFO2) Register Mask  */

/* MAX_WAIT mode */
#define MPDDRC_MINFO2_MAX_WAIT_MAX_PORT2_WAITING_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO2) Address High on Port [x = 0..6] Position */
#define MPDDRC_MINFO2_MAX_WAIT_MAX_PORT2_WAITING_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO2_MAX_WAIT_MAX_PORT2_WAITING_Pos) /* (MPDDRC_MINFO2) Address High on Port [x = 0..6] Mask */
#define MPDDRC_MINFO2_MAX_WAIT_MAX_PORT2_WAITING(value) (MPDDRC_MINFO2_MAX_WAIT_MAX_PORT2_WAITING_Msk & (_UINT32_(value) << MPDDRC_MINFO2_MAX_WAIT_MAX_PORT2_WAITING_Pos))
#define MPDDRC_MINFO2_MAX_WAIT_BURST_Pos      _UINT32_(16)                                         /* (MPDDRC_MINFO2) Type of Burst on Port [x = 0..6] Position */
#define MPDDRC_MINFO2_MAX_WAIT_BURST_Msk      (_UINT32_(0x7) << MPDDRC_MINFO2_MAX_WAIT_BURST_Pos)  /* (MPDDRC_MINFO2) Type of Burst on Port [x = 0..6] Mask */
#define MPDDRC_MINFO2_MAX_WAIT_BURST(value)   (MPDDRC_MINFO2_MAX_WAIT_BURST_Msk & (_UINT32_(value) << MPDDRC_MINFO2_MAX_WAIT_BURST_Pos))
#define   MPDDRC_MINFO2_MAX_WAIT_BURST_SINGLE_Val _UINT32_(0x0)                                        /* (MPDDRC_MINFO2) Single transfer  */
#define   MPDDRC_MINFO2_MAX_WAIT_BURST_INCR_Val _UINT32_(0x1)                                        /* (MPDDRC_MINFO2) Incrementing burst of unspecified length  */
#define   MPDDRC_MINFO2_MAX_WAIT_BURST_WRAP4_Val _UINT32_(0x2)                                        /* (MPDDRC_MINFO2) 4-beat wrapping burst  */
#define   MPDDRC_MINFO2_MAX_WAIT_BURST_INCR4_Val _UINT32_(0x3)                                        /* (MPDDRC_MINFO2) 4-beat incrementing burst  */
#define   MPDDRC_MINFO2_MAX_WAIT_BURST_WRAP8_Val _UINT32_(0x4)                                        /* (MPDDRC_MINFO2) 8-beat wrapping burst  */
#define   MPDDRC_MINFO2_MAX_WAIT_BURST_INCR8_Val _UINT32_(0x5)                                        /* (MPDDRC_MINFO2) 8-beat incrementing burst  */
#define   MPDDRC_MINFO2_MAX_WAIT_BURST_WRAP16_Val _UINT32_(0x6)                                        /* (MPDDRC_MINFO2) 16-beat wrapping burst  */
#define   MPDDRC_MINFO2_MAX_WAIT_BURST_INCR16_Val _UINT32_(0x7)                                        /* (MPDDRC_MINFO2) 16-beat incrementing burst  */
#define MPDDRC_MINFO2_MAX_WAIT_BURST_SINGLE   (MPDDRC_MINFO2_MAX_WAIT_BURST_SINGLE_Val << MPDDRC_MINFO2_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO2) Single transfer Position */
#define MPDDRC_MINFO2_MAX_WAIT_BURST_INCR     (MPDDRC_MINFO2_MAX_WAIT_BURST_INCR_Val << MPDDRC_MINFO2_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO2) Incrementing burst of unspecified length Position */
#define MPDDRC_MINFO2_MAX_WAIT_BURST_WRAP4    (MPDDRC_MINFO2_MAX_WAIT_BURST_WRAP4_Val << MPDDRC_MINFO2_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO2) 4-beat wrapping burst Position */
#define MPDDRC_MINFO2_MAX_WAIT_BURST_INCR4    (MPDDRC_MINFO2_MAX_WAIT_BURST_INCR4_Val << MPDDRC_MINFO2_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO2) 4-beat incrementing burst Position */
#define MPDDRC_MINFO2_MAX_WAIT_BURST_WRAP8    (MPDDRC_MINFO2_MAX_WAIT_BURST_WRAP8_Val << MPDDRC_MINFO2_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO2) 8-beat wrapping burst Position */
#define MPDDRC_MINFO2_MAX_WAIT_BURST_INCR8    (MPDDRC_MINFO2_MAX_WAIT_BURST_INCR8_Val << MPDDRC_MINFO2_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO2) 8-beat incrementing burst Position */
#define MPDDRC_MINFO2_MAX_WAIT_BURST_WRAP16   (MPDDRC_MINFO2_MAX_WAIT_BURST_WRAP16_Val << MPDDRC_MINFO2_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO2) 16-beat wrapping burst Position */
#define MPDDRC_MINFO2_MAX_WAIT_BURST_INCR16   (MPDDRC_MINFO2_MAX_WAIT_BURST_INCR16_Val << MPDDRC_MINFO2_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO2) 16-beat incrementing burst Position */
#define MPDDRC_MINFO2_MAX_WAIT_SIZE_Pos       _UINT32_(20)                                         /* (MPDDRC_MINFO2) Transfer Size on Port [x = 0..6] Position */
#define MPDDRC_MINFO2_MAX_WAIT_SIZE_Msk       (_UINT32_(0x7) << MPDDRC_MINFO2_MAX_WAIT_SIZE_Pos)   /* (MPDDRC_MINFO2) Transfer Size on Port [x = 0..6] Mask */
#define MPDDRC_MINFO2_MAX_WAIT_SIZE(value)    (MPDDRC_MINFO2_MAX_WAIT_SIZE_Msk & (_UINT32_(value) << MPDDRC_MINFO2_MAX_WAIT_SIZE_Pos))
#define   MPDDRC_MINFO2_MAX_WAIT_SIZE_8BITS_Val _UINT32_(0x0)                                        /* (MPDDRC_MINFO2) Byte transfer  */
#define   MPDDRC_MINFO2_MAX_WAIT_SIZE_16BITS_Val _UINT32_(0x1)                                        /* (MPDDRC_MINFO2) Halfword transfer  */
#define   MPDDRC_MINFO2_MAX_WAIT_SIZE_32BITS_Val _UINT32_(0x2)                                        /* (MPDDRC_MINFO2) Word transfer  */
#define   MPDDRC_MINFO2_MAX_WAIT_SIZE_64BITS_Val _UINT32_(0x3)                                        /* (MPDDRC_MINFO2) Dword transfer  */
#define MPDDRC_MINFO2_MAX_WAIT_SIZE_8BITS     (MPDDRC_MINFO2_MAX_WAIT_SIZE_8BITS_Val << MPDDRC_MINFO2_MAX_WAIT_SIZE_Pos) /* (MPDDRC_MINFO2) Byte transfer Position */
#define MPDDRC_MINFO2_MAX_WAIT_SIZE_16BITS    (MPDDRC_MINFO2_MAX_WAIT_SIZE_16BITS_Val << MPDDRC_MINFO2_MAX_WAIT_SIZE_Pos) /* (MPDDRC_MINFO2) Halfword transfer Position */
#define MPDDRC_MINFO2_MAX_WAIT_SIZE_32BITS    (MPDDRC_MINFO2_MAX_WAIT_SIZE_32BITS_Val << MPDDRC_MINFO2_MAX_WAIT_SIZE_Pos) /* (MPDDRC_MINFO2) Word transfer Position */
#define MPDDRC_MINFO2_MAX_WAIT_SIZE_64BITS    (MPDDRC_MINFO2_MAX_WAIT_SIZE_64BITS_Val << MPDDRC_MINFO2_MAX_WAIT_SIZE_Pos) /* (MPDDRC_MINFO2) Dword transfer Position */
#define MPDDRC_MINFO2_MAX_WAIT_READ_WRITE_Pos _UINT32_(24)                                         /* (MPDDRC_MINFO2) Read or Write Access on Port [x = 0..6] Position */
#define MPDDRC_MINFO2_MAX_WAIT_READ_WRITE_Msk (_UINT32_(0x1) << MPDDRC_MINFO2_MAX_WAIT_READ_WRITE_Pos) /* (MPDDRC_MINFO2) Read or Write Access on Port [x = 0..6] Mask */
#define MPDDRC_MINFO2_MAX_WAIT_READ_WRITE(value) (MPDDRC_MINFO2_MAX_WAIT_READ_WRITE_Msk & (_UINT32_(value) << MPDDRC_MINFO2_MAX_WAIT_READ_WRITE_Pos))
#define   MPDDRC_MINFO2_MAX_WAIT_READ_WRITE_0_Val _UINT32_(0x0)                                        /* (MPDDRC_MINFO2) Read transfer.  */
#define   MPDDRC_MINFO2_MAX_WAIT_READ_WRITE_1_Val _UINT32_(0x1)                                        /* (MPDDRC_MINFO2) Write transfer.  */
#define MPDDRC_MINFO2_MAX_WAIT_READ_WRITE_0   (MPDDRC_MINFO2_MAX_WAIT_READ_WRITE_0_Val << MPDDRC_MINFO2_MAX_WAIT_READ_WRITE_Pos) /* (MPDDRC_MINFO2) Read transfer. Position */
#define MPDDRC_MINFO2_MAX_WAIT_READ_WRITE_1   (MPDDRC_MINFO2_MAX_WAIT_READ_WRITE_1_Val << MPDDRC_MINFO2_MAX_WAIT_READ_WRITE_Pos) /* (MPDDRC_MINFO2) Write transfer. Position */
#define MPDDRC_MINFO2_MAX_WAIT_LQOS_Pos       _UINT32_(25)                                         /* (MPDDRC_MINFO2) Value of Quality Of Service on Port [x = 0..6] Position */
#define MPDDRC_MINFO2_MAX_WAIT_LQOS_Msk       (_UINT32_(0x3) << MPDDRC_MINFO2_MAX_WAIT_LQOS_Pos)   /* (MPDDRC_MINFO2) Value of Quality Of Service on Port [x = 0..6] Mask */
#define MPDDRC_MINFO2_MAX_WAIT_LQOS(value)    (MPDDRC_MINFO2_MAX_WAIT_LQOS_Msk & (_UINT32_(value) << MPDDRC_MINFO2_MAX_WAIT_LQOS_Pos))
#define   MPDDRC_MINFO2_MAX_WAIT_LQOS_BACKGROUND_Val _UINT32_(0x0)                                        /* (MPDDRC_MINFO2) Background transfers  */
#define   MPDDRC_MINFO2_MAX_WAIT_LQOS_BANDWIDTH_Val _UINT32_(0x1)                                        /* (MPDDRC_MINFO2) Bandwidth sensitive  */
#define   MPDDRC_MINFO2_MAX_WAIT_LQOS_SENSITIVE_LAT_Val _UINT32_(0x2)                                        /* (MPDDRC_MINFO2) Latency sensitive  */
#define   MPDDRC_MINFO2_MAX_WAIT_LQOS_CRITICAL_LAT_Val _UINT32_(0x3)                                        /* (MPDDRC_MINFO2) Latency critical  */
#define MPDDRC_MINFO2_MAX_WAIT_LQOS_BACKGROUND (MPDDRC_MINFO2_MAX_WAIT_LQOS_BACKGROUND_Val << MPDDRC_MINFO2_MAX_WAIT_LQOS_Pos) /* (MPDDRC_MINFO2) Background transfers Position */
#define MPDDRC_MINFO2_MAX_WAIT_LQOS_BANDWIDTH (MPDDRC_MINFO2_MAX_WAIT_LQOS_BANDWIDTH_Val << MPDDRC_MINFO2_MAX_WAIT_LQOS_Pos) /* (MPDDRC_MINFO2) Bandwidth sensitive Position */
#define MPDDRC_MINFO2_MAX_WAIT_LQOS_SENSITIVE_LAT (MPDDRC_MINFO2_MAX_WAIT_LQOS_SENSITIVE_LAT_Val << MPDDRC_MINFO2_MAX_WAIT_LQOS_Pos) /* (MPDDRC_MINFO2) Latency sensitive Position */
#define MPDDRC_MINFO2_MAX_WAIT_LQOS_CRITICAL_LAT (MPDDRC_MINFO2_MAX_WAIT_LQOS_CRITICAL_LAT_Val << MPDDRC_MINFO2_MAX_WAIT_LQOS_Pos) /* (MPDDRC_MINFO2) Latency critical Position */
#define MPDDRC_MINFO2_MAX_WAIT_Msk            _UINT32_(0x0777FFFF)                                 /* (MPDDRC_MINFO2_MAX_WAIT) Register Mask  */

/* NB_TRANSFERS mode */
#define MPDDRC_MINFO2_NB_TRANSFERS_P2_NB_TRANSFERS_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO2) Number of Transfers on Port [x = 0..6] Position */
#define MPDDRC_MINFO2_NB_TRANSFERS_P2_NB_TRANSFERS_Msk (_UINT32_(0xFFFFFFFF) << MPDDRC_MINFO2_NB_TRANSFERS_P2_NB_TRANSFERS_Pos) /* (MPDDRC_MINFO2) Number of Transfers on Port [x = 0..6] Mask */
#define MPDDRC_MINFO2_NB_TRANSFERS_P2_NB_TRANSFERS(value) (MPDDRC_MINFO2_NB_TRANSFERS_P2_NB_TRANSFERS_Msk & (_UINT32_(value) << MPDDRC_MINFO2_NB_TRANSFERS_P2_NB_TRANSFERS_Pos))
#define MPDDRC_MINFO2_NB_TRANSFERS_Msk        _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO2_NB_TRANSFERS) Register Mask  */

/* TOTAL_CYCLE_COUNT mode */
#define MPDDRC_MINFO2_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO2) Total Cycle Count Position */
#define MPDDRC_MINFO2_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Msk (_UINT32_(0xFFFFFFFF) << MPDDRC_MINFO2_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Pos) /* (MPDDRC_MINFO2) Total Cycle Count Mask */
#define MPDDRC_MINFO2_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT(value) (MPDDRC_MINFO2_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Msk & (_UINT32_(value) << MPDDRC_MINFO2_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Pos))
#define MPDDRC_MINFO2_TOTAL_CYCLE_COUNT_Msk   _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO2_TOTAL_CYCLE_COUNT) Register Mask  */

/* TOTAL_LATENCY mode */
#define MPDDRC_MINFO2_TOTAL_LATENCY_P2_TOTAL_LATENCY_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO2) Total Latency on Port [x = 0..6] Position */
#define MPDDRC_MINFO2_TOTAL_LATENCY_P2_TOTAL_LATENCY_Msk (_UINT32_(0xFFFFFFFF) << MPDDRC_MINFO2_TOTAL_LATENCY_P2_TOTAL_LATENCY_Pos) /* (MPDDRC_MINFO2) Total Latency on Port [x = 0..6] Mask */
#define MPDDRC_MINFO2_TOTAL_LATENCY_P2_TOTAL_LATENCY(value) (MPDDRC_MINFO2_TOTAL_LATENCY_P2_TOTAL_LATENCY_Msk & (_UINT32_(value) << MPDDRC_MINFO2_TOTAL_LATENCY_P2_TOTAL_LATENCY_Pos))
#define MPDDRC_MINFO2_TOTAL_LATENCY_Msk       _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO2_TOTAL_LATENCY) Register Mask  */

/* TOTAL_LATENCY_QOS01 mode */
#define MPDDRC_MINFO2_TOTAL_LATENCY_QOS01_P2_TOTAL_LATENCY_QOS0_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO2) Total Latency on Port [x = 0..6] when value of qos is 0 Position */
#define MPDDRC_MINFO2_TOTAL_LATENCY_QOS01_P2_TOTAL_LATENCY_QOS0_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO2_TOTAL_LATENCY_QOS01_P2_TOTAL_LATENCY_QOS0_Pos) /* (MPDDRC_MINFO2) Total Latency on Port [x = 0..6] when value of qos is 0 Mask */
#define MPDDRC_MINFO2_TOTAL_LATENCY_QOS01_P2_TOTAL_LATENCY_QOS0(value) (MPDDRC_MINFO2_TOTAL_LATENCY_QOS01_P2_TOTAL_LATENCY_QOS0_Msk & (_UINT32_(value) << MPDDRC_MINFO2_TOTAL_LATENCY_QOS01_P2_TOTAL_LATENCY_QOS0_Pos))
#define MPDDRC_MINFO2_TOTAL_LATENCY_QOS01_P2_TOTAL_LATENCY_QOS1_Pos _UINT32_(16)                                         /* (MPDDRC_MINFO2) Total Latency on Port [x = 0..6] when value of qos is 1 Position */
#define MPDDRC_MINFO2_TOTAL_LATENCY_QOS01_P2_TOTAL_LATENCY_QOS1_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO2_TOTAL_LATENCY_QOS01_P2_TOTAL_LATENCY_QOS1_Pos) /* (MPDDRC_MINFO2) Total Latency on Port [x = 0..6] when value of qos is 1 Mask */
#define MPDDRC_MINFO2_TOTAL_LATENCY_QOS01_P2_TOTAL_LATENCY_QOS1(value) (MPDDRC_MINFO2_TOTAL_LATENCY_QOS01_P2_TOTAL_LATENCY_QOS1_Msk & (_UINT32_(value) << MPDDRC_MINFO2_TOTAL_LATENCY_QOS01_P2_TOTAL_LATENCY_QOS1_Pos))
#define MPDDRC_MINFO2_TOTAL_LATENCY_QOS01_Msk _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO2_TOTAL_LATENCY_QOS01) Register Mask  */

/* TOTAL_LATENCY_QOS23 mode */
#define MPDDRC_MINFO2_TOTAL_LATENCY_QOS23_P2_TOTAL_LATENCY_QOS2_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO2) Total Latency on Port [x = 0..6] when value of qos is 2 Position */
#define MPDDRC_MINFO2_TOTAL_LATENCY_QOS23_P2_TOTAL_LATENCY_QOS2_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO2_TOTAL_LATENCY_QOS23_P2_TOTAL_LATENCY_QOS2_Pos) /* (MPDDRC_MINFO2) Total Latency on Port [x = 0..6] when value of qos is 2 Mask */
#define MPDDRC_MINFO2_TOTAL_LATENCY_QOS23_P2_TOTAL_LATENCY_QOS2(value) (MPDDRC_MINFO2_TOTAL_LATENCY_QOS23_P2_TOTAL_LATENCY_QOS2_Msk & (_UINT32_(value) << MPDDRC_MINFO2_TOTAL_LATENCY_QOS23_P2_TOTAL_LATENCY_QOS2_Pos))
#define MPDDRC_MINFO2_TOTAL_LATENCY_QOS23_P2_TOTAL_LATENCY_QOS3_Pos _UINT32_(16)                                         /* (MPDDRC_MINFO2) Total Latency on Port [x = 0..6] when value of qos is 3 Position */
#define MPDDRC_MINFO2_TOTAL_LATENCY_QOS23_P2_TOTAL_LATENCY_QOS3_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO2_TOTAL_LATENCY_QOS23_P2_TOTAL_LATENCY_QOS3_Pos) /* (MPDDRC_MINFO2) Total Latency on Port [x = 0..6] when value of qos is 3 Mask */
#define MPDDRC_MINFO2_TOTAL_LATENCY_QOS23_P2_TOTAL_LATENCY_QOS3(value) (MPDDRC_MINFO2_TOTAL_LATENCY_QOS23_P2_TOTAL_LATENCY_QOS3_Msk & (_UINT32_(value) << MPDDRC_MINFO2_TOTAL_LATENCY_QOS23_P2_TOTAL_LATENCY_QOS3_Pos))
#define MPDDRC_MINFO2_TOTAL_LATENCY_QOS23_Msk _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO2_TOTAL_LATENCY_QOS23) Register Mask  */


/* -------- MPDDRC_MINFO3 : (MPDDRC Offset: 0x90) ( R/ 32) Monitor Information Port 3 Register -------- */
#define MPDDRC_MINFO3_RESETVALUE              _UINT32_(0x00)                                       /*  (MPDDRC_MINFO3) Monitor Information Port 3 Register  Reset Value */

#define MPDDRC_MINFO3_Msk                     _UINT32_(0x00000000)                                 /* (MPDDRC_MINFO3) Register Mask  */

/* MAX_WAIT mode */
#define MPDDRC_MINFO3_MAX_WAIT_MAX_PORT3_WAITING_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO3) Address High on Port [x = 0..6] Position */
#define MPDDRC_MINFO3_MAX_WAIT_MAX_PORT3_WAITING_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO3_MAX_WAIT_MAX_PORT3_WAITING_Pos) /* (MPDDRC_MINFO3) Address High on Port [x = 0..6] Mask */
#define MPDDRC_MINFO3_MAX_WAIT_MAX_PORT3_WAITING(value) (MPDDRC_MINFO3_MAX_WAIT_MAX_PORT3_WAITING_Msk & (_UINT32_(value) << MPDDRC_MINFO3_MAX_WAIT_MAX_PORT3_WAITING_Pos))
#define MPDDRC_MINFO3_MAX_WAIT_BURST_Pos      _UINT32_(16)                                         /* (MPDDRC_MINFO3) Type of Burst on Port [x = 0..6] Position */
#define MPDDRC_MINFO3_MAX_WAIT_BURST_Msk      (_UINT32_(0x7) << MPDDRC_MINFO3_MAX_WAIT_BURST_Pos)  /* (MPDDRC_MINFO3) Type of Burst on Port [x = 0..6] Mask */
#define MPDDRC_MINFO3_MAX_WAIT_BURST(value)   (MPDDRC_MINFO3_MAX_WAIT_BURST_Msk & (_UINT32_(value) << MPDDRC_MINFO3_MAX_WAIT_BURST_Pos))
#define   MPDDRC_MINFO3_MAX_WAIT_BURST_SINGLE_Val _UINT32_(0x0)                                        /* (MPDDRC_MINFO3) Single transfer  */
#define   MPDDRC_MINFO3_MAX_WAIT_BURST_INCR_Val _UINT32_(0x1)                                        /* (MPDDRC_MINFO3) Incrementing burst of unspecified length  */
#define   MPDDRC_MINFO3_MAX_WAIT_BURST_WRAP4_Val _UINT32_(0x2)                                        /* (MPDDRC_MINFO3) 4-beat wrapping burst  */
#define   MPDDRC_MINFO3_MAX_WAIT_BURST_INCR4_Val _UINT32_(0x3)                                        /* (MPDDRC_MINFO3) 4-beat incrementing burst  */
#define   MPDDRC_MINFO3_MAX_WAIT_BURST_WRAP8_Val _UINT32_(0x4)                                        /* (MPDDRC_MINFO3) 8-beat wrapping burst  */
#define   MPDDRC_MINFO3_MAX_WAIT_BURST_INCR8_Val _UINT32_(0x5)                                        /* (MPDDRC_MINFO3) 8-beat incrementing burst  */
#define   MPDDRC_MINFO3_MAX_WAIT_BURST_WRAP16_Val _UINT32_(0x6)                                        /* (MPDDRC_MINFO3) 16-beat wrapping burst  */
#define   MPDDRC_MINFO3_MAX_WAIT_BURST_INCR16_Val _UINT32_(0x7)                                        /* (MPDDRC_MINFO3) 16-beat incrementing burst  */
#define MPDDRC_MINFO3_MAX_WAIT_BURST_SINGLE   (MPDDRC_MINFO3_MAX_WAIT_BURST_SINGLE_Val << MPDDRC_MINFO3_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO3) Single transfer Position */
#define MPDDRC_MINFO3_MAX_WAIT_BURST_INCR     (MPDDRC_MINFO3_MAX_WAIT_BURST_INCR_Val << MPDDRC_MINFO3_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO3) Incrementing burst of unspecified length Position */
#define MPDDRC_MINFO3_MAX_WAIT_BURST_WRAP4    (MPDDRC_MINFO3_MAX_WAIT_BURST_WRAP4_Val << MPDDRC_MINFO3_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO3) 4-beat wrapping burst Position */
#define MPDDRC_MINFO3_MAX_WAIT_BURST_INCR4    (MPDDRC_MINFO3_MAX_WAIT_BURST_INCR4_Val << MPDDRC_MINFO3_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO3) 4-beat incrementing burst Position */
#define MPDDRC_MINFO3_MAX_WAIT_BURST_WRAP8    (MPDDRC_MINFO3_MAX_WAIT_BURST_WRAP8_Val << MPDDRC_MINFO3_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO3) 8-beat wrapping burst Position */
#define MPDDRC_MINFO3_MAX_WAIT_BURST_INCR8    (MPDDRC_MINFO3_MAX_WAIT_BURST_INCR8_Val << MPDDRC_MINFO3_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO3) 8-beat incrementing burst Position */
#define MPDDRC_MINFO3_MAX_WAIT_BURST_WRAP16   (MPDDRC_MINFO3_MAX_WAIT_BURST_WRAP16_Val << MPDDRC_MINFO3_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO3) 16-beat wrapping burst Position */
#define MPDDRC_MINFO3_MAX_WAIT_BURST_INCR16   (MPDDRC_MINFO3_MAX_WAIT_BURST_INCR16_Val << MPDDRC_MINFO3_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO3) 16-beat incrementing burst Position */
#define MPDDRC_MINFO3_MAX_WAIT_SIZE_Pos       _UINT32_(20)                                         /* (MPDDRC_MINFO3) Transfer Size on Port [x = 0..6] Position */
#define MPDDRC_MINFO3_MAX_WAIT_SIZE_Msk       (_UINT32_(0x7) << MPDDRC_MINFO3_MAX_WAIT_SIZE_Pos)   /* (MPDDRC_MINFO3) Transfer Size on Port [x = 0..6] Mask */
#define MPDDRC_MINFO3_MAX_WAIT_SIZE(value)    (MPDDRC_MINFO3_MAX_WAIT_SIZE_Msk & (_UINT32_(value) << MPDDRC_MINFO3_MAX_WAIT_SIZE_Pos))
#define   MPDDRC_MINFO3_MAX_WAIT_SIZE_8BITS_Val _UINT32_(0x0)                                        /* (MPDDRC_MINFO3) Byte transfer  */
#define   MPDDRC_MINFO3_MAX_WAIT_SIZE_16BITS_Val _UINT32_(0x1)                                        /* (MPDDRC_MINFO3) Halfword transfer  */
#define   MPDDRC_MINFO3_MAX_WAIT_SIZE_32BITS_Val _UINT32_(0x2)                                        /* (MPDDRC_MINFO3) Word transfer  */
#define   MPDDRC_MINFO3_MAX_WAIT_SIZE_64BITS_Val _UINT32_(0x3)                                        /* (MPDDRC_MINFO3) Dword transfer  */
#define MPDDRC_MINFO3_MAX_WAIT_SIZE_8BITS     (MPDDRC_MINFO3_MAX_WAIT_SIZE_8BITS_Val << MPDDRC_MINFO3_MAX_WAIT_SIZE_Pos) /* (MPDDRC_MINFO3) Byte transfer Position */
#define MPDDRC_MINFO3_MAX_WAIT_SIZE_16BITS    (MPDDRC_MINFO3_MAX_WAIT_SIZE_16BITS_Val << MPDDRC_MINFO3_MAX_WAIT_SIZE_Pos) /* (MPDDRC_MINFO3) Halfword transfer Position */
#define MPDDRC_MINFO3_MAX_WAIT_SIZE_32BITS    (MPDDRC_MINFO3_MAX_WAIT_SIZE_32BITS_Val << MPDDRC_MINFO3_MAX_WAIT_SIZE_Pos) /* (MPDDRC_MINFO3) Word transfer Position */
#define MPDDRC_MINFO3_MAX_WAIT_SIZE_64BITS    (MPDDRC_MINFO3_MAX_WAIT_SIZE_64BITS_Val << MPDDRC_MINFO3_MAX_WAIT_SIZE_Pos) /* (MPDDRC_MINFO3) Dword transfer Position */
#define MPDDRC_MINFO3_MAX_WAIT_READ_WRITE_Pos _UINT32_(24)                                         /* (MPDDRC_MINFO3) Read or Write Access on Port [x = 0..6] Position */
#define MPDDRC_MINFO3_MAX_WAIT_READ_WRITE_Msk (_UINT32_(0x1) << MPDDRC_MINFO3_MAX_WAIT_READ_WRITE_Pos) /* (MPDDRC_MINFO3) Read or Write Access on Port [x = 0..6] Mask */
#define MPDDRC_MINFO3_MAX_WAIT_READ_WRITE(value) (MPDDRC_MINFO3_MAX_WAIT_READ_WRITE_Msk & (_UINT32_(value) << MPDDRC_MINFO3_MAX_WAIT_READ_WRITE_Pos))
#define   MPDDRC_MINFO3_MAX_WAIT_READ_WRITE_0_Val _UINT32_(0x0)                                        /* (MPDDRC_MINFO3) Read transfer.  */
#define   MPDDRC_MINFO3_MAX_WAIT_READ_WRITE_1_Val _UINT32_(0x1)                                        /* (MPDDRC_MINFO3) Write transfer.  */
#define MPDDRC_MINFO3_MAX_WAIT_READ_WRITE_0   (MPDDRC_MINFO3_MAX_WAIT_READ_WRITE_0_Val << MPDDRC_MINFO3_MAX_WAIT_READ_WRITE_Pos) /* (MPDDRC_MINFO3) Read transfer. Position */
#define MPDDRC_MINFO3_MAX_WAIT_READ_WRITE_1   (MPDDRC_MINFO3_MAX_WAIT_READ_WRITE_1_Val << MPDDRC_MINFO3_MAX_WAIT_READ_WRITE_Pos) /* (MPDDRC_MINFO3) Write transfer. Position */
#define MPDDRC_MINFO3_MAX_WAIT_LQOS_Pos       _UINT32_(25)                                         /* (MPDDRC_MINFO3) Value of Quality Of Service on Port [x = 0..6] Position */
#define MPDDRC_MINFO3_MAX_WAIT_LQOS_Msk       (_UINT32_(0x3) << MPDDRC_MINFO3_MAX_WAIT_LQOS_Pos)   /* (MPDDRC_MINFO3) Value of Quality Of Service on Port [x = 0..6] Mask */
#define MPDDRC_MINFO3_MAX_WAIT_LQOS(value)    (MPDDRC_MINFO3_MAX_WAIT_LQOS_Msk & (_UINT32_(value) << MPDDRC_MINFO3_MAX_WAIT_LQOS_Pos))
#define   MPDDRC_MINFO3_MAX_WAIT_LQOS_BACKGROUND_Val _UINT32_(0x0)                                        /* (MPDDRC_MINFO3) Background transfers  */
#define   MPDDRC_MINFO3_MAX_WAIT_LQOS_BANDWIDTH_Val _UINT32_(0x1)                                        /* (MPDDRC_MINFO3) Bandwidth sensitive  */
#define   MPDDRC_MINFO3_MAX_WAIT_LQOS_SENSITIVE_LAT_Val _UINT32_(0x2)                                        /* (MPDDRC_MINFO3) Latency sensitive  */
#define   MPDDRC_MINFO3_MAX_WAIT_LQOS_CRITICAL_LAT_Val _UINT32_(0x3)                                        /* (MPDDRC_MINFO3) Latency critical  */
#define MPDDRC_MINFO3_MAX_WAIT_LQOS_BACKGROUND (MPDDRC_MINFO3_MAX_WAIT_LQOS_BACKGROUND_Val << MPDDRC_MINFO3_MAX_WAIT_LQOS_Pos) /* (MPDDRC_MINFO3) Background transfers Position */
#define MPDDRC_MINFO3_MAX_WAIT_LQOS_BANDWIDTH (MPDDRC_MINFO3_MAX_WAIT_LQOS_BANDWIDTH_Val << MPDDRC_MINFO3_MAX_WAIT_LQOS_Pos) /* (MPDDRC_MINFO3) Bandwidth sensitive Position */
#define MPDDRC_MINFO3_MAX_WAIT_LQOS_SENSITIVE_LAT (MPDDRC_MINFO3_MAX_WAIT_LQOS_SENSITIVE_LAT_Val << MPDDRC_MINFO3_MAX_WAIT_LQOS_Pos) /* (MPDDRC_MINFO3) Latency sensitive Position */
#define MPDDRC_MINFO3_MAX_WAIT_LQOS_CRITICAL_LAT (MPDDRC_MINFO3_MAX_WAIT_LQOS_CRITICAL_LAT_Val << MPDDRC_MINFO3_MAX_WAIT_LQOS_Pos) /* (MPDDRC_MINFO3) Latency critical Position */
#define MPDDRC_MINFO3_MAX_WAIT_Msk            _UINT32_(0x0777FFFF)                                 /* (MPDDRC_MINFO3_MAX_WAIT) Register Mask  */

/* NB_TRANSFERS mode */
#define MPDDRC_MINFO3_NB_TRANSFERS_P3_NB_TRANSFERS_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO3) Number of Transfers on Port [x = 0..6] Position */
#define MPDDRC_MINFO3_NB_TRANSFERS_P3_NB_TRANSFERS_Msk (_UINT32_(0xFFFFFFFF) << MPDDRC_MINFO3_NB_TRANSFERS_P3_NB_TRANSFERS_Pos) /* (MPDDRC_MINFO3) Number of Transfers on Port [x = 0..6] Mask */
#define MPDDRC_MINFO3_NB_TRANSFERS_P3_NB_TRANSFERS(value) (MPDDRC_MINFO3_NB_TRANSFERS_P3_NB_TRANSFERS_Msk & (_UINT32_(value) << MPDDRC_MINFO3_NB_TRANSFERS_P3_NB_TRANSFERS_Pos))
#define MPDDRC_MINFO3_NB_TRANSFERS_Msk        _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO3_NB_TRANSFERS) Register Mask  */

/* TOTAL_CYCLE_COUNT mode */
#define MPDDRC_MINFO3_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO3) Total Cycle Count Position */
#define MPDDRC_MINFO3_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Msk (_UINT32_(0xFFFFFFFF) << MPDDRC_MINFO3_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Pos) /* (MPDDRC_MINFO3) Total Cycle Count Mask */
#define MPDDRC_MINFO3_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT(value) (MPDDRC_MINFO3_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Msk & (_UINT32_(value) << MPDDRC_MINFO3_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Pos))
#define MPDDRC_MINFO3_TOTAL_CYCLE_COUNT_Msk   _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO3_TOTAL_CYCLE_COUNT) Register Mask  */

/* TOTAL_LATENCY mode */
#define MPDDRC_MINFO3_TOTAL_LATENCY_P3_TOTAL_LATENCY_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO3) Total Latency on Port [x = 0..6] Position */
#define MPDDRC_MINFO3_TOTAL_LATENCY_P3_TOTAL_LATENCY_Msk (_UINT32_(0xFFFFFFFF) << MPDDRC_MINFO3_TOTAL_LATENCY_P3_TOTAL_LATENCY_Pos) /* (MPDDRC_MINFO3) Total Latency on Port [x = 0..6] Mask */
#define MPDDRC_MINFO3_TOTAL_LATENCY_P3_TOTAL_LATENCY(value) (MPDDRC_MINFO3_TOTAL_LATENCY_P3_TOTAL_LATENCY_Msk & (_UINT32_(value) << MPDDRC_MINFO3_TOTAL_LATENCY_P3_TOTAL_LATENCY_Pos))
#define MPDDRC_MINFO3_TOTAL_LATENCY_Msk       _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO3_TOTAL_LATENCY) Register Mask  */

/* TOTAL_LATENCY_QOS01 mode */
#define MPDDRC_MINFO3_TOTAL_LATENCY_QOS01_P3_TOTAL_LATENCY_QOS0_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO3) Total Latency on Port [x = 0..6] when value of qos is 0 Position */
#define MPDDRC_MINFO3_TOTAL_LATENCY_QOS01_P3_TOTAL_LATENCY_QOS0_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO3_TOTAL_LATENCY_QOS01_P3_TOTAL_LATENCY_QOS0_Pos) /* (MPDDRC_MINFO3) Total Latency on Port [x = 0..6] when value of qos is 0 Mask */
#define MPDDRC_MINFO3_TOTAL_LATENCY_QOS01_P3_TOTAL_LATENCY_QOS0(value) (MPDDRC_MINFO3_TOTAL_LATENCY_QOS01_P3_TOTAL_LATENCY_QOS0_Msk & (_UINT32_(value) << MPDDRC_MINFO3_TOTAL_LATENCY_QOS01_P3_TOTAL_LATENCY_QOS0_Pos))
#define MPDDRC_MINFO3_TOTAL_LATENCY_QOS01_P3_TOTAL_LATENCY_QOS1_Pos _UINT32_(16)                                         /* (MPDDRC_MINFO3) Total Latency on Port [x = 0..6] when value of qos is 1 Position */
#define MPDDRC_MINFO3_TOTAL_LATENCY_QOS01_P3_TOTAL_LATENCY_QOS1_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO3_TOTAL_LATENCY_QOS01_P3_TOTAL_LATENCY_QOS1_Pos) /* (MPDDRC_MINFO3) Total Latency on Port [x = 0..6] when value of qos is 1 Mask */
#define MPDDRC_MINFO3_TOTAL_LATENCY_QOS01_P3_TOTAL_LATENCY_QOS1(value) (MPDDRC_MINFO3_TOTAL_LATENCY_QOS01_P3_TOTAL_LATENCY_QOS1_Msk & (_UINT32_(value) << MPDDRC_MINFO3_TOTAL_LATENCY_QOS01_P3_TOTAL_LATENCY_QOS1_Pos))
#define MPDDRC_MINFO3_TOTAL_LATENCY_QOS01_Msk _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO3_TOTAL_LATENCY_QOS01) Register Mask  */

/* TOTAL_LATENCY_QOS23 mode */
#define MPDDRC_MINFO3_TOTAL_LATENCY_QOS23_P3_TOTAL_LATENCY_QOS2_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO3) Total Latency on Port [x = 0..6] when value of qos is 2 Position */
#define MPDDRC_MINFO3_TOTAL_LATENCY_QOS23_P3_TOTAL_LATENCY_QOS2_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO3_TOTAL_LATENCY_QOS23_P3_TOTAL_LATENCY_QOS2_Pos) /* (MPDDRC_MINFO3) Total Latency on Port [x = 0..6] when value of qos is 2 Mask */
#define MPDDRC_MINFO3_TOTAL_LATENCY_QOS23_P3_TOTAL_LATENCY_QOS2(value) (MPDDRC_MINFO3_TOTAL_LATENCY_QOS23_P3_TOTAL_LATENCY_QOS2_Msk & (_UINT32_(value) << MPDDRC_MINFO3_TOTAL_LATENCY_QOS23_P3_TOTAL_LATENCY_QOS2_Pos))
#define MPDDRC_MINFO3_TOTAL_LATENCY_QOS23_P3_TOTAL_LATENCY_QOS3_Pos _UINT32_(16)                                         /* (MPDDRC_MINFO3) Total Latency on Port [x = 0..6] when value of qos is 3 Position */
#define MPDDRC_MINFO3_TOTAL_LATENCY_QOS23_P3_TOTAL_LATENCY_QOS3_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO3_TOTAL_LATENCY_QOS23_P3_TOTAL_LATENCY_QOS3_Pos) /* (MPDDRC_MINFO3) Total Latency on Port [x = 0..6] when value of qos is 3 Mask */
#define MPDDRC_MINFO3_TOTAL_LATENCY_QOS23_P3_TOTAL_LATENCY_QOS3(value) (MPDDRC_MINFO3_TOTAL_LATENCY_QOS23_P3_TOTAL_LATENCY_QOS3_Msk & (_UINT32_(value) << MPDDRC_MINFO3_TOTAL_LATENCY_QOS23_P3_TOTAL_LATENCY_QOS3_Pos))
#define MPDDRC_MINFO3_TOTAL_LATENCY_QOS23_Msk _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO3_TOTAL_LATENCY_QOS23) Register Mask  */


/* -------- MPDDRC_MINFO4 : (MPDDRC Offset: 0x94) ( R/ 32) Monitor Information Port 4 Register -------- */
#define MPDDRC_MINFO4_RESETVALUE              _UINT32_(0x00)                                       /*  (MPDDRC_MINFO4) Monitor Information Port 4 Register  Reset Value */

#define MPDDRC_MINFO4_Msk                     _UINT32_(0x00000000)                                 /* (MPDDRC_MINFO4) Register Mask  */

/* MAX_WAIT mode */
#define MPDDRC_MINFO4_MAX_WAIT_MAX_PORT4_WAITING_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO4) Address High on Port [x = 0..6] Position */
#define MPDDRC_MINFO4_MAX_WAIT_MAX_PORT4_WAITING_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO4_MAX_WAIT_MAX_PORT4_WAITING_Pos) /* (MPDDRC_MINFO4) Address High on Port [x = 0..6] Mask */
#define MPDDRC_MINFO4_MAX_WAIT_MAX_PORT4_WAITING(value) (MPDDRC_MINFO4_MAX_WAIT_MAX_PORT4_WAITING_Msk & (_UINT32_(value) << MPDDRC_MINFO4_MAX_WAIT_MAX_PORT4_WAITING_Pos))
#define MPDDRC_MINFO4_MAX_WAIT_BURST_Pos      _UINT32_(16)                                         /* (MPDDRC_MINFO4) Type of Burst on Port [x = 0..6] Position */
#define MPDDRC_MINFO4_MAX_WAIT_BURST_Msk      (_UINT32_(0x7) << MPDDRC_MINFO4_MAX_WAIT_BURST_Pos)  /* (MPDDRC_MINFO4) Type of Burst on Port [x = 0..6] Mask */
#define MPDDRC_MINFO4_MAX_WAIT_BURST(value)   (MPDDRC_MINFO4_MAX_WAIT_BURST_Msk & (_UINT32_(value) << MPDDRC_MINFO4_MAX_WAIT_BURST_Pos))
#define   MPDDRC_MINFO4_MAX_WAIT_BURST_SINGLE_Val _UINT32_(0x0)                                        /* (MPDDRC_MINFO4) Single transfer  */
#define   MPDDRC_MINFO4_MAX_WAIT_BURST_INCR_Val _UINT32_(0x1)                                        /* (MPDDRC_MINFO4) Incrementing burst of unspecified length  */
#define   MPDDRC_MINFO4_MAX_WAIT_BURST_WRAP4_Val _UINT32_(0x2)                                        /* (MPDDRC_MINFO4) 4-beat wrapping burst  */
#define   MPDDRC_MINFO4_MAX_WAIT_BURST_INCR4_Val _UINT32_(0x3)                                        /* (MPDDRC_MINFO4) 4-beat incrementing burst  */
#define   MPDDRC_MINFO4_MAX_WAIT_BURST_WRAP8_Val _UINT32_(0x4)                                        /* (MPDDRC_MINFO4) 8-beat wrapping burst  */
#define   MPDDRC_MINFO4_MAX_WAIT_BURST_INCR8_Val _UINT32_(0x5)                                        /* (MPDDRC_MINFO4) 8-beat incrementing burst  */
#define   MPDDRC_MINFO4_MAX_WAIT_BURST_WRAP16_Val _UINT32_(0x6)                                        /* (MPDDRC_MINFO4) 16-beat wrapping burst  */
#define   MPDDRC_MINFO4_MAX_WAIT_BURST_INCR16_Val _UINT32_(0x7)                                        /* (MPDDRC_MINFO4) 16-beat incrementing burst  */
#define MPDDRC_MINFO4_MAX_WAIT_BURST_SINGLE   (MPDDRC_MINFO4_MAX_WAIT_BURST_SINGLE_Val << MPDDRC_MINFO4_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO4) Single transfer Position */
#define MPDDRC_MINFO4_MAX_WAIT_BURST_INCR     (MPDDRC_MINFO4_MAX_WAIT_BURST_INCR_Val << MPDDRC_MINFO4_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO4) Incrementing burst of unspecified length Position */
#define MPDDRC_MINFO4_MAX_WAIT_BURST_WRAP4    (MPDDRC_MINFO4_MAX_WAIT_BURST_WRAP4_Val << MPDDRC_MINFO4_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO4) 4-beat wrapping burst Position */
#define MPDDRC_MINFO4_MAX_WAIT_BURST_INCR4    (MPDDRC_MINFO4_MAX_WAIT_BURST_INCR4_Val << MPDDRC_MINFO4_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO4) 4-beat incrementing burst Position */
#define MPDDRC_MINFO4_MAX_WAIT_BURST_WRAP8    (MPDDRC_MINFO4_MAX_WAIT_BURST_WRAP8_Val << MPDDRC_MINFO4_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO4) 8-beat wrapping burst Position */
#define MPDDRC_MINFO4_MAX_WAIT_BURST_INCR8    (MPDDRC_MINFO4_MAX_WAIT_BURST_INCR8_Val << MPDDRC_MINFO4_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO4) 8-beat incrementing burst Position */
#define MPDDRC_MINFO4_MAX_WAIT_BURST_WRAP16   (MPDDRC_MINFO4_MAX_WAIT_BURST_WRAP16_Val << MPDDRC_MINFO4_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO4) 16-beat wrapping burst Position */
#define MPDDRC_MINFO4_MAX_WAIT_BURST_INCR16   (MPDDRC_MINFO4_MAX_WAIT_BURST_INCR16_Val << MPDDRC_MINFO4_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO4) 16-beat incrementing burst Position */
#define MPDDRC_MINFO4_MAX_WAIT_SIZE_Pos       _UINT32_(20)                                         /* (MPDDRC_MINFO4) Transfer Size on Port [x = 0..6] Position */
#define MPDDRC_MINFO4_MAX_WAIT_SIZE_Msk       (_UINT32_(0x7) << MPDDRC_MINFO4_MAX_WAIT_SIZE_Pos)   /* (MPDDRC_MINFO4) Transfer Size on Port [x = 0..6] Mask */
#define MPDDRC_MINFO4_MAX_WAIT_SIZE(value)    (MPDDRC_MINFO4_MAX_WAIT_SIZE_Msk & (_UINT32_(value) << MPDDRC_MINFO4_MAX_WAIT_SIZE_Pos))
#define   MPDDRC_MINFO4_MAX_WAIT_SIZE_8BITS_Val _UINT32_(0x0)                                        /* (MPDDRC_MINFO4) Byte transfer  */
#define   MPDDRC_MINFO4_MAX_WAIT_SIZE_16BITS_Val _UINT32_(0x1)                                        /* (MPDDRC_MINFO4) Halfword transfer  */
#define   MPDDRC_MINFO4_MAX_WAIT_SIZE_32BITS_Val _UINT32_(0x2)                                        /* (MPDDRC_MINFO4) Word transfer  */
#define   MPDDRC_MINFO4_MAX_WAIT_SIZE_64BITS_Val _UINT32_(0x3)                                        /* (MPDDRC_MINFO4) Dword transfer  */
#define MPDDRC_MINFO4_MAX_WAIT_SIZE_8BITS     (MPDDRC_MINFO4_MAX_WAIT_SIZE_8BITS_Val << MPDDRC_MINFO4_MAX_WAIT_SIZE_Pos) /* (MPDDRC_MINFO4) Byte transfer Position */
#define MPDDRC_MINFO4_MAX_WAIT_SIZE_16BITS    (MPDDRC_MINFO4_MAX_WAIT_SIZE_16BITS_Val << MPDDRC_MINFO4_MAX_WAIT_SIZE_Pos) /* (MPDDRC_MINFO4) Halfword transfer Position */
#define MPDDRC_MINFO4_MAX_WAIT_SIZE_32BITS    (MPDDRC_MINFO4_MAX_WAIT_SIZE_32BITS_Val << MPDDRC_MINFO4_MAX_WAIT_SIZE_Pos) /* (MPDDRC_MINFO4) Word transfer Position */
#define MPDDRC_MINFO4_MAX_WAIT_SIZE_64BITS    (MPDDRC_MINFO4_MAX_WAIT_SIZE_64BITS_Val << MPDDRC_MINFO4_MAX_WAIT_SIZE_Pos) /* (MPDDRC_MINFO4) Dword transfer Position */
#define MPDDRC_MINFO4_MAX_WAIT_READ_WRITE_Pos _UINT32_(24)                                         /* (MPDDRC_MINFO4) Read or Write Access on Port [x = 0..6] Position */
#define MPDDRC_MINFO4_MAX_WAIT_READ_WRITE_Msk (_UINT32_(0x1) << MPDDRC_MINFO4_MAX_WAIT_READ_WRITE_Pos) /* (MPDDRC_MINFO4) Read or Write Access on Port [x = 0..6] Mask */
#define MPDDRC_MINFO4_MAX_WAIT_READ_WRITE(value) (MPDDRC_MINFO4_MAX_WAIT_READ_WRITE_Msk & (_UINT32_(value) << MPDDRC_MINFO4_MAX_WAIT_READ_WRITE_Pos))
#define   MPDDRC_MINFO4_MAX_WAIT_READ_WRITE_0_Val _UINT32_(0x0)                                        /* (MPDDRC_MINFO4) Read transfer.  */
#define   MPDDRC_MINFO4_MAX_WAIT_READ_WRITE_1_Val _UINT32_(0x1)                                        /* (MPDDRC_MINFO4) Write transfer.  */
#define MPDDRC_MINFO4_MAX_WAIT_READ_WRITE_0   (MPDDRC_MINFO4_MAX_WAIT_READ_WRITE_0_Val << MPDDRC_MINFO4_MAX_WAIT_READ_WRITE_Pos) /* (MPDDRC_MINFO4) Read transfer. Position */
#define MPDDRC_MINFO4_MAX_WAIT_READ_WRITE_1   (MPDDRC_MINFO4_MAX_WAIT_READ_WRITE_1_Val << MPDDRC_MINFO4_MAX_WAIT_READ_WRITE_Pos) /* (MPDDRC_MINFO4) Write transfer. Position */
#define MPDDRC_MINFO4_MAX_WAIT_LQOS_Pos       _UINT32_(25)                                         /* (MPDDRC_MINFO4) Value of Quality Of Service on Port [x = 0..6] Position */
#define MPDDRC_MINFO4_MAX_WAIT_LQOS_Msk       (_UINT32_(0x3) << MPDDRC_MINFO4_MAX_WAIT_LQOS_Pos)   /* (MPDDRC_MINFO4) Value of Quality Of Service on Port [x = 0..6] Mask */
#define MPDDRC_MINFO4_MAX_WAIT_LQOS(value)    (MPDDRC_MINFO4_MAX_WAIT_LQOS_Msk & (_UINT32_(value) << MPDDRC_MINFO4_MAX_WAIT_LQOS_Pos))
#define   MPDDRC_MINFO4_MAX_WAIT_LQOS_BACKGROUND_Val _UINT32_(0x0)                                        /* (MPDDRC_MINFO4) Background transfers  */
#define   MPDDRC_MINFO4_MAX_WAIT_LQOS_BANDWIDTH_Val _UINT32_(0x1)                                        /* (MPDDRC_MINFO4) Bandwidth sensitive  */
#define   MPDDRC_MINFO4_MAX_WAIT_LQOS_SENSITIVE_LAT_Val _UINT32_(0x2)                                        /* (MPDDRC_MINFO4) Latency sensitive  */
#define   MPDDRC_MINFO4_MAX_WAIT_LQOS_CRITICAL_LAT_Val _UINT32_(0x3)                                        /* (MPDDRC_MINFO4) Latency critical  */
#define MPDDRC_MINFO4_MAX_WAIT_LQOS_BACKGROUND (MPDDRC_MINFO4_MAX_WAIT_LQOS_BACKGROUND_Val << MPDDRC_MINFO4_MAX_WAIT_LQOS_Pos) /* (MPDDRC_MINFO4) Background transfers Position */
#define MPDDRC_MINFO4_MAX_WAIT_LQOS_BANDWIDTH (MPDDRC_MINFO4_MAX_WAIT_LQOS_BANDWIDTH_Val << MPDDRC_MINFO4_MAX_WAIT_LQOS_Pos) /* (MPDDRC_MINFO4) Bandwidth sensitive Position */
#define MPDDRC_MINFO4_MAX_WAIT_LQOS_SENSITIVE_LAT (MPDDRC_MINFO4_MAX_WAIT_LQOS_SENSITIVE_LAT_Val << MPDDRC_MINFO4_MAX_WAIT_LQOS_Pos) /* (MPDDRC_MINFO4) Latency sensitive Position */
#define MPDDRC_MINFO4_MAX_WAIT_LQOS_CRITICAL_LAT (MPDDRC_MINFO4_MAX_WAIT_LQOS_CRITICAL_LAT_Val << MPDDRC_MINFO4_MAX_WAIT_LQOS_Pos) /* (MPDDRC_MINFO4) Latency critical Position */
#define MPDDRC_MINFO4_MAX_WAIT_Msk            _UINT32_(0x0777FFFF)                                 /* (MPDDRC_MINFO4_MAX_WAIT) Register Mask  */

/* NB_TRANSFERS mode */
#define MPDDRC_MINFO4_NB_TRANSFERS_P4_NB_TRANSFERS_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO4) Number of Transfers on Port [x = 0..6] Position */
#define MPDDRC_MINFO4_NB_TRANSFERS_P4_NB_TRANSFERS_Msk (_UINT32_(0xFFFFFFFF) << MPDDRC_MINFO4_NB_TRANSFERS_P4_NB_TRANSFERS_Pos) /* (MPDDRC_MINFO4) Number of Transfers on Port [x = 0..6] Mask */
#define MPDDRC_MINFO4_NB_TRANSFERS_P4_NB_TRANSFERS(value) (MPDDRC_MINFO4_NB_TRANSFERS_P4_NB_TRANSFERS_Msk & (_UINT32_(value) << MPDDRC_MINFO4_NB_TRANSFERS_P4_NB_TRANSFERS_Pos))
#define MPDDRC_MINFO4_NB_TRANSFERS_Msk        _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO4_NB_TRANSFERS) Register Mask  */

/* TOTAL_CYCLE_COUNT mode */
#define MPDDRC_MINFO4_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO4) Total Cycle Count Position */
#define MPDDRC_MINFO4_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Msk (_UINT32_(0xFFFFFFFF) << MPDDRC_MINFO4_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Pos) /* (MPDDRC_MINFO4) Total Cycle Count Mask */
#define MPDDRC_MINFO4_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT(value) (MPDDRC_MINFO4_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Msk & (_UINT32_(value) << MPDDRC_MINFO4_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Pos))
#define MPDDRC_MINFO4_TOTAL_CYCLE_COUNT_Msk   _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO4_TOTAL_CYCLE_COUNT) Register Mask  */

/* TOTAL_LATENCY mode */
#define MPDDRC_MINFO4_TOTAL_LATENCY_P4_TOTAL_LATENCY_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO4) Total Latency on Port [x = 0..6] Position */
#define MPDDRC_MINFO4_TOTAL_LATENCY_P4_TOTAL_LATENCY_Msk (_UINT32_(0xFFFFFFFF) << MPDDRC_MINFO4_TOTAL_LATENCY_P4_TOTAL_LATENCY_Pos) /* (MPDDRC_MINFO4) Total Latency on Port [x = 0..6] Mask */
#define MPDDRC_MINFO4_TOTAL_LATENCY_P4_TOTAL_LATENCY(value) (MPDDRC_MINFO4_TOTAL_LATENCY_P4_TOTAL_LATENCY_Msk & (_UINT32_(value) << MPDDRC_MINFO4_TOTAL_LATENCY_P4_TOTAL_LATENCY_Pos))
#define MPDDRC_MINFO4_TOTAL_LATENCY_Msk       _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO4_TOTAL_LATENCY) Register Mask  */

/* TOTAL_LATENCY_QOS01 mode */
#define MPDDRC_MINFO4_TOTAL_LATENCY_QOS01_P4_TOTAL_LATENCY_QOS0_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO4) Total Latency on Port [x = 0..6] when value of qos is 0 Position */
#define MPDDRC_MINFO4_TOTAL_LATENCY_QOS01_P4_TOTAL_LATENCY_QOS0_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO4_TOTAL_LATENCY_QOS01_P4_TOTAL_LATENCY_QOS0_Pos) /* (MPDDRC_MINFO4) Total Latency on Port [x = 0..6] when value of qos is 0 Mask */
#define MPDDRC_MINFO4_TOTAL_LATENCY_QOS01_P4_TOTAL_LATENCY_QOS0(value) (MPDDRC_MINFO4_TOTAL_LATENCY_QOS01_P4_TOTAL_LATENCY_QOS0_Msk & (_UINT32_(value) << MPDDRC_MINFO4_TOTAL_LATENCY_QOS01_P4_TOTAL_LATENCY_QOS0_Pos))
#define MPDDRC_MINFO4_TOTAL_LATENCY_QOS01_P4_TOTAL_LATENCY_QOS1_Pos _UINT32_(16)                                         /* (MPDDRC_MINFO4) Total Latency on Port [x = 0..6] when value of qos is 1 Position */
#define MPDDRC_MINFO4_TOTAL_LATENCY_QOS01_P4_TOTAL_LATENCY_QOS1_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO4_TOTAL_LATENCY_QOS01_P4_TOTAL_LATENCY_QOS1_Pos) /* (MPDDRC_MINFO4) Total Latency on Port [x = 0..6] when value of qos is 1 Mask */
#define MPDDRC_MINFO4_TOTAL_LATENCY_QOS01_P4_TOTAL_LATENCY_QOS1(value) (MPDDRC_MINFO4_TOTAL_LATENCY_QOS01_P4_TOTAL_LATENCY_QOS1_Msk & (_UINT32_(value) << MPDDRC_MINFO4_TOTAL_LATENCY_QOS01_P4_TOTAL_LATENCY_QOS1_Pos))
#define MPDDRC_MINFO4_TOTAL_LATENCY_QOS01_Msk _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO4_TOTAL_LATENCY_QOS01) Register Mask  */

/* TOTAL_LATENCY_QOS23 mode */
#define MPDDRC_MINFO4_TOTAL_LATENCY_QOS23_P4_TOTAL_LATENCY_QOS2_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO4) Total Latency on Port [x = 0..6] when value of qos is 2 Position */
#define MPDDRC_MINFO4_TOTAL_LATENCY_QOS23_P4_TOTAL_LATENCY_QOS2_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO4_TOTAL_LATENCY_QOS23_P4_TOTAL_LATENCY_QOS2_Pos) /* (MPDDRC_MINFO4) Total Latency on Port [x = 0..6] when value of qos is 2 Mask */
#define MPDDRC_MINFO4_TOTAL_LATENCY_QOS23_P4_TOTAL_LATENCY_QOS2(value) (MPDDRC_MINFO4_TOTAL_LATENCY_QOS23_P4_TOTAL_LATENCY_QOS2_Msk & (_UINT32_(value) << MPDDRC_MINFO4_TOTAL_LATENCY_QOS23_P4_TOTAL_LATENCY_QOS2_Pos))
#define MPDDRC_MINFO4_TOTAL_LATENCY_QOS23_P4_TOTAL_LATENCY_QOS3_Pos _UINT32_(16)                                         /* (MPDDRC_MINFO4) Total Latency on Port [x = 0..6] when value of qos is 3 Position */
#define MPDDRC_MINFO4_TOTAL_LATENCY_QOS23_P4_TOTAL_LATENCY_QOS3_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO4_TOTAL_LATENCY_QOS23_P4_TOTAL_LATENCY_QOS3_Pos) /* (MPDDRC_MINFO4) Total Latency on Port [x = 0..6] when value of qos is 3 Mask */
#define MPDDRC_MINFO4_TOTAL_LATENCY_QOS23_P4_TOTAL_LATENCY_QOS3(value) (MPDDRC_MINFO4_TOTAL_LATENCY_QOS23_P4_TOTAL_LATENCY_QOS3_Msk & (_UINT32_(value) << MPDDRC_MINFO4_TOTAL_LATENCY_QOS23_P4_TOTAL_LATENCY_QOS3_Pos))
#define MPDDRC_MINFO4_TOTAL_LATENCY_QOS23_Msk _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO4_TOTAL_LATENCY_QOS23) Register Mask  */


/* -------- MPDDRC_MINFO5 : (MPDDRC Offset: 0x98) ( R/ 32) Monitor Information Port 5 Register -------- */
#define MPDDRC_MINFO5_RESETVALUE              _UINT32_(0x00)                                       /*  (MPDDRC_MINFO5) Monitor Information Port 5 Register  Reset Value */

#define MPDDRC_MINFO5_Msk                     _UINT32_(0x00000000)                                 /* (MPDDRC_MINFO5) Register Mask  */

/* MAX_WAIT mode */
#define MPDDRC_MINFO5_MAX_WAIT_MAX_PORT5_WAITING_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO5) Address High on Port [x = 0..6] Position */
#define MPDDRC_MINFO5_MAX_WAIT_MAX_PORT5_WAITING_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO5_MAX_WAIT_MAX_PORT5_WAITING_Pos) /* (MPDDRC_MINFO5) Address High on Port [x = 0..6] Mask */
#define MPDDRC_MINFO5_MAX_WAIT_MAX_PORT5_WAITING(value) (MPDDRC_MINFO5_MAX_WAIT_MAX_PORT5_WAITING_Msk & (_UINT32_(value) << MPDDRC_MINFO5_MAX_WAIT_MAX_PORT5_WAITING_Pos))
#define MPDDRC_MINFO5_MAX_WAIT_BURST_Pos      _UINT32_(16)                                         /* (MPDDRC_MINFO5) Type of Burst on Port [x = 0..6] Position */
#define MPDDRC_MINFO5_MAX_WAIT_BURST_Msk      (_UINT32_(0x7) << MPDDRC_MINFO5_MAX_WAIT_BURST_Pos)  /* (MPDDRC_MINFO5) Type of Burst on Port [x = 0..6] Mask */
#define MPDDRC_MINFO5_MAX_WAIT_BURST(value)   (MPDDRC_MINFO5_MAX_WAIT_BURST_Msk & (_UINT32_(value) << MPDDRC_MINFO5_MAX_WAIT_BURST_Pos))
#define   MPDDRC_MINFO5_MAX_WAIT_BURST_SINGLE_Val _UINT32_(0x0)                                        /* (MPDDRC_MINFO5) Single transfer  */
#define   MPDDRC_MINFO5_MAX_WAIT_BURST_INCR_Val _UINT32_(0x1)                                        /* (MPDDRC_MINFO5) Incrementing burst of unspecified length  */
#define   MPDDRC_MINFO5_MAX_WAIT_BURST_WRAP4_Val _UINT32_(0x2)                                        /* (MPDDRC_MINFO5) 4-beat wrapping burst  */
#define   MPDDRC_MINFO5_MAX_WAIT_BURST_INCR4_Val _UINT32_(0x3)                                        /* (MPDDRC_MINFO5) 4-beat incrementing burst  */
#define   MPDDRC_MINFO5_MAX_WAIT_BURST_WRAP8_Val _UINT32_(0x4)                                        /* (MPDDRC_MINFO5) 8-beat wrapping burst  */
#define   MPDDRC_MINFO5_MAX_WAIT_BURST_INCR8_Val _UINT32_(0x5)                                        /* (MPDDRC_MINFO5) 8-beat incrementing burst  */
#define   MPDDRC_MINFO5_MAX_WAIT_BURST_WRAP16_Val _UINT32_(0x6)                                        /* (MPDDRC_MINFO5) 16-beat wrapping burst  */
#define   MPDDRC_MINFO5_MAX_WAIT_BURST_INCR16_Val _UINT32_(0x7)                                        /* (MPDDRC_MINFO5) 16-beat incrementing burst  */
#define MPDDRC_MINFO5_MAX_WAIT_BURST_SINGLE   (MPDDRC_MINFO5_MAX_WAIT_BURST_SINGLE_Val << MPDDRC_MINFO5_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO5) Single transfer Position */
#define MPDDRC_MINFO5_MAX_WAIT_BURST_INCR     (MPDDRC_MINFO5_MAX_WAIT_BURST_INCR_Val << MPDDRC_MINFO5_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO5) Incrementing burst of unspecified length Position */
#define MPDDRC_MINFO5_MAX_WAIT_BURST_WRAP4    (MPDDRC_MINFO5_MAX_WAIT_BURST_WRAP4_Val << MPDDRC_MINFO5_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO5) 4-beat wrapping burst Position */
#define MPDDRC_MINFO5_MAX_WAIT_BURST_INCR4    (MPDDRC_MINFO5_MAX_WAIT_BURST_INCR4_Val << MPDDRC_MINFO5_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO5) 4-beat incrementing burst Position */
#define MPDDRC_MINFO5_MAX_WAIT_BURST_WRAP8    (MPDDRC_MINFO5_MAX_WAIT_BURST_WRAP8_Val << MPDDRC_MINFO5_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO5) 8-beat wrapping burst Position */
#define MPDDRC_MINFO5_MAX_WAIT_BURST_INCR8    (MPDDRC_MINFO5_MAX_WAIT_BURST_INCR8_Val << MPDDRC_MINFO5_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO5) 8-beat incrementing burst Position */
#define MPDDRC_MINFO5_MAX_WAIT_BURST_WRAP16   (MPDDRC_MINFO5_MAX_WAIT_BURST_WRAP16_Val << MPDDRC_MINFO5_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO5) 16-beat wrapping burst Position */
#define MPDDRC_MINFO5_MAX_WAIT_BURST_INCR16   (MPDDRC_MINFO5_MAX_WAIT_BURST_INCR16_Val << MPDDRC_MINFO5_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO5) 16-beat incrementing burst Position */
#define MPDDRC_MINFO5_MAX_WAIT_SIZE_Pos       _UINT32_(20)                                         /* (MPDDRC_MINFO5) Transfer Size on Port [x = 0..6] Position */
#define MPDDRC_MINFO5_MAX_WAIT_SIZE_Msk       (_UINT32_(0x7) << MPDDRC_MINFO5_MAX_WAIT_SIZE_Pos)   /* (MPDDRC_MINFO5) Transfer Size on Port [x = 0..6] Mask */
#define MPDDRC_MINFO5_MAX_WAIT_SIZE(value)    (MPDDRC_MINFO5_MAX_WAIT_SIZE_Msk & (_UINT32_(value) << MPDDRC_MINFO5_MAX_WAIT_SIZE_Pos))
#define   MPDDRC_MINFO5_MAX_WAIT_SIZE_8BITS_Val _UINT32_(0x0)                                        /* (MPDDRC_MINFO5) Byte transfer  */
#define   MPDDRC_MINFO5_MAX_WAIT_SIZE_16BITS_Val _UINT32_(0x1)                                        /* (MPDDRC_MINFO5) Halfword transfer  */
#define   MPDDRC_MINFO5_MAX_WAIT_SIZE_32BITS_Val _UINT32_(0x2)                                        /* (MPDDRC_MINFO5) Word transfer  */
#define   MPDDRC_MINFO5_MAX_WAIT_SIZE_64BITS_Val _UINT32_(0x3)                                        /* (MPDDRC_MINFO5) Dword transfer  */
#define MPDDRC_MINFO5_MAX_WAIT_SIZE_8BITS     (MPDDRC_MINFO5_MAX_WAIT_SIZE_8BITS_Val << MPDDRC_MINFO5_MAX_WAIT_SIZE_Pos) /* (MPDDRC_MINFO5) Byte transfer Position */
#define MPDDRC_MINFO5_MAX_WAIT_SIZE_16BITS    (MPDDRC_MINFO5_MAX_WAIT_SIZE_16BITS_Val << MPDDRC_MINFO5_MAX_WAIT_SIZE_Pos) /* (MPDDRC_MINFO5) Halfword transfer Position */
#define MPDDRC_MINFO5_MAX_WAIT_SIZE_32BITS    (MPDDRC_MINFO5_MAX_WAIT_SIZE_32BITS_Val << MPDDRC_MINFO5_MAX_WAIT_SIZE_Pos) /* (MPDDRC_MINFO5) Word transfer Position */
#define MPDDRC_MINFO5_MAX_WAIT_SIZE_64BITS    (MPDDRC_MINFO5_MAX_WAIT_SIZE_64BITS_Val << MPDDRC_MINFO5_MAX_WAIT_SIZE_Pos) /* (MPDDRC_MINFO5) Dword transfer Position */
#define MPDDRC_MINFO5_MAX_WAIT_READ_WRITE_Pos _UINT32_(24)                                         /* (MPDDRC_MINFO5) Read or Write Access on Port [x = 0..6] Position */
#define MPDDRC_MINFO5_MAX_WAIT_READ_WRITE_Msk (_UINT32_(0x1) << MPDDRC_MINFO5_MAX_WAIT_READ_WRITE_Pos) /* (MPDDRC_MINFO5) Read or Write Access on Port [x = 0..6] Mask */
#define MPDDRC_MINFO5_MAX_WAIT_READ_WRITE(value) (MPDDRC_MINFO5_MAX_WAIT_READ_WRITE_Msk & (_UINT32_(value) << MPDDRC_MINFO5_MAX_WAIT_READ_WRITE_Pos))
#define   MPDDRC_MINFO5_MAX_WAIT_READ_WRITE_0_Val _UINT32_(0x0)                                        /* (MPDDRC_MINFO5) Read transfer.  */
#define   MPDDRC_MINFO5_MAX_WAIT_READ_WRITE_1_Val _UINT32_(0x1)                                        /* (MPDDRC_MINFO5) Write transfer.  */
#define MPDDRC_MINFO5_MAX_WAIT_READ_WRITE_0   (MPDDRC_MINFO5_MAX_WAIT_READ_WRITE_0_Val << MPDDRC_MINFO5_MAX_WAIT_READ_WRITE_Pos) /* (MPDDRC_MINFO5) Read transfer. Position */
#define MPDDRC_MINFO5_MAX_WAIT_READ_WRITE_1   (MPDDRC_MINFO5_MAX_WAIT_READ_WRITE_1_Val << MPDDRC_MINFO5_MAX_WAIT_READ_WRITE_Pos) /* (MPDDRC_MINFO5) Write transfer. Position */
#define MPDDRC_MINFO5_MAX_WAIT_LQOS_Pos       _UINT32_(25)                                         /* (MPDDRC_MINFO5) Value of Quality Of Service on Port [x = 0..6] Position */
#define MPDDRC_MINFO5_MAX_WAIT_LQOS_Msk       (_UINT32_(0x3) << MPDDRC_MINFO5_MAX_WAIT_LQOS_Pos)   /* (MPDDRC_MINFO5) Value of Quality Of Service on Port [x = 0..6] Mask */
#define MPDDRC_MINFO5_MAX_WAIT_LQOS(value)    (MPDDRC_MINFO5_MAX_WAIT_LQOS_Msk & (_UINT32_(value) << MPDDRC_MINFO5_MAX_WAIT_LQOS_Pos))
#define   MPDDRC_MINFO5_MAX_WAIT_LQOS_BACKGROUND_Val _UINT32_(0x0)                                        /* (MPDDRC_MINFO5) Background transfers  */
#define   MPDDRC_MINFO5_MAX_WAIT_LQOS_BANDWIDTH_Val _UINT32_(0x1)                                        /* (MPDDRC_MINFO5) Bandwidth sensitive  */
#define   MPDDRC_MINFO5_MAX_WAIT_LQOS_SENSITIVE_LAT_Val _UINT32_(0x2)                                        /* (MPDDRC_MINFO5) Latency sensitive  */
#define   MPDDRC_MINFO5_MAX_WAIT_LQOS_CRITICAL_LAT_Val _UINT32_(0x3)                                        /* (MPDDRC_MINFO5) Latency critical  */
#define MPDDRC_MINFO5_MAX_WAIT_LQOS_BACKGROUND (MPDDRC_MINFO5_MAX_WAIT_LQOS_BACKGROUND_Val << MPDDRC_MINFO5_MAX_WAIT_LQOS_Pos) /* (MPDDRC_MINFO5) Background transfers Position */
#define MPDDRC_MINFO5_MAX_WAIT_LQOS_BANDWIDTH (MPDDRC_MINFO5_MAX_WAIT_LQOS_BANDWIDTH_Val << MPDDRC_MINFO5_MAX_WAIT_LQOS_Pos) /* (MPDDRC_MINFO5) Bandwidth sensitive Position */
#define MPDDRC_MINFO5_MAX_WAIT_LQOS_SENSITIVE_LAT (MPDDRC_MINFO5_MAX_WAIT_LQOS_SENSITIVE_LAT_Val << MPDDRC_MINFO5_MAX_WAIT_LQOS_Pos) /* (MPDDRC_MINFO5) Latency sensitive Position */
#define MPDDRC_MINFO5_MAX_WAIT_LQOS_CRITICAL_LAT (MPDDRC_MINFO5_MAX_WAIT_LQOS_CRITICAL_LAT_Val << MPDDRC_MINFO5_MAX_WAIT_LQOS_Pos) /* (MPDDRC_MINFO5) Latency critical Position */
#define MPDDRC_MINFO5_MAX_WAIT_Msk            _UINT32_(0x0777FFFF)                                 /* (MPDDRC_MINFO5_MAX_WAIT) Register Mask  */

/* NB_TRANSFERS mode */
#define MPDDRC_MINFO5_NB_TRANSFERS_P5_NB_TRANSFERS_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO5) Number of Transfers on Port [x = 0..6] Position */
#define MPDDRC_MINFO5_NB_TRANSFERS_P5_NB_TRANSFERS_Msk (_UINT32_(0xFFFFFFFF) << MPDDRC_MINFO5_NB_TRANSFERS_P5_NB_TRANSFERS_Pos) /* (MPDDRC_MINFO5) Number of Transfers on Port [x = 0..6] Mask */
#define MPDDRC_MINFO5_NB_TRANSFERS_P5_NB_TRANSFERS(value) (MPDDRC_MINFO5_NB_TRANSFERS_P5_NB_TRANSFERS_Msk & (_UINT32_(value) << MPDDRC_MINFO5_NB_TRANSFERS_P5_NB_TRANSFERS_Pos))
#define MPDDRC_MINFO5_NB_TRANSFERS_Msk        _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO5_NB_TRANSFERS) Register Mask  */

/* TOTAL_CYCLE_COUNT mode */
#define MPDDRC_MINFO5_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO5) Total Cycle Count Position */
#define MPDDRC_MINFO5_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Msk (_UINT32_(0xFFFFFFFF) << MPDDRC_MINFO5_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Pos) /* (MPDDRC_MINFO5) Total Cycle Count Mask */
#define MPDDRC_MINFO5_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT(value) (MPDDRC_MINFO5_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Msk & (_UINT32_(value) << MPDDRC_MINFO5_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Pos))
#define MPDDRC_MINFO5_TOTAL_CYCLE_COUNT_Msk   _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO5_TOTAL_CYCLE_COUNT) Register Mask  */

/* TOTAL_LATENCY mode */
#define MPDDRC_MINFO5_TOTAL_LATENCY_P5_TOTAL_LATENCY_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO5) Total Latency on Port [x = 0..6] Position */
#define MPDDRC_MINFO5_TOTAL_LATENCY_P5_TOTAL_LATENCY_Msk (_UINT32_(0xFFFFFFFF) << MPDDRC_MINFO5_TOTAL_LATENCY_P5_TOTAL_LATENCY_Pos) /* (MPDDRC_MINFO5) Total Latency on Port [x = 0..6] Mask */
#define MPDDRC_MINFO5_TOTAL_LATENCY_P5_TOTAL_LATENCY(value) (MPDDRC_MINFO5_TOTAL_LATENCY_P5_TOTAL_LATENCY_Msk & (_UINT32_(value) << MPDDRC_MINFO5_TOTAL_LATENCY_P5_TOTAL_LATENCY_Pos))
#define MPDDRC_MINFO5_TOTAL_LATENCY_Msk       _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO5_TOTAL_LATENCY) Register Mask  */

/* TOTAL_LATENCY_QOS01 mode */
#define MPDDRC_MINFO5_TOTAL_LATENCY_QOS01_P5_TOTAL_LATENCY_QOS0_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO5) Total Latency on Port [x = 0..6] when value of qos is 0 Position */
#define MPDDRC_MINFO5_TOTAL_LATENCY_QOS01_P5_TOTAL_LATENCY_QOS0_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO5_TOTAL_LATENCY_QOS01_P5_TOTAL_LATENCY_QOS0_Pos) /* (MPDDRC_MINFO5) Total Latency on Port [x = 0..6] when value of qos is 0 Mask */
#define MPDDRC_MINFO5_TOTAL_LATENCY_QOS01_P5_TOTAL_LATENCY_QOS0(value) (MPDDRC_MINFO5_TOTAL_LATENCY_QOS01_P5_TOTAL_LATENCY_QOS0_Msk & (_UINT32_(value) << MPDDRC_MINFO5_TOTAL_LATENCY_QOS01_P5_TOTAL_LATENCY_QOS0_Pos))
#define MPDDRC_MINFO5_TOTAL_LATENCY_QOS01_P5_TOTAL_LATENCY_QOS1_Pos _UINT32_(16)                                         /* (MPDDRC_MINFO5) Total Latency on Port [x = 0..6] when value of qos is 1 Position */
#define MPDDRC_MINFO5_TOTAL_LATENCY_QOS01_P5_TOTAL_LATENCY_QOS1_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO5_TOTAL_LATENCY_QOS01_P5_TOTAL_LATENCY_QOS1_Pos) /* (MPDDRC_MINFO5) Total Latency on Port [x = 0..6] when value of qos is 1 Mask */
#define MPDDRC_MINFO5_TOTAL_LATENCY_QOS01_P5_TOTAL_LATENCY_QOS1(value) (MPDDRC_MINFO5_TOTAL_LATENCY_QOS01_P5_TOTAL_LATENCY_QOS1_Msk & (_UINT32_(value) << MPDDRC_MINFO5_TOTAL_LATENCY_QOS01_P5_TOTAL_LATENCY_QOS1_Pos))
#define MPDDRC_MINFO5_TOTAL_LATENCY_QOS01_Msk _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO5_TOTAL_LATENCY_QOS01) Register Mask  */

/* TOTAL_LATENCY_QOS23 mode */
#define MPDDRC_MINFO5_TOTAL_LATENCY_QOS23_P5_TOTAL_LATENCY_QOS2_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO5) Total Latency on Port [x = 0..6] when value of qos is 2 Position */
#define MPDDRC_MINFO5_TOTAL_LATENCY_QOS23_P5_TOTAL_LATENCY_QOS2_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO5_TOTAL_LATENCY_QOS23_P5_TOTAL_LATENCY_QOS2_Pos) /* (MPDDRC_MINFO5) Total Latency on Port [x = 0..6] when value of qos is 2 Mask */
#define MPDDRC_MINFO5_TOTAL_LATENCY_QOS23_P5_TOTAL_LATENCY_QOS2(value) (MPDDRC_MINFO5_TOTAL_LATENCY_QOS23_P5_TOTAL_LATENCY_QOS2_Msk & (_UINT32_(value) << MPDDRC_MINFO5_TOTAL_LATENCY_QOS23_P5_TOTAL_LATENCY_QOS2_Pos))
#define MPDDRC_MINFO5_TOTAL_LATENCY_QOS23_P5_TOTAL_LATENCY_QOS3_Pos _UINT32_(16)                                         /* (MPDDRC_MINFO5) Total Latency on Port [x = 0..6] when value of qos is 3 Position */
#define MPDDRC_MINFO5_TOTAL_LATENCY_QOS23_P5_TOTAL_LATENCY_QOS3_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO5_TOTAL_LATENCY_QOS23_P5_TOTAL_LATENCY_QOS3_Pos) /* (MPDDRC_MINFO5) Total Latency on Port [x = 0..6] when value of qos is 3 Mask */
#define MPDDRC_MINFO5_TOTAL_LATENCY_QOS23_P5_TOTAL_LATENCY_QOS3(value) (MPDDRC_MINFO5_TOTAL_LATENCY_QOS23_P5_TOTAL_LATENCY_QOS3_Msk & (_UINT32_(value) << MPDDRC_MINFO5_TOTAL_LATENCY_QOS23_P5_TOTAL_LATENCY_QOS3_Pos))
#define MPDDRC_MINFO5_TOTAL_LATENCY_QOS23_Msk _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO5_TOTAL_LATENCY_QOS23) Register Mask  */


/* -------- MPDDRC_MINFO6 : (MPDDRC Offset: 0x9C) ( R/ 32) Monitor Information Port 6 Register -------- */
#define MPDDRC_MINFO6_RESETVALUE              _UINT32_(0x00)                                       /*  (MPDDRC_MINFO6) Monitor Information Port 6 Register  Reset Value */

#define MPDDRC_MINFO6_Msk                     _UINT32_(0x00000000)                                 /* (MPDDRC_MINFO6) Register Mask  */

/* MAX_WAIT mode */
#define MPDDRC_MINFO6_MAX_WAIT_MAX_PORT6_WAITING_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO6) Address High on Port [x = 0..6] Position */
#define MPDDRC_MINFO6_MAX_WAIT_MAX_PORT6_WAITING_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO6_MAX_WAIT_MAX_PORT6_WAITING_Pos) /* (MPDDRC_MINFO6) Address High on Port [x = 0..6] Mask */
#define MPDDRC_MINFO6_MAX_WAIT_MAX_PORT6_WAITING(value) (MPDDRC_MINFO6_MAX_WAIT_MAX_PORT6_WAITING_Msk & (_UINT32_(value) << MPDDRC_MINFO6_MAX_WAIT_MAX_PORT6_WAITING_Pos))
#define MPDDRC_MINFO6_MAX_WAIT_BURST_Pos      _UINT32_(16)                                         /* (MPDDRC_MINFO6) Type of Burst on Port [x = 0..6] Position */
#define MPDDRC_MINFO6_MAX_WAIT_BURST_Msk      (_UINT32_(0x7) << MPDDRC_MINFO6_MAX_WAIT_BURST_Pos)  /* (MPDDRC_MINFO6) Type of Burst on Port [x = 0..6] Mask */
#define MPDDRC_MINFO6_MAX_WAIT_BURST(value)   (MPDDRC_MINFO6_MAX_WAIT_BURST_Msk & (_UINT32_(value) << MPDDRC_MINFO6_MAX_WAIT_BURST_Pos))
#define   MPDDRC_MINFO6_MAX_WAIT_BURST_SINGLE_Val _UINT32_(0x0)                                        /* (MPDDRC_MINFO6) Single transfer  */
#define   MPDDRC_MINFO6_MAX_WAIT_BURST_INCR_Val _UINT32_(0x1)                                        /* (MPDDRC_MINFO6) Incrementing burst of unspecified length  */
#define   MPDDRC_MINFO6_MAX_WAIT_BURST_WRAP4_Val _UINT32_(0x2)                                        /* (MPDDRC_MINFO6) 4-beat wrapping burst  */
#define   MPDDRC_MINFO6_MAX_WAIT_BURST_INCR4_Val _UINT32_(0x3)                                        /* (MPDDRC_MINFO6) 4-beat incrementing burst  */
#define   MPDDRC_MINFO6_MAX_WAIT_BURST_WRAP8_Val _UINT32_(0x4)                                        /* (MPDDRC_MINFO6) 8-beat wrapping burst  */
#define   MPDDRC_MINFO6_MAX_WAIT_BURST_INCR8_Val _UINT32_(0x5)                                        /* (MPDDRC_MINFO6) 8-beat incrementing burst  */
#define   MPDDRC_MINFO6_MAX_WAIT_BURST_WRAP16_Val _UINT32_(0x6)                                        /* (MPDDRC_MINFO6) 16-beat wrapping burst  */
#define   MPDDRC_MINFO6_MAX_WAIT_BURST_INCR16_Val _UINT32_(0x7)                                        /* (MPDDRC_MINFO6) 16-beat incrementing burst  */
#define MPDDRC_MINFO6_MAX_WAIT_BURST_SINGLE   (MPDDRC_MINFO6_MAX_WAIT_BURST_SINGLE_Val << MPDDRC_MINFO6_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO6) Single transfer Position */
#define MPDDRC_MINFO6_MAX_WAIT_BURST_INCR     (MPDDRC_MINFO6_MAX_WAIT_BURST_INCR_Val << MPDDRC_MINFO6_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO6) Incrementing burst of unspecified length Position */
#define MPDDRC_MINFO6_MAX_WAIT_BURST_WRAP4    (MPDDRC_MINFO6_MAX_WAIT_BURST_WRAP4_Val << MPDDRC_MINFO6_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO6) 4-beat wrapping burst Position */
#define MPDDRC_MINFO6_MAX_WAIT_BURST_INCR4    (MPDDRC_MINFO6_MAX_WAIT_BURST_INCR4_Val << MPDDRC_MINFO6_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO6) 4-beat incrementing burst Position */
#define MPDDRC_MINFO6_MAX_WAIT_BURST_WRAP8    (MPDDRC_MINFO6_MAX_WAIT_BURST_WRAP8_Val << MPDDRC_MINFO6_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO6) 8-beat wrapping burst Position */
#define MPDDRC_MINFO6_MAX_WAIT_BURST_INCR8    (MPDDRC_MINFO6_MAX_WAIT_BURST_INCR8_Val << MPDDRC_MINFO6_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO6) 8-beat incrementing burst Position */
#define MPDDRC_MINFO6_MAX_WAIT_BURST_WRAP16   (MPDDRC_MINFO6_MAX_WAIT_BURST_WRAP16_Val << MPDDRC_MINFO6_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO6) 16-beat wrapping burst Position */
#define MPDDRC_MINFO6_MAX_WAIT_BURST_INCR16   (MPDDRC_MINFO6_MAX_WAIT_BURST_INCR16_Val << MPDDRC_MINFO6_MAX_WAIT_BURST_Pos) /* (MPDDRC_MINFO6) 16-beat incrementing burst Position */
#define MPDDRC_MINFO6_MAX_WAIT_SIZE_Pos       _UINT32_(20)                                         /* (MPDDRC_MINFO6) Transfer Size on Port [x = 0..6] Position */
#define MPDDRC_MINFO6_MAX_WAIT_SIZE_Msk       (_UINT32_(0x7) << MPDDRC_MINFO6_MAX_WAIT_SIZE_Pos)   /* (MPDDRC_MINFO6) Transfer Size on Port [x = 0..6] Mask */
#define MPDDRC_MINFO6_MAX_WAIT_SIZE(value)    (MPDDRC_MINFO6_MAX_WAIT_SIZE_Msk & (_UINT32_(value) << MPDDRC_MINFO6_MAX_WAIT_SIZE_Pos))
#define   MPDDRC_MINFO6_MAX_WAIT_SIZE_8BITS_Val _UINT32_(0x0)                                        /* (MPDDRC_MINFO6) Byte transfer  */
#define   MPDDRC_MINFO6_MAX_WAIT_SIZE_16BITS_Val _UINT32_(0x1)                                        /* (MPDDRC_MINFO6) Halfword transfer  */
#define   MPDDRC_MINFO6_MAX_WAIT_SIZE_32BITS_Val _UINT32_(0x2)                                        /* (MPDDRC_MINFO6) Word transfer  */
#define   MPDDRC_MINFO6_MAX_WAIT_SIZE_64BITS_Val _UINT32_(0x3)                                        /* (MPDDRC_MINFO6) Dword transfer  */
#define MPDDRC_MINFO6_MAX_WAIT_SIZE_8BITS     (MPDDRC_MINFO6_MAX_WAIT_SIZE_8BITS_Val << MPDDRC_MINFO6_MAX_WAIT_SIZE_Pos) /* (MPDDRC_MINFO6) Byte transfer Position */
#define MPDDRC_MINFO6_MAX_WAIT_SIZE_16BITS    (MPDDRC_MINFO6_MAX_WAIT_SIZE_16BITS_Val << MPDDRC_MINFO6_MAX_WAIT_SIZE_Pos) /* (MPDDRC_MINFO6) Halfword transfer Position */
#define MPDDRC_MINFO6_MAX_WAIT_SIZE_32BITS    (MPDDRC_MINFO6_MAX_WAIT_SIZE_32BITS_Val << MPDDRC_MINFO6_MAX_WAIT_SIZE_Pos) /* (MPDDRC_MINFO6) Word transfer Position */
#define MPDDRC_MINFO6_MAX_WAIT_SIZE_64BITS    (MPDDRC_MINFO6_MAX_WAIT_SIZE_64BITS_Val << MPDDRC_MINFO6_MAX_WAIT_SIZE_Pos) /* (MPDDRC_MINFO6) Dword transfer Position */
#define MPDDRC_MINFO6_MAX_WAIT_READ_WRITE_Pos _UINT32_(24)                                         /* (MPDDRC_MINFO6) Read or Write Access on Port [x = 0..6] Position */
#define MPDDRC_MINFO6_MAX_WAIT_READ_WRITE_Msk (_UINT32_(0x1) << MPDDRC_MINFO6_MAX_WAIT_READ_WRITE_Pos) /* (MPDDRC_MINFO6) Read or Write Access on Port [x = 0..6] Mask */
#define MPDDRC_MINFO6_MAX_WAIT_READ_WRITE(value) (MPDDRC_MINFO6_MAX_WAIT_READ_WRITE_Msk & (_UINT32_(value) << MPDDRC_MINFO6_MAX_WAIT_READ_WRITE_Pos))
#define   MPDDRC_MINFO6_MAX_WAIT_READ_WRITE_0_Val _UINT32_(0x0)                                        /* (MPDDRC_MINFO6) Read transfer.  */
#define   MPDDRC_MINFO6_MAX_WAIT_READ_WRITE_1_Val _UINT32_(0x1)                                        /* (MPDDRC_MINFO6) Write transfer.  */
#define MPDDRC_MINFO6_MAX_WAIT_READ_WRITE_0   (MPDDRC_MINFO6_MAX_WAIT_READ_WRITE_0_Val << MPDDRC_MINFO6_MAX_WAIT_READ_WRITE_Pos) /* (MPDDRC_MINFO6) Read transfer. Position */
#define MPDDRC_MINFO6_MAX_WAIT_READ_WRITE_1   (MPDDRC_MINFO6_MAX_WAIT_READ_WRITE_1_Val << MPDDRC_MINFO6_MAX_WAIT_READ_WRITE_Pos) /* (MPDDRC_MINFO6) Write transfer. Position */
#define MPDDRC_MINFO6_MAX_WAIT_LQOS_Pos       _UINT32_(25)                                         /* (MPDDRC_MINFO6) Value of Quality Of Service on Port [x = 0..6] Position */
#define MPDDRC_MINFO6_MAX_WAIT_LQOS_Msk       (_UINT32_(0x3) << MPDDRC_MINFO6_MAX_WAIT_LQOS_Pos)   /* (MPDDRC_MINFO6) Value of Quality Of Service on Port [x = 0..6] Mask */
#define MPDDRC_MINFO6_MAX_WAIT_LQOS(value)    (MPDDRC_MINFO6_MAX_WAIT_LQOS_Msk & (_UINT32_(value) << MPDDRC_MINFO6_MAX_WAIT_LQOS_Pos))
#define   MPDDRC_MINFO6_MAX_WAIT_LQOS_BACKGROUND_Val _UINT32_(0x0)                                        /* (MPDDRC_MINFO6) Background transfers  */
#define   MPDDRC_MINFO6_MAX_WAIT_LQOS_BANDWIDTH_Val _UINT32_(0x1)                                        /* (MPDDRC_MINFO6) Bandwidth sensitive  */
#define   MPDDRC_MINFO6_MAX_WAIT_LQOS_SENSITIVE_LAT_Val _UINT32_(0x2)                                        /* (MPDDRC_MINFO6) Latency sensitive  */
#define   MPDDRC_MINFO6_MAX_WAIT_LQOS_CRITICAL_LAT_Val _UINT32_(0x3)                                        /* (MPDDRC_MINFO6) Latency critical  */
#define MPDDRC_MINFO6_MAX_WAIT_LQOS_BACKGROUND (MPDDRC_MINFO6_MAX_WAIT_LQOS_BACKGROUND_Val << MPDDRC_MINFO6_MAX_WAIT_LQOS_Pos) /* (MPDDRC_MINFO6) Background transfers Position */
#define MPDDRC_MINFO6_MAX_WAIT_LQOS_BANDWIDTH (MPDDRC_MINFO6_MAX_WAIT_LQOS_BANDWIDTH_Val << MPDDRC_MINFO6_MAX_WAIT_LQOS_Pos) /* (MPDDRC_MINFO6) Bandwidth sensitive Position */
#define MPDDRC_MINFO6_MAX_WAIT_LQOS_SENSITIVE_LAT (MPDDRC_MINFO6_MAX_WAIT_LQOS_SENSITIVE_LAT_Val << MPDDRC_MINFO6_MAX_WAIT_LQOS_Pos) /* (MPDDRC_MINFO6) Latency sensitive Position */
#define MPDDRC_MINFO6_MAX_WAIT_LQOS_CRITICAL_LAT (MPDDRC_MINFO6_MAX_WAIT_LQOS_CRITICAL_LAT_Val << MPDDRC_MINFO6_MAX_WAIT_LQOS_Pos) /* (MPDDRC_MINFO6) Latency critical Position */
#define MPDDRC_MINFO6_MAX_WAIT_Msk            _UINT32_(0x0777FFFF)                                 /* (MPDDRC_MINFO6_MAX_WAIT) Register Mask  */

/* NB_TRANSFERS mode */
#define MPDDRC_MINFO6_NB_TRANSFERS_P6_NB_TRANSFERS_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO6) Number of Transfers on Port [x = 0..6] Position */
#define MPDDRC_MINFO6_NB_TRANSFERS_P6_NB_TRANSFERS_Msk (_UINT32_(0xFFFFFFFF) << MPDDRC_MINFO6_NB_TRANSFERS_P6_NB_TRANSFERS_Pos) /* (MPDDRC_MINFO6) Number of Transfers on Port [x = 0..6] Mask */
#define MPDDRC_MINFO6_NB_TRANSFERS_P6_NB_TRANSFERS(value) (MPDDRC_MINFO6_NB_TRANSFERS_P6_NB_TRANSFERS_Msk & (_UINT32_(value) << MPDDRC_MINFO6_NB_TRANSFERS_P6_NB_TRANSFERS_Pos))
#define MPDDRC_MINFO6_NB_TRANSFERS_Msk        _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO6_NB_TRANSFERS) Register Mask  */

/* TOTAL_CYCLE_COUNT mode */
#define MPDDRC_MINFO6_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO6) Total Cycle Count Position */
#define MPDDRC_MINFO6_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Msk (_UINT32_(0xFFFFFFFF) << MPDDRC_MINFO6_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Pos) /* (MPDDRC_MINFO6) Total Cycle Count Mask */
#define MPDDRC_MINFO6_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT(value) (MPDDRC_MINFO6_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Msk & (_UINT32_(value) << MPDDRC_MINFO6_TOTAL_CYCLE_COUNT_TOTAL_CYCLE_COUNT_Pos))
#define MPDDRC_MINFO6_TOTAL_CYCLE_COUNT_Msk   _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO6_TOTAL_CYCLE_COUNT) Register Mask  */

/* TOTAL_LATENCY mode */
#define MPDDRC_MINFO6_TOTAL_LATENCY_P6_TOTAL_LATENCY_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO6) Total Latency on Port [x = 0..6] Position */
#define MPDDRC_MINFO6_TOTAL_LATENCY_P6_TOTAL_LATENCY_Msk (_UINT32_(0xFFFFFFFF) << MPDDRC_MINFO6_TOTAL_LATENCY_P6_TOTAL_LATENCY_Pos) /* (MPDDRC_MINFO6) Total Latency on Port [x = 0..6] Mask */
#define MPDDRC_MINFO6_TOTAL_LATENCY_P6_TOTAL_LATENCY(value) (MPDDRC_MINFO6_TOTAL_LATENCY_P6_TOTAL_LATENCY_Msk & (_UINT32_(value) << MPDDRC_MINFO6_TOTAL_LATENCY_P6_TOTAL_LATENCY_Pos))
#define MPDDRC_MINFO6_TOTAL_LATENCY_Msk       _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO6_TOTAL_LATENCY) Register Mask  */

/* TOTAL_LATENCY_QOS01 mode */
#define MPDDRC_MINFO6_TOTAL_LATENCY_QOS01_P6_TOTAL_LATENCY_QOS0_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO6) Total Latency on Port [x = 0..6] when value of qos is 0 Position */
#define MPDDRC_MINFO6_TOTAL_LATENCY_QOS01_P6_TOTAL_LATENCY_QOS0_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO6_TOTAL_LATENCY_QOS01_P6_TOTAL_LATENCY_QOS0_Pos) /* (MPDDRC_MINFO6) Total Latency on Port [x = 0..6] when value of qos is 0 Mask */
#define MPDDRC_MINFO6_TOTAL_LATENCY_QOS01_P6_TOTAL_LATENCY_QOS0(value) (MPDDRC_MINFO6_TOTAL_LATENCY_QOS01_P6_TOTAL_LATENCY_QOS0_Msk & (_UINT32_(value) << MPDDRC_MINFO6_TOTAL_LATENCY_QOS01_P6_TOTAL_LATENCY_QOS0_Pos))
#define MPDDRC_MINFO6_TOTAL_LATENCY_QOS01_P6_TOTAL_LATENCY_QOS1_Pos _UINT32_(16)                                         /* (MPDDRC_MINFO6) Total Latency on Port [x = 0..6] when value of qos is 1 Position */
#define MPDDRC_MINFO6_TOTAL_LATENCY_QOS01_P6_TOTAL_LATENCY_QOS1_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO6_TOTAL_LATENCY_QOS01_P6_TOTAL_LATENCY_QOS1_Pos) /* (MPDDRC_MINFO6) Total Latency on Port [x = 0..6] when value of qos is 1 Mask */
#define MPDDRC_MINFO6_TOTAL_LATENCY_QOS01_P6_TOTAL_LATENCY_QOS1(value) (MPDDRC_MINFO6_TOTAL_LATENCY_QOS01_P6_TOTAL_LATENCY_QOS1_Msk & (_UINT32_(value) << MPDDRC_MINFO6_TOTAL_LATENCY_QOS01_P6_TOTAL_LATENCY_QOS1_Pos))
#define MPDDRC_MINFO6_TOTAL_LATENCY_QOS01_Msk _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO6_TOTAL_LATENCY_QOS01) Register Mask  */

/* TOTAL_LATENCY_QOS23 mode */
#define MPDDRC_MINFO6_TOTAL_LATENCY_QOS23_P6_TOTAL_LATENCY_QOS2_Pos _UINT32_(0)                                          /* (MPDDRC_MINFO6) Total Latency on Port [x = 0..6] when value of qos is 2 Position */
#define MPDDRC_MINFO6_TOTAL_LATENCY_QOS23_P6_TOTAL_LATENCY_QOS2_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO6_TOTAL_LATENCY_QOS23_P6_TOTAL_LATENCY_QOS2_Pos) /* (MPDDRC_MINFO6) Total Latency on Port [x = 0..6] when value of qos is 2 Mask */
#define MPDDRC_MINFO6_TOTAL_LATENCY_QOS23_P6_TOTAL_LATENCY_QOS2(value) (MPDDRC_MINFO6_TOTAL_LATENCY_QOS23_P6_TOTAL_LATENCY_QOS2_Msk & (_UINT32_(value) << MPDDRC_MINFO6_TOTAL_LATENCY_QOS23_P6_TOTAL_LATENCY_QOS2_Pos))
#define MPDDRC_MINFO6_TOTAL_LATENCY_QOS23_P6_TOTAL_LATENCY_QOS3_Pos _UINT32_(16)                                         /* (MPDDRC_MINFO6) Total Latency on Port [x = 0..6] when value of qos is 3 Position */
#define MPDDRC_MINFO6_TOTAL_LATENCY_QOS23_P6_TOTAL_LATENCY_QOS3_Msk (_UINT32_(0xFFFF) << MPDDRC_MINFO6_TOTAL_LATENCY_QOS23_P6_TOTAL_LATENCY_QOS3_Pos) /* (MPDDRC_MINFO6) Total Latency on Port [x = 0..6] when value of qos is 3 Mask */
#define MPDDRC_MINFO6_TOTAL_LATENCY_QOS23_P6_TOTAL_LATENCY_QOS3(value) (MPDDRC_MINFO6_TOTAL_LATENCY_QOS23_P6_TOTAL_LATENCY_QOS3_Msk & (_UINT32_(value) << MPDDRC_MINFO6_TOTAL_LATENCY_QOS23_P6_TOTAL_LATENCY_QOS3_Pos))
#define MPDDRC_MINFO6_TOTAL_LATENCY_QOS23_Msk _UINT32_(0xFFFFFFFF)                                 /* (MPDDRC_MINFO6_TOTAL_LATENCY_QOS23) Register Mask  */


/* -------- MPDDRC_IER : (MPDDRC Offset: 0xC0) ( /W 32) Interrupt Enable Register -------- */
#define MPDDRC_IER_SEC_Pos                    _UINT32_(0)                                          /* (MPDDRC_IER) Security and /or Safety Interrupt Enable Position */
#define MPDDRC_IER_SEC_Msk                    (_UINT32_(0x1) << MPDDRC_IER_SEC_Pos)                /* (MPDDRC_IER) Security and /or Safety Interrupt Enable Mask */
#define MPDDRC_IER_SEC(value)                 (MPDDRC_IER_SEC_Msk & (_UINT32_(value) << MPDDRC_IER_SEC_Pos)) /* Assignment of value for SEC in the MPDDRC_IER register */
#define MPDDRC_IER_RD_ERR_Pos                 _UINT32_(1)                                          /* (MPDDRC_IER) Read Error Interrupt Enable Position */
#define MPDDRC_IER_RD_ERR_Msk                 (_UINT32_(0x1) << MPDDRC_IER_RD_ERR_Pos)             /* (MPDDRC_IER) Read Error Interrupt Enable Mask */
#define MPDDRC_IER_RD_ERR(value)              (MPDDRC_IER_RD_ERR_Msk & (_UINT32_(value) << MPDDRC_IER_RD_ERR_Pos)) /* Assignment of value for RD_ERR in the MPDDRC_IER register */
#define MPDDRC_IER_Msk                        _UINT32_(0x00000003)                                 /* (MPDDRC_IER) Register Mask  */


/* -------- MPDDRC_IDR : (MPDDRC Offset: 0xC4) ( /W 32) Interrupt Disable Register -------- */
#define MPDDRC_IDR_SEC_Pos                    _UINT32_(0)                                          /* (MPDDRC_IDR) Security and /or Safety Interrupt Disable Position */
#define MPDDRC_IDR_SEC_Msk                    (_UINT32_(0x1) << MPDDRC_IDR_SEC_Pos)                /* (MPDDRC_IDR) Security and /or Safety Interrupt Disable Mask */
#define MPDDRC_IDR_SEC(value)                 (MPDDRC_IDR_SEC_Msk & (_UINT32_(value) << MPDDRC_IDR_SEC_Pos)) /* Assignment of value for SEC in the MPDDRC_IDR register */
#define MPDDRC_IDR_RD_ERR_Pos                 _UINT32_(1)                                          /* (MPDDRC_IDR) Read Error Interrupt Disable Position */
#define MPDDRC_IDR_RD_ERR_Msk                 (_UINT32_(0x1) << MPDDRC_IDR_RD_ERR_Pos)             /* (MPDDRC_IDR) Read Error Interrupt Disable Mask */
#define MPDDRC_IDR_RD_ERR(value)              (MPDDRC_IDR_RD_ERR_Msk & (_UINT32_(value) << MPDDRC_IDR_RD_ERR_Pos)) /* Assignment of value for RD_ERR in the MPDDRC_IDR register */
#define MPDDRC_IDR_Msk                        _UINT32_(0x00000003)                                 /* (MPDDRC_IDR) Register Mask  */


/* -------- MPDDRC_IMR : (MPDDRC Offset: 0xC8) ( R/ 32) Interrupt Mask Register -------- */
#define MPDDRC_IMR_SEC_Pos                    _UINT32_(0)                                          /* (MPDDRC_IMR) Security and /or Safety Interrupt Mask Position */
#define MPDDRC_IMR_SEC_Msk                    (_UINT32_(0x1) << MPDDRC_IMR_SEC_Pos)                /* (MPDDRC_IMR) Security and /or Safety Interrupt Mask Mask */
#define MPDDRC_IMR_SEC(value)                 (MPDDRC_IMR_SEC_Msk & (_UINT32_(value) << MPDDRC_IMR_SEC_Pos)) /* Assignment of value for SEC in the MPDDRC_IMR register */
#define MPDDRC_IMR_RD_ERR_Pos                 _UINT32_(1)                                          /* (MPDDRC_IMR) Read Error Interrupt Mask Position */
#define MPDDRC_IMR_RD_ERR_Msk                 (_UINT32_(0x1) << MPDDRC_IMR_RD_ERR_Pos)             /* (MPDDRC_IMR) Read Error Interrupt Mask Mask */
#define MPDDRC_IMR_RD_ERR(value)              (MPDDRC_IMR_RD_ERR_Msk & (_UINT32_(value) << MPDDRC_IMR_RD_ERR_Pos)) /* Assignment of value for RD_ERR in the MPDDRC_IMR register */
#define MPDDRC_IMR_Msk                        _UINT32_(0x00000003)                                 /* (MPDDRC_IMR) Register Mask  */


/* -------- MPDDRC_ISR : (MPDDRC Offset: 0xCC) ( R/ 32) Interrupt Status Register -------- */
#define MPDDRC_ISR_SEC_Pos                    _UINT32_(0)                                          /* (MPDDRC_ISR) Security and /or Safety Event Position */
#define MPDDRC_ISR_SEC_Msk                    (_UINT32_(0x1) << MPDDRC_ISR_SEC_Pos)                /* (MPDDRC_ISR) Security and /or Safety Event Mask */
#define MPDDRC_ISR_SEC(value)                 (MPDDRC_ISR_SEC_Msk & (_UINT32_(value) << MPDDRC_ISR_SEC_Pos)) /* Assignment of value for SEC in the MPDDRC_ISR register */
#define   MPDDRC_ISR_SEC_0_Val                _UINT32_(0x0)                                        /* (MPDDRC_ISR) There is no security report in MPDDRC_WPSR.  */
#define   MPDDRC_ISR_SEC_1_Val                _UINT32_(0x1)                                        /* (MPDDRC_ISR) One security flag is set in MPDDRC_WPSR.  */
#define MPDDRC_ISR_SEC_0                      (MPDDRC_ISR_SEC_0_Val << MPDDRC_ISR_SEC_Pos)         /* (MPDDRC_ISR) There is no security report in MPDDRC_WPSR. Position */
#define MPDDRC_ISR_SEC_1                      (MPDDRC_ISR_SEC_1_Val << MPDDRC_ISR_SEC_Pos)         /* (MPDDRC_ISR) One security flag is set in MPDDRC_WPSR. Position */
#define MPDDRC_ISR_RD_ERR_Pos                 _UINT32_(1)                                          /* (MPDDRC_ISR) Read Error Position */
#define MPDDRC_ISR_RD_ERR_Msk                 (_UINT32_(0x1) << MPDDRC_ISR_RD_ERR_Pos)             /* (MPDDRC_ISR) Read Error Mask */
#define MPDDRC_ISR_RD_ERR(value)              (MPDDRC_ISR_RD_ERR_Msk & (_UINT32_(value) << MPDDRC_ISR_RD_ERR_Pos)) /* Assignment of value for RD_ERR in the MPDDRC_ISR register */
#define   MPDDRC_ISR_RD_ERR_0_Val             _UINT32_(0x0)                                        /* (MPDDRC_ISR) There is no error during memory check.  */
#define   MPDDRC_ISR_RD_ERR_1_Val             _UINT32_(0x1)                                        /* (MPDDRC_ISR) There is one error during memory check.  */
#define MPDDRC_ISR_RD_ERR_0                   (MPDDRC_ISR_RD_ERR_0_Val << MPDDRC_ISR_RD_ERR_Pos)   /* (MPDDRC_ISR) There is no error during memory check. Position */
#define MPDDRC_ISR_RD_ERR_1                   (MPDDRC_ISR_RD_ERR_1_Val << MPDDRC_ISR_RD_ERR_Pos)   /* (MPDDRC_ISR) There is one error during memory check. Position */
#define MPDDRC_ISR_Msk                        _UINT32_(0x00000003)                                 /* (MPDDRC_ISR) Register Mask  */


/* -------- MPDDRC_SAFETY : (MPDDRC Offset: 0xD0) (R/W 32) Safety Register -------- */
#define MPDDRC_SAFETY_RESETVALUE              _UINT32_(0x00)                                       /*  (MPDDRC_SAFETY) Safety Register  Reset Value */

#define MPDDRC_SAFETY_ADDRESS_Pos             _UINT32_(0)                                          /* (MPDDRC_SAFETY) Memory Device Address Position */
#define MPDDRC_SAFETY_ADDRESS_Msk             (_UINT32_(0xFFFFFFF) << MPDDRC_SAFETY_ADDRESS_Pos)   /* (MPDDRC_SAFETY) Memory Device Address Mask */
#define MPDDRC_SAFETY_ADDRESS(value)          (MPDDRC_SAFETY_ADDRESS_Msk & (_UINT32_(value) << MPDDRC_SAFETY_ADDRESS_Pos)) /* Assignment of value for ADDRESS in the MPDDRC_SAFETY register */
#define MPDDRC_SAFETY_EN_Pos                  _UINT32_(28)                                         /* (MPDDRC_SAFETY) Enable Periodic Check of Memory Device Position */
#define MPDDRC_SAFETY_EN_Msk                  (_UINT32_(0x1) << MPDDRC_SAFETY_EN_Pos)              /* (MPDDRC_SAFETY) Enable Periodic Check of Memory Device Mask */
#define MPDDRC_SAFETY_EN(value)               (MPDDRC_SAFETY_EN_Msk & (_UINT32_(value) << MPDDRC_SAFETY_EN_Pos)) /* Assignment of value for EN in the MPDDRC_SAFETY register */
#define   MPDDRC_SAFETY_EN_0_Val              _UINT32_(0x0)                                        /* (MPDDRC_SAFETY) Memory check is disabled.  */
#define   MPDDRC_SAFETY_EN_1_Val              _UINT32_(0x1)                                        /* (MPDDRC_SAFETY) Memory check is enabled.  */
#define MPDDRC_SAFETY_EN_0                    (MPDDRC_SAFETY_EN_0_Val << MPDDRC_SAFETY_EN_Pos)     /* (MPDDRC_SAFETY) Memory check is disabled. Position */
#define MPDDRC_SAFETY_EN_1                    (MPDDRC_SAFETY_EN_1_Val << MPDDRC_SAFETY_EN_Pos)     /* (MPDDRC_SAFETY) Memory check is enabled. Position */
#define MPDDRC_SAFETY_Msk                     _UINT32_(0x1FFFFFFF)                                 /* (MPDDRC_SAFETY) Register Mask  */


/* -------- MPDDRC_WPMR : (MPDDRC Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define MPDDRC_WPMR_RESETVALUE                _UINT32_(0x00)                                       /*  (MPDDRC_WPMR) Write Protection Mode Register  Reset Value */

#define MPDDRC_WPMR_WPEN_Pos                  _UINT32_(0)                                          /* (MPDDRC_WPMR) Write Protection Enable Position */
#define MPDDRC_WPMR_WPEN_Msk                  (_UINT32_(0x1) << MPDDRC_WPMR_WPEN_Pos)              /* (MPDDRC_WPMR) Write Protection Enable Mask */
#define MPDDRC_WPMR_WPEN(value)               (MPDDRC_WPMR_WPEN_Msk & (_UINT32_(value) << MPDDRC_WPMR_WPEN_Pos)) /* Assignment of value for WPEN in the MPDDRC_WPMR register */
#define   MPDDRC_WPMR_WPEN_0_Val              _UINT32_(0x0)                                        /* (MPDDRC_WPMR) Disables the write protection if WPKEY corresponds to 0x444452 ("DDR" in ASCII).  */
#define   MPDDRC_WPMR_WPEN_1_Val              _UINT32_(0x1)                                        /* (MPDDRC_WPMR) Enables the write protection if WPKEY corresponds to 0x444452 ("DDR" in ASCII).  */
#define MPDDRC_WPMR_WPEN_0                    (MPDDRC_WPMR_WPEN_0_Val << MPDDRC_WPMR_WPEN_Pos)     /* (MPDDRC_WPMR) Disables the write protection if WPKEY corresponds to 0x444452 ("DDR" in ASCII). Position */
#define MPDDRC_WPMR_WPEN_1                    (MPDDRC_WPMR_WPEN_1_Val << MPDDRC_WPMR_WPEN_Pos)     /* (MPDDRC_WPMR) Enables the write protection if WPKEY corresponds to 0x444452 ("DDR" in ASCII). Position */
#define MPDDRC_WPMR_WPITEN_Pos                _UINT32_(1)                                          /* (MPDDRC_WPMR) Write Protection Interruption Enable Position */
#define MPDDRC_WPMR_WPITEN_Msk                (_UINT32_(0x1) << MPDDRC_WPMR_WPITEN_Pos)            /* (MPDDRC_WPMR) Write Protection Interruption Enable Mask */
#define MPDDRC_WPMR_WPITEN(value)             (MPDDRC_WPMR_WPITEN_Msk & (_UINT32_(value) << MPDDRC_WPMR_WPITEN_Pos)) /* Assignment of value for WPITEN in the MPDDRC_WPMR register */
#define   MPDDRC_WPMR_WPITEN_0_Val            _UINT32_(0x0)                                        /* (MPDDRC_WPMR) Disables the write protection on interrupt registers if WPKEY corresponds to 0x444452 ("DDR" in ASCII).  */
#define   MPDDRC_WPMR_WPITEN_1_Val            _UINT32_(0x1)                                        /* (MPDDRC_WPMR) Enables the write protection on interrupt registers if WPKEY corresponds to 0x444452 ("DDR" in ASCII).  */
#define MPDDRC_WPMR_WPITEN_0                  (MPDDRC_WPMR_WPITEN_0_Val << MPDDRC_WPMR_WPITEN_Pos) /* (MPDDRC_WPMR) Disables the write protection on interrupt registers if WPKEY corresponds to 0x444452 ("DDR" in ASCII). Position */
#define MPDDRC_WPMR_WPITEN_1                  (MPDDRC_WPMR_WPITEN_1_Val << MPDDRC_WPMR_WPITEN_Pos) /* (MPDDRC_WPMR) Enables the write protection on interrupt registers if WPKEY corresponds to 0x444452 ("DDR" in ASCII). Position */
#define MPDDRC_WPMR_FIRSTE_Pos                _UINT32_(4)                                          /* (MPDDRC_WPMR) First Error Report Enable Position */
#define MPDDRC_WPMR_FIRSTE_Msk                (_UINT32_(0x1) << MPDDRC_WPMR_FIRSTE_Pos)            /* (MPDDRC_WPMR) First Error Report Enable Mask */
#define MPDDRC_WPMR_FIRSTE(value)             (MPDDRC_WPMR_FIRSTE_Msk & (_UINT32_(value) << MPDDRC_WPMR_FIRSTE_Pos)) /* Assignment of value for FIRSTE in the MPDDRC_WPMR register */
#define   MPDDRC_WPMR_FIRSTE_0_Val            _UINT32_(0x0)                                        /* (MPDDRC_WPMR) The last write protection violation source is reported in MPDDRC_WPSR.WPVSRC and the last software control error type is reported in MPDDRC_WPSR.SWETYP. The MPDDRC_ISR.SEC flag is set at the first error occurrence within a series.  */
#define   MPDDRC_WPMR_FIRSTE_1_Val            _UINT32_(0x1)                                        /* (MPDDRC_WPMR) Only the first write protection violation source is reported in MPDDRC_WPSR.WPVSRC and only the first software control error type is reported in MPDDRC_WPSR.SWETYP. The MPDDRC_ISR.SEC flag is set at the first error occurrence within a series.  */
#define MPDDRC_WPMR_FIRSTE_0                  (MPDDRC_WPMR_FIRSTE_0_Val << MPDDRC_WPMR_FIRSTE_Pos) /* (MPDDRC_WPMR) The last write protection violation source is reported in MPDDRC_WPSR.WPVSRC and the last software control error type is reported in MPDDRC_WPSR.SWETYP. The MPDDRC_ISR.SEC flag is set at the first error occurrence within a series. Position */
#define MPDDRC_WPMR_FIRSTE_1                  (MPDDRC_WPMR_FIRSTE_1_Val << MPDDRC_WPMR_FIRSTE_Pos) /* (MPDDRC_WPMR) Only the first write protection violation source is reported in MPDDRC_WPSR.WPVSRC and only the first software control error type is reported in MPDDRC_WPSR.SWETYP. The MPDDRC_ISR.SEC flag is set at the first error occurrence within a series. Position */
#define MPDDRC_WPMR_WPKEY_Pos                 _UINT32_(8)                                          /* (MPDDRC_WPMR) Write Protection Key Position */
#define MPDDRC_WPMR_WPKEY_Msk                 (_UINT32_(0xFFFFFF) << MPDDRC_WPMR_WPKEY_Pos)        /* (MPDDRC_WPMR) Write Protection Key Mask */
#define MPDDRC_WPMR_WPKEY(value)              (MPDDRC_WPMR_WPKEY_Msk & (_UINT32_(value) << MPDDRC_WPMR_WPKEY_Pos)) /* Assignment of value for WPKEY in the MPDDRC_WPMR register */
#define   MPDDRC_WPMR_WPKEY_PASSWD_Val        _UINT32_(0x444452)                                   /* (MPDDRC_WPMR) Writing any other value in this field aborts the write operation of the WPEN and WPITEN bits. Always reads as 0.  */
#define MPDDRC_WPMR_WPKEY_PASSWD              (MPDDRC_WPMR_WPKEY_PASSWD_Val << MPDDRC_WPMR_WPKEY_Pos) /* (MPDDRC_WPMR) Writing any other value in this field aborts the write operation of the WPEN and WPITEN bits. Always reads as 0. Position */
#define MPDDRC_WPMR_Msk                       _UINT32_(0xFFFFFF13)                                 /* (MPDDRC_WPMR) Register Mask  */


/* -------- MPDDRC_WPSR : (MPDDRC Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define MPDDRC_WPSR_RESETVALUE                _UINT32_(0x00)                                       /*  (MPDDRC_WPSR) Write Protection Status Register  Reset Value */

#define MPDDRC_WPSR_WPVS_Pos                  _UINT32_(0)                                          /* (MPDDRC_WPSR) Write Protection Enable Position */
#define MPDDRC_WPSR_WPVS_Msk                  (_UINT32_(0x1) << MPDDRC_WPSR_WPVS_Pos)              /* (MPDDRC_WPSR) Write Protection Enable Mask */
#define MPDDRC_WPSR_WPVS(value)               (MPDDRC_WPSR_WPVS_Msk & (_UINT32_(value) << MPDDRC_WPSR_WPVS_Pos)) /* Assignment of value for WPVS in the MPDDRC_WPSR register */
#define   MPDDRC_WPSR_WPVS_0_Val              _UINT32_(0x0)                                        /* (MPDDRC_WPSR) No write protection violation occurred since the last read of this register (MPDDRC_WPSR).  */
#define   MPDDRC_WPSR_WPVS_1_Val              _UINT32_(0x1)                                        /* (MPDDRC_WPSR) A write protection violation occurred since the last read of this register (MPDDRC_WPSR). If this violation is an unauthorized attempt to write a control register, the associated violation is reported into the WPVSRC field.  */
#define MPDDRC_WPSR_WPVS_0                    (MPDDRC_WPSR_WPVS_0_Val << MPDDRC_WPSR_WPVS_Pos)     /* (MPDDRC_WPSR) No write protection violation occurred since the last read of this register (MPDDRC_WPSR). Position */
#define MPDDRC_WPSR_WPVS_1                    (MPDDRC_WPSR_WPVS_1_Val << MPDDRC_WPSR_WPVS_Pos)     /* (MPDDRC_WPSR) A write protection violation occurred since the last read of this register (MPDDRC_WPSR). If this violation is an unauthorized attempt to write a control register, the associated violation is reported into the WPVSRC field. Position */
#define MPDDRC_WPSR_CGD_Pos                   _UINT32_(1)                                          /* (MPDDRC_WPSR) Clock Glitch Detected (cleared on read) Position */
#define MPDDRC_WPSR_CGD_Msk                   (_UINT32_(0x1) << MPDDRC_WPSR_CGD_Pos)               /* (MPDDRC_WPSR) Clock Glitch Detected (cleared on read) Mask */
#define MPDDRC_WPSR_CGD(value)                (MPDDRC_WPSR_CGD_Msk & (_UINT32_(value) << MPDDRC_WPSR_CGD_Pos)) /* Assignment of value for CGD in the MPDDRC_WPSR register */
#define   MPDDRC_WPSR_CGD_0_Val               _UINT32_(0x0)                                        /* (MPDDRC_WPSR) The clock monitoring circuitry has not been corrupted since the last read of MPDDRC_WPSR. Under normal operating conditions, this bit is always cleared.  */
#define   MPDDRC_WPSR_CGD_1_Val               _UINT32_(0x1)                                        /* (MPDDRC_WPSR) The clock monitoring circuitry has been corrupted since the last read of MPDDRC_WPSR. This flag can only be set in case of an abnormal clock signal waveform (glitch).  */
#define MPDDRC_WPSR_CGD_0                     (MPDDRC_WPSR_CGD_0_Val << MPDDRC_WPSR_CGD_Pos)       /* (MPDDRC_WPSR) The clock monitoring circuitry has not been corrupted since the last read of MPDDRC_WPSR. Under normal operating conditions, this bit is always cleared. Position */
#define MPDDRC_WPSR_CGD_1                     (MPDDRC_WPSR_CGD_1_Val << MPDDRC_WPSR_CGD_Pos)       /* (MPDDRC_WPSR) The clock monitoring circuitry has been corrupted since the last read of MPDDRC_WPSR. This flag can only be set in case of an abnormal clock signal waveform (glitch). Position */
#define MPDDRC_WPSR_SEQE_Pos                  _UINT32_(2)                                          /* (MPDDRC_WPSR) Internal Sequencer Error (cleared on read) Position */
#define MPDDRC_WPSR_SEQE_Msk                  (_UINT32_(0x1) << MPDDRC_WPSR_SEQE_Pos)              /* (MPDDRC_WPSR) Internal Sequencer Error (cleared on read) Mask */
#define MPDDRC_WPSR_SEQE(value)               (MPDDRC_WPSR_SEQE_Msk & (_UINT32_(value) << MPDDRC_WPSR_SEQE_Pos)) /* Assignment of value for SEQE in the MPDDRC_WPSR register */
#define   MPDDRC_WPSR_SEQE_0_Val              _UINT32_(0x0)                                        /* (MPDDRC_WPSR) No peripheral internal sequencer error has occurred since the last read of MPDDRC_WPSR.  */
#define   MPDDRC_WPSR_SEQE_1_Val              _UINT32_(0x1)                                        /* (MPDDRC_WPSR) A peripheral internal sequencer error has occurred since the last read of MPDDRC_WPSR. This flag can only be set under abnormal operating conditions.  */
#define MPDDRC_WPSR_SEQE_0                    (MPDDRC_WPSR_SEQE_0_Val << MPDDRC_WPSR_SEQE_Pos)     /* (MPDDRC_WPSR) No peripheral internal sequencer error has occurred since the last read of MPDDRC_WPSR. Position */
#define MPDDRC_WPSR_SEQE_1                    (MPDDRC_WPSR_SEQE_1_Val << MPDDRC_WPSR_SEQE_Pos)     /* (MPDDRC_WPSR) A peripheral internal sequencer error has occurred since the last read of MPDDRC_WPSR. This flag can only be set under abnormal operating conditions. Position */
#define MPDDRC_WPSR_SWE_Pos                   _UINT32_(3)                                          /* (MPDDRC_WPSR) Software Control Error (cleared on read) Position */
#define MPDDRC_WPSR_SWE_Msk                   (_UINT32_(0x1) << MPDDRC_WPSR_SWE_Pos)               /* (MPDDRC_WPSR) Software Control Error (cleared on read) Mask */
#define MPDDRC_WPSR_SWE(value)                (MPDDRC_WPSR_SWE_Msk & (_UINT32_(value) << MPDDRC_WPSR_SWE_Pos)) /* Assignment of value for SWE in the MPDDRC_WPSR register */
#define   MPDDRC_WPSR_SWE_0_Val               _UINT32_(0x0)                                        /* (MPDDRC_WPSR) No software error has occurred since the last read of MPDDRC_WPSR.  */
#define   MPDDRC_WPSR_SWE_1_Val               _UINT32_(0x1)                                        /* (MPDDRC_WPSR) A software error has occurred since the last read of MPDDRC_WPSR. The field SWE details the type of software error. The associated incorrect software access is reported in the field WPVSRC (if WPVS=0).  */
#define MPDDRC_WPSR_SWE_0                     (MPDDRC_WPSR_SWE_0_Val << MPDDRC_WPSR_SWE_Pos)       /* (MPDDRC_WPSR) No software error has occurred since the last read of MPDDRC_WPSR. Position */
#define MPDDRC_WPSR_SWE_1                     (MPDDRC_WPSR_SWE_1_Val << MPDDRC_WPSR_SWE_Pos)       /* (MPDDRC_WPSR) A software error has occurred since the last read of MPDDRC_WPSR. The field SWE details the type of software error. The associated incorrect software access is reported in the field WPVSRC (if WPVS=0). Position */
#define MPDDRC_WPSR_WPVSRC_Pos                _UINT32_(8)                                          /* (MPDDRC_WPSR) Write Protection Violation Source Position */
#define MPDDRC_WPSR_WPVSRC_Msk                (_UINT32_(0xFFFF) << MPDDRC_WPSR_WPVSRC_Pos)         /* (MPDDRC_WPSR) Write Protection Violation Source Mask */
#define MPDDRC_WPSR_WPVSRC(value)             (MPDDRC_WPSR_WPVSRC_Msk & (_UINT32_(value) << MPDDRC_WPSR_WPVSRC_Pos)) /* Assignment of value for WPVSRC in the MPDDRC_WPSR register */
#define MPDDRC_WPSR_SWETYP_Pos                _UINT32_(24)                                         /* (MPDDRC_WPSR) Software Error Type (cleared on read) Position */
#define MPDDRC_WPSR_SWETYP_Msk                (_UINT32_(0x3) << MPDDRC_WPSR_SWETYP_Pos)            /* (MPDDRC_WPSR) Software Error Type (cleared on read) Mask */
#define MPDDRC_WPSR_SWETYP(value)             (MPDDRC_WPSR_SWETYP_Msk & (_UINT32_(value) << MPDDRC_WPSR_SWETYP_Pos)) /* Assignment of value for SWETYP in the MPDDRC_WPSR register */
#define   MPDDRC_WPSR_SWETYP_READ_WO_Val      _UINT32_(0x0)                                        /* (MPDDRC_WPSR) A write-only register has been read (warning).  */
#define   MPDDRC_WPSR_SWETYP_WRITE_RO_Val     _UINT32_(0x1)                                        /* (MPDDRC_WPSR) MPDDRC is enabled and a write access has been performed on a read-only register (warning).  */
#define   MPDDRC_WPSR_SWETYP_UNDEF_RW_Val     _UINT32_(0x2)                                        /* (MPDDRC_WPSR) Access to an undefined address (warning).  */
#define   MPDDRC_WPSR_SWETYP_W_AFTER_INIT_Val _UINT32_(0x3)                                        /* (MPDDRC_WPSR) Abnormal use of MPDDRC user interface when memory device is already configured and initialized, i.e., if MPDDRC_RTR.COUNT > 0 (error).  */
#define MPDDRC_WPSR_SWETYP_READ_WO            (MPDDRC_WPSR_SWETYP_READ_WO_Val << MPDDRC_WPSR_SWETYP_Pos) /* (MPDDRC_WPSR) A write-only register has been read (warning). Position */
#define MPDDRC_WPSR_SWETYP_WRITE_RO           (MPDDRC_WPSR_SWETYP_WRITE_RO_Val << MPDDRC_WPSR_SWETYP_Pos) /* (MPDDRC_WPSR) MPDDRC is enabled and a write access has been performed on a read-only register (warning). Position */
#define MPDDRC_WPSR_SWETYP_UNDEF_RW           (MPDDRC_WPSR_SWETYP_UNDEF_RW_Val << MPDDRC_WPSR_SWETYP_Pos) /* (MPDDRC_WPSR) Access to an undefined address (warning). Position */
#define MPDDRC_WPSR_SWETYP_W_AFTER_INIT       (MPDDRC_WPSR_SWETYP_W_AFTER_INIT_Val << MPDDRC_WPSR_SWETYP_Pos) /* (MPDDRC_WPSR) Abnormal use of MPDDRC user interface when memory device is already configured and initialized, i.e., if MPDDRC_RTR.COUNT > 0 (error). Position */
#define MPDDRC_WPSR_ECLASS_Pos                _UINT32_(31)                                         /* (MPDDRC_WPSR) Software Error Class (cleared on read) Position */
#define MPDDRC_WPSR_ECLASS_Msk                (_UINT32_(0x1) << MPDDRC_WPSR_ECLASS_Pos)            /* (MPDDRC_WPSR) Software Error Class (cleared on read) Mask */
#define MPDDRC_WPSR_ECLASS(value)             (MPDDRC_WPSR_ECLASS_Msk & (_UINT32_(value) << MPDDRC_WPSR_ECLASS_Pos)) /* Assignment of value for ECLASS in the MPDDRC_WPSR register */
#define   MPDDRC_WPSR_ECLASS_WARNING_Val      _UINT32_(0x0)                                        /* (MPDDRC_WPSR) An abnormal access that does not affect system functionality is performed.  */
#define   MPDDRC_WPSR_ECLASS_ERROR_Val        _UINT32_(0x1)                                        /* (MPDDRC_WPSR) An access is performed into some registers after memory device initialization sequence.  */
#define MPDDRC_WPSR_ECLASS_WARNING            (MPDDRC_WPSR_ECLASS_WARNING_Val << MPDDRC_WPSR_ECLASS_Pos) /* (MPDDRC_WPSR) An abnormal access that does not affect system functionality is performed. Position */
#define MPDDRC_WPSR_ECLASS_ERROR              (MPDDRC_WPSR_ECLASS_ERROR_Val << MPDDRC_WPSR_ECLASS_Pos) /* (MPDDRC_WPSR) An access is performed into some registers after memory device initialization sequence. Position */
#define MPDDRC_WPSR_Msk                       _UINT32_(0x83FFFF0F)                                 /* (MPDDRC_WPSR) Register Mask  */


/* MPDDRC register offsets definitions */
#define MPDDRC_MR_REG_OFST             _UINT32_(0x00)      /* (MPDDRC_MR) Mode Register Offset */
#define MPDDRC_RTR_REG_OFST            _UINT32_(0x04)      /* (MPDDRC_RTR) Refresh Timer Register Offset */
#define MPDDRC_CR_REG_OFST             _UINT32_(0x08)      /* (MPDDRC_CR) Configuration Register Offset */
#define MPDDRC_TPR0_REG_OFST           _UINT32_(0x0C)      /* (MPDDRC_TPR0) Timing Parameter 0 Register Offset */
#define MPDDRC_TPR1_REG_OFST           _UINT32_(0x10)      /* (MPDDRC_TPR1) Timing Parameter 1 Register Offset */
#define MPDDRC_TPR2_REG_OFST           _UINT32_(0x14)      /* (MPDDRC_TPR2) Timing Parameter 2 Register Offset */
#define MPDDRC_LPR_REG_OFST            _UINT32_(0x1C)      /* (MPDDRC_LPR) Low-Power Register Offset */
#define MPDDRC_MD_REG_OFST             _UINT32_(0x20)      /* (MPDDRC_MD) Memory Device Register Offset */
#define MPDDRC_DDR3_CAL_REG_OFST       _UINT32_(0x2C)      /* (MPDDRC_DDR3_CAL) DDR3 Calibration Register Offset */
#define MPDDRC_DDR3_TIM_CAL_REG_OFST   _UINT32_(0x30)      /* (MPDDRC_DDR3_TIM_CAL) DDR3 Timing Calibration Register Offset */
#define MPDDRC_IO_CALIBR_REG_OFST      _UINT32_(0x34)      /* (MPDDRC_IO_CALIBR) I/O Calibration Register Offset */
#define MPDDRC_OCMS_REG_OFST           _UINT32_(0x38)      /* (MPDDRC_OCMS) OCMS Register Offset */
#define MPDDRC_OCMS_KEY1_REG_OFST      _UINT32_(0x3C)      /* (MPDDRC_OCMS_KEY1) OCMS KEY1 Register Offset */
#define MPDDRC_OCMS_KEY2_REG_OFST      _UINT32_(0x40)      /* (MPDDRC_OCMS_KEY2) OCMS KEY2 Register Offset */
#define MPDDRC_CONF_ARBITER_REG_OFST   _UINT32_(0x44)      /* (MPDDRC_CONF_ARBITER) Configuration Arbiter Register Offset */
#define MPDDRC_TIMEOUT_REG_OFST        _UINT32_(0x48)      /* (MPDDRC_TIMEOUT) Timeout Register Offset */
#define MPDDRC_REQ_PORT_0123_REG_OFST  _UINT32_(0x4C)      /* (MPDDRC_REQ_PORT_0123) Request Port 0-1-2-3 Register Offset */
#define MPDDRC_REQ_PORT_456_REG_OFST   _UINT32_(0x50)      /* (MPDDRC_REQ_PORT_456) Request Port 4-5-6 Register Offset */
#define MPDDRC_BDW_PORT_0123_REG_OFST  _UINT32_(0x54)      /* (MPDDRC_BDW_PORT_0123) Current/Maximum Bandwidth Port 0-1-2-3 Register Offset */
#define MPDDRC_BDW_PORT_456_REG_OFST   _UINT32_(0x58)      /* (MPDDRC_BDW_PORT_456) Current/Maximum Bandwidth Port 4-5-6 Register Offset */
#define MPDDRC_RD_DATA_PATH_REG_OFST   _UINT32_(0x5C)      /* (MPDDRC_RD_DATA_PATH) Read Data Path Register Offset */
#define MPDDRC_MCFGR_REG_OFST          _UINT32_(0x60)      /* (MPDDRC_MCFGR) Monitor Configuration Register Offset */
#define MPDDRC_MADDR0_REG_OFST         _UINT32_(0x64)      /* (MPDDRC_MADDR0) Monitor Address High/Low Port 0 Register Offset */
#define MPDDRC_MADDR1_REG_OFST         _UINT32_(0x68)      /* (MPDDRC_MADDR1) Monitor Address High/Low Port 1 Register Offset */
#define MPDDRC_MADDR2_REG_OFST         _UINT32_(0x6C)      /* (MPDDRC_MADDR2) Monitor Address High/Low Port 2 Register Offset */
#define MPDDRC_MADDR3_REG_OFST         _UINT32_(0x70)      /* (MPDDRC_MADDR3) Monitor Address High/Low Port 3 Register Offset */
#define MPDDRC_MADDR4_REG_OFST         _UINT32_(0x74)      /* (MPDDRC_MADDR4) Monitor Address High/Low Port 4 Register Offset */
#define MPDDRC_MADDR5_REG_OFST         _UINT32_(0x78)      /* (MPDDRC_MADDR5) Monitor Address High/Low Port 5 Register Offset */
#define MPDDRC_MADDR6_REG_OFST         _UINT32_(0x7C)      /* (MPDDRC_MADDR6) Monitor Address High/Low Port 6 Register Offset */
#define MPDDRC_MINFO0_REG_OFST         _UINT32_(0x84)      /* (MPDDRC_MINFO0) Monitor Information Port 0 Register Offset */
#define MPDDRC_MINFO1_REG_OFST         _UINT32_(0x88)      /* (MPDDRC_MINFO1) Monitor Information Port 1 Register Offset */
#define MPDDRC_MINFO2_REG_OFST         _UINT32_(0x8C)      /* (MPDDRC_MINFO2) Monitor Information Port 2 Register Offset */
#define MPDDRC_MINFO3_REG_OFST         _UINT32_(0x90)      /* (MPDDRC_MINFO3) Monitor Information Port 3 Register Offset */
#define MPDDRC_MINFO4_REG_OFST         _UINT32_(0x94)      /* (MPDDRC_MINFO4) Monitor Information Port 4 Register Offset */
#define MPDDRC_MINFO5_REG_OFST         _UINT32_(0x98)      /* (MPDDRC_MINFO5) Monitor Information Port 5 Register Offset */
#define MPDDRC_MINFO6_REG_OFST         _UINT32_(0x9C)      /* (MPDDRC_MINFO6) Monitor Information Port 6 Register Offset */
#define MPDDRC_IER_REG_OFST            _UINT32_(0xC0)      /* (MPDDRC_IER) Interrupt Enable Register Offset */
#define MPDDRC_IDR_REG_OFST            _UINT32_(0xC4)      /* (MPDDRC_IDR) Interrupt Disable Register Offset */
#define MPDDRC_IMR_REG_OFST            _UINT32_(0xC8)      /* (MPDDRC_IMR) Interrupt Mask Register Offset */
#define MPDDRC_ISR_REG_OFST            _UINT32_(0xCC)      /* (MPDDRC_ISR) Interrupt Status Register Offset */
#define MPDDRC_SAFETY_REG_OFST         _UINT32_(0xD0)      /* (MPDDRC_SAFETY) Safety Register Offset */
#define MPDDRC_WPMR_REG_OFST           _UINT32_(0xE4)      /* (MPDDRC_WPMR) Write Protection Mode Register Offset */
#define MPDDRC_WPSR_REG_OFST           _UINT32_(0xE8)      /* (MPDDRC_WPSR) Write Protection Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* MPDDRC register API structure */
typedef struct
{  /* DDR-SDRAM Controller */
  __IO  uint32_t                       MPDDRC_MR;          /* Offset: 0x00 (R/W  32) Mode Register */
  __IO  uint32_t                       MPDDRC_RTR;         /* Offset: 0x04 (R/W  32) Refresh Timer Register */
  __IO  uint32_t                       MPDDRC_CR;          /* Offset: 0x08 (R/W  32) Configuration Register */
  __IO  uint32_t                       MPDDRC_TPR0;        /* Offset: 0x0C (R/W  32) Timing Parameter 0 Register */
  __IO  uint32_t                       MPDDRC_TPR1;        /* Offset: 0x10 (R/W  32) Timing Parameter 1 Register */
  __IO  uint32_t                       MPDDRC_TPR2;        /* Offset: 0x14 (R/W  32) Timing Parameter 2 Register */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       MPDDRC_LPR;         /* Offset: 0x1C (R/W  32) Low-Power Register */
  __IO  uint32_t                       MPDDRC_MD;          /* Offset: 0x20 (R/W  32) Memory Device Register */
  __I   uint8_t                        Reserved2[0x08];
  __IO  uint32_t                       MPDDRC_DDR3_CAL;    /* Offset: 0x2C (R/W  32) DDR3 Calibration Register */
  __IO  uint32_t                       MPDDRC_DDR3_TIM_CAL; /* Offset: 0x30 (R/W  32) DDR3 Timing Calibration Register */
  __IO  uint32_t                       MPDDRC_IO_CALIBR;   /* Offset: 0x34 (R/W  32) I/O Calibration Register */
  __IO  uint32_t                       MPDDRC_OCMS;        /* Offset: 0x38 (R/W  32) OCMS Register */
  __O   uint32_t                       MPDDRC_OCMS_KEY1;   /* Offset: 0x3C ( /W  32) OCMS KEY1 Register */
  __O   uint32_t                       MPDDRC_OCMS_KEY2;   /* Offset: 0x40 ( /W  32) OCMS KEY2 Register */
  __IO  uint32_t                       MPDDRC_CONF_ARBITER; /* Offset: 0x44 (R/W  32) Configuration Arbiter Register */
  __IO  uint32_t                       MPDDRC_TIMEOUT;     /* Offset: 0x48 (R/W  32) Timeout Register */
  __IO  uint32_t                       MPDDRC_REQ_PORT_0123; /* Offset: 0x4C (R/W  32) Request Port 0-1-2-3 Register */
  __IO  uint32_t                       MPDDRC_REQ_PORT_456; /* Offset: 0x50 (R/W  32) Request Port 4-5-6 Register */
  __I   uint32_t                       MPDDRC_BDW_PORT_0123; /* Offset: 0x54 (R/   32) Current/Maximum Bandwidth Port 0-1-2-3 Register */
  __I   uint32_t                       MPDDRC_BDW_PORT_456; /* Offset: 0x58 (R/   32) Current/Maximum Bandwidth Port 4-5-6 Register */
  __IO  uint32_t                       MPDDRC_RD_DATA_PATH; /* Offset: 0x5C (R/W  32) Read Data Path Register */
  __IO  uint32_t                       MPDDRC_MCFGR;       /* Offset: 0x60 (R/W  32) Monitor Configuration Register */
  __IO  uint32_t                       MPDDRC_MADDR0;      /* Offset: 0x64 (R/W  32) Monitor Address High/Low Port 0 Register */
  __IO  uint32_t                       MPDDRC_MADDR1;      /* Offset: 0x68 (R/W  32) Monitor Address High/Low Port 1 Register */
  __IO  uint32_t                       MPDDRC_MADDR2;      /* Offset: 0x6C (R/W  32) Monitor Address High/Low Port 2 Register */
  __IO  uint32_t                       MPDDRC_MADDR3;      /* Offset: 0x70 (R/W  32) Monitor Address High/Low Port 3 Register */
  __IO  uint32_t                       MPDDRC_MADDR4;      /* Offset: 0x74 (R/W  32) Monitor Address High/Low Port 4 Register */
  __IO  uint32_t                       MPDDRC_MADDR5;      /* Offset: 0x78 (R/W  32) Monitor Address High/Low Port 5 Register */
  __IO  uint32_t                       MPDDRC_MADDR6;      /* Offset: 0x7C (R/W  32) Monitor Address High/Low Port 6 Register */
  __I   uint8_t                        Reserved3[0x04];
  __I   uint32_t                       MPDDRC_MINFO0;      /* Offset: 0x84 (R/   32) Monitor Information Port 0 Register */
  __I   uint32_t                       MPDDRC_MINFO1;      /* Offset: 0x88 (R/   32) Monitor Information Port 1 Register */
  __I   uint32_t                       MPDDRC_MINFO2;      /* Offset: 0x8C (R/   32) Monitor Information Port 2 Register */
  __I   uint32_t                       MPDDRC_MINFO3;      /* Offset: 0x90 (R/   32) Monitor Information Port 3 Register */
  __I   uint32_t                       MPDDRC_MINFO4;      /* Offset: 0x94 (R/   32) Monitor Information Port 4 Register */
  __I   uint32_t                       MPDDRC_MINFO5;      /* Offset: 0x98 (R/   32) Monitor Information Port 5 Register */
  __I   uint32_t                       MPDDRC_MINFO6;      /* Offset: 0x9C (R/   32) Monitor Information Port 6 Register */
  __I   uint8_t                        Reserved4[0x20];
  __O   uint32_t                       MPDDRC_IER;         /* Offset: 0xC0 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       MPDDRC_IDR;         /* Offset: 0xC4 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       MPDDRC_IMR;         /* Offset: 0xC8 (R/   32) Interrupt Mask Register */
  __I   uint32_t                       MPDDRC_ISR;         /* Offset: 0xCC (R/   32) Interrupt Status Register */
  __IO  uint32_t                       MPDDRC_SAFETY;      /* Offset: 0xD0 (R/W  32) Safety Register */
  __I   uint8_t                        Reserved5[0x10];
  __IO  uint32_t                       MPDDRC_WPMR;        /* Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       MPDDRC_WPSR;        /* Offset: 0xE8 (R/   32) Write Protection Status Register */
} mpddrc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAM9X7_MPDDRC_COMPONENT_H_ */
