/*
 * Component description for SFR
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
#ifndef _SAMA7D6_SFR_COMPONENT_H_
#define _SAMA7D6_SFR_COMPONENT_H_

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR SFR                       */
/* ************************************************************************** */

/* -------- SFR_OHCIICR : (SFR Offset: 0x00) (R/W 32) OHCI Interrupt Configuration Register -------- */
#define SFR_OHCIICR_RESETVALUE                _UINT32_(0x00)                                       /*  (SFR_OHCIICR) OHCI Interrupt Configuration Register  Reset Value */

#define SFR_OHCIICR_ARIE_Pos                  _UINT32_(0)                                          /* (SFR_OHCIICR) OHCI Asynchronous Resume Interrupt Enable Position */
#define SFR_OHCIICR_ARIE_Msk                  (_UINT32_(0x1) << SFR_OHCIICR_ARIE_Pos)              /* (SFR_OHCIICR) OHCI Asynchronous Resume Interrupt Enable Mask */
#define SFR_OHCIICR_ARIE(value)               (SFR_OHCIICR_ARIE_Msk & (_UINT32_(value) << SFR_OHCIICR_ARIE_Pos)) /* Assignment of value for ARIE in the SFR_OHCIICR register */
#define   SFR_OHCIICR_ARIE_0_Val              _UINT32_(0x0)                                        /* (SFR_OHCIICR) Interrupt is disabled.  */
#define   SFR_OHCIICR_ARIE_1_Val              _UINT32_(0x1)                                        /* (SFR_OHCIICR) Interrupt is enabled.  */
#define SFR_OHCIICR_ARIE_0                    (SFR_OHCIICR_ARIE_0_Val << SFR_OHCIICR_ARIE_Pos)     /* (SFR_OHCIICR) Interrupt is disabled. Position */
#define SFR_OHCIICR_ARIE_1                    (SFR_OHCIICR_ARIE_1_Val << SFR_OHCIICR_ARIE_Pos)     /* (SFR_OHCIICR) Interrupt is enabled. Position */
#define SFR_OHCIICR_APPSTART_Pos              _UINT32_(1)                                          /* (SFR_OHCIICR) Reserved Position */
#define SFR_OHCIICR_APPSTART_Msk              (_UINT32_(0x1) << SFR_OHCIICR_APPSTART_Pos)          /* (SFR_OHCIICR) Reserved Mask */
#define SFR_OHCIICR_APPSTART(value)           (SFR_OHCIICR_APPSTART_Msk & (_UINT32_(value) << SFR_OHCIICR_APPSTART_Pos)) /* Assignment of value for APPSTART in the SFR_OHCIICR register */
#define SFR_OHCIICR_RES0_Pos                  _UINT32_(4)                                          /* (SFR_OHCIICR) USB PORTx Reset Position */
#define SFR_OHCIICR_RES0_Msk                  (_UINT32_(0x1) << SFR_OHCIICR_RES0_Pos)              /* (SFR_OHCIICR) USB PORTx Reset Mask */
#define SFR_OHCIICR_RES0(value)               (SFR_OHCIICR_RES0_Msk & (_UINT32_(value) << SFR_OHCIICR_RES0_Pos)) /* Assignment of value for RES0 in the SFR_OHCIICR register */
#define   SFR_OHCIICR_RES0_0_Val              _UINT32_(0x0)                                        /* (SFR_OHCIICR) No effect (USB PORTx reset released, default value).  */
#define   SFR_OHCIICR_RES0_1_Val              _UINT32_(0x1)                                        /* (SFR_OHCIICR) Resets USB PORTx.  */
#define SFR_OHCIICR_RES0_0                    (SFR_OHCIICR_RES0_0_Val << SFR_OHCIICR_RES0_Pos)     /* (SFR_OHCIICR) No effect (USB PORTx reset released, default value). Position */
#define SFR_OHCIICR_RES0_1                    (SFR_OHCIICR_RES0_1_Val << SFR_OHCIICR_RES0_Pos)     /* (SFR_OHCIICR) Resets USB PORTx. Position */
#define SFR_OHCIICR_RES1_Pos                  _UINT32_(5)                                          /* (SFR_OHCIICR) USB PORTx Reset Position */
#define SFR_OHCIICR_RES1_Msk                  (_UINT32_(0x1) << SFR_OHCIICR_RES1_Pos)              /* (SFR_OHCIICR) USB PORTx Reset Mask */
#define SFR_OHCIICR_RES1(value)               (SFR_OHCIICR_RES1_Msk & (_UINT32_(value) << SFR_OHCIICR_RES1_Pos)) /* Assignment of value for RES1 in the SFR_OHCIICR register */
#define   SFR_OHCIICR_RES1_0_Val              _UINT32_(0x0)                                        /* (SFR_OHCIICR) No effect (USB PORTx reset released, default value).  */
#define   SFR_OHCIICR_RES1_1_Val              _UINT32_(0x1)                                        /* (SFR_OHCIICR) Resets USB PORTx.  */
#define SFR_OHCIICR_RES1_0                    (SFR_OHCIICR_RES1_0_Val << SFR_OHCIICR_RES1_Pos)     /* (SFR_OHCIICR) No effect (USB PORTx reset released, default value). Position */
#define SFR_OHCIICR_RES1_1                    (SFR_OHCIICR_RES1_1_Val << SFR_OHCIICR_RES1_Pos)     /* (SFR_OHCIICR) Resets USB PORTx. Position */
#define SFR_OHCIICR_RES2_Pos                  _UINT32_(6)                                          /* (SFR_OHCIICR) USB PORTx Reset Position */
#define SFR_OHCIICR_RES2_Msk                  (_UINT32_(0x1) << SFR_OHCIICR_RES2_Pos)              /* (SFR_OHCIICR) USB PORTx Reset Mask */
#define SFR_OHCIICR_RES2(value)               (SFR_OHCIICR_RES2_Msk & (_UINT32_(value) << SFR_OHCIICR_RES2_Pos)) /* Assignment of value for RES2 in the SFR_OHCIICR register */
#define   SFR_OHCIICR_RES2_0_Val              _UINT32_(0x0)                                        /* (SFR_OHCIICR) No effect (USB PORTx reset released, default value).  */
#define   SFR_OHCIICR_RES2_1_Val              _UINT32_(0x1)                                        /* (SFR_OHCIICR) Resets USB PORTx.  */
#define SFR_OHCIICR_RES2_0                    (SFR_OHCIICR_RES2_0_Val << SFR_OHCIICR_RES2_Pos)     /* (SFR_OHCIICR) No effect (USB PORTx reset released, default value). Position */
#define SFR_OHCIICR_RES2_1                    (SFR_OHCIICR_RES2_1_Val << SFR_OHCIICR_RES2_Pos)     /* (SFR_OHCIICR) Resets USB PORTx. Position */
#define SFR_OHCIICR_SUSPEND0_Pos              _UINT32_(8)                                          /* (SFR_OHCIICR) USB PORT 0 Position */
#define SFR_OHCIICR_SUSPEND0_Msk              (_UINT32_(0x1) << SFR_OHCIICR_SUSPEND0_Pos)          /* (SFR_OHCIICR) USB PORT 0 Mask */
#define SFR_OHCIICR_SUSPEND0(value)           (SFR_OHCIICR_SUSPEND0_Msk & (_UINT32_(value) << SFR_OHCIICR_SUSPEND0_Pos)) /* Assignment of value for SUSPEND0 in the SFR_OHCIICR register */
#define   SFR_OHCIICR_SUSPEND0_0_Val          _UINT32_(0x0)                                        /* (SFR_OHCIICR) Suspends controlled by EHCI-OCHI.  */
#define   SFR_OHCIICR_SUSPEND0_1_Val          _UINT32_(0x1)                                        /* (SFR_OHCIICR) Forces the suspend for PORTx.  */
#define SFR_OHCIICR_SUSPEND0_0                (SFR_OHCIICR_SUSPEND0_0_Val << SFR_OHCIICR_SUSPEND0_Pos) /* (SFR_OHCIICR) Suspends controlled by EHCI-OCHI. Position */
#define SFR_OHCIICR_SUSPEND0_1                (SFR_OHCIICR_SUSPEND0_1_Val << SFR_OHCIICR_SUSPEND0_Pos) /* (SFR_OHCIICR) Forces the suspend for PORTx. Position */
#define SFR_OHCIICR_SUSPEND1_Pos              _UINT32_(9)                                          /* (SFR_OHCIICR) USB PORT 1 Position */
#define SFR_OHCIICR_SUSPEND1_Msk              (_UINT32_(0x1) << SFR_OHCIICR_SUSPEND1_Pos)          /* (SFR_OHCIICR) USB PORT 1 Mask */
#define SFR_OHCIICR_SUSPEND1(value)           (SFR_OHCIICR_SUSPEND1_Msk & (_UINT32_(value) << SFR_OHCIICR_SUSPEND1_Pos)) /* Assignment of value for SUSPEND1 in the SFR_OHCIICR register */
#define   SFR_OHCIICR_SUSPEND1_0_Val          _UINT32_(0x0)                                        /* (SFR_OHCIICR) Suspends controlled by EHCI-OCHI.  */
#define   SFR_OHCIICR_SUSPEND1_1_Val          _UINT32_(0x1)                                        /* (SFR_OHCIICR) Forces the suspend for PORTx.  */
#define SFR_OHCIICR_SUSPEND1_0                (SFR_OHCIICR_SUSPEND1_0_Val << SFR_OHCIICR_SUSPEND1_Pos) /* (SFR_OHCIICR) Suspends controlled by EHCI-OCHI. Position */
#define SFR_OHCIICR_SUSPEND1_1                (SFR_OHCIICR_SUSPEND1_1_Val << SFR_OHCIICR_SUSPEND1_Pos) /* (SFR_OHCIICR) Forces the suspend for PORTx. Position */
#define SFR_OHCIICR_SUSPEND2_Pos              _UINT32_(10)                                         /* (SFR_OHCIICR) USB PORT 2 Position */
#define SFR_OHCIICR_SUSPEND2_Msk              (_UINT32_(0x1) << SFR_OHCIICR_SUSPEND2_Pos)          /* (SFR_OHCIICR) USB PORT 2 Mask */
#define SFR_OHCIICR_SUSPEND2(value)           (SFR_OHCIICR_SUSPEND2_Msk & (_UINT32_(value) << SFR_OHCIICR_SUSPEND2_Pos)) /* Assignment of value for SUSPEND2 in the SFR_OHCIICR register */
#define   SFR_OHCIICR_SUSPEND2_0_Val          _UINT32_(0x0)                                        /* (SFR_OHCIICR) Suspends controlled by EHCI-OCHI.  */
#define   SFR_OHCIICR_SUSPEND2_1_Val          _UINT32_(0x1)                                        /* (SFR_OHCIICR) Forces the suspend for PORTx.  */
#define SFR_OHCIICR_SUSPEND2_0                (SFR_OHCIICR_SUSPEND2_0_Val << SFR_OHCIICR_SUSPEND2_Pos) /* (SFR_OHCIICR) Suspends controlled by EHCI-OCHI. Position */
#define SFR_OHCIICR_SUSPEND2_1                (SFR_OHCIICR_SUSPEND2_1_Val << SFR_OHCIICR_SUSPEND2_Pos) /* (SFR_OHCIICR) Forces the suspend for PORTx. Position */
#define SFR_OHCIICR_UDPPUDIS_Pos              _UINT32_(23)                                         /* (SFR_OHCIICR) Reserved Position */
#define SFR_OHCIICR_UDPPUDIS_Msk              (_UINT32_(0x1) << SFR_OHCIICR_UDPPUDIS_Pos)          /* (SFR_OHCIICR) Reserved Mask */
#define SFR_OHCIICR_UDPPUDIS(value)           (SFR_OHCIICR_UDPPUDIS_Msk & (_UINT32_(value) << SFR_OHCIICR_UDPPUDIS_Pos)) /* Assignment of value for UDPPUDIS in the SFR_OHCIICR register */
#define SFR_OHCIICR_Msk                       _UINT32_(0x00800773)                                 /* (SFR_OHCIICR) Register Mask  */

#define SFR_OHCIICR_RES_Pos                   _UINT32_(4)                                          /* (SFR_OHCIICR Position) USB PORTx Reset */
#define SFR_OHCIICR_RES_Msk                   (_UINT32_(0x7) << SFR_OHCIICR_RES_Pos)               /* (SFR_OHCIICR Mask) RES */
#define SFR_OHCIICR_RES(value)                (SFR_OHCIICR_RES_Msk & (_UINT32_(value) << SFR_OHCIICR_RES_Pos)) 
#define SFR_OHCIICR_SUSPEND_Pos               _UINT32_(8)                                          /* (SFR_OHCIICR Position) USB PORT x */
#define SFR_OHCIICR_SUSPEND_Msk               (_UINT32_(0x7) << SFR_OHCIICR_SUSPEND_Pos)           /* (SFR_OHCIICR Mask) SUSPEND */
#define SFR_OHCIICR_SUSPEND(value)            (SFR_OHCIICR_SUSPEND_Msk & (_UINT32_(value) << SFR_OHCIICR_SUSPEND_Pos)) 

/* -------- SFR_OHCIISR : (SFR Offset: 0x04) ( R/ 32) OHCI Interrupt Status Register -------- */
#define SFR_OHCIISR_RESETVALUE                _UINT32_(0x00)                                       /*  (SFR_OHCIISR) OHCI Interrupt Status Register  Reset Value */

#define SFR_OHCIISR_RIS0_Pos                  _UINT32_(0)                                          /* (SFR_OHCIISR) OHCI Resume Interrupt Status Port 0 Position */
#define SFR_OHCIISR_RIS0_Msk                  (_UINT32_(0x1) << SFR_OHCIISR_RIS0_Pos)              /* (SFR_OHCIISR) OHCI Resume Interrupt Status Port 0 Mask */
#define SFR_OHCIISR_RIS0(value)               (SFR_OHCIISR_RIS0_Msk & (_UINT32_(value) << SFR_OHCIISR_RIS0_Pos)) /* Assignment of value for RIS0 in the SFR_OHCIISR register */
#define   SFR_OHCIISR_RIS0_0_Val              _UINT32_(0x0)                                        /* (SFR_OHCIISR) OHCI port resume not detected.  */
#define   SFR_OHCIISR_RIS0_1_Val              _UINT32_(0x1)                                        /* (SFR_OHCIISR) OHCI port resume detected.  */
#define SFR_OHCIISR_RIS0_0                    (SFR_OHCIISR_RIS0_0_Val << SFR_OHCIISR_RIS0_Pos)     /* (SFR_OHCIISR) OHCI port resume not detected. Position */
#define SFR_OHCIISR_RIS0_1                    (SFR_OHCIISR_RIS0_1_Val << SFR_OHCIISR_RIS0_Pos)     /* (SFR_OHCIISR) OHCI port resume detected. Position */
#define SFR_OHCIISR_RIS1_Pos                  _UINT32_(1)                                          /* (SFR_OHCIISR) OHCI Resume Interrupt Status Port 1 Position */
#define SFR_OHCIISR_RIS1_Msk                  (_UINT32_(0x1) << SFR_OHCIISR_RIS1_Pos)              /* (SFR_OHCIISR) OHCI Resume Interrupt Status Port 1 Mask */
#define SFR_OHCIISR_RIS1(value)               (SFR_OHCIISR_RIS1_Msk & (_UINT32_(value) << SFR_OHCIISR_RIS1_Pos)) /* Assignment of value for RIS1 in the SFR_OHCIISR register */
#define   SFR_OHCIISR_RIS1_0_Val              _UINT32_(0x0)                                        /* (SFR_OHCIISR) OHCI port resume not detected.  */
#define   SFR_OHCIISR_RIS1_1_Val              _UINT32_(0x1)                                        /* (SFR_OHCIISR) OHCI port resume detected.  */
#define SFR_OHCIISR_RIS1_0                    (SFR_OHCIISR_RIS1_0_Val << SFR_OHCIISR_RIS1_Pos)     /* (SFR_OHCIISR) OHCI port resume not detected. Position */
#define SFR_OHCIISR_RIS1_1                    (SFR_OHCIISR_RIS1_1_Val << SFR_OHCIISR_RIS1_Pos)     /* (SFR_OHCIISR) OHCI port resume detected. Position */
#define SFR_OHCIISR_RIS2_Pos                  _UINT32_(2)                                          /* (SFR_OHCIISR) OHCI Resume Interrupt Status Port 2 Position */
#define SFR_OHCIISR_RIS2_Msk                  (_UINT32_(0x1) << SFR_OHCIISR_RIS2_Pos)              /* (SFR_OHCIISR) OHCI Resume Interrupt Status Port 2 Mask */
#define SFR_OHCIISR_RIS2(value)               (SFR_OHCIISR_RIS2_Msk & (_UINT32_(value) << SFR_OHCIISR_RIS2_Pos)) /* Assignment of value for RIS2 in the SFR_OHCIISR register */
#define   SFR_OHCIISR_RIS2_0_Val              _UINT32_(0x0)                                        /* (SFR_OHCIISR) OHCI port resume not detected.  */
#define   SFR_OHCIISR_RIS2_1_Val              _UINT32_(0x1)                                        /* (SFR_OHCIISR) OHCI port resume detected.  */
#define SFR_OHCIISR_RIS2_0                    (SFR_OHCIISR_RIS2_0_Val << SFR_OHCIISR_RIS2_Pos)     /* (SFR_OHCIISR) OHCI port resume not detected. Position */
#define SFR_OHCIISR_RIS2_1                    (SFR_OHCIISR_RIS2_1_Val << SFR_OHCIISR_RIS2_Pos)     /* (SFR_OHCIISR) OHCI port resume detected. Position */
#define SFR_OHCIISR_Msk                       _UINT32_(0x00000007)                                 /* (SFR_OHCIISR) Register Mask  */

#define SFR_OHCIISR_RIS_Pos                   _UINT32_(0)                                          /* (SFR_OHCIISR Position) OHCI Resume Interrupt Status Port 2 */
#define SFR_OHCIISR_RIS_Msk                   (_UINT32_(0x7) << SFR_OHCIISR_RIS_Pos)               /* (SFR_OHCIISR Mask) RIS */
#define SFR_OHCIISR_RIS(value)                (SFR_OHCIISR_RIS_Msk & (_UINT32_(value) << SFR_OHCIISR_RIS_Pos)) 

/* -------- SFR_WPMR : (SFR Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define SFR_WPMR_RESETVALUE                   _UINT32_(0x00)                                       /*  (SFR_WPMR) Write Protection Mode Register  Reset Value */

#define SFR_WPMR_WPEN_Pos                     _UINT32_(0)                                          /* (SFR_WPMR) Write Protection Enable Position */
#define SFR_WPMR_WPEN_Msk                     (_UINT32_(0x1) << SFR_WPMR_WPEN_Pos)                 /* (SFR_WPMR) Write Protection Enable Mask */
#define SFR_WPMR_WPEN(value)                  (SFR_WPMR_WPEN_Msk & (_UINT32_(value) << SFR_WPMR_WPEN_Pos)) /* Assignment of value for WPEN in the SFR_WPMR register */
#define   SFR_WPMR_WPEN_0_Val                 _UINT32_(0x0)                                        /* (SFR_WPMR) Disables the write protection if WPKEY value corresponds to 0x534652 ("SFR" in ASCII).  */
#define   SFR_WPMR_WPEN_1_Val                 _UINT32_(0x1)                                        /* (SFR_WPMR) Enables the write protection if WPKEY value corresponds to 0x534652 ("SFR" in ASCII).  */
#define SFR_WPMR_WPEN_0                       (SFR_WPMR_WPEN_0_Val << SFR_WPMR_WPEN_Pos)           /* (SFR_WPMR) Disables the write protection if WPKEY value corresponds to 0x534652 ("SFR" in ASCII). Position */
#define SFR_WPMR_WPEN_1                       (SFR_WPMR_WPEN_1_Val << SFR_WPMR_WPEN_Pos)           /* (SFR_WPMR) Enables the write protection if WPKEY value corresponds to 0x534652 ("SFR" in ASCII). Position */
#define SFR_WPMR_WPKEY_Pos                    _UINT32_(8)                                          /* (SFR_WPMR) Write Protection Key Position */
#define SFR_WPMR_WPKEY_Msk                    (_UINT32_(0xFFFFFF) << SFR_WPMR_WPKEY_Pos)           /* (SFR_WPMR) Write Protection Key Mask */
#define SFR_WPMR_WPKEY(value)                 (SFR_WPMR_WPKEY_Msk & (_UINT32_(value) << SFR_WPMR_WPKEY_Pos)) /* Assignment of value for WPKEY in the SFR_WPMR register */
#define   SFR_WPMR_WPKEY_PASSWD_Val           _UINT32_(0x534652)                                   /* (SFR_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0.  */
#define SFR_WPMR_WPKEY_PASSWD                 (SFR_WPMR_WPKEY_PASSWD_Val << SFR_WPMR_WPKEY_Pos)    /* (SFR_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0. Position */
#define SFR_WPMR_Msk                          _UINT32_(0xFFFFFF01)                                 /* (SFR_WPMR) Register Mask  */


/* -------- SFR_WPSR : (SFR Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define SFR_WPSR_RESETVALUE                   _UINT32_(0x00)                                       /*  (SFR_WPSR) Write Protection Status Register  Reset Value */

#define SFR_WPSR_WPVS_Pos                     _UINT32_(0)                                          /* (SFR_WPSR) Write Protection Violation Status Position */
#define SFR_WPSR_WPVS_Msk                     (_UINT32_(0x1) << SFR_WPSR_WPVS_Pos)                 /* (SFR_WPSR) Write Protection Violation Status Mask */
#define SFR_WPSR_WPVS(value)                  (SFR_WPSR_WPVS_Msk & (_UINT32_(value) << SFR_WPSR_WPVS_Pos)) /* Assignment of value for WPVS in the SFR_WPSR register */
#define   SFR_WPSR_WPVS_0_Val                 _UINT32_(0x0)                                        /* (SFR_WPSR) No write protection violation has occurred since the last read of SFR_WPSR.  */
#define   SFR_WPSR_WPVS_1_Val                 _UINT32_(0x1)                                        /* (SFR_WPSR) A write protection violation has occurred since the last read of SFR_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPSRC.  */
#define SFR_WPSR_WPVS_0                       (SFR_WPSR_WPVS_0_Val << SFR_WPSR_WPVS_Pos)           /* (SFR_WPSR) No write protection violation has occurred since the last read of SFR_WPSR. Position */
#define SFR_WPSR_WPVS_1                       (SFR_WPSR_WPVS_1_Val << SFR_WPSR_WPVS_Pos)           /* (SFR_WPSR) A write protection violation has occurred since the last read of SFR_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPSRC. Position */
#define SFR_WPSR_WPSRC_Pos                    _UINT32_(8)                                          /* (SFR_WPSR) Write Protection Source Position */
#define SFR_WPSR_WPSRC_Msk                    (_UINT32_(0xFFFF) << SFR_WPSR_WPSRC_Pos)             /* (SFR_WPSR) Write Protection Source Mask */
#define SFR_WPSR_WPSRC(value)                 (SFR_WPSR_WPSRC_Msk & (_UINT32_(value) << SFR_WPSR_WPSRC_Pos)) /* Assignment of value for WPSRC in the SFR_WPSR register */
#define SFR_WPSR_Msk                          _UINT32_(0x00FFFF01)                                 /* (SFR_WPSR) Register Mask  */


/* -------- SFR_DEBUG : (SFR Offset: 0x200C) (R/W 32) Debug Register -------- */
#define SFR_DEBUG_RESETVALUE                  _UINT32_(0x00)                                       /*  (SFR_DEBUG) Debug Register  Reset Value */

#define SFR_DEBUG_PROT_Pos                    _UINT32_(0)                                          /* (SFR_DEBUG) Protection Debug Position */
#define SFR_DEBUG_PROT_Msk                    (_UINT32_(0x1) << SFR_DEBUG_PROT_Pos)                /* (SFR_DEBUG) Protection Debug Mask */
#define SFR_DEBUG_PROT(value)                 (SFR_DEBUG_PROT_Msk & (_UINT32_(value) << SFR_DEBUG_PROT_Pos)) /* Assignment of value for PROT in the SFR_DEBUG register */
#define   SFR_DEBUG_PROT_0_Val                _UINT32_(0x0)                                        /* (SFR_DEBUG) Protection debug is disabled.  */
#define   SFR_DEBUG_PROT_1_Val                _UINT32_(0x1)                                        /* (SFR_DEBUG) Protection debug is enabled.  */
#define SFR_DEBUG_PROT_0                      (SFR_DEBUG_PROT_0_Val << SFR_DEBUG_PROT_Pos)         /* (SFR_DEBUG) Protection debug is disabled. Position */
#define SFR_DEBUG_PROT_1                      (SFR_DEBUG_PROT_1_Val << SFR_DEBUG_PROT_Pos)         /* (SFR_DEBUG) Protection debug is enabled. Position */
#define SFR_DEBUG_Msk                         _UINT32_(0x00000001)                                 /* (SFR_DEBUG) Register Mask  */


/* -------- SFR_HSS_AXIQOS : (SFR Offset: 0x2028) (R/W 32) HSS AXI QOS Register -------- */
#define SFR_HSS_AXIQOS_RESETVALUE             _UINT32_(0x00)                                       /*  (SFR_HSS_AXIQOS) HSS AXI QOS Register  Reset Value */

#define SFR_HSS_AXIQOS_READ_Pos               _UINT32_(0)                                          /* (SFR_HSS_AXIQOS) QOS Value for Read Transfer from HSS to the DDR Controller Position */
#define SFR_HSS_AXIQOS_READ_Msk               (_UINT32_(0xF) << SFR_HSS_AXIQOS_READ_Pos)           /* (SFR_HSS_AXIQOS) QOS Value for Read Transfer from HSS to the DDR Controller Mask */
#define SFR_HSS_AXIQOS_READ(value)            (SFR_HSS_AXIQOS_READ_Msk & (_UINT32_(value) << SFR_HSS_AXIQOS_READ_Pos)) /* Assignment of value for READ in the SFR_HSS_AXIQOS register */
#define SFR_HSS_AXIQOS_WRITE_Pos              _UINT32_(8)                                          /* (SFR_HSS_AXIQOS) QOS Value for Write Transfer from HSS to the DDR Controller Position */
#define SFR_HSS_AXIQOS_WRITE_Msk              (_UINT32_(0xF) << SFR_HSS_AXIQOS_WRITE_Pos)          /* (SFR_HSS_AXIQOS) QOS Value for Write Transfer from HSS to the DDR Controller Mask */
#define SFR_HSS_AXIQOS_WRITE(value)           (SFR_HSS_AXIQOS_WRITE_Msk & (_UINT32_(value) << SFR_HSS_AXIQOS_WRITE_Pos)) /* Assignment of value for WRITE in the SFR_HSS_AXIQOS register */
#define SFR_HSS_AXIQOS_Msk                    _UINT32_(0x00000F0F)                                 /* (SFR_HSS_AXIQOS) Register Mask  */


/* -------- SFR_MSK_ERR_DBG_MODE : (SFR Offset: 0x202C) (R/W 32) Mask Error Debug Mode Register -------- */
#define SFR_MSK_ERR_DBG_MODE_RESETVALUE       _UINT32_(0x00)                                       /*  (SFR_MSK_ERR_DBG_MODE) Mask Error Debug Mode Register  Reset Value */

#define SFR_MSK_ERR_DBG_MODE_DIS_DECERR_Pos   _UINT32_(0)                                          /* (SFR_MSK_ERR_DBG_MODE) Disable Decode Error Position */
#define SFR_MSK_ERR_DBG_MODE_DIS_DECERR_Msk   (_UINT32_(0x1) << SFR_MSK_ERR_DBG_MODE_DIS_DECERR_Pos) /* (SFR_MSK_ERR_DBG_MODE) Disable Decode Error Mask */
#define SFR_MSK_ERR_DBG_MODE_DIS_DECERR(value) (SFR_MSK_ERR_DBG_MODE_DIS_DECERR_Msk & (_UINT32_(value) << SFR_MSK_ERR_DBG_MODE_DIS_DECERR_Pos)) /* Assignment of value for DIS_DECERR in the SFR_MSK_ERR_DBG_MODE register */
#define   SFR_MSK_ERR_DBG_MODE_DIS_DECERR_0_Val _UINT32_(0x0)                                        /* (SFR_MSK_ERR_DBG_MODE) Enables decode error when reading a non-existing register in the UDDRC or GPU2DC user interface.  */
#define   SFR_MSK_ERR_DBG_MODE_DIS_DECERR_1_Val _UINT32_(0x1)                                        /* (SFR_MSK_ERR_DBG_MODE) Disables decode error when reading a non-existing register in the UDDRC or GPU2DC user interface.  */
#define SFR_MSK_ERR_DBG_MODE_DIS_DECERR_0     (SFR_MSK_ERR_DBG_MODE_DIS_DECERR_0_Val << SFR_MSK_ERR_DBG_MODE_DIS_DECERR_Pos) /* (SFR_MSK_ERR_DBG_MODE) Enables decode error when reading a non-existing register in the UDDRC or GPU2DC user interface. Position */
#define SFR_MSK_ERR_DBG_MODE_DIS_DECERR_1     (SFR_MSK_ERR_DBG_MODE_DIS_DECERR_1_Val << SFR_MSK_ERR_DBG_MODE_DIS_DECERR_Pos) /* (SFR_MSK_ERR_DBG_MODE) Disables decode error when reading a non-existing register in the UDDRC or GPU2DC user interface. Position */
#define SFR_MSK_ERR_DBG_MODE_Msk              _UINT32_(0x00000001)                                 /* (SFR_MSK_ERR_DBG_MODE) Register Mask  */


/* -------- SFR_CAN_SRAM_SEL : (SFR Offset: 0x2030) (R/W 32) CAN SRAM Selection Register -------- */
#define SFR_CAN_SRAM_SEL_RESETVALUE           _UINT32_(0x00)                                       /*  (SFR_CAN_SRAM_SEL) CAN SRAM Selection Register  Reset Value */

#define SFR_CAN_SRAM_SEL_UPPER_CAN0_Pos       _UINT32_(0)                                          /* (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN0_Msk       (_UINT32_(0x1) << SFR_CAN_SRAM_SEL_UPPER_CAN0_Pos)   /* (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Mask */
#define SFR_CAN_SRAM_SEL_UPPER_CAN0(value)    (SFR_CAN_SRAM_SEL_UPPER_CAN0_Msk & (_UINT32_(value) << SFR_CAN_SRAM_SEL_UPPER_CAN0_Pos)) /* Assignment of value for UPPER_CAN0 in the SFR_CAN_SRAM_SEL register */
#define   SFR_CAN_SRAM_SEL_UPPER_CAN0_0_Val   _UINT32_(0x0)                                        /* (SFR_CAN_SRAM_SEL) CANx accesses the lower 64 Kb of SRAM.  */
#define   SFR_CAN_SRAM_SEL_UPPER_CAN0_1_Val   _UINT32_(0x1)                                        /* (SFR_CAN_SRAM_SEL) CANx accesses the upper 64 Kb of SRAM.  */
#define SFR_CAN_SRAM_SEL_UPPER_CAN0_0         (SFR_CAN_SRAM_SEL_UPPER_CAN0_0_Val << SFR_CAN_SRAM_SEL_UPPER_CAN0_Pos) /* (SFR_CAN_SRAM_SEL) CANx accesses the lower 64 Kb of SRAM. Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN0_1         (SFR_CAN_SRAM_SEL_UPPER_CAN0_1_Val << SFR_CAN_SRAM_SEL_UPPER_CAN0_Pos) /* (SFR_CAN_SRAM_SEL) CANx accesses the upper 64 Kb of SRAM. Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN1_Pos       _UINT32_(1)                                          /* (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN1_Msk       (_UINT32_(0x1) << SFR_CAN_SRAM_SEL_UPPER_CAN1_Pos)   /* (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Mask */
#define SFR_CAN_SRAM_SEL_UPPER_CAN1(value)    (SFR_CAN_SRAM_SEL_UPPER_CAN1_Msk & (_UINT32_(value) << SFR_CAN_SRAM_SEL_UPPER_CAN1_Pos)) /* Assignment of value for UPPER_CAN1 in the SFR_CAN_SRAM_SEL register */
#define   SFR_CAN_SRAM_SEL_UPPER_CAN1_0_Val   _UINT32_(0x0)                                        /* (SFR_CAN_SRAM_SEL) CANx accesses the lower 64 Kb of SRAM.  */
#define   SFR_CAN_SRAM_SEL_UPPER_CAN1_1_Val   _UINT32_(0x1)                                        /* (SFR_CAN_SRAM_SEL) CANx accesses the upper 64 Kb of SRAM.  */
#define SFR_CAN_SRAM_SEL_UPPER_CAN1_0         (SFR_CAN_SRAM_SEL_UPPER_CAN1_0_Val << SFR_CAN_SRAM_SEL_UPPER_CAN1_Pos) /* (SFR_CAN_SRAM_SEL) CANx accesses the lower 64 Kb of SRAM. Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN1_1         (SFR_CAN_SRAM_SEL_UPPER_CAN1_1_Val << SFR_CAN_SRAM_SEL_UPPER_CAN1_Pos) /* (SFR_CAN_SRAM_SEL) CANx accesses the upper 64 Kb of SRAM. Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN2_Pos       _UINT32_(2)                                          /* (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN2_Msk       (_UINT32_(0x1) << SFR_CAN_SRAM_SEL_UPPER_CAN2_Pos)   /* (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Mask */
#define SFR_CAN_SRAM_SEL_UPPER_CAN2(value)    (SFR_CAN_SRAM_SEL_UPPER_CAN2_Msk & (_UINT32_(value) << SFR_CAN_SRAM_SEL_UPPER_CAN2_Pos)) /* Assignment of value for UPPER_CAN2 in the SFR_CAN_SRAM_SEL register */
#define   SFR_CAN_SRAM_SEL_UPPER_CAN2_0_Val   _UINT32_(0x0)                                        /* (SFR_CAN_SRAM_SEL) CANx accesses the lower 64 Kb of SRAM.  */
#define   SFR_CAN_SRAM_SEL_UPPER_CAN2_1_Val   _UINT32_(0x1)                                        /* (SFR_CAN_SRAM_SEL) CANx accesses the upper 64 Kb of SRAM.  */
#define SFR_CAN_SRAM_SEL_UPPER_CAN2_0         (SFR_CAN_SRAM_SEL_UPPER_CAN2_0_Val << SFR_CAN_SRAM_SEL_UPPER_CAN2_Pos) /* (SFR_CAN_SRAM_SEL) CANx accesses the lower 64 Kb of SRAM. Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN2_1         (SFR_CAN_SRAM_SEL_UPPER_CAN2_1_Val << SFR_CAN_SRAM_SEL_UPPER_CAN2_Pos) /* (SFR_CAN_SRAM_SEL) CANx accesses the upper 64 Kb of SRAM. Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN3_Pos       _UINT32_(3)                                          /* (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN3_Msk       (_UINT32_(0x1) << SFR_CAN_SRAM_SEL_UPPER_CAN3_Pos)   /* (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Mask */
#define SFR_CAN_SRAM_SEL_UPPER_CAN3(value)    (SFR_CAN_SRAM_SEL_UPPER_CAN3_Msk & (_UINT32_(value) << SFR_CAN_SRAM_SEL_UPPER_CAN3_Pos)) /* Assignment of value for UPPER_CAN3 in the SFR_CAN_SRAM_SEL register */
#define   SFR_CAN_SRAM_SEL_UPPER_CAN3_0_Val   _UINT32_(0x0)                                        /* (SFR_CAN_SRAM_SEL) CANx accesses the lower 64 Kb of SRAM.  */
#define   SFR_CAN_SRAM_SEL_UPPER_CAN3_1_Val   _UINT32_(0x1)                                        /* (SFR_CAN_SRAM_SEL) CANx accesses the upper 64 Kb of SRAM.  */
#define SFR_CAN_SRAM_SEL_UPPER_CAN3_0         (SFR_CAN_SRAM_SEL_UPPER_CAN3_0_Val << SFR_CAN_SRAM_SEL_UPPER_CAN3_Pos) /* (SFR_CAN_SRAM_SEL) CANx accesses the lower 64 Kb of SRAM. Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN3_1         (SFR_CAN_SRAM_SEL_UPPER_CAN3_1_Val << SFR_CAN_SRAM_SEL_UPPER_CAN3_Pos) /* (SFR_CAN_SRAM_SEL) CANx accesses the upper 64 Kb of SRAM. Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN4_Pos       _UINT32_(4)                                          /* (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN4_Msk       (_UINT32_(0x1) << SFR_CAN_SRAM_SEL_UPPER_CAN4_Pos)   /* (SFR_CAN_SRAM_SEL) CANx Upper 64K SRAM Selection Mask */
#define SFR_CAN_SRAM_SEL_UPPER_CAN4(value)    (SFR_CAN_SRAM_SEL_UPPER_CAN4_Msk & (_UINT32_(value) << SFR_CAN_SRAM_SEL_UPPER_CAN4_Pos)) /* Assignment of value for UPPER_CAN4 in the SFR_CAN_SRAM_SEL register */
#define   SFR_CAN_SRAM_SEL_UPPER_CAN4_0_Val   _UINT32_(0x0)                                        /* (SFR_CAN_SRAM_SEL) CANx accesses the lower 64 Kb of SRAM.  */
#define   SFR_CAN_SRAM_SEL_UPPER_CAN4_1_Val   _UINT32_(0x1)                                        /* (SFR_CAN_SRAM_SEL) CANx accesses the upper 64 Kb of SRAM.  */
#define SFR_CAN_SRAM_SEL_UPPER_CAN4_0         (SFR_CAN_SRAM_SEL_UPPER_CAN4_0_Val << SFR_CAN_SRAM_SEL_UPPER_CAN4_Pos) /* (SFR_CAN_SRAM_SEL) CANx accesses the lower 64 Kb of SRAM. Position */
#define SFR_CAN_SRAM_SEL_UPPER_CAN4_1         (SFR_CAN_SRAM_SEL_UPPER_CAN4_1_Val << SFR_CAN_SRAM_SEL_UPPER_CAN4_Pos) /* (SFR_CAN_SRAM_SEL) CANx accesses the upper 64 Kb of SRAM. Position */
#define SFR_CAN_SRAM_SEL_Msk                  _UINT32_(0x0000001F)                                 /* (SFR_CAN_SRAM_SEL) Register Mask  */

#define SFR_CAN_SRAM_SEL_UPPER_CAN_Pos        _UINT32_(0)                                          /* (SFR_CAN_SRAM_SEL Position) CANx Upper 64K SRAM Selection */
#define SFR_CAN_SRAM_SEL_UPPER_CAN_Msk        (_UINT32_(0x1F) << SFR_CAN_SRAM_SEL_UPPER_CAN_Pos)   /* (SFR_CAN_SRAM_SEL Mask) UPPER_CAN */
#define SFR_CAN_SRAM_SEL_UPPER_CAN(value)     (SFR_CAN_SRAM_SEL_UPPER_CAN_Msk & (_UINT32_(value) << SFR_CAN_SRAM_SEL_UPPER_CAN_Pos)) 

/* -------- SFR_NIC_CG_CFG : (SFR Offset: 0x203C) (R/W 32) NIC Clock Gating Configuration Register -------- */
#define SFR_NIC_CG_CFG_RESETVALUE             _UINT32_(0x00)                                       /*  (SFR_NIC_CG_CFG) NIC Clock Gating Configuration Register  Reset Value */

#define SFR_NIC_CG_CFG_NIC0_MCK4_ENABLE_Pos   _UINT32_(0)                                          /* (SFR_NIC_CG_CFG) NIC0 MCK4 Enable Position */
#define SFR_NIC_CG_CFG_NIC0_MCK4_ENABLE_Msk   (_UINT32_(0x1) << SFR_NIC_CG_CFG_NIC0_MCK4_ENABLE_Pos) /* (SFR_NIC_CG_CFG) NIC0 MCK4 Enable Mask */
#define SFR_NIC_CG_CFG_NIC0_MCK4_ENABLE(value) (SFR_NIC_CG_CFG_NIC0_MCK4_ENABLE_Msk & (_UINT32_(value) << SFR_NIC_CG_CFG_NIC0_MCK4_ENABLE_Pos)) /* Assignment of value for NIC0_MCK4_ENABLE in the SFR_NIC_CG_CFG register */
#define   SFR_NIC_CG_CFG_NIC0_MCK4_ENABLE_0_Val _UINT32_(0x0)                                        /* (SFR_NIC_CG_CFG) NIC0_MCK4_ENABLE clock gating disabled.  */
#define   SFR_NIC_CG_CFG_NIC0_MCK4_ENABLE_1_Val _UINT32_(0x1)                                        /* (SFR_NIC_CG_CFG) NIC0_MCK4_ENABLE clock gating enabled.  */
#define SFR_NIC_CG_CFG_NIC0_MCK4_ENABLE_0     (SFR_NIC_CG_CFG_NIC0_MCK4_ENABLE_0_Val << SFR_NIC_CG_CFG_NIC0_MCK4_ENABLE_Pos) /* (SFR_NIC_CG_CFG) NIC0_MCK4_ENABLE clock gating disabled. Position */
#define SFR_NIC_CG_CFG_NIC0_MCK4_ENABLE_1     (SFR_NIC_CG_CFG_NIC0_MCK4_ENABLE_1_Val << SFR_NIC_CG_CFG_NIC0_MCK4_ENABLE_Pos) /* (SFR_NIC_CG_CFG) NIC0_MCK4_ENABLE clock gating enabled. Position */
#define SFR_NIC_CG_CFG_NIC0_MCK0_ENABLE_Pos   _UINT32_(1)                                          /* (SFR_NIC_CG_CFG) NIC0 MCK0 Enable Position */
#define SFR_NIC_CG_CFG_NIC0_MCK0_ENABLE_Msk   (_UINT32_(0x1) << SFR_NIC_CG_CFG_NIC0_MCK0_ENABLE_Pos) /* (SFR_NIC_CG_CFG) NIC0 MCK0 Enable Mask */
#define SFR_NIC_CG_CFG_NIC0_MCK0_ENABLE(value) (SFR_NIC_CG_CFG_NIC0_MCK0_ENABLE_Msk & (_UINT32_(value) << SFR_NIC_CG_CFG_NIC0_MCK0_ENABLE_Pos)) /* Assignment of value for NIC0_MCK0_ENABLE in the SFR_NIC_CG_CFG register */
#define   SFR_NIC_CG_CFG_NIC0_MCK0_ENABLE_0_Val _UINT32_(0x0)                                        /* (SFR_NIC_CG_CFG) NIC0_MCK0_ENABLE clock gating disabled.  */
#define   SFR_NIC_CG_CFG_NIC0_MCK0_ENABLE_1_Val _UINT32_(0x1)                                        /* (SFR_NIC_CG_CFG) NIC0_MCK0_ENABLE clock gating enabled.  */
#define SFR_NIC_CG_CFG_NIC0_MCK0_ENABLE_0     (SFR_NIC_CG_CFG_NIC0_MCK0_ENABLE_0_Val << SFR_NIC_CG_CFG_NIC0_MCK0_ENABLE_Pos) /* (SFR_NIC_CG_CFG) NIC0_MCK0_ENABLE clock gating disabled. Position */
#define SFR_NIC_CG_CFG_NIC0_MCK0_ENABLE_1     (SFR_NIC_CG_CFG_NIC0_MCK0_ENABLE_1_Val << SFR_NIC_CG_CFG_NIC0_MCK0_ENABLE_Pos) /* (SFR_NIC_CG_CFG) NIC0_MCK0_ENABLE clock gating enabled. Position */
#define SFR_NIC_CG_CFG_NIC0_MCK6_ENABLE_Pos   _UINT32_(2)                                          /* (SFR_NIC_CG_CFG) NIC0 MCK6 Enable Position */
#define SFR_NIC_CG_CFG_NIC0_MCK6_ENABLE_Msk   (_UINT32_(0x1) << SFR_NIC_CG_CFG_NIC0_MCK6_ENABLE_Pos) /* (SFR_NIC_CG_CFG) NIC0 MCK6 Enable Mask */
#define SFR_NIC_CG_CFG_NIC0_MCK6_ENABLE(value) (SFR_NIC_CG_CFG_NIC0_MCK6_ENABLE_Msk & (_UINT32_(value) << SFR_NIC_CG_CFG_NIC0_MCK6_ENABLE_Pos)) /* Assignment of value for NIC0_MCK6_ENABLE in the SFR_NIC_CG_CFG register */
#define   SFR_NIC_CG_CFG_NIC0_MCK6_ENABLE_0_Val _UINT32_(0x0)                                        /* (SFR_NIC_CG_CFG) NIC0_MCK6_ENABLE clock gating disabled.  */
#define   SFR_NIC_CG_CFG_NIC0_MCK6_ENABLE_1_Val _UINT32_(0x1)                                        /* (SFR_NIC_CG_CFG) NIC0_MCK6_ENABLE clock gating enabled.  */
#define SFR_NIC_CG_CFG_NIC0_MCK6_ENABLE_0     (SFR_NIC_CG_CFG_NIC0_MCK6_ENABLE_0_Val << SFR_NIC_CG_CFG_NIC0_MCK6_ENABLE_Pos) /* (SFR_NIC_CG_CFG) NIC0_MCK6_ENABLE clock gating disabled. Position */
#define SFR_NIC_CG_CFG_NIC0_MCK6_ENABLE_1     (SFR_NIC_CG_CFG_NIC0_MCK6_ENABLE_1_Val << SFR_NIC_CG_CFG_NIC0_MCK6_ENABLE_Pos) /* (SFR_NIC_CG_CFG) NIC0_MCK6_ENABLE clock gating enabled. Position */
#define SFR_NIC_CG_CFG_NIC0_MCK7_ENABLE_Pos   _UINT32_(3)                                          /* (SFR_NIC_CG_CFG) NIC0 MCK7 Enable Position */
#define SFR_NIC_CG_CFG_NIC0_MCK7_ENABLE_Msk   (_UINT32_(0x1) << SFR_NIC_CG_CFG_NIC0_MCK7_ENABLE_Pos) /* (SFR_NIC_CG_CFG) NIC0 MCK7 Enable Mask */
#define SFR_NIC_CG_CFG_NIC0_MCK7_ENABLE(value) (SFR_NIC_CG_CFG_NIC0_MCK7_ENABLE_Msk & (_UINT32_(value) << SFR_NIC_CG_CFG_NIC0_MCK7_ENABLE_Pos)) /* Assignment of value for NIC0_MCK7_ENABLE in the SFR_NIC_CG_CFG register */
#define   SFR_NIC_CG_CFG_NIC0_MCK7_ENABLE_0_Val _UINT32_(0x0)                                        /* (SFR_NIC_CG_CFG) NIC0_MCK7_ENABLE clock gating disabled.  */
#define SFR_NIC_CG_CFG_NIC0_MCK7_ENABLE_0     (SFR_NIC_CG_CFG_NIC0_MCK7_ENABLE_0_Val << SFR_NIC_CG_CFG_NIC0_MCK7_ENABLE_Pos) /* (SFR_NIC_CG_CFG) NIC0_MCK7_ENABLE clock gating disabled. Position */
#define SFR_NIC_CG_CFG_NIC0_MCK8_ENABLE_Pos   _UINT32_(4)                                          /* (SFR_NIC_CG_CFG) NIC0 MCK8 Enable Position */
#define SFR_NIC_CG_CFG_NIC0_MCK8_ENABLE_Msk   (_UINT32_(0x1) << SFR_NIC_CG_CFG_NIC0_MCK8_ENABLE_Pos) /* (SFR_NIC_CG_CFG) NIC0 MCK8 Enable Mask */
#define SFR_NIC_CG_CFG_NIC0_MCK8_ENABLE(value) (SFR_NIC_CG_CFG_NIC0_MCK8_ENABLE_Msk & (_UINT32_(value) << SFR_NIC_CG_CFG_NIC0_MCK8_ENABLE_Pos)) /* Assignment of value for NIC0_MCK8_ENABLE in the SFR_NIC_CG_CFG register */
#define   SFR_NIC_CG_CFG_NIC0_MCK8_ENABLE_0_Val _UINT32_(0x0)                                        /* (SFR_NIC_CG_CFG) NIC0_MCK8_ENABLE clock gating disabled.  */
#define   SFR_NIC_CG_CFG_NIC0_MCK8_ENABLE_1_Val _UINT32_(0x1)                                        /* (SFR_NIC_CG_CFG) NIC0_MCK8_ENABLE clock gating enabled.  */
#define SFR_NIC_CG_CFG_NIC0_MCK8_ENABLE_0     (SFR_NIC_CG_CFG_NIC0_MCK8_ENABLE_0_Val << SFR_NIC_CG_CFG_NIC0_MCK8_ENABLE_Pos) /* (SFR_NIC_CG_CFG) NIC0_MCK8_ENABLE clock gating disabled. Position */
#define SFR_NIC_CG_CFG_NIC0_MCK8_ENABLE_1     (SFR_NIC_CG_CFG_NIC0_MCK8_ENABLE_1_Val << SFR_NIC_CG_CFG_NIC0_MCK8_ENABLE_Pos) /* (SFR_NIC_CG_CFG) NIC0_MCK8_ENABLE clock gating enabled. Position */
#define SFR_NIC_CG_CFG_NIC0_MCK9_ENABLE_Pos   _UINT32_(5)                                          /* (SFR_NIC_CG_CFG) NIC0 MCK9 Enable Position */
#define SFR_NIC_CG_CFG_NIC0_MCK9_ENABLE_Msk   (_UINT32_(0x1) << SFR_NIC_CG_CFG_NIC0_MCK9_ENABLE_Pos) /* (SFR_NIC_CG_CFG) NIC0 MCK9 Enable Mask */
#define SFR_NIC_CG_CFG_NIC0_MCK9_ENABLE(value) (SFR_NIC_CG_CFG_NIC0_MCK9_ENABLE_Msk & (_UINT32_(value) << SFR_NIC_CG_CFG_NIC0_MCK9_ENABLE_Pos)) /* Assignment of value for NIC0_MCK9_ENABLE in the SFR_NIC_CG_CFG register */
#define   SFR_NIC_CG_CFG_NIC0_MCK9_ENABLE_0_Val _UINT32_(0x0)                                        /* (SFR_NIC_CG_CFG) NIC0_MCK9_ENABLE clock gating disabled.  */
#define   SFR_NIC_CG_CFG_NIC0_MCK9_ENABLE_1_Val _UINT32_(0x1)                                        /* (SFR_NIC_CG_CFG) NIC0_MCK9_ENABLE clock gating enabled.  */
#define SFR_NIC_CG_CFG_NIC0_MCK9_ENABLE_0     (SFR_NIC_CG_CFG_NIC0_MCK9_ENABLE_0_Val << SFR_NIC_CG_CFG_NIC0_MCK9_ENABLE_Pos) /* (SFR_NIC_CG_CFG) NIC0_MCK9_ENABLE clock gating disabled. Position */
#define SFR_NIC_CG_CFG_NIC0_MCK9_ENABLE_1     (SFR_NIC_CG_CFG_NIC0_MCK9_ENABLE_1_Val << SFR_NIC_CG_CFG_NIC0_MCK9_ENABLE_Pos) /* (SFR_NIC_CG_CFG) NIC0_MCK9_ENABLE clock gating enabled. Position */
#define SFR_NIC_CG_CFG_NIC0_MCK1_ENABLE_Pos   _UINT32_(6)                                          /* (SFR_NIC_CG_CFG) NIC0 MCK1 Enable Position */
#define SFR_NIC_CG_CFG_NIC0_MCK1_ENABLE_Msk   (_UINT32_(0x1) << SFR_NIC_CG_CFG_NIC0_MCK1_ENABLE_Pos) /* (SFR_NIC_CG_CFG) NIC0 MCK1 Enable Mask */
#define SFR_NIC_CG_CFG_NIC0_MCK1_ENABLE(value) (SFR_NIC_CG_CFG_NIC0_MCK1_ENABLE_Msk & (_UINT32_(value) << SFR_NIC_CG_CFG_NIC0_MCK1_ENABLE_Pos)) /* Assignment of value for NIC0_MCK1_ENABLE in the SFR_NIC_CG_CFG register */
#define   SFR_NIC_CG_CFG_NIC0_MCK1_ENABLE_0_Val _UINT32_(0x0)                                        /* (SFR_NIC_CG_CFG) NIC0_MCK1_ENABLE clock gating disabled.  */
#define   SFR_NIC_CG_CFG_NIC0_MCK1_ENABLE_1_Val _UINT32_(0x1)                                        /* (SFR_NIC_CG_CFG) NIC0_MCK1_ENABLE clock gating enabled.  */
#define SFR_NIC_CG_CFG_NIC0_MCK1_ENABLE_0     (SFR_NIC_CG_CFG_NIC0_MCK1_ENABLE_0_Val << SFR_NIC_CG_CFG_NIC0_MCK1_ENABLE_Pos) /* (SFR_NIC_CG_CFG) NIC0_MCK1_ENABLE clock gating disabled. Position */
#define SFR_NIC_CG_CFG_NIC0_MCK1_ENABLE_1     (SFR_NIC_CG_CFG_NIC0_MCK1_ENABLE_1_Val << SFR_NIC_CG_CFG_NIC0_MCK1_ENABLE_Pos) /* (SFR_NIC_CG_CFG) NIC0_MCK1_ENABLE clock gating enabled. Position */
#define SFR_NIC_CG_CFG_NIC0_MCK5_ENABLE_Pos   _UINT32_(7)                                          /* (SFR_NIC_CG_CFG) NIC0 MCK5 Enable Position */
#define SFR_NIC_CG_CFG_NIC0_MCK5_ENABLE_Msk   (_UINT32_(0x1) << SFR_NIC_CG_CFG_NIC0_MCK5_ENABLE_Pos) /* (SFR_NIC_CG_CFG) NIC0 MCK5 Enable Mask */
#define SFR_NIC_CG_CFG_NIC0_MCK5_ENABLE(value) (SFR_NIC_CG_CFG_NIC0_MCK5_ENABLE_Msk & (_UINT32_(value) << SFR_NIC_CG_CFG_NIC0_MCK5_ENABLE_Pos)) /* Assignment of value for NIC0_MCK5_ENABLE in the SFR_NIC_CG_CFG register */
#define   SFR_NIC_CG_CFG_NIC0_MCK5_ENABLE_0_Val _UINT32_(0x0)                                        /* (SFR_NIC_CG_CFG) NIC0_MCK5_ENABLE clock gating disabled.  */
#define SFR_NIC_CG_CFG_NIC0_MCK5_ENABLE_0     (SFR_NIC_CG_CFG_NIC0_MCK5_ENABLE_0_Val << SFR_NIC_CG_CFG_NIC0_MCK5_ENABLE_Pos) /* (SFR_NIC_CG_CFG) NIC0_MCK5_ENABLE clock gating disabled. Position */
#define SFR_NIC_CG_CFG_NIC0_GPV_ENABLE_Pos    _UINT32_(8)                                          /* (SFR_NIC_CG_CFG) NIC0 GPV Enable Position */
#define SFR_NIC_CG_CFG_NIC0_GPV_ENABLE_Msk    (_UINT32_(0x1) << SFR_NIC_CG_CFG_NIC0_GPV_ENABLE_Pos) /* (SFR_NIC_CG_CFG) NIC0 GPV Enable Mask */
#define SFR_NIC_CG_CFG_NIC0_GPV_ENABLE(value) (SFR_NIC_CG_CFG_NIC0_GPV_ENABLE_Msk & (_UINT32_(value) << SFR_NIC_CG_CFG_NIC0_GPV_ENABLE_Pos)) /* Assignment of value for NIC0_GPV_ENABLE in the SFR_NIC_CG_CFG register */
#define   SFR_NIC_CG_CFG_NIC0_GPV_ENABLE_0_Val _UINT32_(0x0)                                        /* (SFR_NIC_CG_CFG) NIC0_GPV_ENABLE clock gating disabled.  */
#define   SFR_NIC_CG_CFG_NIC0_GPV_ENABLE_1_Val _UINT32_(0x1)                                        /* (SFR_NIC_CG_CFG) NIC0_GPV_ENABLE clock gating enabled.  */
#define SFR_NIC_CG_CFG_NIC0_GPV_ENABLE_0      (SFR_NIC_CG_CFG_NIC0_GPV_ENABLE_0_Val << SFR_NIC_CG_CFG_NIC0_GPV_ENABLE_Pos) /* (SFR_NIC_CG_CFG) NIC0_GPV_ENABLE clock gating disabled. Position */
#define SFR_NIC_CG_CFG_NIC0_GPV_ENABLE_1      (SFR_NIC_CG_CFG_NIC0_GPV_ENABLE_1_Val << SFR_NIC_CG_CFG_NIC0_GPV_ENABLE_Pos) /* (SFR_NIC_CG_CFG) NIC0_GPV_ENABLE clock gating enabled. Position */
#define SFR_NIC_CG_CFG_NIC1_MCK3_ENABLE_Pos   _UINT32_(16)                                         /* (SFR_NIC_CG_CFG) NIC1 MCK3 Enable Position */
#define SFR_NIC_CG_CFG_NIC1_MCK3_ENABLE_Msk   (_UINT32_(0x1) << SFR_NIC_CG_CFG_NIC1_MCK3_ENABLE_Pos) /* (SFR_NIC_CG_CFG) NIC1 MCK3 Enable Mask */
#define SFR_NIC_CG_CFG_NIC1_MCK3_ENABLE(value) (SFR_NIC_CG_CFG_NIC1_MCK3_ENABLE_Msk & (_UINT32_(value) << SFR_NIC_CG_CFG_NIC1_MCK3_ENABLE_Pos)) /* Assignment of value for NIC1_MCK3_ENABLE in the SFR_NIC_CG_CFG register */
#define   SFR_NIC_CG_CFG_NIC1_MCK3_ENABLE_0_Val _UINT32_(0x0)                                        /* (SFR_NIC_CG_CFG) NIC1_MCK3_ENABLE clock gating disabled.  */
#define SFR_NIC_CG_CFG_NIC1_MCK3_ENABLE_0     (SFR_NIC_CG_CFG_NIC1_MCK3_ENABLE_0_Val << SFR_NIC_CG_CFG_NIC1_MCK3_ENABLE_Pos) /* (SFR_NIC_CG_CFG) NIC1_MCK3_ENABLE clock gating disabled. Position */
#define SFR_NIC_CG_CFG_Msk                    _UINT32_(0x000101FF)                                 /* (SFR_NIC_CG_CFG) Register Mask  */


/* -------- SFR_UTMIHSTRIM : (SFR Offset: 0x2044) (R/W 32) UTMI High-Speed Trimming Register -------- */
#define SFR_UTMIHSTRIM_RESETVALUE             _UINT32_(0x44433)                                    /*  (SFR_UTMIHSTRIM) UTMI High-Speed Trimming Register  Reset Value */

#define SFR_UTMIHSTRIM_SLOPE0_Pos             _UINT32_(8)                                          /* (SFR_UTMIHSTRIM) UTMI HS PORTx Transceiver Slope Trimming Position */
#define SFR_UTMIHSTRIM_SLOPE0_Msk             (_UINT32_(0x7) << SFR_UTMIHSTRIM_SLOPE0_Pos)         /* (SFR_UTMIHSTRIM) UTMI HS PORTx Transceiver Slope Trimming Mask */
#define SFR_UTMIHSTRIM_SLOPE0(value)          (SFR_UTMIHSTRIM_SLOPE0_Msk & (_UINT32_(value) << SFR_UTMIHSTRIM_SLOPE0_Pos)) /* Assignment of value for SLOPE0 in the SFR_UTMIHSTRIM register */
#define SFR_UTMIHSTRIM_SLOPE1_Pos             _UINT32_(12)                                         /* (SFR_UTMIHSTRIM) UTMI HS PORTx Transceiver Slope Trimming Position */
#define SFR_UTMIHSTRIM_SLOPE1_Msk             (_UINT32_(0x7) << SFR_UTMIHSTRIM_SLOPE1_Pos)         /* (SFR_UTMIHSTRIM) UTMI HS PORTx Transceiver Slope Trimming Mask */
#define SFR_UTMIHSTRIM_SLOPE1(value)          (SFR_UTMIHSTRIM_SLOPE1_Msk & (_UINT32_(value) << SFR_UTMIHSTRIM_SLOPE1_Pos)) /* Assignment of value for SLOPE1 in the SFR_UTMIHSTRIM register */
#define SFR_UTMIHSTRIM_SLOPE2_Pos             _UINT32_(16)                                         /* (SFR_UTMIHSTRIM) UTMI HS PORTx Transceiver Slope Trimming Position */
#define SFR_UTMIHSTRIM_SLOPE2_Msk             (_UINT32_(0x7) << SFR_UTMIHSTRIM_SLOPE2_Pos)         /* (SFR_UTMIHSTRIM) UTMI HS PORTx Transceiver Slope Trimming Mask */
#define SFR_UTMIHSTRIM_SLOPE2(value)          (SFR_UTMIHSTRIM_SLOPE2_Msk & (_UINT32_(value) << SFR_UTMIHSTRIM_SLOPE2_Pos)) /* Assignment of value for SLOPE2 in the SFR_UTMIHSTRIM register */
#define SFR_UTMIHSTRIM_Msk                    _UINT32_(0x00077700)                                 /* (SFR_UTMIHSTRIM) Register Mask  */


/* -------- SFR_UTMIFSTRIM : (SFR Offset: 0x2048) (R/W 32) UTMI Full-Speed Trimming Register -------- */
#define SFR_UTMIFSTRIM_RESETVALUE             _UINT32_(0x430211)                                   /*  (SFR_UTMIFSTRIM) UTMI Full-Speed Trimming Register  Reset Value */

#define SFR_UTMIFSTRIM_ZN_Pos                 _UINT32_(16)                                         /* (SFR_UTMIFSTRIM) FS Transceiver NMOS Impedance Trimming Position */
#define SFR_UTMIFSTRIM_ZN_Msk                 (_UINT32_(0x7) << SFR_UTMIFSTRIM_ZN_Pos)             /* (SFR_UTMIFSTRIM) FS Transceiver NMOS Impedance Trimming Mask */
#define SFR_UTMIFSTRIM_ZN(value)              (SFR_UTMIFSTRIM_ZN_Msk & (_UINT32_(value) << SFR_UTMIFSTRIM_ZN_Pos)) /* Assignment of value for ZN in the SFR_UTMIFSTRIM register */
#define SFR_UTMIFSTRIM_ZP_Pos                 _UINT32_(20)                                         /* (SFR_UTMIFSTRIM) FS Transceiver PMOS Impedance Trimming Position */
#define SFR_UTMIFSTRIM_ZP_Msk                 (_UINT32_(0x7) << SFR_UTMIFSTRIM_ZP_Pos)             /* (SFR_UTMIFSTRIM) FS Transceiver PMOS Impedance Trimming Mask */
#define SFR_UTMIFSTRIM_ZP(value)              (SFR_UTMIFSTRIM_ZP_Msk & (_UINT32_(value) << SFR_UTMIFSTRIM_ZP_Pos)) /* Assignment of value for ZP in the SFR_UTMIFSTRIM register */
#define SFR_UTMIFSTRIM_ZN_CAL_Pos             _UINT32_(24)                                         /* (SFR_UTMIFSTRIM) FS Transceiver NMOS Impedance Calibration Position */
#define SFR_UTMIFSTRIM_ZN_CAL_Msk             (_UINT32_(0x7) << SFR_UTMIFSTRIM_ZN_CAL_Pos)         /* (SFR_UTMIFSTRIM) FS Transceiver NMOS Impedance Calibration Mask */
#define SFR_UTMIFSTRIM_ZN_CAL(value)          (SFR_UTMIFSTRIM_ZN_CAL_Msk & (_UINT32_(value) << SFR_UTMIFSTRIM_ZN_CAL_Pos)) /* Assignment of value for ZN_CAL in the SFR_UTMIFSTRIM register */
#define SFR_UTMIFSTRIM_ZP_CAL_Pos             _UINT32_(28)                                         /* (SFR_UTMIFSTRIM) FS Transceiver PMOS Impedance Calibration Position */
#define SFR_UTMIFSTRIM_ZP_CAL_Msk             (_UINT32_(0x7) << SFR_UTMIFSTRIM_ZP_CAL_Pos)         /* (SFR_UTMIFSTRIM) FS Transceiver PMOS Impedance Calibration Mask */
#define SFR_UTMIFSTRIM_ZP_CAL(value)          (SFR_UTMIFSTRIM_ZP_CAL_Msk & (_UINT32_(value) << SFR_UTMIFSTRIM_ZP_CAL_Pos)) /* Assignment of value for ZP_CAL in the SFR_UTMIFSTRIM register */
#define SFR_UTMIFSTRIM_Msk                    _UINT32_(0x77770000)                                 /* (SFR_UTMIFSTRIM) Register Mask  */


/* -------- SFR_UTMISWAP : (SFR Offset: 0x204C) (R/W 32) UTMI DP/DM Pin Swapping Register -------- */
#define SFR_UTMISWAP_RESETVALUE               _UINT32_(0x00)                                       /*  (SFR_UTMISWAP) UTMI DP/DM Pin Swapping Register  Reset Value */

#define SFR_UTMISWAP_PORT0_Pos                _UINT32_(0)                                          /* (SFR_UTMISWAP) Port 0 DP/DM Pin Swapping Position */
#define SFR_UTMISWAP_PORT0_Msk                (_UINT32_(0x1) << SFR_UTMISWAP_PORT0_Pos)            /* (SFR_UTMISWAP) Port 0 DP/DM Pin Swapping Mask */
#define SFR_UTMISWAP_PORT0(value)             (SFR_UTMISWAP_PORT0_Msk & (_UINT32_(value) << SFR_UTMISWAP_PORT0_Pos)) /* Assignment of value for PORT0 in the SFR_UTMISWAP register */
#define   SFR_UTMISWAP_PORT0_NORMAL_Val       _UINT32_(0x0)                                        /* (SFR_UTMISWAP) DP/DM normal pinout  */
#define   SFR_UTMISWAP_PORT0_SWAPPED_Val      _UINT32_(0x1)                                        /* (SFR_UTMISWAP) DP/DM swapped pinout  */
#define SFR_UTMISWAP_PORT0_NORMAL             (SFR_UTMISWAP_PORT0_NORMAL_Val << SFR_UTMISWAP_PORT0_Pos) /* (SFR_UTMISWAP) DP/DM normal pinout Position */
#define SFR_UTMISWAP_PORT0_SWAPPED            (SFR_UTMISWAP_PORT0_SWAPPED_Val << SFR_UTMISWAP_PORT0_Pos) /* (SFR_UTMISWAP) DP/DM swapped pinout Position */
#define SFR_UTMISWAP_PORT1_Pos                _UINT32_(1)                                          /* (SFR_UTMISWAP) Port 1 DP/DM Pin Swapping Position */
#define SFR_UTMISWAP_PORT1_Msk                (_UINT32_(0x1) << SFR_UTMISWAP_PORT1_Pos)            /* (SFR_UTMISWAP) Port 1 DP/DM Pin Swapping Mask */
#define SFR_UTMISWAP_PORT1(value)             (SFR_UTMISWAP_PORT1_Msk & (_UINT32_(value) << SFR_UTMISWAP_PORT1_Pos)) /* Assignment of value for PORT1 in the SFR_UTMISWAP register */
#define   SFR_UTMISWAP_PORT1_NORMAL_Val       _UINT32_(0x0)                                        /* (SFR_UTMISWAP) DP/DM normal pinout  */
#define   SFR_UTMISWAP_PORT1_SWAPPED_Val      _UINT32_(0x1)                                        /* (SFR_UTMISWAP) DP/DM swapped pinout  */
#define SFR_UTMISWAP_PORT1_NORMAL             (SFR_UTMISWAP_PORT1_NORMAL_Val << SFR_UTMISWAP_PORT1_Pos) /* (SFR_UTMISWAP) DP/DM normal pinout Position */
#define SFR_UTMISWAP_PORT1_SWAPPED            (SFR_UTMISWAP_PORT1_SWAPPED_Val << SFR_UTMISWAP_PORT1_Pos) /* (SFR_UTMISWAP) DP/DM swapped pinout Position */
#define SFR_UTMISWAP_PORT2_Pos                _UINT32_(2)                                          /* (SFR_UTMISWAP) Port 2 DP/DM Pin Swapping Position */
#define SFR_UTMISWAP_PORT2_Msk                (_UINT32_(0x1) << SFR_UTMISWAP_PORT2_Pos)            /* (SFR_UTMISWAP) Port 2 DP/DM Pin Swapping Mask */
#define SFR_UTMISWAP_PORT2(value)             (SFR_UTMISWAP_PORT2_Msk & (_UINT32_(value) << SFR_UTMISWAP_PORT2_Pos)) /* Assignment of value for PORT2 in the SFR_UTMISWAP register */
#define   SFR_UTMISWAP_PORT2_NORMAL_Val       _UINT32_(0x0)                                        /* (SFR_UTMISWAP) DP/DM normal pinout  */
#define   SFR_UTMISWAP_PORT2_SWAPPED_Val      _UINT32_(0x1)                                        /* (SFR_UTMISWAP) DP/DM swapped pinout  */
#define SFR_UTMISWAP_PORT2_NORMAL             (SFR_UTMISWAP_PORT2_NORMAL_Val << SFR_UTMISWAP_PORT2_Pos) /* (SFR_UTMISWAP) DP/DM normal pinout Position */
#define SFR_UTMISWAP_PORT2_SWAPPED            (SFR_UTMISWAP_PORT2_SWAPPED_Val << SFR_UTMISWAP_PORT2_Pos) /* (SFR_UTMISWAP) DP/DM swapped pinout Position */
#define SFR_UTMISWAP_Msk                      _UINT32_(0x00000007)                                 /* (SFR_UTMISWAP) Register Mask  */

#define SFR_UTMISWAP_PORT_Pos                 _UINT32_(0)                                          /* (SFR_UTMISWAP Position) Port 2 DP/DM Pin Swapping */
#define SFR_UTMISWAP_PORT_Msk                 (_UINT32_(0x7) << SFR_UTMISWAP_PORT_Pos)             /* (SFR_UTMISWAP Mask) PORT */
#define SFR_UTMISWAP_PORT(value)              (SFR_UTMISWAP_PORT_Msk & (_UINT32_(value) << SFR_UTMISWAP_PORT_Pos)) 

/* -------- SFR_CLEAR_ONLY_SD_CFG : (SFR Offset: 0x2058) (R/W 32) Memory Clear-Only Shutdown Configuration Register -------- */
#define SFR_CLEAR_ONLY_SD_CFG_RESETVALUE      _UINT32_(0x00)                                       /*  (SFR_CLEAR_ONLY_SD_CFG) Memory Clear-Only Shutdown Configuration Register  Reset Value */

#define SFR_CLEAR_ONLY_SD_CFG_NFC_Pos         _UINT32_(0)                                          /* (SFR_CLEAR_ONLY_SD_CFG) Shutdown Control Clear for Memories in NFC Position */
#define SFR_CLEAR_ONLY_SD_CFG_NFC_Msk         (_UINT32_(0x1) << SFR_CLEAR_ONLY_SD_CFG_NFC_Pos)     /* (SFR_CLEAR_ONLY_SD_CFG) Shutdown Control Clear for Memories in NFC Mask */
#define SFR_CLEAR_ONLY_SD_CFG_NFC(value)      (SFR_CLEAR_ONLY_SD_CFG_NFC_Msk & (_UINT32_(value) << SFR_CLEAR_ONLY_SD_CFG_NFC_Pos)) /* Assignment of value for NFC in the SFR_CLEAR_ONLY_SD_CFG register */
#define SFR_CLEAR_ONLY_SD_CFG_ASRC_Pos        _UINT32_(4)                                          /* (SFR_CLEAR_ONLY_SD_CFG) Shutdown Control Clear for Memories in Asynchronous Sample Rate Controller Position */
#define SFR_CLEAR_ONLY_SD_CFG_ASRC_Msk        (_UINT32_(0x1) << SFR_CLEAR_ONLY_SD_CFG_ASRC_Pos)    /* (SFR_CLEAR_ONLY_SD_CFG) Shutdown Control Clear for Memories in Asynchronous Sample Rate Controller Mask */
#define SFR_CLEAR_ONLY_SD_CFG_ASRC(value)     (SFR_CLEAR_ONLY_SD_CFG_ASRC_Msk & (_UINT32_(value) << SFR_CLEAR_ONLY_SD_CFG_ASRC_Pos)) /* Assignment of value for ASRC in the SFR_CLEAR_ONLY_SD_CFG register */
#define SFR_CLEAR_ONLY_SD_CFG_UDDRC_Pos       _UINT32_(5)                                          /* (SFR_CLEAR_ONLY_SD_CFG) Shutdown Control Clear for Memories in DDR Controller Position */
#define SFR_CLEAR_ONLY_SD_CFG_UDDRC_Msk       (_UINT32_(0x1) << SFR_CLEAR_ONLY_SD_CFG_UDDRC_Pos)   /* (SFR_CLEAR_ONLY_SD_CFG) Shutdown Control Clear for Memories in DDR Controller Mask */
#define SFR_CLEAR_ONLY_SD_CFG_UDDRC(value)    (SFR_CLEAR_ONLY_SD_CFG_UDDRC_Msk & (_UINT32_(value) << SFR_CLEAR_ONLY_SD_CFG_UDDRC_Pos)) /* Assignment of value for UDDRC in the SFR_CLEAR_ONLY_SD_CFG register */
#define SFR_CLEAR_ONLY_SD_CFG_GPU2DC_Pos      _UINT32_(6)                                          /* (SFR_CLEAR_ONLY_SD_CFG) Shutdown Control Clear for Memories in GPU2DC Position */
#define SFR_CLEAR_ONLY_SD_CFG_GPU2DC_Msk      (_UINT32_(0x1) << SFR_CLEAR_ONLY_SD_CFG_GPU2DC_Pos)  /* (SFR_CLEAR_ONLY_SD_CFG) Shutdown Control Clear for Memories in GPU2DC Mask */
#define SFR_CLEAR_ONLY_SD_CFG_GPU2DC(value)   (SFR_CLEAR_ONLY_SD_CFG_GPU2DC_Msk & (_UINT32_(value) << SFR_CLEAR_ONLY_SD_CFG_GPU2DC_Pos)) /* Assignment of value for GPU2DC in the SFR_CLEAR_ONLY_SD_CFG register */
#define SFR_CLEAR_ONLY_SD_CFG_GMAC0_Pos       _UINT32_(7)                                          /* (SFR_CLEAR_ONLY_SD_CFG) Shutdown Control Clear for Memories in Ethernet MAC 0 Position */
#define SFR_CLEAR_ONLY_SD_CFG_GMAC0_Msk       (_UINT32_(0x1) << SFR_CLEAR_ONLY_SD_CFG_GMAC0_Pos)   /* (SFR_CLEAR_ONLY_SD_CFG) Shutdown Control Clear for Memories in Ethernet MAC 0 Mask */
#define SFR_CLEAR_ONLY_SD_CFG_GMAC0(value)    (SFR_CLEAR_ONLY_SD_CFG_GMAC0_Msk & (_UINT32_(value) << SFR_CLEAR_ONLY_SD_CFG_GMAC0_Pos)) /* Assignment of value for GMAC0 in the SFR_CLEAR_ONLY_SD_CFG register */
#define SFR_CLEAR_ONLY_SD_CFG_GMAC1_Pos       _UINT32_(8)                                          /* (SFR_CLEAR_ONLY_SD_CFG) Shutdown Control Clear for Memories in Ethernet MAC 1 Position */
#define SFR_CLEAR_ONLY_SD_CFG_GMAC1_Msk       (_UINT32_(0x1) << SFR_CLEAR_ONLY_SD_CFG_GMAC1_Pos)   /* (SFR_CLEAR_ONLY_SD_CFG) Shutdown Control Clear for Memories in Ethernet MAC 1 Mask */
#define SFR_CLEAR_ONLY_SD_CFG_GMAC1(value)    (SFR_CLEAR_ONLY_SD_CFG_GMAC1_Msk & (_UINT32_(value) << SFR_CLEAR_ONLY_SD_CFG_GMAC1_Pos)) /* Assignment of value for GMAC1 in the SFR_CLEAR_ONLY_SD_CFG register */
#define SFR_CLEAR_ONLY_SD_CFG_LCDC_Pos        _UINT32_(9)                                          /* (SFR_CLEAR_ONLY_SD_CFG) Shutdown Control Clear for Memories in LCD Controller Position */
#define SFR_CLEAR_ONLY_SD_CFG_LCDC_Msk        (_UINT32_(0x1) << SFR_CLEAR_ONLY_SD_CFG_LCDC_Pos)    /* (SFR_CLEAR_ONLY_SD_CFG) Shutdown Control Clear for Memories in LCD Controller Mask */
#define SFR_CLEAR_ONLY_SD_CFG_LCDC(value)     (SFR_CLEAR_ONLY_SD_CFG_LCDC_Msk & (_UINT32_(value) << SFR_CLEAR_ONLY_SD_CFG_LCDC_Pos)) /* Assignment of value for LCDC in the SFR_CLEAR_ONLY_SD_CFG register */
#define SFR_CLEAR_ONLY_SD_CFG_SDMMC0_Pos      _UINT32_(10)                                         /* (SFR_CLEAR_ONLY_SD_CFG) Shutdown Control Clear for Memories in SDMMC 0 Position */
#define SFR_CLEAR_ONLY_SD_CFG_SDMMC0_Msk      (_UINT32_(0x1) << SFR_CLEAR_ONLY_SD_CFG_SDMMC0_Pos)  /* (SFR_CLEAR_ONLY_SD_CFG) Shutdown Control Clear for Memories in SDMMC 0 Mask */
#define SFR_CLEAR_ONLY_SD_CFG_SDMMC0(value)   (SFR_CLEAR_ONLY_SD_CFG_SDMMC0_Msk & (_UINT32_(value) << SFR_CLEAR_ONLY_SD_CFG_SDMMC0_Pos)) /* Assignment of value for SDMMC0 in the SFR_CLEAR_ONLY_SD_CFG register */
#define SFR_CLEAR_ONLY_SD_CFG_SDMMC1_Pos      _UINT32_(11)                                         /* (SFR_CLEAR_ONLY_SD_CFG) Shutdown Control Clear for Memories in SDMMC 1 Position */
#define SFR_CLEAR_ONLY_SD_CFG_SDMMC1_Msk      (_UINT32_(0x1) << SFR_CLEAR_ONLY_SD_CFG_SDMMC1_Pos)  /* (SFR_CLEAR_ONLY_SD_CFG) Shutdown Control Clear for Memories in SDMMC 1 Mask */
#define SFR_CLEAR_ONLY_SD_CFG_SDMMC1(value)   (SFR_CLEAR_ONLY_SD_CFG_SDMMC1_Msk & (_UINT32_(value) << SFR_CLEAR_ONLY_SD_CFG_SDMMC1_Pos)) /* Assignment of value for SDMMC1 in the SFR_CLEAR_ONLY_SD_CFG register */
#define SFR_CLEAR_ONLY_SD_CFG_SDMMC2_Pos      _UINT32_(12)                                         /* (SFR_CLEAR_ONLY_SD_CFG) Shutdown Control Clear for Memories in SDMMC 2 Position */
#define SFR_CLEAR_ONLY_SD_CFG_SDMMC2_Msk      (_UINT32_(0x1) << SFR_CLEAR_ONLY_SD_CFG_SDMMC2_Pos)  /* (SFR_CLEAR_ONLY_SD_CFG) Shutdown Control Clear for Memories in SDMMC 2 Mask */
#define SFR_CLEAR_ONLY_SD_CFG_SDMMC2(value)   (SFR_CLEAR_ONLY_SD_CFG_SDMMC2_Msk & (_UINT32_(value) << SFR_CLEAR_ONLY_SD_CFG_SDMMC2_Pos)) /* Assignment of value for SDMMC2 in the SFR_CLEAR_ONLY_SD_CFG register */
#define SFR_CLEAR_ONLY_SD_CFG_UDPHSA_Pos      _UINT32_(13)                                         /* (SFR_CLEAR_ONLY_SD_CFG) Shutdown Control Clear for Memories in USB Device High-Speed Port A Position */
#define SFR_CLEAR_ONLY_SD_CFG_UDPHSA_Msk      (_UINT32_(0x1) << SFR_CLEAR_ONLY_SD_CFG_UDPHSA_Pos)  /* (SFR_CLEAR_ONLY_SD_CFG) Shutdown Control Clear for Memories in USB Device High-Speed Port A Mask */
#define SFR_CLEAR_ONLY_SD_CFG_UDPHSA(value)   (SFR_CLEAR_ONLY_SD_CFG_UDPHSA_Msk & (_UINT32_(value) << SFR_CLEAR_ONLY_SD_CFG_UDPHSA_Pos)) /* Assignment of value for UDPHSA in the SFR_CLEAR_ONLY_SD_CFG register */
#define SFR_CLEAR_ONLY_SD_CFG_UDPHSB_Pos      _UINT32_(14)                                         /* (SFR_CLEAR_ONLY_SD_CFG) Shutdown Control Clear for Memories in USB Device High-Speed Port B Position */
#define SFR_CLEAR_ONLY_SD_CFG_UDPHSB_Msk      (_UINT32_(0x1) << SFR_CLEAR_ONLY_SD_CFG_UDPHSB_Pos)  /* (SFR_CLEAR_ONLY_SD_CFG) Shutdown Control Clear for Memories in USB Device High-Speed Port B Mask */
#define SFR_CLEAR_ONLY_SD_CFG_UDPHSB(value)   (SFR_CLEAR_ONLY_SD_CFG_UDPHSB_Msk & (_UINT32_(value) << SFR_CLEAR_ONLY_SD_CFG_UDPHSB_Pos)) /* Assignment of value for UDPHSB in the SFR_CLEAR_ONLY_SD_CFG register */
#define SFR_CLEAR_ONLY_SD_CFG_EHCI_Pos        _UINT32_(15)                                         /* (SFR_CLEAR_ONLY_SD_CFG) Shutdown Control Clear for Memories in USB EHCI Position */
#define SFR_CLEAR_ONLY_SD_CFG_EHCI_Msk        (_UINT32_(0x1) << SFR_CLEAR_ONLY_SD_CFG_EHCI_Pos)    /* (SFR_CLEAR_ONLY_SD_CFG) Shutdown Control Clear for Memories in USB EHCI Mask */
#define SFR_CLEAR_ONLY_SD_CFG_EHCI(value)     (SFR_CLEAR_ONLY_SD_CFG_EHCI_Msk & (_UINT32_(value) << SFR_CLEAR_ONLY_SD_CFG_EHCI_Pos)) /* Assignment of value for EHCI in the SFR_CLEAR_ONLY_SD_CFG register */
#define SFR_CLEAR_ONLY_SD_CFG_DSI_Pos         _UINT32_(16)                                         /* (SFR_CLEAR_ONLY_SD_CFG) Shutdown Control Clear for Memories in MIPI DSI Position */
#define SFR_CLEAR_ONLY_SD_CFG_DSI_Msk         (_UINT32_(0x1) << SFR_CLEAR_ONLY_SD_CFG_DSI_Pos)     /* (SFR_CLEAR_ONLY_SD_CFG) Shutdown Control Clear for Memories in MIPI DSI Mask */
#define SFR_CLEAR_ONLY_SD_CFG_DSI(value)      (SFR_CLEAR_ONLY_SD_CFG_DSI_Msk & (_UINT32_(value) << SFR_CLEAR_ONLY_SD_CFG_DSI_Pos)) /* Assignment of value for DSI in the SFR_CLEAR_ONLY_SD_CFG register */
#define SFR_CLEAR_ONLY_SD_CFG_I3CC_Pos        _UINT32_(17)                                         /* (SFR_CLEAR_ONLY_SD_CFG) Shutdown Control Clear for Memories in I3C Controller Position */
#define SFR_CLEAR_ONLY_SD_CFG_I3CC_Msk        (_UINT32_(0x1) << SFR_CLEAR_ONLY_SD_CFG_I3CC_Pos)    /* (SFR_CLEAR_ONLY_SD_CFG) Shutdown Control Clear for Memories in I3C Controller Mask */
#define SFR_CLEAR_ONLY_SD_CFG_I3CC(value)     (SFR_CLEAR_ONLY_SD_CFG_I3CC_Msk & (_UINT32_(value) << SFR_CLEAR_ONLY_SD_CFG_I3CC_Pos)) /* Assignment of value for I3CC in the SFR_CLEAR_ONLY_SD_CFG register */
#define SFR_CLEAR_ONLY_SD_CFG_Msk             _UINT32_(0x0003FFF1)                                 /* (SFR_CLEAR_ONLY_SD_CFG) Register Mask  */

#define SFR_CLEAR_ONLY_SD_CFG_GMAC_Pos        _UINT32_(7)                                          /* (SFR_CLEAR_ONLY_SD_CFG Position) Shutdown Control Clear for Memories in Ethernet MAC x */
#define SFR_CLEAR_ONLY_SD_CFG_GMAC_Msk        (_UINT32_(0x3) << SFR_CLEAR_ONLY_SD_CFG_GMAC_Pos)    /* (SFR_CLEAR_ONLY_SD_CFG Mask) GMAC */
#define SFR_CLEAR_ONLY_SD_CFG_GMAC(value)     (SFR_CLEAR_ONLY_SD_CFG_GMAC_Msk & (_UINT32_(value) << SFR_CLEAR_ONLY_SD_CFG_GMAC_Pos)) 
#define SFR_CLEAR_ONLY_SD_CFG_SDMMC_Pos       _UINT32_(10)                                         /* (SFR_CLEAR_ONLY_SD_CFG Position) Shutdown Control Clear for Memories in SDMMC x */
#define SFR_CLEAR_ONLY_SD_CFG_SDMMC_Msk       (_UINT32_(0x7) << SFR_CLEAR_ONLY_SD_CFG_SDMMC_Pos)   /* (SFR_CLEAR_ONLY_SD_CFG Mask) SDMMC */
#define SFR_CLEAR_ONLY_SD_CFG_SDMMC(value)    (SFR_CLEAR_ONLY_SD_CFG_SDMMC_Msk & (_UINT32_(value) << SFR_CLEAR_ONLY_SD_CFG_SDMMC_Pos)) 

/* -------- SFR_DISABLE_SD_CFG : (SFR Offset: 0x205C) (R/W 32) Memory Disable Shutdown Configuration Register -------- */
#define SFR_DISABLE_SD_CFG_RESETVALUE         _UINT32_(0x00)                                       /*  (SFR_DISABLE_SD_CFG) Memory Disable Shutdown Configuration Register  Reset Value */

#define SFR_DISABLE_SD_CFG_NFC_Pos            _UINT32_(0)                                          /* (SFR_DISABLE_SD_CFG) Shutdown Control Disable for Memories in NFC Position */
#define SFR_DISABLE_SD_CFG_NFC_Msk            (_UINT32_(0x1) << SFR_DISABLE_SD_CFG_NFC_Pos)        /* (SFR_DISABLE_SD_CFG) Shutdown Control Disable for Memories in NFC Mask */
#define SFR_DISABLE_SD_CFG_NFC(value)         (SFR_DISABLE_SD_CFG_NFC_Msk & (_UINT32_(value) << SFR_DISABLE_SD_CFG_NFC_Pos)) /* Assignment of value for NFC in the SFR_DISABLE_SD_CFG register */
#define SFR_DISABLE_SD_CFG_ASRC_Pos           _UINT32_(4)                                          /* (SFR_DISABLE_SD_CFG) Shutdown Control Disable for Memories in Asynchronous Sample Rate Controller Position */
#define SFR_DISABLE_SD_CFG_ASRC_Msk           (_UINT32_(0x1) << SFR_DISABLE_SD_CFG_ASRC_Pos)       /* (SFR_DISABLE_SD_CFG) Shutdown Control Disable for Memories in Asynchronous Sample Rate Controller Mask */
#define SFR_DISABLE_SD_CFG_ASRC(value)        (SFR_DISABLE_SD_CFG_ASRC_Msk & (_UINT32_(value) << SFR_DISABLE_SD_CFG_ASRC_Pos)) /* Assignment of value for ASRC in the SFR_DISABLE_SD_CFG register */
#define SFR_DISABLE_SD_CFG_UDDRC_Pos          _UINT32_(5)                                          /* (SFR_DISABLE_SD_CFG) Shutdown Control Disable for Memories in DDR Controller Position */
#define SFR_DISABLE_SD_CFG_UDDRC_Msk          (_UINT32_(0x1) << SFR_DISABLE_SD_CFG_UDDRC_Pos)      /* (SFR_DISABLE_SD_CFG) Shutdown Control Disable for Memories in DDR Controller Mask */
#define SFR_DISABLE_SD_CFG_UDDRC(value)       (SFR_DISABLE_SD_CFG_UDDRC_Msk & (_UINT32_(value) << SFR_DISABLE_SD_CFG_UDDRC_Pos)) /* Assignment of value for UDDRC in the SFR_DISABLE_SD_CFG register */
#define SFR_DISABLE_SD_CFG_GPU2DC_Pos         _UINT32_(6)                                          /* (SFR_DISABLE_SD_CFG) Shutdown Control Disable for Memories in GPU2DC Position */
#define SFR_DISABLE_SD_CFG_GPU2DC_Msk         (_UINT32_(0x1) << SFR_DISABLE_SD_CFG_GPU2DC_Pos)     /* (SFR_DISABLE_SD_CFG) Shutdown Control Disable for Memories in GPU2DC Mask */
#define SFR_DISABLE_SD_CFG_GPU2DC(value)      (SFR_DISABLE_SD_CFG_GPU2DC_Msk & (_UINT32_(value) << SFR_DISABLE_SD_CFG_GPU2DC_Pos)) /* Assignment of value for GPU2DC in the SFR_DISABLE_SD_CFG register */
#define SFR_DISABLE_SD_CFG_GMAC0_Pos          _UINT32_(7)                                          /* (SFR_DISABLE_SD_CFG) Shutdown Control Disable for Memories in Ethernet MAC 0 Position */
#define SFR_DISABLE_SD_CFG_GMAC0_Msk          (_UINT32_(0x1) << SFR_DISABLE_SD_CFG_GMAC0_Pos)      /* (SFR_DISABLE_SD_CFG) Shutdown Control Disable for Memories in Ethernet MAC 0 Mask */
#define SFR_DISABLE_SD_CFG_GMAC0(value)       (SFR_DISABLE_SD_CFG_GMAC0_Msk & (_UINT32_(value) << SFR_DISABLE_SD_CFG_GMAC0_Pos)) /* Assignment of value for GMAC0 in the SFR_DISABLE_SD_CFG register */
#define SFR_DISABLE_SD_CFG_GMAC1_Pos          _UINT32_(8)                                          /* (SFR_DISABLE_SD_CFG) Shutdown Control Disable for Memories in Ethernet MAC 1 Position */
#define SFR_DISABLE_SD_CFG_GMAC1_Msk          (_UINT32_(0x1) << SFR_DISABLE_SD_CFG_GMAC1_Pos)      /* (SFR_DISABLE_SD_CFG) Shutdown Control Disable for Memories in Ethernet MAC 1 Mask */
#define SFR_DISABLE_SD_CFG_GMAC1(value)       (SFR_DISABLE_SD_CFG_GMAC1_Msk & (_UINT32_(value) << SFR_DISABLE_SD_CFG_GMAC1_Pos)) /* Assignment of value for GMAC1 in the SFR_DISABLE_SD_CFG register */
#define SFR_DISABLE_SD_CFG_LCDC_Pos           _UINT32_(9)                                          /* (SFR_DISABLE_SD_CFG) Shutdown Control Disable for Memories in LCD Controller Position */
#define SFR_DISABLE_SD_CFG_LCDC_Msk           (_UINT32_(0x1) << SFR_DISABLE_SD_CFG_LCDC_Pos)       /* (SFR_DISABLE_SD_CFG) Shutdown Control Disable for Memories in LCD Controller Mask */
#define SFR_DISABLE_SD_CFG_LCDC(value)        (SFR_DISABLE_SD_CFG_LCDC_Msk & (_UINT32_(value) << SFR_DISABLE_SD_CFG_LCDC_Pos)) /* Assignment of value for LCDC in the SFR_DISABLE_SD_CFG register */
#define SFR_DISABLE_SD_CFG_SDMMC0_Pos         _UINT32_(10)                                         /* (SFR_DISABLE_SD_CFG) Shutdown Control Disable for Memories in SDMMC 0 Position */
#define SFR_DISABLE_SD_CFG_SDMMC0_Msk         (_UINT32_(0x1) << SFR_DISABLE_SD_CFG_SDMMC0_Pos)     /* (SFR_DISABLE_SD_CFG) Shutdown Control Disable for Memories in SDMMC 0 Mask */
#define SFR_DISABLE_SD_CFG_SDMMC0(value)      (SFR_DISABLE_SD_CFG_SDMMC0_Msk & (_UINT32_(value) << SFR_DISABLE_SD_CFG_SDMMC0_Pos)) /* Assignment of value for SDMMC0 in the SFR_DISABLE_SD_CFG register */
#define SFR_DISABLE_SD_CFG_SDMMC1_Pos         _UINT32_(11)                                         /* (SFR_DISABLE_SD_CFG) Shutdown Control Disable for Memories in SDMMC 1 Position */
#define SFR_DISABLE_SD_CFG_SDMMC1_Msk         (_UINT32_(0x1) << SFR_DISABLE_SD_CFG_SDMMC1_Pos)     /* (SFR_DISABLE_SD_CFG) Shutdown Control Disable for Memories in SDMMC 1 Mask */
#define SFR_DISABLE_SD_CFG_SDMMC1(value)      (SFR_DISABLE_SD_CFG_SDMMC1_Msk & (_UINT32_(value) << SFR_DISABLE_SD_CFG_SDMMC1_Pos)) /* Assignment of value for SDMMC1 in the SFR_DISABLE_SD_CFG register */
#define SFR_DISABLE_SD_CFG_SDMMC2_Pos         _UINT32_(12)                                         /* (SFR_DISABLE_SD_CFG) Shutdown Control Disable for Memories in SDMMC 2 Position */
#define SFR_DISABLE_SD_CFG_SDMMC2_Msk         (_UINT32_(0x1) << SFR_DISABLE_SD_CFG_SDMMC2_Pos)     /* (SFR_DISABLE_SD_CFG) Shutdown Control Disable for Memories in SDMMC 2 Mask */
#define SFR_DISABLE_SD_CFG_SDMMC2(value)      (SFR_DISABLE_SD_CFG_SDMMC2_Msk & (_UINT32_(value) << SFR_DISABLE_SD_CFG_SDMMC2_Pos)) /* Assignment of value for SDMMC2 in the SFR_DISABLE_SD_CFG register */
#define SFR_DISABLE_SD_CFG_UDPHSA_Pos         _UINT32_(13)                                         /* (SFR_DISABLE_SD_CFG) Shutdown Control Disable for Memories in USB High-Speed Port A Position */
#define SFR_DISABLE_SD_CFG_UDPHSA_Msk         (_UINT32_(0x1) << SFR_DISABLE_SD_CFG_UDPHSA_Pos)     /* (SFR_DISABLE_SD_CFG) Shutdown Control Disable for Memories in USB High-Speed Port A Mask */
#define SFR_DISABLE_SD_CFG_UDPHSA(value)      (SFR_DISABLE_SD_CFG_UDPHSA_Msk & (_UINT32_(value) << SFR_DISABLE_SD_CFG_UDPHSA_Pos)) /* Assignment of value for UDPHSA in the SFR_DISABLE_SD_CFG register */
#define SFR_DISABLE_SD_CFG_UDPHSB_Pos         _UINT32_(14)                                         /* (SFR_DISABLE_SD_CFG) Shutdown Control Disable for Memories in USB Device High-Speed Port B Position */
#define SFR_DISABLE_SD_CFG_UDPHSB_Msk         (_UINT32_(0x1) << SFR_DISABLE_SD_CFG_UDPHSB_Pos)     /* (SFR_DISABLE_SD_CFG) Shutdown Control Disable for Memories in USB Device High-Speed Port B Mask */
#define SFR_DISABLE_SD_CFG_UDPHSB(value)      (SFR_DISABLE_SD_CFG_UDPHSB_Msk & (_UINT32_(value) << SFR_DISABLE_SD_CFG_UDPHSB_Pos)) /* Assignment of value for UDPHSB in the SFR_DISABLE_SD_CFG register */
#define SFR_DISABLE_SD_CFG_EHCI_Pos           _UINT32_(15)                                         /* (SFR_DISABLE_SD_CFG) Shutdown Control Disable for Memories in USB EHCI Position */
#define SFR_DISABLE_SD_CFG_EHCI_Msk           (_UINT32_(0x1) << SFR_DISABLE_SD_CFG_EHCI_Pos)       /* (SFR_DISABLE_SD_CFG) Shutdown Control Disable for Memories in USB EHCI Mask */
#define SFR_DISABLE_SD_CFG_EHCI(value)        (SFR_DISABLE_SD_CFG_EHCI_Msk & (_UINT32_(value) << SFR_DISABLE_SD_CFG_EHCI_Pos)) /* Assignment of value for EHCI in the SFR_DISABLE_SD_CFG register */
#define SFR_DISABLE_SD_CFG_DSI_Pos            _UINT32_(16)                                         /* (SFR_DISABLE_SD_CFG) Shutdown Control Disable for Memories in MIPI DSI Position */
#define SFR_DISABLE_SD_CFG_DSI_Msk            (_UINT32_(0x1) << SFR_DISABLE_SD_CFG_DSI_Pos)        /* (SFR_DISABLE_SD_CFG) Shutdown Control Disable for Memories in MIPI DSI Mask */
#define SFR_DISABLE_SD_CFG_DSI(value)         (SFR_DISABLE_SD_CFG_DSI_Msk & (_UINT32_(value) << SFR_DISABLE_SD_CFG_DSI_Pos)) /* Assignment of value for DSI in the SFR_DISABLE_SD_CFG register */
#define SFR_DISABLE_SD_CFG_I3CC_Pos           _UINT32_(17)                                         /* (SFR_DISABLE_SD_CFG) Shutdown Control Disable for Memories in I3C Controller Position */
#define SFR_DISABLE_SD_CFG_I3CC_Msk           (_UINT32_(0x1) << SFR_DISABLE_SD_CFG_I3CC_Pos)       /* (SFR_DISABLE_SD_CFG) Shutdown Control Disable for Memories in I3C Controller Mask */
#define SFR_DISABLE_SD_CFG_I3CC(value)        (SFR_DISABLE_SD_CFG_I3CC_Msk & (_UINT32_(value) << SFR_DISABLE_SD_CFG_I3CC_Pos)) /* Assignment of value for I3CC in the SFR_DISABLE_SD_CFG register */
#define SFR_DISABLE_SD_CFG_Msk                _UINT32_(0x0003FFF1)                                 /* (SFR_DISABLE_SD_CFG) Register Mask  */

#define SFR_DISABLE_SD_CFG_GMAC_Pos           _UINT32_(7)                                          /* (SFR_DISABLE_SD_CFG Position) Shutdown Control Disable for Memories in Ethernet MAC x */
#define SFR_DISABLE_SD_CFG_GMAC_Msk           (_UINT32_(0x3) << SFR_DISABLE_SD_CFG_GMAC_Pos)       /* (SFR_DISABLE_SD_CFG Mask) GMAC */
#define SFR_DISABLE_SD_CFG_GMAC(value)        (SFR_DISABLE_SD_CFG_GMAC_Msk & (_UINT32_(value) << SFR_DISABLE_SD_CFG_GMAC_Pos)) 
#define SFR_DISABLE_SD_CFG_SDMMC_Pos          _UINT32_(10)                                         /* (SFR_DISABLE_SD_CFG Position) Shutdown Control Disable for Memories in SDMMC x */
#define SFR_DISABLE_SD_CFG_SDMMC_Msk          (_UINT32_(0x7) << SFR_DISABLE_SD_CFG_SDMMC_Pos)      /* (SFR_DISABLE_SD_CFG Mask) SDMMC */
#define SFR_DISABLE_SD_CFG_SDMMC(value)       (SFR_DISABLE_SD_CFG_SDMMC_Msk & (_UINT32_(value) << SFR_DISABLE_SD_CFG_SDMMC_Pos)) 

/* -------- SFR_MEMPOWER : (SFR Offset: 0x2060) (R/W 32) Memory Power Mode Register -------- */
#define SFR_MEMPOWER_RESETVALUE               _UINT32_(0x01)                                       /*  (SFR_MEMPOWER) Memory Power Mode Register  Reset Value */

#define SFR_MEMPOWER_POWG_DIS_Pos             _UINT32_(0)                                          /* (SFR_MEMPOWER) Automatic Memory Power Gating Disable for ULP1 Mode Position */
#define SFR_MEMPOWER_POWG_DIS_Msk             (_UINT32_(0x1) << SFR_MEMPOWER_POWG_DIS_Pos)         /* (SFR_MEMPOWER) Automatic Memory Power Gating Disable for ULP1 Mode Mask */
#define SFR_MEMPOWER_POWG_DIS(value)          (SFR_MEMPOWER_POWG_DIS_Msk & (_UINT32_(value) << SFR_MEMPOWER_POWG_DIS_Pos)) /* Assignment of value for POWG_DIS in the SFR_MEMPOWER register */
#define   SFR_MEMPOWER_POWG_DIS_0_Val         _UINT32_(0x0)                                        /* (SFR_MEMPOWER) Automatic memory power gating is enabled.  */
#define   SFR_MEMPOWER_POWG_DIS_1_Val         _UINT32_(0x1)                                        /* (SFR_MEMPOWER) Automatic memory power gating is disabled.  */
#define SFR_MEMPOWER_POWG_DIS_0               (SFR_MEMPOWER_POWG_DIS_0_Val << SFR_MEMPOWER_POWG_DIS_Pos) /* (SFR_MEMPOWER) Automatic memory power gating is enabled. Position */
#define SFR_MEMPOWER_POWG_DIS_1               (SFR_MEMPOWER_POWG_DIS_1_Val << SFR_MEMPOWER_POWG_DIS_Pos) /* (SFR_MEMPOWER) Automatic memory power gating is disabled. Position */
#define SFR_MEMPOWER_DEEPSLEEP_Pos            _UINT32_(1)                                          /* (SFR_MEMPOWER) Automatic Memory Deep Sleep Mode for ULP1 Mode Position */
#define SFR_MEMPOWER_DEEPSLEEP_Msk            (_UINT32_(0x1) << SFR_MEMPOWER_DEEPSLEEP_Pos)        /* (SFR_MEMPOWER) Automatic Memory Deep Sleep Mode for ULP1 Mode Mask */
#define SFR_MEMPOWER_DEEPSLEEP(value)         (SFR_MEMPOWER_DEEPSLEEP_Msk & (_UINT32_(value) << SFR_MEMPOWER_DEEPSLEEP_Pos)) /* Assignment of value for DEEPSLEEP in the SFR_MEMPOWER register */
#define   SFR_MEMPOWER_DEEPSLEEP_0_Val        _UINT32_(0x0)                                        /* (SFR_MEMPOWER) Memory Deep Sleep mode is disabled (Light Sleep mode is enabled).  */
#define   SFR_MEMPOWER_DEEPSLEEP_1_Val        _UINT32_(0x1)                                        /* (SFR_MEMPOWER) Memory Deep Sleep mode is enabled.  */
#define SFR_MEMPOWER_DEEPSLEEP_0              (SFR_MEMPOWER_DEEPSLEEP_0_Val << SFR_MEMPOWER_DEEPSLEEP_Pos) /* (SFR_MEMPOWER) Memory Deep Sleep mode is disabled (Light Sleep mode is enabled). Position */
#define SFR_MEMPOWER_DEEPSLEEP_1              (SFR_MEMPOWER_DEEPSLEEP_1_Val << SFR_MEMPOWER_DEEPSLEEP_Pos) /* (SFR_MEMPOWER) Memory Deep Sleep mode is enabled. Position */
#define SFR_MEMPOWER_Msk                      _UINT32_(0x00000003)                                 /* (SFR_MEMPOWER) Register Mask  */


/* -------- SFR_PUFCTL : (SFR Offset: 0x2200) (R/W 32) PUFSRAM Domain Control Register -------- */
#define SFR_PUFCTL_RESETVALUE                 _UINT32_(0x148)                                      /*  (SFR_PUFCTL) PUFSRAM Domain Control Register  Reset Value */

#define SFR_PUFCTL_PONOFFM_Pos                _UINT32_(0)                                          /* (SFR_PUFCTL) PUFSRAM Power Switches Controlled Manually Position */
#define SFR_PUFCTL_PONOFFM_Msk                (_UINT32_(0x1) << SFR_PUFCTL_PONOFFM_Pos)            /* (SFR_PUFCTL) PUFSRAM Power Switches Controlled Manually Mask */
#define SFR_PUFCTL_PONOFFM(value)             (SFR_PUFCTL_PONOFFM_Msk & (_UINT32_(value) << SFR_PUFCTL_PONOFFM_Pos)) /* Assignment of value for PONOFFM in the SFR_PUFCTL register */
#define   SFR_PUFCTL_PONOFFM_0_Val            _UINT32_(0x0)                                        /* (SFR_PUFCTL) Power switches are automatically controlled by SYSC at start-up.  */
#define   SFR_PUFCTL_PONOFFM_1_Val            _UINT32_(0x1)                                        /* (SFR_PUFCTL) Power switches are manually controlled by the PONOFFLZ and PONOFFHZ bits.  */
#define SFR_PUFCTL_PONOFFM_0                  (SFR_PUFCTL_PONOFFM_0_Val << SFR_PUFCTL_PONOFFM_Pos) /* (SFR_PUFCTL) Power switches are automatically controlled by SYSC at start-up. Position */
#define SFR_PUFCTL_PONOFFM_1                  (SFR_PUFCTL_PONOFFM_1_Val << SFR_PUFCTL_PONOFFM_Pos) /* (SFR_PUFCTL) Power switches are manually controlled by the PONOFFLZ and PONOFFHZ bits. Position */
#define SFR_PUFCTL_PONOFFHZ_Pos               _UINT32_(1)                                          /* (SFR_PUFCTL) Controls Power Switch HiZ if PONOFFM=1 Position */
#define SFR_PUFCTL_PONOFFHZ_Msk               (_UINT32_(0x1) << SFR_PUFCTL_PONOFFHZ_Pos)           /* (SFR_PUFCTL) Controls Power Switch HiZ if PONOFFM=1 Mask */
#define SFR_PUFCTL_PONOFFHZ(value)            (SFR_PUFCTL_PONOFFHZ_Msk & (_UINT32_(value) << SFR_PUFCTL_PONOFFHZ_Pos)) /* Assignment of value for PONOFFHZ in the SFR_PUFCTL register */
#define   SFR_PUFCTL_PONOFFHZ_0_Val           _UINT32_(0x0)                                        /* (SFR_PUFCTL) Power switch HiZ is off.  */
#define   SFR_PUFCTL_PONOFFHZ_1_Val           _UINT32_(0x1)                                        /* (SFR_PUFCTL) Power switch HiZ is on.  */
#define SFR_PUFCTL_PONOFFHZ_0                 (SFR_PUFCTL_PONOFFHZ_0_Val << SFR_PUFCTL_PONOFFHZ_Pos) /* (SFR_PUFCTL) Power switch HiZ is off. Position */
#define SFR_PUFCTL_PONOFFHZ_1                 (SFR_PUFCTL_PONOFFHZ_1_Val << SFR_PUFCTL_PONOFFHZ_Pos) /* (SFR_PUFCTL) Power switch HiZ is on. Position */
#define SFR_PUFCTL_PONOFFLZ_Pos               _UINT32_(2)                                          /* (SFR_PUFCTL) Controls Power Switch LoZ if PONOFFM=1 Position */
#define SFR_PUFCTL_PONOFFLZ_Msk               (_UINT32_(0x1) << SFR_PUFCTL_PONOFFLZ_Pos)           /* (SFR_PUFCTL) Controls Power Switch LoZ if PONOFFM=1 Mask */
#define SFR_PUFCTL_PONOFFLZ(value)            (SFR_PUFCTL_PONOFFLZ_Msk & (_UINT32_(value) << SFR_PUFCTL_PONOFFLZ_Pos)) /* Assignment of value for PONOFFLZ in the SFR_PUFCTL register */
#define   SFR_PUFCTL_PONOFFLZ_0_Val           _UINT32_(0x0)                                        /* (SFR_PUFCTL) Power switch LoZ is off.  */
#define   SFR_PUFCTL_PONOFFLZ_1_Val           _UINT32_(0x1)                                        /* (SFR_PUFCTL) Power switch LoZ is on.  */
#define SFR_PUFCTL_PONOFFLZ_0                 (SFR_PUFCTL_PONOFFLZ_0_Val << SFR_PUFCTL_PONOFFLZ_Pos) /* (SFR_PUFCTL) Power switch LoZ is off. Position */
#define SFR_PUFCTL_PONOFFLZ_1                 (SFR_PUFCTL_PONOFFLZ_1_Val << SFR_PUFCTL_PONOFFLZ_Pos) /* (SFR_PUFCTL) Power switch LoZ is on. Position */
#define SFR_PUFCTL_PUFRST_Pos                 _UINT32_(3)                                          /* (SFR_PUFCTL) PUF Reset Position */
#define SFR_PUFCTL_PUFRST_Msk                 (_UINT32_(0x1) << SFR_PUFCTL_PUFRST_Pos)             /* (SFR_PUFCTL) PUF Reset Mask */
#define SFR_PUFCTL_PUFRST(value)              (SFR_PUFCTL_PUFRST_Msk & (_UINT32_(value) << SFR_PUFCTL_PUFRST_Pos)) /* Assignment of value for PUFRST in the SFR_PUFCTL register */
#define   SFR_PUFCTL_PUFRST_0_Val             _UINT32_(0x0)                                        /* (SFR_PUFCTL) PUF is active.  */
#define   SFR_PUFCTL_PUFRST_1_Val             _UINT32_(0x1)                                        /* (SFR_PUFCTL) PUF is in Reset mode.  */
#define SFR_PUFCTL_PUFRST_0                   (SFR_PUFCTL_PUFRST_0_Val << SFR_PUFCTL_PUFRST_Pos)   /* (SFR_PUFCTL) PUF is active. Position */
#define SFR_PUFCTL_PUFRST_1                   (SFR_PUFCTL_PUFRST_1_Val << SFR_PUFCTL_PUFRST_Pos)   /* (SFR_PUFCTL) PUF is in Reset mode. Position */
#define SFR_PUFCTL_PUFDIS_Pos                 _UINT32_(4)                                          /* (SFR_PUFCTL) PUF Disable Position */
#define SFR_PUFCTL_PUFDIS_Msk                 (_UINT32_(0x1) << SFR_PUFCTL_PUFDIS_Pos)             /* (SFR_PUFCTL) PUF Disable Mask */
#define SFR_PUFCTL_PUFDIS(value)              (SFR_PUFCTL_PUFDIS_Msk & (_UINT32_(value) << SFR_PUFCTL_PUFDIS_Pos)) /* Assignment of value for PUFDIS in the SFR_PUFCTL register */
#define   SFR_PUFCTL_PUFDIS_0_Val             _UINT32_(0x0)                                        /* (SFR_PUFCTL) No effect  */
#define   SFR_PUFCTL_PUFDIS_1_Val             _UINT32_(0x1)                                        /* (SFR_PUFCTL) PUF clock and access to the PUF are disabled by hardware and PUFSRAM domain is off.  */
#define SFR_PUFCTL_PUFDIS_0                   (SFR_PUFCTL_PUFDIS_0_Val << SFR_PUFCTL_PUFDIS_Pos)   /* (SFR_PUFCTL) No effect Position */
#define SFR_PUFCTL_PUFDIS_1                   (SFR_PUFCTL_PUFDIS_1_Val << SFR_PUFCTL_PUFDIS_Pos)   /* (SFR_PUFCTL) PUF clock and access to the PUF are disabled by hardware and PUFSRAM domain is off. Position */
#define SFR_PUFCTL_PUFLTM_Pos                 _UINT32_(5)                                          /* (SFR_PUFCTL) PUF Lab Test Mode Position */
#define SFR_PUFCTL_PUFLTM_Msk                 (_UINT32_(0x1) << SFR_PUFCTL_PUFLTM_Pos)             /* (SFR_PUFCTL) PUF Lab Test Mode Mask */
#define SFR_PUFCTL_PUFLTM(value)              (SFR_PUFCTL_PUFLTM_Msk & (_UINT32_(value) << SFR_PUFCTL_PUFLTM_Pos)) /* Assignment of value for PUFLTM in the SFR_PUFCTL register */
#define   SFR_PUFCTL_PUFLTM_0_Val             _UINT32_(0x0)                                        /* (SFR_PUFCTL) No effect  */
#define   SFR_PUFCTL_PUFLTM_1_Val             _UINT32_(0x1)                                        /* (SFR_PUFCTL) Enters Test mode when PUFRST=0.  */
#define SFR_PUFCTL_PUFLTM_0                   (SFR_PUFCTL_PUFLTM_0_Val << SFR_PUFCTL_PUFLTM_Pos)   /* (SFR_PUFCTL) No effect Position */
#define SFR_PUFCTL_PUFLTM_1                   (SFR_PUFCTL_PUFLTM_1_Val << SFR_PUFCTL_PUFLTM_Pos)   /* (SFR_PUFCTL) Enters Test mode when PUFRST=0. Position */
#define SFR_PUFCTL_ALWAYSONE_Pos              _UINT32_(6)                                          /* (SFR_PUFCTL) Must always be programmed to 1 Position */
#define SFR_PUFCTL_ALWAYSONE_Msk              (_UINT32_(0x1) << SFR_PUFCTL_ALWAYSONE_Pos)          /* (SFR_PUFCTL) Must always be programmed to 1 Mask */
#define SFR_PUFCTL_ALWAYSONE(value)           (SFR_PUFCTL_ALWAYSONE_Msk & (_UINT32_(value) << SFR_PUFCTL_ALWAYSONE_Pos)) /* Assignment of value for ALWAYSONE in the SFR_PUFCTL register */
#define SFR_PUFCTL_PLG_Pos                    _UINT32_(8)                                          /* (SFR_PUFCTL) PUFSRAM Power Low Status (read-only) Position */
#define SFR_PUFCTL_PLG_Msk                    (_UINT32_(0x1) << SFR_PUFCTL_PLG_Pos)                /* (SFR_PUFCTL) PUFSRAM Power Low Status (read-only) Mask */
#define SFR_PUFCTL_PLG(value)                 (SFR_PUFCTL_PLG_Msk & (_UINT32_(value) << SFR_PUFCTL_PLG_Pos)) /* Assignment of value for PLG in the SFR_PUFCTL register */
#define   SFR_PUFCTL_PLG_0_Val                _UINT32_(0x0)                                        /* (SFR_PUFCTL) PUFSRAM domain is powered.  */
#define   SFR_PUFCTL_PLG_1_Val                _UINT32_(0x1)                                        /* (SFR_PUFCTL) PUFSRAM domain is not powered.  */
#define SFR_PUFCTL_PLG_0                      (SFR_PUFCTL_PLG_0_Val << SFR_PUFCTL_PLG_Pos)         /* (SFR_PUFCTL) PUFSRAM domain is powered. Position */
#define SFR_PUFCTL_PLG_1                      (SFR_PUFCTL_PLG_1_Val << SFR_PUFCTL_PLG_Pos)         /* (SFR_PUFCTL) PUFSRAM domain is not powered. Position */
#define SFR_PUFCTL_PHG_Pos                    _UINT32_(9)                                          /* (SFR_PUFCTL) PUFSRAM Power High Status (read-only) Position */
#define SFR_PUFCTL_PHG_Msk                    (_UINT32_(0x1) << SFR_PUFCTL_PHG_Pos)                /* (SFR_PUFCTL) PUFSRAM Power High Status (read-only) Mask */
#define SFR_PUFCTL_PHG(value)                 (SFR_PUFCTL_PHG_Msk & (_UINT32_(value) << SFR_PUFCTL_PHG_Pos)) /* Assignment of value for PHG in the SFR_PUFCTL register */
#define   SFR_PUFCTL_PHG_0_Val                _UINT32_(0x0)                                        /* (SFR_PUFCTL) PUFSRAM domain is not powered.  */
#define   SFR_PUFCTL_PHG_1_Val                _UINT32_(0x1)                                        /* (SFR_PUFCTL) PUFSRAM domain is powered.  */
#define SFR_PUFCTL_PHG_0                      (SFR_PUFCTL_PHG_0_Val << SFR_PUFCTL_PHG_Pos)         /* (SFR_PUFCTL) PUFSRAM domain is not powered. Position */
#define SFR_PUFCTL_PHG_1                      (SFR_PUFCTL_PHG_1_Val << SFR_PUFCTL_PHG_Pos)         /* (SFR_PUFCTL) PUFSRAM domain is powered. Position */
#define SFR_PUFCTL_Msk                        _UINT32_(0x0000037F)                                 /* (SFR_PUFCTL) Register Mask  */


/* -------- SFR_PUFDIS : (SFR Offset: 0x2208) (R/W 32) PUF Disable Functions Register -------- */
#define SFR_PUFDIS_RESETVALUE                 _UINT32_(0x00)                                       /*  (SFR_PUFDIS) PUF Disable Functions Register  Reset Value */

#define SFR_PUFDIS_ENROLL_Pos                 _UINT32_(0)                                          /* (SFR_PUFDIS) Enroll Operation Position */
#define SFR_PUFDIS_ENROLL_Msk                 (_UINT32_(0x1) << SFR_PUFDIS_ENROLL_Pos)             /* (SFR_PUFDIS) Enroll Operation Mask */
#define SFR_PUFDIS_ENROLL(value)              (SFR_PUFDIS_ENROLL_Msk & (_UINT32_(value) << SFR_PUFDIS_ENROLL_Pos)) /* Assignment of value for ENROLL in the SFR_PUFDIS register */
#define SFR_PUFDIS_GENERATE_RANDOM_Pos        _UINT32_(1)                                          /* (SFR_PUFDIS) Generate Random Operation Position */
#define SFR_PUFDIS_GENERATE_RANDOM_Msk        (_UINT32_(0x1) << SFR_PUFDIS_GENERATE_RANDOM_Pos)    /* (SFR_PUFDIS) Generate Random Operation Mask */
#define SFR_PUFDIS_GENERATE_RANDOM(value)     (SFR_PUFDIS_GENERATE_RANDOM_Msk & (_UINT32_(value) << SFR_PUFDIS_GENERATE_RANDOM_Pos)) /* Assignment of value for GENERATE_RANDOM in the SFR_PUFDIS register */
#define SFR_PUFDIS_GET_KEY_Pos                _UINT32_(2)                                          /* (SFR_PUFDIS) Get Key Operation Position */
#define SFR_PUFDIS_GET_KEY_Msk                (_UINT32_(0x1) << SFR_PUFDIS_GET_KEY_Pos)            /* (SFR_PUFDIS) Get Key Operation Mask */
#define SFR_PUFDIS_GET_KEY(value)             (SFR_PUFDIS_GET_KEY_Msk & (_UINT32_(value) << SFR_PUFDIS_GET_KEY_Pos)) /* Assignment of value for GET_KEY in the SFR_PUFDIS register */
#define SFR_PUFDIS_START_Pos                  _UINT32_(3)                                          /* (SFR_PUFDIS) Start Operation Position */
#define SFR_PUFDIS_START_Msk                  (_UINT32_(0x1) << SFR_PUFDIS_START_Pos)              /* (SFR_PUFDIS) Start Operation Mask */
#define SFR_PUFDIS_START(value)               (SFR_PUFDIS_START_Msk & (_UINT32_(value) << SFR_PUFDIS_START_Pos)) /* Assignment of value for START in the SFR_PUFDIS register */
#define SFR_PUFDIS_STOP_Pos                   _UINT32_(4)                                          /* (SFR_PUFDIS) Stop Operation Position */
#define SFR_PUFDIS_STOP_Msk                   (_UINT32_(0x1) << SFR_PUFDIS_STOP_Pos)               /* (SFR_PUFDIS) Stop Operation Mask */
#define SFR_PUFDIS_STOP(value)                (SFR_PUFDIS_STOP_Msk & (_UINT32_(value) << SFR_PUFDIS_STOP_Pos)) /* Assignment of value for STOP in the SFR_PUFDIS register */
#define SFR_PUFDIS_TEST_PUF_Pos               _UINT32_(5)                                          /* (SFR_PUFDIS) Test PUF Operation Position */
#define SFR_PUFDIS_TEST_PUF_Msk               (_UINT32_(0x1) << SFR_PUFDIS_TEST_PUF_Pos)           /* (SFR_PUFDIS) Test PUF Operation Mask */
#define SFR_PUFDIS_TEST_PUF(value)            (SFR_PUFDIS_TEST_PUF_Msk & (_UINT32_(value) << SFR_PUFDIS_TEST_PUF_Pos)) /* Assignment of value for TEST_PUF in the SFR_PUFDIS register */
#define SFR_PUFDIS_UNWRAP_Pos                 _UINT32_(6)                                          /* (SFR_PUFDIS) Unwrap Operation Position */
#define SFR_PUFDIS_UNWRAP_Msk                 (_UINT32_(0x1) << SFR_PUFDIS_UNWRAP_Pos)             /* (SFR_PUFDIS) Unwrap Operation Mask */
#define SFR_PUFDIS_UNWRAP(value)              (SFR_PUFDIS_UNWRAP_Msk & (_UINT32_(value) << SFR_PUFDIS_UNWRAP_Pos)) /* Assignment of value for UNWRAP in the SFR_PUFDIS register */
#define SFR_PUFDIS_WRAP_Pos                   _UINT32_(7)                                          /* (SFR_PUFDIS) Wrap Operation Position */
#define SFR_PUFDIS_WRAP_Msk                   (_UINT32_(0x1) << SFR_PUFDIS_WRAP_Pos)               /* (SFR_PUFDIS) Wrap Operation Mask */
#define SFR_PUFDIS_WRAP(value)                (SFR_PUFDIS_WRAP_Msk & (_UINT32_(value) << SFR_PUFDIS_WRAP_Pos)) /* Assignment of value for WRAP in the SFR_PUFDIS register */
#define SFR_PUFDIS_WRAP_GENERATED_RANDOM_Pos  _UINT32_(8)                                          /* (SFR_PUFDIS) Wrap Generated Random Operation Position */
#define SFR_PUFDIS_WRAP_GENERATED_RANDOM_Msk  (_UINT32_(0x1) << SFR_PUFDIS_WRAP_GENERATED_RANDOM_Pos) /* (SFR_PUFDIS) Wrap Generated Random Operation Mask */
#define SFR_PUFDIS_WRAP_GENERATED_RANDOM(value) (SFR_PUFDIS_WRAP_GENERATED_RANDOM_Msk & (_UINT32_(value) << SFR_PUFDIS_WRAP_GENERATED_RANDOM_Pos)) /* Assignment of value for WRAP_GENERATED_RANDOM in the SFR_PUFDIS register */
#define SFR_PUFDIS_RECONSTRUCT_Pos            _UINT32_(9)                                          /* (SFR_PUFDIS) Reconstruct Operation Position */
#define SFR_PUFDIS_RECONSTRUCT_Msk            (_UINT32_(0x1) << SFR_PUFDIS_RECONSTRUCT_Pos)        /* (SFR_PUFDIS) Reconstruct Operation Mask */
#define SFR_PUFDIS_RECONSTRUCT(value)         (SFR_PUFDIS_RECONSTRUCT_Msk & (_UINT32_(value) << SFR_PUFDIS_RECONSTRUCT_Pos)) /* Assignment of value for RECONSTRUCT in the SFR_PUFDIS register */
#define SFR_PUFDIS_TEST_MEMORY_Pos            _UINT32_(10)                                         /* (SFR_PUFDIS) Test Memory Operation Position */
#define SFR_PUFDIS_TEST_MEMORY_Msk            (_UINT32_(0x1) << SFR_PUFDIS_TEST_MEMORY_Pos)        /* (SFR_PUFDIS) Test Memory Operation Mask */
#define SFR_PUFDIS_TEST_MEMORY(value)         (SFR_PUFDIS_TEST_MEMORY_Msk & (_UINT32_(value) << SFR_PUFDIS_TEST_MEMORY_Pos)) /* Assignment of value for TEST_MEMORY in the SFR_PUFDIS register */
#define SFR_PUFDIS_LAB_TEST_MODE_Pos          _UINT32_(11)                                         /* (SFR_PUFDIS) Lab Test Mode Operation Position */
#define SFR_PUFDIS_LAB_TEST_MODE_Msk          (_UINT32_(0x1) << SFR_PUFDIS_LAB_TEST_MODE_Pos)      /* (SFR_PUFDIS) Lab Test Mode Operation Mask */
#define SFR_PUFDIS_LAB_TEST_MODE(value)       (SFR_PUFDIS_LAB_TEST_MODE_Msk & (_UINT32_(value) << SFR_PUFDIS_LAB_TEST_MODE_Pos)) /* Assignment of value for LAB_TEST_MODE in the SFR_PUFDIS register */
#define SFR_PUFDIS_RESEED_Pos                 _UINT32_(12)                                         /* (SFR_PUFDIS) Reseed Operation Position */
#define SFR_PUFDIS_RESEED_Msk                 (_UINT32_(0x1) << SFR_PUFDIS_RESEED_Pos)             /* (SFR_PUFDIS) Reseed Operation Mask */
#define SFR_PUFDIS_RESEED(value)              (SFR_PUFDIS_RESEED_Msk & (_UINT32_(value) << SFR_PUFDIS_RESEED_Pos)) /* Assignment of value for RESEED in the SFR_PUFDIS register */
#define SFR_PUFDIS_Msk                        _UINT32_(0x00001FFF)                                 /* (SFR_PUFDIS) Register Mask  */


/* -------- SFR_PUFRUCR : (SFR Offset: 0x220C) (R/W 32) PUF Restrict User Context x Register -------- */
#define SFR_PUFRUCR_RESETVALUE                _UINT32_(0x00)                                       /*  (SFR_PUFRUCR) PUF Restrict User Context x Register  Reset Value */

#define SFR_PUFRUCR_RESTRICT_USER_CONTEXT_Pos _UINT32_(0)                                          /* (SFR_PUFRUCR) Restrict User Context Position */
#define SFR_PUFRUCR_RESTRICT_USER_CONTEXT_Msk (_UINT32_(0xFFFFFFFF) << SFR_PUFRUCR_RESTRICT_USER_CONTEXT_Pos) /* (SFR_PUFRUCR) Restrict User Context Mask */
#define SFR_PUFRUCR_RESTRICT_USER_CONTEXT(value) (SFR_PUFRUCR_RESTRICT_USER_CONTEXT_Msk & (_UINT32_(value) << SFR_PUFRUCR_RESTRICT_USER_CONTEXT_Pos)) /* Assignment of value for RESTRICT_USER_CONTEXT in the SFR_PUFRUCR register */
#define   SFR_PUFRUCR_RESTRICT_USER_CONTEXT_0_Val _UINT32_(0x0)                                        /* (SFR_PUFRUCR) This bit can be used.  */
#define   SFR_PUFRUCR_RESTRICT_USER_CONTEXT_1_Val _UINT32_(0x1)                                        /* (SFR_PUFRUCR) This bit cannot be used.  */
#define SFR_PUFRUCR_RESTRICT_USER_CONTEXT_0   (SFR_PUFRUCR_RESTRICT_USER_CONTEXT_0_Val << SFR_PUFRUCR_RESTRICT_USER_CONTEXT_Pos) /* (SFR_PUFRUCR) This bit can be used. Position */
#define SFR_PUFRUCR_RESTRICT_USER_CONTEXT_1   (SFR_PUFRUCR_RESTRICT_USER_CONTEXT_1_Val << SFR_PUFRUCR_RESTRICT_USER_CONTEXT_Pos) /* (SFR_PUFRUCR) This bit cannot be used. Position */
#define SFR_PUFRUCR_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (SFR_PUFRUCR) Register Mask  */


/* -------- SFR_PUFWORUCR : (SFR Offset: 0x2214) (R/W 32) PUF Restrict User Context x Write Ones Register -------- */
#define SFR_PUFWORUCR_RESETVALUE              _UINT32_(0x00)                                       /*  (SFR_PUFWORUCR) PUF Restrict User Context x Write Ones Register  Reset Value */

#define SFR_PUFWORUCR_RESTRICT_USER_CONTEXT_WO_Pos _UINT32_(0)                                          /* (SFR_PUFWORUCR) Restrict User Context Position */
#define SFR_PUFWORUCR_RESTRICT_USER_CONTEXT_WO_Msk (_UINT32_(0xFFFFFFFF) << SFR_PUFWORUCR_RESTRICT_USER_CONTEXT_WO_Pos) /* (SFR_PUFWORUCR) Restrict User Context Mask */
#define SFR_PUFWORUCR_RESTRICT_USER_CONTEXT_WO(value) (SFR_PUFWORUCR_RESTRICT_USER_CONTEXT_WO_Msk & (_UINT32_(value) << SFR_PUFWORUCR_RESTRICT_USER_CONTEXT_WO_Pos)) /* Assignment of value for RESTRICT_USER_CONTEXT_WO in the SFR_PUFWORUCR register */
#define   SFR_PUFWORUCR_RESTRICT_USER_CONTEXT_WO_0_Val _UINT32_(0x0)                                        /* (SFR_PUFWORUCR) This bit can be used.  */
#define   SFR_PUFWORUCR_RESTRICT_USER_CONTEXT_WO_1_Val _UINT32_(0x1)                                        /* (SFR_PUFWORUCR) This bit cannot be used.  */
#define SFR_PUFWORUCR_RESTRICT_USER_CONTEXT_WO_0 (SFR_PUFWORUCR_RESTRICT_USER_CONTEXT_WO_0_Val << SFR_PUFWORUCR_RESTRICT_USER_CONTEXT_WO_Pos) /* (SFR_PUFWORUCR) This bit can be used. Position */
#define SFR_PUFWORUCR_RESTRICT_USER_CONTEXT_WO_1 (SFR_PUFWORUCR_RESTRICT_USER_CONTEXT_WO_1_Val << SFR_PUFWORUCR_RESTRICT_USER_CONTEXT_WO_Pos) /* (SFR_PUFWORUCR) This bit cannot be used. Position */
#define SFR_PUFWORUCR_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (SFR_PUFWORUCR) Register Mask  */


/* -------- SFR_TSU_CFG : (SFR Offset: 0x2250) (R/W 32) TSU Configuration Register -------- */
#define SFR_TSU_CFG_RESETVALUE                _UINT32_(0x4343)                                     /*  (SFR_TSU_CFG) TSU Configuration Register  Reset Value */

#define SFR_TSU_CFG_WIDTH_0_Pos               _UINT32_(0)                                          /* (SFR_TSU_CFG) Number of TSU Cycles to Increase GTSUCOMP 0 Width Position */
#define SFR_TSU_CFG_WIDTH_0_Msk               (_UINT32_(0xFF) << SFR_TSU_CFG_WIDTH_0_Pos)          /* (SFR_TSU_CFG) Number of TSU Cycles to Increase GTSUCOMP 0 Width Mask */
#define SFR_TSU_CFG_WIDTH_0(value)            (SFR_TSU_CFG_WIDTH_0_Msk & (_UINT32_(value) << SFR_TSU_CFG_WIDTH_0_Pos)) /* Assignment of value for WIDTH_0 in the SFR_TSU_CFG register */
#define SFR_TSU_CFG_WIDTH_1_Pos               _UINT32_(8)                                          /* (SFR_TSU_CFG) Number of TSU Cycles to Increase GTSUCOMP 1 Width Position */
#define SFR_TSU_CFG_WIDTH_1_Msk               (_UINT32_(0xFF) << SFR_TSU_CFG_WIDTH_1_Pos)          /* (SFR_TSU_CFG) Number of TSU Cycles to Increase GTSUCOMP 1 Width Mask */
#define SFR_TSU_CFG_WIDTH_1(value)            (SFR_TSU_CFG_WIDTH_1_Msk & (_UINT32_(value) << SFR_TSU_CFG_WIDTH_1_Pos)) /* Assignment of value for WIDTH_1 in the SFR_TSU_CFG register */
#define SFR_TSU_CFG_Msk                       _UINT32_(0x0000FFFF)                                 /* (SFR_TSU_CFG) Register Mask  */


/* SFR register offsets definitions */
#define SFR_OHCIICR_REG_OFST           _UINT32_(0x00)      /* (SFR_OHCIICR) OHCI Interrupt Configuration Register Offset */
#define SFR_OHCIISR_REG_OFST           _UINT32_(0x04)      /* (SFR_OHCIISR) OHCI Interrupt Status Register Offset */
#define SFR_WPMR_REG_OFST              _UINT32_(0xE4)      /* (SFR_WPMR) Write Protection Mode Register Offset */
#define SFR_WPSR_REG_OFST              _UINT32_(0xE8)      /* (SFR_WPSR) Write Protection Status Register Offset */
#define SFR_DEBUG_REG_OFST             _UINT32_(0x200C)    /* (SFR_DEBUG) Debug Register Offset */
#define SFR_HSS_AXIQOS_REG_OFST        _UINT32_(0x2028)    /* (SFR_HSS_AXIQOS) HSS AXI QOS Register Offset */
#define SFR_MSK_ERR_DBG_MODE_REG_OFST  _UINT32_(0x202C)    /* (SFR_MSK_ERR_DBG_MODE) Mask Error Debug Mode Register Offset */
#define SFR_CAN_SRAM_SEL_REG_OFST      _UINT32_(0x2030)    /* (SFR_CAN_SRAM_SEL) CAN SRAM Selection Register Offset */
#define SFR_NIC_CG_CFG_REG_OFST        _UINT32_(0x203C)    /* (SFR_NIC_CG_CFG) NIC Clock Gating Configuration Register Offset */
#define SFR_UTMIHSTRIM_REG_OFST        _UINT32_(0x2044)    /* (SFR_UTMIHSTRIM) UTMI High-Speed Trimming Register Offset */
#define SFR_UTMIFSTRIM_REG_OFST        _UINT32_(0x2048)    /* (SFR_UTMIFSTRIM) UTMI Full-Speed Trimming Register Offset */
#define SFR_UTMISWAP_REG_OFST          _UINT32_(0x204C)    /* (SFR_UTMISWAP) UTMI DP/DM Pin Swapping Register Offset */
#define SFR_CLEAR_ONLY_SD_CFG_REG_OFST _UINT32_(0x2058)    /* (SFR_CLEAR_ONLY_SD_CFG) Memory Clear-Only Shutdown Configuration Register Offset */
#define SFR_DISABLE_SD_CFG_REG_OFST    _UINT32_(0x205C)    /* (SFR_DISABLE_SD_CFG) Memory Disable Shutdown Configuration Register Offset */
#define SFR_MEMPOWER_REG_OFST          _UINT32_(0x2060)    /* (SFR_MEMPOWER) Memory Power Mode Register Offset */
#define SFR_PUFCTL_REG_OFST            _UINT32_(0x2200)    /* (SFR_PUFCTL) PUFSRAM Domain Control Register Offset */
#define SFR_PUFDIS_REG_OFST            _UINT32_(0x2208)    /* (SFR_PUFDIS) PUF Disable Functions Register Offset */
#define SFR_PUFRUCR_REG_OFST           _UINT32_(0x220C)    /* (SFR_PUFRUCR) PUF Restrict User Context x Register Offset */
#define SFR_PUFRUCR0_REG_OFST          _UINT32_(0x220C)    /* (SFR_PUFRUCR0) PUF Restrict User Context x Register Offset */
#define SFR_PUFRUCR1_REG_OFST          _UINT32_(0x2210)    /* (SFR_PUFRUCR1) PUF Restrict User Context x Register Offset */
#define SFR_PUFWORUCR_REG_OFST         _UINT32_(0x2214)    /* (SFR_PUFWORUCR) PUF Restrict User Context x Write Ones Register Offset */
#define SFR_PUFWORUCR0_REG_OFST        _UINT32_(0x2214)    /* (SFR_PUFWORUCR0) PUF Restrict User Context x Write Ones Register Offset */
#define SFR_PUFWORUCR1_REG_OFST        _UINT32_(0x2218)    /* (SFR_PUFWORUCR1) PUF Restrict User Context x Write Ones Register Offset */
#define SFR_TSU_CFG_REG_OFST           _UINT32_(0x2250)    /* (SFR_TSU_CFG) TSU Configuration Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* SFR register API structure */
typedef struct
{  /* Special Function Register */
  __IO  uint32_t                       SFR_OHCIICR;        /* Offset: 0x00 (R/W  32) OHCI Interrupt Configuration Register */
  __I   uint32_t                       SFR_OHCIISR;        /* Offset: 0x04 (R/   32) OHCI Interrupt Status Register */
  __I   uint8_t                        Reserved1[0xDC];
  __IO  uint32_t                       SFR_WPMR;           /* Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       SFR_WPSR;           /* Offset: 0xE8 (R/   32) Write Protection Status Register */
  __I   uint8_t                        Reserved2[0x1F20];
  __IO  uint32_t                       SFR_DEBUG;          /* Offset: 0x200C (R/W  32) Debug Register */
  __I   uint8_t                        Reserved3[0x18];
  __IO  uint32_t                       SFR_HSS_AXIQOS;     /* Offset: 0x2028 (R/W  32) HSS AXI QOS Register */
  __IO  uint32_t                       SFR_MSK_ERR_DBG_MODE; /* Offset: 0x202C (R/W  32) Mask Error Debug Mode Register */
  __IO  uint32_t                       SFR_CAN_SRAM_SEL;   /* Offset: 0x2030 (R/W  32) CAN SRAM Selection Register */
  __I   uint8_t                        Reserved4[0x08];
  __IO  uint32_t                       SFR_NIC_CG_CFG;     /* Offset: 0x203C (R/W  32) NIC Clock Gating Configuration Register */
  __I   uint8_t                        Reserved5[0x04];
  __IO  uint32_t                       SFR_UTMIHSTRIM;     /* Offset: 0x2044 (R/W  32) UTMI High-Speed Trimming Register */
  __IO  uint32_t                       SFR_UTMIFSTRIM;     /* Offset: 0x2048 (R/W  32) UTMI Full-Speed Trimming Register */
  __IO  uint32_t                       SFR_UTMISWAP;       /* Offset: 0x204C (R/W  32) UTMI DP/DM Pin Swapping Register */
  __I   uint8_t                        Reserved6[0x08];
  __IO  uint32_t                       SFR_CLEAR_ONLY_SD_CFG; /* Offset: 0x2058 (R/W  32) Memory Clear-Only Shutdown Configuration Register */
  __IO  uint32_t                       SFR_DISABLE_SD_CFG; /* Offset: 0x205C (R/W  32) Memory Disable Shutdown Configuration Register */
  __IO  uint32_t                       SFR_MEMPOWER;       /* Offset: 0x2060 (R/W  32) Memory Power Mode Register */
  __I   uint8_t                        Reserved7[0x19C];
  __IO  uint32_t                       SFR_PUFCTL;         /* Offset: 0x2200 (R/W  32) PUFSRAM Domain Control Register */
  __I   uint8_t                        Reserved8[0x04];
  __IO  uint32_t                       SFR_PUFDIS;         /* Offset: 0x2208 (R/W  32) PUF Disable Functions Register */
  __IO  uint32_t                       SFR_PUFRUCR[2];     /* Offset: 0x220C (R/W  32) PUF Restrict User Context x Register */
  __IO  uint32_t                       SFR_PUFWORUCR[2];   /* Offset: 0x2214 (R/W  32) PUF Restrict User Context x Write Ones Register */
  __I   uint8_t                        Reserved9[0x34];
  __IO  uint32_t                       SFR_TSU_CFG;        /* Offset: 0x2250 (R/W  32) TSU Configuration Register */
} sfr_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7D6_SFR_COMPONENT_H_ */
