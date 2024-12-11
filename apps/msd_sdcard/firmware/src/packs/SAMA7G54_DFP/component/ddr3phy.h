/*
 * Component description for DDR3PHY
 *
 * Copyright (c) 2024 Microchip Technology Inc. and its subsidiaries.
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

/*  file generated from device description file (ATDF) version 2024-02-20T14:30:20Z  */
#ifndef _SAMA7G5_DDR3PHY_COMPONENT_H_
#define _SAMA7G5_DDR3PHY_COMPONENT_H_

/* ************************************************************************** */
/*                    SOFTWARE API DEFINITION FOR DDR3PHY                     */
/* ************************************************************************** */

/* -------- DDR3PHY_PIR : (DDR3PHY Offset: 0x04) (R/W 32) PHY Initialization Register -------- */
#define DDR3PHY_PIR_INIT_Pos                  _UINT32_(0)                                          /* (DDR3PHY_PIR) Initialization Trigger: A write of '1' to this bit triggers the DDR system initialization, including PHY initialization, DRAM initialization, and PHY training. The exact initialization steps to be executes are specified in bits 1 to 6 of this register. A bit setting of 1 means the step will be executed as part of the initialization sequence, while a setting of '0' means the step will be bypassed. The initialization trigger bit is self-clearing. Position */
#define DDR3PHY_PIR_INIT_Msk                  (_UINT32_(0x1) << DDR3PHY_PIR_INIT_Pos)              /* (DDR3PHY_PIR) Initialization Trigger: A write of '1' to this bit triggers the DDR system initialization, including PHY initialization, DRAM initialization, and PHY training. The exact initialization steps to be executes are specified in bits 1 to 6 of this register. A bit setting of 1 means the step will be executed as part of the initialization sequence, while a setting of '0' means the step will be bypassed. The initialization trigger bit is self-clearing. Mask */
#define DDR3PHY_PIR_INIT(value)               (DDR3PHY_PIR_INIT_Msk & (_UINT32_(value) << DDR3PHY_PIR_INIT_Pos)) /* Assignment of value for INIT in the DDR3PHY_PIR register */
#define DDR3PHY_PIR_DLLSRST_Pos               _UINT32_(1)                                          /* (DDR3PHY_PIR) DLL Soft Rest: Soft resets all PHY DLLs by driving the DLL soft reset pin. Position */
#define DDR3PHY_PIR_DLLSRST_Msk               (_UINT32_(0x1) << DDR3PHY_PIR_DLLSRST_Pos)           /* (DDR3PHY_PIR) DLL Soft Rest: Soft resets all PHY DLLs by driving the DLL soft reset pin. Mask */
#define DDR3PHY_PIR_DLLSRST(value)            (DDR3PHY_PIR_DLLSRST_Msk & (_UINT32_(value) << DDR3PHY_PIR_DLLSRST_Pos)) /* Assignment of value for DLLSRST in the DDR3PHY_PIR register */
#define DDR3PHY_PIR_DLLLOCK_Pos               _UINT32_(2)                                          /* (DDR3PHY_PIR) DLL Lock: Waits for the PHY DLLs to lock. Position */
#define DDR3PHY_PIR_DLLLOCK_Msk               (_UINT32_(0x1) << DDR3PHY_PIR_DLLLOCK_Pos)           /* (DDR3PHY_PIR) DLL Lock: Waits for the PHY DLLs to lock. Mask */
#define DDR3PHY_PIR_DLLLOCK(value)            (DDR3PHY_PIR_DLLLOCK_Msk & (_UINT32_(value) << DDR3PHY_PIR_DLLLOCK_Pos)) /* Assignment of value for DLLLOCK in the DDR3PHY_PIR register */
#define DDR3PHY_PIR_ZCAL_Pos                  _UINT32_(3)                                          /* (DDR3PHY_PIR) Impedance Calibrate: Performs PHY impedance calibration. Position */
#define DDR3PHY_PIR_ZCAL_Msk                  (_UINT32_(0x1) << DDR3PHY_PIR_ZCAL_Pos)              /* (DDR3PHY_PIR) Impedance Calibrate: Performs PHY impedance calibration. Mask */
#define DDR3PHY_PIR_ZCAL(value)               (DDR3PHY_PIR_ZCAL_Msk & (_UINT32_(value) << DDR3PHY_PIR_ZCAL_Pos)) /* Assignment of value for ZCAL in the DDR3PHY_PIR register */
#define DDR3PHY_PIR_ITMSRST_Pos               _UINT32_(4)                                          /* (DDR3PHY_PIR) Interface Timing Module Soft Reset: Soft resets the interface timing modules for the data and data strobes, i.e., it asserts the ITM soft reset (srstb) signal. Position */
#define DDR3PHY_PIR_ITMSRST_Msk               (_UINT32_(0x1) << DDR3PHY_PIR_ITMSRST_Pos)           /* (DDR3PHY_PIR) Interface Timing Module Soft Reset: Soft resets the interface timing modules for the data and data strobes, i.e., it asserts the ITM soft reset (srstb) signal. Mask */
#define DDR3PHY_PIR_ITMSRST(value)            (DDR3PHY_PIR_ITMSRST_Msk & (_UINT32_(value) << DDR3PHY_PIR_ITMSRST_Pos)) /* Assignment of value for ITMSRST in the DDR3PHY_PIR register */
#define DDR3PHY_PIR_DRAMRST_Pos               _UINT32_(5)                                          /* (DDR3PHY_PIR) DRAM Reset (DDR3 Only): Issues a reset to the DRAM (by driving the DRAM reset pin low) and wait 200us. This can be triggered in isolation or with the full DRAM initialization (DRAMINIT). For the latter case, the reset is issued and 200us is waited before starting the full initialization sequence. Position */
#define DDR3PHY_PIR_DRAMRST_Msk               (_UINT32_(0x1) << DDR3PHY_PIR_DRAMRST_Pos)           /* (DDR3PHY_PIR) DRAM Reset (DDR3 Only): Issues a reset to the DRAM (by driving the DRAM reset pin low) and wait 200us. This can be triggered in isolation or with the full DRAM initialization (DRAMINIT). For the latter case, the reset is issued and 200us is waited before starting the full initialization sequence. Mask */
#define DDR3PHY_PIR_DRAMRST(value)            (DDR3PHY_PIR_DRAMRST_Msk & (_UINT32_(value) << DDR3PHY_PIR_DRAMRST_Pos)) /* Assignment of value for DRAMRST in the DDR3PHY_PIR register */
#define DDR3PHY_PIR_DRAMINIT_Pos              _UINT32_(6)                                          /* (DDR3PHY_PIR) DRAM Initialization: Executes the DRAM initialization sequence. Position */
#define DDR3PHY_PIR_DRAMINIT_Msk              (_UINT32_(0x1) << DDR3PHY_PIR_DRAMINIT_Pos)          /* (DDR3PHY_PIR) DRAM Initialization: Executes the DRAM initialization sequence. Mask */
#define DDR3PHY_PIR_DRAMINIT(value)           (DDR3PHY_PIR_DRAMINIT_Msk & (_UINT32_(value) << DDR3PHY_PIR_DRAMINIT_Pos)) /* Assignment of value for DRAMINIT in the DDR3PHY_PIR register */
#define DDR3PHY_PIR_QSTRN_Pos                 _UINT32_(7)                                          /* (DDR3PHY_PIR) Read DQS Training: Executes a PUBL training routine to determine the optimum position of the read data DQS strobe for maximum system timing margins. Position */
#define DDR3PHY_PIR_QSTRN_Msk                 (_UINT32_(0x1) << DDR3PHY_PIR_QSTRN_Pos)             /* (DDR3PHY_PIR) Read DQS Training: Executes a PUBL training routine to determine the optimum position of the read data DQS strobe for maximum system timing margins. Mask */
#define DDR3PHY_PIR_QSTRN(value)              (DDR3PHY_PIR_QSTRN_Msk & (_UINT32_(value) << DDR3PHY_PIR_QSTRN_Pos)) /* Assignment of value for QSTRN in the DDR3PHY_PIR register */
#define DDR3PHY_PIR_RVTRN_Pos                 _UINT32_(8)                                          /* (DDR3PHY_PIR) Read DQS gate training (QSTRN) and RV training (RVTRN) should normally be run together. It is expected RVTRN is normally be set whenever PIR.QSTRN is set. Position */
#define DDR3PHY_PIR_RVTRN_Msk                 (_UINT32_(0x1) << DDR3PHY_PIR_RVTRN_Pos)             /* (DDR3PHY_PIR) Read DQS gate training (QSTRN) and RV training (RVTRN) should normally be run together. It is expected RVTRN is normally be set whenever PIR.QSTRN is set. Mask */
#define DDR3PHY_PIR_RVTRN(value)              (DDR3PHY_PIR_RVTRN_Msk & (_UINT32_(value) << DDR3PHY_PIR_RVTRN_Pos)) /* Assignment of value for RVTRN in the DDR3PHY_PIR register */
#define DDR3PHY_PIR_ICPC_Pos                  _UINT32_(16)                                         /* (DDR3PHY_PIR) Initialization Complete Pin Configuration: Specifies how the DFI 2.1 initialization complete output pin should be used to indicate the status of initialization. Position */
#define DDR3PHY_PIR_ICPC_Msk                  (_UINT32_(0x1) << DDR3PHY_PIR_ICPC_Pos)              /* (DDR3PHY_PIR) Initialization Complete Pin Configuration: Specifies how the DFI 2.1 initialization complete output pin should be used to indicate the status of initialization. Mask */
#define DDR3PHY_PIR_ICPC(value)               (DDR3PHY_PIR_ICPC_Msk & (_UINT32_(value) << DDR3PHY_PIR_ICPC_Pos)) /* Assignment of value for ICPC in the DDR3PHY_PIR register */
#define DDR3PHY_PIR_DLLBYP_Pos                _UINT32_(17)                                         /* (DDR3PHY_PIR) DLL Bypass: A setting of 1 on this bit will put all PHY DLLs in bypass mode. A bypassed DLL is also powered down (disabled). Position */
#define DDR3PHY_PIR_DLLBYP_Msk                (_UINT32_(0x1) << DDR3PHY_PIR_DLLBYP_Pos)            /* (DDR3PHY_PIR) DLL Bypass: A setting of 1 on this bit will put all PHY DLLs in bypass mode. A bypassed DLL is also powered down (disabled). Mask */
#define DDR3PHY_PIR_DLLBYP(value)             (DDR3PHY_PIR_DLLBYP_Msk & (_UINT32_(value) << DDR3PHY_PIR_DLLBYP_Pos)) /* Assignment of value for DLLBYP in the DDR3PHY_PIR register */
#define DDR3PHY_PIR_CTLDINIT_Pos              _UINT32_(18)                                         /* (DDR3PHY_PIR) Controller DRAM Initialization: Indicates if set that DRAM initialization will be performed by the controller. Otherwise if not set it indicates that DRAM initialization will be performed using the built-in initialization sequence or using software through the configuration port. Position */
#define DDR3PHY_PIR_CTLDINIT_Msk              (_UINT32_(0x1) << DDR3PHY_PIR_CTLDINIT_Pos)          /* (DDR3PHY_PIR) Controller DRAM Initialization: Indicates if set that DRAM initialization will be performed by the controller. Otherwise if not set it indicates that DRAM initialization will be performed using the built-in initialization sequence or using software through the configuration port. Mask */
#define DDR3PHY_PIR_CTLDINIT(value)           (DDR3PHY_PIR_CTLDINIT_Msk & (_UINT32_(value) << DDR3PHY_PIR_CTLDINIT_Pos)) /* Assignment of value for CTLDINIT in the DDR3PHY_PIR register */
#define DDR3PHY_PIR_CLRSR_Pos                 _UINT32_(28)                                         /* (DDR3PHY_PIR) Clear Status Registers Position */
#define DDR3PHY_PIR_CLRSR_Msk                 (_UINT32_(0x1) << DDR3PHY_PIR_CLRSR_Pos)             /* (DDR3PHY_PIR) Clear Status Registers Mask */
#define DDR3PHY_PIR_CLRSR(value)              (DDR3PHY_PIR_CLRSR_Msk & (_UINT32_(value) << DDR3PHY_PIR_CLRSR_Pos)) /* Assignment of value for CLRSR in the DDR3PHY_PIR register */
#define DDR3PHY_PIR_LOCKBYP_Pos               _UINT32_(29)                                         /* (DDR3PHY_PIR) DLL Lock Bypass: Bypasses or stops, if set, the waiting of DLLs to lock. DLL lock wait is automatically triggers after reset. DLL lock wait may be triggered manually using INIT and DLLLOCK bits of the PIR register. This bit is self-clearing. Position */
#define DDR3PHY_PIR_LOCKBYP_Msk               (_UINT32_(0x1) << DDR3PHY_PIR_LOCKBYP_Pos)           /* (DDR3PHY_PIR) DLL Lock Bypass: Bypasses or stops, if set, the waiting of DLLs to lock. DLL lock wait is automatically triggers after reset. DLL lock wait may be triggered manually using INIT and DLLLOCK bits of the PIR register. This bit is self-clearing. Mask */
#define DDR3PHY_PIR_LOCKBYP(value)            (DDR3PHY_PIR_LOCKBYP_Msk & (_UINT32_(value) << DDR3PHY_PIR_LOCKBYP_Pos)) /* Assignment of value for LOCKBYP in the DDR3PHY_PIR register */
#define DDR3PHY_PIR_ZCALBYP_Pos               _UINT32_(30)                                         /* (DDR3PHY_PIR) Impedance Calibration Bypass: Bypasses or stops, if set, impedance calibration of all ZQ control blocks that automatically triggers after reset. Impedance calibration may be triggered manually using INIT and ZCAL bits of the PIR register. This bit is self-clearing. Position */
#define DDR3PHY_PIR_ZCALBYP_Msk               (_UINT32_(0x1) << DDR3PHY_PIR_ZCALBYP_Pos)           /* (DDR3PHY_PIR) Impedance Calibration Bypass: Bypasses or stops, if set, impedance calibration of all ZQ control blocks that automatically triggers after reset. Impedance calibration may be triggered manually using INIT and ZCAL bits of the PIR register. This bit is self-clearing. Mask */
#define DDR3PHY_PIR_ZCALBYP(value)            (DDR3PHY_PIR_ZCALBYP_Msk & (_UINT32_(value) << DDR3PHY_PIR_ZCALBYP_Pos)) /* Assignment of value for ZCALBYP in the DDR3PHY_PIR register */
#define DDR3PHY_PIR_INITBYP_Pos               _UINT32_(31)                                         /* (DDR3PHY_PIR) Initialization Bypass: Bypasses or stops, if set, all initialization routines currently running, including PHY initialization, DRAM initialization, and PHY training. Position */
#define DDR3PHY_PIR_INITBYP_Msk               (_UINT32_(0x1) << DDR3PHY_PIR_INITBYP_Pos)           /* (DDR3PHY_PIR) Initialization Bypass: Bypasses or stops, if set, all initialization routines currently running, including PHY initialization, DRAM initialization, and PHY training. Mask */
#define DDR3PHY_PIR_INITBYP(value)            (DDR3PHY_PIR_INITBYP_Msk & (_UINT32_(value) << DDR3PHY_PIR_INITBYP_Pos)) /* Assignment of value for INITBYP in the DDR3PHY_PIR register */
#define DDR3PHY_PIR_Msk                       _UINT32_(0xF00701FF)                                 /* (DDR3PHY_PIR) Register Mask  */


/* -------- DDR3PHY_PGCR : (DDR3PHY Offset: 0x08) (R/W 32) PHY General Configuration Register -------- */
#define DDR3PHY_PGCR_ITMDMD_Pos               _UINT32_(0)                                          /* (DDR3PHY_PGCR) ITM DDR Mode: Selects whether ITMS uses DQS and DQS# or it only uses DQS. Position */
#define DDR3PHY_PGCR_ITMDMD_Msk               (_UINT32_(0x1) << DDR3PHY_PGCR_ITMDMD_Pos)           /* (DDR3PHY_PGCR) ITM DDR Mode: Selects whether ITMS uses DQS and DQS# or it only uses DQS. Mask */
#define DDR3PHY_PGCR_ITMDMD(value)            (DDR3PHY_PGCR_ITMDMD_Msk & (_UINT32_(value) << DDR3PHY_PGCR_ITMDMD_Pos)) /* Assignment of value for ITMDMD in the DDR3PHY_PGCR register */
#define DDR3PHY_PGCR_DQSCFG_Pos               _UINT32_(1)                                          /* (DDR3PHY_PGCR) DQS Gating Configuration: Selects one of the two DQS gating schemes. Position */
#define DDR3PHY_PGCR_DQSCFG_Msk               (_UINT32_(0x1) << DDR3PHY_PGCR_DQSCFG_Pos)           /* (DDR3PHY_PGCR) DQS Gating Configuration: Selects one of the two DQS gating schemes. Mask */
#define DDR3PHY_PGCR_DQSCFG(value)            (DDR3PHY_PGCR_DQSCFG_Msk & (_UINT32_(value) << DDR3PHY_PGCR_DQSCFG_Pos)) /* Assignment of value for DQSCFG in the DDR3PHY_PGCR register */
#define DDR3PHY_PGCR_DFTCMP_Pos               _UINT32_(2)                                          /* (DDR3PHY_PGCR) DQS Drift Compensation: Enables or disables DQS drift compensation. Position */
#define DDR3PHY_PGCR_DFTCMP_Msk               (_UINT32_(0x1) << DDR3PHY_PGCR_DFTCMP_Pos)           /* (DDR3PHY_PGCR) DQS Drift Compensation: Enables or disables DQS drift compensation. Mask */
#define DDR3PHY_PGCR_DFTCMP(value)            (DDR3PHY_PGCR_DFTCMP_Msk & (_UINT32_(value) << DDR3PHY_PGCR_DFTCMP_Pos)) /* Assignment of value for DFTCMP in the DDR3PHY_PGCR register */
#define DDR3PHY_PGCR_DFTLMT_Pos               _UINT32_(3)                                          /* (DDR3PHY_PGCR) DQS Drift Limit: Specifies the expected limit of drift on read data strobes. A drift of this value or greater is reported as a drift error through the host port error flag. Position */
#define DDR3PHY_PGCR_DFTLMT_Msk               (_UINT32_(0x3) << DDR3PHY_PGCR_DFTLMT_Pos)           /* (DDR3PHY_PGCR) DQS Drift Limit: Specifies the expected limit of drift on read data strobes. A drift of this value or greater is reported as a drift error through the host port error flag. Mask */
#define DDR3PHY_PGCR_DFTLMT(value)            (DDR3PHY_PGCR_DFTLMT_Msk & (_UINT32_(value) << DDR3PHY_PGCR_DFTLMT_Pos)) /* Assignment of value for DFTLMT in the DDR3PHY_PGCR register */
#define DDR3PHY_PGCR_CKEN_Pos                 _UINT32_(9)                                          /* (DDR3PHY_PGCR) CK Enable: Controls whether the CK going to the SDRAM is enabled (toggling) or disabled (static value defined by CKDV). One bit for each of the three CK pairs. Position */
#define DDR3PHY_PGCR_CKEN_Msk                 (_UINT32_(0x1) << DDR3PHY_PGCR_CKEN_Pos)             /* (DDR3PHY_PGCR) CK Enable: Controls whether the CK going to the SDRAM is enabled (toggling) or disabled (static value defined by CKDV). One bit for each of the three CK pairs. Mask */
#define DDR3PHY_PGCR_CKEN(value)              (DDR3PHY_PGCR_CKEN_Msk & (_UINT32_(value) << DDR3PHY_PGCR_CKEN_Pos)) /* Assignment of value for CKEN in the DDR3PHY_PGCR register */
#define DDR3PHY_PGCR_CKDV_Pos                 _UINT32_(12)                                         /* (DDR3PHY_PGCR) CK Disable Value: Specifies the static value that should be driven on CK/CK# pair(s) when the pair(s) is disabled. CKDV[0] specifies the value for CK and CKDV[1] specifies the value for CK#. Position */
#define DDR3PHY_PGCR_CKDV_Msk                 (_UINT32_(0x3) << DDR3PHY_PGCR_CKDV_Pos)             /* (DDR3PHY_PGCR) CK Disable Value: Specifies the static value that should be driven on CK/CK# pair(s) when the pair(s) is disabled. CKDV[0] specifies the value for CK and CKDV[1] specifies the value for CK#. Mask */
#define DDR3PHY_PGCR_CKDV(value)              (DDR3PHY_PGCR_CKDV_Msk & (_UINT32_(value) << DDR3PHY_PGCR_CKDV_Pos)) /* Assignment of value for CKDV in the DDR3PHY_PGCR register */
#define DDR3PHY_PGCR_CKINV_Pos                _UINT32_(14)                                         /* (DDR3PHY_PGCR) CK Invert: Specifies if set that CK/CK# should be inverted. Otherwise CK/CK# toggles with normal polarity. Position */
#define DDR3PHY_PGCR_CKINV_Msk                (_UINT32_(0x1) << DDR3PHY_PGCR_CKINV_Pos)            /* (DDR3PHY_PGCR) CK Invert: Specifies if set that CK/CK# should be inverted. Otherwise CK/CK# toggles with normal polarity. Mask */
#define DDR3PHY_PGCR_CKINV(value)             (DDR3PHY_PGCR_CKINV_Msk & (_UINT32_(value) << DDR3PHY_PGCR_CKINV_Pos)) /* Assignment of value for CKINV in the DDR3PHY_PGCR register */
#define DDR3PHY_PGCR_IOLB_Pos                 _UINT32_(15)                                         /* (DDR3PHY_PGCR) I/O Loop-Back Select: Selects where inside the I/O the loop-back of signals happens. Not applicable to D3A I/Os. Position */
#define DDR3PHY_PGCR_IOLB_Msk                 (_UINT32_(0x1) << DDR3PHY_PGCR_IOLB_Pos)             /* (DDR3PHY_PGCR) I/O Loop-Back Select: Selects where inside the I/O the loop-back of signals happens. Not applicable to D3A I/Os. Mask */
#define DDR3PHY_PGCR_IOLB(value)              (DDR3PHY_PGCR_IOLB_Msk & (_UINT32_(value) << DDR3PHY_PGCR_IOLB_Pos)) /* Assignment of value for IOLB in the DDR3PHY_PGCR register */
#define DDR3PHY_PGCR_RANKEN_Pos               _UINT32_(18)                                         /* (DDR3PHY_PGCR) Rank Enable: Specifies the ranks that are enabled for data-training. Bit 0 controls rank 0, bit 1 controls rank 1, bit 2 controls rank 2, and bit 3 controls rank 3. Setting the bit to '1' enables the rank, and setting it to '0' disables the rank. Position */
#define DDR3PHY_PGCR_RANKEN_Msk               (_UINT32_(0x1) << DDR3PHY_PGCR_RANKEN_Pos)           /* (DDR3PHY_PGCR) Rank Enable: Specifies the ranks that are enabled for data-training. Bit 0 controls rank 0, bit 1 controls rank 1, bit 2 controls rank 2, and bit 3 controls rank 3. Setting the bit to '1' enables the rank, and setting it to '0' disables the rank. Mask */
#define DDR3PHY_PGCR_RANKEN(value)            (DDR3PHY_PGCR_RANKEN_Msk & (_UINT32_(value) << DDR3PHY_PGCR_RANKEN_Pos)) /* Assignment of value for RANKEN in the DDR3PHY_PGCR register */
#define DDR3PHY_PGCR_ZCKSEL_Pos               _UINT32_(22)                                         /* (DDR3PHY_PGCR) Impedance Clock Divider Select: Impedance Clock Divider Select: Selects the divide ratio for the clock used by the impedance control logic. The source clock for the divider is the configuration port clock signal (cfg_clk or pclk), depending on which configuration port type used (see 'Impedance Calibration' ). Position */
#define DDR3PHY_PGCR_ZCKSEL_Msk               (_UINT32_(0x3) << DDR3PHY_PGCR_ZCKSEL_Pos)           /* (DDR3PHY_PGCR) Impedance Clock Divider Select: Impedance Clock Divider Select: Selects the divide ratio for the clock used by the impedance control logic. The source clock for the divider is the configuration port clock signal (cfg_clk or pclk), depending on which configuration port type used (see 'Impedance Calibration' ). Mask */
#define DDR3PHY_PGCR_ZCKSEL(value)            (DDR3PHY_PGCR_ZCKSEL_Msk & (_UINT32_(value) << DDR3PHY_PGCR_ZCKSEL_Pos)) /* Assignment of value for ZCKSEL in the DDR3PHY_PGCR register */
#define DDR3PHY_PGCR_PDDISDX_Pos              _UINT32_(24)                                         /* (DDR3PHY_PGCR) Power Down Disabled Byte: Indicates if set that the DLL and I/Os of a disabled byte should be powered down. Position */
#define DDR3PHY_PGCR_PDDISDX_Msk              (_UINT32_(0x1) << DDR3PHY_PGCR_PDDISDX_Pos)          /* (DDR3PHY_PGCR) Power Down Disabled Byte: Indicates if set that the DLL and I/Os of a disabled byte should be powered down. Mask */
#define DDR3PHY_PGCR_PDDISDX(value)           (DDR3PHY_PGCR_PDDISDX_Msk & (_UINT32_(value) << DDR3PHY_PGCR_PDDISDX_Pos)) /* Assignment of value for PDDISDX in the DDR3PHY_PGCR register */
#define DDR3PHY_PGCR_LBDQSS_Pos               _UINT32_(29)                                         /* (DDR3PHY_PGCR) Loopback DQS Shift: Selects how the read DQS is shifted during loopback to ensure that the read DQS is centered into the read data eye. Position */
#define DDR3PHY_PGCR_LBDQSS_Msk               (_UINT32_(0x1) << DDR3PHY_PGCR_LBDQSS_Pos)           /* (DDR3PHY_PGCR) Loopback DQS Shift: Selects how the read DQS is shifted during loopback to ensure that the read DQS is centered into the read data eye. Mask */
#define DDR3PHY_PGCR_LBDQSS(value)            (DDR3PHY_PGCR_LBDQSS_Msk & (_UINT32_(value) << DDR3PHY_PGCR_LBDQSS_Pos)) /* Assignment of value for LBDQSS in the DDR3PHY_PGCR register */
#define DDR3PHY_PGCR_LBGDQS_Pos               _UINT32_(30)                                         /* (DDR3PHY_PGCR) Loopback DQS Gating: Selects the DQS gating mode that should be used when the PHY is in loopback mode, including BIST loopback mode. Position */
#define DDR3PHY_PGCR_LBGDQS_Msk               (_UINT32_(0x1) << DDR3PHY_PGCR_LBGDQS_Pos)           /* (DDR3PHY_PGCR) Loopback DQS Gating: Selects the DQS gating mode that should be used when the PHY is in loopback mode, including BIST loopback mode. Mask */
#define DDR3PHY_PGCR_LBGDQS(value)            (DDR3PHY_PGCR_LBGDQS_Msk & (_UINT32_(value) << DDR3PHY_PGCR_LBGDQS_Pos)) /* Assignment of value for LBGDQS in the DDR3PHY_PGCR register */
#define DDR3PHY_PGCR_LBMODE_Pos               _UINT32_(31)                                         /* (DDR3PHY_PGCR) Loopback Mode: Indicates if set that the PHY/PUB is in loopback mode Position */
#define DDR3PHY_PGCR_LBMODE_Msk               (_UINT32_(0x1) << DDR3PHY_PGCR_LBMODE_Pos)           /* (DDR3PHY_PGCR) Loopback Mode: Indicates if set that the PHY/PUB is in loopback mode Mask */
#define DDR3PHY_PGCR_LBMODE(value)            (DDR3PHY_PGCR_LBMODE_Msk & (_UINT32_(value) << DDR3PHY_PGCR_LBMODE_Pos)) /* Assignment of value for LBMODE in the DDR3PHY_PGCR register */
#define DDR3PHY_PGCR_Msk                      _UINT32_(0xE1C4F21F)                                 /* (DDR3PHY_PGCR) Register Mask  */


/* -------- DDR3PHY_PGSR : (DDR3PHY Offset: 0x0C) ( R/ 32) PHY General Status Register -------- */
#define DDR3PHY_PGSR_IDONE_Pos                _UINT32_(0)                                          /* (DDR3PHY_PGSR) Initialization Done: Indicates if set that the DDR system initialization has completed. This bit is set after all the selected initialization routines in PIR register have completed. Position */
#define DDR3PHY_PGSR_IDONE_Msk                (_UINT32_(0x1) << DDR3PHY_PGSR_IDONE_Pos)            /* (DDR3PHY_PGSR) Initialization Done: Indicates if set that the DDR system initialization has completed. This bit is set after all the selected initialization routines in PIR register have completed. Mask */
#define DDR3PHY_PGSR_IDONE(value)             (DDR3PHY_PGSR_IDONE_Msk & (_UINT32_(value) << DDR3PHY_PGSR_IDONE_Pos)) /* Assignment of value for IDONE in the DDR3PHY_PGSR register */
#define DDR3PHY_PGSR_DLDONE_Pos               _UINT32_(1)                                          /* (DDR3PHY_PGSR) DLL Lock Done: Indicates if set that DLL locking has completed. Position */
#define DDR3PHY_PGSR_DLDONE_Msk               (_UINT32_(0x1) << DDR3PHY_PGSR_DLDONE_Pos)           /* (DDR3PHY_PGSR) DLL Lock Done: Indicates if set that DLL locking has completed. Mask */
#define DDR3PHY_PGSR_DLDONE(value)            (DDR3PHY_PGSR_DLDONE_Msk & (_UINT32_(value) << DDR3PHY_PGSR_DLDONE_Pos)) /* Assignment of value for DLDONE in the DDR3PHY_PGSR register */
#define DDR3PHY_PGSR_ZCDONE_Pos               _UINT32_(2)                                          /* (DDR3PHY_PGSR) Impedance Calibration Done: Indicates if set that impedance calibration has completed. Position */
#define DDR3PHY_PGSR_ZCDONE_Msk               (_UINT32_(0x1) << DDR3PHY_PGSR_ZCDONE_Pos)           /* (DDR3PHY_PGSR) Impedance Calibration Done: Indicates if set that impedance calibration has completed. Mask */
#define DDR3PHY_PGSR_ZCDONE(value)            (DDR3PHY_PGSR_ZCDONE_Msk & (_UINT32_(value) << DDR3PHY_PGSR_ZCDONE_Pos)) /* Assignment of value for ZCDONE in the DDR3PHY_PGSR register */
#define DDR3PHY_PGSR_DIDONE_Pos               _UINT32_(3)                                          /* (DDR3PHY_PGSR) DRAM Initialization Done: Indicates if set that DRAM initialization has completed. Position */
#define DDR3PHY_PGSR_DIDONE_Msk               (_UINT32_(0x1) << DDR3PHY_PGSR_DIDONE_Pos)           /* (DDR3PHY_PGSR) DRAM Initialization Done: Indicates if set that DRAM initialization has completed. Mask */
#define DDR3PHY_PGSR_DIDONE(value)            (DDR3PHY_PGSR_DIDONE_Msk & (_UINT32_(value) << DDR3PHY_PGSR_DIDONE_Pos)) /* Assignment of value for DIDONE in the DDR3PHY_PGSR register */
#define DDR3PHY_PGSR_DTDONE_Pos               _UINT32_(4)                                          /* (DDR3PHY_PGSR) Data Training Done: Indicates, if set, that the PHY has finished doing data training. Position */
#define DDR3PHY_PGSR_DTDONE_Msk               (_UINT32_(0x1) << DDR3PHY_PGSR_DTDONE_Pos)           /* (DDR3PHY_PGSR) Data Training Done: Indicates, if set, that the PHY has finished doing data training. Mask */
#define DDR3PHY_PGSR_DTDONE(value)            (DDR3PHY_PGSR_DTDONE_Msk & (_UINT32_(value) << DDR3PHY_PGSR_DTDONE_Pos)) /* Assignment of value for DTDONE in the DDR3PHY_PGSR register */
#define DDR3PHY_PGSR_DTERR_Pos                _UINT32_(5)                                          /* (DDR3PHY_PGSR) DQS GateTraining Error: If set, indicates that a valid DQS gating window could not be found during DQS gate training. Position */
#define DDR3PHY_PGSR_DTERR_Msk                (_UINT32_(0x1) << DDR3PHY_PGSR_DTERR_Pos)            /* (DDR3PHY_PGSR) DQS GateTraining Error: If set, indicates that a valid DQS gating window could not be found during DQS gate training. Mask */
#define DDR3PHY_PGSR_DTERR(value)             (DDR3PHY_PGSR_DTERR_Msk & (_UINT32_(value) << DDR3PHY_PGSR_DTERR_Pos)) /* Assignment of value for DTERR in the DDR3PHY_PGSR register */
#define DDR3PHY_PGSR_DTIERR_Pos               _UINT32_(6)                                          /* (DDR3PHY_PGSR) DQS Gate Training Intermittent Error: If set, indicates that there was an intermittent error during DQS gate training, such as a pass was followed by a fail then followed by another pass. Position */
#define DDR3PHY_PGSR_DTIERR_Msk               (_UINT32_(0x1) << DDR3PHY_PGSR_DTIERR_Pos)           /* (DDR3PHY_PGSR) DQS Gate Training Intermittent Error: If set, indicates that there was an intermittent error during DQS gate training, such as a pass was followed by a fail then followed by another pass. Mask */
#define DDR3PHY_PGSR_DTIERR(value)            (DDR3PHY_PGSR_DTIERR_Msk & (_UINT32_(value) << DDR3PHY_PGSR_DTIERR_Pos)) /* Assignment of value for DTIERR in the DDR3PHY_PGSR register */
#define DDR3PHY_PGSR_DFTERR_Pos               _UINT32_(7)                                          /* (DDR3PHY_PGSR) DQS Drift Error: If set, indicates that at least one of the read data strobes has drifted by more than or equal to the drift limit set in the PHY General Configuration Register (PGCR). Position */
#define DDR3PHY_PGSR_DFTERR_Msk               (_UINT32_(0x1) << DDR3PHY_PGSR_DFTERR_Pos)           /* (DDR3PHY_PGSR) DQS Drift Error: If set, indicates that at least one of the read data strobes has drifted by more than or equal to the drift limit set in the PHY General Configuration Register (PGCR). Mask */
#define DDR3PHY_PGSR_DFTERR(value)            (DDR3PHY_PGSR_DFTERR_Msk & (_UINT32_(value) << DDR3PHY_PGSR_DFTERR_Pos)) /* Assignment of value for DFTERR in the DDR3PHY_PGSR register */
#define DDR3PHY_PGSR_RVERR_Pos                _UINT32_(8)                                          /* (DDR3PHY_PGSR) Read Valid Training Error: If set, indicates that a valid read valid placement could not be found during read valid training. Position */
#define DDR3PHY_PGSR_RVERR_Msk                (_UINT32_(0x1) << DDR3PHY_PGSR_RVERR_Pos)            /* (DDR3PHY_PGSR) Read Valid Training Error: If set, indicates that a valid read valid placement could not be found during read valid training. Mask */
#define DDR3PHY_PGSR_RVERR(value)             (DDR3PHY_PGSR_RVERR_Msk & (_UINT32_(value) << DDR3PHY_PGSR_RVERR_Pos)) /* Assignment of value for RVERR in the DDR3PHY_PGSR register */
#define DDR3PHY_PGSR_RVEIRR_Pos               _UINT32_(9)                                          /* (DDR3PHY_PGSR) Read Valid Training Intermittent Error: If set, indicates that there was an intermittent error during read valid training, such as a pass was followed by a fail then followed by another pass. Position */
#define DDR3PHY_PGSR_RVEIRR_Msk               (_UINT32_(0x1) << DDR3PHY_PGSR_RVEIRR_Pos)           /* (DDR3PHY_PGSR) Read Valid Training Intermittent Error: If set, indicates that there was an intermittent error during read valid training, such as a pass was followed by a fail then followed by another pass. Mask */
#define DDR3PHY_PGSR_RVEIRR(value)            (DDR3PHY_PGSR_RVEIRR_Msk & (_UINT32_(value) << DDR3PHY_PGSR_RVEIRR_Pos)) /* Assignment of value for RVEIRR in the DDR3PHY_PGSR register */
#define DDR3PHY_PGSR_Msk                      _UINT32_(0x000003FF)                                 /* (DDR3PHY_PGSR) Register Mask  */


/* -------- DDR3PHY_DLLGCR : (DDR3PHY Offset: 0x10) (R/W 32) DLL General Control Register -------- */
#define DDR3PHY_DLLGCR_BPS200_Pos             _UINT32_(23)                                         /* (DDR3PHY_DLLGCR) Bypass Mode Frequency Range Position */
#define DDR3PHY_DLLGCR_BPS200_Msk             (_UINT32_(0x1) << DDR3PHY_DLLGCR_BPS200_Pos)         /* (DDR3PHY_DLLGCR) Bypass Mode Frequency Range Mask */
#define DDR3PHY_DLLGCR_BPS200(value)          (DDR3PHY_DLLGCR_BPS200_Msk & (_UINT32_(value) << DDR3PHY_DLLGCR_BPS200_Pos)) /* Assignment of value for BPS200 in the DDR3PHY_DLLGCR register */
#define DDR3PHY_DLLGCR_Msk                    _UINT32_(0x00800000)                                 /* (DDR3PHY_DLLGCR) Register Mask  */

#define DDR3PHY_DLLGCR_BPS_Pos                _UINT32_(23)                                         /* (DDR3PHY_DLLGCR Position) Bypass Mode Frequency Range */
#define DDR3PHY_DLLGCR_BPS_Msk                (_UINT32_(0x1) << DDR3PHY_DLLGCR_BPS_Pos)            /* (DDR3PHY_DLLGCR Mask) BPS */
#define DDR3PHY_DLLGCR_BPS(value)             (DDR3PHY_DLLGCR_BPS_Msk & (_UINT32_(value) << DDR3PHY_DLLGCR_BPS_Pos)) 

/* -------- DDR3PHY_ACDLLCR : (DDR3PHY Offset: 0x14) (R/W 32) AC DLL Control Register -------- */
#define DDR3PHY_ACDLLCR_MFBDLY_Pos            _UINT32_(6)                                          /* (DDR3PHY_ACDLLCR) Master Feed-Back Delay Trim: Used to trim the delay in the master DLL feedback path. Position */
#define DDR3PHY_ACDLLCR_MFBDLY_Msk            (_UINT32_(0x7) << DDR3PHY_ACDLLCR_MFBDLY_Pos)        /* (DDR3PHY_ACDLLCR) Master Feed-Back Delay Trim: Used to trim the delay in the master DLL feedback path. Mask */
#define DDR3PHY_ACDLLCR_MFBDLY(value)         (DDR3PHY_ACDLLCR_MFBDLY_Msk & (_UINT32_(value) << DDR3PHY_ACDLLCR_MFBDLY_Pos)) /* Assignment of value for MFBDLY in the DDR3PHY_ACDLLCR register */
#define DDR3PHY_ACDLLCR_MFWDLY_Pos            _UINT32_(9)                                          /* (DDR3PHY_ACDLLCR) Master Feed-Forward Delay Trim: Used to trim the delay in the master DLL feedforward path. Position */
#define DDR3PHY_ACDLLCR_MFWDLY_Msk            (_UINT32_(0x7) << DDR3PHY_ACDLLCR_MFWDLY_Pos)        /* (DDR3PHY_ACDLLCR) Master Feed-Forward Delay Trim: Used to trim the delay in the master DLL feedforward path. Mask */
#define DDR3PHY_ACDLLCR_MFWDLY(value)         (DDR3PHY_ACDLLCR_MFWDLY_Msk & (_UINT32_(value) << DDR3PHY_ACDLLCR_MFWDLY_Pos)) /* Assignment of value for MFWDLY in the DDR3PHY_ACDLLCR register */
#define DDR3PHY_ACDLLCR_ATESTEN_Pos           _UINT32_(18)                                         /* (DDR3PHY_ACDLLCR) Analog Test Enable: Enables the analog test signal to be output on the DLL analog test output (test_out_a). The DLL analog test output is tri-stated when this bit is '0'. Position */
#define DDR3PHY_ACDLLCR_ATESTEN_Msk           (_UINT32_(0x1) << DDR3PHY_ACDLLCR_ATESTEN_Pos)       /* (DDR3PHY_ACDLLCR) Analog Test Enable: Enables the analog test signal to be output on the DLL analog test output (test_out_a). The DLL analog test output is tri-stated when this bit is '0'. Mask */
#define DDR3PHY_ACDLLCR_ATESTEN(value)        (DDR3PHY_ACDLLCR_ATESTEN_Msk & (_UINT32_(value) << DDR3PHY_ACDLLCR_ATESTEN_Pos)) /* Assignment of value for ATESTEN in the DDR3PHY_ACDLLCR register */
#define DDR3PHY_ACDLLCR_DLLSRST_Pos           _UINT32_(30)                                         /* (DDR3PHY_ACDLLCR) DLL Soft Rest: Soft resets the AC DLL by driving the DLL soft reset pin. Position */
#define DDR3PHY_ACDLLCR_DLLSRST_Msk           (_UINT32_(0x1) << DDR3PHY_ACDLLCR_DLLSRST_Pos)       /* (DDR3PHY_ACDLLCR) DLL Soft Rest: Soft resets the AC DLL by driving the DLL soft reset pin. Mask */
#define DDR3PHY_ACDLLCR_DLLSRST(value)        (DDR3PHY_ACDLLCR_DLLSRST_Msk & (_UINT32_(value) << DDR3PHY_ACDLLCR_DLLSRST_Pos)) /* Assignment of value for DLLSRST in the DDR3PHY_ACDLLCR register */
#define DDR3PHY_ACDLLCR_DLLDIS_Pos            _UINT32_(31)                                         /* (DDR3PHY_ACDLLCR) DLL Disable: A disabled DLL is bypassed. Default ('0') is DLL enabled. Position */
#define DDR3PHY_ACDLLCR_DLLDIS_Msk            (_UINT32_(0x1) << DDR3PHY_ACDLLCR_DLLDIS_Pos)        /* (DDR3PHY_ACDLLCR) DLL Disable: A disabled DLL is bypassed. Default ('0') is DLL enabled. Mask */
#define DDR3PHY_ACDLLCR_DLLDIS(value)         (DDR3PHY_ACDLLCR_DLLDIS_Msk & (_UINT32_(value) << DDR3PHY_ACDLLCR_DLLDIS_Pos)) /* Assignment of value for DLLDIS in the DDR3PHY_ACDLLCR register */
#define DDR3PHY_ACDLLCR_Msk                   _UINT32_(0xC0040FC0)                                 /* (DDR3PHY_ACDLLCR) Register Mask  */


/* -------- DDR3PHY_PTR0 : (DDR3PHY Offset: 0x18) (R/W 32) PHY Timing Register 0 -------- */
#define DDR3PHY_PTR0_TDLLSRST_Pos             _UINT32_(0)                                          /* (DDR3PHY_PTR0) DLL Soft Reset Time: Number of configuration clock cycles that the DLL soft reset pin must remain asserted when the soft reset is triggered through the PHY Position */
#define DDR3PHY_PTR0_TDLLSRST_Msk             (_UINT32_(0x3F) << DDR3PHY_PTR0_TDLLSRST_Pos)        /* (DDR3PHY_PTR0) DLL Soft Reset Time: Number of configuration clock cycles that the DLL soft reset pin must remain asserted when the soft reset is triggered through the PHY Mask */
#define DDR3PHY_PTR0_TDLLSRST(value)          (DDR3PHY_PTR0_TDLLSRST_Msk & (_UINT32_(value) << DDR3PHY_PTR0_TDLLSRST_Pos)) /* Assignment of value for TDLLSRST in the DDR3PHY_PTR0 register */
#define DDR3PHY_PTR0_TDLLLOCK_Pos             _UINT32_(6)                                          /* (DDR3PHY_PTR0) DLL Lock Time: Number of configuration clock cycles for the DLL to stabilize and lock, i.e. number of clock cycles from when the DLL reset pin is de-asserted to when the DLL has locked and is ready for use. Refer to the PHY databook for the DLL lock time. Default value corresponds to 5.12us at 533MHz. Position */
#define DDR3PHY_PTR0_TDLLLOCK_Msk             (_UINT32_(0xFFF) << DDR3PHY_PTR0_TDLLLOCK_Pos)       /* (DDR3PHY_PTR0) DLL Lock Time: Number of configuration clock cycles for the DLL to stabilize and lock, i.e. number of clock cycles from when the DLL reset pin is de-asserted to when the DLL has locked and is ready for use. Refer to the PHY databook for the DLL lock time. Default value corresponds to 5.12us at 533MHz. Mask */
#define DDR3PHY_PTR0_TDLLLOCK(value)          (DDR3PHY_PTR0_TDLLLOCK_Msk & (_UINT32_(value) << DDR3PHY_PTR0_TDLLLOCK_Pos)) /* Assignment of value for TDLLLOCK in the DDR3PHY_PTR0 register */
#define DDR3PHY_PTR0_TITMSRST_Pos             _UINT32_(18)                                         /* (DDR3PHY_PTR0) ITM Soft Reset Time: Number of configuration clock cycles that the ITM soft reset pin must remain asserted when the soft reset is applied to the ITMs. This must correspond to a value that is equal to or more than 8 controller clock cycles. Default value corresponds to 8 controller clock cycles. Position */
#define DDR3PHY_PTR0_TITMSRST_Msk             (_UINT32_(0xF) << DDR3PHY_PTR0_TITMSRST_Pos)         /* (DDR3PHY_PTR0) ITM Soft Reset Time: Number of configuration clock cycles that the ITM soft reset pin must remain asserted when the soft reset is applied to the ITMs. This must correspond to a value that is equal to or more than 8 controller clock cycles. Default value corresponds to 8 controller clock cycles. Mask */
#define DDR3PHY_PTR0_TITMSRST(value)          (DDR3PHY_PTR0_TITMSRST_Msk & (_UINT32_(value) << DDR3PHY_PTR0_TITMSRST_Pos)) /* Assignment of value for TITMSRST in the DDR3PHY_PTR0 register */
#define DDR3PHY_PTR0_Msk                      _UINT32_(0x003FFFFF)                                 /* (DDR3PHY_PTR0) Register Mask  */


/* -------- DDR3PHY_PTR1 : (DDR3PHY Offset: 0x1C) (R/W 32) PHY Timing Register 1 -------- */
#define DDR3PHY_PTR1_TDINIT0_Pos              _UINT32_(0)                                          /* (DDR3PHY_PTR1) DRAM Initialization Time 0. Position */
#define DDR3PHY_PTR1_TDINIT0_Msk              (_UINT32_(0x7FFFF) << DDR3PHY_PTR1_TDINIT0_Pos)      /* (DDR3PHY_PTR1) DRAM Initialization Time 0. Mask */
#define DDR3PHY_PTR1_TDINIT0(value)           (DDR3PHY_PTR1_TDINIT0_Msk & (_UINT32_(value) << DDR3PHY_PTR1_TDINIT0_Pos)) /* Assignment of value for TDINIT0 in the DDR3PHY_PTR1 register */
#define DDR3PHY_PTR1_TDINIT1_Pos              _UINT32_(19)                                         /* (DDR3PHY_PTR1) DRAM Initialization Time 1. Position */
#define DDR3PHY_PTR1_TDINIT1_Msk              (_UINT32_(0xFF) << DDR3PHY_PTR1_TDINIT1_Pos)         /* (DDR3PHY_PTR1) DRAM Initialization Time 1. Mask */
#define DDR3PHY_PTR1_TDINIT1(value)           (DDR3PHY_PTR1_TDINIT1_Msk & (_UINT32_(value) << DDR3PHY_PTR1_TDINIT1_Pos)) /* Assignment of value for TDINIT1 in the DDR3PHY_PTR1 register */
#define DDR3PHY_PTR1_Msk                      _UINT32_(0x07FFFFFF)                                 /* (DDR3PHY_PTR1) Register Mask  */


/* -------- DDR3PHY_PTR2 : (DDR3PHY Offset: 0x20) (R/W 32) PHY Timing Register 2 -------- */
#define DDR3PHY_PTR2_TDINIT2_Pos              _UINT32_(0)                                          /* (DDR3PHY_PTR2) DRAM Initialization Time 2. Position */
#define DDR3PHY_PTR2_TDINIT2_Msk              (_UINT32_(0x1FFFF) << DDR3PHY_PTR2_TDINIT2_Pos)      /* (DDR3PHY_PTR2) DRAM Initialization Time 2. Mask */
#define DDR3PHY_PTR2_TDINIT2(value)           (DDR3PHY_PTR2_TDINIT2_Msk & (_UINT32_(value) << DDR3PHY_PTR2_TDINIT2_Pos)) /* Assignment of value for TDINIT2 in the DDR3PHY_PTR2 register */
#define DDR3PHY_PTR2_TDINIT3_Pos              _UINT32_(17)                                         /* (DDR3PHY_PTR2) DRAM Initialization Time 3. Position */
#define DDR3PHY_PTR2_TDINIT3_Msk              (_UINT32_(0x3FF) << DDR3PHY_PTR2_TDINIT3_Pos)        /* (DDR3PHY_PTR2) DRAM Initialization Time 3. Mask */
#define DDR3PHY_PTR2_TDINIT3(value)           (DDR3PHY_PTR2_TDINIT3_Msk & (_UINT32_(value) << DDR3PHY_PTR2_TDINIT3_Pos)) /* Assignment of value for TDINIT3 in the DDR3PHY_PTR2 register */
#define DDR3PHY_PTR2_Msk                      _UINT32_(0x07FFFFFF)                                 /* (DDR3PHY_PTR2) Register Mask  */


/* -------- DDR3PHY_ACIOCR : (DDR3PHY Offset: 0x24) (R/W 32) AC I/O Configuration Register -------- */
#define DDR3PHY_ACIOCR_ACIOM_Pos              _UINT32_(0)                                          /* (DDR3PHY_ACIOCR) Address/Command I/O Mode: Selects SSTL mode (when set to 0) or CMOS mode (when set to 1) of the I/O for all address and command pins, as well as the optional DIMM PAR_IN pin and LPDDR TPD pin. Position */
#define DDR3PHY_ACIOCR_ACIOM_Msk              (_UINT32_(0x1) << DDR3PHY_ACIOCR_ACIOM_Pos)          /* (DDR3PHY_ACIOCR) Address/Command I/O Mode: Selects SSTL mode (when set to 0) or CMOS mode (when set to 1) of the I/O for all address and command pins, as well as the optional DIMM PAR_IN pin and LPDDR TPD pin. Mask */
#define DDR3PHY_ACIOCR_ACIOM(value)           (DDR3PHY_ACIOCR_ACIOM_Msk & (_UINT32_(value) << DDR3PHY_ACIOCR_ACIOM_Pos)) /* Assignment of value for ACIOM in the DDR3PHY_ACIOCR register */
#define DDR3PHY_ACIOCR_ACOE_Pos               _UINT32_(1)                                          /* (DDR3PHY_ACIOCR) Address/Command Output Enable: Enables, when set, the output driver on the I/O for all address and command pins, as well as the optional DIMM PAR_IN pin and LPDDR TPD pin. Position */
#define DDR3PHY_ACIOCR_ACOE_Msk               (_UINT32_(0x1) << DDR3PHY_ACIOCR_ACOE_Pos)           /* (DDR3PHY_ACIOCR) Address/Command Output Enable: Enables, when set, the output driver on the I/O for all address and command pins, as well as the optional DIMM PAR_IN pin and LPDDR TPD pin. Mask */
#define DDR3PHY_ACIOCR_ACOE(value)            (DDR3PHY_ACIOCR_ACOE_Msk & (_UINT32_(value) << DDR3PHY_ACIOCR_ACOE_Pos)) /* Assignment of value for ACOE in the DDR3PHY_ACIOCR register */
#define DDR3PHY_ACIOCR_ACODT_Pos              _UINT32_(2)                                          /* (DDR3PHY_ACIOCR) Address/Command On-Die Termination: Enables, when set, the on-die termination on the I/O for RAS#, CAS#, WE#, BA[2:0], and A[15:0] pins, as well as the optional DIMM PAR_IN pin and LPDDR TPD pin. Position */
#define DDR3PHY_ACIOCR_ACODT_Msk              (_UINT32_(0x1) << DDR3PHY_ACIOCR_ACODT_Pos)          /* (DDR3PHY_ACIOCR) Address/Command On-Die Termination: Enables, when set, the on-die termination on the I/O for RAS#, CAS#, WE#, BA[2:0], and A[15:0] pins, as well as the optional DIMM PAR_IN pin and LPDDR TPD pin. Mask */
#define DDR3PHY_ACIOCR_ACODT(value)           (DDR3PHY_ACIOCR_ACODT_Msk & (_UINT32_(value) << DDR3PHY_ACIOCR_ACODT_Pos)) /* Assignment of value for ACODT in the DDR3PHY_ACIOCR register */
#define DDR3PHY_ACIOCR_ACPDD_Pos              _UINT32_(3)                                          /* (DDR3PHY_ACIOCR) AC Power Down Driver: Powers down, when set, the output driver on the I/O for RAS#, CAS#, WE#, BA[2:0], and A[15:0] pins, as well as the optional DIMM PAR_IN pin. Position */
#define DDR3PHY_ACIOCR_ACPDD_Msk              (_UINT32_(0x1) << DDR3PHY_ACIOCR_ACPDD_Pos)          /* (DDR3PHY_ACIOCR) AC Power Down Driver: Powers down, when set, the output driver on the I/O for RAS#, CAS#, WE#, BA[2:0], and A[15:0] pins, as well as the optional DIMM PAR_IN pin. Mask */
#define DDR3PHY_ACIOCR_ACPDD(value)           (DDR3PHY_ACIOCR_ACPDD_Msk & (_UINT32_(value) << DDR3PHY_ACIOCR_ACPDD_Pos)) /* Assignment of value for ACPDD in the DDR3PHY_ACIOCR register */
#define DDR3PHY_ACIOCR_ACPDR_Pos              _UINT32_(4)                                          /* (DDR3PHY_ACIOCR) AC Power Down Receiver: Powers down, when set, the input receiver on the I/O for RAS#, CAS#, WE#, BA[2:0], and A[15:0] pins, as well as the optional DIMM PAR_IN pin and LPDDR TPD pin. Position */
#define DDR3PHY_ACIOCR_ACPDR_Msk              (_UINT32_(0x1) << DDR3PHY_ACIOCR_ACPDR_Pos)          /* (DDR3PHY_ACIOCR) AC Power Down Receiver: Powers down, when set, the input receiver on the I/O for RAS#, CAS#, WE#, BA[2:0], and A[15:0] pins, as well as the optional DIMM PAR_IN pin and LPDDR TPD pin. Mask */
#define DDR3PHY_ACIOCR_ACPDR(value)           (DDR3PHY_ACIOCR_ACPDR_Msk & (_UINT32_(value) << DDR3PHY_ACIOCR_ACPDR_Pos)) /* Assignment of value for ACPDR in the DDR3PHY_ACIOCR register */
#define DDR3PHY_ACIOCR_CKODT_Pos              _UINT32_(5)                                          /* (DDR3PHY_ACIOCR) CK On-Die Termination: Enables, when set, the on-die termination on the I/O for CK[0], CK[1], and CK[2] pins, respectively. Position */
#define DDR3PHY_ACIOCR_CKODT_Msk              (_UINT32_(0x1) << DDR3PHY_ACIOCR_CKODT_Pos)          /* (DDR3PHY_ACIOCR) CK On-Die Termination: Enables, when set, the on-die termination on the I/O for CK[0], CK[1], and CK[2] pins, respectively. Mask */
#define DDR3PHY_ACIOCR_CKODT(value)           (DDR3PHY_ACIOCR_CKODT_Msk & (_UINT32_(value) << DDR3PHY_ACIOCR_CKODT_Pos)) /* Assignment of value for CKODT in the DDR3PHY_ACIOCR register */
#define DDR3PHY_ACIOCR_CKPDD_Pos              _UINT32_(8)                                          /* (DDR3PHY_ACIOCR) CK Power Down Driver: Powers down, when set, the output driver on the I/O for CK[0], CK[1], and CK[2] pins, respectively. Position */
#define DDR3PHY_ACIOCR_CKPDD_Msk              (_UINT32_(0x1) << DDR3PHY_ACIOCR_CKPDD_Pos)          /* (DDR3PHY_ACIOCR) CK Power Down Driver: Powers down, when set, the output driver on the I/O for CK[0], CK[1], and CK[2] pins, respectively. Mask */
#define DDR3PHY_ACIOCR_CKPDD(value)           (DDR3PHY_ACIOCR_CKPDD_Msk & (_UINT32_(value) << DDR3PHY_ACIOCR_CKPDD_Pos)) /* Assignment of value for CKPDD in the DDR3PHY_ACIOCR register */
#define DDR3PHY_ACIOCR_CKPDR_Pos              _UINT32_(11)                                         /* (DDR3PHY_ACIOCR) CK Power Down Receiver: Powers down, when set, the input receiver on the I/O for CK[0], CK[1], and CK[2] pins, respectively. Position */
#define DDR3PHY_ACIOCR_CKPDR_Msk              (_UINT32_(0x1) << DDR3PHY_ACIOCR_CKPDR_Pos)          /* (DDR3PHY_ACIOCR) CK Power Down Receiver: Powers down, when set, the input receiver on the I/O for CK[0], CK[1], and CK[2] pins, respectively. Mask */
#define DDR3PHY_ACIOCR_CKPDR(value)           (DDR3PHY_ACIOCR_CKPDR_Msk & (_UINT32_(value) << DDR3PHY_ACIOCR_CKPDR_Pos)) /* Assignment of value for CKPDR in the DDR3PHY_ACIOCR register */
#define DDR3PHY_ACIOCR_RANKODT_Pos            _UINT32_(14)                                         /* (DDR3PHY_ACIOCR) Rank On-Die Termination: Enables, when set, the on-die termination on the I/O for CKE[3:0], ODT[3:0], and CS#[3:0] pins. RANKODT[0] controls the on-die termination for CKE[0], ODT[0], and CS#[0], RANKODT[1] controls the on-die termination for CKE[1], ODT[1], and CS#[1], and so on. Position */
#define DDR3PHY_ACIOCR_RANKODT_Msk            (_UINT32_(0x1) << DDR3PHY_ACIOCR_RANKODT_Pos)        /* (DDR3PHY_ACIOCR) Rank On-Die Termination: Enables, when set, the on-die termination on the I/O for CKE[3:0], ODT[3:0], and CS#[3:0] pins. RANKODT[0] controls the on-die termination for CKE[0], ODT[0], and CS#[0], RANKODT[1] controls the on-die termination for CKE[1], ODT[1], and CS#[1], and so on. Mask */
#define DDR3PHY_ACIOCR_RANKODT(value)         (DDR3PHY_ACIOCR_RANKODT_Msk & (_UINT32_(value) << DDR3PHY_ACIOCR_RANKODT_Pos)) /* Assignment of value for RANKODT in the DDR3PHY_ACIOCR register */
#define DDR3PHY_ACIOCR_CSPDD_Pos              _UINT32_(18)                                         /* (DDR3PHY_ACIOCR) CS# Power Down Driver: Powers down, when set, the output driver on the I/O for CS#[3:0] pins. PDD[0] controls the power down for CS#[0], PDD[1] controls the power down for CS#[1], and so on. CKE and ODT driver power down is controlled by DSGCR register. Position */
#define DDR3PHY_ACIOCR_CSPDD_Msk              (_UINT32_(0x1) << DDR3PHY_ACIOCR_CSPDD_Pos)          /* (DDR3PHY_ACIOCR) CS# Power Down Driver: Powers down, when set, the output driver on the I/O for CS#[3:0] pins. PDD[0] controls the power down for CS#[0], PDD[1] controls the power down for CS#[1], and so on. CKE and ODT driver power down is controlled by DSGCR register. Mask */
#define DDR3PHY_ACIOCR_CSPDD(value)           (DDR3PHY_ACIOCR_CSPDD_Msk & (_UINT32_(value) << DDR3PHY_ACIOCR_CSPDD_Pos)) /* Assignment of value for CSPDD in the DDR3PHY_ACIOCR register */
#define DDR3PHY_ACIOCR_RANKPDR_Pos            _UINT32_(22)                                         /* (DDR3PHY_ACIOCR) Rank Power Down Receiver: Powers down, when set, the input receiver on the I/O Position */
#define DDR3PHY_ACIOCR_RANKPDR_Msk            (_UINT32_(0x1) << DDR3PHY_ACIOCR_RANKPDR_Pos)        /* (DDR3PHY_ACIOCR) Rank Power Down Receiver: Powers down, when set, the input receiver on the I/O Mask */
#define DDR3PHY_ACIOCR_RANKPDR(value)         (DDR3PHY_ACIOCR_RANKPDR_Msk & (_UINT32_(value) << DDR3PHY_ACIOCR_RANKPDR_Pos)) /* Assignment of value for RANKPDR in the DDR3PHY_ACIOCR register */
#define DDR3PHY_ACIOCR_RSTODT_Pos             _UINT32_(26)                                         /* (DDR3PHY_ACIOCR) SDRAM Reset On-Die Termination: Enables, when set, the on-die termination on the I/O for SDRAM RST# pin. Position */
#define DDR3PHY_ACIOCR_RSTODT_Msk             (_UINT32_(0x1) << DDR3PHY_ACIOCR_RSTODT_Pos)         /* (DDR3PHY_ACIOCR) SDRAM Reset On-Die Termination: Enables, when set, the on-die termination on the I/O for SDRAM RST# pin. Mask */
#define DDR3PHY_ACIOCR_RSTODT(value)          (DDR3PHY_ACIOCR_RSTODT_Msk & (_UINT32_(value) << DDR3PHY_ACIOCR_RSTODT_Pos)) /* Assignment of value for RSTODT in the DDR3PHY_ACIOCR register */
#define DDR3PHY_ACIOCR_RSTPDD_Pos             _UINT32_(27)                                         /* (DDR3PHY_ACIOCR) SDRAM Reset Power Down Driver: Powers down, when set, the output driver on the I/O for SDRAM RST# pin. Position */
#define DDR3PHY_ACIOCR_RSTPDD_Msk             (_UINT32_(0x1) << DDR3PHY_ACIOCR_RSTPDD_Pos)         /* (DDR3PHY_ACIOCR) SDRAM Reset Power Down Driver: Powers down, when set, the output driver on the I/O for SDRAM RST# pin. Mask */
#define DDR3PHY_ACIOCR_RSTPDD(value)          (DDR3PHY_ACIOCR_RSTPDD_Msk & (_UINT32_(value) << DDR3PHY_ACIOCR_RSTPDD_Pos)) /* Assignment of value for RSTPDD in the DDR3PHY_ACIOCR register */
#define DDR3PHY_ACIOCR_RSTPDR_Pos             _UINT32_(28)                                         /* (DDR3PHY_ACIOCR) SDRAM Reset Power Down Receiver: Powers down, when set, the input receiver on the I/O for SDRAM RST# pin. Position */
#define DDR3PHY_ACIOCR_RSTPDR_Msk             (_UINT32_(0x1) << DDR3PHY_ACIOCR_RSTPDR_Pos)         /* (DDR3PHY_ACIOCR) SDRAM Reset Power Down Receiver: Powers down, when set, the input receiver on the I/O for SDRAM RST# pin. Mask */
#define DDR3PHY_ACIOCR_RSTPDR(value)          (DDR3PHY_ACIOCR_RSTPDR_Msk & (_UINT32_(value) << DDR3PHY_ACIOCR_RSTPDR_Pos)) /* Assignment of value for RSTPDR in the DDR3PHY_ACIOCR register */
#define DDR3PHY_ACIOCR_RSTIOM_Pos             _UINT32_(29)                                         /* (DDR3PHY_ACIOCR) SDRAM Reset I/O Mode: Selects SSTL mode (when set to 0) or CMOS mode (when set to 1) of the I/O for SDRAM Reset. Position */
#define DDR3PHY_ACIOCR_RSTIOM_Msk             (_UINT32_(0x1) << DDR3PHY_ACIOCR_RSTIOM_Pos)         /* (DDR3PHY_ACIOCR) SDRAM Reset I/O Mode: Selects SSTL mode (when set to 0) or CMOS mode (when set to 1) of the I/O for SDRAM Reset. Mask */
#define DDR3PHY_ACIOCR_RSTIOM(value)          (DDR3PHY_ACIOCR_RSTIOM_Msk & (_UINT32_(value) << DDR3PHY_ACIOCR_RSTIOM_Pos)) /* Assignment of value for RSTIOM in the DDR3PHY_ACIOCR register */
#define DDR3PHY_ACIOCR_Msk                    _UINT32_(0x3C44493F)                                 /* (DDR3PHY_ACIOCR) Register Mask  */


/* -------- DDR3PHY_DXCCR : (DDR3PHY Offset: 0x28) (R/W 32) DATX8 I/O Configuration Register -------- */
#define DDR3PHY_DXCCR_DXODT_Pos               _UINT32_(0)                                          /* (DDR3PHY_DXCCR) Data On-Die Termination: Enables, when set, the on-die termination on the I/O for DQ, DM, and DQS/DQS# pins of all DATX8 macros. This bit is ORed with the ODT configuration bit of the individual DATX8 Position */
#define DDR3PHY_DXCCR_DXODT_Msk               (_UINT32_(0x1) << DDR3PHY_DXCCR_DXODT_Pos)           /* (DDR3PHY_DXCCR) Data On-Die Termination: Enables, when set, the on-die termination on the I/O for DQ, DM, and DQS/DQS# pins of all DATX8 macros. This bit is ORed with the ODT configuration bit of the individual DATX8 Mask */
#define DDR3PHY_DXCCR_DXODT(value)            (DDR3PHY_DXCCR_DXODT_Msk & (_UINT32_(value) << DDR3PHY_DXCCR_DXODT_Pos)) /* Assignment of value for DXODT in the DDR3PHY_DXCCR register */
#define DDR3PHY_DXCCR_DXIOM_Pos               _UINT32_(1)                                          /* (DDR3PHY_DXCCR) Data I/O Mode: Selects SSTL mode (when set to 0) or CMOS mode (when set to 1) of the I/O for DQ, DM, and DQS/DQS# pins of all DATX8 macros. This bit is ORed with the IOM configuration bit of the individual DATX8 Position */
#define DDR3PHY_DXCCR_DXIOM_Msk               (_UINT32_(0x1) << DDR3PHY_DXCCR_DXIOM_Pos)           /* (DDR3PHY_DXCCR) Data I/O Mode: Selects SSTL mode (when set to 0) or CMOS mode (when set to 1) of the I/O for DQ, DM, and DQS/DQS# pins of all DATX8 macros. This bit is ORed with the IOM configuration bit of the individual DATX8 Mask */
#define DDR3PHY_DXCCR_DXIOM(value)            (DDR3PHY_DXCCR_DXIOM_Msk & (_UINT32_(value) << DDR3PHY_DXCCR_DXIOM_Pos)) /* Assignment of value for DXIOM in the DDR3PHY_DXCCR register */
#define DDR3PHY_DXCCR_DXPDD_Pos               _UINT32_(2)                                          /* (DDR3PHY_DXCCR) Data Power Down Driver: Powers down, when set, the output driver on I/O for DQ, DM, and DQS/DQS# pins of all DATX8 macros. This bit is ORed with the PDD configuration bit of the individual DATX8 Position */
#define DDR3PHY_DXCCR_DXPDD_Msk               (_UINT32_(0x1) << DDR3PHY_DXCCR_DXPDD_Pos)           /* (DDR3PHY_DXCCR) Data Power Down Driver: Powers down, when set, the output driver on I/O for DQ, DM, and DQS/DQS# pins of all DATX8 macros. This bit is ORed with the PDD configuration bit of the individual DATX8 Mask */
#define DDR3PHY_DXCCR_DXPDD(value)            (DDR3PHY_DXCCR_DXPDD_Msk & (_UINT32_(value) << DDR3PHY_DXCCR_DXPDD_Pos)) /* Assignment of value for DXPDD in the DDR3PHY_DXCCR register */
#define DDR3PHY_DXCCR_DXPDR_Pos               _UINT32_(3)                                          /* (DDR3PHY_DXCCR) Data Power Down Receiver: Powers down, when set, the input receiver on I/O for Position */
#define DDR3PHY_DXCCR_DXPDR_Msk               (_UINT32_(0x1) << DDR3PHY_DXCCR_DXPDR_Pos)           /* (DDR3PHY_DXCCR) Data Power Down Receiver: Powers down, when set, the input receiver on I/O for Mask */
#define DDR3PHY_DXCCR_DXPDR(value)            (DDR3PHY_DXCCR_DXPDR_Msk & (_UINT32_(value) << DDR3PHY_DXCCR_DXPDR_Pos)) /* Assignment of value for DXPDR in the DDR3PHY_DXCCR register */
#define DDR3PHY_DXCCR_DQSRES_Pos              _UINT32_(4)                                          /* (DDR3PHY_DXCCR) DQS Resistor: Selects the on-die pull-down/pull-up resistor for DQS pins. Position */
#define DDR3PHY_DXCCR_DQSRES_Msk              (_UINT32_(0xF) << DDR3PHY_DXCCR_DQSRES_Pos)          /* (DDR3PHY_DXCCR) DQS Resistor: Selects the on-die pull-down/pull-up resistor for DQS pins. Mask */
#define DDR3PHY_DXCCR_DQSRES(value)           (DDR3PHY_DXCCR_DQSRES_Msk & (_UINT32_(value) << DDR3PHY_DXCCR_DQSRES_Pos)) /* Assignment of value for DQSRES in the DDR3PHY_DXCCR register */
#define DDR3PHY_DXCCR_DQSNRES_Pos             _UINT32_(8)                                          /* (DDR3PHY_DXCCR) DQS# Resistor: Selects the on-die pull-up/pull-down resistor for DQS# pins. Same encoding as DQSRES. Position */
#define DDR3PHY_DXCCR_DQSNRES_Msk             (_UINT32_(0xF) << DDR3PHY_DXCCR_DQSNRES_Pos)         /* (DDR3PHY_DXCCR) DQS# Resistor: Selects the on-die pull-up/pull-down resistor for DQS# pins. Same encoding as DQSRES. Mask */
#define DDR3PHY_DXCCR_DQSNRES(value)          (DDR3PHY_DXCCR_DQSNRES_Msk & (_UINT32_(value) << DDR3PHY_DXCCR_DQSNRES_Pos)) /* Assignment of value for DQSNRES in the DDR3PHY_DXCCR register */
#define DDR3PHY_DXCCR_DQSNRST_Pos             _UINT32_(14)                                         /* (DDR3PHY_DXCCR) DQS# Reset: Indicates, if set, that the ITMS of DQS# should always be put in reset such that its output enable is always '1' and its data output is always '0'. This is done by driving the oe_set_b and do_rst_b pins of this ITMS to '0' in order to force the unused DQS# PAD to a known state of '0' in applications that don't use DQS# such as in LPDDR mode. Position */
#define DDR3PHY_DXCCR_DQSNRST_Msk             (_UINT32_(0x1) << DDR3PHY_DXCCR_DQSNRST_Pos)         /* (DDR3PHY_DXCCR) DQS# Reset: Indicates, if set, that the ITMS of DQS# should always be put in reset such that its output enable is always '1' and its data output is always '0'. This is done by driving the oe_set_b and do_rst_b pins of this ITMS to '0' in order to force the unused DQS# PAD to a known state of '0' in applications that don't use DQS# such as in LPDDR mode. Mask */
#define DDR3PHY_DXCCR_DQSNRST(value)          (DDR3PHY_DXCCR_DQSNRST_Msk & (_UINT32_(value) << DDR3PHY_DXCCR_DQSNRST_Pos)) /* Assignment of value for DQSNRST in the DDR3PHY_DXCCR register */
#define DDR3PHY_DXCCR_RVSEL_Pos               _UINT32_(15)                                         /* (DDR3PHY_DXCCR) ITMD Read Valid Select: Selects the scheme used for ITMD read valid. Position */
#define DDR3PHY_DXCCR_RVSEL_Msk               (_UINT32_(0x1) << DDR3PHY_DXCCR_RVSEL_Pos)           /* (DDR3PHY_DXCCR) ITMD Read Valid Select: Selects the scheme used for ITMD read valid. Mask */
#define DDR3PHY_DXCCR_RVSEL(value)            (DDR3PHY_DXCCR_RVSEL_Msk & (_UINT32_(value) << DDR3PHY_DXCCR_RVSEL_Pos)) /* Assignment of value for RVSEL in the DDR3PHY_DXCCR register */
#define DDR3PHY_DXCCR_AWDT_Pos                _UINT32_(16)                                         /* (DDR3PHY_DXCCR) Active Window Data Train: Indicates if set that data training (DQS gate training and read valid training) should be performed with active DQS gate window. This is just for debug purposes. The default is to perform training with passive windowing. Position */
#define DDR3PHY_DXCCR_AWDT_Msk                (_UINT32_(0x1) << DDR3PHY_DXCCR_AWDT_Pos)            /* (DDR3PHY_DXCCR) Active Window Data Train: Indicates if set that data training (DQS gate training and read valid training) should be performed with active DQS gate window. This is just for debug purposes. The default is to perform training with passive windowing. Mask */
#define DDR3PHY_DXCCR_AWDT(value)             (DDR3PHY_DXCCR_AWDT_Msk & (_UINT32_(value) << DDR3PHY_DXCCR_AWDT_Pos)) /* Assignment of value for AWDT in the DDR3PHY_DXCCR register */
#define DDR3PHY_DXCCR_Msk                     _UINT32_(0x0001CFFF)                                 /* (DDR3PHY_DXCCR) Register Mask  */


/* -------- DDR3PHY_DSGCR : (DDR3PHY Offset: 0x2C) (R/W 32) DFI Configuration Register -------- */
#define DDR3PHY_DSGCR_PUREN_Pos               _UINT32_(0)                                          /* (DDR3PHY_DSGCR) PHY Update Request Enable: Specifies if set, that the PHY should issue PHYinitiated DFI update request when there is DQS drift of more than 3/4 of a clock cycle within one continuous (back-to-back) read burst. By default the PHY issues PHYinitiated update requests and the controller should respond otherwise the PHY may return erroneous values. The option to disable it is provided only for silicon evaluation and testing. Position */
#define DDR3PHY_DSGCR_PUREN_Msk               (_UINT32_(0x1) << DDR3PHY_DSGCR_PUREN_Pos)           /* (DDR3PHY_DSGCR) PHY Update Request Enable: Specifies if set, that the PHY should issue PHYinitiated DFI update request when there is DQS drift of more than 3/4 of a clock cycle within one continuous (back-to-back) read burst. By default the PHY issues PHYinitiated update requests and the controller should respond otherwise the PHY may return erroneous values. The option to disable it is provided only for silicon evaluation and testing. Mask */
#define DDR3PHY_DSGCR_PUREN(value)            (DDR3PHY_DSGCR_PUREN_Msk & (_UINT32_(value) << DDR3PHY_DSGCR_PUREN_Pos)) /* Assignment of value for PUREN in the DDR3PHY_DSGCR register */
#define DDR3PHY_DSGCR_BDISEN_Pos              _UINT32_(1)                                          /* (DDR3PHY_DSGCR) Byte Disable Enable: Specifies if set that the PHY should respond to DFI byte disable request. Otherwise the byte disable from the DFI is ignored in which case bytes can only be disabled using the DXnGCR register. Position */
#define DDR3PHY_DSGCR_BDISEN_Msk              (_UINT32_(0x1) << DDR3PHY_DSGCR_BDISEN_Pos)          /* (DDR3PHY_DSGCR) Byte Disable Enable: Specifies if set that the PHY should respond to DFI byte disable request. Otherwise the byte disable from the DFI is ignored in which case bytes can only be disabled using the DXnGCR register. Mask */
#define DDR3PHY_DSGCR_BDISEN(value)           (DDR3PHY_DSGCR_BDISEN_Msk & (_UINT32_(value) << DDR3PHY_DSGCR_BDISEN_Pos)) /* Assignment of value for BDISEN in the DDR3PHY_DSGCR register */
#define DDR3PHY_DSGCR_ZUEN_Pos                _UINT32_(2)                                          /* (DDR3PHY_DSGCR) Impedance Update Enable: Specifies if set that the PHY should perform impedance calibration (update) whenever there is a controller initiated DFI update request. Position */
#define DDR3PHY_DSGCR_ZUEN_Msk                (_UINT32_(0x1) << DDR3PHY_DSGCR_ZUEN_Pos)            /* (DDR3PHY_DSGCR) Impedance Update Enable: Specifies if set that the PHY should perform impedance calibration (update) whenever there is a controller initiated DFI update request. Mask */
#define DDR3PHY_DSGCR_ZUEN(value)             (DDR3PHY_DSGCR_ZUEN_Msk & (_UINT32_(value) << DDR3PHY_DSGCR_ZUEN_Pos)) /* Assignment of value for ZUEN in the DDR3PHY_DSGCR register */
#define DDR3PHY_DSGCR_LPIOPD_Pos              _UINT32_(3)                                          /* (DDR3PHY_DSGCR) Low Power I/O Power Down: Specifies if set that the PHY should respond to the DFI low power opportunity request and power down the I/Os of the PHY. Position */
#define DDR3PHY_DSGCR_LPIOPD_Msk              (_UINT32_(0x1) << DDR3PHY_DSGCR_LPIOPD_Pos)          /* (DDR3PHY_DSGCR) Low Power I/O Power Down: Specifies if set that the PHY should respond to the DFI low power opportunity request and power down the I/Os of the PHY. Mask */
#define DDR3PHY_DSGCR_LPIOPD(value)           (DDR3PHY_DSGCR_LPIOPD_Msk & (_UINT32_(value) << DDR3PHY_DSGCR_LPIOPD_Pos)) /* Assignment of value for LPIOPD in the DDR3PHY_DSGCR register */
#define DDR3PHY_DSGCR_LPDLLPD_Pos             _UINT32_(4)                                          /* (DDR3PHY_DSGCR) Low Power DLL Power Down: Specifies if set that the PHY should respond to the DFI low power opportunity request and power down the DLL of the PHY if the wakeup time request satisfies the DLL lock time. Position */
#define DDR3PHY_DSGCR_LPDLLPD_Msk             (_UINT32_(0x1) << DDR3PHY_DSGCR_LPDLLPD_Pos)         /* (DDR3PHY_DSGCR) Low Power DLL Power Down: Specifies if set that the PHY should respond to the DFI low power opportunity request and power down the DLL of the PHY if the wakeup time request satisfies the DLL lock time. Mask */
#define DDR3PHY_DSGCR_LPDLLPD(value)          (DDR3PHY_DSGCR_LPDLLPD_Msk & (_UINT32_(value) << DDR3PHY_DSGCR_LPDLLPD_Pos)) /* Assignment of value for LPDLLPD in the DDR3PHY_DSGCR register */
#define DDR3PHY_DSGCR_DQSGX_Pos               _UINT32_(5)                                          /* (DDR3PHY_DSGCR) DQS Gate Extension: Specifies the number of clock cycles for which the DQS gating must be extended beyond the normal burst length width. Only applicable when using PDQSR I/O cell, passive DQS gating and no drift compensation. This field is recommended to be set to zero for all DDR types other than Position */
#define DDR3PHY_DSGCR_DQSGX_Msk               (_UINT32_(0x7) << DDR3PHY_DSGCR_DQSGX_Pos)           /* (DDR3PHY_DSGCR) DQS Gate Extension: Specifies the number of clock cycles for which the DQS gating must be extended beyond the normal burst length width. Only applicable when using PDQSR I/O cell, passive DQS gating and no drift compensation. This field is recommended to be set to zero for all DDR types other than Mask */
#define DDR3PHY_DSGCR_DQSGX(value)            (DDR3PHY_DSGCR_DQSGX_Msk & (_UINT32_(value) << DDR3PHY_DSGCR_DQSGX_Pos)) /* Assignment of value for DQSGX in the DDR3PHY_DSGCR register */
#define DDR3PHY_DSGCR_DQSGE_Pos               _UINT32_(8)                                          /* (DDR3PHY_DSGCR) DQS Gate Early: Specifies the number of clock cycles for which the DQS gating must be enabled earlier than its normal position. Only applicable when using PDQSR I/O cell, passive DQS gating and no drift compensation. This field is recommended to be set to zero for all DDR types other than Position */
#define DDR3PHY_DSGCR_DQSGE_Msk               (_UINT32_(0x7) << DDR3PHY_DSGCR_DQSGE_Pos)           /* (DDR3PHY_DSGCR) DQS Gate Early: Specifies the number of clock cycles for which the DQS gating must be enabled earlier than its normal position. Only applicable when using PDQSR I/O cell, passive DQS gating and no drift compensation. This field is recommended to be set to zero for all DDR types other than Mask */
#define DDR3PHY_DSGCR_DQSGE(value)            (DDR3PHY_DSGCR_DQSGE_Msk & (_UINT32_(value) << DDR3PHY_DSGCR_DQSGE_Pos)) /* Assignment of value for DQSGE in the DDR3PHY_DSGCR register */
#define DDR3PHY_DSGCR_NOBUB_Pos               _UINT32_(11)                                         /* (DDR3PHY_DSGCR) No Bubbles: Specified whether reads should be returned to the controller with no bubbles. Enabling no-bubble reads increases the read latency. Position */
#define DDR3PHY_DSGCR_NOBUB_Msk               (_UINT32_(0x1) << DDR3PHY_DSGCR_NOBUB_Pos)           /* (DDR3PHY_DSGCR) No Bubbles: Specified whether reads should be returned to the controller with no bubbles. Enabling no-bubble reads increases the read latency. Mask */
#define DDR3PHY_DSGCR_NOBUB(value)            (DDR3PHY_DSGCR_NOBUB_Msk & (_UINT32_(value) << DDR3PHY_DSGCR_NOBUB_Pos)) /* Assignment of value for NOBUB in the DDR3PHY_DSGCR register */
#define DDR3PHY_DSGCR_FXDLAT_Pos              _UINT32_(12)                                         /* (DDR3PHY_DSGCR) Fixed Latency: Specified whether all reads should be returned to the controller with a fixed read latency. Enabling fixed read latency increases the read latency. Position */
#define DDR3PHY_DSGCR_FXDLAT_Msk              (_UINT32_(0x1) << DDR3PHY_DSGCR_FXDLAT_Pos)          /* (DDR3PHY_DSGCR) Fixed Latency: Specified whether all reads should be returned to the controller with a fixed read latency. Enabling fixed read latency increases the read latency. Mask */
#define DDR3PHY_DSGCR_FXDLAT(value)           (DDR3PHY_DSGCR_FXDLAT_Msk & (_UINT32_(value) << DDR3PHY_DSGCR_FXDLAT_Pos)) /* Assignment of value for FXDLAT in the DDR3PHY_DSGCR register */
#define DDR3PHY_DSGCR_CKEPDD_Pos              _UINT32_(16)                                         /* (DDR3PHY_DSGCR) CKE Power Down Driver: Powers down, when set, the output driver on the I/O for CKE[3:0] pins. CKEPDD[0] controls the power down for CKE[0], CKEPDD[1] controls the power down for CKE[1], and so on. Position */
#define DDR3PHY_DSGCR_CKEPDD_Msk              (_UINT32_(0x1) << DDR3PHY_DSGCR_CKEPDD_Pos)          /* (DDR3PHY_DSGCR) CKE Power Down Driver: Powers down, when set, the output driver on the I/O for CKE[3:0] pins. CKEPDD[0] controls the power down for CKE[0], CKEPDD[1] controls the power down for CKE[1], and so on. Mask */
#define DDR3PHY_DSGCR_CKEPDD(value)           (DDR3PHY_DSGCR_CKEPDD_Msk & (_UINT32_(value) << DDR3PHY_DSGCR_CKEPDD_Pos)) /* Assignment of value for CKEPDD in the DDR3PHY_DSGCR register */
#define DDR3PHY_DSGCR_ODTPDD_Pos              _UINT32_(20)                                         /* (DDR3PHY_DSGCR) ODT Power Down Driver: Powers down, when set, the output driver on the I/O for ODT[3:0] pins. ODTPDD[0] controls the power down for ODT[0], ODTPDD[1] controls the power down for ODT[1], and so on. Position */
#define DDR3PHY_DSGCR_ODTPDD_Msk              (_UINT32_(0x1) << DDR3PHY_DSGCR_ODTPDD_Pos)          /* (DDR3PHY_DSGCR) ODT Power Down Driver: Powers down, when set, the output driver on the I/O for ODT[3:0] pins. ODTPDD[0] controls the power down for ODT[0], ODTPDD[1] controls the power down for ODT[1], and so on. Mask */
#define DDR3PHY_DSGCR_ODTPDD(value)           (DDR3PHY_DSGCR_ODTPDD_Msk & (_UINT32_(value) << DDR3PHY_DSGCR_ODTPDD_Pos)) /* Assignment of value for ODTPDD in the DDR3PHY_DSGCR register */
#define DDR3PHY_DSGCR_NL2PD_Pos               _UINT32_(24)                                         /* (DDR3PHY_DSGCR) Non-LPDDR2/LPDDR3 Power Down: Powers down, when set, the output driver and the input receiver on the I/O for non-LPDDR2/LPDDR3 (ODT, RAS#, CAS#, WE#, Position */
#define DDR3PHY_DSGCR_NL2PD_Msk               (_UINT32_(0x1) << DDR3PHY_DSGCR_NL2PD_Pos)           /* (DDR3PHY_DSGCR) Non-LPDDR2/LPDDR3 Power Down: Powers down, when set, the output driver and the input receiver on the I/O for non-LPDDR2/LPDDR3 (ODT, RAS#, CAS#, WE#, Mask */
#define DDR3PHY_DSGCR_NL2PD(value)            (DDR3PHY_DSGCR_NL2PD_Msk & (_UINT32_(value) << DDR3PHY_DSGCR_NL2PD_Pos)) /* Assignment of value for NL2PD in the DDR3PHY_DSGCR register */
#define DDR3PHY_DSGCR_NL2OE_Pos               _UINT32_(25)                                         /* (DDR3PHY_DSGCR) Non-LPDDR2/LPDDR3 Output Enable: Enables, when set, the output driver on the I/O for non-LPDDR2/LPDDR3 (ODT, RAS#, CAS#, WE#, and BA) pins. This may be used when a chip that is designed for both LPDDR2/LPDDR3 and other DDR modes is being used in LPDDR2/LPDDR3 mode. For these pins, the I/O output enable signal (OE) is an AND of this bit and the respective output enable bit in ACIOCR or DSGCR registers. Position */
#define DDR3PHY_DSGCR_NL2OE_Msk               (_UINT32_(0x1) << DDR3PHY_DSGCR_NL2OE_Pos)           /* (DDR3PHY_DSGCR) Non-LPDDR2/LPDDR3 Output Enable: Enables, when set, the output driver on the I/O for non-LPDDR2/LPDDR3 (ODT, RAS#, CAS#, WE#, and BA) pins. This may be used when a chip that is designed for both LPDDR2/LPDDR3 and other DDR modes is being used in LPDDR2/LPDDR3 mode. For these pins, the I/O output enable signal (OE) is an AND of this bit and the respective output enable bit in ACIOCR or DSGCR registers. Mask */
#define DDR3PHY_DSGCR_NL2OE(value)            (DDR3PHY_DSGCR_NL2OE_Msk & (_UINT32_(value) << DDR3PHY_DSGCR_NL2OE_Pos)) /* Assignment of value for NL2OE in the DDR3PHY_DSGCR register */
#define DDR3PHY_DSGCR_CKOE_Pos                _UINT32_(28)                                         /* (DDR3PHY_DSGCR) SDRAM CK Output Enable: Enables, when set, the output driver on the I/O for SDRAM CK/CK# pins. Position */
#define DDR3PHY_DSGCR_CKOE_Msk                (_UINT32_(0x1) << DDR3PHY_DSGCR_CKOE_Pos)            /* (DDR3PHY_DSGCR) SDRAM CK Output Enable: Enables, when set, the output driver on the I/O for SDRAM CK/CK# pins. Mask */
#define DDR3PHY_DSGCR_CKOE(value)             (DDR3PHY_DSGCR_CKOE_Msk & (_UINT32_(value) << DDR3PHY_DSGCR_CKOE_Pos)) /* Assignment of value for CKOE in the DDR3PHY_DSGCR register */
#define DDR3PHY_DSGCR_ODTOE_Pos               _UINT32_(29)                                         /* (DDR3PHY_DSGCR) SDRAM ODT Output Enable: Enables, when set, the output driver on the I/O for SDRAM ODT pins. Position */
#define DDR3PHY_DSGCR_ODTOE_Msk               (_UINT32_(0x1) << DDR3PHY_DSGCR_ODTOE_Pos)           /* (DDR3PHY_DSGCR) SDRAM ODT Output Enable: Enables, when set, the output driver on the I/O for SDRAM ODT pins. Mask */
#define DDR3PHY_DSGCR_ODTOE(value)            (DDR3PHY_DSGCR_ODTOE_Msk & (_UINT32_(value) << DDR3PHY_DSGCR_ODTOE_Pos)) /* Assignment of value for ODTOE in the DDR3PHY_DSGCR register */
#define DDR3PHY_DSGCR_RSTOE_Pos               _UINT32_(30)                                         /* (DDR3PHY_DSGCR) SDRAM Reset Output Enable: Enables, when set, the output driver on the I/O for SDRAM RST# pin. Position */
#define DDR3PHY_DSGCR_RSTOE_Msk               (_UINT32_(0x1) << DDR3PHY_DSGCR_RSTOE_Pos)           /* (DDR3PHY_DSGCR) SDRAM Reset Output Enable: Enables, when set, the output driver on the I/O for SDRAM RST# pin. Mask */
#define DDR3PHY_DSGCR_RSTOE(value)            (DDR3PHY_DSGCR_RSTOE_Msk & (_UINT32_(value) << DDR3PHY_DSGCR_RSTOE_Pos)) /* Assignment of value for RSTOE in the DDR3PHY_DSGCR register */
#define DDR3PHY_DSGCR_CKEOE_Pos               _UINT32_(31)                                         /* (DDR3PHY_DSGCR) SDRAM CKE Output Enable: Enables, when set, the output driver on the I/O for SDRAM CKE pins. Position */
#define DDR3PHY_DSGCR_CKEOE_Msk               (_UINT32_(0x1) << DDR3PHY_DSGCR_CKEOE_Pos)           /* (DDR3PHY_DSGCR) SDRAM CKE Output Enable: Enables, when set, the output driver on the I/O for SDRAM CKE pins. Mask */
#define DDR3PHY_DSGCR_CKEOE(value)            (DDR3PHY_DSGCR_CKEOE_Msk & (_UINT32_(value) << DDR3PHY_DSGCR_CKEOE_Pos)) /* Assignment of value for CKEOE in the DDR3PHY_DSGCR register */
#define DDR3PHY_DSGCR_Msk                     _UINT32_(0xF3111FFF)                                 /* (DDR3PHY_DSGCR) Register Mask  */


/* -------- DDR3PHY_DCR : (DDR3PHY Offset: 0x30) (R/W 32) DRAM Configuration Register -------- */
#define DDR3PHY_DCR_DDRMD_Pos                 _UINT32_(0)                                          /* (DDR3PHY_DCR) DDR Mode: SDRAM DDR mode. Position */
#define DDR3PHY_DCR_DDRMD_Msk                 (_UINT32_(0x7) << DDR3PHY_DCR_DDRMD_Pos)             /* (DDR3PHY_DCR) DDR Mode: SDRAM DDR mode. Mask */
#define DDR3PHY_DCR_DDRMD(value)              (DDR3PHY_DCR_DDRMD_Msk & (_UINT32_(value) << DDR3PHY_DCR_DDRMD_Pos)) /* Assignment of value for DDRMD in the DDR3PHY_DCR register */
#define DDR3PHY_DCR_DDR8BNK_Pos               _UINT32_(3)                                          /* (DDR3PHY_DCR) DDR 8-Bank: Indicates if set that the SDRAM used has 8 banks. tRPA = tRP+1 and tFAW are used for 8-bank DRAMs, other tRPA = tRP and no tFAW is used. Note that Position */
#define DDR3PHY_DCR_DDR8BNK_Msk               (_UINT32_(0x1) << DDR3PHY_DCR_DDR8BNK_Pos)           /* (DDR3PHY_DCR) DDR 8-Bank: Indicates if set that the SDRAM used has 8 banks. tRPA = tRP+1 and tFAW are used for 8-bank DRAMs, other tRPA = tRP and no tFAW is used. Note that Mask */
#define DDR3PHY_DCR_DDR8BNK(value)            (DDR3PHY_DCR_DDR8BNK_Msk & (_UINT32_(value) << DDR3PHY_DCR_DDR8BNK_Pos)) /* Assignment of value for DDR8BNK in the DDR3PHY_DCR register */
#define DDR3PHY_DCR_PDQ_Pos                   _UINT32_(4)                                          /* (DDR3PHY_DCR) Primary DQ (DDR3 Only): Specifies the DQ pin in a byte that is designated as a primary pin for Multi-Purpose Register (MPR) reads. Valid values are 0 to 7 for DQ[0] to DQ[7], respectively. Position */
#define DDR3PHY_DCR_PDQ_Msk                   (_UINT32_(0x7) << DDR3PHY_DCR_PDQ_Pos)               /* (DDR3PHY_DCR) Primary DQ (DDR3 Only): Specifies the DQ pin in a byte that is designated as a primary pin for Multi-Purpose Register (MPR) reads. Valid values are 0 to 7 for DQ[0] to DQ[7], respectively. Mask */
#define DDR3PHY_DCR_PDQ(value)                (DDR3PHY_DCR_PDQ_Msk & (_UINT32_(value) << DDR3PHY_DCR_PDQ_Pos)) /* Assignment of value for PDQ in the DDR3PHY_DCR register */
#define DDR3PHY_DCR_MPRDQ_Pos                 _UINT32_(7)                                          /* (DDR3PHY_DCR) Multi-Purpose Register (MPR) DQ (DDR3 Only): Specifies the value that is driven on non-primary DQ pins during MPR reads. Position */
#define DDR3PHY_DCR_MPRDQ_Msk                 (_UINT32_(0x1) << DDR3PHY_DCR_MPRDQ_Pos)             /* (DDR3PHY_DCR) Multi-Purpose Register (MPR) DQ (DDR3 Only): Specifies the value that is driven on non-primary DQ pins during MPR reads. Mask */
#define DDR3PHY_DCR_MPRDQ(value)              (DDR3PHY_DCR_MPRDQ_Msk & (_UINT32_(value) << DDR3PHY_DCR_MPRDQ_Pos)) /* Assignment of value for MPRDQ in the DDR3PHY_DCR register */
#define DDR3PHY_DCR_DDRTYPE_Pos               _UINT32_(8)                                          /* (DDR3PHY_DCR) DDR Type: Selects the DDR type for the specified LPDDR mode. Position */
#define DDR3PHY_DCR_DDRTYPE_Msk               (_UINT32_(0x3) << DDR3PHY_DCR_DDRTYPE_Pos)           /* (DDR3PHY_DCR) DDR Type: Selects the DDR type for the specified LPDDR mode. Mask */
#define DDR3PHY_DCR_DDRTYPE(value)            (DDR3PHY_DCR_DDRTYPE_Msk & (_UINT32_(value) << DDR3PHY_DCR_DDRTYPE_Pos)) /* Assignment of value for DDRTYPE in the DDR3PHY_DCR register */
#define DDR3PHY_DCR_DDR2T_Pos                 _UINT32_(28)                                         /* (DDR3PHY_DCR) DDR 2T Timing: Indicates if set that 2T timing should be used by PUB internally generated SDRAM transactions. Position */
#define DDR3PHY_DCR_DDR2T_Msk                 (_UINT32_(0x1) << DDR3PHY_DCR_DDR2T_Pos)             /* (DDR3PHY_DCR) DDR 2T Timing: Indicates if set that 2T timing should be used by PUB internally generated SDRAM transactions. Mask */
#define DDR3PHY_DCR_DDR2T(value)              (DDR3PHY_DCR_DDR2T_Msk & (_UINT32_(value) << DDR3PHY_DCR_DDR2T_Pos)) /* Assignment of value for DDR2T in the DDR3PHY_DCR register */
#define DDR3PHY_DCR_Msk                       _UINT32_(0x100003FF)                                 /* (DDR3PHY_DCR) Register Mask  */


/* -------- DDR3PHY_DTPR0 : (DDR3PHY Offset: 0x34) (R/W 32) SDRAM Timing Parameters Register 0 -------- */
#define DDR3PHY_DTPR0_TMRD_Pos                _UINT32_(0)                                          /* (DDR3PHY_DTPR0) Load mode cycle time: The minimum time between a load mode register command and any other command. For DDR3 this is the minimum time between two load mode register commands. Valid values for DDR2 are 2 to 3. For DDR3, the value used for tMRD is 4 plus the value programmed in these bits, i.e. tMRD value for DDR3 ranges from 4 to 7. For LPDDR3, the value used for tMRD is 8 plus the value programmed in these bits. Position */
#define DDR3PHY_DTPR0_TMRD_Msk                (_UINT32_(0x3) << DDR3PHY_DTPR0_TMRD_Pos)            /* (DDR3PHY_DTPR0) Load mode cycle time: The minimum time between a load mode register command and any other command. For DDR3 this is the minimum time between two load mode register commands. Valid values for DDR2 are 2 to 3. For DDR3, the value used for tMRD is 4 plus the value programmed in these bits, i.e. tMRD value for DDR3 ranges from 4 to 7. For LPDDR3, the value used for tMRD is 8 plus the value programmed in these bits. Mask */
#define DDR3PHY_DTPR0_TMRD(value)             (DDR3PHY_DTPR0_TMRD_Msk & (_UINT32_(value) << DDR3PHY_DTPR0_TMRD_Pos)) /* Assignment of value for TMRD in the DDR3PHY_DTPR0 register */
#define DDR3PHY_DTPR0_TRTP_Pos                _UINT32_(2)                                          /* (DDR3PHY_DTPR0) Internal read to precharge command delay. Valid values are 2 to 6. Note that even though RTP does not apply to JEDEC DDR devices, this parameter must still be set to a minimum value of 2 for DDR because the Controller always uses the DDR2 equation, AL + BL/2 + max(RTP,2) - 2, to compute the read to precharge timing (which is BL/2 for JEDEC DDR). Position */
#define DDR3PHY_DTPR0_TRTP_Msk                (_UINT32_(0x7) << DDR3PHY_DTPR0_TRTP_Pos)            /* (DDR3PHY_DTPR0) Internal read to precharge command delay. Valid values are 2 to 6. Note that even though RTP does not apply to JEDEC DDR devices, this parameter must still be set to a minimum value of 2 for DDR because the Controller always uses the DDR2 equation, AL + BL/2 + max(RTP,2) - 2, to compute the read to precharge timing (which is BL/2 for JEDEC DDR). Mask */
#define DDR3PHY_DTPR0_TRTP(value)             (DDR3PHY_DTPR0_TRTP_Msk & (_UINT32_(value) << DDR3PHY_DTPR0_TRTP_Pos)) /* Assignment of value for TRTP in the DDR3PHY_DTPR0 register */
#define DDR3PHY_DTPR0_TWTR_Pos                _UINT32_(5)                                          /* (DDR3PHY_DTPR0) Internal write to read command delay. Valid values are 1 to 6. Position */
#define DDR3PHY_DTPR0_TWTR_Msk                (_UINT32_(0x7) << DDR3PHY_DTPR0_TWTR_Pos)            /* (DDR3PHY_DTPR0) Internal write to read command delay. Valid values are 1 to 6. Mask */
#define DDR3PHY_DTPR0_TWTR(value)             (DDR3PHY_DTPR0_TWTR_Msk & (_UINT32_(value) << DDR3PHY_DTPR0_TWTR_Pos)) /* Assignment of value for TWTR in the DDR3PHY_DTPR0 register */
#define DDR3PHY_DTPR0_TRP_Pos                 _UINT32_(8)                                          /* (DDR3PHY_DTPR0) Precharge command period: The minimum time between a precharge command and any other command. Note that the Controller automatically derives tRPA for 8bank DDR2 devices by adding 1 to tRP. Valid values are 2 to 11. Position */
#define DDR3PHY_DTPR0_TRP_Msk                 (_UINT32_(0xF) << DDR3PHY_DTPR0_TRP_Pos)             /* (DDR3PHY_DTPR0) Precharge command period: The minimum time between a precharge command and any other command. Note that the Controller automatically derives tRPA for 8bank DDR2 devices by adding 1 to tRP. Valid values are 2 to 11. Mask */
#define DDR3PHY_DTPR0_TRP(value)              (DDR3PHY_DTPR0_TRP_Msk & (_UINT32_(value) << DDR3PHY_DTPR0_TRP_Pos)) /* Assignment of value for TRP in the DDR3PHY_DTPR0 register */
#define DDR3PHY_DTPR0_TRCD_Pos                _UINT32_(12)                                         /* (DDR3PHY_DTPR0) Activate to read or write delay. Minimum time from when an activate command is issued to when a read or write to the activated row can be issued. Valid values are 2 to 11. Position */
#define DDR3PHY_DTPR0_TRCD_Msk                (_UINT32_(0xF) << DDR3PHY_DTPR0_TRCD_Pos)            /* (DDR3PHY_DTPR0) Activate to read or write delay. Minimum time from when an activate command is issued to when a read or write to the activated row can be issued. Valid values are 2 to 11. Mask */
#define DDR3PHY_DTPR0_TRCD(value)             (DDR3PHY_DTPR0_TRCD_Msk & (_UINT32_(value) << DDR3PHY_DTPR0_TRCD_Pos)) /* Assignment of value for TRCD in the DDR3PHY_DTPR0 register */
#define DDR3PHY_DTPR0_TRAS_Pos                _UINT32_(16)                                         /* (DDR3PHY_DTPR0) Activate to precharge command delay. Valid values are 2 to 31. Position */
#define DDR3PHY_DTPR0_TRAS_Msk                (_UINT32_(0x1F) << DDR3PHY_DTPR0_TRAS_Pos)           /* (DDR3PHY_DTPR0) Activate to precharge command delay. Valid values are 2 to 31. Mask */
#define DDR3PHY_DTPR0_TRAS(value)             (DDR3PHY_DTPR0_TRAS_Msk & (_UINT32_(value) << DDR3PHY_DTPR0_TRAS_Pos)) /* Assignment of value for TRAS in the DDR3PHY_DTPR0 register */
#define DDR3PHY_DTPR0_TRRD_Pos                _UINT32_(21)                                         /* (DDR3PHY_DTPR0) Activate to activate command delay (different banks). Valid values are 1 to 8. Position */
#define DDR3PHY_DTPR0_TRRD_Msk                (_UINT32_(0xF) << DDR3PHY_DTPR0_TRRD_Pos)            /* (DDR3PHY_DTPR0) Activate to activate command delay (different banks). Valid values are 1 to 8. Mask */
#define DDR3PHY_DTPR0_TRRD(value)             (DDR3PHY_DTPR0_TRRD_Msk & (_UINT32_(value) << DDR3PHY_DTPR0_TRRD_Pos)) /* Assignment of value for TRRD in the DDR3PHY_DTPR0 register */
#define DDR3PHY_DTPR0_TRC_Pos                 _UINT32_(25)                                         /* (DDR3PHY_DTPR0) Activate to activate command delay (same bank). Valid values are 2 to 42. Position */
#define DDR3PHY_DTPR0_TRC_Msk                 (_UINT32_(0x3F) << DDR3PHY_DTPR0_TRC_Pos)            /* (DDR3PHY_DTPR0) Activate to activate command delay (same bank). Valid values are 2 to 42. Mask */
#define DDR3PHY_DTPR0_TRC(value)              (DDR3PHY_DTPR0_TRC_Msk & (_UINT32_(value) << DDR3PHY_DTPR0_TRC_Pos)) /* Assignment of value for TRC in the DDR3PHY_DTPR0 register */
#define DDR3PHY_DTPR0_TCCD_Pos                _UINT32_(31)                                         /* (DDR3PHY_DTPR0) Read to read and write to write command delay. Position */
#define DDR3PHY_DTPR0_TCCD_Msk                (_UINT32_(0x1) << DDR3PHY_DTPR0_TCCD_Pos)            /* (DDR3PHY_DTPR0) Read to read and write to write command delay. Mask */
#define DDR3PHY_DTPR0_TCCD(value)             (DDR3PHY_DTPR0_TCCD_Msk & (_UINT32_(value) << DDR3PHY_DTPR0_TCCD_Pos)) /* Assignment of value for TCCD in the DDR3PHY_DTPR0 register */
#define DDR3PHY_DTPR0_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (DDR3PHY_DTPR0) Register Mask  */


/* -------- DDR3PHY_DTPR1 : (DDR3PHY Offset: 0x38) (R/W 32) SDRAM Timing Parameters Register 1 -------- */
#define DDR3PHY_DTPR1_TAOND_Pos               _UINT32_(0)                                          /* (DDR3PHY_DTPR1) ODT turn-on/turn-off delays (DDR2 only). The delays are in clock cycles. Valid values are: 00 = 2/2.5 Position */
#define DDR3PHY_DTPR1_TAOND_Msk               (_UINT32_(0x3) << DDR3PHY_DTPR1_TAOND_Pos)           /* (DDR3PHY_DTPR1) ODT turn-on/turn-off delays (DDR2 only). The delays are in clock cycles. Valid values are: 00 = 2/2.5 Mask */
#define DDR3PHY_DTPR1_TAOND(value)            (DDR3PHY_DTPR1_TAOND_Msk & (_UINT32_(value) << DDR3PHY_DTPR1_TAOND_Pos)) /* Assignment of value for TAOND in the DDR3PHY_DTPR1 register */
#define DDR3PHY_DTPR1_TRTW_Pos                _UINT32_(2)                                          /* (DDR3PHY_DTPR1) Read to Write command delay. Position */
#define DDR3PHY_DTPR1_TRTW_Msk                (_UINT32_(0x1) << DDR3PHY_DTPR1_TRTW_Pos)            /* (DDR3PHY_DTPR1) Read to Write command delay. Mask */
#define DDR3PHY_DTPR1_TRTW(value)             (DDR3PHY_DTPR1_TRTW_Msk & (_UINT32_(value) << DDR3PHY_DTPR1_TRTW_Pos)) /* Assignment of value for TRTW in the DDR3PHY_DTPR1 register */
#define DDR3PHY_DTPR1_TFAW_Pos                _UINT32_(3)                                          /* (DDR3PHY_DTPR1) 4-bank activate period. No more than 4-bank activate commands may be issued in a given tFAW period. Only applies to 8-bank devices. Valid values are 2 to 31. Position */
#define DDR3PHY_DTPR1_TFAW_Msk                (_UINT32_(0x3F) << DDR3PHY_DTPR1_TFAW_Pos)           /* (DDR3PHY_DTPR1) 4-bank activate period. No more than 4-bank activate commands may be issued in a given tFAW period. Only applies to 8-bank devices. Valid values are 2 to 31. Mask */
#define DDR3PHY_DTPR1_TFAW(value)             (DDR3PHY_DTPR1_TFAW_Msk & (_UINT32_(value) << DDR3PHY_DTPR1_TFAW_Pos)) /* Assignment of value for TFAW in the DDR3PHY_DTPR1 register */
#define DDR3PHY_DTPR1_TMOD_Pos                _UINT32_(9)                                          /* (DDR3PHY_DTPR1) Load mode update delay (DDR3 only). The minimum time between a load mode register command and a non-load mode register command. Position */
#define DDR3PHY_DTPR1_TMOD_Msk                (_UINT32_(0x3) << DDR3PHY_DTPR1_TMOD_Pos)            /* (DDR3PHY_DTPR1) Load mode update delay (DDR3 only). The minimum time between a load mode register command and a non-load mode register command. Mask */
#define DDR3PHY_DTPR1_TMOD(value)             (DDR3PHY_DTPR1_TMOD_Msk & (_UINT32_(value) << DDR3PHY_DTPR1_TMOD_Pos)) /* Assignment of value for TMOD in the DDR3PHY_DTPR1 register */
#define DDR3PHY_DTPR1_TRTODT_Pos              _UINT32_(11)                                         /* (DDR3PHY_DTPR1) Read to ODT delay (DDR3 only). Specifies whether ODT can be enabled immediately after the read post-amble or one clock delay has to be added. Position */
#define DDR3PHY_DTPR1_TRTODT_Msk              (_UINT32_(0x1) << DDR3PHY_DTPR1_TRTODT_Pos)          /* (DDR3PHY_DTPR1) Read to ODT delay (DDR3 only). Specifies whether ODT can be enabled immediately after the read post-amble or one clock delay has to be added. Mask */
#define DDR3PHY_DTPR1_TRTODT(value)           (DDR3PHY_DTPR1_TRTODT_Msk & (_UINT32_(value) << DDR3PHY_DTPR1_TRTODT_Pos)) /* Assignment of value for TRTODT in the DDR3PHY_DTPR1 register */
#define DDR3PHY_DTPR1_TRFC_Pos                _UINT32_(16)                                         /* (DDR3PHY_DTPR1) Refresh-to-Refresh: Indicates the minimum time, in clock cycles, between two refresh commands or between a refresh and an active command. This is derived from the minimum refresh interval from the datasheet, tRFC(min), divided by the clock cycle time. The default number of clock cycles is for the largest JEDEC tRFC(min parameter value supported. Position */
#define DDR3PHY_DTPR1_TRFC_Msk                (_UINT32_(0xFF) << DDR3PHY_DTPR1_TRFC_Pos)           /* (DDR3PHY_DTPR1) Refresh-to-Refresh: Indicates the minimum time, in clock cycles, between two refresh commands or between a refresh and an active command. This is derived from the minimum refresh interval from the datasheet, tRFC(min), divided by the clock cycle time. The default number of clock cycles is for the largest JEDEC tRFC(min parameter value supported. Mask */
#define DDR3PHY_DTPR1_TRFC(value)             (DDR3PHY_DTPR1_TRFC_Msk & (_UINT32_(value) << DDR3PHY_DTPR1_TRFC_Pos)) /* Assignment of value for TRFC in the DDR3PHY_DTPR1 register */
#define DDR3PHY_DTPR1_TDQSCKMIN_Pos           _UINT32_(24)                                         /* (DDR3PHY_DTPR1) DQS output access time from CK/CK# (LPDDR2/3 only). This value is used for computing the read latency. Valid values are 0 to 7. This value is derived from the corresponding parameter in the SDRAM datasheet divided by the clock cycle time without rounding up. The fractional remainder is automatically adjusted for by data training in quarter clock cycle units. If data training is not performed then this fractional remainder must be converted to quarter clock cycle units and the gating registers (DXnDQSTR) adjusted accordingly. Position */
#define DDR3PHY_DTPR1_TDQSCKMIN_Msk           (_UINT32_(0x7) << DDR3PHY_DTPR1_TDQSCKMIN_Pos)       /* (DDR3PHY_DTPR1) DQS output access time from CK/CK# (LPDDR2/3 only). This value is used for computing the read latency. Valid values are 0 to 7. This value is derived from the corresponding parameter in the SDRAM datasheet divided by the clock cycle time without rounding up. The fractional remainder is automatically adjusted for by data training in quarter clock cycle units. If data training is not performed then this fractional remainder must be converted to quarter clock cycle units and the gating registers (DXnDQSTR) adjusted accordingly. Mask */
#define DDR3PHY_DTPR1_TDQSCKMIN(value)        (DDR3PHY_DTPR1_TDQSCKMIN_Msk & (_UINT32_(value) << DDR3PHY_DTPR1_TDQSCKMIN_Pos)) /* Assignment of value for TDQSCKMIN in the DDR3PHY_DTPR1 register */
#define DDR3PHY_DTPR1_TDQSCKMAX_Pos           _UINT32_(27)                                         /* (DDR3PHY_DTPR1) Maximum DQS output access time from CK/CK# (LPDDR2 only). This value is used for implementing read-to-write spacing. Valid values are 1 to 7. Position */
#define DDR3PHY_DTPR1_TDQSCKMAX_Msk           (_UINT32_(0x7) << DDR3PHY_DTPR1_TDQSCKMAX_Pos)       /* (DDR3PHY_DTPR1) Maximum DQS output access time from CK/CK# (LPDDR2 only). This value is used for implementing read-to-write spacing. Valid values are 1 to 7. Mask */
#define DDR3PHY_DTPR1_TDQSCKMAX(value)        (DDR3PHY_DTPR1_TDQSCKMAX_Msk & (_UINT32_(value) << DDR3PHY_DTPR1_TDQSCKMAX_Pos)) /* Assignment of value for TDQSCKMAX in the DDR3PHY_DTPR1 register */
#define DDR3PHY_DTPR1_Msk                     _UINT32_(0x3FFF0FFF)                                 /* (DDR3PHY_DTPR1) Register Mask  */


/* -------- DDR3PHY_DTPR2 : (DDR3PHY Offset: 0x3C) (R/W 32) SDRAM Timing Parameters Register 2 -------- */
#define DDR3PHY_DTPR2_TXS_Pos                 _UINT32_(0)                                          /* (DDR3PHY_DTPR2) Self refresh exit delay. The minimum time between a self refresh exit command and any other command. This parameter must be set to the maximum of the various minimum self refresh exit delay parameters specified in the SDRAM datasheet, i.e. max(tXSNR, tXSRD) for DDR2 and max(tXS, tXSDLL) for DDR3. Valid values are 2 to 1023. Position */
#define DDR3PHY_DTPR2_TXS_Msk                 (_UINT32_(0x3FF) << DDR3PHY_DTPR2_TXS_Pos)           /* (DDR3PHY_DTPR2) Self refresh exit delay. The minimum time between a self refresh exit command and any other command. This parameter must be set to the maximum of the various minimum self refresh exit delay parameters specified in the SDRAM datasheet, i.e. max(tXSNR, tXSRD) for DDR2 and max(tXS, tXSDLL) for DDR3. Valid values are 2 to 1023. Mask */
#define DDR3PHY_DTPR2_TXS(value)              (DDR3PHY_DTPR2_TXS_Msk & (_UINT32_(value) << DDR3PHY_DTPR2_TXS_Pos)) /* Assignment of value for TXS in the DDR3PHY_DTPR2 register */
#define DDR3PHY_DTPR2_TXP_Pos                 _UINT32_(10)                                         /* (DDR3PHY_DTPR2) Power down exit delay. The minimum time between a power down exit command and any other command. This parameter must be set to the maximum of the various minimum power down exit delay parameters specified in the SDRAM datasheet, i.e. max(tXP, tXARD, tXARDS) for DDR2 and max(tXP, tXPDLL) for DDR3. Valid values are 2 to 31. Position */
#define DDR3PHY_DTPR2_TXP_Msk                 (_UINT32_(0x1F) << DDR3PHY_DTPR2_TXP_Pos)            /* (DDR3PHY_DTPR2) Power down exit delay. The minimum time between a power down exit command and any other command. This parameter must be set to the maximum of the various minimum power down exit delay parameters specified in the SDRAM datasheet, i.e. max(tXP, tXARD, tXARDS) for DDR2 and max(tXP, tXPDLL) for DDR3. Valid values are 2 to 31. Mask */
#define DDR3PHY_DTPR2_TXP(value)              (DDR3PHY_DTPR2_TXP_Msk & (_UINT32_(value) << DDR3PHY_DTPR2_TXP_Pos)) /* Assignment of value for TXP in the DDR3PHY_DTPR2 register */
#define DDR3PHY_DTPR2_TCKE_Pos                _UINT32_(15)                                         /* (DDR3PHY_DTPR2) CKE minimum pulse width. Also specifies the minimum time that the SDRAM must remain in power down or self refresh mode. For DDR3 this parameter must be set to the value of tCKESR which is usually bigger than the value of tCKE. Valid values are 2 to 15. Position */
#define DDR3PHY_DTPR2_TCKE_Msk                (_UINT32_(0xF) << DDR3PHY_DTPR2_TCKE_Pos)            /* (DDR3PHY_DTPR2) CKE minimum pulse width. Also specifies the minimum time that the SDRAM must remain in power down or self refresh mode. For DDR3 this parameter must be set to the value of tCKESR which is usually bigger than the value of tCKE. Valid values are 2 to 15. Mask */
#define DDR3PHY_DTPR2_TCKE(value)             (DDR3PHY_DTPR2_TCKE_Msk & (_UINT32_(value) << DDR3PHY_DTPR2_TCKE_Pos)) /* Assignment of value for TCKE in the DDR3PHY_DTPR2 register */
#define DDR3PHY_DTPR2_TDLLK_Pos               _UINT32_(19)                                         /* (DDR3PHY_DTPR2) DLL locking time. Valid values are 2 to 1023. Position */
#define DDR3PHY_DTPR2_TDLLK_Msk               (_UINT32_(0x3FF) << DDR3PHY_DTPR2_TDLLK_Pos)         /* (DDR3PHY_DTPR2) DLL locking time. Valid values are 2 to 1023. Mask */
#define DDR3PHY_DTPR2_TDLLK(value)            (DDR3PHY_DTPR2_TDLLK_Msk & (_UINT32_(value) << DDR3PHY_DTPR2_TDLLK_Pos)) /* Assignment of value for TDLLK in the DDR3PHY_DTPR2 register */
#define DDR3PHY_DTPR2_Msk                     _UINT32_(0x1FFFFFFF)                                 /* (DDR3PHY_DTPR2) Register Mask  */


/* -------- DDR3PHY_MR0 : (DDR3PHY Offset: 0x40) (R/W 32) Mode Register -------- */
#define DDR3PHY_MR0_BT_Pos                    _UINT32_(3)                                          /* (DDR3PHY_MR0) Burst Type Position */
#define DDR3PHY_MR0_BT_Msk                    (_UINT32_(0x1) << DDR3PHY_MR0_BT_Pos)                /* (DDR3PHY_MR0) Burst Type Mask */
#define DDR3PHY_MR0_BT(value)                 (DDR3PHY_MR0_BT_Msk & (_UINT32_(value) << DDR3PHY_MR0_BT_Pos)) /* Assignment of value for BT in the DDR3PHY_MR0 register */
#define DDR3PHY_MR0_TM_Pos                    _UINT32_(7)                                          /* (DDR3PHY_MR0) Operating Mode Position */
#define DDR3PHY_MR0_TM_Msk                    (_UINT32_(0x1) << DDR3PHY_MR0_TM_Pos)                /* (DDR3PHY_MR0) Operating Mode Mask */
#define DDR3PHY_MR0_TM(value)                 (DDR3PHY_MR0_TM_Msk & (_UINT32_(value) << DDR3PHY_MR0_TM_Pos)) /* Assignment of value for TM in the DDR3PHY_MR0 register */
#define DDR3PHY_MR0_DR_Pos                    _UINT32_(8)                                          /* (DDR3PHY_MR0) DLL Reset Position */
#define DDR3PHY_MR0_DR_Msk                    (_UINT32_(0x1) << DDR3PHY_MR0_DR_Pos)                /* (DDR3PHY_MR0) DLL Reset Mask */
#define DDR3PHY_MR0_DR(value)                 (DDR3PHY_MR0_DR_Msk & (_UINT32_(value) << DDR3PHY_MR0_DR_Pos)) /* Assignment of value for DR in the DDR3PHY_MR0 register */
#define DDR3PHY_MR0_WR_Pos                    _UINT32_(9)                                          /* (DDR3PHY_MR0) Write Recovery Position */
#define DDR3PHY_MR0_WR_Msk                    (_UINT32_(0x7) << DDR3PHY_MR0_WR_Pos)                /* (DDR3PHY_MR0) Write Recovery Mask */
#define DDR3PHY_MR0_WR(value)                 (DDR3PHY_MR0_WR_Msk & (_UINT32_(value) << DDR3PHY_MR0_WR_Pos)) /* Assignment of value for WR in the DDR3PHY_MR0 register */
#define DDR3PHY_MR0_PD_Pos                    _UINT32_(12)                                         /* (DDR3PHY_MR0) Power-Down Control Position */
#define DDR3PHY_MR0_PD_Msk                    (_UINT32_(0x1) << DDR3PHY_MR0_PD_Pos)                /* (DDR3PHY_MR0) Power-Down Control Mask */
#define DDR3PHY_MR0_PD(value)                 (DDR3PHY_MR0_PD_Msk & (_UINT32_(value) << DDR3PHY_MR0_PD_Pos)) /* Assignment of value for PD in the DDR3PHY_MR0 register */
#define DDR3PHY_MR0_Msk                       _UINT32_(0x00001F88)                                 /* (DDR3PHY_MR0) Register Mask  */

/* DDR3 mode */
#define DDR3PHY_MR0_DDR3_BL_Pos               _UINT32_(0)                                          /* (DDR3PHY_MR0) Burst Length Position */
#define DDR3PHY_MR0_DDR3_BL_Msk               (_UINT32_(0x3) << DDR3PHY_MR0_DDR3_BL_Pos)           /* (DDR3PHY_MR0) Burst Length Mask */
#define DDR3PHY_MR0_DDR3_BL(value)            (DDR3PHY_MR0_DDR3_BL_Msk & (_UINT32_(value) << DDR3PHY_MR0_DDR3_BL_Pos))
#define DDR3PHY_MR0_DDR3_CL0_Pos              _UINT32_(2)                                          /* (DDR3PHY_MR0) CAS Latency 0 Position */
#define DDR3PHY_MR0_DDR3_CL0_Msk              (_UINT32_(0x1) << DDR3PHY_MR0_DDR3_CL0_Pos)          /* (DDR3PHY_MR0) CAS Latency 0 Mask */
#define DDR3PHY_MR0_DDR3_CL0(value)           (DDR3PHY_MR0_DDR3_CL0_Msk & (_UINT32_(value) << DDR3PHY_MR0_DDR3_CL0_Pos))
#define DDR3PHY_MR0_DDR3_CL1_Pos              _UINT32_(4)                                          /* (DDR3PHY_MR0) CAS Latency 1 Position */
#define DDR3PHY_MR0_DDR3_CL1_Msk              (_UINT32_(0x1) << DDR3PHY_MR0_DDR3_CL1_Pos)          /* (DDR3PHY_MR0) CAS Latency 1 Mask */
#define DDR3PHY_MR0_DDR3_CL1(value)           (DDR3PHY_MR0_DDR3_CL1_Msk & (_UINT32_(value) << DDR3PHY_MR0_DDR3_CL1_Pos))
#define DDR3PHY_MR0_DDR3_CL2_Pos              _UINT32_(5)                                          /* (DDR3PHY_MR0) CAS Latency 2 Position */
#define DDR3PHY_MR0_DDR3_CL2_Msk              (_UINT32_(0x1) << DDR3PHY_MR0_DDR3_CL2_Pos)          /* (DDR3PHY_MR0) CAS Latency 2 Mask */
#define DDR3PHY_MR0_DDR3_CL2(value)           (DDR3PHY_MR0_DDR3_CL2_Msk & (_UINT32_(value) << DDR3PHY_MR0_DDR3_CL2_Pos))
#define DDR3PHY_MR0_DDR3_CL3_Pos              _UINT32_(6)                                          /* (DDR3PHY_MR0) CAS Latency 3 Position */
#define DDR3PHY_MR0_DDR3_CL3_Msk              (_UINT32_(0x1) << DDR3PHY_MR0_DDR3_CL3_Pos)          /* (DDR3PHY_MR0) CAS Latency 3 Mask */
#define DDR3PHY_MR0_DDR3_CL3(value)           (DDR3PHY_MR0_DDR3_CL3_Msk & (_UINT32_(value) << DDR3PHY_MR0_DDR3_CL3_Pos))
#define DDR3PHY_MR0_DDR3_Msk                  _UINT32_(0x00000077)                                 /* (DDR3PHY_MR0_DDR3) Register Mask  */

/* DDR2 mode */
#define DDR3PHY_MR0_DDR2_BL_Pos               _UINT32_(0)                                          /* (DDR3PHY_MR0) Burst Length Position */
#define DDR3PHY_MR0_DDR2_BL_Msk               (_UINT32_(0x7) << DDR3PHY_MR0_DDR2_BL_Pos)           /* (DDR3PHY_MR0) Burst Length Mask */
#define DDR3PHY_MR0_DDR2_BL(value)            (DDR3PHY_MR0_DDR2_BL_Msk & (_UINT32_(value) << DDR3PHY_MR0_DDR2_BL_Pos))
#define DDR3PHY_MR0_DDR2_CL_Pos               _UINT32_(4)                                          /* (DDR3PHY_MR0) CAS Latency x Position */
#define DDR3PHY_MR0_DDR2_CL_Msk               (_UINT32_(0x7) << DDR3PHY_MR0_DDR2_CL_Pos)           /* (DDR3PHY_MR0) CAS Latency x Mask */
#define DDR3PHY_MR0_DDR2_CL(value)            (DDR3PHY_MR0_DDR2_CL_Msk & (_UINT32_(value) << DDR3PHY_MR0_DDR2_CL_Pos))
#define DDR3PHY_MR0_DDR2_Msk                  _UINT32_(0x00000077)                                 /* (DDR3PHY_MR0_DDR2) Register Mask  */


/* -------- DDR3PHY_MR1 : (DDR3PHY Offset: 0x44) (R/W 32) Extended Mode Register -------- */
#define DDR3PHY_MR1_Msk                       _UINT32_(0x00000000)                                 /* (DDR3PHY_MR1) Register Mask  */

/* DDR3 mode */
#define DDR3PHY_MR1_DDR3_DE_Pos               _UINT32_(0)                                          /* (DDR3PHY_MR1) DLL Enable/Disable Position */
#define DDR3PHY_MR1_DDR3_DE_Msk               (_UINT32_(0x1) << DDR3PHY_MR1_DDR3_DE_Pos)           /* (DDR3PHY_MR1) DLL Enable/Disable Mask */
#define DDR3PHY_MR1_DDR3_DE(value)            (DDR3PHY_MR1_DDR3_DE_Msk & (_UINT32_(value) << DDR3PHY_MR1_DDR3_DE_Pos))
#define DDR3PHY_MR1_DDR3_DIC0_Pos             _UINT32_(1)                                          /* (DDR3PHY_MR1) Output Driver Impedance Control 0 Position */
#define DDR3PHY_MR1_DDR3_DIC0_Msk             (_UINT32_(0x1) << DDR3PHY_MR1_DDR3_DIC0_Pos)         /* (DDR3PHY_MR1) Output Driver Impedance Control 0 Mask */
#define DDR3PHY_MR1_DDR3_DIC0(value)          (DDR3PHY_MR1_DDR3_DIC0_Msk & (_UINT32_(value) << DDR3PHY_MR1_DDR3_DIC0_Pos))
#define DDR3PHY_MR1_DDR3_RTT0_Pos             _UINT32_(2)                                          /* (DDR3PHY_MR1) On-Die Termination 0 Position */
#define DDR3PHY_MR1_DDR3_RTT0_Msk             (_UINT32_(0x1) << DDR3PHY_MR1_DDR3_RTT0_Pos)         /* (DDR3PHY_MR1) On-Die Termination 0 Mask */
#define DDR3PHY_MR1_DDR3_RTT0(value)          (DDR3PHY_MR1_DDR3_RTT0_Msk & (_UINT32_(value) << DDR3PHY_MR1_DDR3_RTT0_Pos))
#define DDR3PHY_MR1_DDR3_AL_Pos               _UINT32_(3)                                          /* (DDR3PHY_MR1) Posted CAS Additive Latency Position */
#define DDR3PHY_MR1_DDR3_AL_Msk               (_UINT32_(0x3) << DDR3PHY_MR1_DDR3_AL_Pos)           /* (DDR3PHY_MR1) Posted CAS Additive Latency Mask */
#define DDR3PHY_MR1_DDR3_AL(value)            (DDR3PHY_MR1_DDR3_AL_Msk & (_UINT32_(value) << DDR3PHY_MR1_DDR3_AL_Pos))
#define DDR3PHY_MR1_DDR3_DIC1_Pos             _UINT32_(5)                                          /* (DDR3PHY_MR1) Output Driver Impedance Control 1 Position */
#define DDR3PHY_MR1_DDR3_DIC1_Msk             (_UINT32_(0x1) << DDR3PHY_MR1_DDR3_DIC1_Pos)         /* (DDR3PHY_MR1) Output Driver Impedance Control 1 Mask */
#define DDR3PHY_MR1_DDR3_DIC1(value)          (DDR3PHY_MR1_DDR3_DIC1_Msk & (_UINT32_(value) << DDR3PHY_MR1_DDR3_DIC1_Pos))
#define DDR3PHY_MR1_DDR3_RTT1_Pos             _UINT32_(6)                                          /* (DDR3PHY_MR1) On-Die Termination 1 Position */
#define DDR3PHY_MR1_DDR3_RTT1_Msk             (_UINT32_(0x1) << DDR3PHY_MR1_DDR3_RTT1_Pos)         /* (DDR3PHY_MR1) On-Die Termination 1 Mask */
#define DDR3PHY_MR1_DDR3_RTT1(value)          (DDR3PHY_MR1_DDR3_RTT1_Msk & (_UINT32_(value) << DDR3PHY_MR1_DDR3_RTT1_Pos))
#define DDR3PHY_MR1_DDR3_LEVEL_Pos            _UINT32_(7)                                          /* (DDR3PHY_MR1) Write Leveling Enable Position */
#define DDR3PHY_MR1_DDR3_LEVEL_Msk            (_UINT32_(0x1) << DDR3PHY_MR1_DDR3_LEVEL_Pos)        /* (DDR3PHY_MR1) Write Leveling Enable Mask */
#define DDR3PHY_MR1_DDR3_LEVEL(value)         (DDR3PHY_MR1_DDR3_LEVEL_Msk & (_UINT32_(value) << DDR3PHY_MR1_DDR3_LEVEL_Pos))
#define DDR3PHY_MR1_DDR3_RTT2_Pos             _UINT32_(9)                                          /* (DDR3PHY_MR1) On-Die Termination 2 Position */
#define DDR3PHY_MR1_DDR3_RTT2_Msk             (_UINT32_(0x1) << DDR3PHY_MR1_DDR3_RTT2_Pos)         /* (DDR3PHY_MR1) On-Die Termination 2 Mask */
#define DDR3PHY_MR1_DDR3_RTT2(value)          (DDR3PHY_MR1_DDR3_RTT2_Msk & (_UINT32_(value) << DDR3PHY_MR1_DDR3_RTT2_Pos))
#define DDR3PHY_MR1_DDR3_TDQS_Pos             _UINT32_(11)                                         /* (DDR3PHY_MR1) Termination Data Strobe Position */
#define DDR3PHY_MR1_DDR3_TDQS_Msk             (_UINT32_(0x1) << DDR3PHY_MR1_DDR3_TDQS_Pos)         /* (DDR3PHY_MR1) Termination Data Strobe Mask */
#define DDR3PHY_MR1_DDR3_TDQS(value)          (DDR3PHY_MR1_DDR3_TDQS_Msk & (_UINT32_(value) << DDR3PHY_MR1_DDR3_TDQS_Pos))
#define DDR3PHY_MR1_DDR3_QOFF_Pos             _UINT32_(12)                                         /* (DDR3PHY_MR1) Output Enable/Disable Position */
#define DDR3PHY_MR1_DDR3_QOFF_Msk             (_UINT32_(0x1) << DDR3PHY_MR1_DDR3_QOFF_Pos)         /* (DDR3PHY_MR1) Output Enable/Disable Mask */
#define DDR3PHY_MR1_DDR3_QOFF(value)          (DDR3PHY_MR1_DDR3_QOFF_Msk & (_UINT32_(value) << DDR3PHY_MR1_DDR3_QOFF_Pos))
#define DDR3PHY_MR1_DDR3_Msk                  _UINT32_(0x00001AFF)                                 /* (DDR3PHY_MR1_DDR3) Register Mask  */

/* DDR2 mode */
#define DDR3PHY_MR1_DDR2_DE_Pos               _UINT32_(0)                                          /* (DDR3PHY_MR1) DLL Enable/Disable Position */
#define DDR3PHY_MR1_DDR2_DE_Msk               (_UINT32_(0x1) << DDR3PHY_MR1_DDR2_DE_Pos)           /* (DDR3PHY_MR1) DLL Enable/Disable Mask */
#define DDR3PHY_MR1_DDR2_DE(value)            (DDR3PHY_MR1_DDR2_DE_Msk & (_UINT32_(value) << DDR3PHY_MR1_DDR2_DE_Pos))
#define DDR3PHY_MR1_DDR2_DIC_Pos              _UINT32_(1)                                          /* (DDR3PHY_MR1) Output Driver Impedance Control Position */
#define DDR3PHY_MR1_DDR2_DIC_Msk              (_UINT32_(0x1) << DDR3PHY_MR1_DDR2_DIC_Pos)          /* (DDR3PHY_MR1) Output Driver Impedance Control Mask */
#define DDR3PHY_MR1_DDR2_DIC(value)           (DDR3PHY_MR1_DDR2_DIC_Msk & (_UINT32_(value) << DDR3PHY_MR1_DDR2_DIC_Pos))
#define DDR3PHY_MR1_DDR2_RTT0_Pos             _UINT32_(2)                                          /* (DDR3PHY_MR1) On-Die Termination 0 Position */
#define DDR3PHY_MR1_DDR2_RTT0_Msk             (_UINT32_(0x1) << DDR3PHY_MR1_DDR2_RTT0_Pos)         /* (DDR3PHY_MR1) On-Die Termination 0 Mask */
#define DDR3PHY_MR1_DDR2_RTT0(value)          (DDR3PHY_MR1_DDR2_RTT0_Msk & (_UINT32_(value) << DDR3PHY_MR1_DDR2_RTT0_Pos))
#define DDR3PHY_MR1_DDR2_AL_Pos               _UINT32_(3)                                          /* (DDR3PHY_MR1) Posted CAS Additive Latency Position */
#define DDR3PHY_MR1_DDR2_AL_Msk               (_UINT32_(0x7) << DDR3PHY_MR1_DDR2_AL_Pos)           /* (DDR3PHY_MR1) Posted CAS Additive Latency Mask */
#define DDR3PHY_MR1_DDR2_AL(value)            (DDR3PHY_MR1_DDR2_AL_Msk & (_UINT32_(value) << DDR3PHY_MR1_DDR2_AL_Pos))
#define DDR3PHY_MR1_DDR2_RTT1_Pos             _UINT32_(6)                                          /* (DDR3PHY_MR1) On-Die Termination 1 Position */
#define DDR3PHY_MR1_DDR2_RTT1_Msk             (_UINT32_(0x1) << DDR3PHY_MR1_DDR2_RTT1_Pos)         /* (DDR3PHY_MR1) On-Die Termination 1 Mask */
#define DDR3PHY_MR1_DDR2_RTT1(value)          (DDR3PHY_MR1_DDR2_RTT1_Msk & (_UINT32_(value) << DDR3PHY_MR1_DDR2_RTT1_Pos))
#define DDR3PHY_MR1_DDR2_OCD_Pos              _UINT32_(7)                                          /* (DDR3PHY_MR1) Off-Chip Driver (OCD) Impedance Calibration Position */
#define DDR3PHY_MR1_DDR2_OCD_Msk              (_UINT32_(0x7) << DDR3PHY_MR1_DDR2_OCD_Pos)          /* (DDR3PHY_MR1) Off-Chip Driver (OCD) Impedance Calibration Mask */
#define DDR3PHY_MR1_DDR2_OCD(value)           (DDR3PHY_MR1_DDR2_OCD_Msk & (_UINT32_(value) << DDR3PHY_MR1_DDR2_OCD_Pos))
#define DDR3PHY_MR1_DDR2_RDQS_Pos             _UINT32_(11)                                         /* (DDR3PHY_MR1) RDQS Enable/Disable Position */
#define DDR3PHY_MR1_DDR2_RDQS_Msk             (_UINT32_(0x1) << DDR3PHY_MR1_DDR2_RDQS_Pos)         /* (DDR3PHY_MR1) RDQS Enable/Disable Mask */
#define DDR3PHY_MR1_DDR2_RDQS(value)          (DDR3PHY_MR1_DDR2_RDQS_Msk & (_UINT32_(value) << DDR3PHY_MR1_DDR2_RDQS_Pos))
#define DDR3PHY_MR1_DDR2_QOFF_Pos             _UINT32_(12)                                         /* (DDR3PHY_MR1) Output Enable/Disable Position */
#define DDR3PHY_MR1_DDR2_QOFF_Msk             (_UINT32_(0x1) << DDR3PHY_MR1_DDR2_QOFF_Pos)         /* (DDR3PHY_MR1) Output Enable/Disable Mask */
#define DDR3PHY_MR1_DDR2_QOFF(value)          (DDR3PHY_MR1_DDR2_QOFF_Msk & (_UINT32_(value) << DDR3PHY_MR1_DDR2_QOFF_Pos))
#define DDR3PHY_MR1_DDR2_Msk                  _UINT32_(0x00001BFF)                                 /* (DDR3PHY_MR1_DDR2) Register Mask  */

/* LPDDR2 mode */
#define DDR3PHY_MR1_LPDDR2_BL_Pos             _UINT32_(0)                                          /* (DDR3PHY_MR1) Burst Length Position */
#define DDR3PHY_MR1_LPDDR2_BL_Msk             (_UINT32_(0x7) << DDR3PHY_MR1_LPDDR2_BL_Pos)         /* (DDR3PHY_MR1) Burst Length Mask */
#define DDR3PHY_MR1_LPDDR2_BL(value)          (DDR3PHY_MR1_LPDDR2_BL_Msk & (_UINT32_(value) << DDR3PHY_MR1_LPDDR2_BL_Pos))
#define DDR3PHY_MR1_LPDDR2_BT_Pos             _UINT32_(3)                                          /* (DDR3PHY_MR1) Burst Type Position */
#define DDR3PHY_MR1_LPDDR2_BT_Msk             (_UINT32_(0x1) << DDR3PHY_MR1_LPDDR2_BT_Pos)         /* (DDR3PHY_MR1) Burst Type Mask */
#define DDR3PHY_MR1_LPDDR2_BT(value)          (DDR3PHY_MR1_LPDDR2_BT_Msk & (_UINT32_(value) << DDR3PHY_MR1_LPDDR2_BT_Pos))
#define DDR3PHY_MR1_LPDDR2_WC_Pos             _UINT32_(4)                                          /* (DDR3PHY_MR1) Wrap Control Position */
#define DDR3PHY_MR1_LPDDR2_WC_Msk             (_UINT32_(0x1) << DDR3PHY_MR1_LPDDR2_WC_Pos)         /* (DDR3PHY_MR1) Wrap Control Mask */
#define DDR3PHY_MR1_LPDDR2_WC(value)          (DDR3PHY_MR1_LPDDR2_WC_Msk & (_UINT32_(value) << DDR3PHY_MR1_LPDDR2_WC_Pos))
#define DDR3PHY_MR1_LPDDR2_nWR_Pos            _UINT32_(5)                                          /* (DDR3PHY_MR1) Write Recovery Position */
#define DDR3PHY_MR1_LPDDR2_nWR_Msk            (_UINT32_(0x7) << DDR3PHY_MR1_LPDDR2_nWR_Pos)        /* (DDR3PHY_MR1) Write Recovery Mask */
#define DDR3PHY_MR1_LPDDR2_nWR(value)         (DDR3PHY_MR1_LPDDR2_nWR_Msk & (_UINT32_(value) << DDR3PHY_MR1_LPDDR2_nWR_Pos))
#define DDR3PHY_MR1_LPDDR2_Msk                _UINT32_(0x000000FF)                                 /* (DDR3PHY_MR1_LPDDR2) Register Mask  */

/* LPDDR3 mode */
#define DDR3PHY_MR1_LPDDR3_BL_Pos             _UINT32_(0)                                          /* (DDR3PHY_MR1) Burst Length Position */
#define DDR3PHY_MR1_LPDDR3_BL_Msk             (_UINT32_(0x7) << DDR3PHY_MR1_LPDDR3_BL_Pos)         /* (DDR3PHY_MR1) Burst Length Mask */
#define DDR3PHY_MR1_LPDDR3_BL(value)          (DDR3PHY_MR1_LPDDR3_BL_Msk & (_UINT32_(value) << DDR3PHY_MR1_LPDDR3_BL_Pos))
#define DDR3PHY_MR1_LPDDR3_nWR_Pos            _UINT32_(5)                                          /* (DDR3PHY_MR1) Write Recovery Position */
#define DDR3PHY_MR1_LPDDR3_nWR_Msk            (_UINT32_(0x7) << DDR3PHY_MR1_LPDDR3_nWR_Pos)        /* (DDR3PHY_MR1) Write Recovery Mask */
#define DDR3PHY_MR1_LPDDR3_nWR(value)         (DDR3PHY_MR1_LPDDR3_nWR_Msk & (_UINT32_(value) << DDR3PHY_MR1_LPDDR3_nWR_Pos))
#define DDR3PHY_MR1_LPDDR3_Msk                _UINT32_(0x000000E7)                                 /* (DDR3PHY_MR1_LPDDR3) Register Mask  */


/* -------- DDR3PHY_MR2 : (DDR3PHY Offset: 0x48) (R/W 32) Extended Mode Register 2 -------- */
#define DDR3PHY_MR2_Msk                       _UINT32_(0x00000000)                                 /* (DDR3PHY_MR2) Register Mask  */

/* DDR3 mode */
#define DDR3PHY_MR2_DDR3_PASR_Pos             _UINT32_(0)                                          /* (DDR3PHY_MR2) Partial Array Self Refresh Position */
#define DDR3PHY_MR2_DDR3_PASR_Msk             (_UINT32_(0x7) << DDR3PHY_MR2_DDR3_PASR_Pos)         /* (DDR3PHY_MR2) Partial Array Self Refresh Mask */
#define DDR3PHY_MR2_DDR3_PASR(value)          (DDR3PHY_MR2_DDR3_PASR_Msk & (_UINT32_(value) << DDR3PHY_MR2_DDR3_PASR_Pos))
#define DDR3PHY_MR2_DDR3_CWL_Pos              _UINT32_(3)                                          /* (DDR3PHY_MR2) CAS Write Latency Position */
#define DDR3PHY_MR2_DDR3_CWL_Msk              (_UINT32_(0x7) << DDR3PHY_MR2_DDR3_CWL_Pos)          /* (DDR3PHY_MR2) CAS Write Latency Mask */
#define DDR3PHY_MR2_DDR3_CWL(value)           (DDR3PHY_MR2_DDR3_CWL_Msk & (_UINT32_(value) << DDR3PHY_MR2_DDR3_CWL_Pos))
#define DDR3PHY_MR2_DDR3_ASR_Pos              _UINT32_(6)                                          /* (DDR3PHY_MR2) Auto Self-Refresh Position */
#define DDR3PHY_MR2_DDR3_ASR_Msk              (_UINT32_(0x1) << DDR3PHY_MR2_DDR3_ASR_Pos)          /* (DDR3PHY_MR2) Auto Self-Refresh Mask */
#define DDR3PHY_MR2_DDR3_ASR(value)           (DDR3PHY_MR2_DDR3_ASR_Msk & (_UINT32_(value) << DDR3PHY_MR2_DDR3_ASR_Pos))
#define DDR3PHY_MR2_DDR3_SRT_Pos              _UINT32_(7)                                          /* (DDR3PHY_MR2) Self-Refresh Temperature Range Position */
#define DDR3PHY_MR2_DDR3_SRT_Msk              (_UINT32_(0x1) << DDR3PHY_MR2_DDR3_SRT_Pos)          /* (DDR3PHY_MR2) Self-Refresh Temperature Range Mask */
#define DDR3PHY_MR2_DDR3_SRT(value)           (DDR3PHY_MR2_DDR3_SRT_Msk & (_UINT32_(value) << DDR3PHY_MR2_DDR3_SRT_Pos))
#define DDR3PHY_MR2_DDR3_RTTWR_Pos            _UINT32_(9)                                          /* (DDR3PHY_MR2) Dynamic ODT Position */
#define DDR3PHY_MR2_DDR3_RTTWR_Msk            (_UINT32_(0x3) << DDR3PHY_MR2_DDR3_RTTWR_Pos)        /* (DDR3PHY_MR2) Dynamic ODT Mask */
#define DDR3PHY_MR2_DDR3_RTTWR(value)         (DDR3PHY_MR2_DDR3_RTTWR_Msk & (_UINT32_(value) << DDR3PHY_MR2_DDR3_RTTWR_Pos))
#define DDR3PHY_MR2_DDR3_RSVD_Pos             _UINT32_(11)                                         /* (DDR3PHY_MR2) Reserved Position */
#define DDR3PHY_MR2_DDR3_RSVD_Msk             (_UINT32_(0x1F) << DDR3PHY_MR2_DDR3_RSVD_Pos)        /* (DDR3PHY_MR2) Reserved Mask */
#define DDR3PHY_MR2_DDR3_RSVD(value)          (DDR3PHY_MR2_DDR3_RSVD_Msk & (_UINT32_(value) << DDR3PHY_MR2_DDR3_RSVD_Pos))
#define DDR3PHY_MR2_DDR3_Msk                  _UINT32_(0x0000FEFF)                                 /* (DDR3PHY_MR2_DDR3) Register Mask  */

/* DDR2 mode */
#define DDR3PHY_MR2_DDR2_PASR_Pos             _UINT32_(0)                                          /* (DDR3PHY_MR2) Partial Array Self Refresh Position */
#define DDR3PHY_MR2_DDR2_PASR_Msk             (_UINT32_(0x7) << DDR3PHY_MR2_DDR2_PASR_Pos)         /* (DDR3PHY_MR2) Partial Array Self Refresh Mask */
#define DDR3PHY_MR2_DDR2_PASR(value)          (DDR3PHY_MR2_DDR2_PASR_Msk & (_UINT32_(value) << DDR3PHY_MR2_DDR2_PASR_Pos))
#define DDR3PHY_MR2_DDR2_DCC_Pos              _UINT32_(3)                                          /* (DDR3PHY_MR2) Duty Cycle Corrector Position */
#define DDR3PHY_MR2_DDR2_DCC_Msk              (_UINT32_(0x1) << DDR3PHY_MR2_DDR2_DCC_Pos)          /* (DDR3PHY_MR2) Duty Cycle Corrector Mask */
#define DDR3PHY_MR2_DDR2_DCC(value)           (DDR3PHY_MR2_DDR2_DCC_Msk & (_UINT32_(value) << DDR3PHY_MR2_DDR2_DCC_Pos))
#define DDR3PHY_MR2_DDR2_SRF_Pos              _UINT32_(7)                                          /* (DDR3PHY_MR2) Self-Refresh Rate Position */
#define DDR3PHY_MR2_DDR2_SRF_Msk              (_UINT32_(0x1) << DDR3PHY_MR2_DDR2_SRF_Pos)          /* (DDR3PHY_MR2) Self-Refresh Rate Mask */
#define DDR3PHY_MR2_DDR2_SRF(value)           (DDR3PHY_MR2_DDR2_SRF_Msk & (_UINT32_(value) << DDR3PHY_MR2_DDR2_SRF_Pos))
#define DDR3PHY_MR2_DDR2_RSVD_Pos             _UINT32_(11)                                         /* (DDR3PHY_MR2) Reserved Position */
#define DDR3PHY_MR2_DDR2_RSVD_Msk             (_UINT32_(0x1F) << DDR3PHY_MR2_DDR2_RSVD_Pos)        /* (DDR3PHY_MR2) Reserved Mask */
#define DDR3PHY_MR2_DDR2_RSVD(value)          (DDR3PHY_MR2_DDR2_RSVD_Msk & (_UINT32_(value) << DDR3PHY_MR2_DDR2_RSVD_Pos))
#define DDR3PHY_MR2_DDR2_Msk                  _UINT32_(0x0000F88F)                                 /* (DDR3PHY_MR2_DDR2) Register Mask  */

/* LPDDR2 mode */
#define DDR3PHY_MR2_LPDDR2_RLWL_Pos           _UINT32_(0)                                          /* (DDR3PHY_MR2) Read and Write Latency Position */
#define DDR3PHY_MR2_LPDDR2_RLWL_Msk           (_UINT32_(0xF) << DDR3PHY_MR2_LPDDR2_RLWL_Pos)       /* (DDR3PHY_MR2) Read and Write Latency Mask */
#define DDR3PHY_MR2_LPDDR2_RLWL(value)        (DDR3PHY_MR2_LPDDR2_RLWL_Msk & (_UINT32_(value) << DDR3PHY_MR2_LPDDR2_RLWL_Pos))
#define DDR3PHY_MR2_LPDDR2_RSVD_Pos           _UINT32_(4)                                          /* (DDR3PHY_MR2) Reserved Position */
#define DDR3PHY_MR2_LPDDR2_RSVD_Msk           (_UINT32_(0xF) << DDR3PHY_MR2_LPDDR2_RSVD_Pos)       /* (DDR3PHY_MR2) Reserved Mask */
#define DDR3PHY_MR2_LPDDR2_RSVD(value)        (DDR3PHY_MR2_LPDDR2_RSVD_Msk & (_UINT32_(value) << DDR3PHY_MR2_LPDDR2_RSVD_Pos))
#define DDR3PHY_MR2_LPDDR2_Msk                _UINT32_(0x000000FF)                                 /* (DDR3PHY_MR2_LPDDR2) Register Mask  */

/* LPDDR3 mode */
#define DDR3PHY_MR2_LPDDR3_RLWL_Pos           _UINT32_(0)                                          /* (DDR3PHY_MR2) Read and Write Latency Position */
#define DDR3PHY_MR2_LPDDR3_RLWL_Msk           (_UINT32_(0xF) << DDR3PHY_MR2_LPDDR3_RLWL_Pos)       /* (DDR3PHY_MR2) Read and Write Latency Mask */
#define DDR3PHY_MR2_LPDDR3_RLWL(value)        (DDR3PHY_MR2_LPDDR3_RLWL_Msk & (_UINT32_(value) << DDR3PHY_MR2_LPDDR3_RLWL_Pos))
#define DDR3PHY_MR2_LPDDR3_RSVD_Pos           _UINT32_(4)                                          /* (DDR3PHY_MR2) Reserved Position */
#define DDR3PHY_MR2_LPDDR3_RSVD_Msk           (_UINT32_(0xF) << DDR3PHY_MR2_LPDDR3_RSVD_Pos)       /* (DDR3PHY_MR2) Reserved Mask */
#define DDR3PHY_MR2_LPDDR3_RSVD(value)        (DDR3PHY_MR2_LPDDR3_RSVD_Msk & (_UINT32_(value) << DDR3PHY_MR2_LPDDR3_RSVD_Pos))
#define DDR3PHY_MR2_LPDDR3_Msk                _UINT32_(0x000000FF)                                 /* (DDR3PHY_MR2_LPDDR3) Register Mask  */


/* -------- DDR3PHY_MR3 : (DDR3PHY Offset: 0x4C) (R/W 32) Extended Mode Register 3 -------- */
#define DDR3PHY_MR3_Msk                       _UINT32_(0x00000000)                                 /* (DDR3PHY_MR3) Register Mask  */

/* DDR3 mode */
#define DDR3PHY_MR3_DDR3_MPRLOC_Pos           _UINT32_(0)                                          /* (DDR3PHY_MR3) Multi-Purpose Register (MPR) Location Position */
#define DDR3PHY_MR3_DDR3_MPRLOC_Msk           (_UINT32_(0x3) << DDR3PHY_MR3_DDR3_MPRLOC_Pos)       /* (DDR3PHY_MR3) Multi-Purpose Register (MPR) Location Mask */
#define DDR3PHY_MR3_DDR3_MPRLOC(value)        (DDR3PHY_MR3_DDR3_MPRLOC_Msk & (_UINT32_(value) << DDR3PHY_MR3_DDR3_MPRLOC_Pos))
#define DDR3PHY_MR3_DDR3_MPR_Pos              _UINT32_(2)                                          /* (DDR3PHY_MR3) Multi-Purpose Register Enable Position */
#define DDR3PHY_MR3_DDR3_MPR_Msk              (_UINT32_(0x1) << DDR3PHY_MR3_DDR3_MPR_Pos)          /* (DDR3PHY_MR3) Multi-Purpose Register Enable Mask */
#define DDR3PHY_MR3_DDR3_MPR(value)           (DDR3PHY_MR3_DDR3_MPR_Msk & (_UINT32_(value) << DDR3PHY_MR3_DDR3_MPR_Pos))
#define DDR3PHY_MR3_DDR3_RSVD_Pos             _UINT32_(3)                                          /* (DDR3PHY_MR3) Reserved Position */
#define DDR3PHY_MR3_DDR3_RSVD_Msk             (_UINT32_(0x1FFF) << DDR3PHY_MR3_DDR3_RSVD_Pos)      /* (DDR3PHY_MR3) Reserved Mask */
#define DDR3PHY_MR3_DDR3_RSVD(value)          (DDR3PHY_MR3_DDR3_RSVD_Msk & (_UINT32_(value) << DDR3PHY_MR3_DDR3_RSVD_Pos))
#define DDR3PHY_MR3_DDR3_Msk                  _UINT32_(0x0000FFFF)                                 /* (DDR3PHY_MR3_DDR3) Register Mask  */

/* EMR3_DDR2 mode */
#define DDR3PHY_MR3_EMR3_DDR2_RSVD_Pos        _UINT32_(0)                                          /* (DDR3PHY_MR3) Reserved Position */
#define DDR3PHY_MR3_EMR3_DDR2_RSVD_Msk        (_UINT32_(0xFFFF) << DDR3PHY_MR3_EMR3_DDR2_RSVD_Pos) /* (DDR3PHY_MR3) Reserved Mask */
#define DDR3PHY_MR3_EMR3_DDR2_RSVD(value)     (DDR3PHY_MR3_EMR3_DDR2_RSVD_Msk & (_UINT32_(value) << DDR3PHY_MR3_EMR3_DDR2_RSVD_Pos))
#define DDR3PHY_MR3_EMR3_DDR2_Msk             _UINT32_(0x0000FFFF)                                 /* (DDR3PHY_MR3_EMR3_DDR2) Register Mask  */

/* LPDDR2 mode */
#define DDR3PHY_MR3_LPDDR2_DS_Pos             _UINT32_(0)                                          /* (DDR3PHY_MR3) Drive Strength Position */
#define DDR3PHY_MR3_LPDDR2_DS_Msk             (_UINT32_(0xF) << DDR3PHY_MR3_LPDDR2_DS_Pos)         /* (DDR3PHY_MR3) Drive Strength Mask */
#define DDR3PHY_MR3_LPDDR2_DS(value)          (DDR3PHY_MR3_LPDDR2_DS_Msk & (_UINT32_(value) << DDR3PHY_MR3_LPDDR2_DS_Pos))
#define DDR3PHY_MR3_LPDDR2_RSVD_Pos           _UINT32_(4)                                          /* (DDR3PHY_MR3) Reserved Position */
#define DDR3PHY_MR3_LPDDR2_RSVD_Msk           (_UINT32_(0xF) << DDR3PHY_MR3_LPDDR2_RSVD_Pos)       /* (DDR3PHY_MR3) Reserved Mask */
#define DDR3PHY_MR3_LPDDR2_RSVD(value)        (DDR3PHY_MR3_LPDDR2_RSVD_Msk & (_UINT32_(value) << DDR3PHY_MR3_LPDDR2_RSVD_Pos))
#define DDR3PHY_MR3_LPDDR2_Msk                _UINT32_(0x000000FF)                                 /* (DDR3PHY_MR3_LPDDR2) Register Mask  */

/* LPDDR3 mode */
#define DDR3PHY_MR3_LPDDR3_DQODT_Pos          _UINT32_(0)                                          /* (DDR3PHY_MR3) On-Die Termination Position */
#define DDR3PHY_MR3_LPDDR3_DQODT_Msk          (_UINT32_(0x3) << DDR3PHY_MR3_LPDDR3_DQODT_Pos)      /* (DDR3PHY_MR3) On-Die Termination Mask */
#define DDR3PHY_MR3_LPDDR3_DQODT(value)       (DDR3PHY_MR3_LPDDR3_DQODT_Msk & (_UINT32_(value) << DDR3PHY_MR3_LPDDR3_DQODT_Pos))
#define DDR3PHY_MR3_LPDDR3_PDCTL_Pos          _UINT32_(2)                                          /* (DDR3PHY_MR3) Power-Down Control Position */
#define DDR3PHY_MR3_LPDDR3_PDCTL_Msk          (_UINT32_(0x3) << DDR3PHY_MR3_LPDDR3_PDCTL_Pos)      /* (DDR3PHY_MR3) Power-Down Control Mask */
#define DDR3PHY_MR3_LPDDR3_PDCTL(value)       (DDR3PHY_MR3_LPDDR3_PDCTL_Msk & (_UINT32_(value) << DDR3PHY_MR3_LPDDR3_PDCTL_Pos))
#define DDR3PHY_MR3_LPDDR3_RSVD_Pos           _UINT32_(4)                                          /* (DDR3PHY_MR3) Reserved Position */
#define DDR3PHY_MR3_LPDDR3_RSVD_Msk           (_UINT32_(0xF) << DDR3PHY_MR3_LPDDR3_RSVD_Pos)       /* (DDR3PHY_MR3) Reserved Mask */
#define DDR3PHY_MR3_LPDDR3_RSVD(value)        (DDR3PHY_MR3_LPDDR3_RSVD_Msk & (_UINT32_(value) << DDR3PHY_MR3_LPDDR3_RSVD_Pos))
#define DDR3PHY_MR3_LPDDR3_Msk                _UINT32_(0x000000FF)                                 /* (DDR3PHY_MR3_LPDDR3) Register Mask  */


/* -------- DDR3PHY_ODTCR : (DDR3PHY Offset: 0x50) (R/W 32) ODT Configuration Register -------- */
#define DDR3PHY_ODTCR_RDODT0_Pos              _UINT32_(0)                                          /* (DDR3PHY_ODTCR)  Position */
#define DDR3PHY_ODTCR_RDODT0_Msk              (_UINT32_(0x1) << DDR3PHY_ODTCR_RDODT0_Pos)          /* (DDR3PHY_ODTCR)  Mask */
#define DDR3PHY_ODTCR_RDODT0(value)           (DDR3PHY_ODTCR_RDODT0_Msk & (_UINT32_(value) << DDR3PHY_ODTCR_RDODT0_Pos)) /* Assignment of value for RDODT0 in the DDR3PHY_ODTCR register */
#define DDR3PHY_ODTCR_WRODT0_Pos              _UINT32_(16)                                         /* (DDR3PHY_ODTCR) Write ODT: Specifies whether ODT should be enabled ('1') or disabled ('0') on each of the up to four ranks when a write command is sent to rank n. WRODT0, Position */
#define DDR3PHY_ODTCR_WRODT0_Msk              (_UINT32_(0x1) << DDR3PHY_ODTCR_WRODT0_Pos)          /* (DDR3PHY_ODTCR) Write ODT: Specifies whether ODT should be enabled ('1') or disabled ('0') on each of the up to four ranks when a write command is sent to rank n. WRODT0, Mask */
#define DDR3PHY_ODTCR_WRODT0(value)           (DDR3PHY_ODTCR_WRODT0_Msk & (_UINT32_(value) << DDR3PHY_ODTCR_WRODT0_Pos)) /* Assignment of value for WRODT0 in the DDR3PHY_ODTCR register */
#define DDR3PHY_ODTCR_Msk                     _UINT32_(0x00010001)                                 /* (DDR3PHY_ODTCR) Register Mask  */

#define DDR3PHY_ODTCR_RDODT_Pos               _UINT32_(0)                                          /* (DDR3PHY_ODTCR Position)  */
#define DDR3PHY_ODTCR_RDODT_Msk               (_UINT32_(0x1) << DDR3PHY_ODTCR_RDODT_Pos)           /* (DDR3PHY_ODTCR Mask) RDODT */
#define DDR3PHY_ODTCR_RDODT(value)            (DDR3PHY_ODTCR_RDODT_Msk & (_UINT32_(value) << DDR3PHY_ODTCR_RDODT_Pos)) 
#define DDR3PHY_ODTCR_WRODT_Pos               _UINT32_(16)                                         /* (DDR3PHY_ODTCR Position) Write ODT: Specifies whether ODT should be enabled ('x') or disabled ('x') on each of the up to four ranks when a write command is sent to rank n. WRODTx, */
#define DDR3PHY_ODTCR_WRODT_Msk               (_UINT32_(0x1) << DDR3PHY_ODTCR_WRODT_Pos)           /* (DDR3PHY_ODTCR Mask) WRODT */
#define DDR3PHY_ODTCR_WRODT(value)            (DDR3PHY_ODTCR_WRODT_Msk & (_UINT32_(value) << DDR3PHY_ODTCR_WRODT_Pos)) 

/* -------- DDR3PHY_DTAR : (DDR3PHY Offset: 0x54) (R/W 32) Data Training Address Register -------- */
#define DDR3PHY_DTAR_DTCOL_Pos                _UINT32_(0)                                          /* (DDR3PHY_DTAR) Data Training Column Address: Selects the SDRAM column address to be used during data training. The lower four bits of this address must always be "0000". Position */
#define DDR3PHY_DTAR_DTCOL_Msk                (_UINT32_(0xFFF) << DDR3PHY_DTAR_DTCOL_Pos)          /* (DDR3PHY_DTAR) Data Training Column Address: Selects the SDRAM column address to be used during data training. The lower four bits of this address must always be "0000". Mask */
#define DDR3PHY_DTAR_DTCOL(value)             (DDR3PHY_DTAR_DTCOL_Msk & (_UINT32_(value) << DDR3PHY_DTAR_DTCOL_Pos)) /* Assignment of value for DTCOL in the DDR3PHY_DTAR register */
#define DDR3PHY_DTAR_DTROW_Pos                _UINT32_(12)                                         /* (DDR3PHY_DTAR) Data Training Row Address: Selects the SDRAM row address to be used during data training. Position */
#define DDR3PHY_DTAR_DTROW_Msk                (_UINT32_(0xFFFF) << DDR3PHY_DTAR_DTROW_Pos)         /* (DDR3PHY_DTAR) Data Training Row Address: Selects the SDRAM row address to be used during data training. Mask */
#define DDR3PHY_DTAR_DTROW(value)             (DDR3PHY_DTAR_DTROW_Msk & (_UINT32_(value) << DDR3PHY_DTAR_DTROW_Pos)) /* Assignment of value for DTROW in the DDR3PHY_DTAR register */
#define DDR3PHY_DTAR_DTBANK_Pos               _UINT32_(28)                                         /* (DDR3PHY_DTAR) Data Training Bank Address: Selects the SDRAM bank address to be used during data training. Position */
#define DDR3PHY_DTAR_DTBANK_Msk               (_UINT32_(0x7) << DDR3PHY_DTAR_DTBANK_Pos)           /* (DDR3PHY_DTAR) Data Training Bank Address: Selects the SDRAM bank address to be used during data training. Mask */
#define DDR3PHY_DTAR_DTBANK(value)            (DDR3PHY_DTAR_DTBANK_Msk & (_UINT32_(value) << DDR3PHY_DTAR_DTBANK_Pos)) /* Assignment of value for DTBANK in the DDR3PHY_DTAR register */
#define DDR3PHY_DTAR_DTMPR_Pos                _UINT32_(31)                                         /* (DDR3PHY_DTAR) Data Training Using MPR (DDR3 Only): Specifies, if set, that data-training should use the SDRAM Multi-Purpose Register (MPR) register. Otherwise data-training is performed by first writing to some locations in the SDRAM and then reading them back. Position */
#define DDR3PHY_DTAR_DTMPR_Msk                (_UINT32_(0x1) << DDR3PHY_DTAR_DTMPR_Pos)            /* (DDR3PHY_DTAR) Data Training Using MPR (DDR3 Only): Specifies, if set, that data-training should use the SDRAM Multi-Purpose Register (MPR) register. Otherwise data-training is performed by first writing to some locations in the SDRAM and then reading them back. Mask */
#define DDR3PHY_DTAR_DTMPR(value)             (DDR3PHY_DTAR_DTMPR_Msk & (_UINT32_(value) << DDR3PHY_DTAR_DTMPR_Pos)) /* Assignment of value for DTMPR in the DDR3PHY_DTAR register */
#define DDR3PHY_DTAR_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (DDR3PHY_DTAR) Register Mask  */


/* -------- DDR3PHY_DTDR0 : (DDR3PHY Offset: 0x58) (R/W 32) Data Training Data Register 0 -------- */
#define DDR3PHY_DTDR0_DTBYTE0_Pos             _UINT32_(0)                                          /* (DDR3PHY_DTDR0) Data Training Data: The first 4 bytes of data used during data training. This same data byte is used for each Byte Lane. Default sequence is a walking 1 while toggling data every data cycle. Position */
#define DDR3PHY_DTDR0_DTBYTE0_Msk             (_UINT32_(0xFF) << DDR3PHY_DTDR0_DTBYTE0_Pos)        /* (DDR3PHY_DTDR0) Data Training Data: The first 4 bytes of data used during data training. This same data byte is used for each Byte Lane. Default sequence is a walking 1 while toggling data every data cycle. Mask */
#define DDR3PHY_DTDR0_DTBYTE0(value)          (DDR3PHY_DTDR0_DTBYTE0_Msk & (_UINT32_(value) << DDR3PHY_DTDR0_DTBYTE0_Pos)) /* Assignment of value for DTBYTE0 in the DDR3PHY_DTDR0 register */
#define DDR3PHY_DTDR0_DTBYTE1_Pos             _UINT32_(8)                                          /* (DDR3PHY_DTDR0) Data Training Data: The first 4 bytes of data used during data training. This same data byte is used for each Byte Lane. Default sequence is a walking 1 while toggling data every data cycle. Position */
#define DDR3PHY_DTDR0_DTBYTE1_Msk             (_UINT32_(0xFF) << DDR3PHY_DTDR0_DTBYTE1_Pos)        /* (DDR3PHY_DTDR0) Data Training Data: The first 4 bytes of data used during data training. This same data byte is used for each Byte Lane. Default sequence is a walking 1 while toggling data every data cycle. Mask */
#define DDR3PHY_DTDR0_DTBYTE1(value)          (DDR3PHY_DTDR0_DTBYTE1_Msk & (_UINT32_(value) << DDR3PHY_DTDR0_DTBYTE1_Pos)) /* Assignment of value for DTBYTE1 in the DDR3PHY_DTDR0 register */
#define DDR3PHY_DTDR0_DTBYTE2_Pos             _UINT32_(16)                                         /* (DDR3PHY_DTDR0) Data Training Data: The first 4 bytes of data used during data training. This same data byte is used for each Byte Lane. Default sequence is a walking 1 while toggling data every data cycle. Position */
#define DDR3PHY_DTDR0_DTBYTE2_Msk             (_UINT32_(0xFF) << DDR3PHY_DTDR0_DTBYTE2_Pos)        /* (DDR3PHY_DTDR0) Data Training Data: The first 4 bytes of data used during data training. This same data byte is used for each Byte Lane. Default sequence is a walking 1 while toggling data every data cycle. Mask */
#define DDR3PHY_DTDR0_DTBYTE2(value)          (DDR3PHY_DTDR0_DTBYTE2_Msk & (_UINT32_(value) << DDR3PHY_DTDR0_DTBYTE2_Pos)) /* Assignment of value for DTBYTE2 in the DDR3PHY_DTDR0 register */
#define DDR3PHY_DTDR0_DTBYTE3_Pos             _UINT32_(24)                                         /* (DDR3PHY_DTDR0) Data Training Data: The first 4 bytes of data used during data training. This same data byte is used for each Byte Lane. Default sequence is a walking 1 while toggling data every data cycle. Position */
#define DDR3PHY_DTDR0_DTBYTE3_Msk             (_UINT32_(0xFF) << DDR3PHY_DTDR0_DTBYTE3_Pos)        /* (DDR3PHY_DTDR0) Data Training Data: The first 4 bytes of data used during data training. This same data byte is used for each Byte Lane. Default sequence is a walking 1 while toggling data every data cycle. Mask */
#define DDR3PHY_DTDR0_DTBYTE3(value)          (DDR3PHY_DTDR0_DTBYTE3_Msk & (_UINT32_(value) << DDR3PHY_DTDR0_DTBYTE3_Pos)) /* Assignment of value for DTBYTE3 in the DDR3PHY_DTDR0 register */
#define DDR3PHY_DTDR0_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (DDR3PHY_DTDR0) Register Mask  */


/* -------- DDR3PHY_DTDR1 : (DDR3PHY Offset: 0x5C) (R/W 32) Data Training Data Register 1 -------- */
#define DDR3PHY_DTDR1_DTBYTE4_Pos             _UINT32_(0)                                          /* (DDR3PHY_DTDR1) Data Training Data: The second 4 bytes of data used during data training. This same data byte is used for each Byte Lane. Default sequence is a walking 1 while toggling data every data cycle. Position */
#define DDR3PHY_DTDR1_DTBYTE4_Msk             (_UINT32_(0xFF) << DDR3PHY_DTDR1_DTBYTE4_Pos)        /* (DDR3PHY_DTDR1) Data Training Data: The second 4 bytes of data used during data training. This same data byte is used for each Byte Lane. Default sequence is a walking 1 while toggling data every data cycle. Mask */
#define DDR3PHY_DTDR1_DTBYTE4(value)          (DDR3PHY_DTDR1_DTBYTE4_Msk & (_UINT32_(value) << DDR3PHY_DTDR1_DTBYTE4_Pos)) /* Assignment of value for DTBYTE4 in the DDR3PHY_DTDR1 register */
#define DDR3PHY_DTDR1_DTBYTE5_Pos             _UINT32_(8)                                          /* (DDR3PHY_DTDR1) Data Training Data: The second 4 bytes of data used during data training. This same data byte is used for each Byte Lane. Default sequence is a walking 1 while toggling data every data cycle. Position */
#define DDR3PHY_DTDR1_DTBYTE5_Msk             (_UINT32_(0xFF) << DDR3PHY_DTDR1_DTBYTE5_Pos)        /* (DDR3PHY_DTDR1) Data Training Data: The second 4 bytes of data used during data training. This same data byte is used for each Byte Lane. Default sequence is a walking 1 while toggling data every data cycle. Mask */
#define DDR3PHY_DTDR1_DTBYTE5(value)          (DDR3PHY_DTDR1_DTBYTE5_Msk & (_UINT32_(value) << DDR3PHY_DTDR1_DTBYTE5_Pos)) /* Assignment of value for DTBYTE5 in the DDR3PHY_DTDR1 register */
#define DDR3PHY_DTDR1_DTBYTE6_Pos             _UINT32_(16)                                         /* (DDR3PHY_DTDR1) Data Training Data: The second 4 bytes of data used during data training. This same data byte is used for each Byte Lane. Default sequence is a walking 1 while toggling data every data cycle. Position */
#define DDR3PHY_DTDR1_DTBYTE6_Msk             (_UINT32_(0xFF) << DDR3PHY_DTDR1_DTBYTE6_Pos)        /* (DDR3PHY_DTDR1) Data Training Data: The second 4 bytes of data used during data training. This same data byte is used for each Byte Lane. Default sequence is a walking 1 while toggling data every data cycle. Mask */
#define DDR3PHY_DTDR1_DTBYTE6(value)          (DDR3PHY_DTDR1_DTBYTE6_Msk & (_UINT32_(value) << DDR3PHY_DTDR1_DTBYTE6_Pos)) /* Assignment of value for DTBYTE6 in the DDR3PHY_DTDR1 register */
#define DDR3PHY_DTDR1_DTBYTE7_Pos             _UINT32_(24)                                         /* (DDR3PHY_DTDR1) Data Training Data: The second 4 bytes of data used during data training. This same data byte is used for each Byte Lane. Default sequence is a walking 1 while toggling data every data cycle. Position */
#define DDR3PHY_DTDR1_DTBYTE7_Msk             (_UINT32_(0xFF) << DDR3PHY_DTDR1_DTBYTE7_Pos)        /* (DDR3PHY_DTDR1) Data Training Data: The second 4 bytes of data used during data training. This same data byte is used for each Byte Lane. Default sequence is a walking 1 while toggling data every data cycle. Mask */
#define DDR3PHY_DTDR1_DTBYTE7(value)          (DDR3PHY_DTDR1_DTBYTE7_Msk & (_UINT32_(value) << DDR3PHY_DTDR1_DTBYTE7_Pos)) /* Assignment of value for DTBYTE7 in the DDR3PHY_DTDR1 register */
#define DDR3PHY_DTDR1_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (DDR3PHY_DTDR1) Register Mask  */


/* -------- DDR3PHY_DCUAR : (DDR3PHY Offset: 0xC0) (R/W 32) DCU Address Register -------- */
#define DDR3PHY_DCUAR_CWADDR_Pos              _UINT32_(0)                                          /* (DDR3PHY_DCUAR) Cache Word Address: Address of the cache word to be accessed. Position */
#define DDR3PHY_DCUAR_CWADDR_Msk              (_UINT32_(0xF) << DDR3PHY_DCUAR_CWADDR_Pos)          /* (DDR3PHY_DCUAR) Cache Word Address: Address of the cache word to be accessed. Mask */
#define DDR3PHY_DCUAR_CWADDR(value)           (DDR3PHY_DCUAR_CWADDR_Msk & (_UINT32_(value) << DDR3PHY_DCUAR_CWADDR_Pos)) /* Assignment of value for CWADDR in the DDR3PHY_DCUAR register */
#define DDR3PHY_DCUAR_CSADDR_Pos              _UINT32_(4)                                          /* (DDR3PHY_DCUAR) Cache Slice Address: Address of the cache slice to be accessed. Position */
#define DDR3PHY_DCUAR_CSADDR_Msk              (_UINT32_(0xF) << DDR3PHY_DCUAR_CSADDR_Pos)          /* (DDR3PHY_DCUAR) Cache Slice Address: Address of the cache slice to be accessed. Mask */
#define DDR3PHY_DCUAR_CSADDR(value)           (DDR3PHY_DCUAR_CSADDR_Msk & (_UINT32_(value) << DDR3PHY_DCUAR_CSADDR_Pos)) /* Assignment of value for CSADDR in the DDR3PHY_DCUAR register */
#define DDR3PHY_DCUAR_CSEL_Pos                _UINT32_(8)                                          /* (DDR3PHY_DCUAR) Cache Select: Selects the cache to be accessed. Position */
#define DDR3PHY_DCUAR_CSEL_Msk                (_UINT32_(0x3) << DDR3PHY_DCUAR_CSEL_Pos)            /* (DDR3PHY_DCUAR) Cache Select: Selects the cache to be accessed. Mask */
#define DDR3PHY_DCUAR_CSEL(value)             (DDR3PHY_DCUAR_CSEL_Msk & (_UINT32_(value) << DDR3PHY_DCUAR_CSEL_Pos)) /* Assignment of value for CSEL in the DDR3PHY_DCUAR register */
#define DDR3PHY_DCUAR_INCA_Pos                _UINT32_(10)                                         /* (DDR3PHY_DCUAR) Increment Address: Specifies, if set, that the cache address specified in WADDR and SADDR should be automatically incremented after each access of the cache. The increment happens in such a way that all the slices of a selected word are first accessed before going to the next word. Position */
#define DDR3PHY_DCUAR_INCA_Msk                (_UINT32_(0x1) << DDR3PHY_DCUAR_INCA_Pos)            /* (DDR3PHY_DCUAR) Increment Address: Specifies, if set, that the cache address specified in WADDR and SADDR should be automatically incremented after each access of the cache. The increment happens in such a way that all the slices of a selected word are first accessed before going to the next word. Mask */
#define DDR3PHY_DCUAR_INCA(value)             (DDR3PHY_DCUAR_INCA_Msk & (_UINT32_(value) << DDR3PHY_DCUAR_INCA_Pos)) /* Assignment of value for INCA in the DDR3PHY_DCUAR register */
#define DDR3PHY_DCUAR_ATYPE_Pos               _UINT32_(11)                                         /* (DDR3PHY_DCUAR) Access Type: Specifies the type of access to be performed using this address. Valid values are: 0 = Write access Position */
#define DDR3PHY_DCUAR_ATYPE_Msk               (_UINT32_(0x1) << DDR3PHY_DCUAR_ATYPE_Pos)           /* (DDR3PHY_DCUAR) Access Type: Specifies the type of access to be performed using this address. Valid values are: 0 = Write access Mask */
#define DDR3PHY_DCUAR_ATYPE(value)            (DDR3PHY_DCUAR_ATYPE_Msk & (_UINT32_(value) << DDR3PHY_DCUAR_ATYPE_Pos)) /* Assignment of value for ATYPE in the DDR3PHY_DCUAR register */
#define DDR3PHY_DCUAR_Msk                     _UINT32_(0x00000FFF)                                 /* (DDR3PHY_DCUAR) Register Mask  */


/* -------- DDR3PHY_DCUDR : (DDR3PHY Offset: 0xC4) (R/W 32) DCU Data Register -------- */
#define DDR3PHY_DCUDR_CDATA_Pos               _UINT32_(0)                                          /* (DDR3PHY_DCUDR) Cache Data: Data to be written to or read from a cache. This data corresponds to the cache word slice specified by the DCU Address Register. Position */
#define DDR3PHY_DCUDR_CDATA_Msk               (_UINT32_(0xFFFFFFFF) << DDR3PHY_DCUDR_CDATA_Pos)    /* (DDR3PHY_DCUDR) Cache Data: Data to be written to or read from a cache. This data corresponds to the cache word slice specified by the DCU Address Register. Mask */
#define DDR3PHY_DCUDR_CDATA(value)            (DDR3PHY_DCUDR_CDATA_Msk & (_UINT32_(value) << DDR3PHY_DCUDR_CDATA_Pos)) /* Assignment of value for CDATA in the DDR3PHY_DCUDR register */
#define DDR3PHY_DCUDR_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (DDR3PHY_DCUDR) Register Mask  */


/* -------- DDR3PHY_DCURR : (DDR3PHY Offset: 0xC8) (R/W 32) DCU Run Register -------- */
#define DDR3PHY_DCURR_DINST_Pos               _UINT32_(0)                                          /* (DDR3PHY_DCURR) DCU Instruction: Selects the DCU command to be executed. Position */
#define DDR3PHY_DCURR_DINST_Msk               (_UINT32_(0xF) << DDR3PHY_DCURR_DINST_Pos)           /* (DDR3PHY_DCURR) DCU Instruction: Selects the DCU command to be executed. Mask */
#define DDR3PHY_DCURR_DINST(value)            (DDR3PHY_DCURR_DINST_Msk & (_UINT32_(value) << DDR3PHY_DCURR_DINST_Pos)) /* Assignment of value for DINST in the DDR3PHY_DCURR register */
#define DDR3PHY_DCURR_SADDR_Pos               _UINT32_(4)                                          /* (DDR3PHY_DCURR) Start Address: Cache word address where the execution of commands should begin. Position */
#define DDR3PHY_DCURR_SADDR_Msk               (_UINT32_(0xF) << DDR3PHY_DCURR_SADDR_Pos)           /* (DDR3PHY_DCURR) Start Address: Cache word address where the execution of commands should begin. Mask */
#define DDR3PHY_DCURR_SADDR(value)            (DDR3PHY_DCURR_SADDR_Msk & (_UINT32_(value) << DDR3PHY_DCURR_SADDR_Pos)) /* Assignment of value for SADDR in the DDR3PHY_DCURR register */
#define DDR3PHY_DCURR_EADDR_Pos               _UINT32_(8)                                          /* (DDR3PHY_DCURR) End Address: Cache word address where the execution of command should end. Position */
#define DDR3PHY_DCURR_EADDR_Msk               (_UINT32_(0xF) << DDR3PHY_DCURR_EADDR_Pos)           /* (DDR3PHY_DCURR) End Address: Cache word address where the execution of command should end. Mask */
#define DDR3PHY_DCURR_EADDR(value)            (DDR3PHY_DCURR_EADDR_Msk & (_UINT32_(value) << DDR3PHY_DCURR_EADDR_Pos)) /* Assignment of value for EADDR in the DDR3PHY_DCURR register */
#define DDR3PHY_DCURR_NFAIL_Pos               _UINT32_(12)                                         /* (DDR3PHY_DCURR) Number of Failures: Specifies the number of failures after which the execution of commands and the capture of read data should stop if SONF bit of this register is set. Execution of commands and the capture of read data will stop after (NFAIL+1) failures if SONF is set. Position */
#define DDR3PHY_DCURR_NFAIL_Msk               (_UINT32_(0xFF) << DDR3PHY_DCURR_NFAIL_Pos)          /* (DDR3PHY_DCURR) Number of Failures: Specifies the number of failures after which the execution of commands and the capture of read data should stop if SONF bit of this register is set. Execution of commands and the capture of read data will stop after (NFAIL+1) failures if SONF is set. Mask */
#define DDR3PHY_DCURR_NFAIL(value)            (DDR3PHY_DCURR_NFAIL_Msk & (_UINT32_(value) << DDR3PHY_DCURR_NFAIL_Pos)) /* Assignment of value for NFAIL in the DDR3PHY_DCURR register */
#define DDR3PHY_DCURR_SONF_Pos                _UINT32_(20)                                         /* (DDR3PHY_DCURR) Stop On Nth Fail: Specifies if set that the execution of commands and the capture of read data should stop when there are N read data failures. The number of failures is specified by NFAIL. Otherwise commands execute until the end of the program or until manually stopped using a STOP command. Position */
#define DDR3PHY_DCURR_SONF_Msk                (_UINT32_(0x1) << DDR3PHY_DCURR_SONF_Pos)            /* (DDR3PHY_DCURR) Stop On Nth Fail: Specifies if set that the execution of commands and the capture of read data should stop when there are N read data failures. The number of failures is specified by NFAIL. Otherwise commands execute until the end of the program or until manually stopped using a STOP command. Mask */
#define DDR3PHY_DCURR_SONF(value)             (DDR3PHY_DCURR_SONF_Msk & (_UINT32_(value) << DDR3PHY_DCURR_SONF_Pos)) /* Assignment of value for SONF in the DDR3PHY_DCURR register */
#define DDR3PHY_DCURR_SCOF_Pos                _UINT32_(21)                                         /* (DDR3PHY_DCURR) Stop Capture On Full: Specifies if set that the capture of read data should stop when the capture cache is full. Position */
#define DDR3PHY_DCURR_SCOF_Msk                (_UINT32_(0x1) << DDR3PHY_DCURR_SCOF_Pos)            /* (DDR3PHY_DCURR) Stop Capture On Full: Specifies if set that the capture of read data should stop when the capture cache is full. Mask */
#define DDR3PHY_DCURR_SCOF(value)             (DDR3PHY_DCURR_SCOF_Msk & (_UINT32_(value) << DDR3PHY_DCURR_SCOF_Pos)) /* Assignment of value for SCOF in the DDR3PHY_DCURR register */
#define DDR3PHY_DCURR_RCEN_Pos                _UINT32_(22)                                         /* (DDR3PHY_DCURR) Read Capture Enable: Indicates if set that read data coming back from the SDRAM should be captured into the read data cache. Position */
#define DDR3PHY_DCURR_RCEN_Msk                (_UINT32_(0x1) << DDR3PHY_DCURR_RCEN_Pos)            /* (DDR3PHY_DCURR) Read Capture Enable: Indicates if set that read data coming back from the SDRAM should be captured into the read data cache. Mask */
#define DDR3PHY_DCURR_RCEN(value)             (DDR3PHY_DCURR_RCEN_Msk & (_UINT32_(value) << DDR3PHY_DCURR_RCEN_Pos)) /* Assignment of value for RCEN in the DDR3PHY_DCURR register */
#define DDR3PHY_DCURR_XCEN_Pos                _UINT32_(23)                                         /* (DDR3PHY_DCURR) Expected Compare Enable: Indicates if set that read data coming back from the SDRAM should be should be compared with the expected data. Position */
#define DDR3PHY_DCURR_XCEN_Msk                (_UINT32_(0x1) << DDR3PHY_DCURR_XCEN_Pos)            /* (DDR3PHY_DCURR) Expected Compare Enable: Indicates if set that read data coming back from the SDRAM should be should be compared with the expected data. Mask */
#define DDR3PHY_DCURR_XCEN(value)             (DDR3PHY_DCURR_XCEN_Msk & (_UINT32_(value) << DDR3PHY_DCURR_XCEN_Pos)) /* Assignment of value for XCEN in the DDR3PHY_DCURR register */
#define DDR3PHY_DCURR_Msk                     _UINT32_(0x00FFFFFF)                                 /* (DDR3PHY_DCURR) Register Mask  */


/* -------- DDR3PHY_DCULR : (DDR3PHY Offset: 0xCC) (R/W 32) DCU Loop Register -------- */
#define DDR3PHY_DCULR_LSADDR_Pos              _UINT32_(0)                                          /* (DDR3PHY_DCULR) Loop Start Address: Command cache word address where the loop should start. Position */
#define DDR3PHY_DCULR_LSADDR_Msk              (_UINT32_(0xF) << DDR3PHY_DCULR_LSADDR_Pos)          /* (DDR3PHY_DCULR) Loop Start Address: Command cache word address where the loop should start. Mask */
#define DDR3PHY_DCULR_LSADDR(value)           (DDR3PHY_DCULR_LSADDR_Msk & (_UINT32_(value) << DDR3PHY_DCULR_LSADDR_Pos)) /* Assignment of value for LSADDR in the DDR3PHY_DCULR register */
#define DDR3PHY_DCULR_LEADDR_Pos              _UINT32_(4)                                          /* (DDR3PHY_DCULR) Loop End Address: Command cache word address where the loop should end. Position */
#define DDR3PHY_DCULR_LEADDR_Msk              (_UINT32_(0xF) << DDR3PHY_DCULR_LEADDR_Pos)          /* (DDR3PHY_DCULR) Loop End Address: Command cache word address where the loop should end. Mask */
#define DDR3PHY_DCULR_LEADDR(value)           (DDR3PHY_DCULR_LEADDR_Msk & (_UINT32_(value) << DDR3PHY_DCULR_LEADDR_Pos)) /* Assignment of value for LEADDR in the DDR3PHY_DCULR register */
#define DDR3PHY_DCULR_LCNT_Pos                _UINT32_(8)                                          /* (DDR3PHY_DCULR) Loop Count: The number of times that the loop should be executed if LINF is not set. Position */
#define DDR3PHY_DCULR_LCNT_Msk                (_UINT32_(0xFF) << DDR3PHY_DCULR_LCNT_Pos)           /* (DDR3PHY_DCULR) Loop Count: The number of times that the loop should be executed if LINF is not set. Mask */
#define DDR3PHY_DCULR_LCNT(value)             (DDR3PHY_DCULR_LCNT_Msk & (_UINT32_(value) << DDR3PHY_DCULR_LCNT_Pos)) /* Assignment of value for LCNT in the DDR3PHY_DCULR register */
#define DDR3PHY_DCULR_LINF_Pos                _UINT32_(16)                                         /* (DDR3PHY_DCULR) Loop Infinite: Indicates if set that the loop should be executed indefinitely until stopped by the STOP command. Otherwise the loop is execute LCNT times. Position */
#define DDR3PHY_DCULR_LINF_Msk                (_UINT32_(0x1) << DDR3PHY_DCULR_LINF_Pos)            /* (DDR3PHY_DCULR) Loop Infinite: Indicates if set that the loop should be executed indefinitely until stopped by the STOP command. Otherwise the loop is execute LCNT times. Mask */
#define DDR3PHY_DCULR_LINF(value)             (DDR3PHY_DCULR_LINF_Msk & (_UINT32_(value) << DDR3PHY_DCULR_LINF_Pos)) /* Assignment of value for LINF in the DDR3PHY_DCULR register */
#define DDR3PHY_DCULR_IDA_Pos                 _UINT32_(17)                                         /* (DDR3PHY_DCULR) Increment DRAM Address: Indicates if set that DRAM addresses should be incremented every time a DRAM read/write command inside the loop is executed. Position */
#define DDR3PHY_DCULR_IDA_Msk                 (_UINT32_(0x1) << DDR3PHY_DCULR_IDA_Pos)             /* (DDR3PHY_DCULR) Increment DRAM Address: Indicates if set that DRAM addresses should be incremented every time a DRAM read/write command inside the loop is executed. Mask */
#define DDR3PHY_DCULR_IDA(value)              (DDR3PHY_DCULR_IDA_Msk & (_UINT32_(value) << DDR3PHY_DCULR_IDA_Pos)) /* Assignment of value for IDA in the DDR3PHY_DCULR register */
#define DDR3PHY_DCULR_XLEADDR_Pos             _UINT32_(28)                                         /* (DDR3PHY_DCULR) Expected Data Loop End Address: The last expected data cache word address that contains valid expected data. Expected data should looped between 0 and this address. Position */
#define DDR3PHY_DCULR_XLEADDR_Msk             (_UINT32_(0xF) << DDR3PHY_DCULR_XLEADDR_Pos)         /* (DDR3PHY_DCULR) Expected Data Loop End Address: The last expected data cache word address that contains valid expected data. Expected data should looped between 0 and this address. Mask */
#define DDR3PHY_DCULR_XLEADDR(value)          (DDR3PHY_DCULR_XLEADDR_Msk & (_UINT32_(value) << DDR3PHY_DCULR_XLEADDR_Pos)) /* Assignment of value for XLEADDR in the DDR3PHY_DCULR register */
#define DDR3PHY_DCULR_Msk                     _UINT32_(0xF003FFFF)                                 /* (DDR3PHY_DCULR) Register Mask  */


/* -------- DDR3PHY_DCUGCR : (DDR3PHY Offset: 0xD0) (R/W 32) DCU General Configuration Register -------- */
#define DDR3PHY_DCUGCR_RCSW_Pos               _UINT32_(0)                                          /* (DDR3PHY_DCUGCR) Read Capture Start Word: The capture and compare of read data should start after Nth word. For example setting this value to 12 will skip the first 12 read data. Position */
#define DDR3PHY_DCUGCR_RCSW_Msk               (_UINT32_(0xFFFF) << DDR3PHY_DCUGCR_RCSW_Pos)        /* (DDR3PHY_DCUGCR) Read Capture Start Word: The capture and compare of read data should start after Nth word. For example setting this value to 12 will skip the first 12 read data. Mask */
#define DDR3PHY_DCUGCR_RCSW(value)            (DDR3PHY_DCUGCR_RCSW_Msk & (_UINT32_(value) << DDR3PHY_DCUGCR_RCSW_Pos)) /* Assignment of value for RCSW in the DDR3PHY_DCUGCR register */
#define DDR3PHY_DCUGCR_Msk                    _UINT32_(0x0000FFFF)                                 /* (DDR3PHY_DCUGCR) Register Mask  */


/* -------- DDR3PHY_DCUTPR : (DDR3PHY Offset: 0xD4) (R/W 32) DCU Timing Parameter Register -------- */
#define DDR3PHY_DCUTPR_TDCUT0_Pos             _UINT32_(0)                                          /* (DDR3PHY_DCUTPR) DCU Generic Timing Parameter 0. Position */
#define DDR3PHY_DCUTPR_TDCUT0_Msk             (_UINT32_(0xFF) << DDR3PHY_DCUTPR_TDCUT0_Pos)        /* (DDR3PHY_DCUTPR) DCU Generic Timing Parameter 0. Mask */
#define DDR3PHY_DCUTPR_TDCUT0(value)          (DDR3PHY_DCUTPR_TDCUT0_Msk & (_UINT32_(value) << DDR3PHY_DCUTPR_TDCUT0_Pos)) /* Assignment of value for TDCUT0 in the DDR3PHY_DCUTPR register */
#define DDR3PHY_DCUTPR_TDCUT1_Pos             _UINT32_(8)                                          /* (DDR3PHY_DCUTPR) DCU Generic Timing Parameter 1. Position */
#define DDR3PHY_DCUTPR_TDCUT1_Msk             (_UINT32_(0xFF) << DDR3PHY_DCUTPR_TDCUT1_Pos)        /* (DDR3PHY_DCUTPR) DCU Generic Timing Parameter 1. Mask */
#define DDR3PHY_DCUTPR_TDCUT1(value)          (DDR3PHY_DCUTPR_TDCUT1_Msk & (_UINT32_(value) << DDR3PHY_DCUTPR_TDCUT1_Pos)) /* Assignment of value for TDCUT1 in the DDR3PHY_DCUTPR register */
#define DDR3PHY_DCUTPR_TDCUT2_Pos             _UINT32_(16)                                         /* (DDR3PHY_DCUTPR) DCU Generic Timing Parameter 2. Position */
#define DDR3PHY_DCUTPR_TDCUT2_Msk             (_UINT32_(0xFF) << DDR3PHY_DCUTPR_TDCUT2_Pos)        /* (DDR3PHY_DCUTPR) DCU Generic Timing Parameter 2. Mask */
#define DDR3PHY_DCUTPR_TDCUT2(value)          (DDR3PHY_DCUTPR_TDCUT2_Msk & (_UINT32_(value) << DDR3PHY_DCUTPR_TDCUT2_Pos)) /* Assignment of value for TDCUT2 in the DDR3PHY_DCUTPR register */
#define DDR3PHY_DCUTPR_TDCUT3_Pos             _UINT32_(24)                                         /* (DDR3PHY_DCUTPR) DCU Generic Timing Parameter 3. Position */
#define DDR3PHY_DCUTPR_TDCUT3_Msk             (_UINT32_(0xFF) << DDR3PHY_DCUTPR_TDCUT3_Pos)        /* (DDR3PHY_DCUTPR) DCU Generic Timing Parameter 3. Mask */
#define DDR3PHY_DCUTPR_TDCUT3(value)          (DDR3PHY_DCUTPR_TDCUT3_Msk & (_UINT32_(value) << DDR3PHY_DCUTPR_TDCUT3_Pos)) /* Assignment of value for TDCUT3 in the DDR3PHY_DCUTPR register */
#define DDR3PHY_DCUTPR_Msk                    _UINT32_(0xFFFFFFFF)                                 /* (DDR3PHY_DCUTPR) Register Mask  */


/* -------- DDR3PHY_DCUSR0 : (DDR3PHY Offset: 0xD8) (R/W 32) DCU Status-0 Register -------- */
#define DDR3PHY_DCUSR0_RDONE_Pos              _UINT32_(0)                                          /* (DDR3PHY_DCUSR0) Run Done: Indicates if set that the DCU has finished executing the commands in the command cache. This bit is also set to indicate that a STOP command has successfully been executed and command execution has stopped. Position */
#define DDR3PHY_DCUSR0_RDONE_Msk              (_UINT32_(0x1) << DDR3PHY_DCUSR0_RDONE_Pos)          /* (DDR3PHY_DCUSR0) Run Done: Indicates if set that the DCU has finished executing the commands in the command cache. This bit is also set to indicate that a STOP command has successfully been executed and command execution has stopped. Mask */
#define DDR3PHY_DCUSR0_RDONE(value)           (DDR3PHY_DCUSR0_RDONE_Msk & (_UINT32_(value) << DDR3PHY_DCUSR0_RDONE_Pos)) /* Assignment of value for RDONE in the DDR3PHY_DCUSR0 register */
#define DDR3PHY_DCUSR0_CFAIL_Pos              _UINT32_(1)                                          /* (DDR3PHY_DCUSR0) Capture Fail: Indicates if set that at least one read data word has failed. Position */
#define DDR3PHY_DCUSR0_CFAIL_Msk              (_UINT32_(0x1) << DDR3PHY_DCUSR0_CFAIL_Pos)          /* (DDR3PHY_DCUSR0) Capture Fail: Indicates if set that at least one read data word has failed. Mask */
#define DDR3PHY_DCUSR0_CFAIL(value)           (DDR3PHY_DCUSR0_CFAIL_Msk & (_UINT32_(value) << DDR3PHY_DCUSR0_CFAIL_Pos)) /* Assignment of value for CFAIL in the DDR3PHY_DCUSR0 register */
#define DDR3PHY_DCUSR0_CFULL_Pos              _UINT32_(2)                                          /* (DDR3PHY_DCUSR0) Capture Full: Indicates if set that the capture cache is full. Position */
#define DDR3PHY_DCUSR0_CFULL_Msk              (_UINT32_(0x1) << DDR3PHY_DCUSR0_CFULL_Pos)          /* (DDR3PHY_DCUSR0) Capture Full: Indicates if set that the capture cache is full. Mask */
#define DDR3PHY_DCUSR0_CFULL(value)           (DDR3PHY_DCUSR0_CFULL_Msk & (_UINT32_(value) << DDR3PHY_DCUSR0_CFULL_Pos)) /* Assignment of value for CFULL in the DDR3PHY_DCUSR0 register */
#define DDR3PHY_DCUSR0_Msk                    _UINT32_(0x00000007)                                 /* (DDR3PHY_DCUSR0) Register Mask  */


/* -------- DDR3PHY_DCUSR1 : (DDR3PHY Offset: 0xDC) (R/W 32) DCU Status-1 Register -------- */
#define DDR3PHY_DCUSR1_RDCNT_Pos              _UINT32_(0)                                          /* (DDR3PHY_DCUSR1) Read Count: Number of read words returned from the SDRAM. Position */
#define DDR3PHY_DCUSR1_RDCNT_Msk              (_UINT32_(0xFFFF) << DDR3PHY_DCUSR1_RDCNT_Pos)       /* (DDR3PHY_DCUSR1) Read Count: Number of read words returned from the SDRAM. Mask */
#define DDR3PHY_DCUSR1_RDCNT(value)           (DDR3PHY_DCUSR1_RDCNT_Msk & (_UINT32_(value) << DDR3PHY_DCUSR1_RDCNT_Pos)) /* Assignment of value for RDCNT in the DDR3PHY_DCUSR1 register */
#define DDR3PHY_DCUSR1_FLCND_Pos              _UINT32_(16)                                         /* (DDR3PHY_DCUSR1) Fail Count: Number of read words that have failed. Position */
#define DDR3PHY_DCUSR1_FLCND_Msk              (_UINT32_(0xFF) << DDR3PHY_DCUSR1_FLCND_Pos)         /* (DDR3PHY_DCUSR1) Fail Count: Number of read words that have failed. Mask */
#define DDR3PHY_DCUSR1_FLCND(value)           (DDR3PHY_DCUSR1_FLCND_Msk & (_UINT32_(value) << DDR3PHY_DCUSR1_FLCND_Pos)) /* Assignment of value for FLCND in the DDR3PHY_DCUSR1 register */
#define DDR3PHY_DCUSR1_LPCNT_Pos              _UINT32_(24)                                         /* (DDR3PHY_DCUSR1) Loop Count: Indicates the value of the loop count. This is useful when the program has stooped because of failures to assess how many reads were executed before first fail. Position */
#define DDR3PHY_DCUSR1_LPCNT_Msk              (_UINT32_(0xFF) << DDR3PHY_DCUSR1_LPCNT_Pos)         /* (DDR3PHY_DCUSR1) Loop Count: Indicates the value of the loop count. This is useful when the program has stooped because of failures to assess how many reads were executed before first fail. Mask */
#define DDR3PHY_DCUSR1_LPCNT(value)           (DDR3PHY_DCUSR1_LPCNT_Msk & (_UINT32_(value) << DDR3PHY_DCUSR1_LPCNT_Pos)) /* Assignment of value for LPCNT in the DDR3PHY_DCUSR1 register */
#define DDR3PHY_DCUSR1_Msk                    _UINT32_(0xFFFFFFFF)                                 /* (DDR3PHY_DCUSR1) Register Mask  */


/* -------- DDR3PHY_BISTRR : (DDR3PHY Offset: 0x100) (R/W 32) BIST Run Register -------- */
#define DDR3PHY_BISTRR_Msk                    _UINT32_(0x00000000)                                 /* (DDR3PHY_BISTRR) Register Mask  */


/* -------- DDR3PHY_BISTMSKR0 : (DDR3PHY Offset: 0x104) (R/W 32) BIST Mask 0 Register -------- */
#define DDR3PHY_BISTMSKR0_Msk                 _UINT32_(0x00000000)                                 /* (DDR3PHY_BISTMSKR0) Register Mask  */


/* -------- DDR3PHY_BISTMSKR1 : (DDR3PHY Offset: 0x108) (R/W 32) BIST Mask 1 Register -------- */
#define DDR3PHY_BISTMSKR1_Msk                 _UINT32_(0x00000000)                                 /* (DDR3PHY_BISTMSKR1) Register Mask  */


/* -------- DDR3PHY_BISTWCR : (DDR3PHY Offset: 0x10C) (R/W 32) BIST Word Count Register -------- */
#define DDR3PHY_BISTWCR_Msk                   _UINT32_(0x00000000)                                 /* (DDR3PHY_BISTWCR) Register Mask  */


/* -------- DDR3PHY_BISTLSR : (DDR3PHY Offset: 0x110) (R/W 32) BIST LFSR Seed Register -------- */
#define DDR3PHY_BISTLSR_Msk                   _UINT32_(0x00000000)                                 /* (DDR3PHY_BISTLSR) Register Mask  */


/* -------- DDR3PHY_BISTAR0 : (DDR3PHY Offset: 0x114) (R/W 32) BIST Address 0 Register -------- */
#define DDR3PHY_BISTAR0_Msk                   _UINT32_(0x00000000)                                 /* (DDR3PHY_BISTAR0) Register Mask  */


/* -------- DDR3PHY_BISTAR1 : (DDR3PHY Offset: 0x118) (R/W 32) BIST Address 1 Register -------- */
#define DDR3PHY_BISTAR1_Msk                   _UINT32_(0x00000000)                                 /* (DDR3PHY_BISTAR1) Register Mask  */


/* -------- DDR3PHY_BISTAR2 : (DDR3PHY Offset: 0x11C) (R/W 32) BIST Address 2 Register -------- */
#define DDR3PHY_BISTAR2_Msk                   _UINT32_(0x00000000)                                 /* (DDR3PHY_BISTAR2) Register Mask  */


/* -------- DDR3PHY_BISTUDPR : (DDR3PHY Offset: 0x120) (R/W 32) BIST User Data Pattern Register -------- */
#define DDR3PHY_BISTUDPR_Msk                  _UINT32_(0x00000000)                                 /* (DDR3PHY_BISTUDPR) Register Mask  */


/* -------- DDR3PHY_BISTGSR : (DDR3PHY Offset: 0x124) (R/W 32) BIST General Status Register -------- */
#define DDR3PHY_BISTGSR_Msk                   _UINT32_(0x00000000)                                 /* (DDR3PHY_BISTGSR) Register Mask  */


/* -------- DDR3PHY_BISTWER : (DDR3PHY Offset: 0x128) (R/W 32) BIST Word Error Register -------- */
#define DDR3PHY_BISTWER_Msk                   _UINT32_(0x00000000)                                 /* (DDR3PHY_BISTWER) Register Mask  */


/* -------- DDR3PHY_BISTBER0 : (DDR3PHY Offset: 0x12C) (R/W 32) BIST Bit Error 0 Register -------- */
#define DDR3PHY_BISTBER0_Msk                  _UINT32_(0x00000000)                                 /* (DDR3PHY_BISTBER0) Register Mask  */


/* -------- DDR3PHY_BISTBER1 : (DDR3PHY Offset: 0x130) (R/W 32) BIST Bit Error 1 Register -------- */
#define DDR3PHY_BISTBER1_Msk                  _UINT32_(0x00000000)                                 /* (DDR3PHY_BISTBER1) Register Mask  */


/* -------- DDR3PHY_BISTBER2 : (DDR3PHY Offset: 0x134) (R/W 32) BIST Bit Error 2 Register -------- */
#define DDR3PHY_BISTBER2_Msk                  _UINT32_(0x00000000)                                 /* (DDR3PHY_BISTBER2) Register Mask  */


/* -------- DDR3PHY_BISTWCSR : (DDR3PHY Offset: 0x138) (R/W 32) BIST Word Count Status Register -------- */
#define DDR3PHY_BISTWCSR_Msk                  _UINT32_(0x00000000)                                 /* (DDR3PHY_BISTWCSR) Register Mask  */


/* -------- DDR3PHY_BISTFWR0 : (DDR3PHY Offset: 0x13C) (R/W 32) BIST Fail Word 0 Register -------- */
#define DDR3PHY_BISTFWR0_Msk                  _UINT32_(0x00000000)                                 /* (DDR3PHY_BISTFWR0) Register Mask  */


/* -------- DDR3PHY_BISTFWR1 : (DDR3PHY Offset: 0x140) (R/W 32) BIST Fail Word 1 Register -------- */
#define DDR3PHY_BISTFWR1_Msk                  _UINT32_(0x00000000)                                 /* (DDR3PHY_BISTFWR1) Register Mask  */


/* -------- DDR3PHY_ZQ0CR0 : (DDR3PHY Offset: 0x180) (R/W 32) ZQ Impedence Control Register 0 -------- */
#define DDR3PHY_ZQ0CR0_Msk                    _UINT32_(0x00000000)                                 /* (DDR3PHY_ZQ0CR0) Register Mask  */


/* -------- DDR3PHY_ZQ0CR1 : (DDR3PHY Offset: 0x184) (R/W 32) ZQ Impedence Control Register 1 -------- */
#define DDR3PHY_ZQ0CR1_Msk                    _UINT32_(0x00000000)                                 /* (DDR3PHY_ZQ0CR1) Register Mask  */


/* -------- DDR3PHY_ZQ0SR0 : (DDR3PHY Offset: 0x188) ( R/ 32) ZQ Impedence Control Status Register 0 -------- */
#define DDR3PHY_ZQ0SR0_Msk                    _UINT32_(0x00000000)                                 /* (DDR3PHY_ZQ0SR0) Register Mask  */


/* -------- DDR3PHY_ZQ0SR1 : (DDR3PHY Offset: 0x18C) ( R/ 32) ZQ Impedence Control Status Register 1 -------- */
#define DDR3PHY_ZQ0SR1_Msk                    _UINT32_(0x00000000)                                 /* (DDR3PHY_ZQ0SR1) Register Mask  */


/* -------- DDR3PHY_DX0GCR : (DDR3PHY Offset: 0x1C0) (R/W 32) DATX8 General Configuration Register -------- */
#define DDR3PHY_DX0GCR_Msk                    _UINT32_(0x00000000)                                 /* (DDR3PHY_DX0GCR) Register Mask  */


/* -------- DDR3PHY_DX0GSR0 : (DDR3PHY Offset: 0x1C4) ( R/ 32) DATX8 General Status Register 0 -------- */
#define DDR3PHY_DX0GSR0_Msk                   _UINT32_(0x00000000)                                 /* (DDR3PHY_DX0GSR0) Register Mask  */


/* -------- DDR3PHY_DX0GSR1 : (DDR3PHY Offset: 0x1C8) ( R/ 32) DATX8 General Status Register 1 -------- */
#define DDR3PHY_DX0GSR1_Msk                   _UINT32_(0x00000000)                                 /* (DDR3PHY_DX0GSR1) Register Mask  */


/* -------- DDR3PHY_DX0DLLCR : (DDR3PHY Offset: 0x1CC) (R/W 32) DATX8 DLL Control Register -------- */
#define DDR3PHY_DX0DLLCR_Msk                  _UINT32_(0x00000000)                                 /* (DDR3PHY_DX0DLLCR) Register Mask  */


/* -------- DDR3PHY_DX0DQTR : (DDR3PHY Offset: 0x1D0) (R/W 32) DATX8 DQ Timing Register -------- */
#define DDR3PHY_DX0DQTR_Msk                   _UINT32_(0x00000000)                                 /* (DDR3PHY_DX0DQTR) Register Mask  */


/* -------- DDR3PHY_DX0DQSTR : (DDR3PHY Offset: 0x1D4) (R/W 32) DATX8 DQS Timing Register -------- */
#define DDR3PHY_DX0DQSTR_Msk                  _UINT32_(0x00000000)                                 /* (DDR3PHY_DX0DQSTR) Register Mask  */


/* -------- DDR3PHY_DX1GCR : (DDR3PHY Offset: 0x200) (R/W 32) DATX8 General Configuration Register -------- */
#define DDR3PHY_DX1GCR_Msk                    _UINT32_(0x00000000)                                 /* (DDR3PHY_DX1GCR) Register Mask  */


/* -------- DDR3PHY_DX1GSR0 : (DDR3PHY Offset: 0x204) ( R/ 32) DATX8 General Status Register 0 -------- */
#define DDR3PHY_DX1GSR0_Msk                   _UINT32_(0x00000000)                                 /* (DDR3PHY_DX1GSR0) Register Mask  */


/* -------- DDR3PHY_DX1GSR1 : (DDR3PHY Offset: 0x208) ( R/ 32) DATX8 General Status Register 1 -------- */
#define DDR3PHY_DX1GSR1_Msk                   _UINT32_(0x00000000)                                 /* (DDR3PHY_DX1GSR1) Register Mask  */


/* -------- DDR3PHY_DX1DLLCR : (DDR3PHY Offset: 0x20C) (R/W 32) DATX8 DLL Control Register -------- */
#define DDR3PHY_DX1DLLCR_Msk                  _UINT32_(0x00000000)                                 /* (DDR3PHY_DX1DLLCR) Register Mask  */


/* -------- DDR3PHY_DX1DQTR : (DDR3PHY Offset: 0x210) (R/W 32) DATX8 DQ Timing Register -------- */
#define DDR3PHY_DX1DQTR_Msk                   _UINT32_(0x00000000)                                 /* (DDR3PHY_DX1DQTR) Register Mask  */


/* -------- DDR3PHY_DX1DQSTR : (DDR3PHY Offset: 0x214) (R/W 32) DATX8 DQS Timing Register -------- */
#define DDR3PHY_DX1DQSTR_Msk                  _UINT32_(0x00000000)                                 /* (DDR3PHY_DX1DQSTR) Register Mask  */


/* DDR3PHY register offsets definitions */
#define DDR3PHY_PIR_REG_OFST           _UINT32_(0x04)      /* (DDR3PHY_PIR) PHY Initialization Register Offset */
#define DDR3PHY_PGCR_REG_OFST          _UINT32_(0x08)      /* (DDR3PHY_PGCR) PHY General Configuration Register Offset */
#define DDR3PHY_PGSR_REG_OFST          _UINT32_(0x0C)      /* (DDR3PHY_PGSR) PHY General Status Register Offset */
#define DDR3PHY_DLLGCR_REG_OFST        _UINT32_(0x10)      /* (DDR3PHY_DLLGCR) DLL General Control Register Offset */
#define DDR3PHY_ACDLLCR_REG_OFST       _UINT32_(0x14)      /* (DDR3PHY_ACDLLCR) AC DLL Control Register Offset */
#define DDR3PHY_PTR0_REG_OFST          _UINT32_(0x18)      /* (DDR3PHY_PTR0) PHY Timing Register 0 Offset */
#define DDR3PHY_PTR1_REG_OFST          _UINT32_(0x1C)      /* (DDR3PHY_PTR1) PHY Timing Register 1 Offset */
#define DDR3PHY_PTR2_REG_OFST          _UINT32_(0x20)      /* (DDR3PHY_PTR2) PHY Timing Register 2 Offset */
#define DDR3PHY_ACIOCR_REG_OFST        _UINT32_(0x24)      /* (DDR3PHY_ACIOCR) AC I/O Configuration Register Offset */
#define DDR3PHY_DXCCR_REG_OFST         _UINT32_(0x28)      /* (DDR3PHY_DXCCR) DATX8 I/O Configuration Register Offset */
#define DDR3PHY_DSGCR_REG_OFST         _UINT32_(0x2C)      /* (DDR3PHY_DSGCR) DFI Configuration Register Offset */
#define DDR3PHY_DCR_REG_OFST           _UINT32_(0x30)      /* (DDR3PHY_DCR) DRAM Configuration Register Offset */
#define DDR3PHY_DTPR0_REG_OFST         _UINT32_(0x34)      /* (DDR3PHY_DTPR0) SDRAM Timing Parameters Register 0 Offset */
#define DDR3PHY_DTPR1_REG_OFST         _UINT32_(0x38)      /* (DDR3PHY_DTPR1) SDRAM Timing Parameters Register 1 Offset */
#define DDR3PHY_DTPR2_REG_OFST         _UINT32_(0x3C)      /* (DDR3PHY_DTPR2) SDRAM Timing Parameters Register 2 Offset */
#define DDR3PHY_MR0_REG_OFST           _UINT32_(0x40)      /* (DDR3PHY_MR0) Mode Register Offset */
#define DDR3PHY_MR1_REG_OFST           _UINT32_(0x44)      /* (DDR3PHY_MR1) Extended Mode Register Offset */
#define DDR3PHY_MR2_REG_OFST           _UINT32_(0x48)      /* (DDR3PHY_MR2) Extended Mode Register 2 Offset */
#define DDR3PHY_MR3_REG_OFST           _UINT32_(0x4C)      /* (DDR3PHY_MR3) Extended Mode Register 3 Offset */
#define DDR3PHY_ODTCR_REG_OFST         _UINT32_(0x50)      /* (DDR3PHY_ODTCR) ODT Configuration Register Offset */
#define DDR3PHY_DTAR_REG_OFST          _UINT32_(0x54)      /* (DDR3PHY_DTAR) Data Training Address Register Offset */
#define DDR3PHY_DTDR0_REG_OFST         _UINT32_(0x58)      /* (DDR3PHY_DTDR0) Data Training Data Register 0 Offset */
#define DDR3PHY_DTDR1_REG_OFST         _UINT32_(0x5C)      /* (DDR3PHY_DTDR1) Data Training Data Register 1 Offset */
#define DDR3PHY_DCUAR_REG_OFST         _UINT32_(0xC0)      /* (DDR3PHY_DCUAR) DCU Address Register Offset */
#define DDR3PHY_DCUDR_REG_OFST         _UINT32_(0xC4)      /* (DDR3PHY_DCUDR) DCU Data Register Offset */
#define DDR3PHY_DCURR_REG_OFST         _UINT32_(0xC8)      /* (DDR3PHY_DCURR) DCU Run Register Offset */
#define DDR3PHY_DCULR_REG_OFST         _UINT32_(0xCC)      /* (DDR3PHY_DCULR) DCU Loop Register Offset */
#define DDR3PHY_DCUGCR_REG_OFST        _UINT32_(0xD0)      /* (DDR3PHY_DCUGCR) DCU General Configuration Register Offset */
#define DDR3PHY_DCUTPR_REG_OFST        _UINT32_(0xD4)      /* (DDR3PHY_DCUTPR) DCU Timing Parameter Register Offset */
#define DDR3PHY_DCUSR0_REG_OFST        _UINT32_(0xD8)      /* (DDR3PHY_DCUSR0) DCU Status-0 Register Offset */
#define DDR3PHY_DCUSR1_REG_OFST        _UINT32_(0xDC)      /* (DDR3PHY_DCUSR1) DCU Status-1 Register Offset */
#define DDR3PHY_BISTRR_REG_OFST        _UINT32_(0x100)     /* (DDR3PHY_BISTRR) BIST Run Register Offset */
#define DDR3PHY_BISTMSKR0_REG_OFST     _UINT32_(0x104)     /* (DDR3PHY_BISTMSKR0) BIST Mask 0 Register Offset */
#define DDR3PHY_BISTMSKR1_REG_OFST     _UINT32_(0x108)     /* (DDR3PHY_BISTMSKR1) BIST Mask 1 Register Offset */
#define DDR3PHY_BISTWCR_REG_OFST       _UINT32_(0x10C)     /* (DDR3PHY_BISTWCR) BIST Word Count Register Offset */
#define DDR3PHY_BISTLSR_REG_OFST       _UINT32_(0x110)     /* (DDR3PHY_BISTLSR) BIST LFSR Seed Register Offset */
#define DDR3PHY_BISTAR0_REG_OFST       _UINT32_(0x114)     /* (DDR3PHY_BISTAR0) BIST Address 0 Register Offset */
#define DDR3PHY_BISTAR1_REG_OFST       _UINT32_(0x118)     /* (DDR3PHY_BISTAR1) BIST Address 1 Register Offset */
#define DDR3PHY_BISTAR2_REG_OFST       _UINT32_(0x11C)     /* (DDR3PHY_BISTAR2) BIST Address 2 Register Offset */
#define DDR3PHY_BISTUDPR_REG_OFST      _UINT32_(0x120)     /* (DDR3PHY_BISTUDPR) BIST User Data Pattern Register Offset */
#define DDR3PHY_BISTGSR_REG_OFST       _UINT32_(0x124)     /* (DDR3PHY_BISTGSR) BIST General Status Register Offset */
#define DDR3PHY_BISTWER_REG_OFST       _UINT32_(0x128)     /* (DDR3PHY_BISTWER) BIST Word Error Register Offset */
#define DDR3PHY_BISTBER0_REG_OFST      _UINT32_(0x12C)     /* (DDR3PHY_BISTBER0) BIST Bit Error 0 Register Offset */
#define DDR3PHY_BISTBER1_REG_OFST      _UINT32_(0x130)     /* (DDR3PHY_BISTBER1) BIST Bit Error 1 Register Offset */
#define DDR3PHY_BISTBER2_REG_OFST      _UINT32_(0x134)     /* (DDR3PHY_BISTBER2) BIST Bit Error 2 Register Offset */
#define DDR3PHY_BISTWCSR_REG_OFST      _UINT32_(0x138)     /* (DDR3PHY_BISTWCSR) BIST Word Count Status Register Offset */
#define DDR3PHY_BISTFWR0_REG_OFST      _UINT32_(0x13C)     /* (DDR3PHY_BISTFWR0) BIST Fail Word 0 Register Offset */
#define DDR3PHY_BISTFWR1_REG_OFST      _UINT32_(0x140)     /* (DDR3PHY_BISTFWR1) BIST Fail Word 1 Register Offset */
#define DDR3PHY_ZQ0CR0_REG_OFST        _UINT32_(0x180)     /* (DDR3PHY_ZQ0CR0) ZQ Impedence Control Register 0 Offset */
#define DDR3PHY_ZQ0CR1_REG_OFST        _UINT32_(0x184)     /* (DDR3PHY_ZQ0CR1) ZQ Impedence Control Register 1 Offset */
#define DDR3PHY_ZQ0SR0_REG_OFST        _UINT32_(0x188)     /* (DDR3PHY_ZQ0SR0) ZQ Impedence Control Status Register 0 Offset */
#define DDR3PHY_ZQ0SR1_REG_OFST        _UINT32_(0x18C)     /* (DDR3PHY_ZQ0SR1) ZQ Impedence Control Status Register 1 Offset */
#define DDR3PHY_DX0GCR_REG_OFST        _UINT32_(0x1C0)     /* (DDR3PHY_DX0GCR) DATX8 General Configuration Register Offset */
#define DDR3PHY_DX0GSR0_REG_OFST       _UINT32_(0x1C4)     /* (DDR3PHY_DX0GSR0) DATX8 General Status Register 0 Offset */
#define DDR3PHY_DX0GSR1_REG_OFST       _UINT32_(0x1C8)     /* (DDR3PHY_DX0GSR1) DATX8 General Status Register 1 Offset */
#define DDR3PHY_DX0DLLCR_REG_OFST      _UINT32_(0x1CC)     /* (DDR3PHY_DX0DLLCR) DATX8 DLL Control Register Offset */
#define DDR3PHY_DX0DQTR_REG_OFST       _UINT32_(0x1D0)     /* (DDR3PHY_DX0DQTR) DATX8 DQ Timing Register Offset */
#define DDR3PHY_DX0DQSTR_REG_OFST      _UINT32_(0x1D4)     /* (DDR3PHY_DX0DQSTR) DATX8 DQS Timing Register Offset */
#define DDR3PHY_DX1GCR_REG_OFST        _UINT32_(0x200)     /* (DDR3PHY_DX1GCR) DATX8 General Configuration Register Offset */
#define DDR3PHY_DX1GSR0_REG_OFST       _UINT32_(0x204)     /* (DDR3PHY_DX1GSR0) DATX8 General Status Register 0 Offset */
#define DDR3PHY_DX1GSR1_REG_OFST       _UINT32_(0x208)     /* (DDR3PHY_DX1GSR1) DATX8 General Status Register 1 Offset */
#define DDR3PHY_DX1DLLCR_REG_OFST      _UINT32_(0x20C)     /* (DDR3PHY_DX1DLLCR) DATX8 DLL Control Register Offset */
#define DDR3PHY_DX1DQTR_REG_OFST       _UINT32_(0x210)     /* (DDR3PHY_DX1DQTR) DATX8 DQ Timing Register Offset */
#define DDR3PHY_DX1DQSTR_REG_OFST      _UINT32_(0x214)     /* (DDR3PHY_DX1DQSTR) DATX8 DQS Timing Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* DDR3PHY register API structure */
typedef struct
{  /* DDR SDRAM PHY Utility Block Lite */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       DDR3PHY_PIR;        /* Offset: 0x04 (R/W  32) PHY Initialization Register */
  __IO  uint32_t                       DDR3PHY_PGCR;       /* Offset: 0x08 (R/W  32) PHY General Configuration Register */
  __I   uint32_t                       DDR3PHY_PGSR;       /* Offset: 0x0C (R/   32) PHY General Status Register */
  __IO  uint32_t                       DDR3PHY_DLLGCR;     /* Offset: 0x10 (R/W  32) DLL General Control Register */
  __IO  uint32_t                       DDR3PHY_ACDLLCR;    /* Offset: 0x14 (R/W  32) AC DLL Control Register */
  __IO  uint32_t                       DDR3PHY_PTR0;       /* Offset: 0x18 (R/W  32) PHY Timing Register 0 */
  __IO  uint32_t                       DDR3PHY_PTR1;       /* Offset: 0x1C (R/W  32) PHY Timing Register 1 */
  __IO  uint32_t                       DDR3PHY_PTR2;       /* Offset: 0x20 (R/W  32) PHY Timing Register 2 */
  __IO  uint32_t                       DDR3PHY_ACIOCR;     /* Offset: 0x24 (R/W  32) AC I/O Configuration Register */
  __IO  uint32_t                       DDR3PHY_DXCCR;      /* Offset: 0x28 (R/W  32) DATX8 I/O Configuration Register */
  __IO  uint32_t                       DDR3PHY_DSGCR;      /* Offset: 0x2C (R/W  32) DFI Configuration Register */
  __IO  uint32_t                       DDR3PHY_DCR;        /* Offset: 0x30 (R/W  32) DRAM Configuration Register */
  __IO  uint32_t                       DDR3PHY_DTPR0;      /* Offset: 0x34 (R/W  32) SDRAM Timing Parameters Register 0 */
  __IO  uint32_t                       DDR3PHY_DTPR1;      /* Offset: 0x38 (R/W  32) SDRAM Timing Parameters Register 1 */
  __IO  uint32_t                       DDR3PHY_DTPR2;      /* Offset: 0x3C (R/W  32) SDRAM Timing Parameters Register 2 */
  __IO  uint32_t                       DDR3PHY_MR0;        /* Offset: 0x40 (R/W  32) Mode Register */
  __IO  uint32_t                       DDR3PHY_MR1;        /* Offset: 0x44 (R/W  32) Extended Mode Register */
  __IO  uint32_t                       DDR3PHY_MR2;        /* Offset: 0x48 (R/W  32) Extended Mode Register 2 */
  __IO  uint32_t                       DDR3PHY_MR3;        /* Offset: 0x4C (R/W  32) Extended Mode Register 3 */
  __IO  uint32_t                       DDR3PHY_ODTCR;      /* Offset: 0x50 (R/W  32) ODT Configuration Register */
  __IO  uint32_t                       DDR3PHY_DTAR;       /* Offset: 0x54 (R/W  32) Data Training Address Register */
  __IO  uint32_t                       DDR3PHY_DTDR0;      /* Offset: 0x58 (R/W  32) Data Training Data Register 0 */
  __IO  uint32_t                       DDR3PHY_DTDR1;      /* Offset: 0x5C (R/W  32) Data Training Data Register 1 */
  __I   uint8_t                        Reserved2[0x60];
  __IO  uint32_t                       DDR3PHY_DCUAR;      /* Offset: 0xC0 (R/W  32) DCU Address Register */
  __IO  uint32_t                       DDR3PHY_DCUDR;      /* Offset: 0xC4 (R/W  32) DCU Data Register */
  __IO  uint32_t                       DDR3PHY_DCURR;      /* Offset: 0xC8 (R/W  32) DCU Run Register */
  __IO  uint32_t                       DDR3PHY_DCULR;      /* Offset: 0xCC (R/W  32) DCU Loop Register */
  __IO  uint32_t                       DDR3PHY_DCUGCR;     /* Offset: 0xD0 (R/W  32) DCU General Configuration Register */
  __IO  uint32_t                       DDR3PHY_DCUTPR;     /* Offset: 0xD4 (R/W  32) DCU Timing Parameter Register */
  __IO  uint32_t                       DDR3PHY_DCUSR0;     /* Offset: 0xD8 (R/W  32) DCU Status-0 Register */
  __IO  uint32_t                       DDR3PHY_DCUSR1;     /* Offset: 0xDC (R/W  32) DCU Status-1 Register */
  __I   uint8_t                        Reserved3[0x20];
  __IO  uint32_t                       DDR3PHY_BISTRR;     /* Offset: 0x100 (R/W  32) BIST Run Register */
  __IO  uint32_t                       DDR3PHY_BISTMSKR0;  /* Offset: 0x104 (R/W  32) BIST Mask 0 Register */
  __IO  uint32_t                       DDR3PHY_BISTMSKR1;  /* Offset: 0x108 (R/W  32) BIST Mask 1 Register */
  __IO  uint32_t                       DDR3PHY_BISTWCR;    /* Offset: 0x10C (R/W  32) BIST Word Count Register */
  __IO  uint32_t                       DDR3PHY_BISTLSR;    /* Offset: 0x110 (R/W  32) BIST LFSR Seed Register */
  __IO  uint32_t                       DDR3PHY_BISTAR0;    /* Offset: 0x114 (R/W  32) BIST Address 0 Register */
  __IO  uint32_t                       DDR3PHY_BISTAR1;    /* Offset: 0x118 (R/W  32) BIST Address 1 Register */
  __IO  uint32_t                       DDR3PHY_BISTAR2;    /* Offset: 0x11C (R/W  32) BIST Address 2 Register */
  __IO  uint32_t                       DDR3PHY_BISTUDPR;   /* Offset: 0x120 (R/W  32) BIST User Data Pattern Register */
  __IO  uint32_t                       DDR3PHY_BISTGSR;    /* Offset: 0x124 (R/W  32) BIST General Status Register */
  __IO  uint32_t                       DDR3PHY_BISTWER;    /* Offset: 0x128 (R/W  32) BIST Word Error Register */
  __IO  uint32_t                       DDR3PHY_BISTBER0;   /* Offset: 0x12C (R/W  32) BIST Bit Error 0 Register */
  __IO  uint32_t                       DDR3PHY_BISTBER1;   /* Offset: 0x130 (R/W  32) BIST Bit Error 1 Register */
  __IO  uint32_t                       DDR3PHY_BISTBER2;   /* Offset: 0x134 (R/W  32) BIST Bit Error 2 Register */
  __IO  uint32_t                       DDR3PHY_BISTWCSR;   /* Offset: 0x138 (R/W  32) BIST Word Count Status Register */
  __IO  uint32_t                       DDR3PHY_BISTFWR0;   /* Offset: 0x13C (R/W  32) BIST Fail Word 0 Register */
  __IO  uint32_t                       DDR3PHY_BISTFWR1;   /* Offset: 0x140 (R/W  32) BIST Fail Word 1 Register */
  __I   uint8_t                        Reserved4[0x3C];
  __IO  uint32_t                       DDR3PHY_ZQ0CR0;     /* Offset: 0x180 (R/W  32) ZQ Impedence Control Register 0 */
  __IO  uint32_t                       DDR3PHY_ZQ0CR1;     /* Offset: 0x184 (R/W  32) ZQ Impedence Control Register 1 */
  __I   uint32_t                       DDR3PHY_ZQ0SR0;     /* Offset: 0x188 (R/   32) ZQ Impedence Control Status Register 0 */
  __I   uint32_t                       DDR3PHY_ZQ0SR1;     /* Offset: 0x18C (R/   32) ZQ Impedence Control Status Register 1 */
  __I   uint8_t                        Reserved5[0x30];
  __IO  uint32_t                       DDR3PHY_DX0GCR;     /* Offset: 0x1C0 (R/W  32) DATX8 General Configuration Register */
  __I   uint32_t                       DDR3PHY_DX0GSR0;    /* Offset: 0x1C4 (R/   32) DATX8 General Status Register 0 */
  __I   uint32_t                       DDR3PHY_DX0GSR1;    /* Offset: 0x1C8 (R/   32) DATX8 General Status Register 1 */
  __IO  uint32_t                       DDR3PHY_DX0DLLCR;   /* Offset: 0x1CC (R/W  32) DATX8 DLL Control Register */
  __IO  uint32_t                       DDR3PHY_DX0DQTR;    /* Offset: 0x1D0 (R/W  32) DATX8 DQ Timing Register */
  __IO  uint32_t                       DDR3PHY_DX0DQSTR;   /* Offset: 0x1D4 (R/W  32) DATX8 DQS Timing Register */
  __I   uint8_t                        Reserved6[0x28];
  __IO  uint32_t                       DDR3PHY_DX1GCR;     /* Offset: 0x200 (R/W  32) DATX8 General Configuration Register */
  __I   uint32_t                       DDR3PHY_DX1GSR0;    /* Offset: 0x204 (R/   32) DATX8 General Status Register 0 */
  __I   uint32_t                       DDR3PHY_DX1GSR1;    /* Offset: 0x208 (R/   32) DATX8 General Status Register 1 */
  __IO  uint32_t                       DDR3PHY_DX1DLLCR;   /* Offset: 0x20C (R/W  32) DATX8 DLL Control Register */
  __IO  uint32_t                       DDR3PHY_DX1DQTR;    /* Offset: 0x210 (R/W  32) DATX8 DQ Timing Register */
  __IO  uint32_t                       DDR3PHY_DX1DQSTR;   /* Offset: 0x214 (R/W  32) DATX8 DQS Timing Register */
} ddr3phy_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7G5_DDR3PHY_COMPONENT_H_ */
