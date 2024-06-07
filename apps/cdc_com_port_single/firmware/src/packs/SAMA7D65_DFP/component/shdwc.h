/*
 * Component description for SHDWC
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

/* file generated from device description file (ATDF) version  */
#ifndef _SAMA7D6_SHDWC_COMPONENT_H_
#define _SAMA7D6_SHDWC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SHDWC                                        */
/* ************************************************************************** */

/* -------- SHDW_CR : (SHDWC Offset: 0x00) ( /W 32) Control Register -------- */
#define SHDW_CR_SHDW_Pos                      _UINT32_(0)                                          /* (SHDW_CR) Shutdown Command Position */
#define SHDW_CR_SHDW_Msk                      (_UINT32_(0x1) << SHDW_CR_SHDW_Pos)                  /* (SHDW_CR) Shutdown Command Mask */
#define SHDW_CR_SHDW(value)                   (SHDW_CR_SHDW_Msk & (_UINT32_(value) << SHDW_CR_SHDW_Pos)) /* Assigment of value for SHDW in the SHDW_CR register */
#define   SHDW_CR_SHDW_0_Val                  _UINT32_(0x0)                                        /* (SHDW_CR) No effect.  */
#define   SHDW_CR_SHDW_1_Val                  _UINT32_(0x1)                                        /* (SHDW_CR) If KEY value is correct, asserts the SHDN pin.  */
#define SHDW_CR_SHDW_0                        (SHDW_CR_SHDW_0_Val << SHDW_CR_SHDW_Pos)             /* (SHDW_CR) No effect. Position  */
#define SHDW_CR_SHDW_1                        (SHDW_CR_SHDW_1_Val << SHDW_CR_SHDW_Pos)             /* (SHDW_CR) If KEY value is correct, asserts the SHDN pin. Position  */
#define SHDW_CR_LPMEN_Pos                     _UINT32_(21)                                         /* (SHDW_CR) LPM Pad Enable Position */
#define SHDW_CR_LPMEN_Msk                     (_UINT32_(0x1) << SHDW_CR_LPMEN_Pos)                 /* (SHDW_CR) LPM Pad Enable Mask */
#define SHDW_CR_LPMEN(value)                  (SHDW_CR_LPMEN_Msk & (_UINT32_(value) << SHDW_CR_LPMEN_Pos)) /* Assigment of value for LPMEN in the SHDW_CR register */
#define   SHDW_CR_LPMEN_0_Val                 _UINT32_(0x0)                                        /* (SHDW_CR) No effect.  */
#define   SHDW_CR_LPMEN_1_Val                 _UINT32_(0x1)                                        /* (SHDW_CR) The LPM pad is set high (external regulator is set in special powering state).  */
#define SHDW_CR_LPMEN_0                       (SHDW_CR_LPMEN_0_Val << SHDW_CR_LPMEN_Pos)           /* (SHDW_CR) No effect. Position  */
#define SHDW_CR_LPMEN_1                       (SHDW_CR_LPMEN_1_Val << SHDW_CR_LPMEN_Pos)           /* (SHDW_CR) The LPM pad is set high (external regulator is set in special powering state). Position  */
#define SHDW_CR_LPMDIS_Pos                    _UINT32_(22)                                         /* (SHDW_CR) LPM Pad Disable Position */
#define SHDW_CR_LPMDIS_Msk                    (_UINT32_(0x1) << SHDW_CR_LPMDIS_Pos)                /* (SHDW_CR) LPM Pad Disable Mask */
#define SHDW_CR_LPMDIS(value)                 (SHDW_CR_LPMDIS_Msk & (_UINT32_(value) << SHDW_CR_LPMDIS_Pos)) /* Assigment of value for LPMDIS in the SHDW_CR register */
#define   SHDW_CR_LPMDIS_0_Val                _UINT32_(0x0)                                        /* (SHDW_CR) No effect.  */
#define   SHDW_CR_LPMDIS_1_Val                _UINT32_(0x1)                                        /* (SHDW_CR) The LPM pad is set low (external regulator is set in standard powering state).  */
#define SHDW_CR_LPMDIS_0                      (SHDW_CR_LPMDIS_0_Val << SHDW_CR_LPMDIS_Pos)         /* (SHDW_CR) No effect. Position  */
#define SHDW_CR_LPMDIS_1                      (SHDW_CR_LPMDIS_1_Val << SHDW_CR_LPMDIS_Pos)         /* (SHDW_CR) The LPM pad is set low (external regulator is set in standard powering state). Position  */
#define SHDW_CR_KEY_Pos                       _UINT32_(24)                                         /* (SHDW_CR) Password Position */
#define SHDW_CR_KEY_Msk                       (_UINT32_(0xFF) << SHDW_CR_KEY_Pos)                  /* (SHDW_CR) Password Mask */
#define SHDW_CR_KEY(value)                    (SHDW_CR_KEY_Msk & (_UINT32_(value) << SHDW_CR_KEY_Pos)) /* Assigment of value for KEY in the SHDW_CR register */
#define   SHDW_CR_KEY_PASSWD_Val              _UINT32_(0xA5)                                       /* (SHDW_CR) Writing any other value in this field aborts the write operation.  */
#define SHDW_CR_KEY_PASSWD                    (SHDW_CR_KEY_PASSWD_Val << SHDW_CR_KEY_Pos)          /* (SHDW_CR) Writing any other value in this field aborts the write operation. Position  */
#define SHDW_CR_Msk                           _UINT32_(0xFF600001)                                 /* (SHDW_CR) Register Mask  */


/* -------- SHDW_MR : (SHDWC Offset: 0x04) (R/W 32) Mode Register -------- */
#define SHDW_MR_RESETVALUE                    _UINT32_(0x100000)                                   /*  (SHDW_MR) Mode Register  Reset Value */

#define SHDW_MR_RTTWKEN_Pos                   _UINT32_(16)                                         /* (SHDW_MR) Real-time Timer Wake-up Enable Position */
#define SHDW_MR_RTTWKEN_Msk                   (_UINT32_(0x1) << SHDW_MR_RTTWKEN_Pos)               /* (SHDW_MR) Real-time Timer Wake-up Enable Mask */
#define SHDW_MR_RTTWKEN(value)                (SHDW_MR_RTTWKEN_Msk & (_UINT32_(value) << SHDW_MR_RTTWKEN_Pos)) /* Assigment of value for RTTWKEN in the SHDW_MR register */
#define   SHDW_MR_RTTWKEN_0_Val               _UINT32_(0x0)                                        /* (SHDW_MR) The RTT Alarm signal has no effect on the SHDWC.  */
#define   SHDW_MR_RTTWKEN_1_Val               _UINT32_(0x1)                                        /* (SHDW_MR) The RTT Alarm signal forces the de-assertion of the SHDN pin.  */
#define SHDW_MR_RTTWKEN_0                     (SHDW_MR_RTTWKEN_0_Val << SHDW_MR_RTTWKEN_Pos)       /* (SHDW_MR) The RTT Alarm signal has no effect on the SHDWC. Position  */
#define SHDW_MR_RTTWKEN_1                     (SHDW_MR_RTTWKEN_1_Val << SHDW_MR_RTTWKEN_Pos)       /* (SHDW_MR) The RTT Alarm signal forces the de-assertion of the SHDN pin. Position  */
#define SHDW_MR_RTCWKEN_Pos                   _UINT32_(17)                                         /* (SHDW_MR) Real-time Clock Wake-up Enable Position */
#define SHDW_MR_RTCWKEN_Msk                   (_UINT32_(0x1) << SHDW_MR_RTCWKEN_Pos)               /* (SHDW_MR) Real-time Clock Wake-up Enable Mask */
#define SHDW_MR_RTCWKEN(value)                (SHDW_MR_RTCWKEN_Msk & (_UINT32_(value) << SHDW_MR_RTCWKEN_Pos)) /* Assigment of value for RTCWKEN in the SHDW_MR register */
#define   SHDW_MR_RTCWKEN_0_Val               _UINT32_(0x0)                                        /* (SHDW_MR) The RTC Alarm signal has no effect on the SHDWC.  */
#define   SHDW_MR_RTCWKEN_1_Val               _UINT32_(0x1)                                        /* (SHDW_MR) The RTC Alarm signal forces the de-assertion of the SHDN pin.  */
#define SHDW_MR_RTCWKEN_0                     (SHDW_MR_RTCWKEN_0_Val << SHDW_MR_RTCWKEN_Pos)       /* (SHDW_MR) The RTC Alarm signal has no effect on the SHDWC. Position  */
#define SHDW_MR_RTCWKEN_1                     (SHDW_MR_RTCWKEN_1_Val << SHDW_MR_RTCWKEN_Pos)       /* (SHDW_MR) The RTC Alarm signal forces the de-assertion of the SHDN pin. Position  */
#define SHDW_MR_AUTOLPM_Pos                   _UINT32_(20)                                         /* (SHDW_MR) Automatic LPM Pad Management Position */
#define SHDW_MR_AUTOLPM_Msk                   (_UINT32_(0x1) << SHDW_MR_AUTOLPM_Pos)               /* (SHDW_MR) Automatic LPM Pad Management Mask */
#define SHDW_MR_AUTOLPM(value)                (SHDW_MR_AUTOLPM_Msk & (_UINT32_(value) << SHDW_MR_AUTOLPM_Pos)) /* Assigment of value for AUTOLPM in the SHDW_MR register */
#define   SHDW_MR_AUTOLPM_0_Val               _UINT32_(0x0)                                        /* (SHDW_MR) The LPM pad is never automatically modified by the RSTC.  */
#define   SHDW_MR_AUTOLPM_1_Val               _UINT32_(0x1)                                        /* (SHDW_MR) The LPM pad is automatically modified by the RSTC when the system goes into or out of the ULP2 mode.  */
#define SHDW_MR_AUTOLPM_0                     (SHDW_MR_AUTOLPM_0_Val << SHDW_MR_AUTOLPM_Pos)       /* (SHDW_MR) The LPM pad is never automatically modified by the RSTC. Position  */
#define SHDW_MR_AUTOLPM_1                     (SHDW_MR_AUTOLPM_1_Val << SHDW_MR_AUTOLPM_Pos)       /* (SHDW_MR) The LPM pad is automatically modified by the RSTC when the system goes into or out of the ULP2 mode. Position  */
#define SHDW_MR_WKUPDBC_Pos                   _UINT32_(24)                                         /* (SHDW_MR) Wake-up Inputs Debouncer Period Position */
#define SHDW_MR_WKUPDBC_Msk                   (_UINT32_(0x7) << SHDW_MR_WKUPDBC_Pos)               /* (SHDW_MR) Wake-up Inputs Debouncer Period Mask */
#define SHDW_MR_WKUPDBC(value)                (SHDW_MR_WKUPDBC_Msk & (_UINT32_(value) << SHDW_MR_WKUPDBC_Pos)) /* Assigment of value for WKUPDBC in the SHDW_MR register */
#define   SHDW_MR_WKUPDBC_IMMEDIATE_Val       _UINT32_(0x0)                                        /* (SHDW_MR) Immediate, no debouncing, detected active at least on one MD_SLCK edge.  */
#define   SHDW_MR_WKUPDBC_3_SLCK_Val          _UINT32_(0x1)                                        /* (SHDW_MR) PIOBUx shall be in its active state for at least 3 MD_SLCK periods  */
#define   SHDW_MR_WKUPDBC_32_SLCK_Val         _UINT32_(0x2)                                        /* (SHDW_MR) PIOBUx shall be in its active state for at least 32 MD_SLCK periods  */
#define   SHDW_MR_WKUPDBC_512_SLCK_Val        _UINT32_(0x3)                                        /* (SHDW_MR) PIOBUx shall be in its active state for at least 512 MD_SLCK periods  */
#define   SHDW_MR_WKUPDBC_4096_SLCK_Val       _UINT32_(0x4)                                        /* (SHDW_MR) PIOBUx shall be in its active state for at least 4,096 MD_SLCK periods  */
#define   SHDW_MR_WKUPDBC_32768_SLCK_Val      _UINT32_(0x5)                                        /* (SHDW_MR) PIOBUx shall be in its active state for at least 32,768 MD_SLCK periods  */
#define SHDW_MR_WKUPDBC_IMMEDIATE             (SHDW_MR_WKUPDBC_IMMEDIATE_Val << SHDW_MR_WKUPDBC_Pos) /* (SHDW_MR) Immediate, no debouncing, detected active at least on one MD_SLCK edge. Position  */
#define SHDW_MR_WKUPDBC_3_SLCK                (SHDW_MR_WKUPDBC_3_SLCK_Val << SHDW_MR_WKUPDBC_Pos)  /* (SHDW_MR) PIOBUx shall be in its active state for at least 3 MD_SLCK periods Position  */
#define SHDW_MR_WKUPDBC_32_SLCK               (SHDW_MR_WKUPDBC_32_SLCK_Val << SHDW_MR_WKUPDBC_Pos) /* (SHDW_MR) PIOBUx shall be in its active state for at least 32 MD_SLCK periods Position  */
#define SHDW_MR_WKUPDBC_512_SLCK              (SHDW_MR_WKUPDBC_512_SLCK_Val << SHDW_MR_WKUPDBC_Pos) /* (SHDW_MR) PIOBUx shall be in its active state for at least 512 MD_SLCK periods Position  */
#define SHDW_MR_WKUPDBC_4096_SLCK             (SHDW_MR_WKUPDBC_4096_SLCK_Val << SHDW_MR_WKUPDBC_Pos) /* (SHDW_MR) PIOBUx shall be in its active state for at least 4,096 MD_SLCK periods Position  */
#define SHDW_MR_WKUPDBC_32768_SLCK            (SHDW_MR_WKUPDBC_32768_SLCK_Val << SHDW_MR_WKUPDBC_Pos) /* (SHDW_MR) PIOBUx shall be in its active state for at least 32,768 MD_SLCK periods Position  */
#define SHDW_MR_Msk                           _UINT32_(0x07130000)                                 /* (SHDW_MR) Register Mask  */


/* -------- SHDW_SR : (SHDWC Offset: 0x08) ( R/ 32) Status Register -------- */
#define SHDW_SR_RESETVALUE                    _UINT32_(0x00)                                       /*  (SHDW_SR) Status Register  Reset Value */

#define SHDW_SR_WKUPS_Pos                     _UINT32_(0)                                          /* (SHDW_SR) WKUP Wake-up Status Position */
#define SHDW_SR_WKUPS_Msk                     (_UINT32_(0x1) << SHDW_SR_WKUPS_Pos)                 /* (SHDW_SR) WKUP Wake-up Status Mask */
#define SHDW_SR_WKUPS(value)                  (SHDW_SR_WKUPS_Msk & (_UINT32_(value) << SHDW_SR_WKUPS_Pos)) /* Assigment of value for WKUPS in the SHDW_SR register */
#define   SHDW_SR_WKUPS_NO_Val                _UINT32_(0x0)                                        /* (SHDW_SR) No wake-up due to the assertion of one or more WKUP pins has occurred since the last read of SHDW_SR.  */
#define   SHDW_SR_WKUPS_PRESENT_Val           _UINT32_(0x1)                                        /* (SHDW_SR) At least one wake-up due to the assertion of one or more WKUP pins has occurred since the last read of SHDW_SR.  */
#define SHDW_SR_WKUPS_NO                      (SHDW_SR_WKUPS_NO_Val << SHDW_SR_WKUPS_Pos)          /* (SHDW_SR) No wake-up due to the assertion of one or more WKUP pins has occurred since the last read of SHDW_SR. Position  */
#define SHDW_SR_WKUPS_PRESENT                 (SHDW_SR_WKUPS_PRESENT_Val << SHDW_SR_WKUPS_Pos)     /* (SHDW_SR) At least one wake-up due to the assertion of one or more WKUP pins has occurred since the last read of SHDW_SR. Position  */
#define SHDW_SR_RTTWK_Pos                     _UINT32_(4)                                          /* (SHDW_SR) Real-time Timer Wake-up Position */
#define SHDW_SR_RTTWK_Msk                     (_UINT32_(0x1) << SHDW_SR_RTTWK_Pos)                 /* (SHDW_SR) Real-time Timer Wake-up Mask */
#define SHDW_SR_RTTWK(value)                  (SHDW_SR_RTTWK_Msk & (_UINT32_(value) << SHDW_SR_RTTWK_Pos)) /* Assigment of value for RTTWK in the SHDW_SR register */
#define   SHDW_SR_RTTWK_0_Val                 _UINT32_(0x0)                                        /* (SHDW_SR) No wake-up alarm from the RTT occurred since the last read of SHDW_SR.  */
#define   SHDW_SR_RTTWK_1_Val                 _UINT32_(0x1)                                        /* (SHDW_SR) At least one wake-up alarm from the RTT occurred since the last read of SHDW_SR.  */
#define SHDW_SR_RTTWK_0                       (SHDW_SR_RTTWK_0_Val << SHDW_SR_RTTWK_Pos)           /* (SHDW_SR) No wake-up alarm from the RTT occurred since the last read of SHDW_SR. Position  */
#define SHDW_SR_RTTWK_1                       (SHDW_SR_RTTWK_1_Val << SHDW_SR_RTTWK_Pos)           /* (SHDW_SR) At least one wake-up alarm from the RTT occurred since the last read of SHDW_SR. Position  */
#define SHDW_SR_RTCWK_Pos                     _UINT32_(5)                                          /* (SHDW_SR) Real-time Clock Wake-up Position */
#define SHDW_SR_RTCWK_Msk                     (_UINT32_(0x1) << SHDW_SR_RTCWK_Pos)                 /* (SHDW_SR) Real-time Clock Wake-up Mask */
#define SHDW_SR_RTCWK(value)                  (SHDW_SR_RTCWK_Msk & (_UINT32_(value) << SHDW_SR_RTCWK_Pos)) /* Assigment of value for RTCWK in the SHDW_SR register */
#define   SHDW_SR_RTCWK_0_Val                 _UINT32_(0x0)                                        /* (SHDW_SR) No wake-up alarm from the RTC occurred since the last read of SHDW_SR.  */
#define   SHDW_SR_RTCWK_1_Val                 _UINT32_(0x1)                                        /* (SHDW_SR) At least one wake-up alarm from the RTC occurred since the last read of SHDW_SR.  */
#define SHDW_SR_RTCWK_0                       (SHDW_SR_RTCWK_0_Val << SHDW_SR_RTCWK_Pos)           /* (SHDW_SR) No wake-up alarm from the RTC occurred since the last read of SHDW_SR. Position  */
#define SHDW_SR_RTCWK_1                       (SHDW_SR_RTCWK_1_Val << SHDW_SR_RTCWK_Pos)           /* (SHDW_SR) At least one wake-up alarm from the RTC occurred since the last read of SHDW_SR. Position  */
#define SHDW_SR_LPM_Pos                       _UINT32_(8)                                          /* (SHDW_SR) Low-Power Mode Pad Status Position */
#define SHDW_SR_LPM_Msk                       (_UINT32_(0x1) << SHDW_SR_LPM_Pos)                   /* (SHDW_SR) Low-Power Mode Pad Status Mask */
#define SHDW_SR_LPM(value)                    (SHDW_SR_LPM_Msk & (_UINT32_(value) << SHDW_SR_LPM_Pos)) /* Assigment of value for LPM in the SHDW_SR register */
#define   SHDW_SR_LPM_0_Val                   _UINT32_(0x0)                                        /* (SHDW_SR) The LPM pad is currently set to 0.  */
#define   SHDW_SR_LPM_1_Val                   _UINT32_(0x1)                                        /* (SHDW_SR) The LPM pad is currently set to 1.  */
#define SHDW_SR_LPM_0                         (SHDW_SR_LPM_0_Val << SHDW_SR_LPM_Pos)               /* (SHDW_SR) The LPM pad is currently set to 0. Position  */
#define SHDW_SR_LPM_1                         (SHDW_SR_LPM_1_Val << SHDW_SR_LPM_Pos)               /* (SHDW_SR) The LPM pad is currently set to 1. Position  */
#define SHDW_SR_WKUPIS0_Pos                   _UINT32_(16)                                         /* (SHDW_SR) Wake-up 0 to 5 Input Status Position */
#define SHDW_SR_WKUPIS0_Msk                   (_UINT32_(0x1) << SHDW_SR_WKUPIS0_Pos)               /* (SHDW_SR) Wake-up 0 to 5 Input Status Mask */
#define SHDW_SR_WKUPIS0(value)                (SHDW_SR_WKUPIS0_Msk & (_UINT32_(value) << SHDW_SR_WKUPIS0_Pos)) /* Assigment of value for WKUPIS0 in the SHDW_SR register */
#define   SHDW_SR_WKUPIS0_DISABLE_Val         _UINT32_(0x0)                                        /* (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDW_SR_WKUPIS0_ENABLE_Val          _UINT32_(0x1)                                        /* (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDW_SR_WKUPIS0_DISABLE               (SHDW_SR_WKUPIS0_DISABLE_Val << SHDW_SR_WKUPIS0_Pos) /* (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_WKUPIS0_ENABLE                (SHDW_SR_WKUPIS0_ENABLE_Val << SHDW_SR_WKUPIS0_Pos)  /* (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_WKUPIS1_Pos                   _UINT32_(17)                                         /* (SHDW_SR) Wake-up 0 to 5 Input Status Position */
#define SHDW_SR_WKUPIS1_Msk                   (_UINT32_(0x1) << SHDW_SR_WKUPIS1_Pos)               /* (SHDW_SR) Wake-up 0 to 5 Input Status Mask */
#define SHDW_SR_WKUPIS1(value)                (SHDW_SR_WKUPIS1_Msk & (_UINT32_(value) << SHDW_SR_WKUPIS1_Pos)) /* Assigment of value for WKUPIS1 in the SHDW_SR register */
#define   SHDW_SR_WKUPIS1_DISABLE_Val         _UINT32_(0x0)                                        /* (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDW_SR_WKUPIS1_ENABLE_Val          _UINT32_(0x1)                                        /* (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDW_SR_WKUPIS1_DISABLE               (SHDW_SR_WKUPIS1_DISABLE_Val << SHDW_SR_WKUPIS1_Pos) /* (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_WKUPIS1_ENABLE                (SHDW_SR_WKUPIS1_ENABLE_Val << SHDW_SR_WKUPIS1_Pos)  /* (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_WKUPIS2_Pos                   _UINT32_(18)                                         /* (SHDW_SR) Wake-up 0 to 5 Input Status Position */
#define SHDW_SR_WKUPIS2_Msk                   (_UINT32_(0x1) << SHDW_SR_WKUPIS2_Pos)               /* (SHDW_SR) Wake-up 0 to 5 Input Status Mask */
#define SHDW_SR_WKUPIS2(value)                (SHDW_SR_WKUPIS2_Msk & (_UINT32_(value) << SHDW_SR_WKUPIS2_Pos)) /* Assigment of value for WKUPIS2 in the SHDW_SR register */
#define   SHDW_SR_WKUPIS2_DISABLE_Val         _UINT32_(0x0)                                        /* (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDW_SR_WKUPIS2_ENABLE_Val          _UINT32_(0x1)                                        /* (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDW_SR_WKUPIS2_DISABLE               (SHDW_SR_WKUPIS2_DISABLE_Val << SHDW_SR_WKUPIS2_Pos) /* (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_WKUPIS2_ENABLE                (SHDW_SR_WKUPIS2_ENABLE_Val << SHDW_SR_WKUPIS2_Pos)  /* (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_WKUPIS3_Pos                   _UINT32_(19)                                         /* (SHDW_SR) Wake-up 0 to 5 Input Status Position */
#define SHDW_SR_WKUPIS3_Msk                   (_UINT32_(0x1) << SHDW_SR_WKUPIS3_Pos)               /* (SHDW_SR) Wake-up 0 to 5 Input Status Mask */
#define SHDW_SR_WKUPIS3(value)                (SHDW_SR_WKUPIS3_Msk & (_UINT32_(value) << SHDW_SR_WKUPIS3_Pos)) /* Assigment of value for WKUPIS3 in the SHDW_SR register */
#define   SHDW_SR_WKUPIS3_DISABLE_Val         _UINT32_(0x0)                                        /* (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDW_SR_WKUPIS3_ENABLE_Val          _UINT32_(0x1)                                        /* (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDW_SR_WKUPIS3_DISABLE               (SHDW_SR_WKUPIS3_DISABLE_Val << SHDW_SR_WKUPIS3_Pos) /* (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_WKUPIS3_ENABLE                (SHDW_SR_WKUPIS3_ENABLE_Val << SHDW_SR_WKUPIS3_Pos)  /* (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_WKUPIS4_Pos                   _UINT32_(20)                                         /* (SHDW_SR) Wake-up 0 to 5 Input Status Position */
#define SHDW_SR_WKUPIS4_Msk                   (_UINT32_(0x1) << SHDW_SR_WKUPIS4_Pos)               /* (SHDW_SR) Wake-up 0 to 5 Input Status Mask */
#define SHDW_SR_WKUPIS4(value)                (SHDW_SR_WKUPIS4_Msk & (_UINT32_(value) << SHDW_SR_WKUPIS4_Pos)) /* Assigment of value for WKUPIS4 in the SHDW_SR register */
#define   SHDW_SR_WKUPIS4_DISABLE_Val         _UINT32_(0x0)                                        /* (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDW_SR_WKUPIS4_ENABLE_Val          _UINT32_(0x1)                                        /* (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDW_SR_WKUPIS4_DISABLE               (SHDW_SR_WKUPIS4_DISABLE_Val << SHDW_SR_WKUPIS4_Pos) /* (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_WKUPIS4_ENABLE                (SHDW_SR_WKUPIS4_ENABLE_Val << SHDW_SR_WKUPIS4_Pos)  /* (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_WKUPIS5_Pos                   _UINT32_(21)                                         /* (SHDW_SR) Wake-up 0 to 5 Input Status Position */
#define SHDW_SR_WKUPIS5_Msk                   (_UINT32_(0x1) << SHDW_SR_WKUPIS5_Pos)               /* (SHDW_SR) Wake-up 0 to 5 Input Status Mask */
#define SHDW_SR_WKUPIS5(value)                (SHDW_SR_WKUPIS5_Msk & (_UINT32_(value) << SHDW_SR_WKUPIS5_Pos)) /* Assigment of value for WKUPIS5 in the SHDW_SR register */
#define   SHDW_SR_WKUPIS5_DISABLE_Val         _UINT32_(0x0)                                        /* (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event.  */
#define   SHDW_SR_WKUPIS5_ENABLE_Val          _UINT32_(0x1)                                        /* (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event.  */
#define SHDW_SR_WKUPIS5_DISABLE               (SHDW_SR_WKUPIS5_DISABLE_Val << SHDW_SR_WKUPIS5_Pos) /* (SHDW_SR) The corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_WKUPIS5_ENABLE                (SHDW_SR_WKUPIS5_ENABLE_Val << SHDW_SR_WKUPIS5_Pos)  /* (SHDW_SR) The corresponding wake-up input was active at the time the debouncer triggered a wake-up event. Position  */
#define SHDW_SR_Msk                           _UINT32_(0x003F0131)                                 /* (SHDW_SR) Register Mask  */

#define SHDW_SR_WKUPIS_Pos                    _UINT32_(16)                                         /* (SHDW_SR Position) Wake-up x to 5 Input Status */
#define SHDW_SR_WKUPIS_Msk                    (_UINT32_(0x3F) << SHDW_SR_WKUPIS_Pos)               /* (SHDW_SR Mask) WKUPIS */
#define SHDW_SR_WKUPIS(value)                 (SHDW_SR_WKUPIS_Msk & (_UINT32_(value) << SHDW_SR_WKUPIS_Pos)) 

/* -------- SHDW_WUIR : (SHDWC Offset: 0x0C) (R/W 32) Wake-up Inputs Register -------- */
#define SHDW_WUIR_RESETVALUE                  _UINT32_(0x00)                                       /*  (SHDW_WUIR) Wake-up Inputs Register  Reset Value */

#define SHDW_WUIR_WKUPEN0_Pos                 _UINT32_(0)                                          /* (SHDW_WUIR) Wake-up 0 to 5 Input Enable Position */
#define SHDW_WUIR_WKUPEN0_Msk                 (_UINT32_(0x1) << SHDW_WUIR_WKUPEN0_Pos)             /* (SHDW_WUIR) Wake-up 0 to 5 Input Enable Mask */
#define SHDW_WUIR_WKUPEN0(value)              (SHDW_WUIR_WKUPEN0_Msk & (_UINT32_(value) << SHDW_WUIR_WKUPEN0_Pos)) /* Assigment of value for WKUPEN0 in the SHDW_WUIR register */
#define   SHDW_WUIR_WKUPEN0_DISABLE_Val       _UINT32_(0x0)                                        /* (SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDW_WUIR_WKUPEN0_ENABLE_Val        _UINT32_(0x1)                                        /* (SHDW_WUIR) The corresponding wake-up input forces wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPEN0_DISABLE             (SHDW_WUIR_WKUPEN0_DISABLE_Val << SHDW_WUIR_WKUPEN0_Pos) /* (SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SHDW_WUIR_WKUPEN0_ENABLE              (SHDW_WUIR_WKUPEN0_ENABLE_Val << SHDW_WUIR_WKUPEN0_Pos) /* (SHDW_WUIR) The corresponding wake-up input forces wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPEN1_Pos                 _UINT32_(1)                                          /* (SHDW_WUIR) Wake-up 0 to 5 Input Enable Position */
#define SHDW_WUIR_WKUPEN1_Msk                 (_UINT32_(0x1) << SHDW_WUIR_WKUPEN1_Pos)             /* (SHDW_WUIR) Wake-up 0 to 5 Input Enable Mask */
#define SHDW_WUIR_WKUPEN1(value)              (SHDW_WUIR_WKUPEN1_Msk & (_UINT32_(value) << SHDW_WUIR_WKUPEN1_Pos)) /* Assigment of value for WKUPEN1 in the SHDW_WUIR register */
#define   SHDW_WUIR_WKUPEN1_DISABLE_Val       _UINT32_(0x0)                                        /* (SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDW_WUIR_WKUPEN1_ENABLE_Val        _UINT32_(0x1)                                        /* (SHDW_WUIR) The corresponding wake-up input forces wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPEN1_DISABLE             (SHDW_WUIR_WKUPEN1_DISABLE_Val << SHDW_WUIR_WKUPEN1_Pos) /* (SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SHDW_WUIR_WKUPEN1_ENABLE              (SHDW_WUIR_WKUPEN1_ENABLE_Val << SHDW_WUIR_WKUPEN1_Pos) /* (SHDW_WUIR) The corresponding wake-up input forces wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPEN2_Pos                 _UINT32_(2)                                          /* (SHDW_WUIR) Wake-up 0 to 5 Input Enable Position */
#define SHDW_WUIR_WKUPEN2_Msk                 (_UINT32_(0x1) << SHDW_WUIR_WKUPEN2_Pos)             /* (SHDW_WUIR) Wake-up 0 to 5 Input Enable Mask */
#define SHDW_WUIR_WKUPEN2(value)              (SHDW_WUIR_WKUPEN2_Msk & (_UINT32_(value) << SHDW_WUIR_WKUPEN2_Pos)) /* Assigment of value for WKUPEN2 in the SHDW_WUIR register */
#define   SHDW_WUIR_WKUPEN2_DISABLE_Val       _UINT32_(0x0)                                        /* (SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDW_WUIR_WKUPEN2_ENABLE_Val        _UINT32_(0x1)                                        /* (SHDW_WUIR) The corresponding wake-up input forces wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPEN2_DISABLE             (SHDW_WUIR_WKUPEN2_DISABLE_Val << SHDW_WUIR_WKUPEN2_Pos) /* (SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SHDW_WUIR_WKUPEN2_ENABLE              (SHDW_WUIR_WKUPEN2_ENABLE_Val << SHDW_WUIR_WKUPEN2_Pos) /* (SHDW_WUIR) The corresponding wake-up input forces wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPEN3_Pos                 _UINT32_(3)                                          /* (SHDW_WUIR) Wake-up 0 to 5 Input Enable Position */
#define SHDW_WUIR_WKUPEN3_Msk                 (_UINT32_(0x1) << SHDW_WUIR_WKUPEN3_Pos)             /* (SHDW_WUIR) Wake-up 0 to 5 Input Enable Mask */
#define SHDW_WUIR_WKUPEN3(value)              (SHDW_WUIR_WKUPEN3_Msk & (_UINT32_(value) << SHDW_WUIR_WKUPEN3_Pos)) /* Assigment of value for WKUPEN3 in the SHDW_WUIR register */
#define   SHDW_WUIR_WKUPEN3_DISABLE_Val       _UINT32_(0x0)                                        /* (SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDW_WUIR_WKUPEN3_ENABLE_Val        _UINT32_(0x1)                                        /* (SHDW_WUIR) The corresponding wake-up input forces wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPEN3_DISABLE             (SHDW_WUIR_WKUPEN3_DISABLE_Val << SHDW_WUIR_WKUPEN3_Pos) /* (SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SHDW_WUIR_WKUPEN3_ENABLE              (SHDW_WUIR_WKUPEN3_ENABLE_Val << SHDW_WUIR_WKUPEN3_Pos) /* (SHDW_WUIR) The corresponding wake-up input forces wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPEN4_Pos                 _UINT32_(4)                                          /* (SHDW_WUIR) Wake-up 0 to 5 Input Enable Position */
#define SHDW_WUIR_WKUPEN4_Msk                 (_UINT32_(0x1) << SHDW_WUIR_WKUPEN4_Pos)             /* (SHDW_WUIR) Wake-up 0 to 5 Input Enable Mask */
#define SHDW_WUIR_WKUPEN4(value)              (SHDW_WUIR_WKUPEN4_Msk & (_UINT32_(value) << SHDW_WUIR_WKUPEN4_Pos)) /* Assigment of value for WKUPEN4 in the SHDW_WUIR register */
#define   SHDW_WUIR_WKUPEN4_DISABLE_Val       _UINT32_(0x0)                                        /* (SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDW_WUIR_WKUPEN4_ENABLE_Val        _UINT32_(0x1)                                        /* (SHDW_WUIR) The corresponding wake-up input forces wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPEN4_DISABLE             (SHDW_WUIR_WKUPEN4_DISABLE_Val << SHDW_WUIR_WKUPEN4_Pos) /* (SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SHDW_WUIR_WKUPEN4_ENABLE              (SHDW_WUIR_WKUPEN4_ENABLE_Val << SHDW_WUIR_WKUPEN4_Pos) /* (SHDW_WUIR) The corresponding wake-up input forces wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPEN5_Pos                 _UINT32_(5)                                          /* (SHDW_WUIR) Wake-up 0 to 5 Input Enable Position */
#define SHDW_WUIR_WKUPEN5_Msk                 (_UINT32_(0x1) << SHDW_WUIR_WKUPEN5_Pos)             /* (SHDW_WUIR) Wake-up 0 to 5 Input Enable Mask */
#define SHDW_WUIR_WKUPEN5(value)              (SHDW_WUIR_WKUPEN5_Msk & (_UINT32_(value) << SHDW_WUIR_WKUPEN5_Pos)) /* Assigment of value for WKUPEN5 in the SHDW_WUIR register */
#define   SHDW_WUIR_WKUPEN5_DISABLE_Val       _UINT32_(0x0)                                        /* (SHDW_WUIR) The corresponding wake-up input has no wake-up effect.  */
#define   SHDW_WUIR_WKUPEN5_ENABLE_Val        _UINT32_(0x1)                                        /* (SHDW_WUIR) The corresponding wake-up input forces wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPEN5_DISABLE             (SHDW_WUIR_WKUPEN5_DISABLE_Val << SHDW_WUIR_WKUPEN5_Pos) /* (SHDW_WUIR) The corresponding wake-up input has no wake-up effect. Position  */
#define SHDW_WUIR_WKUPEN5_ENABLE              (SHDW_WUIR_WKUPEN5_ENABLE_Val << SHDW_WUIR_WKUPEN5_Pos) /* (SHDW_WUIR) The corresponding wake-up input forces wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT0_Pos                  _UINT32_(16)                                         /* (SHDW_WUIR) Wake-up 0 to 5 Input Type Position */
#define SHDW_WUIR_WKUPT0_Msk                  (_UINT32_(0x1) << SHDW_WUIR_WKUPT0_Pos)              /* (SHDW_WUIR) Wake-up 0 to 5 Input Type Mask */
#define SHDW_WUIR_WKUPT0(value)               (SHDW_WUIR_WKUPT0_Msk & (_UINT32_(value) << SHDW_WUIR_WKUPT0_Pos)) /* Assigment of value for WKUPT0 in the SHDW_WUIR register */
#define   SHDW_WUIR_WKUPT0_LOW_Val            _UINT32_(0x0)                                        /* (SHDW_WUIR) A falling edge followed by a low level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply.  */
#define   SHDW_WUIR_WKUPT0_HIGH_Val           _UINT32_(0x1)                                        /* (SHDW_WUIR) A rising edge followed by a high level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPT0_LOW                  (SHDW_WUIR_WKUPT0_LOW_Val << SHDW_WUIR_WKUPT0_Pos)   /* (SHDW_WUIR) A falling edge followed by a low level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT0_HIGH                 (SHDW_WUIR_WKUPT0_HIGH_Val << SHDW_WUIR_WKUPT0_Pos)  /* (SHDW_WUIR) A rising edge followed by a high level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT1_Pos                  _UINT32_(17)                                         /* (SHDW_WUIR) Wake-up 0 to 5 Input Type Position */
#define SHDW_WUIR_WKUPT1_Msk                  (_UINT32_(0x1) << SHDW_WUIR_WKUPT1_Pos)              /* (SHDW_WUIR) Wake-up 0 to 5 Input Type Mask */
#define SHDW_WUIR_WKUPT1(value)               (SHDW_WUIR_WKUPT1_Msk & (_UINT32_(value) << SHDW_WUIR_WKUPT1_Pos)) /* Assigment of value for WKUPT1 in the SHDW_WUIR register */
#define   SHDW_WUIR_WKUPT1_LOW_Val            _UINT32_(0x0)                                        /* (SHDW_WUIR) A falling edge followed by a low level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply.  */
#define   SHDW_WUIR_WKUPT1_HIGH_Val           _UINT32_(0x1)                                        /* (SHDW_WUIR) A rising edge followed by a high level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPT1_LOW                  (SHDW_WUIR_WKUPT1_LOW_Val << SHDW_WUIR_WKUPT1_Pos)   /* (SHDW_WUIR) A falling edge followed by a low level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT1_HIGH                 (SHDW_WUIR_WKUPT1_HIGH_Val << SHDW_WUIR_WKUPT1_Pos)  /* (SHDW_WUIR) A rising edge followed by a high level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT2_Pos                  _UINT32_(18)                                         /* (SHDW_WUIR) Wake-up 0 to 5 Input Type Position */
#define SHDW_WUIR_WKUPT2_Msk                  (_UINT32_(0x1) << SHDW_WUIR_WKUPT2_Pos)              /* (SHDW_WUIR) Wake-up 0 to 5 Input Type Mask */
#define SHDW_WUIR_WKUPT2(value)               (SHDW_WUIR_WKUPT2_Msk & (_UINT32_(value) << SHDW_WUIR_WKUPT2_Pos)) /* Assigment of value for WKUPT2 in the SHDW_WUIR register */
#define   SHDW_WUIR_WKUPT2_LOW_Val            _UINT32_(0x0)                                        /* (SHDW_WUIR) A falling edge followed by a low level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply.  */
#define   SHDW_WUIR_WKUPT2_HIGH_Val           _UINT32_(0x1)                                        /* (SHDW_WUIR) A rising edge followed by a high level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPT2_LOW                  (SHDW_WUIR_WKUPT2_LOW_Val << SHDW_WUIR_WKUPT2_Pos)   /* (SHDW_WUIR) A falling edge followed by a low level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT2_HIGH                 (SHDW_WUIR_WKUPT2_HIGH_Val << SHDW_WUIR_WKUPT2_Pos)  /* (SHDW_WUIR) A rising edge followed by a high level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT3_Pos                  _UINT32_(19)                                         /* (SHDW_WUIR) Wake-up 0 to 5 Input Type Position */
#define SHDW_WUIR_WKUPT3_Msk                  (_UINT32_(0x1) << SHDW_WUIR_WKUPT3_Pos)              /* (SHDW_WUIR) Wake-up 0 to 5 Input Type Mask */
#define SHDW_WUIR_WKUPT3(value)               (SHDW_WUIR_WKUPT3_Msk & (_UINT32_(value) << SHDW_WUIR_WKUPT3_Pos)) /* Assigment of value for WKUPT3 in the SHDW_WUIR register */
#define   SHDW_WUIR_WKUPT3_LOW_Val            _UINT32_(0x0)                                        /* (SHDW_WUIR) A falling edge followed by a low level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply.  */
#define   SHDW_WUIR_WKUPT3_HIGH_Val           _UINT32_(0x1)                                        /* (SHDW_WUIR) A rising edge followed by a high level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPT3_LOW                  (SHDW_WUIR_WKUPT3_LOW_Val << SHDW_WUIR_WKUPT3_Pos)   /* (SHDW_WUIR) A falling edge followed by a low level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT3_HIGH                 (SHDW_WUIR_WKUPT3_HIGH_Val << SHDW_WUIR_WKUPT3_Pos)  /* (SHDW_WUIR) A rising edge followed by a high level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT4_Pos                  _UINT32_(20)                                         /* (SHDW_WUIR) Wake-up 0 to 5 Input Type Position */
#define SHDW_WUIR_WKUPT4_Msk                  (_UINT32_(0x1) << SHDW_WUIR_WKUPT4_Pos)              /* (SHDW_WUIR) Wake-up 0 to 5 Input Type Mask */
#define SHDW_WUIR_WKUPT4(value)               (SHDW_WUIR_WKUPT4_Msk & (_UINT32_(value) << SHDW_WUIR_WKUPT4_Pos)) /* Assigment of value for WKUPT4 in the SHDW_WUIR register */
#define   SHDW_WUIR_WKUPT4_LOW_Val            _UINT32_(0x0)                                        /* (SHDW_WUIR) A falling edge followed by a low level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply.  */
#define   SHDW_WUIR_WKUPT4_HIGH_Val           _UINT32_(0x1)                                        /* (SHDW_WUIR) A rising edge followed by a high level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPT4_LOW                  (SHDW_WUIR_WKUPT4_LOW_Val << SHDW_WUIR_WKUPT4_Pos)   /* (SHDW_WUIR) A falling edge followed by a low level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT4_HIGH                 (SHDW_WUIR_WKUPT4_HIGH_Val << SHDW_WUIR_WKUPT4_Pos)  /* (SHDW_WUIR) A rising edge followed by a high level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT5_Pos                  _UINT32_(21)                                         /* (SHDW_WUIR) Wake-up 0 to 5 Input Type Position */
#define SHDW_WUIR_WKUPT5_Msk                  (_UINT32_(0x1) << SHDW_WUIR_WKUPT5_Pos)              /* (SHDW_WUIR) Wake-up 0 to 5 Input Type Mask */
#define SHDW_WUIR_WKUPT5(value)               (SHDW_WUIR_WKUPT5_Msk & (_UINT32_(value) << SHDW_WUIR_WKUPT5_Pos)) /* Assigment of value for WKUPT5 in the SHDW_WUIR register */
#define   SHDW_WUIR_WKUPT5_LOW_Val            _UINT32_(0x0)                                        /* (SHDW_WUIR) A falling edge followed by a low level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply.  */
#define   SHDW_WUIR_WKUPT5_HIGH_Val           _UINT32_(0x1)                                        /* (SHDW_WUIR) A rising edge followed by a high level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply.  */
#define SHDW_WUIR_WKUPT5_LOW                  (SHDW_WUIR_WKUPT5_LOW_Val << SHDW_WUIR_WKUPT5_Pos)   /* (SHDW_WUIR) A falling edge followed by a low level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply. Position  */
#define SHDW_WUIR_WKUPT5_HIGH                 (SHDW_WUIR_WKUPT5_HIGH_Val << SHDW_WUIR_WKUPT5_Pos)  /* (SHDW_WUIR) A rising edge followed by a high level on the corresponding wake-up input, for a period defined by WKUPDBC, forces wake-up of the core power supply. Position  */
#define SHDW_WUIR_Msk                         _UINT32_(0x003F003F)                                 /* (SHDW_WUIR) Register Mask  */

#define SHDW_WUIR_WKUPEN_Pos                  _UINT32_(0)                                          /* (SHDW_WUIR Position) Wake-up x to 5 Input Enable */
#define SHDW_WUIR_WKUPEN_Msk                  (_UINT32_(0x3F) << SHDW_WUIR_WKUPEN_Pos)             /* (SHDW_WUIR Mask) WKUPEN */
#define SHDW_WUIR_WKUPEN(value)               (SHDW_WUIR_WKUPEN_Msk & (_UINT32_(value) << SHDW_WUIR_WKUPEN_Pos)) 
#define SHDW_WUIR_WKUPT_Pos                   _UINT32_(16)                                         /* (SHDW_WUIR Position) Wake-up x to 5 Input Type */
#define SHDW_WUIR_WKUPT_Msk                   (_UINT32_(0x3F) << SHDW_WUIR_WKUPT_Pos)              /* (SHDW_WUIR Mask) WKUPT */
#define SHDW_WUIR_WKUPT(value)                (SHDW_WUIR_WKUPT_Msk & (_UINT32_(value) << SHDW_WUIR_WKUPT_Pos)) 

/* -------- SHDW_IER : (SHDWC Offset: 0x10) ( /W 32) Interrupt Enable Register -------- */
#define SHDW_IER_WKUP0_Pos                    _UINT32_(0)                                          /* (SHDW_IER) Wake-up 0 Interrupt Enable Position */
#define SHDW_IER_WKUP0_Msk                    (_UINT32_(0x1) << SHDW_IER_WKUP0_Pos)                /* (SHDW_IER) Wake-up 0 Interrupt Enable Mask */
#define SHDW_IER_WKUP0(value)                 (SHDW_IER_WKUP0_Msk & (_UINT32_(value) << SHDW_IER_WKUP0_Pos)) /* Assigment of value for WKUP0 in the SHDW_IER register */
#define   SHDW_IER_WKUP0_0_Val                _UINT32_(0x0)                                        /* (SHDW_IER) No effect.  */
#define   SHDW_IER_WKUP0_1_Val                _UINT32_(0x1)                                        /* (SHDW_IER) Enables the corresponding interrupt.  */
#define SHDW_IER_WKUP0_0                      (SHDW_IER_WKUP0_0_Val << SHDW_IER_WKUP0_Pos)         /* (SHDW_IER) No effect. Position  */
#define SHDW_IER_WKUP0_1                      (SHDW_IER_WKUP0_1_Val << SHDW_IER_WKUP0_Pos)         /* (SHDW_IER) Enables the corresponding interrupt. Position  */
#define SHDW_IER_WKUP1_Pos                    _UINT32_(1)                                          /* (SHDW_IER) Wake-up 1 Interrupt Enable Position */
#define SHDW_IER_WKUP1_Msk                    (_UINT32_(0x1) << SHDW_IER_WKUP1_Pos)                /* (SHDW_IER) Wake-up 1 Interrupt Enable Mask */
#define SHDW_IER_WKUP1(value)                 (SHDW_IER_WKUP1_Msk & (_UINT32_(value) << SHDW_IER_WKUP1_Pos)) /* Assigment of value for WKUP1 in the SHDW_IER register */
#define   SHDW_IER_WKUP1_0_Val                _UINT32_(0x0)                                        /* (SHDW_IER) No effect.  */
#define   SHDW_IER_WKUP1_1_Val                _UINT32_(0x1)                                        /* (SHDW_IER) Enables the corresponding interrupt.  */
#define SHDW_IER_WKUP1_0                      (SHDW_IER_WKUP1_0_Val << SHDW_IER_WKUP1_Pos)         /* (SHDW_IER) No effect. Position  */
#define SHDW_IER_WKUP1_1                      (SHDW_IER_WKUP1_1_Val << SHDW_IER_WKUP1_Pos)         /* (SHDW_IER) Enables the corresponding interrupt. Position  */
#define SHDW_IER_WKUP2_Pos                    _UINT32_(2)                                          /* (SHDW_IER) Wake-up 2 Interrupt Enable Position */
#define SHDW_IER_WKUP2_Msk                    (_UINT32_(0x1) << SHDW_IER_WKUP2_Pos)                /* (SHDW_IER) Wake-up 2 Interrupt Enable Mask */
#define SHDW_IER_WKUP2(value)                 (SHDW_IER_WKUP2_Msk & (_UINT32_(value) << SHDW_IER_WKUP2_Pos)) /* Assigment of value for WKUP2 in the SHDW_IER register */
#define   SHDW_IER_WKUP2_0_Val                _UINT32_(0x0)                                        /* (SHDW_IER) No effect.  */
#define   SHDW_IER_WKUP2_1_Val                _UINT32_(0x1)                                        /* (SHDW_IER) Enables the corresponding interrupt.  */
#define SHDW_IER_WKUP2_0                      (SHDW_IER_WKUP2_0_Val << SHDW_IER_WKUP2_Pos)         /* (SHDW_IER) No effect. Position  */
#define SHDW_IER_WKUP2_1                      (SHDW_IER_WKUP2_1_Val << SHDW_IER_WKUP2_Pos)         /* (SHDW_IER) Enables the corresponding interrupt. Position  */
#define SHDW_IER_WKUP3_Pos                    _UINT32_(3)                                          /* (SHDW_IER) Wake-up 3 Interrupt Enable Position */
#define SHDW_IER_WKUP3_Msk                    (_UINT32_(0x1) << SHDW_IER_WKUP3_Pos)                /* (SHDW_IER) Wake-up 3 Interrupt Enable Mask */
#define SHDW_IER_WKUP3(value)                 (SHDW_IER_WKUP3_Msk & (_UINT32_(value) << SHDW_IER_WKUP3_Pos)) /* Assigment of value for WKUP3 in the SHDW_IER register */
#define   SHDW_IER_WKUP3_0_Val                _UINT32_(0x0)                                        /* (SHDW_IER) No effect.  */
#define   SHDW_IER_WKUP3_1_Val                _UINT32_(0x1)                                        /* (SHDW_IER) Enables the corresponding interrupt.  */
#define SHDW_IER_WKUP3_0                      (SHDW_IER_WKUP3_0_Val << SHDW_IER_WKUP3_Pos)         /* (SHDW_IER) No effect. Position  */
#define SHDW_IER_WKUP3_1                      (SHDW_IER_WKUP3_1_Val << SHDW_IER_WKUP3_Pos)         /* (SHDW_IER) Enables the corresponding interrupt. Position  */
#define SHDW_IER_WKUP4_Pos                    _UINT32_(4)                                          /* (SHDW_IER) Wake-up 4 Interrupt Enable Position */
#define SHDW_IER_WKUP4_Msk                    (_UINT32_(0x1) << SHDW_IER_WKUP4_Pos)                /* (SHDW_IER) Wake-up 4 Interrupt Enable Mask */
#define SHDW_IER_WKUP4(value)                 (SHDW_IER_WKUP4_Msk & (_UINT32_(value) << SHDW_IER_WKUP4_Pos)) /* Assigment of value for WKUP4 in the SHDW_IER register */
#define   SHDW_IER_WKUP4_0_Val                _UINT32_(0x0)                                        /* (SHDW_IER) No effect.  */
#define   SHDW_IER_WKUP4_1_Val                _UINT32_(0x1)                                        /* (SHDW_IER) Enables the corresponding interrupt.  */
#define SHDW_IER_WKUP4_0                      (SHDW_IER_WKUP4_0_Val << SHDW_IER_WKUP4_Pos)         /* (SHDW_IER) No effect. Position  */
#define SHDW_IER_WKUP4_1                      (SHDW_IER_WKUP4_1_Val << SHDW_IER_WKUP4_Pos)         /* (SHDW_IER) Enables the corresponding interrupt. Position  */
#define SHDW_IER_WKUP5_Pos                    _UINT32_(5)                                          /* (SHDW_IER) Wake-up 5 Interrupt Enable Position */
#define SHDW_IER_WKUP5_Msk                    (_UINT32_(0x1) << SHDW_IER_WKUP5_Pos)                /* (SHDW_IER) Wake-up 5 Interrupt Enable Mask */
#define SHDW_IER_WKUP5(value)                 (SHDW_IER_WKUP5_Msk & (_UINT32_(value) << SHDW_IER_WKUP5_Pos)) /* Assigment of value for WKUP5 in the SHDW_IER register */
#define   SHDW_IER_WKUP5_0_Val                _UINT32_(0x0)                                        /* (SHDW_IER) No effect.  */
#define   SHDW_IER_WKUP5_1_Val                _UINT32_(0x1)                                        /* (SHDW_IER) Enables the corresponding interrupt.  */
#define SHDW_IER_WKUP5_0                      (SHDW_IER_WKUP5_0_Val << SHDW_IER_WKUP5_Pos)         /* (SHDW_IER) No effect. Position  */
#define SHDW_IER_WKUP5_1                      (SHDW_IER_WKUP5_1_Val << SHDW_IER_WKUP5_Pos)         /* (SHDW_IER) Enables the corresponding interrupt. Position  */
#define SHDW_IER_Msk                          _UINT32_(0x0000003F)                                 /* (SHDW_IER) Register Mask  */

#define SHDW_IER_WKUP_Pos                     _UINT32_(0)                                          /* (SHDW_IER Position) Wake-up 5 Interrupt Enable */
#define SHDW_IER_WKUP_Msk                     (_UINT32_(0x3F) << SHDW_IER_WKUP_Pos)                /* (SHDW_IER Mask) WKUP */
#define SHDW_IER_WKUP(value)                  (SHDW_IER_WKUP_Msk & (_UINT32_(value) << SHDW_IER_WKUP_Pos)) 

/* -------- SHDW_IDR : (SHDWC Offset: 0x14) ( /W 32) Interrupt Disable Register -------- */
#define SHDW_IDR_WKUP0_Pos                    _UINT32_(0)                                          /* (SHDW_IDR) Wake-up 0 Interrupt Disable Position */
#define SHDW_IDR_WKUP0_Msk                    (_UINT32_(0x1) << SHDW_IDR_WKUP0_Pos)                /* (SHDW_IDR) Wake-up 0 Interrupt Disable Mask */
#define SHDW_IDR_WKUP0(value)                 (SHDW_IDR_WKUP0_Msk & (_UINT32_(value) << SHDW_IDR_WKUP0_Pos)) /* Assigment of value for WKUP0 in the SHDW_IDR register */
#define   SHDW_IDR_WKUP0_0_Val                _UINT32_(0x0)                                        /* (SHDW_IDR) No effect.  */
#define   SHDW_IDR_WKUP0_1_Val                _UINT32_(0x1)                                        /* (SHDW_IDR) Disables the corresponding interrupt.  */
#define SHDW_IDR_WKUP0_0                      (SHDW_IDR_WKUP0_0_Val << SHDW_IDR_WKUP0_Pos)         /* (SHDW_IDR) No effect. Position  */
#define SHDW_IDR_WKUP0_1                      (SHDW_IDR_WKUP0_1_Val << SHDW_IDR_WKUP0_Pos)         /* (SHDW_IDR) Disables the corresponding interrupt. Position  */
#define SHDW_IDR_WKUP1_Pos                    _UINT32_(1)                                          /* (SHDW_IDR) Wake-up 1 Interrupt Disable Position */
#define SHDW_IDR_WKUP1_Msk                    (_UINT32_(0x1) << SHDW_IDR_WKUP1_Pos)                /* (SHDW_IDR) Wake-up 1 Interrupt Disable Mask */
#define SHDW_IDR_WKUP1(value)                 (SHDW_IDR_WKUP1_Msk & (_UINT32_(value) << SHDW_IDR_WKUP1_Pos)) /* Assigment of value for WKUP1 in the SHDW_IDR register */
#define   SHDW_IDR_WKUP1_0_Val                _UINT32_(0x0)                                        /* (SHDW_IDR) No effect.  */
#define   SHDW_IDR_WKUP1_1_Val                _UINT32_(0x1)                                        /* (SHDW_IDR) Disables the corresponding interrupt.  */
#define SHDW_IDR_WKUP1_0                      (SHDW_IDR_WKUP1_0_Val << SHDW_IDR_WKUP1_Pos)         /* (SHDW_IDR) No effect. Position  */
#define SHDW_IDR_WKUP1_1                      (SHDW_IDR_WKUP1_1_Val << SHDW_IDR_WKUP1_Pos)         /* (SHDW_IDR) Disables the corresponding interrupt. Position  */
#define SHDW_IDR_WKUP2_Pos                    _UINT32_(2)                                          /* (SHDW_IDR) Wake-up 2 Interrupt Disable Position */
#define SHDW_IDR_WKUP2_Msk                    (_UINT32_(0x1) << SHDW_IDR_WKUP2_Pos)                /* (SHDW_IDR) Wake-up 2 Interrupt Disable Mask */
#define SHDW_IDR_WKUP2(value)                 (SHDW_IDR_WKUP2_Msk & (_UINT32_(value) << SHDW_IDR_WKUP2_Pos)) /* Assigment of value for WKUP2 in the SHDW_IDR register */
#define   SHDW_IDR_WKUP2_0_Val                _UINT32_(0x0)                                        /* (SHDW_IDR) No effect.  */
#define   SHDW_IDR_WKUP2_1_Val                _UINT32_(0x1)                                        /* (SHDW_IDR) Disables the corresponding interrupt.  */
#define SHDW_IDR_WKUP2_0                      (SHDW_IDR_WKUP2_0_Val << SHDW_IDR_WKUP2_Pos)         /* (SHDW_IDR) No effect. Position  */
#define SHDW_IDR_WKUP2_1                      (SHDW_IDR_WKUP2_1_Val << SHDW_IDR_WKUP2_Pos)         /* (SHDW_IDR) Disables the corresponding interrupt. Position  */
#define SHDW_IDR_WKUP3_Pos                    _UINT32_(3)                                          /* (SHDW_IDR) Wake-up 3 Interrupt Disable Position */
#define SHDW_IDR_WKUP3_Msk                    (_UINT32_(0x1) << SHDW_IDR_WKUP3_Pos)                /* (SHDW_IDR) Wake-up 3 Interrupt Disable Mask */
#define SHDW_IDR_WKUP3(value)                 (SHDW_IDR_WKUP3_Msk & (_UINT32_(value) << SHDW_IDR_WKUP3_Pos)) /* Assigment of value for WKUP3 in the SHDW_IDR register */
#define   SHDW_IDR_WKUP3_0_Val                _UINT32_(0x0)                                        /* (SHDW_IDR) No effect.  */
#define   SHDW_IDR_WKUP3_1_Val                _UINT32_(0x1)                                        /* (SHDW_IDR) Disables the corresponding interrupt.  */
#define SHDW_IDR_WKUP3_0                      (SHDW_IDR_WKUP3_0_Val << SHDW_IDR_WKUP3_Pos)         /* (SHDW_IDR) No effect. Position  */
#define SHDW_IDR_WKUP3_1                      (SHDW_IDR_WKUP3_1_Val << SHDW_IDR_WKUP3_Pos)         /* (SHDW_IDR) Disables the corresponding interrupt. Position  */
#define SHDW_IDR_WKUP4_Pos                    _UINT32_(4)                                          /* (SHDW_IDR) Wake-up 4 Interrupt Disable Position */
#define SHDW_IDR_WKUP4_Msk                    (_UINT32_(0x1) << SHDW_IDR_WKUP4_Pos)                /* (SHDW_IDR) Wake-up 4 Interrupt Disable Mask */
#define SHDW_IDR_WKUP4(value)                 (SHDW_IDR_WKUP4_Msk & (_UINT32_(value) << SHDW_IDR_WKUP4_Pos)) /* Assigment of value for WKUP4 in the SHDW_IDR register */
#define   SHDW_IDR_WKUP4_0_Val                _UINT32_(0x0)                                        /* (SHDW_IDR) No effect.  */
#define   SHDW_IDR_WKUP4_1_Val                _UINT32_(0x1)                                        /* (SHDW_IDR) Disables the corresponding interrupt.  */
#define SHDW_IDR_WKUP4_0                      (SHDW_IDR_WKUP4_0_Val << SHDW_IDR_WKUP4_Pos)         /* (SHDW_IDR) No effect. Position  */
#define SHDW_IDR_WKUP4_1                      (SHDW_IDR_WKUP4_1_Val << SHDW_IDR_WKUP4_Pos)         /* (SHDW_IDR) Disables the corresponding interrupt. Position  */
#define SHDW_IDR_WKUP5_Pos                    _UINT32_(5)                                          /* (SHDW_IDR) Wake-up 5 Interrupt Disable Position */
#define SHDW_IDR_WKUP5_Msk                    (_UINT32_(0x1) << SHDW_IDR_WKUP5_Pos)                /* (SHDW_IDR) Wake-up 5 Interrupt Disable Mask */
#define SHDW_IDR_WKUP5(value)                 (SHDW_IDR_WKUP5_Msk & (_UINT32_(value) << SHDW_IDR_WKUP5_Pos)) /* Assigment of value for WKUP5 in the SHDW_IDR register */
#define   SHDW_IDR_WKUP5_0_Val                _UINT32_(0x0)                                        /* (SHDW_IDR) No effect.  */
#define   SHDW_IDR_WKUP5_1_Val                _UINT32_(0x1)                                        /* (SHDW_IDR) Disables the corresponding interrupt.  */
#define SHDW_IDR_WKUP5_0                      (SHDW_IDR_WKUP5_0_Val << SHDW_IDR_WKUP5_Pos)         /* (SHDW_IDR) No effect. Position  */
#define SHDW_IDR_WKUP5_1                      (SHDW_IDR_WKUP5_1_Val << SHDW_IDR_WKUP5_Pos)         /* (SHDW_IDR) Disables the corresponding interrupt. Position  */
#define SHDW_IDR_Msk                          _UINT32_(0x0000003F)                                 /* (SHDW_IDR) Register Mask  */

#define SHDW_IDR_WKUP_Pos                     _UINT32_(0)                                          /* (SHDW_IDR Position) Wake-up 5 Interrupt Disable */
#define SHDW_IDR_WKUP_Msk                     (_UINT32_(0x3F) << SHDW_IDR_WKUP_Pos)                /* (SHDW_IDR Mask) WKUP */
#define SHDW_IDR_WKUP(value)                  (SHDW_IDR_WKUP_Msk & (_UINT32_(value) << SHDW_IDR_WKUP_Pos)) 

/* -------- SHDW_IMR : (SHDWC Offset: 0x18) ( R/ 32) Interrupt Mask Register -------- */
#define SHDW_IMR_RESETVALUE                   _UINT32_(0x00)                                       /*  (SHDW_IMR) Interrupt Mask Register  Reset Value */

#define SHDW_IMR_WKUP0_Pos                    _UINT32_(0)                                          /* (SHDW_IMR) Wake-up 0 Interrupt Mask Position */
#define SHDW_IMR_WKUP0_Msk                    (_UINT32_(0x1) << SHDW_IMR_WKUP0_Pos)                /* (SHDW_IMR) Wake-up 0 Interrupt Mask Mask */
#define SHDW_IMR_WKUP0(value)                 (SHDW_IMR_WKUP0_Msk & (_UINT32_(value) << SHDW_IMR_WKUP0_Pos)) /* Assigment of value for WKUP0 in the SHDW_IMR register */
#define   SHDW_IMR_WKUP0_0_Val                _UINT32_(0x0)                                        /* (SHDW_IMR) The corresponding interrupt is not enabled.  */
#define   SHDW_IMR_WKUP0_1_Val                _UINT32_(0x1)                                        /* (SHDW_IMR) The corresponding interrupt is enabled.  */
#define SHDW_IMR_WKUP0_0                      (SHDW_IMR_WKUP0_0_Val << SHDW_IMR_WKUP0_Pos)         /* (SHDW_IMR) The corresponding interrupt is not enabled. Position  */
#define SHDW_IMR_WKUP0_1                      (SHDW_IMR_WKUP0_1_Val << SHDW_IMR_WKUP0_Pos)         /* (SHDW_IMR) The corresponding interrupt is enabled. Position  */
#define SHDW_IMR_WKUP1_Pos                    _UINT32_(1)                                          /* (SHDW_IMR) Wake-up 1 Interrupt Mask Position */
#define SHDW_IMR_WKUP1_Msk                    (_UINT32_(0x1) << SHDW_IMR_WKUP1_Pos)                /* (SHDW_IMR) Wake-up 1 Interrupt Mask Mask */
#define SHDW_IMR_WKUP1(value)                 (SHDW_IMR_WKUP1_Msk & (_UINT32_(value) << SHDW_IMR_WKUP1_Pos)) /* Assigment of value for WKUP1 in the SHDW_IMR register */
#define   SHDW_IMR_WKUP1_0_Val                _UINT32_(0x0)                                        /* (SHDW_IMR) The corresponding interrupt is not enabled.  */
#define   SHDW_IMR_WKUP1_1_Val                _UINT32_(0x1)                                        /* (SHDW_IMR) The corresponding interrupt is enabled.  */
#define SHDW_IMR_WKUP1_0                      (SHDW_IMR_WKUP1_0_Val << SHDW_IMR_WKUP1_Pos)         /* (SHDW_IMR) The corresponding interrupt is not enabled. Position  */
#define SHDW_IMR_WKUP1_1                      (SHDW_IMR_WKUP1_1_Val << SHDW_IMR_WKUP1_Pos)         /* (SHDW_IMR) The corresponding interrupt is enabled. Position  */
#define SHDW_IMR_WKUP2_Pos                    _UINT32_(2)                                          /* (SHDW_IMR) Wake-up 2 Interrupt Mask Position */
#define SHDW_IMR_WKUP2_Msk                    (_UINT32_(0x1) << SHDW_IMR_WKUP2_Pos)                /* (SHDW_IMR) Wake-up 2 Interrupt Mask Mask */
#define SHDW_IMR_WKUP2(value)                 (SHDW_IMR_WKUP2_Msk & (_UINT32_(value) << SHDW_IMR_WKUP2_Pos)) /* Assigment of value for WKUP2 in the SHDW_IMR register */
#define   SHDW_IMR_WKUP2_0_Val                _UINT32_(0x0)                                        /* (SHDW_IMR) The corresponding interrupt is not enabled.  */
#define   SHDW_IMR_WKUP2_1_Val                _UINT32_(0x1)                                        /* (SHDW_IMR) The corresponding interrupt is enabled.  */
#define SHDW_IMR_WKUP2_0                      (SHDW_IMR_WKUP2_0_Val << SHDW_IMR_WKUP2_Pos)         /* (SHDW_IMR) The corresponding interrupt is not enabled. Position  */
#define SHDW_IMR_WKUP2_1                      (SHDW_IMR_WKUP2_1_Val << SHDW_IMR_WKUP2_Pos)         /* (SHDW_IMR) The corresponding interrupt is enabled. Position  */
#define SHDW_IMR_WKUP3_Pos                    _UINT32_(3)                                          /* (SHDW_IMR) Wake-up 3 Interrupt Mask Position */
#define SHDW_IMR_WKUP3_Msk                    (_UINT32_(0x1) << SHDW_IMR_WKUP3_Pos)                /* (SHDW_IMR) Wake-up 3 Interrupt Mask Mask */
#define SHDW_IMR_WKUP3(value)                 (SHDW_IMR_WKUP3_Msk & (_UINT32_(value) << SHDW_IMR_WKUP3_Pos)) /* Assigment of value for WKUP3 in the SHDW_IMR register */
#define   SHDW_IMR_WKUP3_0_Val                _UINT32_(0x0)                                        /* (SHDW_IMR) The corresponding interrupt is not enabled.  */
#define   SHDW_IMR_WKUP3_1_Val                _UINT32_(0x1)                                        /* (SHDW_IMR) The corresponding interrupt is enabled.  */
#define SHDW_IMR_WKUP3_0                      (SHDW_IMR_WKUP3_0_Val << SHDW_IMR_WKUP3_Pos)         /* (SHDW_IMR) The corresponding interrupt is not enabled. Position  */
#define SHDW_IMR_WKUP3_1                      (SHDW_IMR_WKUP3_1_Val << SHDW_IMR_WKUP3_Pos)         /* (SHDW_IMR) The corresponding interrupt is enabled. Position  */
#define SHDW_IMR_WKUP4_Pos                    _UINT32_(4)                                          /* (SHDW_IMR) Wake-up 4 Interrupt Mask Position */
#define SHDW_IMR_WKUP4_Msk                    (_UINT32_(0x1) << SHDW_IMR_WKUP4_Pos)                /* (SHDW_IMR) Wake-up 4 Interrupt Mask Mask */
#define SHDW_IMR_WKUP4(value)                 (SHDW_IMR_WKUP4_Msk & (_UINT32_(value) << SHDW_IMR_WKUP4_Pos)) /* Assigment of value for WKUP4 in the SHDW_IMR register */
#define   SHDW_IMR_WKUP4_0_Val                _UINT32_(0x0)                                        /* (SHDW_IMR) The corresponding interrupt is not enabled.  */
#define   SHDW_IMR_WKUP4_1_Val                _UINT32_(0x1)                                        /* (SHDW_IMR) The corresponding interrupt is enabled.  */
#define SHDW_IMR_WKUP4_0                      (SHDW_IMR_WKUP4_0_Val << SHDW_IMR_WKUP4_Pos)         /* (SHDW_IMR) The corresponding interrupt is not enabled. Position  */
#define SHDW_IMR_WKUP4_1                      (SHDW_IMR_WKUP4_1_Val << SHDW_IMR_WKUP4_Pos)         /* (SHDW_IMR) The corresponding interrupt is enabled. Position  */
#define SHDW_IMR_WKUP5_Pos                    _UINT32_(5)                                          /* (SHDW_IMR) Wake-up 5 Interrupt Mask Position */
#define SHDW_IMR_WKUP5_Msk                    (_UINT32_(0x1) << SHDW_IMR_WKUP5_Pos)                /* (SHDW_IMR) Wake-up 5 Interrupt Mask Mask */
#define SHDW_IMR_WKUP5(value)                 (SHDW_IMR_WKUP5_Msk & (_UINT32_(value) << SHDW_IMR_WKUP5_Pos)) /* Assigment of value for WKUP5 in the SHDW_IMR register */
#define   SHDW_IMR_WKUP5_0_Val                _UINT32_(0x0)                                        /* (SHDW_IMR) The corresponding interrupt is not enabled.  */
#define   SHDW_IMR_WKUP5_1_Val                _UINT32_(0x1)                                        /* (SHDW_IMR) The corresponding interrupt is enabled.  */
#define SHDW_IMR_WKUP5_0                      (SHDW_IMR_WKUP5_0_Val << SHDW_IMR_WKUP5_Pos)         /* (SHDW_IMR) The corresponding interrupt is not enabled. Position  */
#define SHDW_IMR_WKUP5_1                      (SHDW_IMR_WKUP5_1_Val << SHDW_IMR_WKUP5_Pos)         /* (SHDW_IMR) The corresponding interrupt is enabled. Position  */
#define SHDW_IMR_Msk                          _UINT32_(0x0000003F)                                 /* (SHDW_IMR) Register Mask  */

#define SHDW_IMR_WKUP_Pos                     _UINT32_(0)                                          /* (SHDW_IMR Position) Wake-up 5 Interrupt Mask */
#define SHDW_IMR_WKUP_Msk                     (_UINT32_(0x3F) << SHDW_IMR_WKUP_Pos)                /* (SHDW_IMR Mask) WKUP */
#define SHDW_IMR_WKUP(value)                  (SHDW_IMR_WKUP_Msk & (_UINT32_(value) << SHDW_IMR_WKUP_Pos)) 

/* -------- SHDW_ISR : (SHDWC Offset: 0x1C) ( R/ 32) Interrupt Status Register -------- */
#define SHDW_ISR_RESETVALUE                   _UINT32_(0x00)                                       /*  (SHDW_ISR) Interrupt Status Register  Reset Value */

#define SHDW_ISR_WKUP0_Pos                    _UINT32_(0)                                          /* (SHDW_ISR) Wake-up Input 0 Interrupt Status Position */
#define SHDW_ISR_WKUP0_Msk                    (_UINT32_(0x1) << SHDW_ISR_WKUP0_Pos)                /* (SHDW_ISR) Wake-up Input 0 Interrupt Status Mask */
#define SHDW_ISR_WKUP0(value)                 (SHDW_ISR_WKUP0_Msk & (_UINT32_(value) << SHDW_ISR_WKUP0_Pos)) /* Assigment of value for WKUP0 in the SHDW_ISR register */
#define   SHDW_ISR_WKUP0_0_Val                _UINT32_(0x0)                                        /* (SHDW_ISR) No wake-up event has been detected on WKUPx since the last read of either SHDW_ISR or SHDW_SR.  */
#define   SHDW_ISR_WKUP0_1_Val                _UINT32_(0x1)                                        /* (SHDW_ISR) At least one wake-up event has been detected on WKUPx since the last read of either SHDW_ISR or SHDW_SR.  */
#define SHDW_ISR_WKUP0_0                      (SHDW_ISR_WKUP0_0_Val << SHDW_ISR_WKUP0_Pos)         /* (SHDW_ISR) No wake-up event has been detected on WKUPx since the last read of either SHDW_ISR or SHDW_SR. Position  */
#define SHDW_ISR_WKUP0_1                      (SHDW_ISR_WKUP0_1_Val << SHDW_ISR_WKUP0_Pos)         /* (SHDW_ISR) At least one wake-up event has been detected on WKUPx since the last read of either SHDW_ISR or SHDW_SR. Position  */
#define SHDW_ISR_WKUP1_Pos                    _UINT32_(1)                                          /* (SHDW_ISR) Wake-up Input 1 Interrupt Status Position */
#define SHDW_ISR_WKUP1_Msk                    (_UINT32_(0x1) << SHDW_ISR_WKUP1_Pos)                /* (SHDW_ISR) Wake-up Input 1 Interrupt Status Mask */
#define SHDW_ISR_WKUP1(value)                 (SHDW_ISR_WKUP1_Msk & (_UINT32_(value) << SHDW_ISR_WKUP1_Pos)) /* Assigment of value for WKUP1 in the SHDW_ISR register */
#define   SHDW_ISR_WKUP1_0_Val                _UINT32_(0x0)                                        /* (SHDW_ISR) No wake-up event has been detected on WKUPx since the last read of either SHDW_ISR or SHDW_SR.  */
#define   SHDW_ISR_WKUP1_1_Val                _UINT32_(0x1)                                        /* (SHDW_ISR) At least one wake-up event has been detected on WKUPx since the last read of either SHDW_ISR or SHDW_SR.  */
#define SHDW_ISR_WKUP1_0                      (SHDW_ISR_WKUP1_0_Val << SHDW_ISR_WKUP1_Pos)         /* (SHDW_ISR) No wake-up event has been detected on WKUPx since the last read of either SHDW_ISR or SHDW_SR. Position  */
#define SHDW_ISR_WKUP1_1                      (SHDW_ISR_WKUP1_1_Val << SHDW_ISR_WKUP1_Pos)         /* (SHDW_ISR) At least one wake-up event has been detected on WKUPx since the last read of either SHDW_ISR or SHDW_SR. Position  */
#define SHDW_ISR_WKUP2_Pos                    _UINT32_(2)                                          /* (SHDW_ISR) Wake-up Input 2 Interrupt Status Position */
#define SHDW_ISR_WKUP2_Msk                    (_UINT32_(0x1) << SHDW_ISR_WKUP2_Pos)                /* (SHDW_ISR) Wake-up Input 2 Interrupt Status Mask */
#define SHDW_ISR_WKUP2(value)                 (SHDW_ISR_WKUP2_Msk & (_UINT32_(value) << SHDW_ISR_WKUP2_Pos)) /* Assigment of value for WKUP2 in the SHDW_ISR register */
#define   SHDW_ISR_WKUP2_0_Val                _UINT32_(0x0)                                        /* (SHDW_ISR) No wake-up event has been detected on WKUPx since the last read of either SHDW_ISR or SHDW_SR.  */
#define   SHDW_ISR_WKUP2_1_Val                _UINT32_(0x1)                                        /* (SHDW_ISR) At least one wake-up event has been detected on WKUPx since the last read of either SHDW_ISR or SHDW_SR.  */
#define SHDW_ISR_WKUP2_0                      (SHDW_ISR_WKUP2_0_Val << SHDW_ISR_WKUP2_Pos)         /* (SHDW_ISR) No wake-up event has been detected on WKUPx since the last read of either SHDW_ISR or SHDW_SR. Position  */
#define SHDW_ISR_WKUP2_1                      (SHDW_ISR_WKUP2_1_Val << SHDW_ISR_WKUP2_Pos)         /* (SHDW_ISR) At least one wake-up event has been detected on WKUPx since the last read of either SHDW_ISR or SHDW_SR. Position  */
#define SHDW_ISR_WKUP3_Pos                    _UINT32_(3)                                          /* (SHDW_ISR) Wake-up Input 3 Interrupt Status Position */
#define SHDW_ISR_WKUP3_Msk                    (_UINT32_(0x1) << SHDW_ISR_WKUP3_Pos)                /* (SHDW_ISR) Wake-up Input 3 Interrupt Status Mask */
#define SHDW_ISR_WKUP3(value)                 (SHDW_ISR_WKUP3_Msk & (_UINT32_(value) << SHDW_ISR_WKUP3_Pos)) /* Assigment of value for WKUP3 in the SHDW_ISR register */
#define   SHDW_ISR_WKUP3_0_Val                _UINT32_(0x0)                                        /* (SHDW_ISR) No wake-up event has been detected on WKUPx since the last read of either SHDW_ISR or SHDW_SR.  */
#define   SHDW_ISR_WKUP3_1_Val                _UINT32_(0x1)                                        /* (SHDW_ISR) At least one wake-up event has been detected on WKUPx since the last read of either SHDW_ISR or SHDW_SR.  */
#define SHDW_ISR_WKUP3_0                      (SHDW_ISR_WKUP3_0_Val << SHDW_ISR_WKUP3_Pos)         /* (SHDW_ISR) No wake-up event has been detected on WKUPx since the last read of either SHDW_ISR or SHDW_SR. Position  */
#define SHDW_ISR_WKUP3_1                      (SHDW_ISR_WKUP3_1_Val << SHDW_ISR_WKUP3_Pos)         /* (SHDW_ISR) At least one wake-up event has been detected on WKUPx since the last read of either SHDW_ISR or SHDW_SR. Position  */
#define SHDW_ISR_WKUP4_Pos                    _UINT32_(4)                                          /* (SHDW_ISR) Wake-up Input 4 Interrupt Status Position */
#define SHDW_ISR_WKUP4_Msk                    (_UINT32_(0x1) << SHDW_ISR_WKUP4_Pos)                /* (SHDW_ISR) Wake-up Input 4 Interrupt Status Mask */
#define SHDW_ISR_WKUP4(value)                 (SHDW_ISR_WKUP4_Msk & (_UINT32_(value) << SHDW_ISR_WKUP4_Pos)) /* Assigment of value for WKUP4 in the SHDW_ISR register */
#define   SHDW_ISR_WKUP4_0_Val                _UINT32_(0x0)                                        /* (SHDW_ISR) No wake-up event has been detected on WKUPx since the last read of either SHDW_ISR or SHDW_SR.  */
#define   SHDW_ISR_WKUP4_1_Val                _UINT32_(0x1)                                        /* (SHDW_ISR) At least one wake-up event has been detected on WKUPx since the last read of either SHDW_ISR or SHDW_SR.  */
#define SHDW_ISR_WKUP4_0                      (SHDW_ISR_WKUP4_0_Val << SHDW_ISR_WKUP4_Pos)         /* (SHDW_ISR) No wake-up event has been detected on WKUPx since the last read of either SHDW_ISR or SHDW_SR. Position  */
#define SHDW_ISR_WKUP4_1                      (SHDW_ISR_WKUP4_1_Val << SHDW_ISR_WKUP4_Pos)         /* (SHDW_ISR) At least one wake-up event has been detected on WKUPx since the last read of either SHDW_ISR or SHDW_SR. Position  */
#define SHDW_ISR_WKUP5_Pos                    _UINT32_(5)                                          /* (SHDW_ISR) Wake-up Input 5 Interrupt Status Position */
#define SHDW_ISR_WKUP5_Msk                    (_UINT32_(0x1) << SHDW_ISR_WKUP5_Pos)                /* (SHDW_ISR) Wake-up Input 5 Interrupt Status Mask */
#define SHDW_ISR_WKUP5(value)                 (SHDW_ISR_WKUP5_Msk & (_UINT32_(value) << SHDW_ISR_WKUP5_Pos)) /* Assigment of value for WKUP5 in the SHDW_ISR register */
#define   SHDW_ISR_WKUP5_0_Val                _UINT32_(0x0)                                        /* (SHDW_ISR) No wake-up event has been detected on WKUPx since the last read of either SHDW_ISR or SHDW_SR.  */
#define   SHDW_ISR_WKUP5_1_Val                _UINT32_(0x1)                                        /* (SHDW_ISR) At least one wake-up event has been detected on WKUPx since the last read of either SHDW_ISR or SHDW_SR.  */
#define SHDW_ISR_WKUP5_0                      (SHDW_ISR_WKUP5_0_Val << SHDW_ISR_WKUP5_Pos)         /* (SHDW_ISR) No wake-up event has been detected on WKUPx since the last read of either SHDW_ISR or SHDW_SR. Position  */
#define SHDW_ISR_WKUP5_1                      (SHDW_ISR_WKUP5_1_Val << SHDW_ISR_WKUP5_Pos)         /* (SHDW_ISR) At least one wake-up event has been detected on WKUPx since the last read of either SHDW_ISR or SHDW_SR. Position  */
#define SHDW_ISR_Msk                          _UINT32_(0x0000003F)                                 /* (SHDW_ISR) Register Mask  */

#define SHDW_ISR_WKUP_Pos                     _UINT32_(0)                                          /* (SHDW_ISR Position) Wake-up Input 5 Interrupt Status */
#define SHDW_ISR_WKUP_Msk                     (_UINT32_(0x3F) << SHDW_ISR_WKUP_Pos)                /* (SHDW_ISR Mask) WKUP */
#define SHDW_ISR_WKUP(value)                  (SHDW_ISR_WKUP_Msk & (_UINT32_(value) << SHDW_ISR_WKUP_Pos)) 

/** \brief SHDWC register offsets definitions */
#define SHDW_CR_REG_OFST               _UINT32_(0x00)      /* (SHDW_CR) Control Register Offset */
#define SHDW_MR_REG_OFST               _UINT32_(0x04)      /* (SHDW_MR) Mode Register Offset */
#define SHDW_SR_REG_OFST               _UINT32_(0x08)      /* (SHDW_SR) Status Register Offset */
#define SHDW_WUIR_REG_OFST             _UINT32_(0x0C)      /* (SHDW_WUIR) Wake-up Inputs Register Offset */
#define SHDW_IER_REG_OFST              _UINT32_(0x10)      /* (SHDW_IER) Interrupt Enable Register Offset */
#define SHDW_IDR_REG_OFST              _UINT32_(0x14)      /* (SHDW_IDR) Interrupt Disable Register Offset */
#define SHDW_IMR_REG_OFST              _UINT32_(0x18)      /* (SHDW_IMR) Interrupt Mask Register Offset */
#define SHDW_ISR_REG_OFST              _UINT32_(0x1C)      /* (SHDW_ISR) Interrupt Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SHDWC register API structure */
typedef struct
{  /* Shutdown Controller */
  __O   uint32_t                       SHDW_CR;            /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       SHDW_MR;            /**< Offset: 0x04 (R/W  32) Mode Register */
  __I   uint32_t                       SHDW_SR;            /**< Offset: 0x08 (R/   32) Status Register */
  __IO  uint32_t                       SHDW_WUIR;          /**< Offset: 0x0C (R/W  32) Wake-up Inputs Register */
  __O   uint32_t                       SHDW_IER;           /**< Offset: 0x10 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       SHDW_IDR;           /**< Offset: 0x14 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       SHDW_IMR;           /**< Offset: 0x18 (R/   32) Interrupt Mask Register */
  __I   uint32_t                       SHDW_ISR;           /**< Offset: 0x1C (R/   32) Interrupt Status Register */
} shdwc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7D6_SHDWC_COMPONENT_H_ */
