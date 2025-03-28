/*
 * Component description for ADC
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
#ifndef _SAM9X7_ADC_COMPONENT_H_
#define _SAM9X7_ADC_COMPONENT_H_

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR ADC                       */
/* ************************************************************************** */

/* -------- ADC_CR : (ADC Offset: 0x00) ( /W 32) Control Register -------- */
#define ADC_CR_SWRST_Pos                      _UINT32_(0)                                          /* (ADC_CR) Software Reset Position */
#define ADC_CR_SWRST_Msk                      (_UINT32_(0x1) << ADC_CR_SWRST_Pos)                  /* (ADC_CR) Software Reset Mask */
#define ADC_CR_SWRST(value)                   (ADC_CR_SWRST_Msk & (_UINT32_(value) << ADC_CR_SWRST_Pos)) /* Assignment of value for SWRST in the ADC_CR register */
#define   ADC_CR_SWRST_0_Val                  _UINT32_(0x0)                                        /* (ADC_CR) No effect.  */
#define   ADC_CR_SWRST_1_Val                  _UINT32_(0x1)                                        /* (ADC_CR) Resets the ADC.  */
#define ADC_CR_SWRST_0                        (ADC_CR_SWRST_0_Val << ADC_CR_SWRST_Pos)             /* (ADC_CR) No effect. Position */
#define ADC_CR_SWRST_1                        (ADC_CR_SWRST_1_Val << ADC_CR_SWRST_Pos)             /* (ADC_CR) Resets the ADC. Position */
#define ADC_CR_START_Pos                      _UINT32_(1)                                          /* (ADC_CR) Start Conversion Position */
#define ADC_CR_START_Msk                      (_UINT32_(0x1) << ADC_CR_START_Pos)                  /* (ADC_CR) Start Conversion Mask */
#define ADC_CR_START(value)                   (ADC_CR_START_Msk & (_UINT32_(value) << ADC_CR_START_Pos)) /* Assignment of value for START in the ADC_CR register */
#define   ADC_CR_START_0_Val                  _UINT32_(0x0)                                        /* (ADC_CR) No effect.  */
#define   ADC_CR_START_1_Val                  _UINT32_(0x1)                                        /* (ADC_CR) Triggers a single sequence of analog-to-digital conversions if ADC_TRGR.TRGMOD=0.  */
#define ADC_CR_START_0                        (ADC_CR_START_0_Val << ADC_CR_START_Pos)             /* (ADC_CR) No effect. Position */
#define ADC_CR_START_1                        (ADC_CR_START_1_Val << ADC_CR_START_Pos)             /* (ADC_CR) Triggers a single sequence of analog-to-digital conversions if ADC_TRGR.TRGMOD=0. Position */
#define ADC_CR_TSCALIB_Pos                    _UINT32_(2)                                          /* (ADC_CR) Touchscreen Calibration Position */
#define ADC_CR_TSCALIB_Msk                    (_UINT32_(0x1) << ADC_CR_TSCALIB_Pos)                /* (ADC_CR) Touchscreen Calibration Mask */
#define ADC_CR_TSCALIB(value)                 (ADC_CR_TSCALIB_Msk & (_UINT32_(value) << ADC_CR_TSCALIB_Pos)) /* Assignment of value for TSCALIB in the ADC_CR register */
#define   ADC_CR_TSCALIB_0_Val                _UINT32_(0x0)                                        /* (ADC_CR) No effect.  */
#define   ADC_CR_TSCALIB_1_Val                _UINT32_(0x1)                                        /* (ADC_CR) Programs screen calibration (VDD/GND measurement)  */
#define ADC_CR_TSCALIB_0                      (ADC_CR_TSCALIB_0_Val << ADC_CR_TSCALIB_Pos)         /* (ADC_CR) No effect. Position */
#define ADC_CR_TSCALIB_1                      (ADC_CR_TSCALIB_1_Val << ADC_CR_TSCALIB_Pos)         /* (ADC_CR) Programs screen calibration (VDD/GND measurement) Position */
#define ADC_CR_CMPRST_Pos                     _UINT32_(4)                                          /* (ADC_CR) Comparison Restart Position */
#define ADC_CR_CMPRST_Msk                     (_UINT32_(0x1) << ADC_CR_CMPRST_Pos)                 /* (ADC_CR) Comparison Restart Mask */
#define ADC_CR_CMPRST(value)                  (ADC_CR_CMPRST_Msk & (_UINT32_(value) << ADC_CR_CMPRST_Pos)) /* Assignment of value for CMPRST in the ADC_CR register */
#define   ADC_CR_CMPRST_0_Val                 _UINT32_(0x0)                                        /* (ADC_CR) No effect.  */
#define   ADC_CR_CMPRST_1_Val                 _UINT32_(0x1)                                        /* (ADC_CR) Stops the conversion result storage until the next comparison match.  */
#define ADC_CR_CMPRST_0                       (ADC_CR_CMPRST_0_Val << ADC_CR_CMPRST_Pos)           /* (ADC_CR) No effect. Position */
#define ADC_CR_CMPRST_1                       (ADC_CR_CMPRST_1_Val << ADC_CR_CMPRST_Pos)           /* (ADC_CR) Stops the conversion result storage until the next comparison match. Position */
#define ADC_CR_Msk                            _UINT32_(0x00000017)                                 /* (ADC_CR) Register Mask  */


/* -------- ADC_MR : (ADC Offset: 0x04) (R/W 32) Mode Register -------- */
#define ADC_MR_RESETVALUE                     _UINT32_(0x20000000)                                 /*  (ADC_MR) Mode Register  Reset Value */

#define ADC_MR_TRGSEL_Pos                     _UINT32_(1)                                          /* (ADC_MR) Trigger Selection Position */
#define ADC_MR_TRGSEL_Msk                     (_UINT32_(0x7) << ADC_MR_TRGSEL_Pos)                 /* (ADC_MR) Trigger Selection Mask */
#define ADC_MR_TRGSEL(value)                  (ADC_MR_TRGSEL_Msk & (_UINT32_(value) << ADC_MR_TRGSEL_Pos)) /* Assignment of value for TRGSEL in the ADC_MR register */
#define   ADC_MR_TRGSEL_ADC_TRIG0_Val         _UINT32_(0x0)                                        /* (ADC_MR) ADTRG  */
#define   ADC_MR_TRGSEL_ADC_TRIG1_Val         _UINT32_(0x1)                                        /* (ADC_MR) TIOA0  */
#define   ADC_MR_TRGSEL_ADC_TRIG2_Val         _UINT32_(0x2)                                        /* (ADC_MR) TIOA1  */
#define   ADC_MR_TRGSEL_ADC_TRIG3_Val         _UINT32_(0x3)                                        /* (ADC_MR) TIOA2  */
#define   ADC_MR_TRGSEL_ADC_TRIG4_Val         _UINT32_(0x4)                                        /* (ADC_MR) RTCOUT1  */
#define ADC_MR_TRGSEL_ADC_TRIG0               (ADC_MR_TRGSEL_ADC_TRIG0_Val << ADC_MR_TRGSEL_Pos)   /* (ADC_MR) ADTRG Position */
#define ADC_MR_TRGSEL_ADC_TRIG1               (ADC_MR_TRGSEL_ADC_TRIG1_Val << ADC_MR_TRGSEL_Pos)   /* (ADC_MR) TIOA0 Position */
#define ADC_MR_TRGSEL_ADC_TRIG2               (ADC_MR_TRGSEL_ADC_TRIG2_Val << ADC_MR_TRGSEL_Pos)   /* (ADC_MR) TIOA1 Position */
#define ADC_MR_TRGSEL_ADC_TRIG3               (ADC_MR_TRGSEL_ADC_TRIG3_Val << ADC_MR_TRGSEL_Pos)   /* (ADC_MR) TIOA2 Position */
#define ADC_MR_TRGSEL_ADC_TRIG4               (ADC_MR_TRGSEL_ADC_TRIG4_Val << ADC_MR_TRGSEL_Pos)   /* (ADC_MR) RTCOUT1 Position */
#define ADC_MR_SLEEP_Pos                      _UINT32_(5)                                          /* (ADC_MR) Sleep Mode Position */
#define ADC_MR_SLEEP_Msk                      (_UINT32_(0x1) << ADC_MR_SLEEP_Pos)                  /* (ADC_MR) Sleep Mode Mask */
#define ADC_MR_SLEEP(value)                   (ADC_MR_SLEEP_Msk & (_UINT32_(value) << ADC_MR_SLEEP_Pos)) /* Assignment of value for SLEEP in the ADC_MR register */
#define   ADC_MR_SLEEP_NORMAL_Val             _UINT32_(0x0)                                        /* (ADC_MR) Normal Mode: The ADC core and reference voltage circuitry are kept ON between conversions.  */
#define   ADC_MR_SLEEP_SLEEP_Val              _UINT32_(0x1)                                        /* (ADC_MR) Sleep Mode: The wake-up time can be modified by programming the FWUP bit.  */
#define ADC_MR_SLEEP_NORMAL                   (ADC_MR_SLEEP_NORMAL_Val << ADC_MR_SLEEP_Pos)        /* (ADC_MR) Normal Mode: The ADC core and reference voltage circuitry are kept ON between conversions. Position */
#define ADC_MR_SLEEP_SLEEP                    (ADC_MR_SLEEP_SLEEP_Val << ADC_MR_SLEEP_Pos)         /* (ADC_MR) Sleep Mode: The wake-up time can be modified by programming the FWUP bit. Position */
#define ADC_MR_FWUP_Pos                       _UINT32_(6)                                          /* (ADC_MR) Fast Wake-Up Position */
#define ADC_MR_FWUP_Msk                       (_UINT32_(0x1) << ADC_MR_FWUP_Pos)                   /* (ADC_MR) Fast Wake-Up Mask */
#define ADC_MR_FWUP(value)                    (ADC_MR_FWUP_Msk & (_UINT32_(value) << ADC_MR_FWUP_Pos)) /* Assignment of value for FWUP in the ADC_MR register */
#define   ADC_MR_FWUP_OFF_Val                 _UINT32_(0x0)                                        /* (ADC_MR) If SLEEP is 1, then both ADC core and reference voltage circuitry are off between conversions  */
#define   ADC_MR_FWUP_ON_Val                  _UINT32_(0x1)                                        /* (ADC_MR) If SLEEP is 1, then Fast Wake-Up Sleep mode: The voltage reference is on between conversions and ADC core is off.  */
#define ADC_MR_FWUP_OFF                       (ADC_MR_FWUP_OFF_Val << ADC_MR_FWUP_Pos)             /* (ADC_MR) If SLEEP is 1, then both ADC core and reference voltage circuitry are off between conversions Position */
#define ADC_MR_FWUP_ON                        (ADC_MR_FWUP_ON_Val << ADC_MR_FWUP_Pos)              /* (ADC_MR) If SLEEP is 1, then Fast Wake-Up Sleep mode: The voltage reference is on between conversions and ADC core is off. Position */
#define ADC_MR_PRESCAL_Pos                    _UINT32_(8)                                          /* (ADC_MR) Prescaler Rate Selection Position */
#define ADC_MR_PRESCAL_Msk                    (_UINT32_(0xFF) << ADC_MR_PRESCAL_Pos)               /* (ADC_MR) Prescaler Rate Selection Mask */
#define ADC_MR_PRESCAL(value)                 (ADC_MR_PRESCAL_Msk & (_UINT32_(value) << ADC_MR_PRESCAL_Pos)) /* Assignment of value for PRESCAL in the ADC_MR register */
#define ADC_MR_STARTUP_Pos                    _UINT32_(16)                                         /* (ADC_MR) Start-Up Time Position */
#define ADC_MR_STARTUP_Msk                    (_UINT32_(0xF) << ADC_MR_STARTUP_Pos)                /* (ADC_MR) Start-Up Time Mask */
#define ADC_MR_STARTUP(value)                 (ADC_MR_STARTUP_Msk & (_UINT32_(value) << ADC_MR_STARTUP_Pos)) /* Assignment of value for STARTUP in the ADC_MR register */
#define   ADC_MR_STARTUP_SUT0_Val             _UINT32_(0x0)                                        /* (ADC_MR) 0 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT8_Val             _UINT32_(0x1)                                        /* (ADC_MR) 8 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT16_Val            _UINT32_(0x2)                                        /* (ADC_MR) 16 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT24_Val            _UINT32_(0x3)                                        /* (ADC_MR) 24 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT64_Val            _UINT32_(0x4)                                        /* (ADC_MR) 64 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT80_Val            _UINT32_(0x5)                                        /* (ADC_MR) 80 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT96_Val            _UINT32_(0x6)                                        /* (ADC_MR) 96 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT112_Val           _UINT32_(0x7)                                        /* (ADC_MR) 112 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT512_Val           _UINT32_(0x8)                                        /* (ADC_MR) 512 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT576_Val           _UINT32_(0x9)                                        /* (ADC_MR) 576 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT640_Val           _UINT32_(0xA)                                        /* (ADC_MR) 640 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT704_Val           _UINT32_(0xB)                                        /* (ADC_MR) 704 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT768_Val           _UINT32_(0xC)                                        /* (ADC_MR) 768 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT832_Val           _UINT32_(0xD)                                        /* (ADC_MR) 832 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT896_Val           _UINT32_(0xE)                                        /* (ADC_MR) 896 periods of ADCCLK  */
#define   ADC_MR_STARTUP_SUT960_Val           _UINT32_(0xF)                                        /* (ADC_MR) 960 periods of ADCCLK  */
#define ADC_MR_STARTUP_SUT0                   (ADC_MR_STARTUP_SUT0_Val << ADC_MR_STARTUP_Pos)      /* (ADC_MR) 0 periods of ADCCLK Position */
#define ADC_MR_STARTUP_SUT8                   (ADC_MR_STARTUP_SUT8_Val << ADC_MR_STARTUP_Pos)      /* (ADC_MR) 8 periods of ADCCLK Position */
#define ADC_MR_STARTUP_SUT16                  (ADC_MR_STARTUP_SUT16_Val << ADC_MR_STARTUP_Pos)     /* (ADC_MR) 16 periods of ADCCLK Position */
#define ADC_MR_STARTUP_SUT24                  (ADC_MR_STARTUP_SUT24_Val << ADC_MR_STARTUP_Pos)     /* (ADC_MR) 24 periods of ADCCLK Position */
#define ADC_MR_STARTUP_SUT64                  (ADC_MR_STARTUP_SUT64_Val << ADC_MR_STARTUP_Pos)     /* (ADC_MR) 64 periods of ADCCLK Position */
#define ADC_MR_STARTUP_SUT80                  (ADC_MR_STARTUP_SUT80_Val << ADC_MR_STARTUP_Pos)     /* (ADC_MR) 80 periods of ADCCLK Position */
#define ADC_MR_STARTUP_SUT96                  (ADC_MR_STARTUP_SUT96_Val << ADC_MR_STARTUP_Pos)     /* (ADC_MR) 96 periods of ADCCLK Position */
#define ADC_MR_STARTUP_SUT112                 (ADC_MR_STARTUP_SUT112_Val << ADC_MR_STARTUP_Pos)    /* (ADC_MR) 112 periods of ADCCLK Position */
#define ADC_MR_STARTUP_SUT512                 (ADC_MR_STARTUP_SUT512_Val << ADC_MR_STARTUP_Pos)    /* (ADC_MR) 512 periods of ADCCLK Position */
#define ADC_MR_STARTUP_SUT576                 (ADC_MR_STARTUP_SUT576_Val << ADC_MR_STARTUP_Pos)    /* (ADC_MR) 576 periods of ADCCLK Position */
#define ADC_MR_STARTUP_SUT640                 (ADC_MR_STARTUP_SUT640_Val << ADC_MR_STARTUP_Pos)    /* (ADC_MR) 640 periods of ADCCLK Position */
#define ADC_MR_STARTUP_SUT704                 (ADC_MR_STARTUP_SUT704_Val << ADC_MR_STARTUP_Pos)    /* (ADC_MR) 704 periods of ADCCLK Position */
#define ADC_MR_STARTUP_SUT768                 (ADC_MR_STARTUP_SUT768_Val << ADC_MR_STARTUP_Pos)    /* (ADC_MR) 768 periods of ADCCLK Position */
#define ADC_MR_STARTUP_SUT832                 (ADC_MR_STARTUP_SUT832_Val << ADC_MR_STARTUP_Pos)    /* (ADC_MR) 832 periods of ADCCLK Position */
#define ADC_MR_STARTUP_SUT896                 (ADC_MR_STARTUP_SUT896_Val << ADC_MR_STARTUP_Pos)    /* (ADC_MR) 896 periods of ADCCLK Position */
#define ADC_MR_STARTUP_SUT960                 (ADC_MR_STARTUP_SUT960_Val << ADC_MR_STARTUP_Pos)    /* (ADC_MR) 960 periods of ADCCLK Position */
#define ADC_MR_ANACH_Pos                      _UINT32_(23)                                         /* (ADC_MR) Analog Change Position */
#define ADC_MR_ANACH_Msk                      (_UINT32_(0x1) << ADC_MR_ANACH_Pos)                  /* (ADC_MR) Analog Change Mask */
#define ADC_MR_ANACH(value)                   (ADC_MR_ANACH_Msk & (_UINT32_(value) << ADC_MR_ANACH_Pos)) /* Assignment of value for ANACH in the ADC_MR register */
#define   ADC_MR_ANACH_NONE_Val               _UINT32_(0x0)                                        /* (ADC_MR) No analog change on channel switching: DIFF0 is used for all channels.  */
#define   ADC_MR_ANACH_ALLOWED_Val            _UINT32_(0x1)                                        /* (ADC_MR) Allows different analog settings for each channel. See ADC Channel Offset RegisterChannel Configuration Register.  */
#define ADC_MR_ANACH_NONE                     (ADC_MR_ANACH_NONE_Val << ADC_MR_ANACH_Pos)          /* (ADC_MR) No analog change on channel switching: DIFF0 is used for all channels. Position */
#define ADC_MR_ANACH_ALLOWED                  (ADC_MR_ANACH_ALLOWED_Val << ADC_MR_ANACH_Pos)       /* (ADC_MR) Allows different analog settings for each channel. See ADC Channel Offset RegisterChannel Configuration Register. Position */
#define ADC_MR_TRACKTIM_Pos                   _UINT32_(24)                                         /* (ADC_MR) Tracking Time Position */
#define ADC_MR_TRACKTIM_Msk                   (_UINT32_(0xF) << ADC_MR_TRACKTIM_Pos)               /* (ADC_MR) Tracking Time Mask */
#define ADC_MR_TRACKTIM(value)                (ADC_MR_TRACKTIM_Msk & (_UINT32_(value) << ADC_MR_TRACKTIM_Pos)) /* Assignment of value for TRACKTIM in the ADC_MR register */
#define ADC_MR_TRANSFER_Pos                   _UINT32_(28)                                         /* (ADC_MR) Transfer Time Position */
#define ADC_MR_TRANSFER_Msk                   (_UINT32_(0x3) << ADC_MR_TRANSFER_Pos)               /* (ADC_MR) Transfer Time Mask */
#define ADC_MR_TRANSFER(value)                (ADC_MR_TRANSFER_Msk & (_UINT32_(value) << ADC_MR_TRANSFER_Pos)) /* Assignment of value for TRANSFER in the ADC_MR register */
#define ADC_MR_MAXSPEED_Pos                   _UINT32_(30)                                         /* (ADC_MR) Maximum Sampling Rate Enable in Freerun Mode Position */
#define ADC_MR_MAXSPEED_Msk                   (_UINT32_(0x1) << ADC_MR_MAXSPEED_Pos)               /* (ADC_MR) Maximum Sampling Rate Enable in Freerun Mode Mask */
#define ADC_MR_MAXSPEED(value)                (ADC_MR_MAXSPEED_Msk & (_UINT32_(value) << ADC_MR_MAXSPEED_Pos)) /* Assignment of value for MAXSPEED in the ADC_MR register */
#define ADC_MR_USEQ_Pos                       _UINT32_(31)                                         /* (ADC_MR) User Sequence Enable Position */
#define ADC_MR_USEQ_Msk                       (_UINT32_(0x1) << ADC_MR_USEQ_Pos)                   /* (ADC_MR) User Sequence Enable Mask */
#define ADC_MR_USEQ(value)                    (ADC_MR_USEQ_Msk & (_UINT32_(value) << ADC_MR_USEQ_Pos)) /* Assignment of value for USEQ in the ADC_MR register */
#define   ADC_MR_USEQ_NUM_ORDER_Val           _UINT32_(0x0)                                        /* (ADC_MR) Normal mode: The controller converts channels in a simple numeric order depending only on the channel index.  */
#define   ADC_MR_USEQ_REG_ORDER_Val           _UINT32_(0x1)                                        /* (ADC_MR) User Sequence mode: The sequence respects what is defined in ADC_SEQR1 and can be used to convert the same channel several times.  */
#define ADC_MR_USEQ_NUM_ORDER                 (ADC_MR_USEQ_NUM_ORDER_Val << ADC_MR_USEQ_Pos)       /* (ADC_MR) Normal mode: The controller converts channels in a simple numeric order depending only on the channel index. Position */
#define ADC_MR_USEQ_REG_ORDER                 (ADC_MR_USEQ_REG_ORDER_Val << ADC_MR_USEQ_Pos)       /* (ADC_MR) User Sequence mode: The sequence respects what is defined in ADC_SEQR1 and can be used to convert the same channel several times. Position */
#define ADC_MR_Msk                            _UINT32_(0xFF8FFF6E)                                 /* (ADC_MR) Register Mask  */


/* -------- ADC_SEQR1 : (ADC Offset: 0x08) (R/W 32) Channel Sequence Register 1 -------- */
#define ADC_SEQR1_RESETVALUE                  _UINT32_(0x00)                                       /*  (ADC_SEQR1) Channel Sequence Register 1  Reset Value */

#define ADC_SEQR1_USCH1_Pos                   _UINT32_(0)                                          /* (ADC_SEQR1) User Sequence Number 1 Position */
#define ADC_SEQR1_USCH1_Msk                   (_UINT32_(0xF) << ADC_SEQR1_USCH1_Pos)               /* (ADC_SEQR1) User Sequence Number 1 Mask */
#define ADC_SEQR1_USCH1(value)                (ADC_SEQR1_USCH1_Msk & (_UINT32_(value) << ADC_SEQR1_USCH1_Pos)) /* Assignment of value for USCH1 in the ADC_SEQR1 register */
#define ADC_SEQR1_USCH2_Pos                   _UINT32_(4)                                          /* (ADC_SEQR1) User Sequence Number 2 Position */
#define ADC_SEQR1_USCH2_Msk                   (_UINT32_(0xF) << ADC_SEQR1_USCH2_Pos)               /* (ADC_SEQR1) User Sequence Number 2 Mask */
#define ADC_SEQR1_USCH2(value)                (ADC_SEQR1_USCH2_Msk & (_UINT32_(value) << ADC_SEQR1_USCH2_Pos)) /* Assignment of value for USCH2 in the ADC_SEQR1 register */
#define ADC_SEQR1_USCH3_Pos                   _UINT32_(8)                                          /* (ADC_SEQR1) User Sequence Number 3 Position */
#define ADC_SEQR1_USCH3_Msk                   (_UINT32_(0xF) << ADC_SEQR1_USCH3_Pos)               /* (ADC_SEQR1) User Sequence Number 3 Mask */
#define ADC_SEQR1_USCH3(value)                (ADC_SEQR1_USCH3_Msk & (_UINT32_(value) << ADC_SEQR1_USCH3_Pos)) /* Assignment of value for USCH3 in the ADC_SEQR1 register */
#define ADC_SEQR1_USCH4_Pos                   _UINT32_(12)                                         /* (ADC_SEQR1) User Sequence Number 4 Position */
#define ADC_SEQR1_USCH4_Msk                   (_UINT32_(0xF) << ADC_SEQR1_USCH4_Pos)               /* (ADC_SEQR1) User Sequence Number 4 Mask */
#define ADC_SEQR1_USCH4(value)                (ADC_SEQR1_USCH4_Msk & (_UINT32_(value) << ADC_SEQR1_USCH4_Pos)) /* Assignment of value for USCH4 in the ADC_SEQR1 register */
#define ADC_SEQR1_USCH5_Pos                   _UINT32_(16)                                         /* (ADC_SEQR1) User Sequence Number 5 Position */
#define ADC_SEQR1_USCH5_Msk                   (_UINT32_(0xF) << ADC_SEQR1_USCH5_Pos)               /* (ADC_SEQR1) User Sequence Number 5 Mask */
#define ADC_SEQR1_USCH5(value)                (ADC_SEQR1_USCH5_Msk & (_UINT32_(value) << ADC_SEQR1_USCH5_Pos)) /* Assignment of value for USCH5 in the ADC_SEQR1 register */
#define ADC_SEQR1_USCH6_Pos                   _UINT32_(20)                                         /* (ADC_SEQR1) User Sequence Number 6 Position */
#define ADC_SEQR1_USCH6_Msk                   (_UINT32_(0xF) << ADC_SEQR1_USCH6_Pos)               /* (ADC_SEQR1) User Sequence Number 6 Mask */
#define ADC_SEQR1_USCH6(value)                (ADC_SEQR1_USCH6_Msk & (_UINT32_(value) << ADC_SEQR1_USCH6_Pos)) /* Assignment of value for USCH6 in the ADC_SEQR1 register */
#define ADC_SEQR1_USCH7_Pos                   _UINT32_(24)                                         /* (ADC_SEQR1) User Sequence Number 7 Position */
#define ADC_SEQR1_USCH7_Msk                   (_UINT32_(0xF) << ADC_SEQR1_USCH7_Pos)               /* (ADC_SEQR1) User Sequence Number 7 Mask */
#define ADC_SEQR1_USCH7(value)                (ADC_SEQR1_USCH7_Msk & (_UINT32_(value) << ADC_SEQR1_USCH7_Pos)) /* Assignment of value for USCH7 in the ADC_SEQR1 register */
#define ADC_SEQR1_USCH8_Pos                   _UINT32_(28)                                         /* (ADC_SEQR1) User Sequence Number 8 Position */
#define ADC_SEQR1_USCH8_Msk                   (_UINT32_(0xF) << ADC_SEQR1_USCH8_Pos)               /* (ADC_SEQR1) User Sequence Number 8 Mask */
#define ADC_SEQR1_USCH8(value)                (ADC_SEQR1_USCH8_Msk & (_UINT32_(value) << ADC_SEQR1_USCH8_Pos)) /* Assignment of value for USCH8 in the ADC_SEQR1 register */
#define ADC_SEQR1_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (ADC_SEQR1) Register Mask  */


/* -------- ADC_CHER : (ADC Offset: 0x10) ( /W 32) Channel Enable Register -------- */
#define ADC_CHER_CH0_Pos                      _UINT32_(0)                                          /* (ADC_CHER) Channel 0 Enable Position */
#define ADC_CHER_CH0_Msk                      (_UINT32_(0x1) << ADC_CHER_CH0_Pos)                  /* (ADC_CHER) Channel 0 Enable Mask */
#define ADC_CHER_CH0(value)                   (ADC_CHER_CH0_Msk & (_UINT32_(value) << ADC_CHER_CH0_Pos)) /* Assignment of value for CH0 in the ADC_CHER register */
#define   ADC_CHER_CH0_0_Val                  _UINT32_(0x0)                                        /* (ADC_CHER) No effect.  */
#define   ADC_CHER_CH0_1_Val                  _UINT32_(0x1)                                        /* (ADC_CHER) Enables the corresponding channel.  */
#define ADC_CHER_CH0_0                        (ADC_CHER_CH0_0_Val << ADC_CHER_CH0_Pos)             /* (ADC_CHER) No effect. Position */
#define ADC_CHER_CH0_1                        (ADC_CHER_CH0_1_Val << ADC_CHER_CH0_Pos)             /* (ADC_CHER) Enables the corresponding channel. Position */
#define ADC_CHER_CH1_Pos                      _UINT32_(1)                                          /* (ADC_CHER) Channel 1 Enable Position */
#define ADC_CHER_CH1_Msk                      (_UINT32_(0x1) << ADC_CHER_CH1_Pos)                  /* (ADC_CHER) Channel 1 Enable Mask */
#define ADC_CHER_CH1(value)                   (ADC_CHER_CH1_Msk & (_UINT32_(value) << ADC_CHER_CH1_Pos)) /* Assignment of value for CH1 in the ADC_CHER register */
#define   ADC_CHER_CH1_0_Val                  _UINT32_(0x0)                                        /* (ADC_CHER) No effect.  */
#define   ADC_CHER_CH1_1_Val                  _UINT32_(0x1)                                        /* (ADC_CHER) Enables the corresponding channel.  */
#define ADC_CHER_CH1_0                        (ADC_CHER_CH1_0_Val << ADC_CHER_CH1_Pos)             /* (ADC_CHER) No effect. Position */
#define ADC_CHER_CH1_1                        (ADC_CHER_CH1_1_Val << ADC_CHER_CH1_Pos)             /* (ADC_CHER) Enables the corresponding channel. Position */
#define ADC_CHER_CH2_Pos                      _UINT32_(2)                                          /* (ADC_CHER) Channel 2 Enable Position */
#define ADC_CHER_CH2_Msk                      (_UINT32_(0x1) << ADC_CHER_CH2_Pos)                  /* (ADC_CHER) Channel 2 Enable Mask */
#define ADC_CHER_CH2(value)                   (ADC_CHER_CH2_Msk & (_UINT32_(value) << ADC_CHER_CH2_Pos)) /* Assignment of value for CH2 in the ADC_CHER register */
#define   ADC_CHER_CH2_0_Val                  _UINT32_(0x0)                                        /* (ADC_CHER) No effect.  */
#define   ADC_CHER_CH2_1_Val                  _UINT32_(0x1)                                        /* (ADC_CHER) Enables the corresponding channel.  */
#define ADC_CHER_CH2_0                        (ADC_CHER_CH2_0_Val << ADC_CHER_CH2_Pos)             /* (ADC_CHER) No effect. Position */
#define ADC_CHER_CH2_1                        (ADC_CHER_CH2_1_Val << ADC_CHER_CH2_Pos)             /* (ADC_CHER) Enables the corresponding channel. Position */
#define ADC_CHER_CH3_Pos                      _UINT32_(3)                                          /* (ADC_CHER) Channel 3 Enable Position */
#define ADC_CHER_CH3_Msk                      (_UINT32_(0x1) << ADC_CHER_CH3_Pos)                  /* (ADC_CHER) Channel 3 Enable Mask */
#define ADC_CHER_CH3(value)                   (ADC_CHER_CH3_Msk & (_UINT32_(value) << ADC_CHER_CH3_Pos)) /* Assignment of value for CH3 in the ADC_CHER register */
#define   ADC_CHER_CH3_0_Val                  _UINT32_(0x0)                                        /* (ADC_CHER) No effect.  */
#define   ADC_CHER_CH3_1_Val                  _UINT32_(0x1)                                        /* (ADC_CHER) Enables the corresponding channel.  */
#define ADC_CHER_CH3_0                        (ADC_CHER_CH3_0_Val << ADC_CHER_CH3_Pos)             /* (ADC_CHER) No effect. Position */
#define ADC_CHER_CH3_1                        (ADC_CHER_CH3_1_Val << ADC_CHER_CH3_Pos)             /* (ADC_CHER) Enables the corresponding channel. Position */
#define ADC_CHER_CH4_Pos                      _UINT32_(4)                                          /* (ADC_CHER) Channel 4 Enable Position */
#define ADC_CHER_CH4_Msk                      (_UINT32_(0x1) << ADC_CHER_CH4_Pos)                  /* (ADC_CHER) Channel 4 Enable Mask */
#define ADC_CHER_CH4(value)                   (ADC_CHER_CH4_Msk & (_UINT32_(value) << ADC_CHER_CH4_Pos)) /* Assignment of value for CH4 in the ADC_CHER register */
#define   ADC_CHER_CH4_0_Val                  _UINT32_(0x0)                                        /* (ADC_CHER) No effect.  */
#define   ADC_CHER_CH4_1_Val                  _UINT32_(0x1)                                        /* (ADC_CHER) Enables the corresponding channel.  */
#define ADC_CHER_CH4_0                        (ADC_CHER_CH4_0_Val << ADC_CHER_CH4_Pos)             /* (ADC_CHER) No effect. Position */
#define ADC_CHER_CH4_1                        (ADC_CHER_CH4_1_Val << ADC_CHER_CH4_Pos)             /* (ADC_CHER) Enables the corresponding channel. Position */
#define ADC_CHER_CH5_Pos                      _UINT32_(5)                                          /* (ADC_CHER) Channel 5 Enable Position */
#define ADC_CHER_CH5_Msk                      (_UINT32_(0x1) << ADC_CHER_CH5_Pos)                  /* (ADC_CHER) Channel 5 Enable Mask */
#define ADC_CHER_CH5(value)                   (ADC_CHER_CH5_Msk & (_UINT32_(value) << ADC_CHER_CH5_Pos)) /* Assignment of value for CH5 in the ADC_CHER register */
#define   ADC_CHER_CH5_0_Val                  _UINT32_(0x0)                                        /* (ADC_CHER) No effect.  */
#define   ADC_CHER_CH5_1_Val                  _UINT32_(0x1)                                        /* (ADC_CHER) Enables the corresponding channel.  */
#define ADC_CHER_CH5_0                        (ADC_CHER_CH5_0_Val << ADC_CHER_CH5_Pos)             /* (ADC_CHER) No effect. Position */
#define ADC_CHER_CH5_1                        (ADC_CHER_CH5_1_Val << ADC_CHER_CH5_Pos)             /* (ADC_CHER) Enables the corresponding channel. Position */
#define ADC_CHER_CH6_Pos                      _UINT32_(6)                                          /* (ADC_CHER) Channel 6 Enable Position */
#define ADC_CHER_CH6_Msk                      (_UINT32_(0x1) << ADC_CHER_CH6_Pos)                  /* (ADC_CHER) Channel 6 Enable Mask */
#define ADC_CHER_CH6(value)                   (ADC_CHER_CH6_Msk & (_UINT32_(value) << ADC_CHER_CH6_Pos)) /* Assignment of value for CH6 in the ADC_CHER register */
#define   ADC_CHER_CH6_0_Val                  _UINT32_(0x0)                                        /* (ADC_CHER) No effect.  */
#define   ADC_CHER_CH6_1_Val                  _UINT32_(0x1)                                        /* (ADC_CHER) Enables the corresponding channel.  */
#define ADC_CHER_CH6_0                        (ADC_CHER_CH6_0_Val << ADC_CHER_CH6_Pos)             /* (ADC_CHER) No effect. Position */
#define ADC_CHER_CH6_1                        (ADC_CHER_CH6_1_Val << ADC_CHER_CH6_Pos)             /* (ADC_CHER) Enables the corresponding channel. Position */
#define ADC_CHER_CH7_Pos                      _UINT32_(7)                                          /* (ADC_CHER) Channel 7 Enable Position */
#define ADC_CHER_CH7_Msk                      (_UINT32_(0x1) << ADC_CHER_CH7_Pos)                  /* (ADC_CHER) Channel 7 Enable Mask */
#define ADC_CHER_CH7(value)                   (ADC_CHER_CH7_Msk & (_UINT32_(value) << ADC_CHER_CH7_Pos)) /* Assignment of value for CH7 in the ADC_CHER register */
#define   ADC_CHER_CH7_0_Val                  _UINT32_(0x0)                                        /* (ADC_CHER) No effect.  */
#define   ADC_CHER_CH7_1_Val                  _UINT32_(0x1)                                        /* (ADC_CHER) Enables the corresponding channel.  */
#define ADC_CHER_CH7_0                        (ADC_CHER_CH7_0_Val << ADC_CHER_CH7_Pos)             /* (ADC_CHER) No effect. Position */
#define ADC_CHER_CH7_1                        (ADC_CHER_CH7_1_Val << ADC_CHER_CH7_Pos)             /* (ADC_CHER) Enables the corresponding channel. Position */
#define ADC_CHER_Msk                          _UINT32_(0x000000FF)                                 /* (ADC_CHER) Register Mask  */

#define ADC_CHER_CH_Pos                       _UINT32_(0)                                          /* (ADC_CHER Position) Channel 7 Enable */
#define ADC_CHER_CH_Msk                       (_UINT32_(0xFF) << ADC_CHER_CH_Pos)                  /* (ADC_CHER Mask) CH */
#define ADC_CHER_CH(value)                    (ADC_CHER_CH_Msk & (_UINT32_(value) << ADC_CHER_CH_Pos)) 

/* -------- ADC_CHDR : (ADC Offset: 0x14) ( /W 32) Channel Disable Register -------- */
#define ADC_CHDR_CH0_Pos                      _UINT32_(0)                                          /* (ADC_CHDR) Channel 0 Disable Position */
#define ADC_CHDR_CH0_Msk                      (_UINT32_(0x1) << ADC_CHDR_CH0_Pos)                  /* (ADC_CHDR) Channel 0 Disable Mask */
#define ADC_CHDR_CH0(value)                   (ADC_CHDR_CH0_Msk & (_UINT32_(value) << ADC_CHDR_CH0_Pos)) /* Assignment of value for CH0 in the ADC_CHDR register */
#define   ADC_CHDR_CH0_0_Val                  _UINT32_(0x0)                                        /* (ADC_CHDR) No effect.  */
#define   ADC_CHDR_CH0_1_Val                  _UINT32_(0x1)                                        /* (ADC_CHDR) Disables the corresponding channel.  */
#define ADC_CHDR_CH0_0                        (ADC_CHDR_CH0_0_Val << ADC_CHDR_CH0_Pos)             /* (ADC_CHDR) No effect. Position */
#define ADC_CHDR_CH0_1                        (ADC_CHDR_CH0_1_Val << ADC_CHDR_CH0_Pos)             /* (ADC_CHDR) Disables the corresponding channel. Position */
#define ADC_CHDR_CH1_Pos                      _UINT32_(1)                                          /* (ADC_CHDR) Channel 1 Disable Position */
#define ADC_CHDR_CH1_Msk                      (_UINT32_(0x1) << ADC_CHDR_CH1_Pos)                  /* (ADC_CHDR) Channel 1 Disable Mask */
#define ADC_CHDR_CH1(value)                   (ADC_CHDR_CH1_Msk & (_UINT32_(value) << ADC_CHDR_CH1_Pos)) /* Assignment of value for CH1 in the ADC_CHDR register */
#define   ADC_CHDR_CH1_0_Val                  _UINT32_(0x0)                                        /* (ADC_CHDR) No effect.  */
#define   ADC_CHDR_CH1_1_Val                  _UINT32_(0x1)                                        /* (ADC_CHDR) Disables the corresponding channel.  */
#define ADC_CHDR_CH1_0                        (ADC_CHDR_CH1_0_Val << ADC_CHDR_CH1_Pos)             /* (ADC_CHDR) No effect. Position */
#define ADC_CHDR_CH1_1                        (ADC_CHDR_CH1_1_Val << ADC_CHDR_CH1_Pos)             /* (ADC_CHDR) Disables the corresponding channel. Position */
#define ADC_CHDR_CH2_Pos                      _UINT32_(2)                                          /* (ADC_CHDR) Channel 2 Disable Position */
#define ADC_CHDR_CH2_Msk                      (_UINT32_(0x1) << ADC_CHDR_CH2_Pos)                  /* (ADC_CHDR) Channel 2 Disable Mask */
#define ADC_CHDR_CH2(value)                   (ADC_CHDR_CH2_Msk & (_UINT32_(value) << ADC_CHDR_CH2_Pos)) /* Assignment of value for CH2 in the ADC_CHDR register */
#define   ADC_CHDR_CH2_0_Val                  _UINT32_(0x0)                                        /* (ADC_CHDR) No effect.  */
#define   ADC_CHDR_CH2_1_Val                  _UINT32_(0x1)                                        /* (ADC_CHDR) Disables the corresponding channel.  */
#define ADC_CHDR_CH2_0                        (ADC_CHDR_CH2_0_Val << ADC_CHDR_CH2_Pos)             /* (ADC_CHDR) No effect. Position */
#define ADC_CHDR_CH2_1                        (ADC_CHDR_CH2_1_Val << ADC_CHDR_CH2_Pos)             /* (ADC_CHDR) Disables the corresponding channel. Position */
#define ADC_CHDR_CH3_Pos                      _UINT32_(3)                                          /* (ADC_CHDR) Channel 3 Disable Position */
#define ADC_CHDR_CH3_Msk                      (_UINT32_(0x1) << ADC_CHDR_CH3_Pos)                  /* (ADC_CHDR) Channel 3 Disable Mask */
#define ADC_CHDR_CH3(value)                   (ADC_CHDR_CH3_Msk & (_UINT32_(value) << ADC_CHDR_CH3_Pos)) /* Assignment of value for CH3 in the ADC_CHDR register */
#define   ADC_CHDR_CH3_0_Val                  _UINT32_(0x0)                                        /* (ADC_CHDR) No effect.  */
#define   ADC_CHDR_CH3_1_Val                  _UINT32_(0x1)                                        /* (ADC_CHDR) Disables the corresponding channel.  */
#define ADC_CHDR_CH3_0                        (ADC_CHDR_CH3_0_Val << ADC_CHDR_CH3_Pos)             /* (ADC_CHDR) No effect. Position */
#define ADC_CHDR_CH3_1                        (ADC_CHDR_CH3_1_Val << ADC_CHDR_CH3_Pos)             /* (ADC_CHDR) Disables the corresponding channel. Position */
#define ADC_CHDR_CH4_Pos                      _UINT32_(4)                                          /* (ADC_CHDR) Channel 4 Disable Position */
#define ADC_CHDR_CH4_Msk                      (_UINT32_(0x1) << ADC_CHDR_CH4_Pos)                  /* (ADC_CHDR) Channel 4 Disable Mask */
#define ADC_CHDR_CH4(value)                   (ADC_CHDR_CH4_Msk & (_UINT32_(value) << ADC_CHDR_CH4_Pos)) /* Assignment of value for CH4 in the ADC_CHDR register */
#define   ADC_CHDR_CH4_0_Val                  _UINT32_(0x0)                                        /* (ADC_CHDR) No effect.  */
#define   ADC_CHDR_CH4_1_Val                  _UINT32_(0x1)                                        /* (ADC_CHDR) Disables the corresponding channel.  */
#define ADC_CHDR_CH4_0                        (ADC_CHDR_CH4_0_Val << ADC_CHDR_CH4_Pos)             /* (ADC_CHDR) No effect. Position */
#define ADC_CHDR_CH4_1                        (ADC_CHDR_CH4_1_Val << ADC_CHDR_CH4_Pos)             /* (ADC_CHDR) Disables the corresponding channel. Position */
#define ADC_CHDR_CH5_Pos                      _UINT32_(5)                                          /* (ADC_CHDR) Channel 5 Disable Position */
#define ADC_CHDR_CH5_Msk                      (_UINT32_(0x1) << ADC_CHDR_CH5_Pos)                  /* (ADC_CHDR) Channel 5 Disable Mask */
#define ADC_CHDR_CH5(value)                   (ADC_CHDR_CH5_Msk & (_UINT32_(value) << ADC_CHDR_CH5_Pos)) /* Assignment of value for CH5 in the ADC_CHDR register */
#define   ADC_CHDR_CH5_0_Val                  _UINT32_(0x0)                                        /* (ADC_CHDR) No effect.  */
#define   ADC_CHDR_CH5_1_Val                  _UINT32_(0x1)                                        /* (ADC_CHDR) Disables the corresponding channel.  */
#define ADC_CHDR_CH5_0                        (ADC_CHDR_CH5_0_Val << ADC_CHDR_CH5_Pos)             /* (ADC_CHDR) No effect. Position */
#define ADC_CHDR_CH5_1                        (ADC_CHDR_CH5_1_Val << ADC_CHDR_CH5_Pos)             /* (ADC_CHDR) Disables the corresponding channel. Position */
#define ADC_CHDR_CH6_Pos                      _UINT32_(6)                                          /* (ADC_CHDR) Channel 6 Disable Position */
#define ADC_CHDR_CH6_Msk                      (_UINT32_(0x1) << ADC_CHDR_CH6_Pos)                  /* (ADC_CHDR) Channel 6 Disable Mask */
#define ADC_CHDR_CH6(value)                   (ADC_CHDR_CH6_Msk & (_UINT32_(value) << ADC_CHDR_CH6_Pos)) /* Assignment of value for CH6 in the ADC_CHDR register */
#define   ADC_CHDR_CH6_0_Val                  _UINT32_(0x0)                                        /* (ADC_CHDR) No effect.  */
#define   ADC_CHDR_CH6_1_Val                  _UINT32_(0x1)                                        /* (ADC_CHDR) Disables the corresponding channel.  */
#define ADC_CHDR_CH6_0                        (ADC_CHDR_CH6_0_Val << ADC_CHDR_CH6_Pos)             /* (ADC_CHDR) No effect. Position */
#define ADC_CHDR_CH6_1                        (ADC_CHDR_CH6_1_Val << ADC_CHDR_CH6_Pos)             /* (ADC_CHDR) Disables the corresponding channel. Position */
#define ADC_CHDR_CH7_Pos                      _UINT32_(7)                                          /* (ADC_CHDR) Channel 7 Disable Position */
#define ADC_CHDR_CH7_Msk                      (_UINT32_(0x1) << ADC_CHDR_CH7_Pos)                  /* (ADC_CHDR) Channel 7 Disable Mask */
#define ADC_CHDR_CH7(value)                   (ADC_CHDR_CH7_Msk & (_UINT32_(value) << ADC_CHDR_CH7_Pos)) /* Assignment of value for CH7 in the ADC_CHDR register */
#define   ADC_CHDR_CH7_0_Val                  _UINT32_(0x0)                                        /* (ADC_CHDR) No effect.  */
#define   ADC_CHDR_CH7_1_Val                  _UINT32_(0x1)                                        /* (ADC_CHDR) Disables the corresponding channel.  */
#define ADC_CHDR_CH7_0                        (ADC_CHDR_CH7_0_Val << ADC_CHDR_CH7_Pos)             /* (ADC_CHDR) No effect. Position */
#define ADC_CHDR_CH7_1                        (ADC_CHDR_CH7_1_Val << ADC_CHDR_CH7_Pos)             /* (ADC_CHDR) Disables the corresponding channel. Position */
#define ADC_CHDR_Msk                          _UINT32_(0x000000FF)                                 /* (ADC_CHDR) Register Mask  */

#define ADC_CHDR_CH_Pos                       _UINT32_(0)                                          /* (ADC_CHDR Position) Channel 7 Disable */
#define ADC_CHDR_CH_Msk                       (_UINT32_(0xFF) << ADC_CHDR_CH_Pos)                  /* (ADC_CHDR Mask) CH */
#define ADC_CHDR_CH(value)                    (ADC_CHDR_CH_Msk & (_UINT32_(value) << ADC_CHDR_CH_Pos)) 

/* -------- ADC_CHSR : (ADC Offset: 0x18) ( R/ 32) Channel Status Register -------- */
#define ADC_CHSR_RESETVALUE                   _UINT32_(0x00)                                       /*  (ADC_CHSR) Channel Status Register  Reset Value */

#define ADC_CHSR_CH0_Pos                      _UINT32_(0)                                          /* (ADC_CHSR) Channel 0 Status Position */
#define ADC_CHSR_CH0_Msk                      (_UINT32_(0x1) << ADC_CHSR_CH0_Pos)                  /* (ADC_CHSR) Channel 0 Status Mask */
#define ADC_CHSR_CH0(value)                   (ADC_CHSR_CH0_Msk & (_UINT32_(value) << ADC_CHSR_CH0_Pos)) /* Assignment of value for CH0 in the ADC_CHSR register */
#define   ADC_CHSR_CH0_0_Val                  _UINT32_(0x0)                                        /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled.  */
#define   ADC_CHSR_CH0_1_Val                  _UINT32_(0x1)                                        /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled.  */
#define ADC_CHSR_CH0_0                        (ADC_CHSR_CH0_0_Val << ADC_CHSR_CH0_Pos)             /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled. Position */
#define ADC_CHSR_CH0_1                        (ADC_CHSR_CH0_1_Val << ADC_CHSR_CH0_Pos)             /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled. Position */
#define ADC_CHSR_CH1_Pos                      _UINT32_(1)                                          /* (ADC_CHSR) Channel 1 Status Position */
#define ADC_CHSR_CH1_Msk                      (_UINT32_(0x1) << ADC_CHSR_CH1_Pos)                  /* (ADC_CHSR) Channel 1 Status Mask */
#define ADC_CHSR_CH1(value)                   (ADC_CHSR_CH1_Msk & (_UINT32_(value) << ADC_CHSR_CH1_Pos)) /* Assignment of value for CH1 in the ADC_CHSR register */
#define   ADC_CHSR_CH1_0_Val                  _UINT32_(0x0)                                        /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled.  */
#define   ADC_CHSR_CH1_1_Val                  _UINT32_(0x1)                                        /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled.  */
#define ADC_CHSR_CH1_0                        (ADC_CHSR_CH1_0_Val << ADC_CHSR_CH1_Pos)             /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled. Position */
#define ADC_CHSR_CH1_1                        (ADC_CHSR_CH1_1_Val << ADC_CHSR_CH1_Pos)             /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled. Position */
#define ADC_CHSR_CH2_Pos                      _UINT32_(2)                                          /* (ADC_CHSR) Channel 2 Status Position */
#define ADC_CHSR_CH2_Msk                      (_UINT32_(0x1) << ADC_CHSR_CH2_Pos)                  /* (ADC_CHSR) Channel 2 Status Mask */
#define ADC_CHSR_CH2(value)                   (ADC_CHSR_CH2_Msk & (_UINT32_(value) << ADC_CHSR_CH2_Pos)) /* Assignment of value for CH2 in the ADC_CHSR register */
#define   ADC_CHSR_CH2_0_Val                  _UINT32_(0x0)                                        /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled.  */
#define   ADC_CHSR_CH2_1_Val                  _UINT32_(0x1)                                        /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled.  */
#define ADC_CHSR_CH2_0                        (ADC_CHSR_CH2_0_Val << ADC_CHSR_CH2_Pos)             /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled. Position */
#define ADC_CHSR_CH2_1                        (ADC_CHSR_CH2_1_Val << ADC_CHSR_CH2_Pos)             /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled. Position */
#define ADC_CHSR_CH3_Pos                      _UINT32_(3)                                          /* (ADC_CHSR) Channel 3 Status Position */
#define ADC_CHSR_CH3_Msk                      (_UINT32_(0x1) << ADC_CHSR_CH3_Pos)                  /* (ADC_CHSR) Channel 3 Status Mask */
#define ADC_CHSR_CH3(value)                   (ADC_CHSR_CH3_Msk & (_UINT32_(value) << ADC_CHSR_CH3_Pos)) /* Assignment of value for CH3 in the ADC_CHSR register */
#define   ADC_CHSR_CH3_0_Val                  _UINT32_(0x0)                                        /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled.  */
#define   ADC_CHSR_CH3_1_Val                  _UINT32_(0x1)                                        /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled.  */
#define ADC_CHSR_CH3_0                        (ADC_CHSR_CH3_0_Val << ADC_CHSR_CH3_Pos)             /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled. Position */
#define ADC_CHSR_CH3_1                        (ADC_CHSR_CH3_1_Val << ADC_CHSR_CH3_Pos)             /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled. Position */
#define ADC_CHSR_CH4_Pos                      _UINT32_(4)                                          /* (ADC_CHSR) Channel 4 Status Position */
#define ADC_CHSR_CH4_Msk                      (_UINT32_(0x1) << ADC_CHSR_CH4_Pos)                  /* (ADC_CHSR) Channel 4 Status Mask */
#define ADC_CHSR_CH4(value)                   (ADC_CHSR_CH4_Msk & (_UINT32_(value) << ADC_CHSR_CH4_Pos)) /* Assignment of value for CH4 in the ADC_CHSR register */
#define   ADC_CHSR_CH4_0_Val                  _UINT32_(0x0)                                        /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled.  */
#define   ADC_CHSR_CH4_1_Val                  _UINT32_(0x1)                                        /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled.  */
#define ADC_CHSR_CH4_0                        (ADC_CHSR_CH4_0_Val << ADC_CHSR_CH4_Pos)             /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled. Position */
#define ADC_CHSR_CH4_1                        (ADC_CHSR_CH4_1_Val << ADC_CHSR_CH4_Pos)             /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled. Position */
#define ADC_CHSR_CH5_Pos                      _UINT32_(5)                                          /* (ADC_CHSR) Channel 5 Status Position */
#define ADC_CHSR_CH5_Msk                      (_UINT32_(0x1) << ADC_CHSR_CH5_Pos)                  /* (ADC_CHSR) Channel 5 Status Mask */
#define ADC_CHSR_CH5(value)                   (ADC_CHSR_CH5_Msk & (_UINT32_(value) << ADC_CHSR_CH5_Pos)) /* Assignment of value for CH5 in the ADC_CHSR register */
#define   ADC_CHSR_CH5_0_Val                  _UINT32_(0x0)                                        /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled.  */
#define   ADC_CHSR_CH5_1_Val                  _UINT32_(0x1)                                        /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled.  */
#define ADC_CHSR_CH5_0                        (ADC_CHSR_CH5_0_Val << ADC_CHSR_CH5_Pos)             /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled. Position */
#define ADC_CHSR_CH5_1                        (ADC_CHSR_CH5_1_Val << ADC_CHSR_CH5_Pos)             /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled. Position */
#define ADC_CHSR_CH6_Pos                      _UINT32_(6)                                          /* (ADC_CHSR) Channel 6 Status Position */
#define ADC_CHSR_CH6_Msk                      (_UINT32_(0x1) << ADC_CHSR_CH6_Pos)                  /* (ADC_CHSR) Channel 6 Status Mask */
#define ADC_CHSR_CH6(value)                   (ADC_CHSR_CH6_Msk & (_UINT32_(value) << ADC_CHSR_CH6_Pos)) /* Assignment of value for CH6 in the ADC_CHSR register */
#define   ADC_CHSR_CH6_0_Val                  _UINT32_(0x0)                                        /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled.  */
#define   ADC_CHSR_CH6_1_Val                  _UINT32_(0x1)                                        /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled.  */
#define ADC_CHSR_CH6_0                        (ADC_CHSR_CH6_0_Val << ADC_CHSR_CH6_Pos)             /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled. Position */
#define ADC_CHSR_CH6_1                        (ADC_CHSR_CH6_1_Val << ADC_CHSR_CH6_Pos)             /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled. Position */
#define ADC_CHSR_CH7_Pos                      _UINT32_(7)                                          /* (ADC_CHSR) Channel 7 Status Position */
#define ADC_CHSR_CH7_Msk                      (_UINT32_(0x1) << ADC_CHSR_CH7_Pos)                  /* (ADC_CHSR) Channel 7 Status Mask */
#define ADC_CHSR_CH7(value)                   (ADC_CHSR_CH7_Msk & (_UINT32_(value) << ADC_CHSR_CH7_Pos)) /* Assignment of value for CH7 in the ADC_CHSR register */
#define   ADC_CHSR_CH7_0_Val                  _UINT32_(0x0)                                        /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled.  */
#define   ADC_CHSR_CH7_1_Val                  _UINT32_(0x1)                                        /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled.  */
#define ADC_CHSR_CH7_0                        (ADC_CHSR_CH7_0_Val << ADC_CHSR_CH7_Pos)             /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is disabled. Position */
#define ADC_CHSR_CH7_1                        (ADC_CHSR_CH7_1_Val << ADC_CHSR_CH7_Pos)             /* (ADC_CHSR) The corresponding channel (or part of sequence, see ADC_SEQyR.USCHx) is enabled. Position */
#define ADC_CHSR_Msk                          _UINT32_(0x000000FF)                                 /* (ADC_CHSR) Register Mask  */

#define ADC_CHSR_CH_Pos                       _UINT32_(0)                                          /* (ADC_CHSR Position) Channel 7 Status */
#define ADC_CHSR_CH_Msk                       (_UINT32_(0xFF) << ADC_CHSR_CH_Pos)                  /* (ADC_CHSR Mask) CH */
#define ADC_CHSR_CH(value)                    (ADC_CHSR_CH_Msk & (_UINT32_(value) << ADC_CHSR_CH_Pos)) 

/* -------- ADC_LCDR : (ADC Offset: 0x20) ( R/ 32) Last Converted Data Register -------- */
#define ADC_LCDR_RESETVALUE                   _UINT32_(0x00)                                       /*  (ADC_LCDR) Last Converted Data Register  Reset Value */

#define ADC_LCDR_LDATA_Pos                    _UINT32_(0)                                          /* (ADC_LCDR) Last Data Converted Position */
#define ADC_LCDR_LDATA_Msk                    (_UINT32_(0xFFFF) << ADC_LCDR_LDATA_Pos)             /* (ADC_LCDR) Last Data Converted Mask */
#define ADC_LCDR_LDATA(value)                 (ADC_LCDR_LDATA_Msk & (_UINT32_(value) << ADC_LCDR_LDATA_Pos)) /* Assignment of value for LDATA in the ADC_LCDR register */
#define ADC_LCDR_CHNBOSR_Pos                  _UINT32_(24)                                         /* (ADC_LCDR) Channel Number in Oversampling Mode Position */
#define ADC_LCDR_CHNBOSR_Msk                  (_UINT32_(0x1F) << ADC_LCDR_CHNBOSR_Pos)             /* (ADC_LCDR) Channel Number in Oversampling Mode Mask */
#define ADC_LCDR_CHNBOSR(value)               (ADC_LCDR_CHNBOSR_Msk & (_UINT32_(value) << ADC_LCDR_CHNBOSR_Pos)) /* Assignment of value for CHNBOSR in the ADC_LCDR register */
#define ADC_LCDR_Msk                          _UINT32_(0x1F00FFFF)                                 /* (ADC_LCDR) Register Mask  */


/* -------- ADC_IER : (ADC Offset: 0x24) ( /W 32) Interrupt Enable Register -------- */
#define ADC_IER_EOC0_Pos                      _UINT32_(0)                                          /* (ADC_IER) End of Conversion Interrupt Enable 0 Position */
#define ADC_IER_EOC0_Msk                      (_UINT32_(0x1) << ADC_IER_EOC0_Pos)                  /* (ADC_IER) End of Conversion Interrupt Enable 0 Mask */
#define ADC_IER_EOC0(value)                   (ADC_IER_EOC0_Msk & (_UINT32_(value) << ADC_IER_EOC0_Pos)) /* Assignment of value for EOC0 in the ADC_IER register */
#define ADC_IER_EOC1_Pos                      _UINT32_(1)                                          /* (ADC_IER) End of Conversion Interrupt Enable 1 Position */
#define ADC_IER_EOC1_Msk                      (_UINT32_(0x1) << ADC_IER_EOC1_Pos)                  /* (ADC_IER) End of Conversion Interrupt Enable 1 Mask */
#define ADC_IER_EOC1(value)                   (ADC_IER_EOC1_Msk & (_UINT32_(value) << ADC_IER_EOC1_Pos)) /* Assignment of value for EOC1 in the ADC_IER register */
#define ADC_IER_EOC2_Pos                      _UINT32_(2)                                          /* (ADC_IER) End of Conversion Interrupt Enable 2 Position */
#define ADC_IER_EOC2_Msk                      (_UINT32_(0x1) << ADC_IER_EOC2_Pos)                  /* (ADC_IER) End of Conversion Interrupt Enable 2 Mask */
#define ADC_IER_EOC2(value)                   (ADC_IER_EOC2_Msk & (_UINT32_(value) << ADC_IER_EOC2_Pos)) /* Assignment of value for EOC2 in the ADC_IER register */
#define ADC_IER_EOC3_Pos                      _UINT32_(3)                                          /* (ADC_IER) End of Conversion Interrupt Enable 3 Position */
#define ADC_IER_EOC3_Msk                      (_UINT32_(0x1) << ADC_IER_EOC3_Pos)                  /* (ADC_IER) End of Conversion Interrupt Enable 3 Mask */
#define ADC_IER_EOC3(value)                   (ADC_IER_EOC3_Msk & (_UINT32_(value) << ADC_IER_EOC3_Pos)) /* Assignment of value for EOC3 in the ADC_IER register */
#define ADC_IER_EOC4_Pos                      _UINT32_(4)                                          /* (ADC_IER) End of Conversion Interrupt Enable 4 Position */
#define ADC_IER_EOC4_Msk                      (_UINT32_(0x1) << ADC_IER_EOC4_Pos)                  /* (ADC_IER) End of Conversion Interrupt Enable 4 Mask */
#define ADC_IER_EOC4(value)                   (ADC_IER_EOC4_Msk & (_UINT32_(value) << ADC_IER_EOC4_Pos)) /* Assignment of value for EOC4 in the ADC_IER register */
#define ADC_IER_EOC5_Pos                      _UINT32_(5)                                          /* (ADC_IER) End of Conversion Interrupt Enable 5 Position */
#define ADC_IER_EOC5_Msk                      (_UINT32_(0x1) << ADC_IER_EOC5_Pos)                  /* (ADC_IER) End of Conversion Interrupt Enable 5 Mask */
#define ADC_IER_EOC5(value)                   (ADC_IER_EOC5_Msk & (_UINT32_(value) << ADC_IER_EOC5_Pos)) /* Assignment of value for EOC5 in the ADC_IER register */
#define ADC_IER_EOC6_Pos                      _UINT32_(6)                                          /* (ADC_IER) End of Conversion Interrupt Enable 6 Position */
#define ADC_IER_EOC6_Msk                      (_UINT32_(0x1) << ADC_IER_EOC6_Pos)                  /* (ADC_IER) End of Conversion Interrupt Enable 6 Mask */
#define ADC_IER_EOC6(value)                   (ADC_IER_EOC6_Msk & (_UINT32_(value) << ADC_IER_EOC6_Pos)) /* Assignment of value for EOC6 in the ADC_IER register */
#define ADC_IER_EOC7_Pos                      _UINT32_(7)                                          /* (ADC_IER) End of Conversion Interrupt Enable 7 Position */
#define ADC_IER_EOC7_Msk                      (_UINT32_(0x1) << ADC_IER_EOC7_Pos)                  /* (ADC_IER) End of Conversion Interrupt Enable 7 Mask */
#define ADC_IER_EOC7(value)                   (ADC_IER_EOC7_Msk & (_UINT32_(value) << ADC_IER_EOC7_Pos)) /* Assignment of value for EOC7 in the ADC_IER register */
#define ADC_IER_LCCHG_Pos                     _UINT32_(19)                                         /* (ADC_IER) Last Channel Change Interrupt Enable Position */
#define ADC_IER_LCCHG_Msk                     (_UINT32_(0x1) << ADC_IER_LCCHG_Pos)                 /* (ADC_IER) Last Channel Change Interrupt Enable Mask */
#define ADC_IER_LCCHG(value)                  (ADC_IER_LCCHG_Msk & (_UINT32_(value) << ADC_IER_LCCHG_Pos)) /* Assignment of value for LCCHG in the ADC_IER register */
#define ADC_IER_XRDY_Pos                      _UINT32_(20)                                         /* (ADC_IER) Touchscreen Measure XPOS Ready Interrupt Enable Position */
#define ADC_IER_XRDY_Msk                      (_UINT32_(0x1) << ADC_IER_XRDY_Pos)                  /* (ADC_IER) Touchscreen Measure XPOS Ready Interrupt Enable Mask */
#define ADC_IER_XRDY(value)                   (ADC_IER_XRDY_Msk & (_UINT32_(value) << ADC_IER_XRDY_Pos)) /* Assignment of value for XRDY in the ADC_IER register */
#define ADC_IER_YRDY_Pos                      _UINT32_(21)                                         /* (ADC_IER) Touchscreen Measure YPOS Ready Interrupt Enable Position */
#define ADC_IER_YRDY_Msk                      (_UINT32_(0x1) << ADC_IER_YRDY_Pos)                  /* (ADC_IER) Touchscreen Measure YPOS Ready Interrupt Enable Mask */
#define ADC_IER_YRDY(value)                   (ADC_IER_YRDY_Msk & (_UINT32_(value) << ADC_IER_YRDY_Pos)) /* Assignment of value for YRDY in the ADC_IER register */
#define ADC_IER_PRDY_Pos                      _UINT32_(22)                                         /* (ADC_IER) Touchscreen Measure Pressure Ready Interrupt Enable Position */
#define ADC_IER_PRDY_Msk                      (_UINT32_(0x1) << ADC_IER_PRDY_Pos)                  /* (ADC_IER) Touchscreen Measure Pressure Ready Interrupt Enable Mask */
#define ADC_IER_PRDY(value)                   (ADC_IER_PRDY_Msk & (_UINT32_(value) << ADC_IER_PRDY_Pos)) /* Assignment of value for PRDY in the ADC_IER register */
#define ADC_IER_DRDY_Pos                      _UINT32_(24)                                         /* (ADC_IER) Data Ready Interrupt Enable Position */
#define ADC_IER_DRDY_Msk                      (_UINT32_(0x1) << ADC_IER_DRDY_Pos)                  /* (ADC_IER) Data Ready Interrupt Enable Mask */
#define ADC_IER_DRDY(value)                   (ADC_IER_DRDY_Msk & (_UINT32_(value) << ADC_IER_DRDY_Pos)) /* Assignment of value for DRDY in the ADC_IER register */
#define ADC_IER_GOVRE_Pos                     _UINT32_(25)                                         /* (ADC_IER) General Overrun Error Interrupt Enable Position */
#define ADC_IER_GOVRE_Msk                     (_UINT32_(0x1) << ADC_IER_GOVRE_Pos)                 /* (ADC_IER) General Overrun Error Interrupt Enable Mask */
#define ADC_IER_GOVRE(value)                  (ADC_IER_GOVRE_Msk & (_UINT32_(value) << ADC_IER_GOVRE_Pos)) /* Assignment of value for GOVRE in the ADC_IER register */
#define ADC_IER_COMPE_Pos                     _UINT32_(26)                                         /* (ADC_IER) Comparison Event Interrupt Enable Position */
#define ADC_IER_COMPE_Msk                     (_UINT32_(0x1) << ADC_IER_COMPE_Pos)                 /* (ADC_IER) Comparison Event Interrupt Enable Mask */
#define ADC_IER_COMPE(value)                  (ADC_IER_COMPE_Msk & (_UINT32_(value) << ADC_IER_COMPE_Pos)) /* Assignment of value for COMPE in the ADC_IER register */
#define ADC_IER_PEN_Pos                       _UINT32_(29)                                         /* (ADC_IER) Pen Contact Interrupt Enable Position */
#define ADC_IER_PEN_Msk                       (_UINT32_(0x1) << ADC_IER_PEN_Pos)                   /* (ADC_IER) Pen Contact Interrupt Enable Mask */
#define ADC_IER_PEN(value)                    (ADC_IER_PEN_Msk & (_UINT32_(value) << ADC_IER_PEN_Pos)) /* Assignment of value for PEN in the ADC_IER register */
#define ADC_IER_NOPEN_Pos                     _UINT32_(30)                                         /* (ADC_IER) No Pen Contact Interrupt Enable Position */
#define ADC_IER_NOPEN_Msk                     (_UINT32_(0x1) << ADC_IER_NOPEN_Pos)                 /* (ADC_IER) No Pen Contact Interrupt Enable Mask */
#define ADC_IER_NOPEN(value)                  (ADC_IER_NOPEN_Msk & (_UINT32_(value) << ADC_IER_NOPEN_Pos)) /* Assignment of value for NOPEN in the ADC_IER register */
#define ADC_IER_Msk                           _UINT32_(0x677800FF)                                 /* (ADC_IER) Register Mask  */

#define ADC_IER_EOC_Pos                       _UINT32_(0)                                          /* (ADC_IER Position) End of Conversion Interrupt Enable x */
#define ADC_IER_EOC_Msk                       (_UINT32_(0xFF) << ADC_IER_EOC_Pos)                  /* (ADC_IER Mask) EOC */
#define ADC_IER_EOC(value)                    (ADC_IER_EOC_Msk & (_UINT32_(value) << ADC_IER_EOC_Pos)) 

/* -------- ADC_IDR : (ADC Offset: 0x28) ( /W 32) Interrupt Disable Register -------- */
#define ADC_IDR_EOC0_Pos                      _UINT32_(0)                                          /* (ADC_IDR) End of Conversion Interrupt Disable 0 Position */
#define ADC_IDR_EOC0_Msk                      (_UINT32_(0x1) << ADC_IDR_EOC0_Pos)                  /* (ADC_IDR) End of Conversion Interrupt Disable 0 Mask */
#define ADC_IDR_EOC0(value)                   (ADC_IDR_EOC0_Msk & (_UINT32_(value) << ADC_IDR_EOC0_Pos)) /* Assignment of value for EOC0 in the ADC_IDR register */
#define ADC_IDR_EOC1_Pos                      _UINT32_(1)                                          /* (ADC_IDR) End of Conversion Interrupt Disable 1 Position */
#define ADC_IDR_EOC1_Msk                      (_UINT32_(0x1) << ADC_IDR_EOC1_Pos)                  /* (ADC_IDR) End of Conversion Interrupt Disable 1 Mask */
#define ADC_IDR_EOC1(value)                   (ADC_IDR_EOC1_Msk & (_UINT32_(value) << ADC_IDR_EOC1_Pos)) /* Assignment of value for EOC1 in the ADC_IDR register */
#define ADC_IDR_EOC2_Pos                      _UINT32_(2)                                          /* (ADC_IDR) End of Conversion Interrupt Disable 2 Position */
#define ADC_IDR_EOC2_Msk                      (_UINT32_(0x1) << ADC_IDR_EOC2_Pos)                  /* (ADC_IDR) End of Conversion Interrupt Disable 2 Mask */
#define ADC_IDR_EOC2(value)                   (ADC_IDR_EOC2_Msk & (_UINT32_(value) << ADC_IDR_EOC2_Pos)) /* Assignment of value for EOC2 in the ADC_IDR register */
#define ADC_IDR_EOC3_Pos                      _UINT32_(3)                                          /* (ADC_IDR) End of Conversion Interrupt Disable 3 Position */
#define ADC_IDR_EOC3_Msk                      (_UINT32_(0x1) << ADC_IDR_EOC3_Pos)                  /* (ADC_IDR) End of Conversion Interrupt Disable 3 Mask */
#define ADC_IDR_EOC3(value)                   (ADC_IDR_EOC3_Msk & (_UINT32_(value) << ADC_IDR_EOC3_Pos)) /* Assignment of value for EOC3 in the ADC_IDR register */
#define ADC_IDR_EOC4_Pos                      _UINT32_(4)                                          /* (ADC_IDR) End of Conversion Interrupt Disable 4 Position */
#define ADC_IDR_EOC4_Msk                      (_UINT32_(0x1) << ADC_IDR_EOC4_Pos)                  /* (ADC_IDR) End of Conversion Interrupt Disable 4 Mask */
#define ADC_IDR_EOC4(value)                   (ADC_IDR_EOC4_Msk & (_UINT32_(value) << ADC_IDR_EOC4_Pos)) /* Assignment of value for EOC4 in the ADC_IDR register */
#define ADC_IDR_EOC5_Pos                      _UINT32_(5)                                          /* (ADC_IDR) End of Conversion Interrupt Disable 5 Position */
#define ADC_IDR_EOC5_Msk                      (_UINT32_(0x1) << ADC_IDR_EOC5_Pos)                  /* (ADC_IDR) End of Conversion Interrupt Disable 5 Mask */
#define ADC_IDR_EOC5(value)                   (ADC_IDR_EOC5_Msk & (_UINT32_(value) << ADC_IDR_EOC5_Pos)) /* Assignment of value for EOC5 in the ADC_IDR register */
#define ADC_IDR_EOC6_Pos                      _UINT32_(6)                                          /* (ADC_IDR) End of Conversion Interrupt Disable 6 Position */
#define ADC_IDR_EOC6_Msk                      (_UINT32_(0x1) << ADC_IDR_EOC6_Pos)                  /* (ADC_IDR) End of Conversion Interrupt Disable 6 Mask */
#define ADC_IDR_EOC6(value)                   (ADC_IDR_EOC6_Msk & (_UINT32_(value) << ADC_IDR_EOC6_Pos)) /* Assignment of value for EOC6 in the ADC_IDR register */
#define ADC_IDR_EOC7_Pos                      _UINT32_(7)                                          /* (ADC_IDR) End of Conversion Interrupt Disable 7 Position */
#define ADC_IDR_EOC7_Msk                      (_UINT32_(0x1) << ADC_IDR_EOC7_Pos)                  /* (ADC_IDR) End of Conversion Interrupt Disable 7 Mask */
#define ADC_IDR_EOC7(value)                   (ADC_IDR_EOC7_Msk & (_UINT32_(value) << ADC_IDR_EOC7_Pos)) /* Assignment of value for EOC7 in the ADC_IDR register */
#define ADC_IDR_LCCHG_Pos                     _UINT32_(19)                                         /* (ADC_IDR) Last Channel Change Interrupt Disable Position */
#define ADC_IDR_LCCHG_Msk                     (_UINT32_(0x1) << ADC_IDR_LCCHG_Pos)                 /* (ADC_IDR) Last Channel Change Interrupt Disable Mask */
#define ADC_IDR_LCCHG(value)                  (ADC_IDR_LCCHG_Msk & (_UINT32_(value) << ADC_IDR_LCCHG_Pos)) /* Assignment of value for LCCHG in the ADC_IDR register */
#define ADC_IDR_XRDY_Pos                      _UINT32_(20)                                         /* (ADC_IDR) Touchscreen Measure XPOS Ready Interrupt Disable Position */
#define ADC_IDR_XRDY_Msk                      (_UINT32_(0x1) << ADC_IDR_XRDY_Pos)                  /* (ADC_IDR) Touchscreen Measure XPOS Ready Interrupt Disable Mask */
#define ADC_IDR_XRDY(value)                   (ADC_IDR_XRDY_Msk & (_UINT32_(value) << ADC_IDR_XRDY_Pos)) /* Assignment of value for XRDY in the ADC_IDR register */
#define ADC_IDR_YRDY_Pos                      _UINT32_(21)                                         /* (ADC_IDR) Touchscreen Measure YPOS Ready Interrupt Disable Position */
#define ADC_IDR_YRDY_Msk                      (_UINT32_(0x1) << ADC_IDR_YRDY_Pos)                  /* (ADC_IDR) Touchscreen Measure YPOS Ready Interrupt Disable Mask */
#define ADC_IDR_YRDY(value)                   (ADC_IDR_YRDY_Msk & (_UINT32_(value) << ADC_IDR_YRDY_Pos)) /* Assignment of value for YRDY in the ADC_IDR register */
#define ADC_IDR_PRDY_Pos                      _UINT32_(22)                                         /* (ADC_IDR) Touchscreen Measure Pressure Ready Interrupt Disable Position */
#define ADC_IDR_PRDY_Msk                      (_UINT32_(0x1) << ADC_IDR_PRDY_Pos)                  /* (ADC_IDR) Touchscreen Measure Pressure Ready Interrupt Disable Mask */
#define ADC_IDR_PRDY(value)                   (ADC_IDR_PRDY_Msk & (_UINT32_(value) << ADC_IDR_PRDY_Pos)) /* Assignment of value for PRDY in the ADC_IDR register */
#define ADC_IDR_DRDY_Pos                      _UINT32_(24)                                         /* (ADC_IDR) Data Ready Interrupt Disable Position */
#define ADC_IDR_DRDY_Msk                      (_UINT32_(0x1) << ADC_IDR_DRDY_Pos)                  /* (ADC_IDR) Data Ready Interrupt Disable Mask */
#define ADC_IDR_DRDY(value)                   (ADC_IDR_DRDY_Msk & (_UINT32_(value) << ADC_IDR_DRDY_Pos)) /* Assignment of value for DRDY in the ADC_IDR register */
#define ADC_IDR_GOVRE_Pos                     _UINT32_(25)                                         /* (ADC_IDR) General Overrun Error Interrupt Disable Position */
#define ADC_IDR_GOVRE_Msk                     (_UINT32_(0x1) << ADC_IDR_GOVRE_Pos)                 /* (ADC_IDR) General Overrun Error Interrupt Disable Mask */
#define ADC_IDR_GOVRE(value)                  (ADC_IDR_GOVRE_Msk & (_UINT32_(value) << ADC_IDR_GOVRE_Pos)) /* Assignment of value for GOVRE in the ADC_IDR register */
#define ADC_IDR_COMPE_Pos                     _UINT32_(26)                                         /* (ADC_IDR) Comparison Event Interrupt Disable Position */
#define ADC_IDR_COMPE_Msk                     (_UINT32_(0x1) << ADC_IDR_COMPE_Pos)                 /* (ADC_IDR) Comparison Event Interrupt Disable Mask */
#define ADC_IDR_COMPE(value)                  (ADC_IDR_COMPE_Msk & (_UINT32_(value) << ADC_IDR_COMPE_Pos)) /* Assignment of value for COMPE in the ADC_IDR register */
#define ADC_IDR_PEN_Pos                       _UINT32_(29)                                         /* (ADC_IDR) Pen Contact Interrupt Disable Position */
#define ADC_IDR_PEN_Msk                       (_UINT32_(0x1) << ADC_IDR_PEN_Pos)                   /* (ADC_IDR) Pen Contact Interrupt Disable Mask */
#define ADC_IDR_PEN(value)                    (ADC_IDR_PEN_Msk & (_UINT32_(value) << ADC_IDR_PEN_Pos)) /* Assignment of value for PEN in the ADC_IDR register */
#define ADC_IDR_NOPEN_Pos                     _UINT32_(30)                                         /* (ADC_IDR) No Pen Contact Interrupt Disable Position */
#define ADC_IDR_NOPEN_Msk                     (_UINT32_(0x1) << ADC_IDR_NOPEN_Pos)                 /* (ADC_IDR) No Pen Contact Interrupt Disable Mask */
#define ADC_IDR_NOPEN(value)                  (ADC_IDR_NOPEN_Msk & (_UINT32_(value) << ADC_IDR_NOPEN_Pos)) /* Assignment of value for NOPEN in the ADC_IDR register */
#define ADC_IDR_Msk                           _UINT32_(0x677800FF)                                 /* (ADC_IDR) Register Mask  */

#define ADC_IDR_EOC_Pos                       _UINT32_(0)                                          /* (ADC_IDR Position) End of Conversion Interrupt Disable x */
#define ADC_IDR_EOC_Msk                       (_UINT32_(0xFF) << ADC_IDR_EOC_Pos)                  /* (ADC_IDR Mask) EOC */
#define ADC_IDR_EOC(value)                    (ADC_IDR_EOC_Msk & (_UINT32_(value) << ADC_IDR_EOC_Pos)) 

/* -------- ADC_IMR : (ADC Offset: 0x2C) ( R/ 32) Interrupt Mask Register -------- */
#define ADC_IMR_RESETVALUE                    _UINT32_(0x00)                                       /*  (ADC_IMR) Interrupt Mask Register  Reset Value */

#define ADC_IMR_EOC0_Pos                      _UINT32_(0)                                          /* (ADC_IMR) End of Conversion Interrupt Mask 0 Position */
#define ADC_IMR_EOC0_Msk                      (_UINT32_(0x1) << ADC_IMR_EOC0_Pos)                  /* (ADC_IMR) End of Conversion Interrupt Mask 0 Mask */
#define ADC_IMR_EOC0(value)                   (ADC_IMR_EOC0_Msk & (_UINT32_(value) << ADC_IMR_EOC0_Pos)) /* Assignment of value for EOC0 in the ADC_IMR register */
#define ADC_IMR_EOC1_Pos                      _UINT32_(1)                                          /* (ADC_IMR) End of Conversion Interrupt Mask 1 Position */
#define ADC_IMR_EOC1_Msk                      (_UINT32_(0x1) << ADC_IMR_EOC1_Pos)                  /* (ADC_IMR) End of Conversion Interrupt Mask 1 Mask */
#define ADC_IMR_EOC1(value)                   (ADC_IMR_EOC1_Msk & (_UINT32_(value) << ADC_IMR_EOC1_Pos)) /* Assignment of value for EOC1 in the ADC_IMR register */
#define ADC_IMR_EOC2_Pos                      _UINT32_(2)                                          /* (ADC_IMR) End of Conversion Interrupt Mask 2 Position */
#define ADC_IMR_EOC2_Msk                      (_UINT32_(0x1) << ADC_IMR_EOC2_Pos)                  /* (ADC_IMR) End of Conversion Interrupt Mask 2 Mask */
#define ADC_IMR_EOC2(value)                   (ADC_IMR_EOC2_Msk & (_UINT32_(value) << ADC_IMR_EOC2_Pos)) /* Assignment of value for EOC2 in the ADC_IMR register */
#define ADC_IMR_EOC3_Pos                      _UINT32_(3)                                          /* (ADC_IMR) End of Conversion Interrupt Mask 3 Position */
#define ADC_IMR_EOC3_Msk                      (_UINT32_(0x1) << ADC_IMR_EOC3_Pos)                  /* (ADC_IMR) End of Conversion Interrupt Mask 3 Mask */
#define ADC_IMR_EOC3(value)                   (ADC_IMR_EOC3_Msk & (_UINT32_(value) << ADC_IMR_EOC3_Pos)) /* Assignment of value for EOC3 in the ADC_IMR register */
#define ADC_IMR_EOC4_Pos                      _UINT32_(4)                                          /* (ADC_IMR) End of Conversion Interrupt Mask 4 Position */
#define ADC_IMR_EOC4_Msk                      (_UINT32_(0x1) << ADC_IMR_EOC4_Pos)                  /* (ADC_IMR) End of Conversion Interrupt Mask 4 Mask */
#define ADC_IMR_EOC4(value)                   (ADC_IMR_EOC4_Msk & (_UINT32_(value) << ADC_IMR_EOC4_Pos)) /* Assignment of value for EOC4 in the ADC_IMR register */
#define ADC_IMR_EOC5_Pos                      _UINT32_(5)                                          /* (ADC_IMR) End of Conversion Interrupt Mask 5 Position */
#define ADC_IMR_EOC5_Msk                      (_UINT32_(0x1) << ADC_IMR_EOC5_Pos)                  /* (ADC_IMR) End of Conversion Interrupt Mask 5 Mask */
#define ADC_IMR_EOC5(value)                   (ADC_IMR_EOC5_Msk & (_UINT32_(value) << ADC_IMR_EOC5_Pos)) /* Assignment of value for EOC5 in the ADC_IMR register */
#define ADC_IMR_EOC6_Pos                      _UINT32_(6)                                          /* (ADC_IMR) End of Conversion Interrupt Mask 6 Position */
#define ADC_IMR_EOC6_Msk                      (_UINT32_(0x1) << ADC_IMR_EOC6_Pos)                  /* (ADC_IMR) End of Conversion Interrupt Mask 6 Mask */
#define ADC_IMR_EOC6(value)                   (ADC_IMR_EOC6_Msk & (_UINT32_(value) << ADC_IMR_EOC6_Pos)) /* Assignment of value for EOC6 in the ADC_IMR register */
#define ADC_IMR_EOC7_Pos                      _UINT32_(7)                                          /* (ADC_IMR) End of Conversion Interrupt Mask 7 Position */
#define ADC_IMR_EOC7_Msk                      (_UINT32_(0x1) << ADC_IMR_EOC7_Pos)                  /* (ADC_IMR) End of Conversion Interrupt Mask 7 Mask */
#define ADC_IMR_EOC7(value)                   (ADC_IMR_EOC7_Msk & (_UINT32_(value) << ADC_IMR_EOC7_Pos)) /* Assignment of value for EOC7 in the ADC_IMR register */
#define ADC_IMR_LCCHG_Pos                     _UINT32_(19)                                         /* (ADC_IMR) Last Channel Change Interrupt Disable Position */
#define ADC_IMR_LCCHG_Msk                     (_UINT32_(0x1) << ADC_IMR_LCCHG_Pos)                 /* (ADC_IMR) Last Channel Change Interrupt Disable Mask */
#define ADC_IMR_LCCHG(value)                  (ADC_IMR_LCCHG_Msk & (_UINT32_(value) << ADC_IMR_LCCHG_Pos)) /* Assignment of value for LCCHG in the ADC_IMR register */
#define ADC_IMR_XRDY_Pos                      _UINT32_(20)                                         /* (ADC_IMR) Touchscreen Measure XPOS Ready Interrupt Mask Position */
#define ADC_IMR_XRDY_Msk                      (_UINT32_(0x1) << ADC_IMR_XRDY_Pos)                  /* (ADC_IMR) Touchscreen Measure XPOS Ready Interrupt Mask Mask */
#define ADC_IMR_XRDY(value)                   (ADC_IMR_XRDY_Msk & (_UINT32_(value) << ADC_IMR_XRDY_Pos)) /* Assignment of value for XRDY in the ADC_IMR register */
#define ADC_IMR_YRDY_Pos                      _UINT32_(21)                                         /* (ADC_IMR) Touchscreen Measure YPOS Ready Interrupt Mask Position */
#define ADC_IMR_YRDY_Msk                      (_UINT32_(0x1) << ADC_IMR_YRDY_Pos)                  /* (ADC_IMR) Touchscreen Measure YPOS Ready Interrupt Mask Mask */
#define ADC_IMR_YRDY(value)                   (ADC_IMR_YRDY_Msk & (_UINT32_(value) << ADC_IMR_YRDY_Pos)) /* Assignment of value for YRDY in the ADC_IMR register */
#define ADC_IMR_PRDY_Pos                      _UINT32_(22)                                         /* (ADC_IMR) Touchscreen Measure Pressure Ready Interrupt Mask Position */
#define ADC_IMR_PRDY_Msk                      (_UINT32_(0x1) << ADC_IMR_PRDY_Pos)                  /* (ADC_IMR) Touchscreen Measure Pressure Ready Interrupt Mask Mask */
#define ADC_IMR_PRDY(value)                   (ADC_IMR_PRDY_Msk & (_UINT32_(value) << ADC_IMR_PRDY_Pos)) /* Assignment of value for PRDY in the ADC_IMR register */
#define ADC_IMR_DRDY_Pos                      _UINT32_(24)                                         /* (ADC_IMR) Data Ready Interrupt Mask Position */
#define ADC_IMR_DRDY_Msk                      (_UINT32_(0x1) << ADC_IMR_DRDY_Pos)                  /* (ADC_IMR) Data Ready Interrupt Mask Mask */
#define ADC_IMR_DRDY(value)                   (ADC_IMR_DRDY_Msk & (_UINT32_(value) << ADC_IMR_DRDY_Pos)) /* Assignment of value for DRDY in the ADC_IMR register */
#define ADC_IMR_GOVRE_Pos                     _UINT32_(25)                                         /* (ADC_IMR) General Overrun Error Interrupt Mask Position */
#define ADC_IMR_GOVRE_Msk                     (_UINT32_(0x1) << ADC_IMR_GOVRE_Pos)                 /* (ADC_IMR) General Overrun Error Interrupt Mask Mask */
#define ADC_IMR_GOVRE(value)                  (ADC_IMR_GOVRE_Msk & (_UINT32_(value) << ADC_IMR_GOVRE_Pos)) /* Assignment of value for GOVRE in the ADC_IMR register */
#define ADC_IMR_COMPE_Pos                     _UINT32_(26)                                         /* (ADC_IMR) Comparison Event Interrupt Mask Position */
#define ADC_IMR_COMPE_Msk                     (_UINT32_(0x1) << ADC_IMR_COMPE_Pos)                 /* (ADC_IMR) Comparison Event Interrupt Mask Mask */
#define ADC_IMR_COMPE(value)                  (ADC_IMR_COMPE_Msk & (_UINT32_(value) << ADC_IMR_COMPE_Pos)) /* Assignment of value for COMPE in the ADC_IMR register */
#define ADC_IMR_PEN_Pos                       _UINT32_(29)                                         /* (ADC_IMR) Pen Contact Interrupt Mask Position */
#define ADC_IMR_PEN_Msk                       (_UINT32_(0x1) << ADC_IMR_PEN_Pos)                   /* (ADC_IMR) Pen Contact Interrupt Mask Mask */
#define ADC_IMR_PEN(value)                    (ADC_IMR_PEN_Msk & (_UINT32_(value) << ADC_IMR_PEN_Pos)) /* Assignment of value for PEN in the ADC_IMR register */
#define ADC_IMR_NOPEN_Pos                     _UINT32_(30)                                         /* (ADC_IMR) No Pen Contact Interrupt Mask Position */
#define ADC_IMR_NOPEN_Msk                     (_UINT32_(0x1) << ADC_IMR_NOPEN_Pos)                 /* (ADC_IMR) No Pen Contact Interrupt Mask Mask */
#define ADC_IMR_NOPEN(value)                  (ADC_IMR_NOPEN_Msk & (_UINT32_(value) << ADC_IMR_NOPEN_Pos)) /* Assignment of value for NOPEN in the ADC_IMR register */
#define ADC_IMR_Msk                           _UINT32_(0x677800FF)                                 /* (ADC_IMR) Register Mask  */

#define ADC_IMR_EOC_Pos                       _UINT32_(0)                                          /* (ADC_IMR Position) End of Conversion Interrupt Mask x */
#define ADC_IMR_EOC_Msk                       (_UINT32_(0xFF) << ADC_IMR_EOC_Pos)                  /* (ADC_IMR Mask) EOC */
#define ADC_IMR_EOC(value)                    (ADC_IMR_EOC_Msk & (_UINT32_(value) << ADC_IMR_EOC_Pos)) 

/* -------- ADC_ISR : (ADC Offset: 0x30) ( R/ 32) Interrupt Status Register -------- */
#define ADC_ISR_RESETVALUE                    _UINT32_(0x00)                                       /*  (ADC_ISR) Interrupt Status Register  Reset Value */

#define ADC_ISR_EOC0_Pos                      _UINT32_(0)                                          /* (ADC_ISR) End of Conversion 0 (automatically set / cleared) Position */
#define ADC_ISR_EOC0_Msk                      (_UINT32_(0x1) << ADC_ISR_EOC0_Pos)                  /* (ADC_ISR) End of Conversion 0 (automatically set / cleared) Mask */
#define ADC_ISR_EOC0(value)                   (ADC_ISR_EOC0_Msk & (_UINT32_(value) << ADC_ISR_EOC0_Pos)) /* Assignment of value for EOC0 in the ADC_ISR register */
#define   ADC_ISR_EOC0_0_Val                  _UINT32_(0x0)                                        /* (ADC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers.  */
#define   ADC_ISR_EOC0_1_Val                  _UINT32_(0x1)                                        /* (ADC_ISR) The corresponding analog channel is enabled and conversion is complete.  */
#define ADC_ISR_EOC0_0                        (ADC_ISR_EOC0_0_Val << ADC_ISR_EOC0_Pos)             /* (ADC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers. Position */
#define ADC_ISR_EOC0_1                        (ADC_ISR_EOC0_1_Val << ADC_ISR_EOC0_Pos)             /* (ADC_ISR) The corresponding analog channel is enabled and conversion is complete. Position */
#define ADC_ISR_EOC1_Pos                      _UINT32_(1)                                          /* (ADC_ISR) End of Conversion 1 (automatically set / cleared) Position */
#define ADC_ISR_EOC1_Msk                      (_UINT32_(0x1) << ADC_ISR_EOC1_Pos)                  /* (ADC_ISR) End of Conversion 1 (automatically set / cleared) Mask */
#define ADC_ISR_EOC1(value)                   (ADC_ISR_EOC1_Msk & (_UINT32_(value) << ADC_ISR_EOC1_Pos)) /* Assignment of value for EOC1 in the ADC_ISR register */
#define   ADC_ISR_EOC1_0_Val                  _UINT32_(0x0)                                        /* (ADC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers.  */
#define   ADC_ISR_EOC1_1_Val                  _UINT32_(0x1)                                        /* (ADC_ISR) The corresponding analog channel is enabled and conversion is complete.  */
#define ADC_ISR_EOC1_0                        (ADC_ISR_EOC1_0_Val << ADC_ISR_EOC1_Pos)             /* (ADC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers. Position */
#define ADC_ISR_EOC1_1                        (ADC_ISR_EOC1_1_Val << ADC_ISR_EOC1_Pos)             /* (ADC_ISR) The corresponding analog channel is enabled and conversion is complete. Position */
#define ADC_ISR_EOC2_Pos                      _UINT32_(2)                                          /* (ADC_ISR) End of Conversion 2 (automatically set / cleared) Position */
#define ADC_ISR_EOC2_Msk                      (_UINT32_(0x1) << ADC_ISR_EOC2_Pos)                  /* (ADC_ISR) End of Conversion 2 (automatically set / cleared) Mask */
#define ADC_ISR_EOC2(value)                   (ADC_ISR_EOC2_Msk & (_UINT32_(value) << ADC_ISR_EOC2_Pos)) /* Assignment of value for EOC2 in the ADC_ISR register */
#define   ADC_ISR_EOC2_0_Val                  _UINT32_(0x0)                                        /* (ADC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers.  */
#define   ADC_ISR_EOC2_1_Val                  _UINT32_(0x1)                                        /* (ADC_ISR) The corresponding analog channel is enabled and conversion is complete.  */
#define ADC_ISR_EOC2_0                        (ADC_ISR_EOC2_0_Val << ADC_ISR_EOC2_Pos)             /* (ADC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers. Position */
#define ADC_ISR_EOC2_1                        (ADC_ISR_EOC2_1_Val << ADC_ISR_EOC2_Pos)             /* (ADC_ISR) The corresponding analog channel is enabled and conversion is complete. Position */
#define ADC_ISR_EOC3_Pos                      _UINT32_(3)                                          /* (ADC_ISR) End of Conversion 3 (automatically set / cleared) Position */
#define ADC_ISR_EOC3_Msk                      (_UINT32_(0x1) << ADC_ISR_EOC3_Pos)                  /* (ADC_ISR) End of Conversion 3 (automatically set / cleared) Mask */
#define ADC_ISR_EOC3(value)                   (ADC_ISR_EOC3_Msk & (_UINT32_(value) << ADC_ISR_EOC3_Pos)) /* Assignment of value for EOC3 in the ADC_ISR register */
#define   ADC_ISR_EOC3_0_Val                  _UINT32_(0x0)                                        /* (ADC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers.  */
#define   ADC_ISR_EOC3_1_Val                  _UINT32_(0x1)                                        /* (ADC_ISR) The corresponding analog channel is enabled and conversion is complete.  */
#define ADC_ISR_EOC3_0                        (ADC_ISR_EOC3_0_Val << ADC_ISR_EOC3_Pos)             /* (ADC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers. Position */
#define ADC_ISR_EOC3_1                        (ADC_ISR_EOC3_1_Val << ADC_ISR_EOC3_Pos)             /* (ADC_ISR) The corresponding analog channel is enabled and conversion is complete. Position */
#define ADC_ISR_EOC4_Pos                      _UINT32_(4)                                          /* (ADC_ISR) End of Conversion 4 (automatically set / cleared) Position */
#define ADC_ISR_EOC4_Msk                      (_UINT32_(0x1) << ADC_ISR_EOC4_Pos)                  /* (ADC_ISR) End of Conversion 4 (automatically set / cleared) Mask */
#define ADC_ISR_EOC4(value)                   (ADC_ISR_EOC4_Msk & (_UINT32_(value) << ADC_ISR_EOC4_Pos)) /* Assignment of value for EOC4 in the ADC_ISR register */
#define   ADC_ISR_EOC4_0_Val                  _UINT32_(0x0)                                        /* (ADC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers.  */
#define   ADC_ISR_EOC4_1_Val                  _UINT32_(0x1)                                        /* (ADC_ISR) The corresponding analog channel is enabled and conversion is complete.  */
#define ADC_ISR_EOC4_0                        (ADC_ISR_EOC4_0_Val << ADC_ISR_EOC4_Pos)             /* (ADC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers. Position */
#define ADC_ISR_EOC4_1                        (ADC_ISR_EOC4_1_Val << ADC_ISR_EOC4_Pos)             /* (ADC_ISR) The corresponding analog channel is enabled and conversion is complete. Position */
#define ADC_ISR_EOC5_Pos                      _UINT32_(5)                                          /* (ADC_ISR) End of Conversion 5 (automatically set / cleared) Position */
#define ADC_ISR_EOC5_Msk                      (_UINT32_(0x1) << ADC_ISR_EOC5_Pos)                  /* (ADC_ISR) End of Conversion 5 (automatically set / cleared) Mask */
#define ADC_ISR_EOC5(value)                   (ADC_ISR_EOC5_Msk & (_UINT32_(value) << ADC_ISR_EOC5_Pos)) /* Assignment of value for EOC5 in the ADC_ISR register */
#define   ADC_ISR_EOC5_0_Val                  _UINT32_(0x0)                                        /* (ADC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers.  */
#define   ADC_ISR_EOC5_1_Val                  _UINT32_(0x1)                                        /* (ADC_ISR) The corresponding analog channel is enabled and conversion is complete.  */
#define ADC_ISR_EOC5_0                        (ADC_ISR_EOC5_0_Val << ADC_ISR_EOC5_Pos)             /* (ADC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers. Position */
#define ADC_ISR_EOC5_1                        (ADC_ISR_EOC5_1_Val << ADC_ISR_EOC5_Pos)             /* (ADC_ISR) The corresponding analog channel is enabled and conversion is complete. Position */
#define ADC_ISR_EOC6_Pos                      _UINT32_(6)                                          /* (ADC_ISR) End of Conversion 6 (automatically set / cleared) Position */
#define ADC_ISR_EOC6_Msk                      (_UINT32_(0x1) << ADC_ISR_EOC6_Pos)                  /* (ADC_ISR) End of Conversion 6 (automatically set / cleared) Mask */
#define ADC_ISR_EOC6(value)                   (ADC_ISR_EOC6_Msk & (_UINT32_(value) << ADC_ISR_EOC6_Pos)) /* Assignment of value for EOC6 in the ADC_ISR register */
#define   ADC_ISR_EOC6_0_Val                  _UINT32_(0x0)                                        /* (ADC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers.  */
#define   ADC_ISR_EOC6_1_Val                  _UINT32_(0x1)                                        /* (ADC_ISR) The corresponding analog channel is enabled and conversion is complete.  */
#define ADC_ISR_EOC6_0                        (ADC_ISR_EOC6_0_Val << ADC_ISR_EOC6_Pos)             /* (ADC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers. Position */
#define ADC_ISR_EOC6_1                        (ADC_ISR_EOC6_1_Val << ADC_ISR_EOC6_Pos)             /* (ADC_ISR) The corresponding analog channel is enabled and conversion is complete. Position */
#define ADC_ISR_EOC7_Pos                      _UINT32_(7)                                          /* (ADC_ISR) End of Conversion 7 (automatically set / cleared) Position */
#define ADC_ISR_EOC7_Msk                      (_UINT32_(0x1) << ADC_ISR_EOC7_Pos)                  /* (ADC_ISR) End of Conversion 7 (automatically set / cleared) Mask */
#define ADC_ISR_EOC7(value)                   (ADC_ISR_EOC7_Msk & (_UINT32_(value) << ADC_ISR_EOC7_Pos)) /* Assignment of value for EOC7 in the ADC_ISR register */
#define   ADC_ISR_EOC7_0_Val                  _UINT32_(0x0)                                        /* (ADC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers.  */
#define   ADC_ISR_EOC7_1_Val                  _UINT32_(0x1)                                        /* (ADC_ISR) The corresponding analog channel is enabled and conversion is complete.  */
#define ADC_ISR_EOC7_0                        (ADC_ISR_EOC7_0_Val << ADC_ISR_EOC7_Pos)             /* (ADC_ISR) The corresponding analog channel is disabled, or the conversion is not finished. This flag is cleared when reading the corresponding ADC_CDRx registers. Position */
#define ADC_ISR_EOC7_1                        (ADC_ISR_EOC7_1_Val << ADC_ISR_EOC7_Pos)             /* (ADC_ISR) The corresponding analog channel is enabled and conversion is complete. Position */
#define ADC_ISR_LCCHG_Pos                     _UINT32_(19)                                         /* (ADC_ISR) Last Channel Change (cleared on read) Position */
#define ADC_ISR_LCCHG_Msk                     (_UINT32_(0x1) << ADC_ISR_LCCHG_Pos)                 /* (ADC_ISR) Last Channel Change (cleared on read) Mask */
#define ADC_ISR_LCCHG(value)                  (ADC_ISR_LCCHG_Msk & (_UINT32_(value) << ADC_ISR_LCCHG_Pos)) /* Assignment of value for LCCHG in the ADC_ISR register */
#define   ADC_ISR_LCCHG_0_Val                 _UINT32_(0x0)                                        /* (ADC_ISR) There is no comparison match (defined in the Last Channel Compare Window register (ADC_LCCWR) since the last read of ADC_ISR.  */
#define   ADC_ISR_LCCHG_1_Val                 _UINT32_(0x1)                                        /* (ADC_ISR) The converted value reported on ADC_CDR7 has changed since the last read of ADC_ISR, according to what is defined in ADC_LCTMR and ADC_LCCWR.  */
#define ADC_ISR_LCCHG_0                       (ADC_ISR_LCCHG_0_Val << ADC_ISR_LCCHG_Pos)           /* (ADC_ISR) There is no comparison match (defined in the Last Channel Compare Window register (ADC_LCCWR) since the last read of ADC_ISR. Position */
#define ADC_ISR_LCCHG_1                       (ADC_ISR_LCCHG_1_Val << ADC_ISR_LCCHG_Pos)           /* (ADC_ISR) The converted value reported on ADC_CDR7 has changed since the last read of ADC_ISR, according to what is defined in ADC_LCTMR and ADC_LCCWR. Position */
#define ADC_ISR_XRDY_Pos                      _UINT32_(20)                                         /* (ADC_ISR) Touchscreen XPOS Measure Ready (cleared on read) Position */
#define ADC_ISR_XRDY_Msk                      (_UINT32_(0x1) << ADC_ISR_XRDY_Pos)                  /* (ADC_ISR) Touchscreen XPOS Measure Ready (cleared on read) Mask */
#define ADC_ISR_XRDY(value)                   (ADC_ISR_XRDY_Msk & (_UINT32_(value) << ADC_ISR_XRDY_Pos)) /* Assignment of value for XRDY in the ADC_ISR register */
#define   ADC_ISR_XRDY_0_Val                  _UINT32_(0x0)                                        /* (ADC_ISR) No measure has been performed since the last read of ADC_XPOSR.  */
#define   ADC_ISR_XRDY_1_Val                  _UINT32_(0x1)                                        /* (ADC_ISR) At least one measure has been performed since the last read of ADC_ISR.  */
#define ADC_ISR_XRDY_0                        (ADC_ISR_XRDY_0_Val << ADC_ISR_XRDY_Pos)             /* (ADC_ISR) No measure has been performed since the last read of ADC_XPOSR. Position */
#define ADC_ISR_XRDY_1                        (ADC_ISR_XRDY_1_Val << ADC_ISR_XRDY_Pos)             /* (ADC_ISR) At least one measure has been performed since the last read of ADC_ISR. Position */
#define ADC_ISR_YRDY_Pos                      _UINT32_(21)                                         /* (ADC_ISR) Touchscreen YPOS Measure Ready (cleared on read) Position */
#define ADC_ISR_YRDY_Msk                      (_UINT32_(0x1) << ADC_ISR_YRDY_Pos)                  /* (ADC_ISR) Touchscreen YPOS Measure Ready (cleared on read) Mask */
#define ADC_ISR_YRDY(value)                   (ADC_ISR_YRDY_Msk & (_UINT32_(value) << ADC_ISR_YRDY_Pos)) /* Assignment of value for YRDY in the ADC_ISR register */
#define   ADC_ISR_YRDY_0_Val                  _UINT32_(0x0)                                        /* (ADC_ISR) No measure has been performed since the last read of ADC_YPOSR.  */
#define   ADC_ISR_YRDY_1_Val                  _UINT32_(0x1)                                        /* (ADC_ISR) At least one measure has been performed since the last read of ADC_ISR.  */
#define ADC_ISR_YRDY_0                        (ADC_ISR_YRDY_0_Val << ADC_ISR_YRDY_Pos)             /* (ADC_ISR) No measure has been performed since the last read of ADC_YPOSR. Position */
#define ADC_ISR_YRDY_1                        (ADC_ISR_YRDY_1_Val << ADC_ISR_YRDY_Pos)             /* (ADC_ISR) At least one measure has been performed since the last read of ADC_ISR. Position */
#define ADC_ISR_PRDY_Pos                      _UINT32_(22)                                         /* (ADC_ISR) Touchscreen Pressure Measure Ready (cleared on read) Position */
#define ADC_ISR_PRDY_Msk                      (_UINT32_(0x1) << ADC_ISR_PRDY_Pos)                  /* (ADC_ISR) Touchscreen Pressure Measure Ready (cleared on read) Mask */
#define ADC_ISR_PRDY(value)                   (ADC_ISR_PRDY_Msk & (_UINT32_(value) << ADC_ISR_PRDY_Pos)) /* Assignment of value for PRDY in the ADC_ISR register */
#define   ADC_ISR_PRDY_0_Val                  _UINT32_(0x0)                                        /* (ADC_ISR) No measure has been performed since the last read of ADC_PRESSR.  */
#define   ADC_ISR_PRDY_1_Val                  _UINT32_(0x1)                                        /* (ADC_ISR) At least one measure has been performed since the last read of ADC_ISR.  */
#define ADC_ISR_PRDY_0                        (ADC_ISR_PRDY_0_Val << ADC_ISR_PRDY_Pos)             /* (ADC_ISR) No measure has been performed since the last read of ADC_PRESSR. Position */
#define ADC_ISR_PRDY_1                        (ADC_ISR_PRDY_1_Val << ADC_ISR_PRDY_Pos)             /* (ADC_ISR) At least one measure has been performed since the last read of ADC_ISR. Position */
#define ADC_ISR_DRDY_Pos                      _UINT32_(24)                                         /* (ADC_ISR) Data Ready (automatically set / cleared) Position */
#define ADC_ISR_DRDY_Msk                      (_UINT32_(0x1) << ADC_ISR_DRDY_Pos)                  /* (ADC_ISR) Data Ready (automatically set / cleared) Mask */
#define ADC_ISR_DRDY(value)                   (ADC_ISR_DRDY_Msk & (_UINT32_(value) << ADC_ISR_DRDY_Pos)) /* Assignment of value for DRDY in the ADC_ISR register */
#define   ADC_ISR_DRDY_0_Val                  _UINT32_(0x0)                                        /* (ADC_ISR) No data has been converted since the last read of ADC_LCDR.  */
#define   ADC_ISR_DRDY_1_Val                  _UINT32_(0x1)                                        /* (ADC_ISR) At least one data has been converted and is available in ADC_LCDR.  */
#define ADC_ISR_DRDY_0                        (ADC_ISR_DRDY_0_Val << ADC_ISR_DRDY_Pos)             /* (ADC_ISR) No data has been converted since the last read of ADC_LCDR. Position */
#define ADC_ISR_DRDY_1                        (ADC_ISR_DRDY_1_Val << ADC_ISR_DRDY_Pos)             /* (ADC_ISR) At least one data has been converted and is available in ADC_LCDR. Position */
#define ADC_ISR_GOVRE_Pos                     _UINT32_(25)                                         /* (ADC_ISR) General Overrun Error (cleared on read) Position */
#define ADC_ISR_GOVRE_Msk                     (_UINT32_(0x1) << ADC_ISR_GOVRE_Pos)                 /* (ADC_ISR) General Overrun Error (cleared on read) Mask */
#define ADC_ISR_GOVRE(value)                  (ADC_ISR_GOVRE_Msk & (_UINT32_(value) << ADC_ISR_GOVRE_Pos)) /* Assignment of value for GOVRE in the ADC_ISR register */
#define   ADC_ISR_GOVRE_0_Val                 _UINT32_(0x0)                                        /* (ADC_ISR) No general overrun error occurred since the last read of ADC_ISR.  */
#define   ADC_ISR_GOVRE_1_Val                 _UINT32_(0x1)                                        /* (ADC_ISR) At least one general overrun error has occurred since the last read of ADC_ISR.  */
#define ADC_ISR_GOVRE_0                       (ADC_ISR_GOVRE_0_Val << ADC_ISR_GOVRE_Pos)           /* (ADC_ISR) No general overrun error occurred since the last read of ADC_ISR. Position */
#define ADC_ISR_GOVRE_1                       (ADC_ISR_GOVRE_1_Val << ADC_ISR_GOVRE_Pos)           /* (ADC_ISR) At least one general overrun error has occurred since the last read of ADC_ISR. Position */
#define ADC_ISR_COMPE_Pos                     _UINT32_(26)                                         /* (ADC_ISR) Comparison Event (cleared on read) Position */
#define ADC_ISR_COMPE_Msk                     (_UINT32_(0x1) << ADC_ISR_COMPE_Pos)                 /* (ADC_ISR) Comparison Event (cleared on read) Mask */
#define ADC_ISR_COMPE(value)                  (ADC_ISR_COMPE_Msk & (_UINT32_(value) << ADC_ISR_COMPE_Pos)) /* Assignment of value for COMPE in the ADC_ISR register */
#define   ADC_ISR_COMPE_0_Val                 _UINT32_(0x0)                                        /* (ADC_ISR) No comparison event since the last read of ADC_ISR.  */
#define   ADC_ISR_COMPE_1_Val                 _UINT32_(0x1)                                        /* (ADC_ISR) At least one comparison event (defined in ADC_EMR and ADC_CWR) has occurred since the last read of ADC_ISR.  */
#define ADC_ISR_COMPE_0                       (ADC_ISR_COMPE_0_Val << ADC_ISR_COMPE_Pos)           /* (ADC_ISR) No comparison event since the last read of ADC_ISR. Position */
#define ADC_ISR_COMPE_1                       (ADC_ISR_COMPE_1_Val << ADC_ISR_COMPE_Pos)           /* (ADC_ISR) At least one comparison event (defined in ADC_EMR and ADC_CWR) has occurred since the last read of ADC_ISR. Position */
#define ADC_ISR_PEN_Pos                       _UINT32_(29)                                         /* (ADC_ISR) Pen contact (cleared on read) Position */
#define ADC_ISR_PEN_Msk                       (_UINT32_(0x1) << ADC_ISR_PEN_Pos)                   /* (ADC_ISR) Pen contact (cleared on read) Mask */
#define ADC_ISR_PEN(value)                    (ADC_ISR_PEN_Msk & (_UINT32_(value) << ADC_ISR_PEN_Pos)) /* Assignment of value for PEN in the ADC_ISR register */
#define   ADC_ISR_PEN_0_Val                   _UINT32_(0x0)                                        /* (ADC_ISR) No pen contact since the last read of ADC_ISR.  */
#define   ADC_ISR_PEN_1_Val                   _UINT32_(0x1)                                        /* (ADC_ISR) At least one pen contact since the last read of ADC_ISR.  */
#define ADC_ISR_PEN_0                         (ADC_ISR_PEN_0_Val << ADC_ISR_PEN_Pos)               /* (ADC_ISR) No pen contact since the last read of ADC_ISR. Position */
#define ADC_ISR_PEN_1                         (ADC_ISR_PEN_1_Val << ADC_ISR_PEN_Pos)               /* (ADC_ISR) At least one pen contact since the last read of ADC_ISR. Position */
#define ADC_ISR_NOPEN_Pos                     _UINT32_(30)                                         /* (ADC_ISR) No Pen Contact (cleared on read) Position */
#define ADC_ISR_NOPEN_Msk                     (_UINT32_(0x1) << ADC_ISR_NOPEN_Pos)                 /* (ADC_ISR) No Pen Contact (cleared on read) Mask */
#define ADC_ISR_NOPEN(value)                  (ADC_ISR_NOPEN_Msk & (_UINT32_(value) << ADC_ISR_NOPEN_Pos)) /* Assignment of value for NOPEN in the ADC_ISR register */
#define   ADC_ISR_NOPEN_0_Val                 _UINT32_(0x0)                                        /* (ADC_ISR) No loss of pen contact since the last read of ADC_ISR.  */
#define   ADC_ISR_NOPEN_1_Val                 _UINT32_(0x1)                                        /* (ADC_ISR) At least one loss of pen contact since the last read of ADC_ISR.  */
#define ADC_ISR_NOPEN_0                       (ADC_ISR_NOPEN_0_Val << ADC_ISR_NOPEN_Pos)           /* (ADC_ISR) No loss of pen contact since the last read of ADC_ISR. Position */
#define ADC_ISR_NOPEN_1                       (ADC_ISR_NOPEN_1_Val << ADC_ISR_NOPEN_Pos)           /* (ADC_ISR) At least one loss of pen contact since the last read of ADC_ISR. Position */
#define ADC_ISR_PENS_Pos                      _UINT32_(31)                                         /* (ADC_ISR) Pen Detect Status Position */
#define ADC_ISR_PENS_Msk                      (_UINT32_(0x1) << ADC_ISR_PENS_Pos)                  /* (ADC_ISR) Pen Detect Status Mask */
#define ADC_ISR_PENS(value)                   (ADC_ISR_PENS_Msk & (_UINT32_(value) << ADC_ISR_PENS_Pos)) /* Assignment of value for PENS in the ADC_ISR register */
#define   ADC_ISR_PENS_0_Val                  _UINT32_(0x0)                                        /* (ADC_ISR) The pen does not press the screen.  */
#define   ADC_ISR_PENS_1_Val                  _UINT32_(0x1)                                        /* (ADC_ISR) The pen presses the screen.  */
#define ADC_ISR_PENS_0                        (ADC_ISR_PENS_0_Val << ADC_ISR_PENS_Pos)             /* (ADC_ISR) The pen does not press the screen. Position */
#define ADC_ISR_PENS_1                        (ADC_ISR_PENS_1_Val << ADC_ISR_PENS_Pos)             /* (ADC_ISR) The pen presses the screen. Position */
#define ADC_ISR_Msk                           _UINT32_(0xE77800FF)                                 /* (ADC_ISR) Register Mask  */

#define ADC_ISR_EOC_Pos                       _UINT32_(0)                                          /* (ADC_ISR Position) End of Conversion x (automatically set / cleared) */
#define ADC_ISR_EOC_Msk                       (_UINT32_(0xFF) << ADC_ISR_EOC_Pos)                  /* (ADC_ISR Mask) EOC */
#define ADC_ISR_EOC(value)                    (ADC_ISR_EOC_Msk & (_UINT32_(value) << ADC_ISR_EOC_Pos)) 

/* -------- ADC_LCTMR : (ADC Offset: 0x34) (R/W 32) Last Channel Trigger Mode Register -------- */
#define ADC_LCTMR_RESETVALUE                  _UINT32_(0x00)                                       /*  (ADC_LCTMR) Last Channel Trigger Mode Register  Reset Value */

#define ADC_LCTMR_DUALTRIG_Pos                _UINT32_(0)                                          /* (ADC_LCTMR) Dual Trigger ON Position */
#define ADC_LCTMR_DUALTRIG_Msk                (_UINT32_(0x1) << ADC_LCTMR_DUALTRIG_Pos)            /* (ADC_LCTMR) Dual Trigger ON Mask */
#define ADC_LCTMR_DUALTRIG(value)             (ADC_LCTMR_DUALTRIG_Msk & (_UINT32_(value) << ADC_LCTMR_DUALTRIG_Pos)) /* Assignment of value for DUALTRIG in the ADC_LCTMR register */
#define   ADC_LCTMR_DUALTRIG_0_Val            _UINT32_(0x0)                                        /* (ADC_LCTMR) All channels are triggered by event defined by ADC_MR.TRGSEL.  */
#define   ADC_LCTMR_DUALTRIG_1_Val            _UINT32_(0x1)                                        /* (ADC_LCTMR) Last channel (higher index) trigger period is defined by RTC_MR.OUT1.  */
#define ADC_LCTMR_DUALTRIG_0                  (ADC_LCTMR_DUALTRIG_0_Val << ADC_LCTMR_DUALTRIG_Pos) /* (ADC_LCTMR) All channels are triggered by event defined by ADC_MR.TRGSEL. Position */
#define ADC_LCTMR_DUALTRIG_1                  (ADC_LCTMR_DUALTRIG_1_Val << ADC_LCTMR_DUALTRIG_Pos) /* (ADC_LCTMR) Last channel (higher index) trigger period is defined by RTC_MR.OUT1. Position */
#define ADC_LCTMR_CMPMOD_Pos                  _UINT32_(4)                                          /* (ADC_LCTMR) Last Channel Comparison Mode Position */
#define ADC_LCTMR_CMPMOD_Msk                  (_UINT32_(0x3) << ADC_LCTMR_CMPMOD_Pos)              /* (ADC_LCTMR) Last Channel Comparison Mode Mask */
#define ADC_LCTMR_CMPMOD(value)               (ADC_LCTMR_CMPMOD_Msk & (_UINT32_(value) << ADC_LCTMR_CMPMOD_Pos)) /* Assignment of value for CMPMOD in the ADC_LCTMR register */
#define   ADC_LCTMR_CMPMOD_LOW_Val            _UINT32_(0x0)                                        /* (ADC_LCTMR) Generates the ADC_ISR.LCCHG flag when the converted data is lower than the low threshold of the window.  */
#define   ADC_LCTMR_CMPMOD_HIGH_Val           _UINT32_(0x1)                                        /* (ADC_LCTMR) Generates the ADC_ISR.LCCHG flag when the converted data is higher than the high threshold of the window.  */
#define   ADC_LCTMR_CMPMOD_IN_Val             _UINT32_(0x2)                                        /* (ADC_LCTMR) Generates the ADC_ISR.LCCHG flag when the converted data is in the comparison window.  */
#define   ADC_LCTMR_CMPMOD_OUT_Val            _UINT32_(0x3)                                        /* (ADC_LCTMR) Generates the ADC_ISR.LCCHG flag when the converted data is out of the comparison window.  */
#define ADC_LCTMR_CMPMOD_LOW                  (ADC_LCTMR_CMPMOD_LOW_Val << ADC_LCTMR_CMPMOD_Pos)   /* (ADC_LCTMR) Generates the ADC_ISR.LCCHG flag when the converted data is lower than the low threshold of the window. Position */
#define ADC_LCTMR_CMPMOD_HIGH                 (ADC_LCTMR_CMPMOD_HIGH_Val << ADC_LCTMR_CMPMOD_Pos)  /* (ADC_LCTMR) Generates the ADC_ISR.LCCHG flag when the converted data is higher than the high threshold of the window. Position */
#define ADC_LCTMR_CMPMOD_IN                   (ADC_LCTMR_CMPMOD_IN_Val << ADC_LCTMR_CMPMOD_Pos)    /* (ADC_LCTMR) Generates the ADC_ISR.LCCHG flag when the converted data is in the comparison window. Position */
#define ADC_LCTMR_CMPMOD_OUT                  (ADC_LCTMR_CMPMOD_OUT_Val << ADC_LCTMR_CMPMOD_Pos)   /* (ADC_LCTMR) Generates the ADC_ISR.LCCHG flag when the converted data is out of the comparison window. Position */
#define ADC_LCTMR_Msk                         _UINT32_(0x00000031)                                 /* (ADC_LCTMR) Register Mask  */


/* -------- ADC_LCCWR : (ADC Offset: 0x38) (R/W 32) Last Channel Compare Window Register -------- */
#define ADC_LCCWR_RESETVALUE                  _UINT32_(0x00)                                       /*  (ADC_LCCWR) Last Channel Compare Window Register  Reset Value */

#define ADC_LCCWR_LOWTHRES_Pos                _UINT32_(0)                                          /* (ADC_LCCWR) Low Threshold Position */
#define ADC_LCCWR_LOWTHRES_Msk                (_UINT32_(0xFFF) << ADC_LCCWR_LOWTHRES_Pos)          /* (ADC_LCCWR) Low Threshold Mask */
#define ADC_LCCWR_LOWTHRES(value)             (ADC_LCCWR_LOWTHRES_Msk & (_UINT32_(value) << ADC_LCCWR_LOWTHRES_Pos)) /* Assignment of value for LOWTHRES in the ADC_LCCWR register */
#define ADC_LCCWR_HIGHTHRES_Pos               _UINT32_(16)                                         /* (ADC_LCCWR) High Threshold Position */
#define ADC_LCCWR_HIGHTHRES_Msk               (_UINT32_(0xFFF) << ADC_LCCWR_HIGHTHRES_Pos)         /* (ADC_LCCWR) High Threshold Mask */
#define ADC_LCCWR_HIGHTHRES(value)            (ADC_LCCWR_HIGHTHRES_Msk & (_UINT32_(value) << ADC_LCCWR_HIGHTHRES_Pos)) /* Assignment of value for HIGHTHRES in the ADC_LCCWR register */
#define ADC_LCCWR_Msk                         _UINT32_(0x0FFF0FFF)                                 /* (ADC_LCCWR) Register Mask  */


/* -------- ADC_OVER : (ADC Offset: 0x3C) ( R/ 32) Overrun Status Register -------- */
#define ADC_OVER_RESETVALUE                   _UINT32_(0x00)                                       /*  (ADC_OVER) Overrun Status Register  Reset Value */

#define ADC_OVER_OVRE0_Pos                    _UINT32_(0)                                          /* (ADC_OVER) Overrun Error 0 Position */
#define ADC_OVER_OVRE0_Msk                    (_UINT32_(0x1) << ADC_OVER_OVRE0_Pos)                /* (ADC_OVER) Overrun Error 0 Mask */
#define ADC_OVER_OVRE0(value)                 (ADC_OVER_OVRE0_Msk & (_UINT32_(value) << ADC_OVER_OVRE0_Pos)) /* Assignment of value for OVRE0 in the ADC_OVER register */
#define   ADC_OVER_OVRE0_0_Val                _UINT32_(0x0)                                        /* (ADC_OVER) No overrun error on the corresponding channel since the last read of ADC_OVER.  */
#define   ADC_OVER_OVRE0_1_Val                _UINT32_(0x1)                                        /* (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define ADC_OVER_OVRE0_0                      (ADC_OVER_OVRE0_0_Val << ADC_OVER_OVRE0_Pos)         /* (ADC_OVER) No overrun error on the corresponding channel since the last read of ADC_OVER. Position */
#define ADC_OVER_OVRE0_1                      (ADC_OVER_OVRE0_1_Val << ADC_OVER_OVRE0_Pos)         /* (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position */
#define ADC_OVER_OVRE1_Pos                    _UINT32_(1)                                          /* (ADC_OVER) Overrun Error 1 Position */
#define ADC_OVER_OVRE1_Msk                    (_UINT32_(0x1) << ADC_OVER_OVRE1_Pos)                /* (ADC_OVER) Overrun Error 1 Mask */
#define ADC_OVER_OVRE1(value)                 (ADC_OVER_OVRE1_Msk & (_UINT32_(value) << ADC_OVER_OVRE1_Pos)) /* Assignment of value for OVRE1 in the ADC_OVER register */
#define   ADC_OVER_OVRE1_0_Val                _UINT32_(0x0)                                        /* (ADC_OVER) No overrun error on the corresponding channel since the last read of ADC_OVER.  */
#define   ADC_OVER_OVRE1_1_Val                _UINT32_(0x1)                                        /* (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define ADC_OVER_OVRE1_0                      (ADC_OVER_OVRE1_0_Val << ADC_OVER_OVRE1_Pos)         /* (ADC_OVER) No overrun error on the corresponding channel since the last read of ADC_OVER. Position */
#define ADC_OVER_OVRE1_1                      (ADC_OVER_OVRE1_1_Val << ADC_OVER_OVRE1_Pos)         /* (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position */
#define ADC_OVER_OVRE2_Pos                    _UINT32_(2)                                          /* (ADC_OVER) Overrun Error 2 Position */
#define ADC_OVER_OVRE2_Msk                    (_UINT32_(0x1) << ADC_OVER_OVRE2_Pos)                /* (ADC_OVER) Overrun Error 2 Mask */
#define ADC_OVER_OVRE2(value)                 (ADC_OVER_OVRE2_Msk & (_UINT32_(value) << ADC_OVER_OVRE2_Pos)) /* Assignment of value for OVRE2 in the ADC_OVER register */
#define   ADC_OVER_OVRE2_0_Val                _UINT32_(0x0)                                        /* (ADC_OVER) No overrun error on the corresponding channel since the last read of ADC_OVER.  */
#define   ADC_OVER_OVRE2_1_Val                _UINT32_(0x1)                                        /* (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define ADC_OVER_OVRE2_0                      (ADC_OVER_OVRE2_0_Val << ADC_OVER_OVRE2_Pos)         /* (ADC_OVER) No overrun error on the corresponding channel since the last read of ADC_OVER. Position */
#define ADC_OVER_OVRE2_1                      (ADC_OVER_OVRE2_1_Val << ADC_OVER_OVRE2_Pos)         /* (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position */
#define ADC_OVER_OVRE3_Pos                    _UINT32_(3)                                          /* (ADC_OVER) Overrun Error 3 Position */
#define ADC_OVER_OVRE3_Msk                    (_UINT32_(0x1) << ADC_OVER_OVRE3_Pos)                /* (ADC_OVER) Overrun Error 3 Mask */
#define ADC_OVER_OVRE3(value)                 (ADC_OVER_OVRE3_Msk & (_UINT32_(value) << ADC_OVER_OVRE3_Pos)) /* Assignment of value for OVRE3 in the ADC_OVER register */
#define   ADC_OVER_OVRE3_0_Val                _UINT32_(0x0)                                        /* (ADC_OVER) No overrun error on the corresponding channel since the last read of ADC_OVER.  */
#define   ADC_OVER_OVRE3_1_Val                _UINT32_(0x1)                                        /* (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define ADC_OVER_OVRE3_0                      (ADC_OVER_OVRE3_0_Val << ADC_OVER_OVRE3_Pos)         /* (ADC_OVER) No overrun error on the corresponding channel since the last read of ADC_OVER. Position */
#define ADC_OVER_OVRE3_1                      (ADC_OVER_OVRE3_1_Val << ADC_OVER_OVRE3_Pos)         /* (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position */
#define ADC_OVER_OVRE4_Pos                    _UINT32_(4)                                          /* (ADC_OVER) Overrun Error 4 Position */
#define ADC_OVER_OVRE4_Msk                    (_UINT32_(0x1) << ADC_OVER_OVRE4_Pos)                /* (ADC_OVER) Overrun Error 4 Mask */
#define ADC_OVER_OVRE4(value)                 (ADC_OVER_OVRE4_Msk & (_UINT32_(value) << ADC_OVER_OVRE4_Pos)) /* Assignment of value for OVRE4 in the ADC_OVER register */
#define   ADC_OVER_OVRE4_0_Val                _UINT32_(0x0)                                        /* (ADC_OVER) No overrun error on the corresponding channel since the last read of ADC_OVER.  */
#define   ADC_OVER_OVRE4_1_Val                _UINT32_(0x1)                                        /* (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define ADC_OVER_OVRE4_0                      (ADC_OVER_OVRE4_0_Val << ADC_OVER_OVRE4_Pos)         /* (ADC_OVER) No overrun error on the corresponding channel since the last read of ADC_OVER. Position */
#define ADC_OVER_OVRE4_1                      (ADC_OVER_OVRE4_1_Val << ADC_OVER_OVRE4_Pos)         /* (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position */
#define ADC_OVER_OVRE5_Pos                    _UINT32_(5)                                          /* (ADC_OVER) Overrun Error 5 Position */
#define ADC_OVER_OVRE5_Msk                    (_UINT32_(0x1) << ADC_OVER_OVRE5_Pos)                /* (ADC_OVER) Overrun Error 5 Mask */
#define ADC_OVER_OVRE5(value)                 (ADC_OVER_OVRE5_Msk & (_UINT32_(value) << ADC_OVER_OVRE5_Pos)) /* Assignment of value for OVRE5 in the ADC_OVER register */
#define   ADC_OVER_OVRE5_0_Val                _UINT32_(0x0)                                        /* (ADC_OVER) No overrun error on the corresponding channel since the last read of ADC_OVER.  */
#define   ADC_OVER_OVRE5_1_Val                _UINT32_(0x1)                                        /* (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define ADC_OVER_OVRE5_0                      (ADC_OVER_OVRE5_0_Val << ADC_OVER_OVRE5_Pos)         /* (ADC_OVER) No overrun error on the corresponding channel since the last read of ADC_OVER. Position */
#define ADC_OVER_OVRE5_1                      (ADC_OVER_OVRE5_1_Val << ADC_OVER_OVRE5_Pos)         /* (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position */
#define ADC_OVER_OVRE6_Pos                    _UINT32_(6)                                          /* (ADC_OVER) Overrun Error 6 Position */
#define ADC_OVER_OVRE6_Msk                    (_UINT32_(0x1) << ADC_OVER_OVRE6_Pos)                /* (ADC_OVER) Overrun Error 6 Mask */
#define ADC_OVER_OVRE6(value)                 (ADC_OVER_OVRE6_Msk & (_UINT32_(value) << ADC_OVER_OVRE6_Pos)) /* Assignment of value for OVRE6 in the ADC_OVER register */
#define   ADC_OVER_OVRE6_0_Val                _UINT32_(0x0)                                        /* (ADC_OVER) No overrun error on the corresponding channel since the last read of ADC_OVER.  */
#define   ADC_OVER_OVRE6_1_Val                _UINT32_(0x1)                                        /* (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define ADC_OVER_OVRE6_0                      (ADC_OVER_OVRE6_0_Val << ADC_OVER_OVRE6_Pos)         /* (ADC_OVER) No overrun error on the corresponding channel since the last read of ADC_OVER. Position */
#define ADC_OVER_OVRE6_1                      (ADC_OVER_OVRE6_1_Val << ADC_OVER_OVRE6_Pos)         /* (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position */
#define ADC_OVER_OVRE7_Pos                    _UINT32_(7)                                          /* (ADC_OVER) Overrun Error 7 Position */
#define ADC_OVER_OVRE7_Msk                    (_UINT32_(0x1) << ADC_OVER_OVRE7_Pos)                /* (ADC_OVER) Overrun Error 7 Mask */
#define ADC_OVER_OVRE7(value)                 (ADC_OVER_OVRE7_Msk & (_UINT32_(value) << ADC_OVER_OVRE7_Pos)) /* Assignment of value for OVRE7 in the ADC_OVER register */
#define   ADC_OVER_OVRE7_0_Val                _UINT32_(0x0)                                        /* (ADC_OVER) No overrun error on the corresponding channel since the last read of ADC_OVER.  */
#define   ADC_OVER_OVRE7_1_Val                _UINT32_(0x1)                                        /* (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER.  */
#define ADC_OVER_OVRE7_0                      (ADC_OVER_OVRE7_0_Val << ADC_OVER_OVRE7_Pos)         /* (ADC_OVER) No overrun error on the corresponding channel since the last read of ADC_OVER. Position */
#define ADC_OVER_OVRE7_1                      (ADC_OVER_OVRE7_1_Val << ADC_OVER_OVRE7_Pos)         /* (ADC_OVER) An overrun error has occurred on the corresponding channel since the last read of ADC_OVER. Position */
#define ADC_OVER_Msk                          _UINT32_(0x000000FF)                                 /* (ADC_OVER) Register Mask  */

#define ADC_OVER_OVRE_Pos                     _UINT32_(0)                                          /* (ADC_OVER Position) Overrun Error 7 */
#define ADC_OVER_OVRE_Msk                     (_UINT32_(0xFF) << ADC_OVER_OVRE_Pos)                /* (ADC_OVER Mask) OVRE */
#define ADC_OVER_OVRE(value)                  (ADC_OVER_OVRE_Msk & (_UINT32_(value) << ADC_OVER_OVRE_Pos)) 

/* -------- ADC_EMR : (ADC Offset: 0x40) (R/W 32) Extended Mode Register -------- */
#define ADC_EMR_RESETVALUE                    _UINT32_(0x00)                                       /*  (ADC_EMR) Extended Mode Register  Reset Value */

#define ADC_EMR_CMPMODE_Pos                   _UINT32_(0)                                          /* (ADC_EMR) Comparison Mode Position */
#define ADC_EMR_CMPMODE_Msk                   (_UINT32_(0x3) << ADC_EMR_CMPMODE_Pos)               /* (ADC_EMR) Comparison Mode Mask */
#define ADC_EMR_CMPMODE(value)                (ADC_EMR_CMPMODE_Msk & (_UINT32_(value) << ADC_EMR_CMPMODE_Pos)) /* Assignment of value for CMPMODE in the ADC_EMR register */
#define   ADC_EMR_CMPMODE_LOW_Val             _UINT32_(0x0)                                        /* (ADC_EMR) When the converted data is lower than the low threshold of the window, generates the ADC_ISR.COMPE flag.  */
#define   ADC_EMR_CMPMODE_HIGH_Val            _UINT32_(0x1)                                        /* (ADC_EMR) When the converted data is higher than the high threshold of the window, generates the ADC_ISR.COMPE flag.  */
#define   ADC_EMR_CMPMODE_IN_Val              _UINT32_(0x2)                                        /* (ADC_EMR) When the converted data is in the comparison window, generates the ADC_ISR.COMPE flag.  */
#define   ADC_EMR_CMPMODE_OUT_Val             _UINT32_(0x3)                                        /* (ADC_EMR) When the converted data is out of the comparison window, generates the ADC_ISR.COMPE flag.  */
#define ADC_EMR_CMPMODE_LOW                   (ADC_EMR_CMPMODE_LOW_Val << ADC_EMR_CMPMODE_Pos)     /* (ADC_EMR) When the converted data is lower than the low threshold of the window, generates the ADC_ISR.COMPE flag. Position */
#define ADC_EMR_CMPMODE_HIGH                  (ADC_EMR_CMPMODE_HIGH_Val << ADC_EMR_CMPMODE_Pos)    /* (ADC_EMR) When the converted data is higher than the high threshold of the window, generates the ADC_ISR.COMPE flag. Position */
#define ADC_EMR_CMPMODE_IN                    (ADC_EMR_CMPMODE_IN_Val << ADC_EMR_CMPMODE_Pos)      /* (ADC_EMR) When the converted data is in the comparison window, generates the ADC_ISR.COMPE flag. Position */
#define ADC_EMR_CMPMODE_OUT                   (ADC_EMR_CMPMODE_OUT_Val << ADC_EMR_CMPMODE_Pos)     /* (ADC_EMR) When the converted data is out of the comparison window, generates the ADC_ISR.COMPE flag. Position */
#define ADC_EMR_CMPTYPE_Pos                   _UINT32_(2)                                          /* (ADC_EMR) Comparison Type Position */
#define ADC_EMR_CMPTYPE_Msk                   (_UINT32_(0x1) << ADC_EMR_CMPTYPE_Pos)               /* (ADC_EMR) Comparison Type Mask */
#define ADC_EMR_CMPTYPE(value)                (ADC_EMR_CMPTYPE_Msk & (_UINT32_(value) << ADC_EMR_CMPTYPE_Pos)) /* Assignment of value for CMPTYPE in the ADC_EMR register */
#define   ADC_EMR_CMPTYPE_FLAG_ONLY_Val       _UINT32_(0x0)                                        /* (ADC_EMR) Any conversion is performed and comparison function drives the ADC_ISR.COMPE flag.  */
#define   ADC_EMR_CMPTYPE_START_CONDITION_Val _UINT32_(0x1)                                        /* (ADC_EMR) Comparison conditions must be met to start the storage of all conversions until ADC_CR.CMPRST is set.  */
#define ADC_EMR_CMPTYPE_FLAG_ONLY             (ADC_EMR_CMPTYPE_FLAG_ONLY_Val << ADC_EMR_CMPTYPE_Pos) /* (ADC_EMR) Any conversion is performed and comparison function drives the ADC_ISR.COMPE flag. Position */
#define ADC_EMR_CMPTYPE_START_CONDITION       (ADC_EMR_CMPTYPE_START_CONDITION_Val << ADC_EMR_CMPTYPE_Pos) /* (ADC_EMR) Comparison conditions must be met to start the storage of all conversions until ADC_CR.CMPRST is set. Position */
#define ADC_EMR_CMPSEL_Pos                    _UINT32_(4)                                          /* (ADC_EMR) Comparison Selected Channel Position */
#define ADC_EMR_CMPSEL_Msk                    (_UINT32_(0xF) << ADC_EMR_CMPSEL_Pos)                /* (ADC_EMR) Comparison Selected Channel Mask */
#define ADC_EMR_CMPSEL(value)                 (ADC_EMR_CMPSEL_Msk & (_UINT32_(value) << ADC_EMR_CMPSEL_Pos)) /* Assignment of value for CMPSEL in the ADC_EMR register */
#define ADC_EMR_CMPALL_Pos                    _UINT32_(9)                                          /* (ADC_EMR) Compare All Channels Position */
#define ADC_EMR_CMPALL_Msk                    (_UINT32_(0x1) << ADC_EMR_CMPALL_Pos)                /* (ADC_EMR) Compare All Channels Mask */
#define ADC_EMR_CMPALL(value)                 (ADC_EMR_CMPALL_Msk & (_UINT32_(value) << ADC_EMR_CMPALL_Pos)) /* Assignment of value for CMPALL in the ADC_EMR register */
#define   ADC_EMR_CMPALL_0_Val                _UINT32_(0x0)                                        /* (ADC_EMR) Only channel indicated in CMPSEL is compared.  */
#define   ADC_EMR_CMPALL_1_Val                _UINT32_(0x1)                                        /* (ADC_EMR) All channels are compared.  */
#define ADC_EMR_CMPALL_0                      (ADC_EMR_CMPALL_0_Val << ADC_EMR_CMPALL_Pos)         /* (ADC_EMR) Only channel indicated in CMPSEL is compared. Position */
#define ADC_EMR_CMPALL_1                      (ADC_EMR_CMPALL_1_Val << ADC_EMR_CMPALL_Pos)         /* (ADC_EMR) All channels are compared. Position */
#define ADC_EMR_CMPFILTER_Pos                 _UINT32_(12)                                         /* (ADC_EMR) Compare Event Filtering Position */
#define ADC_EMR_CMPFILTER_Msk                 (_UINT32_(0x3) << ADC_EMR_CMPFILTER_Pos)             /* (ADC_EMR) Compare Event Filtering Mask */
#define ADC_EMR_CMPFILTER(value)              (ADC_EMR_CMPFILTER_Msk & (_UINT32_(value) << ADC_EMR_CMPFILTER_Pos)) /* Assignment of value for CMPFILTER in the ADC_EMR register */
#define ADC_EMR_OSR_Pos                       _UINT32_(16)                                         /* (ADC_EMR) Over Sampling Rate Position */
#define ADC_EMR_OSR_Msk                       (_UINT32_(0x7) << ADC_EMR_OSR_Pos)                   /* (ADC_EMR) Over Sampling Rate Mask */
#define ADC_EMR_OSR(value)                    (ADC_EMR_OSR_Msk & (_UINT32_(value) << ADC_EMR_OSR_Pos)) /* Assignment of value for OSR in the ADC_EMR register */
#define   ADC_EMR_OSR_NO_AVERAGE_Val          _UINT32_(0x0)                                        /* (ADC_EMR) No averaging. ADC sample rate is maximum.  */
#define   ADC_EMR_OSR_OSR4_Val                _UINT32_(0x1)                                        /* (ADC_EMR) 1-bit enhanced resolution by averaging. ADC sample rate divided by 4.  */
#define   ADC_EMR_OSR_OSR16_Val               _UINT32_(0x2)                                        /* (ADC_EMR) 2-bit enhanced resolution by averaging. ADC sample rate divided by 16.  */
#define   ADC_EMR_OSR_OSR64_Val               _UINT32_(0x3)                                        /* (ADC_EMR) 3-bit enhanced resolution by averaging. ADC sample rate divided by 64.  */
#define   ADC_EMR_OSR_OSR256_Val              _UINT32_(0x4)                                        /* (ADC_EMR) 4-bit enhanced resolution by averaging. ADC sample rate divided by 256.  */
#define ADC_EMR_OSR_NO_AVERAGE                (ADC_EMR_OSR_NO_AVERAGE_Val << ADC_EMR_OSR_Pos)      /* (ADC_EMR) No averaging. ADC sample rate is maximum. Position */
#define ADC_EMR_OSR_OSR4                      (ADC_EMR_OSR_OSR4_Val << ADC_EMR_OSR_Pos)            /* (ADC_EMR) 1-bit enhanced resolution by averaging. ADC sample rate divided by 4. Position */
#define ADC_EMR_OSR_OSR16                     (ADC_EMR_OSR_OSR16_Val << ADC_EMR_OSR_Pos)           /* (ADC_EMR) 2-bit enhanced resolution by averaging. ADC sample rate divided by 16. Position */
#define ADC_EMR_OSR_OSR64                     (ADC_EMR_OSR_OSR64_Val << ADC_EMR_OSR_Pos)           /* (ADC_EMR) 3-bit enhanced resolution by averaging. ADC sample rate divided by 64. Position */
#define ADC_EMR_OSR_OSR256                    (ADC_EMR_OSR_OSR256_Val << ADC_EMR_OSR_Pos)          /* (ADC_EMR) 4-bit enhanced resolution by averaging. ADC sample rate divided by 256. Position */
#define ADC_EMR_ASTE_Pos                      _UINT32_(20)                                         /* (ADC_EMR) Averaging on Single Trigger Event Position */
#define ADC_EMR_ASTE_Msk                      (_UINT32_(0x1) << ADC_EMR_ASTE_Pos)                  /* (ADC_EMR) Averaging on Single Trigger Event Mask */
#define ADC_EMR_ASTE(value)                   (ADC_EMR_ASTE_Msk & (_UINT32_(value) << ADC_EMR_ASTE_Pos)) /* Assignment of value for ASTE in the ADC_EMR register */
#define   ADC_EMR_ASTE_MULTI_TRIG_AVERAGE_Val _UINT32_(0x0)                                        /* (ADC_EMR) The average requests several trigger events.  */
#define   ADC_EMR_ASTE_SINGLE_TRIG_AVERAGE_Val _UINT32_(0x1)                                        /* (ADC_EMR) The average requests only one trigger event.  */
#define ADC_EMR_ASTE_MULTI_TRIG_AVERAGE       (ADC_EMR_ASTE_MULTI_TRIG_AVERAGE_Val << ADC_EMR_ASTE_Pos) /* (ADC_EMR) The average requests several trigger events. Position */
#define ADC_EMR_ASTE_SINGLE_TRIG_AVERAGE      (ADC_EMR_ASTE_SINGLE_TRIG_AVERAGE_Val << ADC_EMR_ASTE_Pos) /* (ADC_EMR) The average requests only one trigger event. Position */
#define ADC_EMR_SRCCLK_Pos                    _UINT32_(21)                                         /* (ADC_EMR) External Clock Selection Position */
#define ADC_EMR_SRCCLK_Msk                    (_UINT32_(0x1) << ADC_EMR_SRCCLK_Pos)                /* (ADC_EMR) External Clock Selection Mask */
#define ADC_EMR_SRCCLK(value)                 (ADC_EMR_SRCCLK_Msk & (_UINT32_(value) << ADC_EMR_SRCCLK_Pos)) /* Assignment of value for SRCCLK in the ADC_EMR register */
#define   ADC_EMR_SRCCLK_PERIPH_CLK_Val       _UINT32_(0x0)                                        /* (ADC_EMR) The peripheral clock is the source for the ADC prescaler.  */
#define   ADC_EMR_SRCCLK_GCLK_Val             _UINT32_(0x1)                                        /* (ADC_EMR) GCLK is the source clock for the ADC prescaler, thus the ADC clock can be independent of the core/peripheral clock.  */
#define ADC_EMR_SRCCLK_PERIPH_CLK             (ADC_EMR_SRCCLK_PERIPH_CLK_Val << ADC_EMR_SRCCLK_Pos) /* (ADC_EMR) The peripheral clock is the source for the ADC prescaler. Position */
#define ADC_EMR_SRCCLK_GCLK                   (ADC_EMR_SRCCLK_GCLK_Val << ADC_EMR_SRCCLK_Pos)      /* (ADC_EMR) GCLK is the source clock for the ADC prescaler, thus the ADC clock can be independent of the core/peripheral clock. Position */
#define ADC_EMR_TRACKX4_Pos                   _UINT32_(22)                                         /* (ADC_EMR) Tracking Time x4 Position */
#define ADC_EMR_TRACKX4_Msk                   (_UINT32_(0x1) << ADC_EMR_TRACKX4_Pos)               /* (ADC_EMR) Tracking Time x4 Mask */
#define ADC_EMR_TRACKX4(value)                (ADC_EMR_TRACKX4_Msk & (_UINT32_(value) << ADC_EMR_TRACKX4_Pos)) /* Assignment of value for TRACKX4 in the ADC_EMR register */
#define   ADC_EMR_TRACKX4_0_Val               _UINT32_(0x0)                                        /* (ADC_EMR) The ADC_MR.TRACKTIM effect is multiplied by 1.  */
#define   ADC_EMR_TRACKX4_1_Val               _UINT32_(0x1)                                        /* (ADC_EMR) The ADC_MR.TRACKTIM effect is multiplied by 4.  */
#define ADC_EMR_TRACKX4_0                     (ADC_EMR_TRACKX4_0_Val << ADC_EMR_TRACKX4_Pos)       /* (ADC_EMR) The ADC_MR.TRACKTIM effect is multiplied by 1. Position */
#define ADC_EMR_TRACKX4_1                     (ADC_EMR_TRACKX4_1_Val << ADC_EMR_TRACKX4_Pos)       /* (ADC_EMR) The ADC_MR.TRACKTIM effect is multiplied by 4. Position */
#define ADC_EMR_TAG_Pos                       _UINT32_(24)                                         /* (ADC_EMR) Tag of ADC_LCDR Position */
#define ADC_EMR_TAG_Msk                       (_UINT32_(0x1) << ADC_EMR_TAG_Pos)                   /* (ADC_EMR) Tag of ADC_LCDR Mask */
#define ADC_EMR_TAG(value)                    (ADC_EMR_TAG_Msk & (_UINT32_(value) << ADC_EMR_TAG_Pos)) /* Assignment of value for TAG in the ADC_EMR register */
#define   ADC_EMR_TAG_0_Val                   _UINT32_(0x0)                                        /* (ADC_EMR) Sets ADC_LCDR.CHNB to zero.  */
#define   ADC_EMR_TAG_1_Val                   _UINT32_(0x1)                                        /* (ADC_EMR) Appends the channel number to the conversion result in ADC_LCDR.  */
#define ADC_EMR_TAG_0                         (ADC_EMR_TAG_0_Val << ADC_EMR_TAG_Pos)               /* (ADC_EMR) Sets ADC_LCDR.CHNB to zero. Position */
#define ADC_EMR_TAG_1                         (ADC_EMR_TAG_1_Val << ADC_EMR_TAG_Pos)               /* (ADC_EMR) Appends the channel number to the conversion result in ADC_LCDR. Position */
#define ADC_EMR_SIGNMODE_Pos                  _UINT32_(25)                                         /* (ADC_EMR) Sign Mode Position */
#define ADC_EMR_SIGNMODE_Msk                  (_UINT32_(0x3) << ADC_EMR_SIGNMODE_Pos)              /* (ADC_EMR) Sign Mode Mask */
#define ADC_EMR_SIGNMODE(value)               (ADC_EMR_SIGNMODE_Msk & (_UINT32_(value) << ADC_EMR_SIGNMODE_Pos)) /* Assignment of value for SIGNMODE in the ADC_EMR register */
#define   ADC_EMR_SIGNMODE_SE_UNSG_DF_SIGN_Val _UINT32_(0x0)                                        /* (ADC_EMR) Single-Ended channels: Unsigned conversions. Pseudo-differential channels and Differential channels: Signed conversions.  */
#define   ADC_EMR_SIGNMODE_SE_SIGN_DF_UNSG_Val _UINT32_(0x1)                                        /* (ADC_EMR) Single-Ended channels: Signed conversions. Pseudo-differential channels and Differential channels: Unsigned conversions.  */
#define   ADC_EMR_SIGNMODE_ALL_UNSIGNED_Val   _UINT32_(0x2)                                        /* (ADC_EMR) All channels: Unsigned conversions.  */
#define   ADC_EMR_SIGNMODE_ALL_SIGNED_Val     _UINT32_(0x3)                                        /* (ADC_EMR) All channels: Signed conversions.  */
#define ADC_EMR_SIGNMODE_SE_UNSG_DF_SIGN      (ADC_EMR_SIGNMODE_SE_UNSG_DF_SIGN_Val << ADC_EMR_SIGNMODE_Pos) /* (ADC_EMR) Single-Ended channels: Unsigned conversions. Pseudo-differential channels and Differential channels: Signed conversions. Position */
#define ADC_EMR_SIGNMODE_SE_SIGN_DF_UNSG      (ADC_EMR_SIGNMODE_SE_SIGN_DF_UNSG_Val << ADC_EMR_SIGNMODE_Pos) /* (ADC_EMR) Single-Ended channels: Signed conversions. Pseudo-differential channels and Differential channels: Unsigned conversions. Position */
#define ADC_EMR_SIGNMODE_ALL_UNSIGNED         (ADC_EMR_SIGNMODE_ALL_UNSIGNED_Val << ADC_EMR_SIGNMODE_Pos) /* (ADC_EMR) All channels: Unsigned conversions. Position */
#define ADC_EMR_SIGNMODE_ALL_SIGNED           (ADC_EMR_SIGNMODE_ALL_SIGNED_Val << ADC_EMR_SIGNMODE_Pos) /* (ADC_EMR) All channels: Signed conversions. Position */
#define ADC_EMR_ADCMODE_Pos                   _UINT32_(28)                                         /* (ADC_EMR) ADC Running Mode Position */
#define ADC_EMR_ADCMODE_Msk                   (_UINT32_(0x3) << ADC_EMR_ADCMODE_Pos)               /* (ADC_EMR) ADC Running Mode Mask */
#define ADC_EMR_ADCMODE(value)                (ADC_EMR_ADCMODE_Msk & (_UINT32_(value) << ADC_EMR_ADCMODE_Pos)) /* Assignment of value for ADCMODE in the ADC_EMR register */
#define   ADC_EMR_ADCMODE_NORMAL_Val          _UINT32_(0x0)                                        /* (ADC_EMR) Normal mode of operation.  */
#define   ADC_EMR_ADCMODE_OFFSET_ERROR_Val    _UINT32_(0x1)                                        /* (ADC_EMR) Offset Error mode to measure the offset error. See Table 7-8.  */
#define   ADC_EMR_ADCMODE_GAIN_ERROR_HIGH_Val _UINT32_(0x2)                                        /* (ADC_EMR) Gain Error mode to measure the gain error. See Table 7-8.  */
#define   ADC_EMR_ADCMODE_GAIN_ERROR_LOW_Val  _UINT32_(0x3)                                        /* (ADC_EMR) Gain Error mode to measure the gain error. See Table 7-8.  */
#define ADC_EMR_ADCMODE_NORMAL                (ADC_EMR_ADCMODE_NORMAL_Val << ADC_EMR_ADCMODE_Pos)  /* (ADC_EMR) Normal mode of operation. Position */
#define ADC_EMR_ADCMODE_OFFSET_ERROR          (ADC_EMR_ADCMODE_OFFSET_ERROR_Val << ADC_EMR_ADCMODE_Pos) /* (ADC_EMR) Offset Error mode to measure the offset error. See Table 7-8. Position */
#define ADC_EMR_ADCMODE_GAIN_ERROR_HIGH       (ADC_EMR_ADCMODE_GAIN_ERROR_HIGH_Val << ADC_EMR_ADCMODE_Pos) /* (ADC_EMR) Gain Error mode to measure the gain error. See Table 7-8. Position */
#define ADC_EMR_ADCMODE_GAIN_ERROR_LOW        (ADC_EMR_ADCMODE_GAIN_ERROR_LOW_Val << ADC_EMR_ADCMODE_Pos) /* (ADC_EMR) Gain Error mode to measure the gain error. See Table 7-8. Position */
#define ADC_EMR_Msk                           _UINT32_(0x377732F7)                                 /* (ADC_EMR) Register Mask  */

#define ADC_EMR_TRACKX_Pos                    _UINT32_(22)                                         /* (ADC_EMR Position) Tracking Time x4 */
#define ADC_EMR_TRACKX_Msk                    (_UINT32_(0x1) << ADC_EMR_TRACKX_Pos)                /* (ADC_EMR Mask) TRACKX */
#define ADC_EMR_TRACKX(value)                 (ADC_EMR_TRACKX_Msk & (_UINT32_(value) << ADC_EMR_TRACKX_Pos)) 

/* -------- ADC_CWR : (ADC Offset: 0x44) (R/W 32) Compare Window Register -------- */
#define ADC_CWR_RESETVALUE                    _UINT32_(0x00)                                       /*  (ADC_CWR) Compare Window Register  Reset Value */

#define ADC_CWR_LOWTHRES_Pos                  _UINT32_(0)                                          /* (ADC_CWR) Low Threshold Position */
#define ADC_CWR_LOWTHRES_Msk                  (_UINT32_(0xFFFF) << ADC_CWR_LOWTHRES_Pos)           /* (ADC_CWR) Low Threshold Mask */
#define ADC_CWR_LOWTHRES(value)               (ADC_CWR_LOWTHRES_Msk & (_UINT32_(value) << ADC_CWR_LOWTHRES_Pos)) /* Assignment of value for LOWTHRES in the ADC_CWR register */
#define ADC_CWR_HIGHTHRES_Pos                 _UINT32_(16)                                         /* (ADC_CWR) High Threshold Position */
#define ADC_CWR_HIGHTHRES_Msk                 (_UINT32_(0xFFFF) << ADC_CWR_HIGHTHRES_Pos)          /* (ADC_CWR) High Threshold Mask */
#define ADC_CWR_HIGHTHRES(value)              (ADC_CWR_HIGHTHRES_Msk & (_UINT32_(value) << ADC_CWR_HIGHTHRES_Pos)) /* Assignment of value for HIGHTHRES in the ADC_CWR register */
#define ADC_CWR_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (ADC_CWR) Register Mask  */


/* -------- ADC_CCR : (ADC Offset: 0x4C) (R/W 32) Channel Configuration Register -------- */
#define ADC_CCR_RESETVALUE                    _UINT32_(0x00)                                       /*  (ADC_CCR) Channel Configuration Register  Reset Value */

#define ADC_CCR_DIFF0_Pos                     _UINT32_(16)                                         /* (ADC_CCR) Differential Inputs for Channel 0 Position */
#define ADC_CCR_DIFF0_Msk                     (_UINT32_(0x1) << ADC_CCR_DIFF0_Pos)                 /* (ADC_CCR) Differential Inputs for Channel 0 Mask */
#define ADC_CCR_DIFF0(value)                  (ADC_CCR_DIFF0_Msk & (_UINT32_(value) << ADC_CCR_DIFF0_Pos)) /* Assignment of value for DIFF0 in the ADC_CCR register */
#define   ADC_CCR_DIFF0_0_Val                 _UINT32_(0x0)                                        /* (ADC_CCR) Corresponding channel is set in Single-ended mode.  */
#define   ADC_CCR_DIFF0_1_Val                 _UINT32_(0x1)                                        /* (ADC_CCR) Corresponding channel is set in Differential mode.  */
#define ADC_CCR_DIFF0_0                       (ADC_CCR_DIFF0_0_Val << ADC_CCR_DIFF0_Pos)           /* (ADC_CCR) Corresponding channel is set in Single-ended mode. Position */
#define ADC_CCR_DIFF0_1                       (ADC_CCR_DIFF0_1_Val << ADC_CCR_DIFF0_Pos)           /* (ADC_CCR) Corresponding channel is set in Differential mode. Position */
#define ADC_CCR_DIFF1_Pos                     _UINT32_(17)                                         /* (ADC_CCR) Differential Inputs for Channel 1 Position */
#define ADC_CCR_DIFF1_Msk                     (_UINT32_(0x1) << ADC_CCR_DIFF1_Pos)                 /* (ADC_CCR) Differential Inputs for Channel 1 Mask */
#define ADC_CCR_DIFF1(value)                  (ADC_CCR_DIFF1_Msk & (_UINT32_(value) << ADC_CCR_DIFF1_Pos)) /* Assignment of value for DIFF1 in the ADC_CCR register */
#define   ADC_CCR_DIFF1_0_Val                 _UINT32_(0x0)                                        /* (ADC_CCR) Corresponding channel is set in Single-ended mode.  */
#define   ADC_CCR_DIFF1_1_Val                 _UINT32_(0x1)                                        /* (ADC_CCR) Corresponding channel is set in Differential mode.  */
#define ADC_CCR_DIFF1_0                       (ADC_CCR_DIFF1_0_Val << ADC_CCR_DIFF1_Pos)           /* (ADC_CCR) Corresponding channel is set in Single-ended mode. Position */
#define ADC_CCR_DIFF1_1                       (ADC_CCR_DIFF1_1_Val << ADC_CCR_DIFF1_Pos)           /* (ADC_CCR) Corresponding channel is set in Differential mode. Position */
#define ADC_CCR_DIFF2_Pos                     _UINT32_(18)                                         /* (ADC_CCR) Differential Inputs for Channel 2 Position */
#define ADC_CCR_DIFF2_Msk                     (_UINT32_(0x1) << ADC_CCR_DIFF2_Pos)                 /* (ADC_CCR) Differential Inputs for Channel 2 Mask */
#define ADC_CCR_DIFF2(value)                  (ADC_CCR_DIFF2_Msk & (_UINT32_(value) << ADC_CCR_DIFF2_Pos)) /* Assignment of value for DIFF2 in the ADC_CCR register */
#define   ADC_CCR_DIFF2_0_Val                 _UINT32_(0x0)                                        /* (ADC_CCR) Corresponding channel is set in Single-ended mode.  */
#define   ADC_CCR_DIFF2_1_Val                 _UINT32_(0x1)                                        /* (ADC_CCR) Corresponding channel is set in Differential mode.  */
#define ADC_CCR_DIFF2_0                       (ADC_CCR_DIFF2_0_Val << ADC_CCR_DIFF2_Pos)           /* (ADC_CCR) Corresponding channel is set in Single-ended mode. Position */
#define ADC_CCR_DIFF2_1                       (ADC_CCR_DIFF2_1_Val << ADC_CCR_DIFF2_Pos)           /* (ADC_CCR) Corresponding channel is set in Differential mode. Position */
#define ADC_CCR_DIFF3_Pos                     _UINT32_(19)                                         /* (ADC_CCR) Differential Inputs for Channel 3 Position */
#define ADC_CCR_DIFF3_Msk                     (_UINT32_(0x1) << ADC_CCR_DIFF3_Pos)                 /* (ADC_CCR) Differential Inputs for Channel 3 Mask */
#define ADC_CCR_DIFF3(value)                  (ADC_CCR_DIFF3_Msk & (_UINT32_(value) << ADC_CCR_DIFF3_Pos)) /* Assignment of value for DIFF3 in the ADC_CCR register */
#define   ADC_CCR_DIFF3_0_Val                 _UINT32_(0x0)                                        /* (ADC_CCR) Corresponding channel is set in Single-ended mode.  */
#define   ADC_CCR_DIFF3_1_Val                 _UINT32_(0x1)                                        /* (ADC_CCR) Corresponding channel is set in Differential mode.  */
#define ADC_CCR_DIFF3_0                       (ADC_CCR_DIFF3_0_Val << ADC_CCR_DIFF3_Pos)           /* (ADC_CCR) Corresponding channel is set in Single-ended mode. Position */
#define ADC_CCR_DIFF3_1                       (ADC_CCR_DIFF3_1_Val << ADC_CCR_DIFF3_Pos)           /* (ADC_CCR) Corresponding channel is set in Differential mode. Position */
#define ADC_CCR_DIFF4_Pos                     _UINT32_(20)                                         /* (ADC_CCR) Differential Inputs for Channel 4 Position */
#define ADC_CCR_DIFF4_Msk                     (_UINT32_(0x1) << ADC_CCR_DIFF4_Pos)                 /* (ADC_CCR) Differential Inputs for Channel 4 Mask */
#define ADC_CCR_DIFF4(value)                  (ADC_CCR_DIFF4_Msk & (_UINT32_(value) << ADC_CCR_DIFF4_Pos)) /* Assignment of value for DIFF4 in the ADC_CCR register */
#define   ADC_CCR_DIFF4_0_Val                 _UINT32_(0x0)                                        /* (ADC_CCR) Corresponding channel is set in Single-ended mode.  */
#define   ADC_CCR_DIFF4_1_Val                 _UINT32_(0x1)                                        /* (ADC_CCR) Corresponding channel is set in Differential mode.  */
#define ADC_CCR_DIFF4_0                       (ADC_CCR_DIFF4_0_Val << ADC_CCR_DIFF4_Pos)           /* (ADC_CCR) Corresponding channel is set in Single-ended mode. Position */
#define ADC_CCR_DIFF4_1                       (ADC_CCR_DIFF4_1_Val << ADC_CCR_DIFF4_Pos)           /* (ADC_CCR) Corresponding channel is set in Differential mode. Position */
#define ADC_CCR_DIFF5_Pos                     _UINT32_(21)                                         /* (ADC_CCR) Differential Inputs for Channel 5 Position */
#define ADC_CCR_DIFF5_Msk                     (_UINT32_(0x1) << ADC_CCR_DIFF5_Pos)                 /* (ADC_CCR) Differential Inputs for Channel 5 Mask */
#define ADC_CCR_DIFF5(value)                  (ADC_CCR_DIFF5_Msk & (_UINT32_(value) << ADC_CCR_DIFF5_Pos)) /* Assignment of value for DIFF5 in the ADC_CCR register */
#define   ADC_CCR_DIFF5_0_Val                 _UINT32_(0x0)                                        /* (ADC_CCR) Corresponding channel is set in Single-ended mode.  */
#define   ADC_CCR_DIFF5_1_Val                 _UINT32_(0x1)                                        /* (ADC_CCR) Corresponding channel is set in Differential mode.  */
#define ADC_CCR_DIFF5_0                       (ADC_CCR_DIFF5_0_Val << ADC_CCR_DIFF5_Pos)           /* (ADC_CCR) Corresponding channel is set in Single-ended mode. Position */
#define ADC_CCR_DIFF5_1                       (ADC_CCR_DIFF5_1_Val << ADC_CCR_DIFF5_Pos)           /* (ADC_CCR) Corresponding channel is set in Differential mode. Position */
#define ADC_CCR_DIFF6_Pos                     _UINT32_(22)                                         /* (ADC_CCR) Differential Inputs for Channel 6 Position */
#define ADC_CCR_DIFF6_Msk                     (_UINT32_(0x1) << ADC_CCR_DIFF6_Pos)                 /* (ADC_CCR) Differential Inputs for Channel 6 Mask */
#define ADC_CCR_DIFF6(value)                  (ADC_CCR_DIFF6_Msk & (_UINT32_(value) << ADC_CCR_DIFF6_Pos)) /* Assignment of value for DIFF6 in the ADC_CCR register */
#define   ADC_CCR_DIFF6_0_Val                 _UINT32_(0x0)                                        /* (ADC_CCR) Corresponding channel is set in Single-ended mode.  */
#define   ADC_CCR_DIFF6_1_Val                 _UINT32_(0x1)                                        /* (ADC_CCR) Corresponding channel is set in Differential mode.  */
#define ADC_CCR_DIFF6_0                       (ADC_CCR_DIFF6_0_Val << ADC_CCR_DIFF6_Pos)           /* (ADC_CCR) Corresponding channel is set in Single-ended mode. Position */
#define ADC_CCR_DIFF6_1                       (ADC_CCR_DIFF6_1_Val << ADC_CCR_DIFF6_Pos)           /* (ADC_CCR) Corresponding channel is set in Differential mode. Position */
#define ADC_CCR_DIFF7_Pos                     _UINT32_(23)                                         /* (ADC_CCR) Differential Inputs for Channel 7 Position */
#define ADC_CCR_DIFF7_Msk                     (_UINT32_(0x1) << ADC_CCR_DIFF7_Pos)                 /* (ADC_CCR) Differential Inputs for Channel 7 Mask */
#define ADC_CCR_DIFF7(value)                  (ADC_CCR_DIFF7_Msk & (_UINT32_(value) << ADC_CCR_DIFF7_Pos)) /* Assignment of value for DIFF7 in the ADC_CCR register */
#define   ADC_CCR_DIFF7_0_Val                 _UINT32_(0x0)                                        /* (ADC_CCR) Corresponding channel is set in Single-ended mode.  */
#define   ADC_CCR_DIFF7_1_Val                 _UINT32_(0x1)                                        /* (ADC_CCR) Corresponding channel is set in Differential mode.  */
#define ADC_CCR_DIFF7_0                       (ADC_CCR_DIFF7_0_Val << ADC_CCR_DIFF7_Pos)           /* (ADC_CCR) Corresponding channel is set in Single-ended mode. Position */
#define ADC_CCR_DIFF7_1                       (ADC_CCR_DIFF7_1_Val << ADC_CCR_DIFF7_Pos)           /* (ADC_CCR) Corresponding channel is set in Differential mode. Position */
#define ADC_CCR_Msk                           _UINT32_(0x00FF0000)                                 /* (ADC_CCR) Register Mask  */

#define ADC_CCR_DIFF_Pos                      _UINT32_(16)                                         /* (ADC_CCR Position) Differential Inputs for Channel 7 */
#define ADC_CCR_DIFF_Msk                      (_UINT32_(0xFF) << ADC_CCR_DIFF_Pos)                 /* (ADC_CCR Mask) DIFF */
#define ADC_CCR_DIFF(value)                   (ADC_CCR_DIFF_Msk & (_UINT32_(value) << ADC_CCR_DIFF_Pos)) 

/* -------- ADC_CDR : (ADC Offset: 0x50) ( R/ 32) Channel Data Register x -------- */
#define ADC_CDR_RESETVALUE                    _UINT32_(0x00)                                       /*  (ADC_CDR) Channel Data Register x  Reset Value */

#define ADC_CDR_DATA_Pos                      _UINT32_(0)                                          /* (ADC_CDR) Converted Data Position */
#define ADC_CDR_DATA_Msk                      (_UINT32_(0xFFFF) << ADC_CDR_DATA_Pos)               /* (ADC_CDR) Converted Data Mask */
#define ADC_CDR_DATA(value)                   (ADC_CDR_DATA_Msk & (_UINT32_(value) << ADC_CDR_DATA_Pos)) /* Assignment of value for DATA in the ADC_CDR register */
#define ADC_CDR_Msk                           _UINT32_(0x0000FFFF)                                 /* (ADC_CDR) Register Mask  */


/* -------- ADC_ACR : (ADC Offset: 0x94) (R/W 32) Analog Control Register -------- */
#define ADC_ACR_RESETVALUE                    _UINT32_(0x101)                                      /*  (ADC_ACR) Analog Control Register  Reset Value */

#define ADC_ACR_PENDETSENS_Pos                _UINT32_(0)                                          /* (ADC_ACR) Pen Detection Sensitivity Position */
#define ADC_ACR_PENDETSENS_Msk                (_UINT32_(0x3) << ADC_ACR_PENDETSENS_Pos)            /* (ADC_ACR) Pen Detection Sensitivity Mask */
#define ADC_ACR_PENDETSENS(value)             (ADC_ACR_PENDETSENS_Msk & (_UINT32_(value) << ADC_ACR_PENDETSENS_Pos)) /* Assignment of value for PENDETSENS in the ADC_ACR register */
#define ADC_ACR_IBCTL_Pos                     _UINT32_(8)                                          /* (ADC_ACR) ADC Bias Current Control Position */
#define ADC_ACR_IBCTL_Msk                     (_UINT32_(0x3) << ADC_ACR_IBCTL_Pos)                 /* (ADC_ACR) ADC Bias Current Control Mask */
#define ADC_ACR_IBCTL(value)                  (ADC_ACR_IBCTL_Msk & (_UINT32_(value) << ADC_ACR_IBCTL_Pos)) /* Assignment of value for IBCTL in the ADC_ACR register */
#define ADC_ACR_Msk                           _UINT32_(0x00000303)                                 /* (ADC_ACR) Register Mask  */


/* -------- ADC_PDR : (ADC Offset: 0xA0) (R/W 32) Pseudo-Differential Register -------- */
#define ADC_PDR_RESETVALUE                    _UINT32_(0x00)                                       /*  (ADC_PDR) Pseudo-Differential Register  Reset Value */

#define ADC_PDR_PDIFF0_Pos                    _UINT32_(0)                                          /* (ADC_PDR) Pseudo-Differential Inputs for Channel 0 Position */
#define ADC_PDR_PDIFF0_Msk                    (_UINT32_(0x1) << ADC_PDR_PDIFF0_Pos)                /* (ADC_PDR) Pseudo-Differential Inputs for Channel 0 Mask */
#define ADC_PDR_PDIFF0(value)                 (ADC_PDR_PDIFF0_Msk & (_UINT32_(value) << ADC_PDR_PDIFF0_Pos)) /* Assignment of value for PDIFF0 in the ADC_PDR register */
#define   ADC_PDR_PDIFF0_0_Val                _UINT32_(0x0)                                        /* (ADC_PDR) The channel is configured as defined by ADC_CCR.DIFFx bit.  */
#define   ADC_PDR_PDIFF0_1_Val                _UINT32_(0x1)                                        /* (ADC_PDR) The channel is configured in pseudo-differential mode.  */
#define ADC_PDR_PDIFF0_0                      (ADC_PDR_PDIFF0_0_Val << ADC_PDR_PDIFF0_Pos)         /* (ADC_PDR) The channel is configured as defined by ADC_CCR.DIFFx bit. Position */
#define ADC_PDR_PDIFF0_1                      (ADC_PDR_PDIFF0_1_Val << ADC_PDR_PDIFF0_Pos)         /* (ADC_PDR) The channel is configured in pseudo-differential mode. Position */
#define ADC_PDR_PDIFF1_Pos                    _UINT32_(1)                                          /* (ADC_PDR) Pseudo-Differential Inputs for Channel 1 Position */
#define ADC_PDR_PDIFF1_Msk                    (_UINT32_(0x1) << ADC_PDR_PDIFF1_Pos)                /* (ADC_PDR) Pseudo-Differential Inputs for Channel 1 Mask */
#define ADC_PDR_PDIFF1(value)                 (ADC_PDR_PDIFF1_Msk & (_UINT32_(value) << ADC_PDR_PDIFF1_Pos)) /* Assignment of value for PDIFF1 in the ADC_PDR register */
#define   ADC_PDR_PDIFF1_0_Val                _UINT32_(0x0)                                        /* (ADC_PDR) The channel is configured as defined by ADC_CCR.DIFFx bit.  */
#define   ADC_PDR_PDIFF1_1_Val                _UINT32_(0x1)                                        /* (ADC_PDR) The channel is configured in pseudo-differential mode.  */
#define ADC_PDR_PDIFF1_0                      (ADC_PDR_PDIFF1_0_Val << ADC_PDR_PDIFF1_Pos)         /* (ADC_PDR) The channel is configured as defined by ADC_CCR.DIFFx bit. Position */
#define ADC_PDR_PDIFF1_1                      (ADC_PDR_PDIFF1_1_Val << ADC_PDR_PDIFF1_Pos)         /* (ADC_PDR) The channel is configured in pseudo-differential mode. Position */
#define ADC_PDR_PDIFF2_Pos                    _UINT32_(2)                                          /* (ADC_PDR) Pseudo-Differential Inputs for Channel 2 Position */
#define ADC_PDR_PDIFF2_Msk                    (_UINT32_(0x1) << ADC_PDR_PDIFF2_Pos)                /* (ADC_PDR) Pseudo-Differential Inputs for Channel 2 Mask */
#define ADC_PDR_PDIFF2(value)                 (ADC_PDR_PDIFF2_Msk & (_UINT32_(value) << ADC_PDR_PDIFF2_Pos)) /* Assignment of value for PDIFF2 in the ADC_PDR register */
#define   ADC_PDR_PDIFF2_0_Val                _UINT32_(0x0)                                        /* (ADC_PDR) The channel is configured as defined by ADC_CCR.DIFFx bit.  */
#define   ADC_PDR_PDIFF2_1_Val                _UINT32_(0x1)                                        /* (ADC_PDR) The channel is configured in pseudo-differential mode.  */
#define ADC_PDR_PDIFF2_0                      (ADC_PDR_PDIFF2_0_Val << ADC_PDR_PDIFF2_Pos)         /* (ADC_PDR) The channel is configured as defined by ADC_CCR.DIFFx bit. Position */
#define ADC_PDR_PDIFF2_1                      (ADC_PDR_PDIFF2_1_Val << ADC_PDR_PDIFF2_Pos)         /* (ADC_PDR) The channel is configured in pseudo-differential mode. Position */
#define ADC_PDR_PDIFF3_Pos                    _UINT32_(3)                                          /* (ADC_PDR) Pseudo-Differential Inputs for Channel 3 Position */
#define ADC_PDR_PDIFF3_Msk                    (_UINT32_(0x1) << ADC_PDR_PDIFF3_Pos)                /* (ADC_PDR) Pseudo-Differential Inputs for Channel 3 Mask */
#define ADC_PDR_PDIFF3(value)                 (ADC_PDR_PDIFF3_Msk & (_UINT32_(value) << ADC_PDR_PDIFF3_Pos)) /* Assignment of value for PDIFF3 in the ADC_PDR register */
#define   ADC_PDR_PDIFF3_0_Val                _UINT32_(0x0)                                        /* (ADC_PDR) The channel is configured as defined by ADC_CCR.DIFFx bit.  */
#define   ADC_PDR_PDIFF3_1_Val                _UINT32_(0x1)                                        /* (ADC_PDR) The channel is configured in pseudo-differential mode.  */
#define ADC_PDR_PDIFF3_0                      (ADC_PDR_PDIFF3_0_Val << ADC_PDR_PDIFF3_Pos)         /* (ADC_PDR) The channel is configured as defined by ADC_CCR.DIFFx bit. Position */
#define ADC_PDR_PDIFF3_1                      (ADC_PDR_PDIFF3_1_Val << ADC_PDR_PDIFF3_Pos)         /* (ADC_PDR) The channel is configured in pseudo-differential mode. Position */
#define ADC_PDR_PDIFF4_Pos                    _UINT32_(4)                                          /* (ADC_PDR) Pseudo-Differential Inputs for Channel 4 Position */
#define ADC_PDR_PDIFF4_Msk                    (_UINT32_(0x1) << ADC_PDR_PDIFF4_Pos)                /* (ADC_PDR) Pseudo-Differential Inputs for Channel 4 Mask */
#define ADC_PDR_PDIFF4(value)                 (ADC_PDR_PDIFF4_Msk & (_UINT32_(value) << ADC_PDR_PDIFF4_Pos)) /* Assignment of value for PDIFF4 in the ADC_PDR register */
#define   ADC_PDR_PDIFF4_0_Val                _UINT32_(0x0)                                        /* (ADC_PDR) The channel is configured as defined by ADC_CCR.DIFFx bit.  */
#define   ADC_PDR_PDIFF4_1_Val                _UINT32_(0x1)                                        /* (ADC_PDR) The channel is configured in pseudo-differential mode.  */
#define ADC_PDR_PDIFF4_0                      (ADC_PDR_PDIFF4_0_Val << ADC_PDR_PDIFF4_Pos)         /* (ADC_PDR) The channel is configured as defined by ADC_CCR.DIFFx bit. Position */
#define ADC_PDR_PDIFF4_1                      (ADC_PDR_PDIFF4_1_Val << ADC_PDR_PDIFF4_Pos)         /* (ADC_PDR) The channel is configured in pseudo-differential mode. Position */
#define ADC_PDR_PDIFF5_Pos                    _UINT32_(5)                                          /* (ADC_PDR) Pseudo-Differential Inputs for Channel 5 Position */
#define ADC_PDR_PDIFF5_Msk                    (_UINT32_(0x1) << ADC_PDR_PDIFF5_Pos)                /* (ADC_PDR) Pseudo-Differential Inputs for Channel 5 Mask */
#define ADC_PDR_PDIFF5(value)                 (ADC_PDR_PDIFF5_Msk & (_UINT32_(value) << ADC_PDR_PDIFF5_Pos)) /* Assignment of value for PDIFF5 in the ADC_PDR register */
#define   ADC_PDR_PDIFF5_0_Val                _UINT32_(0x0)                                        /* (ADC_PDR) The channel is configured as defined by ADC_CCR.DIFFx bit.  */
#define   ADC_PDR_PDIFF5_1_Val                _UINT32_(0x1)                                        /* (ADC_PDR) The channel is configured in pseudo-differential mode.  */
#define ADC_PDR_PDIFF5_0                      (ADC_PDR_PDIFF5_0_Val << ADC_PDR_PDIFF5_Pos)         /* (ADC_PDR) The channel is configured as defined by ADC_CCR.DIFFx bit. Position */
#define ADC_PDR_PDIFF5_1                      (ADC_PDR_PDIFF5_1_Val << ADC_PDR_PDIFF5_Pos)         /* (ADC_PDR) The channel is configured in pseudo-differential mode. Position */
#define ADC_PDR_PDIFF6_Pos                    _UINT32_(6)                                          /* (ADC_PDR) Pseudo-Differential Inputs for Channel 6 Position */
#define ADC_PDR_PDIFF6_Msk                    (_UINT32_(0x1) << ADC_PDR_PDIFF6_Pos)                /* (ADC_PDR) Pseudo-Differential Inputs for Channel 6 Mask */
#define ADC_PDR_PDIFF6(value)                 (ADC_PDR_PDIFF6_Msk & (_UINT32_(value) << ADC_PDR_PDIFF6_Pos)) /* Assignment of value for PDIFF6 in the ADC_PDR register */
#define   ADC_PDR_PDIFF6_0_Val                _UINT32_(0x0)                                        /* (ADC_PDR) The channel is configured as defined by ADC_CCR.DIFFx bit.  */
#define   ADC_PDR_PDIFF6_1_Val                _UINT32_(0x1)                                        /* (ADC_PDR) The channel is configured in pseudo-differential mode.  */
#define ADC_PDR_PDIFF6_0                      (ADC_PDR_PDIFF6_0_Val << ADC_PDR_PDIFF6_Pos)         /* (ADC_PDR) The channel is configured as defined by ADC_CCR.DIFFx bit. Position */
#define ADC_PDR_PDIFF6_1                      (ADC_PDR_PDIFF6_1_Val << ADC_PDR_PDIFF6_Pos)         /* (ADC_PDR) The channel is configured in pseudo-differential mode. Position */
#define ADC_PDR_PDIFF7_Pos                    _UINT32_(7)                                          /* (ADC_PDR) Pseudo-Differential Inputs for Channel 7 Position */
#define ADC_PDR_PDIFF7_Msk                    (_UINT32_(0x1) << ADC_PDR_PDIFF7_Pos)                /* (ADC_PDR) Pseudo-Differential Inputs for Channel 7 Mask */
#define ADC_PDR_PDIFF7(value)                 (ADC_PDR_PDIFF7_Msk & (_UINT32_(value) << ADC_PDR_PDIFF7_Pos)) /* Assignment of value for PDIFF7 in the ADC_PDR register */
#define   ADC_PDR_PDIFF7_0_Val                _UINT32_(0x0)                                        /* (ADC_PDR) The channel is configured as defined by ADC_CCR.DIFFx bit.  */
#define   ADC_PDR_PDIFF7_1_Val                _UINT32_(0x1)                                        /* (ADC_PDR) The channel is configured in pseudo-differential mode.  */
#define ADC_PDR_PDIFF7_0                      (ADC_PDR_PDIFF7_0_Val << ADC_PDR_PDIFF7_Pos)         /* (ADC_PDR) The channel is configured as defined by ADC_CCR.DIFFx bit. Position */
#define ADC_PDR_PDIFF7_1                      (ADC_PDR_PDIFF7_1_Val << ADC_PDR_PDIFF7_Pos)         /* (ADC_PDR) The channel is configured in pseudo-differential mode. Position */
#define ADC_PDR_Msk                           _UINT32_(0x000000FF)                                 /* (ADC_PDR) Register Mask  */

#define ADC_PDR_PDIFF_Pos                     _UINT32_(0)                                          /* (ADC_PDR Position) Pseudo-Differential Inputs for Channel 7 */
#define ADC_PDR_PDIFF_Msk                     (_UINT32_(0xFF) << ADC_PDR_PDIFF_Pos)                /* (ADC_PDR Mask) PDIFF */
#define ADC_PDR_PDIFF(value)                  (ADC_PDR_PDIFF_Msk & (_UINT32_(value) << ADC_PDR_PDIFF_Pos)) 

/* -------- ADC_TSMR : (ADC Offset: 0xB0) (R/W 32) Touchscreen Mode Register -------- */
#define ADC_TSMR_RESETVALUE                   _UINT32_(0x00)                                       /*  (ADC_TSMR) Touchscreen Mode Register  Reset Value */

#define ADC_TSMR_TSMODE_Pos                   _UINT32_(0)                                          /* (ADC_TSMR) Touchscreen Mode Position */
#define ADC_TSMR_TSMODE_Msk                   (_UINT32_(0x3) << ADC_TSMR_TSMODE_Pos)               /* (ADC_TSMR) Touchscreen Mode Mask */
#define ADC_TSMR_TSMODE(value)                (ADC_TSMR_TSMODE_Msk & (_UINT32_(value) << ADC_TSMR_TSMODE_Pos)) /* Assignment of value for TSMODE in the ADC_TSMR register */
#define   ADC_TSMR_TSMODE_NONE_Val            _UINT32_(0x0)                                        /* (ADC_TSMR) No Touchscreen  */
#define   ADC_TSMR_TSMODE_4_WIRE_NO_PM_Val    _UINT32_(0x1)                                        /* (ADC_TSMR) 4-wire Touchscreen without pressure measurement  */
#define   ADC_TSMR_TSMODE_4_WIRE_Val          _UINT32_(0x2)                                        /* (ADC_TSMR) 4-wire Touchscreen with pressure measurement  */
#define   ADC_TSMR_TSMODE_5_WIRE_Val          _UINT32_(0x3)                                        /* (ADC_TSMR) 5-wire Touchscreen  */
#define ADC_TSMR_TSMODE_NONE                  (ADC_TSMR_TSMODE_NONE_Val << ADC_TSMR_TSMODE_Pos)    /* (ADC_TSMR) No Touchscreen Position */
#define ADC_TSMR_TSMODE_4_WIRE_NO_PM          (ADC_TSMR_TSMODE_4_WIRE_NO_PM_Val << ADC_TSMR_TSMODE_Pos) /* (ADC_TSMR) 4-wire Touchscreen without pressure measurement Position */
#define ADC_TSMR_TSMODE_4_WIRE                (ADC_TSMR_TSMODE_4_WIRE_Val << ADC_TSMR_TSMODE_Pos)  /* (ADC_TSMR) 4-wire Touchscreen with pressure measurement Position */
#define ADC_TSMR_TSMODE_5_WIRE                (ADC_TSMR_TSMODE_5_WIRE_Val << ADC_TSMR_TSMODE_Pos)  /* (ADC_TSMR) 5-wire Touchscreen Position */
#define ADC_TSMR_TSAV_Pos                     _UINT32_(4)                                          /* (ADC_TSMR) Touchscreen Average Position */
#define ADC_TSMR_TSAV_Msk                     (_UINT32_(0x3) << ADC_TSMR_TSAV_Pos)                 /* (ADC_TSMR) Touchscreen Average Mask */
#define ADC_TSMR_TSAV(value)                  (ADC_TSMR_TSAV_Msk & (_UINT32_(value) << ADC_TSMR_TSAV_Pos)) /* Assignment of value for TSAV in the ADC_TSMR register */
#define   ADC_TSMR_TSAV_NO_FILTER_Val         _UINT32_(0x0)                                        /* (ADC_TSMR) No Filtering. Only one ADC conversion per measure  */
#define   ADC_TSMR_TSAV_AVG2CONV_Val          _UINT32_(0x1)                                        /* (ADC_TSMR) Averages 2 ADC conversions  */
#define   ADC_TSMR_TSAV_AVG4CONV_Val          _UINT32_(0x2)                                        /* (ADC_TSMR) Averages 4 ADC conversions  */
#define   ADC_TSMR_TSAV_AVG8CONV_Val          _UINT32_(0x3)                                        /* (ADC_TSMR) Averages 8 ADC conversions  */
#define ADC_TSMR_TSAV_NO_FILTER               (ADC_TSMR_TSAV_NO_FILTER_Val << ADC_TSMR_TSAV_Pos)   /* (ADC_TSMR) No Filtering. Only one ADC conversion per measure Position */
#define ADC_TSMR_TSAV_AVG2CONV                (ADC_TSMR_TSAV_AVG2CONV_Val << ADC_TSMR_TSAV_Pos)    /* (ADC_TSMR) Averages 2 ADC conversions Position */
#define ADC_TSMR_TSAV_AVG4CONV                (ADC_TSMR_TSAV_AVG4CONV_Val << ADC_TSMR_TSAV_Pos)    /* (ADC_TSMR) Averages 4 ADC conversions Position */
#define ADC_TSMR_TSAV_AVG8CONV                (ADC_TSMR_TSAV_AVG8CONV_Val << ADC_TSMR_TSAV_Pos)    /* (ADC_TSMR) Averages 8 ADC conversions Position */
#define ADC_TSMR_TSFREQ_Pos                   _UINT32_(8)                                          /* (ADC_TSMR) Touchscreen Frequency Position */
#define ADC_TSMR_TSFREQ_Msk                   (_UINT32_(0xF) << ADC_TSMR_TSFREQ_Pos)               /* (ADC_TSMR) Touchscreen Frequency Mask */
#define ADC_TSMR_TSFREQ(value)                (ADC_TSMR_TSFREQ_Msk & (_UINT32_(value) << ADC_TSMR_TSFREQ_Pos)) /* Assignment of value for TSFREQ in the ADC_TSMR register */
#define ADC_TSMR_TSSCTIM_Pos                  _UINT32_(16)                                         /* (ADC_TSMR) Touchscreen Switches Closure Time Position */
#define ADC_TSMR_TSSCTIM_Msk                  (_UINT32_(0xF) << ADC_TSMR_TSSCTIM_Pos)              /* (ADC_TSMR) Touchscreen Switches Closure Time Mask */
#define ADC_TSMR_TSSCTIM(value)               (ADC_TSMR_TSSCTIM_Msk & (_UINT32_(value) << ADC_TSMR_TSSCTIM_Pos)) /* Assignment of value for TSSCTIM in the ADC_TSMR register */
#define ADC_TSMR_NOTSDMA_Pos                  _UINT32_(22)                                         /* (ADC_TSMR) No TouchScreen DMA Position */
#define ADC_TSMR_NOTSDMA_Msk                  (_UINT32_(0x1) << ADC_TSMR_NOTSDMA_Pos)              /* (ADC_TSMR) No TouchScreen DMA Mask */
#define ADC_TSMR_NOTSDMA(value)               (ADC_TSMR_NOTSDMA_Msk & (_UINT32_(value) << ADC_TSMR_NOTSDMA_Pos)) /* Assignment of value for NOTSDMA in the ADC_TSMR register */
#define   ADC_TSMR_NOTSDMA_0_Val              _UINT32_(0x0)                                        /* (ADC_TSMR) XPOS, YPOS, Z1, Z2 are transmitted in ADC_LCDR.  */
#define   ADC_TSMR_NOTSDMA_1_Val              _UINT32_(0x1)                                        /* (ADC_TSMR) XPOS, YPOS, Z1, Z2 are never transmitted in ADC_LCDR, therefore the buffer does not contains touchscreen values.  */
#define ADC_TSMR_NOTSDMA_0                    (ADC_TSMR_NOTSDMA_0_Val << ADC_TSMR_NOTSDMA_Pos)     /* (ADC_TSMR) XPOS, YPOS, Z1, Z2 are transmitted in ADC_LCDR. Position */
#define ADC_TSMR_NOTSDMA_1                    (ADC_TSMR_NOTSDMA_1_Val << ADC_TSMR_NOTSDMA_Pos)     /* (ADC_TSMR) XPOS, YPOS, Z1, Z2 are never transmitted in ADC_LCDR, therefore the buffer does not contains touchscreen values. Position */
#define ADC_TSMR_PENDET_Pos                   _UINT32_(24)                                         /* (ADC_TSMR) Pen Contact Detection Enable Position */
#define ADC_TSMR_PENDET_Msk                   (_UINT32_(0x1) << ADC_TSMR_PENDET_Pos)               /* (ADC_TSMR) Pen Contact Detection Enable Mask */
#define ADC_TSMR_PENDET(value)                (ADC_TSMR_PENDET_Msk & (_UINT32_(value) << ADC_TSMR_PENDET_Pos)) /* Assignment of value for PENDET in the ADC_TSMR register */
#define   ADC_TSMR_PENDET_0_Val               _UINT32_(0x0)                                        /* (ADC_TSMR) Pen contact detection disabled.  */
#define   ADC_TSMR_PENDET_1_Val               _UINT32_(0x1)                                        /* (ADC_TSMR) Pen contact detection enabled.  */
#define ADC_TSMR_PENDET_0                     (ADC_TSMR_PENDET_0_Val << ADC_TSMR_PENDET_Pos)       /* (ADC_TSMR) Pen contact detection disabled. Position */
#define ADC_TSMR_PENDET_1                     (ADC_TSMR_PENDET_1_Val << ADC_TSMR_PENDET_Pos)       /* (ADC_TSMR) Pen contact detection enabled. Position */
#define ADC_TSMR_PENDBC_Pos                   _UINT32_(28)                                         /* (ADC_TSMR) Pen Detect Debouncing Period Position */
#define ADC_TSMR_PENDBC_Msk                   (_UINT32_(0xF) << ADC_TSMR_PENDBC_Pos)               /* (ADC_TSMR) Pen Detect Debouncing Period Mask */
#define ADC_TSMR_PENDBC(value)                (ADC_TSMR_PENDBC_Msk & (_UINT32_(value) << ADC_TSMR_PENDBC_Pos)) /* Assignment of value for PENDBC in the ADC_TSMR register */
#define ADC_TSMR_Msk                          _UINT32_(0xF14F0F33)                                 /* (ADC_TSMR) Register Mask  */


/* -------- ADC_XPOSR : (ADC Offset: 0xB4) ( R/ 32) Touchscreen X Position Register -------- */
#define ADC_XPOSR_RESETVALUE                  _UINT32_(0x00)                                       /*  (ADC_XPOSR) Touchscreen X Position Register  Reset Value */

#define ADC_XPOSR_XPOS_Pos                    _UINT32_(0)                                          /* (ADC_XPOSR) X Position Position */
#define ADC_XPOSR_XPOS_Msk                    (_UINT32_(0xFFF) << ADC_XPOSR_XPOS_Pos)              /* (ADC_XPOSR) X Position Mask */
#define ADC_XPOSR_XPOS(value)                 (ADC_XPOSR_XPOS_Msk & (_UINT32_(value) << ADC_XPOSR_XPOS_Pos)) /* Assignment of value for XPOS in the ADC_XPOSR register */
#define ADC_XPOSR_XSCALE_Pos                  _UINT32_(16)                                         /* (ADC_XPOSR) Scale of XPOS Position */
#define ADC_XPOSR_XSCALE_Msk                  (_UINT32_(0xFFF) << ADC_XPOSR_XSCALE_Pos)            /* (ADC_XPOSR) Scale of XPOS Mask */
#define ADC_XPOSR_XSCALE(value)               (ADC_XPOSR_XSCALE_Msk & (_UINT32_(value) << ADC_XPOSR_XSCALE_Pos)) /* Assignment of value for XSCALE in the ADC_XPOSR register */
#define ADC_XPOSR_Msk                         _UINT32_(0x0FFF0FFF)                                 /* (ADC_XPOSR) Register Mask  */


/* -------- ADC_YPOSR : (ADC Offset: 0xB8) ( R/ 32) Touchscreen Y Position Register -------- */
#define ADC_YPOSR_RESETVALUE                  _UINT32_(0x00)                                       /*  (ADC_YPOSR) Touchscreen Y Position Register  Reset Value */

#define ADC_YPOSR_YPOS_Pos                    _UINT32_(0)                                          /* (ADC_YPOSR) Y Position Position */
#define ADC_YPOSR_YPOS_Msk                    (_UINT32_(0xFFF) << ADC_YPOSR_YPOS_Pos)              /* (ADC_YPOSR) Y Position Mask */
#define ADC_YPOSR_YPOS(value)                 (ADC_YPOSR_YPOS_Msk & (_UINT32_(value) << ADC_YPOSR_YPOS_Pos)) /* Assignment of value for YPOS in the ADC_YPOSR register */
#define ADC_YPOSR_YSCALE_Pos                  _UINT32_(16)                                         /* (ADC_YPOSR) Scale of YPOS Position */
#define ADC_YPOSR_YSCALE_Msk                  (_UINT32_(0xFFF) << ADC_YPOSR_YSCALE_Pos)            /* (ADC_YPOSR) Scale of YPOS Mask */
#define ADC_YPOSR_YSCALE(value)               (ADC_YPOSR_YSCALE_Msk & (_UINT32_(value) << ADC_YPOSR_YSCALE_Pos)) /* Assignment of value for YSCALE in the ADC_YPOSR register */
#define ADC_YPOSR_Msk                         _UINT32_(0x0FFF0FFF)                                 /* (ADC_YPOSR) Register Mask  */


/* -------- ADC_PRESSR : (ADC Offset: 0xBC) ( R/ 32) Touchscreen Pressure Register -------- */
#define ADC_PRESSR_RESETVALUE                 _UINT32_(0x00)                                       /*  (ADC_PRESSR) Touchscreen Pressure Register  Reset Value */

#define ADC_PRESSR_Z1_Pos                     _UINT32_(0)                                          /* (ADC_PRESSR) Data of Z1 Measurement Position */
#define ADC_PRESSR_Z1_Msk                     (_UINT32_(0xFFF) << ADC_PRESSR_Z1_Pos)               /* (ADC_PRESSR) Data of Z1 Measurement Mask */
#define ADC_PRESSR_Z1(value)                  (ADC_PRESSR_Z1_Msk & (_UINT32_(value) << ADC_PRESSR_Z1_Pos)) /* Assignment of value for Z1 in the ADC_PRESSR register */
#define ADC_PRESSR_Z2_Pos                     _UINT32_(16)                                         /* (ADC_PRESSR) Data of Z2 Measurement Position */
#define ADC_PRESSR_Z2_Msk                     (_UINT32_(0xFFF) << ADC_PRESSR_Z2_Pos)               /* (ADC_PRESSR) Data of Z2 Measurement Mask */
#define ADC_PRESSR_Z2(value)                  (ADC_PRESSR_Z2_Msk & (_UINT32_(value) << ADC_PRESSR_Z2_Pos)) /* Assignment of value for Z2 in the ADC_PRESSR register */
#define ADC_PRESSR_Msk                        _UINT32_(0x0FFF0FFF)                                 /* (ADC_PRESSR) Register Mask  */


/* -------- ADC_TRGR : (ADC Offset: 0xC0) (R/W 32) Trigger Register -------- */
#define ADC_TRGR_RESETVALUE                   _UINT32_(0x00)                                       /*  (ADC_TRGR) Trigger Register  Reset Value */

#define ADC_TRGR_TRGMOD_Pos                   _UINT32_(0)                                          /* (ADC_TRGR) Trigger Mode Position */
#define ADC_TRGR_TRGMOD_Msk                   (_UINT32_(0x7) << ADC_TRGR_TRGMOD_Pos)               /* (ADC_TRGR) Trigger Mode Mask */
#define ADC_TRGR_TRGMOD(value)                (ADC_TRGR_TRGMOD_Msk & (_UINT32_(value) << ADC_TRGR_TRGMOD_Pos)) /* Assignment of value for TRGMOD in the ADC_TRGR register */
#define   ADC_TRGR_TRGMOD_NO_TRIGGER_Val      _UINT32_(0x0)                                        /* (ADC_TRGR) No hardware trigger enabled, only software trigger can start conversions  */
#define   ADC_TRGR_TRGMOD_EXT_TRIG_RISE_Val   _UINT32_(0x1)                                        /* (ADC_TRGR) Rising edge of the selected hardware trigger event, defined in ADC_MR.TRGSEL  */
#define   ADC_TRGR_TRGMOD_EXT_TRIG_FALL_Val   _UINT32_(0x2)                                        /* (ADC_TRGR) Falling edge of the selected hardware trigger event  */
#define   ADC_TRGR_TRGMOD_EXT_TRIG_ANY_Val    _UINT32_(0x3)                                        /* (ADC_TRGR) Any edge of the selected hardware trigger event  */
#define   ADC_TRGR_TRGMOD_PEN_TRIG_Val        _UINT32_(0x4)                                        /* (ADC_TRGR) Pen Detect Trigger (shall be selected only if PENDET is set and TSMODE > 0)  */
#define   ADC_TRGR_TRGMOD_PERIOD_TRIG_Val     _UINT32_(0x5)                                        /* (ADC_TRGR) ADC internal hardware periodic trigger (see field TRGPER)  */
#define   ADC_TRGR_TRGMOD_CONTINUOUS_Val      _UINT32_(0x6)                                        /* (ADC_TRGR) Continuous mode  */
#define ADC_TRGR_TRGMOD_NO_TRIGGER            (ADC_TRGR_TRGMOD_NO_TRIGGER_Val << ADC_TRGR_TRGMOD_Pos) /* (ADC_TRGR) No hardware trigger enabled, only software trigger can start conversions Position */
#define ADC_TRGR_TRGMOD_EXT_TRIG_RISE         (ADC_TRGR_TRGMOD_EXT_TRIG_RISE_Val << ADC_TRGR_TRGMOD_Pos) /* (ADC_TRGR) Rising edge of the selected hardware trigger event, defined in ADC_MR.TRGSEL Position */
#define ADC_TRGR_TRGMOD_EXT_TRIG_FALL         (ADC_TRGR_TRGMOD_EXT_TRIG_FALL_Val << ADC_TRGR_TRGMOD_Pos) /* (ADC_TRGR) Falling edge of the selected hardware trigger event Position */
#define ADC_TRGR_TRGMOD_EXT_TRIG_ANY          (ADC_TRGR_TRGMOD_EXT_TRIG_ANY_Val << ADC_TRGR_TRGMOD_Pos) /* (ADC_TRGR) Any edge of the selected hardware trigger event Position */
#define ADC_TRGR_TRGMOD_PEN_TRIG              (ADC_TRGR_TRGMOD_PEN_TRIG_Val << ADC_TRGR_TRGMOD_Pos) /* (ADC_TRGR) Pen Detect Trigger (shall be selected only if PENDET is set and TSMODE > 0) Position */
#define ADC_TRGR_TRGMOD_PERIOD_TRIG           (ADC_TRGR_TRGMOD_PERIOD_TRIG_Val << ADC_TRGR_TRGMOD_Pos) /* (ADC_TRGR) ADC internal hardware periodic trigger (see field TRGPER) Position */
#define ADC_TRGR_TRGMOD_CONTINUOUS            (ADC_TRGR_TRGMOD_CONTINUOUS_Val << ADC_TRGR_TRGMOD_Pos) /* (ADC_TRGR) Continuous mode Position */
#define ADC_TRGR_TRGPER_Pos                   _UINT32_(16)                                         /* (ADC_TRGR) Trigger Period Position */
#define ADC_TRGR_TRGPER_Msk                   (_UINT32_(0xFFFF) << ADC_TRGR_TRGPER_Pos)            /* (ADC_TRGR) Trigger Period Mask */
#define ADC_TRGR_TRGPER(value)                (ADC_TRGR_TRGPER_Msk & (_UINT32_(value) << ADC_TRGR_TRGPER_Pos)) /* Assignment of value for TRGPER in the ADC_TRGR register */
#define ADC_TRGR_Msk                          _UINT32_(0xFFFF0007)                                 /* (ADC_TRGR) Register Mask  */


/* -------- ADC_CVR : (ADC Offset: 0xD4) (R/W 32) Correction Values Register -------- */
#define ADC_CVR_RESETVALUE                    _UINT32_(0x00)                                       /*  (ADC_CVR) Correction Values Register  Reset Value */

#define ADC_CVR_OFFSETCORR_Pos                _UINT32_(0)                                          /* (ADC_CVR) Offset Correction Position */
#define ADC_CVR_OFFSETCORR_Msk                (_UINT32_(0xFFFF) << ADC_CVR_OFFSETCORR_Pos)         /* (ADC_CVR) Offset Correction Mask */
#define ADC_CVR_OFFSETCORR(value)             (ADC_CVR_OFFSETCORR_Msk & (_UINT32_(value) << ADC_CVR_OFFSETCORR_Pos)) /* Assignment of value for OFFSETCORR in the ADC_CVR register */
#define ADC_CVR_GAINCORR_Pos                  _UINT32_(16)                                         /* (ADC_CVR) Gain Correction Position */
#define ADC_CVR_GAINCORR_Msk                  (_UINT32_(0xFFFF) << ADC_CVR_GAINCORR_Pos)           /* (ADC_CVR) Gain Correction Mask */
#define ADC_CVR_GAINCORR(value)               (ADC_CVR_GAINCORR_Msk & (_UINT32_(value) << ADC_CVR_GAINCORR_Pos)) /* Assignment of value for GAINCORR in the ADC_CVR register */
#define ADC_CVR_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (ADC_CVR) Register Mask  */


/* -------- ADC_CECR : (ADC Offset: 0xD8) (R/W 32) Channel Error Correction Register -------- */
#define ADC_CECR_RESETVALUE                   _UINT32_(0x00)                                       /*  (ADC_CECR) Channel Error Correction Register  Reset Value */

#define ADC_CECR_ECORR0_Pos                   _UINT32_(0)                                          /* (ADC_CECR) Error Correction Enable for channel 0 Position */
#define ADC_CECR_ECORR0_Msk                   (_UINT32_(0x1) << ADC_CECR_ECORR0_Pos)               /* (ADC_CECR) Error Correction Enable for channel 0 Mask */
#define ADC_CECR_ECORR0(value)                (ADC_CECR_ECORR0_Msk & (_UINT32_(value) << ADC_CECR_ECORR0_Pos)) /* Assignment of value for ECORR0 in the ADC_CECR register */
#define   ADC_CECR_ECORR0_0_Val               _UINT32_(0x0)                                        /* (ADC_CECR) Automatic error correction is disabled for channel x.  */
#define   ADC_CECR_ECORR0_1_Val               _UINT32_(0x1)                                        /* (ADC_CECR) Automatic error correction is enabled for channel x.  */
#define ADC_CECR_ECORR0_0                     (ADC_CECR_ECORR0_0_Val << ADC_CECR_ECORR0_Pos)       /* (ADC_CECR) Automatic error correction is disabled for channel x. Position */
#define ADC_CECR_ECORR0_1                     (ADC_CECR_ECORR0_1_Val << ADC_CECR_ECORR0_Pos)       /* (ADC_CECR) Automatic error correction is enabled for channel x. Position */
#define ADC_CECR_ECORR1_Pos                   _UINT32_(1)                                          /* (ADC_CECR) Error Correction Enable for channel 1 Position */
#define ADC_CECR_ECORR1_Msk                   (_UINT32_(0x1) << ADC_CECR_ECORR1_Pos)               /* (ADC_CECR) Error Correction Enable for channel 1 Mask */
#define ADC_CECR_ECORR1(value)                (ADC_CECR_ECORR1_Msk & (_UINT32_(value) << ADC_CECR_ECORR1_Pos)) /* Assignment of value for ECORR1 in the ADC_CECR register */
#define   ADC_CECR_ECORR1_0_Val               _UINT32_(0x0)                                        /* (ADC_CECR) Automatic error correction is disabled for channel x.  */
#define   ADC_CECR_ECORR1_1_Val               _UINT32_(0x1)                                        /* (ADC_CECR) Automatic error correction is enabled for channel x.  */
#define ADC_CECR_ECORR1_0                     (ADC_CECR_ECORR1_0_Val << ADC_CECR_ECORR1_Pos)       /* (ADC_CECR) Automatic error correction is disabled for channel x. Position */
#define ADC_CECR_ECORR1_1                     (ADC_CECR_ECORR1_1_Val << ADC_CECR_ECORR1_Pos)       /* (ADC_CECR) Automatic error correction is enabled for channel x. Position */
#define ADC_CECR_ECORR2_Pos                   _UINT32_(2)                                          /* (ADC_CECR) Error Correction Enable for channel 2 Position */
#define ADC_CECR_ECORR2_Msk                   (_UINT32_(0x1) << ADC_CECR_ECORR2_Pos)               /* (ADC_CECR) Error Correction Enable for channel 2 Mask */
#define ADC_CECR_ECORR2(value)                (ADC_CECR_ECORR2_Msk & (_UINT32_(value) << ADC_CECR_ECORR2_Pos)) /* Assignment of value for ECORR2 in the ADC_CECR register */
#define   ADC_CECR_ECORR2_0_Val               _UINT32_(0x0)                                        /* (ADC_CECR) Automatic error correction is disabled for channel x.  */
#define   ADC_CECR_ECORR2_1_Val               _UINT32_(0x1)                                        /* (ADC_CECR) Automatic error correction is enabled for channel x.  */
#define ADC_CECR_ECORR2_0                     (ADC_CECR_ECORR2_0_Val << ADC_CECR_ECORR2_Pos)       /* (ADC_CECR) Automatic error correction is disabled for channel x. Position */
#define ADC_CECR_ECORR2_1                     (ADC_CECR_ECORR2_1_Val << ADC_CECR_ECORR2_Pos)       /* (ADC_CECR) Automatic error correction is enabled for channel x. Position */
#define ADC_CECR_ECORR3_Pos                   _UINT32_(3)                                          /* (ADC_CECR) Error Correction Enable for channel 3 Position */
#define ADC_CECR_ECORR3_Msk                   (_UINT32_(0x1) << ADC_CECR_ECORR3_Pos)               /* (ADC_CECR) Error Correction Enable for channel 3 Mask */
#define ADC_CECR_ECORR3(value)                (ADC_CECR_ECORR3_Msk & (_UINT32_(value) << ADC_CECR_ECORR3_Pos)) /* Assignment of value for ECORR3 in the ADC_CECR register */
#define   ADC_CECR_ECORR3_0_Val               _UINT32_(0x0)                                        /* (ADC_CECR) Automatic error correction is disabled for channel x.  */
#define   ADC_CECR_ECORR3_1_Val               _UINT32_(0x1)                                        /* (ADC_CECR) Automatic error correction is enabled for channel x.  */
#define ADC_CECR_ECORR3_0                     (ADC_CECR_ECORR3_0_Val << ADC_CECR_ECORR3_Pos)       /* (ADC_CECR) Automatic error correction is disabled for channel x. Position */
#define ADC_CECR_ECORR3_1                     (ADC_CECR_ECORR3_1_Val << ADC_CECR_ECORR3_Pos)       /* (ADC_CECR) Automatic error correction is enabled for channel x. Position */
#define ADC_CECR_ECORR4_Pos                   _UINT32_(4)                                          /* (ADC_CECR) Error Correction Enable for channel 4 Position */
#define ADC_CECR_ECORR4_Msk                   (_UINT32_(0x1) << ADC_CECR_ECORR4_Pos)               /* (ADC_CECR) Error Correction Enable for channel 4 Mask */
#define ADC_CECR_ECORR4(value)                (ADC_CECR_ECORR4_Msk & (_UINT32_(value) << ADC_CECR_ECORR4_Pos)) /* Assignment of value for ECORR4 in the ADC_CECR register */
#define   ADC_CECR_ECORR4_0_Val               _UINT32_(0x0)                                        /* (ADC_CECR) Automatic error correction is disabled for channel x.  */
#define   ADC_CECR_ECORR4_1_Val               _UINT32_(0x1)                                        /* (ADC_CECR) Automatic error correction is enabled for channel x.  */
#define ADC_CECR_ECORR4_0                     (ADC_CECR_ECORR4_0_Val << ADC_CECR_ECORR4_Pos)       /* (ADC_CECR) Automatic error correction is disabled for channel x. Position */
#define ADC_CECR_ECORR4_1                     (ADC_CECR_ECORR4_1_Val << ADC_CECR_ECORR4_Pos)       /* (ADC_CECR) Automatic error correction is enabled for channel x. Position */
#define ADC_CECR_ECORR5_Pos                   _UINT32_(5)                                          /* (ADC_CECR) Error Correction Enable for channel 5 Position */
#define ADC_CECR_ECORR5_Msk                   (_UINT32_(0x1) << ADC_CECR_ECORR5_Pos)               /* (ADC_CECR) Error Correction Enable for channel 5 Mask */
#define ADC_CECR_ECORR5(value)                (ADC_CECR_ECORR5_Msk & (_UINT32_(value) << ADC_CECR_ECORR5_Pos)) /* Assignment of value for ECORR5 in the ADC_CECR register */
#define   ADC_CECR_ECORR5_0_Val               _UINT32_(0x0)                                        /* (ADC_CECR) Automatic error correction is disabled for channel x.  */
#define   ADC_CECR_ECORR5_1_Val               _UINT32_(0x1)                                        /* (ADC_CECR) Automatic error correction is enabled for channel x.  */
#define ADC_CECR_ECORR5_0                     (ADC_CECR_ECORR5_0_Val << ADC_CECR_ECORR5_Pos)       /* (ADC_CECR) Automatic error correction is disabled for channel x. Position */
#define ADC_CECR_ECORR5_1                     (ADC_CECR_ECORR5_1_Val << ADC_CECR_ECORR5_Pos)       /* (ADC_CECR) Automatic error correction is enabled for channel x. Position */
#define ADC_CECR_ECORR6_Pos                   _UINT32_(6)                                          /* (ADC_CECR) Error Correction Enable for channel 6 Position */
#define ADC_CECR_ECORR6_Msk                   (_UINT32_(0x1) << ADC_CECR_ECORR6_Pos)               /* (ADC_CECR) Error Correction Enable for channel 6 Mask */
#define ADC_CECR_ECORR6(value)                (ADC_CECR_ECORR6_Msk & (_UINT32_(value) << ADC_CECR_ECORR6_Pos)) /* Assignment of value for ECORR6 in the ADC_CECR register */
#define   ADC_CECR_ECORR6_0_Val               _UINT32_(0x0)                                        /* (ADC_CECR) Automatic error correction is disabled for channel x.  */
#define   ADC_CECR_ECORR6_1_Val               _UINT32_(0x1)                                        /* (ADC_CECR) Automatic error correction is enabled for channel x.  */
#define ADC_CECR_ECORR6_0                     (ADC_CECR_ECORR6_0_Val << ADC_CECR_ECORR6_Pos)       /* (ADC_CECR) Automatic error correction is disabled for channel x. Position */
#define ADC_CECR_ECORR6_1                     (ADC_CECR_ECORR6_1_Val << ADC_CECR_ECORR6_Pos)       /* (ADC_CECR) Automatic error correction is enabled for channel x. Position */
#define ADC_CECR_ECORR7_Pos                   _UINT32_(7)                                          /* (ADC_CECR) Error Correction Enable for channel 7 Position */
#define ADC_CECR_ECORR7_Msk                   (_UINT32_(0x1) << ADC_CECR_ECORR7_Pos)               /* (ADC_CECR) Error Correction Enable for channel 7 Mask */
#define ADC_CECR_ECORR7(value)                (ADC_CECR_ECORR7_Msk & (_UINT32_(value) << ADC_CECR_ECORR7_Pos)) /* Assignment of value for ECORR7 in the ADC_CECR register */
#define   ADC_CECR_ECORR7_0_Val               _UINT32_(0x0)                                        /* (ADC_CECR) Automatic error correction is disabled for channel x.  */
#define   ADC_CECR_ECORR7_1_Val               _UINT32_(0x1)                                        /* (ADC_CECR) Automatic error correction is enabled for channel x.  */
#define ADC_CECR_ECORR7_0                     (ADC_CECR_ECORR7_0_Val << ADC_CECR_ECORR7_Pos)       /* (ADC_CECR) Automatic error correction is disabled for channel x. Position */
#define ADC_CECR_ECORR7_1                     (ADC_CECR_ECORR7_1_Val << ADC_CECR_ECORR7_Pos)       /* (ADC_CECR) Automatic error correction is enabled for channel x. Position */
#define ADC_CECR_Msk                          _UINT32_(0x000000FF)                                 /* (ADC_CECR) Register Mask  */

#define ADC_CECR_ECORR_Pos                    _UINT32_(0)                                          /* (ADC_CECR Position) Error Correction Enable for channel 7 */
#define ADC_CECR_ECORR_Msk                    (_UINT32_(0xFF) << ADC_CECR_ECORR_Pos)               /* (ADC_CECR Mask) ECORR */
#define ADC_CECR_ECORR(value)                 (ADC_CECR_ECORR_Msk & (_UINT32_(value) << ADC_CECR_ECORR_Pos)) 

/* -------- ADC_TSCVR : (ADC Offset: 0xDC) (R/W 32) Touchscreen Correction Values Register -------- */
#define ADC_TSCVR_RESETVALUE                  _UINT32_(0x00)                                       /*  (ADC_TSCVR) Touchscreen Correction Values Register  Reset Value */

#define ADC_TSCVR_TSOFFSETCORR_Pos            _UINT32_(0)                                          /* (ADC_TSCVR) Touchscreen Offset Correction Position */
#define ADC_TSCVR_TSOFFSETCORR_Msk            (_UINT32_(0xFFFF) << ADC_TSCVR_TSOFFSETCORR_Pos)     /* (ADC_TSCVR) Touchscreen Offset Correction Mask */
#define ADC_TSCVR_TSOFFSETCORR(value)         (ADC_TSCVR_TSOFFSETCORR_Msk & (_UINT32_(value) << ADC_TSCVR_TSOFFSETCORR_Pos)) /* Assignment of value for TSOFFSETCORR in the ADC_TSCVR register */
#define ADC_TSCVR_TSGAINCORR_Pos              _UINT32_(16)                                         /* (ADC_TSCVR) Touchscreen Gain Correction Position */
#define ADC_TSCVR_TSGAINCORR_Msk              (_UINT32_(0xFFFF) << ADC_TSCVR_TSGAINCORR_Pos)       /* (ADC_TSCVR) Touchscreen Gain Correction Mask */
#define ADC_TSCVR_TSGAINCORR(value)           (ADC_TSCVR_TSGAINCORR_Msk & (_UINT32_(value) << ADC_TSCVR_TSGAINCORR_Pos)) /* Assignment of value for TSGAINCORR in the ADC_TSCVR register */
#define ADC_TSCVR_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (ADC_TSCVR) Register Mask  */


/* -------- ADC_WPMR : (ADC Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define ADC_WPMR_RESETVALUE                   _UINT32_(0x00)                                       /*  (ADC_WPMR) Write Protection Mode Register  Reset Value */

#define ADC_WPMR_WPEN_Pos                     _UINT32_(0)                                          /* (ADC_WPMR) Write Protection Enable Position */
#define ADC_WPMR_WPEN_Msk                     (_UINT32_(0x1) << ADC_WPMR_WPEN_Pos)                 /* (ADC_WPMR) Write Protection Enable Mask */
#define ADC_WPMR_WPEN(value)                  (ADC_WPMR_WPEN_Msk & (_UINT32_(value) << ADC_WPMR_WPEN_Pos)) /* Assignment of value for WPEN in the ADC_WPMR register */
#define   ADC_WPMR_WPEN_0_Val                 _UINT32_(0x0)                                        /* (ADC_WPMR) Disables the write protection if WPKEY value corresponds to 0x414443 ("ADC" in ASCII).  */
#define   ADC_WPMR_WPEN_1_Val                 _UINT32_(0x1)                                        /* (ADC_WPMR) Enables the write protection if WPKEY value corresponds to 0x414443 ("ADC" in ASCII).  */
#define ADC_WPMR_WPEN_0                       (ADC_WPMR_WPEN_0_Val << ADC_WPMR_WPEN_Pos)           /* (ADC_WPMR) Disables the write protection if WPKEY value corresponds to 0x414443 ("ADC" in ASCII). Position */
#define ADC_WPMR_WPEN_1                       (ADC_WPMR_WPEN_1_Val << ADC_WPMR_WPEN_Pos)           /* (ADC_WPMR) Enables the write protection if WPKEY value corresponds to 0x414443 ("ADC" in ASCII). Position */
#define ADC_WPMR_WPITEN_Pos                   _UINT32_(1)                                          /* (ADC_WPMR) Write Protection Interrupt Enable Position */
#define ADC_WPMR_WPITEN_Msk                   (_UINT32_(0x1) << ADC_WPMR_WPITEN_Pos)               /* (ADC_WPMR) Write Protection Interrupt Enable Mask */
#define ADC_WPMR_WPITEN(value)                (ADC_WPMR_WPITEN_Msk & (_UINT32_(value) << ADC_WPMR_WPITEN_Pos)) /* Assignment of value for WPITEN in the ADC_WPMR register */
#define   ADC_WPMR_WPITEN_0_Val               _UINT32_(0x0)                                        /* (ADC_WPMR) Disables the write protection on interrupt registers if WPKEY corresponds to 0x414443 ("ADC" in ASCII).  */
#define   ADC_WPMR_WPITEN_1_Val               _UINT32_(0x1)                                        /* (ADC_WPMR) Enables the write protection on interrupt registers if WPKEY corresponds to 0x414443 ("ADC" in ASCII).  */
#define ADC_WPMR_WPITEN_0                     (ADC_WPMR_WPITEN_0_Val << ADC_WPMR_WPITEN_Pos)       /* (ADC_WPMR) Disables the write protection on interrupt registers if WPKEY corresponds to 0x414443 ("ADC" in ASCII). Position */
#define ADC_WPMR_WPITEN_1                     (ADC_WPMR_WPITEN_1_Val << ADC_WPMR_WPITEN_Pos)       /* (ADC_WPMR) Enables the write protection on interrupt registers if WPKEY corresponds to 0x414443 ("ADC" in ASCII). Position */
#define ADC_WPMR_WPCTEN_Pos                   _UINT32_(2)                                          /* (ADC_WPMR) Write Protection Control Enable Position */
#define ADC_WPMR_WPCTEN_Msk                   (_UINT32_(0x1) << ADC_WPMR_WPCTEN_Pos)               /* (ADC_WPMR) Write Protection Control Enable Mask */
#define ADC_WPMR_WPCTEN(value)                (ADC_WPMR_WPCTEN_Msk & (_UINT32_(value) << ADC_WPMR_WPCTEN_Pos)) /* Assignment of value for WPCTEN in the ADC_WPMR register */
#define   ADC_WPMR_WPCTEN_0_Val               _UINT32_(0x0)                                        /* (ADC_WPMR) Disables the write protection on control registers if WPKEY corresponds to 0x414443 ("ADC" in ASCII).  */
#define   ADC_WPMR_WPCTEN_1_Val               _UINT32_(0x1)                                        /* (ADC_WPMR) Enables the write protection on control registers if WPKEY corresponds to 0x414443 ("ADC" in ASCII).  */
#define ADC_WPMR_WPCTEN_0                     (ADC_WPMR_WPCTEN_0_Val << ADC_WPMR_WPCTEN_Pos)       /* (ADC_WPMR) Disables the write protection on control registers if WPKEY corresponds to 0x414443 ("ADC" in ASCII). Position */
#define ADC_WPMR_WPCTEN_1                     (ADC_WPMR_WPCTEN_1_Val << ADC_WPMR_WPCTEN_Pos)       /* (ADC_WPMR) Enables the write protection on control registers if WPKEY corresponds to 0x414443 ("ADC" in ASCII). Position */
#define ADC_WPMR_WPKEY_Pos                    _UINT32_(8)                                          /* (ADC_WPMR) Write Protection Key Position */
#define ADC_WPMR_WPKEY_Msk                    (_UINT32_(0xFFFFFF) << ADC_WPMR_WPKEY_Pos)           /* (ADC_WPMR) Write Protection Key Mask */
#define ADC_WPMR_WPKEY(value)                 (ADC_WPMR_WPKEY_Msk & (_UINT32_(value) << ADC_WPMR_WPKEY_Pos)) /* Assignment of value for WPKEY in the ADC_WPMR register */
#define   ADC_WPMR_WPKEY_PASSWD_Val           _UINT32_(0x414443)                                   /* (ADC_WPMR) Writing any other value in this field aborts the write operation of WPEN.  Always reads as 0  */
#define ADC_WPMR_WPKEY_PASSWD                 (ADC_WPMR_WPKEY_PASSWD_Val << ADC_WPMR_WPKEY_Pos)    /* (ADC_WPMR) Writing any other value in this field aborts the write operation of WPEN.  Always reads as 0 Position */
#define ADC_WPMR_Msk                          _UINT32_(0xFFFFFF07)                                 /* (ADC_WPMR) Register Mask  */


/* -------- ADC_WPSR : (ADC Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define ADC_WPSR_RESETVALUE                   _UINT32_(0x00)                                       /*  (ADC_WPSR) Write Protection Status Register  Reset Value */

#define ADC_WPSR_WPVS_Pos                     _UINT32_(0)                                          /* (ADC_WPSR) Write Protection Violation Status Position */
#define ADC_WPSR_WPVS_Msk                     (_UINT32_(0x1) << ADC_WPSR_WPVS_Pos)                 /* (ADC_WPSR) Write Protection Violation Status Mask */
#define ADC_WPSR_WPVS(value)                  (ADC_WPSR_WPVS_Msk & (_UINT32_(value) << ADC_WPSR_WPVS_Pos)) /* Assignment of value for WPVS in the ADC_WPSR register */
#define   ADC_WPSR_WPVS_0_Val                 _UINT32_(0x0)                                        /* (ADC_WPSR) No write protection violation has occurred since the last read of ADC_WPSR.  */
#define   ADC_WPSR_WPVS_1_Val                 _UINT32_(0x1)                                        /* (ADC_WPSR) A write protection violation has occurred since the last read of ADC_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported in WPVSRC.  */
#define ADC_WPSR_WPVS_0                       (ADC_WPSR_WPVS_0_Val << ADC_WPSR_WPVS_Pos)           /* (ADC_WPSR) No write protection violation has occurred since the last read of ADC_WPSR. Position */
#define ADC_WPSR_WPVS_1                       (ADC_WPSR_WPVS_1_Val << ADC_WPSR_WPVS_Pos)           /* (ADC_WPSR) A write protection violation has occurred since the last read of ADC_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported in WPVSRC. Position */
#define ADC_WPSR_WPVSRC_Pos                   _UINT32_(8)                                          /* (ADC_WPSR) Write Protection Violation Source Position */
#define ADC_WPSR_WPVSRC_Msk                   (_UINT32_(0xFFFF) << ADC_WPSR_WPVSRC_Pos)            /* (ADC_WPSR) Write Protection Violation Source Mask */
#define ADC_WPSR_WPVSRC(value)                (ADC_WPSR_WPVSRC_Msk & (_UINT32_(value) << ADC_WPSR_WPVSRC_Pos)) /* Assignment of value for WPVSRC in the ADC_WPSR register */
#define ADC_WPSR_Msk                          _UINT32_(0x00FFFF01)                                 /* (ADC_WPSR) Register Mask  */


/* ADC register offsets definitions */
#define ADC_CR_REG_OFST                _UINT32_(0x00)      /* (ADC_CR) Control Register Offset */
#define ADC_MR_REG_OFST                _UINT32_(0x04)      /* (ADC_MR) Mode Register Offset */
#define ADC_SEQR1_REG_OFST             _UINT32_(0x08)      /* (ADC_SEQR1) Channel Sequence Register 1 Offset */
#define ADC_CHER_REG_OFST              _UINT32_(0x10)      /* (ADC_CHER) Channel Enable Register Offset */
#define ADC_CHDR_REG_OFST              _UINT32_(0x14)      /* (ADC_CHDR) Channel Disable Register Offset */
#define ADC_CHSR_REG_OFST              _UINT32_(0x18)      /* (ADC_CHSR) Channel Status Register Offset */
#define ADC_LCDR_REG_OFST              _UINT32_(0x20)      /* (ADC_LCDR) Last Converted Data Register Offset */
#define ADC_IER_REG_OFST               _UINT32_(0x24)      /* (ADC_IER) Interrupt Enable Register Offset */
#define ADC_IDR_REG_OFST               _UINT32_(0x28)      /* (ADC_IDR) Interrupt Disable Register Offset */
#define ADC_IMR_REG_OFST               _UINT32_(0x2C)      /* (ADC_IMR) Interrupt Mask Register Offset */
#define ADC_ISR_REG_OFST               _UINT32_(0x30)      /* (ADC_ISR) Interrupt Status Register Offset */
#define ADC_LCTMR_REG_OFST             _UINT32_(0x34)      /* (ADC_LCTMR) Last Channel Trigger Mode Register Offset */
#define ADC_LCCWR_REG_OFST             _UINT32_(0x38)      /* (ADC_LCCWR) Last Channel Compare Window Register Offset */
#define ADC_OVER_REG_OFST              _UINT32_(0x3C)      /* (ADC_OVER) Overrun Status Register Offset */
#define ADC_EMR_REG_OFST               _UINT32_(0x40)      /* (ADC_EMR) Extended Mode Register Offset */
#define ADC_CWR_REG_OFST               _UINT32_(0x44)      /* (ADC_CWR) Compare Window Register Offset */
#define ADC_CCR_REG_OFST               _UINT32_(0x4C)      /* (ADC_CCR) Channel Configuration Register Offset */
#define ADC_CDR_REG_OFST               _UINT32_(0x50)      /* (ADC_CDR) Channel Data Register x Offset */
#define ADC_CDR0_REG_OFST              _UINT32_(0x50)      /* (ADC_CDR0) Channel Data Register x Offset */
#define ADC_CDR1_REG_OFST              _UINT32_(0x54)      /* (ADC_CDR1) Channel Data Register x Offset */
#define ADC_CDR2_REG_OFST              _UINT32_(0x58)      /* (ADC_CDR2) Channel Data Register x Offset */
#define ADC_CDR3_REG_OFST              _UINT32_(0x5C)      /* (ADC_CDR3) Channel Data Register x Offset */
#define ADC_CDR4_REG_OFST              _UINT32_(0x60)      /* (ADC_CDR4) Channel Data Register x Offset */
#define ADC_CDR5_REG_OFST              _UINT32_(0x64)      /* (ADC_CDR5) Channel Data Register x Offset */
#define ADC_CDR6_REG_OFST              _UINT32_(0x68)      /* (ADC_CDR6) Channel Data Register x Offset */
#define ADC_CDR7_REG_OFST              _UINT32_(0x6C)      /* (ADC_CDR7) Channel Data Register x Offset */
#define ADC_ACR_REG_OFST               _UINT32_(0x94)      /* (ADC_ACR) Analog Control Register Offset */
#define ADC_PDR_REG_OFST               _UINT32_(0xA0)      /* (ADC_PDR) Pseudo-Differential Register Offset */
#define ADC_TSMR_REG_OFST              _UINT32_(0xB0)      /* (ADC_TSMR) Touchscreen Mode Register Offset */
#define ADC_XPOSR_REG_OFST             _UINT32_(0xB4)      /* (ADC_XPOSR) Touchscreen X Position Register Offset */
#define ADC_YPOSR_REG_OFST             _UINT32_(0xB8)      /* (ADC_YPOSR) Touchscreen Y Position Register Offset */
#define ADC_PRESSR_REG_OFST            _UINT32_(0xBC)      /* (ADC_PRESSR) Touchscreen Pressure Register Offset */
#define ADC_TRGR_REG_OFST              _UINT32_(0xC0)      /* (ADC_TRGR) Trigger Register Offset */
#define ADC_CVR_REG_OFST               _UINT32_(0xD4)      /* (ADC_CVR) Correction Values Register Offset */
#define ADC_CECR_REG_OFST              _UINT32_(0xD8)      /* (ADC_CECR) Channel Error Correction Register Offset */
#define ADC_TSCVR_REG_OFST             _UINT32_(0xDC)      /* (ADC_TSCVR) Touchscreen Correction Values Register Offset */
#define ADC_WPMR_REG_OFST              _UINT32_(0xE4)      /* (ADC_WPMR) Write Protection Mode Register Offset */
#define ADC_WPSR_REG_OFST              _UINT32_(0xE8)      /* (ADC_WPSR) Write Protection Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* ADC register API structure */
typedef struct
{  /* Analog-to-Digital Converter */
  __O   uint32_t                       ADC_CR;             /* Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       ADC_MR;             /* Offset: 0x04 (R/W  32) Mode Register */
  __IO  uint32_t                       ADC_SEQR1;          /* Offset: 0x08 (R/W  32) Channel Sequence Register 1 */
  __I   uint8_t                        Reserved1[0x04];
  __O   uint32_t                       ADC_CHER;           /* Offset: 0x10 ( /W  32) Channel Enable Register */
  __O   uint32_t                       ADC_CHDR;           /* Offset: 0x14 ( /W  32) Channel Disable Register */
  __I   uint32_t                       ADC_CHSR;           /* Offset: 0x18 (R/   32) Channel Status Register */
  __I   uint8_t                        Reserved2[0x04];
  __I   uint32_t                       ADC_LCDR;           /* Offset: 0x20 (R/   32) Last Converted Data Register */
  __O   uint32_t                       ADC_IER;            /* Offset: 0x24 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       ADC_IDR;            /* Offset: 0x28 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       ADC_IMR;            /* Offset: 0x2C (R/   32) Interrupt Mask Register */
  __I   uint32_t                       ADC_ISR;            /* Offset: 0x30 (R/   32) Interrupt Status Register */
  __IO  uint32_t                       ADC_LCTMR;          /* Offset: 0x34 (R/W  32) Last Channel Trigger Mode Register */
  __IO  uint32_t                       ADC_LCCWR;          /* Offset: 0x38 (R/W  32) Last Channel Compare Window Register */
  __I   uint32_t                       ADC_OVER;           /* Offset: 0x3C (R/   32) Overrun Status Register */
  __IO  uint32_t                       ADC_EMR;            /* Offset: 0x40 (R/W  32) Extended Mode Register */
  __IO  uint32_t                       ADC_CWR;            /* Offset: 0x44 (R/W  32) Compare Window Register */
  __I   uint8_t                        Reserved3[0x04];
  __IO  uint32_t                       ADC_CCR;            /* Offset: 0x4C (R/W  32) Channel Configuration Register */
  __I   uint32_t                       ADC_CDR[8];         /* Offset: 0x50 (R/   32) Channel Data Register x */
  __I   uint8_t                        Reserved4[0x24];
  __IO  uint32_t                       ADC_ACR;            /* Offset: 0x94 (R/W  32) Analog Control Register */
  __I   uint8_t                        Reserved5[0x08];
  __IO  uint32_t                       ADC_PDR;            /* Offset: 0xA0 (R/W  32) Pseudo-Differential Register */
  __I   uint8_t                        Reserved6[0x0C];
  __IO  uint32_t                       ADC_TSMR;           /* Offset: 0xB0 (R/W  32) Touchscreen Mode Register */
  __I   uint32_t                       ADC_XPOSR;          /* Offset: 0xB4 (R/   32) Touchscreen X Position Register */
  __I   uint32_t                       ADC_YPOSR;          /* Offset: 0xB8 (R/   32) Touchscreen Y Position Register */
  __I   uint32_t                       ADC_PRESSR;         /* Offset: 0xBC (R/   32) Touchscreen Pressure Register */
  __IO  uint32_t                       ADC_TRGR;           /* Offset: 0xC0 (R/W  32) Trigger Register */
  __I   uint8_t                        Reserved7[0x10];
  __IO  uint32_t                       ADC_CVR;            /* Offset: 0xD4 (R/W  32) Correction Values Register */
  __IO  uint32_t                       ADC_CECR;           /* Offset: 0xD8 (R/W  32) Channel Error Correction Register */
  __IO  uint32_t                       ADC_TSCVR;          /* Offset: 0xDC (R/W  32) Touchscreen Correction Values Register */
  __I   uint8_t                        Reserved8[0x04];
  __IO  uint32_t                       ADC_WPMR;           /* Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       ADC_WPSR;           /* Offset: 0xE8 (R/   32) Write Protection Status Register */
} adc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAM9X7_ADC_COMPONENT_H_ */
