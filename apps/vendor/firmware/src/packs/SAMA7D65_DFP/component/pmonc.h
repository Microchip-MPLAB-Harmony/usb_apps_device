/*
 * Component description for PMONC
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
#ifndef _SAMA7D6_PMONC_COMPONENT_H_
#define _SAMA7D6_PMONC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PMONC                                        */
/* ************************************************************************** */

/* -------- PMONC_CR : (PMONC Offset: 0x00) (R/W 32) Control Register -------- */
#define PMONC_CR_RESETVALUE                   _UINT32_(0x00)                                       /*  (PMONC_CR) Control Register  Reset Value */

#define PMONC_CR_RW_Pos                       _UINT32_(0)                                          /* (PMONC_CR) Read or Write Access Position */
#define PMONC_CR_RW_Msk                       (_UINT32_(0x1) << PMONC_CR_RW_Pos)                   /* (PMONC_CR) Read or Write Access Mask */
#define PMONC_CR_RW(value)                    (PMONC_CR_RW_Msk & (_UINT32_(value) << PMONC_CR_RW_Pos)) /* Assigment of value for RW in the PMONC_CR register */
#define   PMONC_CR_RW_CONFIG_OR_START_Val     _UINT32_(0x0)                                        /* (PMONC_CR) Initiates the selected process monitor configuration or starts a frequency measure on an already configured process monitor.  */
#define   PMONC_CR_RW_UPDATE_STATUS_Val       _UINT32_(0x1)                                        /* (PMONC_CR) Uploads the frequency measure status of the selected process monitor into PMONC_SR.  */
#define PMONC_CR_RW_CONFIG_OR_START           (PMONC_CR_RW_CONFIG_OR_START_Val << PMONC_CR_RW_Pos) /* (PMONC_CR) Initiates the selected process monitor configuration or starts a frequency measure on an already configured process monitor. Position  */
#define PMONC_CR_RW_UPDATE_STATUS             (PMONC_CR_RW_UPDATE_STATUS_Val << PMONC_CR_RW_Pos)   /* (PMONC_CR) Uploads the frequency measure status of the selected process monitor into PMONC_SR. Position  */
#define PMONC_CR_BUSY_Pos                     _UINT32_(1)                                          /* (PMONC_CR) Control Command in Progress Position */
#define PMONC_CR_BUSY_Msk                     (_UINT32_(0x1) << PMONC_CR_BUSY_Pos)                 /* (PMONC_CR) Control Command in Progress Mask */
#define PMONC_CR_BUSY(value)                  (PMONC_CR_BUSY_Msk & (_UINT32_(value) << PMONC_CR_BUSY_Pos)) /* Assigment of value for BUSY in the PMONC_CR register */
#define PMONC_CR_MASK_START_Pos               _UINT32_(4)                                          /* (PMONC_CR) Mask Value for PM_START Position */
#define PMONC_CR_MASK_START_Msk               (_UINT32_(0x1) << PMONC_CR_MASK_START_Pos)           /* (PMONC_CR) Mask Value for PM_START Mask */
#define PMONC_CR_MASK_START(value)            (PMONC_CR_MASK_START_Msk & (_UINT32_(value) << PMONC_CR_MASK_START_Pos)) /* Assigment of value for MASK_START in the PMONC_CR register */
#define   PMONC_CR_MASK_START_0_Val           _UINT32_(0x0)                                        /* (PMONC_CR) Disables the action of the bit PM_START.  */
#define   PMONC_CR_MASK_START_1_Val           _UINT32_(0x1)                                        /* (PMONC_CR) Enables the effect of the bit PM_START.  */
#define PMONC_CR_MASK_START_0                 (PMONC_CR_MASK_START_0_Val << PMONC_CR_MASK_START_Pos) /* (PMONC_CR) Disables the action of the bit PM_START. Position  */
#define PMONC_CR_MASK_START_1                 (PMONC_CR_MASK_START_1_Val << PMONC_CR_MASK_START_Pos) /* (PMONC_CR) Enables the effect of the bit PM_START. Position  */
#define PMONC_CR_MASK_ENABLE_Pos              _UINT32_(5)                                          /* (PMONC_CR) Mask Value for PM_ENABLE Position */
#define PMONC_CR_MASK_ENABLE_Msk              (_UINT32_(0x1) << PMONC_CR_MASK_ENABLE_Pos)          /* (PMONC_CR) Mask Value for PM_ENABLE Mask */
#define PMONC_CR_MASK_ENABLE(value)           (PMONC_CR_MASK_ENABLE_Msk & (_UINT32_(value) << PMONC_CR_MASK_ENABLE_Pos)) /* Assigment of value for MASK_ENABLE in the PMONC_CR register */
#define   PMONC_CR_MASK_ENABLE_0_Val          _UINT32_(0x0)                                        /* (PMONC_CR) Disables the action of the bit PM_ENABLE.  */
#define   PMONC_CR_MASK_ENABLE_1_Val          _UINT32_(0x1)                                        /* (PMONC_CR) Enables the effect of the bit PM_ENABLE.  */
#define PMONC_CR_MASK_ENABLE_0                (PMONC_CR_MASK_ENABLE_0_Val << PMONC_CR_MASK_ENABLE_Pos) /* (PMONC_CR) Disables the action of the bit PM_ENABLE. Position  */
#define PMONC_CR_MASK_ENABLE_1                (PMONC_CR_MASK_ENABLE_1_Val << PMONC_CR_MASK_ENABLE_Pos) /* (PMONC_CR) Enables the effect of the bit PM_ENABLE. Position  */
#define PMONC_CR_MASK_RSTN_Pos                _UINT32_(6)                                          /* (PMONC_CR) Mask Value for PM_RSTN Position */
#define PMONC_CR_MASK_RSTN_Msk                (_UINT32_(0x1) << PMONC_CR_MASK_RSTN_Pos)            /* (PMONC_CR) Mask Value for PM_RSTN Mask */
#define PMONC_CR_MASK_RSTN(value)             (PMONC_CR_MASK_RSTN_Msk & (_UINT32_(value) << PMONC_CR_MASK_RSTN_Pos)) /* Assigment of value for MASK_RSTN in the PMONC_CR register */
#define   PMONC_CR_MASK_RSTN_0_Val            _UINT32_(0x0)                                        /* (PMONC_CR) Disables the reset of the frequency measure via the bit PM_RSTN.  */
#define   PMONC_CR_MASK_RSTN_1_Val            _UINT32_(0x1)                                        /* (PMONC_CR) Enables the reset of the frequency measure via the bit PM_RSTN.  */
#define PMONC_CR_MASK_RSTN_0                  (PMONC_CR_MASK_RSTN_0_Val << PMONC_CR_MASK_RSTN_Pos) /* (PMONC_CR) Disables the reset of the frequency measure via the bit PM_RSTN. Position  */
#define PMONC_CR_MASK_RSTN_1                  (PMONC_CR_MASK_RSTN_1_Val << PMONC_CR_MASK_RSTN_Pos) /* (PMONC_CR) Enables the reset of the frequency measure via the bit PM_RSTN. Position  */
#define PMONC_CR_MASK_DIV_SEL_Pos             _UINT32_(7)                                          /* (PMONC_CR) Mask Value for PM_DIV_SEL Position */
#define PMONC_CR_MASK_DIV_SEL_Msk             (_UINT32_(0x1) << PMONC_CR_MASK_DIV_SEL_Pos)         /* (PMONC_CR) Mask Value for PM_DIV_SEL Mask */
#define PMONC_CR_MASK_DIV_SEL(value)          (PMONC_CR_MASK_DIV_SEL_Msk & (_UINT32_(value) << PMONC_CR_MASK_DIV_SEL_Pos)) /* Assigment of value for MASK_DIV_SEL in the PMONC_CR register */
#define   PMONC_CR_MASK_DIV_SEL_0_Val         _UINT32_(0x0)                                        /* (PMONC_CR) Disables the configuration of the oscillator output frequency divider via the field PM_DIV_SEL.  */
#define   PMONC_CR_MASK_DIV_SEL_1_Val         _UINT32_(0x1)                                        /* (PMONC_CR) Enables the configuration of the oscillator output frequency divider via the field PM_DIV_SEL.  */
#define PMONC_CR_MASK_DIV_SEL_0               (PMONC_CR_MASK_DIV_SEL_0_Val << PMONC_CR_MASK_DIV_SEL_Pos) /* (PMONC_CR) Disables the configuration of the oscillator output frequency divider via the field PM_DIV_SEL. Position  */
#define PMONC_CR_MASK_DIV_SEL_1               (PMONC_CR_MASK_DIV_SEL_1_Val << PMONC_CR_MASK_DIV_SEL_Pos) /* (PMONC_CR) Enables the configuration of the oscillator output frequency divider via the field PM_DIV_SEL. Position  */
#define PMONC_CR_MASK_OSC_SEL_Pos             _UINT32_(8)                                          /* (PMONC_CR) Mask Value for PM_OSC_SEL Position */
#define PMONC_CR_MASK_OSC_SEL_Msk             (_UINT32_(0x1) << PMONC_CR_MASK_OSC_SEL_Pos)         /* (PMONC_CR) Mask Value for PM_OSC_SEL Mask */
#define PMONC_CR_MASK_OSC_SEL(value)          (PMONC_CR_MASK_OSC_SEL_Msk & (_UINT32_(value) << PMONC_CR_MASK_OSC_SEL_Pos)) /* Assigment of value for MASK_OSC_SEL in the PMONC_CR register */
#define   PMONC_CR_MASK_OSC_SEL_0_Val         _UINT32_(0x0)                                        /* (PMONC_CR) Disables the selection of the oscillator via the field PM_OSC_SEL.  */
#define   PMONC_CR_MASK_OSC_SEL_1_Val         _UINT32_(0x1)                                        /* (PMONC_CR) Enables the selection of the oscillator via the field PM_OSC_SEL.  */
#define PMONC_CR_MASK_OSC_SEL_0               (PMONC_CR_MASK_OSC_SEL_0_Val << PMONC_CR_MASK_OSC_SEL_Pos) /* (PMONC_CR) Disables the selection of the oscillator via the field PM_OSC_SEL. Position  */
#define PMONC_CR_MASK_OSC_SEL_1               (PMONC_CR_MASK_OSC_SEL_1_Val << PMONC_CR_MASK_OSC_SEL_Pos) /* (PMONC_CR) Enables the selection of the oscillator via the field PM_OSC_SEL. Position  */
#define PMONC_CR_PM_START_Pos                 _UINT32_(12)                                         /* (PMONC_CR) Process Monitor Frequency Measurement Start Position */
#define PMONC_CR_PM_START_Msk                 (_UINT32_(0x1) << PMONC_CR_PM_START_Pos)             /* (PMONC_CR) Process Monitor Frequency Measurement Start Mask */
#define PMONC_CR_PM_START(value)              (PMONC_CR_PM_START_Msk & (_UINT32_(value) << PMONC_CR_PM_START_Pos)) /* Assigment of value for PM_START in the PMONC_CR register */
#define   PMONC_CR_PM_START_RESET_Val         _UINT32_(0x0)                                        /* (PMONC_CR) Clears the current measurement for the selected and enabled process monitor.  */
#define   PMONC_CR_PM_START_START_Val         _UINT32_(0x1)                                        /* (PMONC_CR) Starts the measurement for the selected and enabled process monitor.  */
#define PMONC_CR_PM_START_RESET               (PMONC_CR_PM_START_RESET_Val << PMONC_CR_PM_START_Pos) /* (PMONC_CR) Clears the current measurement for the selected and enabled process monitor. Position  */
#define PMONC_CR_PM_START_START               (PMONC_CR_PM_START_START_Val << PMONC_CR_PM_START_Pos) /* (PMONC_CR) Starts the measurement for the selected and enabled process monitor. Position  */
#define PMONC_CR_PM_ENABLE_Pos                _UINT32_(13)                                         /* (PMONC_CR) Process Monitor Enable Position */
#define PMONC_CR_PM_ENABLE_Msk                (_UINT32_(0x1) << PMONC_CR_PM_ENABLE_Pos)            /* (PMONC_CR) Process Monitor Enable Mask */
#define PMONC_CR_PM_ENABLE(value)             (PMONC_CR_PM_ENABLE_Msk & (_UINT32_(value) << PMONC_CR_PM_ENABLE_Pos)) /* Assigment of value for PM_ENABLE in the PMONC_CR register */
#define   PMONC_CR_PM_ENABLE_0_Val            _UINT32_(0x0)                                        /* (PMONC_CR) Disables the selected oscillator in the selected process monitor.  */
#define   PMONC_CR_PM_ENABLE_1_Val            _UINT32_(0x1)                                        /* (PMONC_CR) Enables the selected oscillator in the selected process monitor.  */
#define PMONC_CR_PM_ENABLE_0                  (PMONC_CR_PM_ENABLE_0_Val << PMONC_CR_PM_ENABLE_Pos) /* (PMONC_CR) Disables the selected oscillator in the selected process monitor. Position  */
#define PMONC_CR_PM_ENABLE_1                  (PMONC_CR_PM_ENABLE_1_Val << PMONC_CR_PM_ENABLE_Pos) /* (PMONC_CR) Enables the selected oscillator in the selected process monitor. Position  */
#define PMONC_CR_PM_RSTN_Pos                  _UINT32_(14)                                         /* (PMONC_CR) Process Monitor Frequency Measurement Reset Position */
#define PMONC_CR_PM_RSTN_Msk                  (_UINT32_(0x1) << PMONC_CR_PM_RSTN_Pos)              /* (PMONC_CR) Process Monitor Frequency Measurement Reset Mask */
#define PMONC_CR_PM_RSTN(value)               (PMONC_CR_PM_RSTN_Msk & (_UINT32_(value) << PMONC_CR_PM_RSTN_Pos)) /* Assigment of value for PM_RSTN in the PMONC_CR register */
#define   PMONC_CR_PM_RSTN_PM_CLEAR_Val       _UINT32_(0x0)                                        /* (PMONC_CR) Clears the frequency measurement.  */
#define   PMONC_CR_PM_RSTN_PM_ACTIVE_Val      _UINT32_(0x1)                                        /* (PMONC_CR) Enables the frequency measurement.  */
#define PMONC_CR_PM_RSTN_PM_CLEAR             (PMONC_CR_PM_RSTN_PM_CLEAR_Val << PMONC_CR_PM_RSTN_Pos) /* (PMONC_CR) Clears the frequency measurement. Position  */
#define PMONC_CR_PM_RSTN_PM_ACTIVE            (PMONC_CR_PM_RSTN_PM_ACTIVE_Val << PMONC_CR_PM_RSTN_Pos) /* (PMONC_CR) Enables the frequency measurement. Position  */
#define PMONC_CR_PM_DIV_SEL_Pos               _UINT32_(16)                                         /* (PMONC_CR) Oscillator Clock Divider Selection Position */
#define PMONC_CR_PM_DIV_SEL_Msk               (_UINT32_(0x7) << PMONC_CR_PM_DIV_SEL_Pos)           /* (PMONC_CR) Oscillator Clock Divider Selection Mask */
#define PMONC_CR_PM_DIV_SEL(value)            (PMONC_CR_PM_DIV_SEL_Msk & (_UINT32_(value) << PMONC_CR_PM_DIV_SEL_Pos)) /* Assigment of value for PM_DIV_SEL in the PMONC_CR register */
#define   PMONC_CR_PM_DIV_SEL_DIV_2EXP13_Val  _UINT32_(0x0)                                        /* (PMONC_CR) Selected oscillator output clock divided by 213  */
#define   PMONC_CR_PM_DIV_SEL_DIV_2EXP14_Val  _UINT32_(0x1)                                        /* (PMONC_CR) Selected oscillator output clock divided by 214  */
#define   PMONC_CR_PM_DIV_SEL_DIV_2EXP15_Val  _UINT32_(0x2)                                        /* (PMONC_CR) Selected oscillator output clock divided by 215  */
#define   PMONC_CR_PM_DIV_SEL_DIV_2EXP16_Val  _UINT32_(0x3)                                        /* (PMONC_CR) Selected oscillator output clock divided by 216  */
#define   PMONC_CR_PM_DIV_SEL_DIV_2EXP17_Val  _UINT32_(0x4)                                        /* (PMONC_CR) Selected oscillator output clock divided by 217  */
#define   PMONC_CR_PM_DIV_SEL_DIV_2EXP18_Val  _UINT32_(0x5)                                        /* (PMONC_CR) Selected oscillator output clock divided by 218  */
#define   PMONC_CR_PM_DIV_SEL_DIV_2EXP19_Val  _UINT32_(0x6)                                        /* (PMONC_CR) Selected oscillator output clock divided by 219  */
#define   PMONC_CR_PM_DIV_SEL_DIV_2EXP20_Val  _UINT32_(0x7)                                        /* (PMONC_CR) Selected oscillator output clock divided by 220  */
#define PMONC_CR_PM_DIV_SEL_DIV_2EXP13        (PMONC_CR_PM_DIV_SEL_DIV_2EXP13_Val << PMONC_CR_PM_DIV_SEL_Pos) /* (PMONC_CR) Selected oscillator output clock divided by 213 Position  */
#define PMONC_CR_PM_DIV_SEL_DIV_2EXP14        (PMONC_CR_PM_DIV_SEL_DIV_2EXP14_Val << PMONC_CR_PM_DIV_SEL_Pos) /* (PMONC_CR) Selected oscillator output clock divided by 214 Position  */
#define PMONC_CR_PM_DIV_SEL_DIV_2EXP15        (PMONC_CR_PM_DIV_SEL_DIV_2EXP15_Val << PMONC_CR_PM_DIV_SEL_Pos) /* (PMONC_CR) Selected oscillator output clock divided by 215 Position  */
#define PMONC_CR_PM_DIV_SEL_DIV_2EXP16        (PMONC_CR_PM_DIV_SEL_DIV_2EXP16_Val << PMONC_CR_PM_DIV_SEL_Pos) /* (PMONC_CR) Selected oscillator output clock divided by 216 Position  */
#define PMONC_CR_PM_DIV_SEL_DIV_2EXP17        (PMONC_CR_PM_DIV_SEL_DIV_2EXP17_Val << PMONC_CR_PM_DIV_SEL_Pos) /* (PMONC_CR) Selected oscillator output clock divided by 217 Position  */
#define PMONC_CR_PM_DIV_SEL_DIV_2EXP18        (PMONC_CR_PM_DIV_SEL_DIV_2EXP18_Val << PMONC_CR_PM_DIV_SEL_Pos) /* (PMONC_CR) Selected oscillator output clock divided by 218 Position  */
#define PMONC_CR_PM_DIV_SEL_DIV_2EXP19        (PMONC_CR_PM_DIV_SEL_DIV_2EXP19_Val << PMONC_CR_PM_DIV_SEL_Pos) /* (PMONC_CR) Selected oscillator output clock divided by 219 Position  */
#define PMONC_CR_PM_DIV_SEL_DIV_2EXP20        (PMONC_CR_PM_DIV_SEL_DIV_2EXP20_Val << PMONC_CR_PM_DIV_SEL_Pos) /* (PMONC_CR) Selected oscillator output clock divided by 220 Position  */
#define PMONC_CR_PM_OSC_SEL_Pos               _UINT32_(20)                                         /* (PMONC_CR) Process Monitor Oscillator Selection Position */
#define PMONC_CR_PM_OSC_SEL_Msk               (_UINT32_(0xF) << PMONC_CR_PM_OSC_SEL_Pos)           /* (PMONC_CR) Process Monitor Oscillator Selection Mask */
#define PMONC_CR_PM_OSC_SEL(value)            (PMONC_CR_PM_OSC_SEL_Msk & (_UINT32_(value) << PMONC_CR_PM_OSC_SEL_Pos)) /* Assigment of value for PM_OSC_SEL in the PMONC_CR register */
#define   PMONC_CR_PM_OSC_SEL_LT_LONG_LVT_Val _UINT32_(0x0)                                        /* (PMONC_CR) Selects oscillator 0  Only valid for PM_ADDR=4 to 9  */
#define   PMONC_CR_PM_OSC_SEL_LT_LONG_RVT_Val _UINT32_(0x1)                                        /* (PMONC_CR) Selects oscillator 1  Only valid for PM_ADDR=4 to 9  */
#define   PMONC_CR_PM_OSC_SEL_LT_LONG_EHVT_Val _UINT32_(0x2)                                        /* (PMONC_CR) Selects oscillator 2  Only valid for PM_ADDR=4 to 9  */
#define   PMONC_CR_PM_OSC_SEL_LT_SHORT_LVT_Val _UINT32_(0x3)                                        /* (PMONC_CR) Selects oscillator 3  Only valid for PM_ADDR=4 to 9  */
#define   PMONC_CR_PM_OSC_SEL_LT_SHORT_RVT_Val _UINT32_(0x4)                                        /* (PMONC_CR) Selects oscillator 4  Only valid for PM_ADDR=4 to 9  */
#define   PMONC_CR_PM_OSC_SEL_HT_LONG_LVT_Val _UINT32_(0x5)                                        /* (PMONC_CR) Selects oscillator 5  Only valid for PM_ADDR=1 to 3  */
#define   PMONC_CR_PM_OSC_SEL_HT_LONG_RVT_Val _UINT32_(0x6)                                        /* (PMONC_CR) Selects oscillator 6  Only valid for PM_ADDR=1 to 3  */
#define   PMONC_CR_PM_OSC_SEL_HT_SHORT_LVT_Val _UINT32_(0x7)                                        /* (PMONC_CR) Selects oscillator 7  Only valid for PM_ADDR=1 to 3  */
#define   PMONC_CR_PM_OSC_SEL_HT_SHORT_RVT_Val _UINT32_(0x8)                                        /* (PMONC_CR) Selects oscillator 8  Only valid for PM_ADDR=1 to 3  */
#define   PMONC_CR_PM_OSC_SEL_LT_SHORT_LVT_CAP_Val _UINT32_(0x9)                                        /* (PMONC_CR) Selects oscillator 9  Only valid for PM_ADDR=4 up to 9  */
#define   PMONC_CR_PM_OSC_SEL_HT_SHORT_LVT_CAP_Val _UINT32_(0xA)                                        /* (PMONC_CR) Selects oscillator 10  Only valid for PM_ADDR=1 to 3  */
#define   PMONC_CR_PM_OSC_SEL_LT_SHORT_LVT_RES_Val _UINT32_(0xB)                                        /* (PMONC_CR) Selects oscillator 11 =  Only valid for PM_ADDR=4 up to 9  */
#define   PMONC_CR_PM_OSC_SEL_HT_SHORT_LVT_RES_Val _UINT32_(0xC)                                        /* (PMONC_CR) Selects oscillator 12  Only valid for PM_ADDR=1 to 3  */
#define PMONC_CR_PM_OSC_SEL_LT_LONG_LVT       (PMONC_CR_PM_OSC_SEL_LT_LONG_LVT_Val << PMONC_CR_PM_OSC_SEL_Pos) /* (PMONC_CR) Selects oscillator 0  Only valid for PM_ADDR=4 to 9 Position  */
#define PMONC_CR_PM_OSC_SEL_LT_LONG_RVT       (PMONC_CR_PM_OSC_SEL_LT_LONG_RVT_Val << PMONC_CR_PM_OSC_SEL_Pos) /* (PMONC_CR) Selects oscillator 1  Only valid for PM_ADDR=4 to 9 Position  */
#define PMONC_CR_PM_OSC_SEL_LT_LONG_EHVT      (PMONC_CR_PM_OSC_SEL_LT_LONG_EHVT_Val << PMONC_CR_PM_OSC_SEL_Pos) /* (PMONC_CR) Selects oscillator 2  Only valid for PM_ADDR=4 to 9 Position  */
#define PMONC_CR_PM_OSC_SEL_LT_SHORT_LVT      (PMONC_CR_PM_OSC_SEL_LT_SHORT_LVT_Val << PMONC_CR_PM_OSC_SEL_Pos) /* (PMONC_CR) Selects oscillator 3  Only valid for PM_ADDR=4 to 9 Position  */
#define PMONC_CR_PM_OSC_SEL_LT_SHORT_RVT      (PMONC_CR_PM_OSC_SEL_LT_SHORT_RVT_Val << PMONC_CR_PM_OSC_SEL_Pos) /* (PMONC_CR) Selects oscillator 4  Only valid for PM_ADDR=4 to 9 Position  */
#define PMONC_CR_PM_OSC_SEL_HT_LONG_LVT       (PMONC_CR_PM_OSC_SEL_HT_LONG_LVT_Val << PMONC_CR_PM_OSC_SEL_Pos) /* (PMONC_CR) Selects oscillator 5  Only valid for PM_ADDR=1 to 3 Position  */
#define PMONC_CR_PM_OSC_SEL_HT_LONG_RVT       (PMONC_CR_PM_OSC_SEL_HT_LONG_RVT_Val << PMONC_CR_PM_OSC_SEL_Pos) /* (PMONC_CR) Selects oscillator 6  Only valid for PM_ADDR=1 to 3 Position  */
#define PMONC_CR_PM_OSC_SEL_HT_SHORT_LVT      (PMONC_CR_PM_OSC_SEL_HT_SHORT_LVT_Val << PMONC_CR_PM_OSC_SEL_Pos) /* (PMONC_CR) Selects oscillator 7  Only valid for PM_ADDR=1 to 3 Position  */
#define PMONC_CR_PM_OSC_SEL_HT_SHORT_RVT      (PMONC_CR_PM_OSC_SEL_HT_SHORT_RVT_Val << PMONC_CR_PM_OSC_SEL_Pos) /* (PMONC_CR) Selects oscillator 8  Only valid for PM_ADDR=1 to 3 Position  */
#define PMONC_CR_PM_OSC_SEL_LT_SHORT_LVT_CAP  (PMONC_CR_PM_OSC_SEL_LT_SHORT_LVT_CAP_Val << PMONC_CR_PM_OSC_SEL_Pos) /* (PMONC_CR) Selects oscillator 9  Only valid for PM_ADDR=4 up to 9 Position  */
#define PMONC_CR_PM_OSC_SEL_HT_SHORT_LVT_CAP  (PMONC_CR_PM_OSC_SEL_HT_SHORT_LVT_CAP_Val << PMONC_CR_PM_OSC_SEL_Pos) /* (PMONC_CR) Selects oscillator 10  Only valid for PM_ADDR=1 to 3 Position  */
#define PMONC_CR_PM_OSC_SEL_LT_SHORT_LVT_RES  (PMONC_CR_PM_OSC_SEL_LT_SHORT_LVT_RES_Val << PMONC_CR_PM_OSC_SEL_Pos) /* (PMONC_CR) Selects oscillator 11 =  Only valid for PM_ADDR=4 up to 9 Position  */
#define PMONC_CR_PM_OSC_SEL_HT_SHORT_LVT_RES  (PMONC_CR_PM_OSC_SEL_HT_SHORT_LVT_RES_Val << PMONC_CR_PM_OSC_SEL_Pos) /* (PMONC_CR) Selects oscillator 12  Only valid for PM_ADDR=1 to 3 Position  */
#define PMONC_CR_PM_ADDR_Pos                  _UINT32_(24)                                         /* (PMONC_CR) Process Monitor Selection Position */
#define PMONC_CR_PM_ADDR_Msk                  (_UINT32_(0xFF) << PMONC_CR_PM_ADDR_Pos)             /* (PMONC_CR) Process Monitor Selection Mask */
#define PMONC_CR_PM_ADDR(value)               (PMONC_CR_PM_ADDR_Msk & (_UINT32_(value) << PMONC_CR_PM_ADDR_Pos)) /* Assigment of value for PM_ADDR in the PMONC_CR register */
#define PMONC_CR_Msk                          _UINT32_(0xFFF771F3)                                 /* (PMONC_CR) Register Mask  */


/* -------- PMONC_REFCLKR : (PMONC Offset: 0x04) (R/W 32) Reference Clock Configuration Register -------- */
#define PMONC_REFCLKR_RESETVALUE              _UINT32_(0x0A)                                       /*  (PMONC_REFCLKR) Reference Clock Configuration Register  Reset Value */

#define PMONC_REFCLKR_PCLK_DIV_Pos            _UINT32_(0)                                          /* (PMONC_REFCLKR) Peripheral Clock Divider for Reference Clock Position */
#define PMONC_REFCLKR_PCLK_DIV_Msk            (_UINT32_(0x3FF) << PMONC_REFCLKR_PCLK_DIV_Pos)      /* (PMONC_REFCLKR) Peripheral Clock Divider for Reference Clock Mask */
#define PMONC_REFCLKR_PCLK_DIV(value)         (PMONC_REFCLKR_PCLK_DIV_Msk & (_UINT32_(value) << PMONC_REFCLKR_PCLK_DIV_Pos)) /* Assigment of value for PCLK_DIV in the PMONC_REFCLKR register */
#define PMONC_REFCLKR_REFCLK_EN_Pos           _UINT32_(12)                                         /* (PMONC_REFCLKR) Frequency Measure Reference Clock Enable Position */
#define PMONC_REFCLKR_REFCLK_EN_Msk           (_UINT32_(0x1) << PMONC_REFCLKR_REFCLK_EN_Pos)       /* (PMONC_REFCLKR) Frequency Measure Reference Clock Enable Mask */
#define PMONC_REFCLKR_REFCLK_EN(value)        (PMONC_REFCLKR_REFCLK_EN_Msk & (_UINT32_(value) << PMONC_REFCLKR_REFCLK_EN_Pos)) /* Assigment of value for REFCLK_EN in the PMONC_REFCLKR register */
#define   PMONC_REFCLKR_REFCLK_EN_0_Val       _UINT32_(0x0)                                        /* (PMONC_REFCLKR) Disables the reference clock.  */
#define   PMONC_REFCLKR_REFCLK_EN_1_Val       _UINT32_(0x1)                                        /* (PMONC_REFCLKR) Enables the reference clock.  */
#define PMONC_REFCLKR_REFCLK_EN_0             (PMONC_REFCLKR_REFCLK_EN_0_Val << PMONC_REFCLKR_REFCLK_EN_Pos) /* (PMONC_REFCLKR) Disables the reference clock. Position  */
#define PMONC_REFCLKR_REFCLK_EN_1             (PMONC_REFCLKR_REFCLK_EN_1_Val << PMONC_REFCLKR_REFCLK_EN_Pos) /* (PMONC_REFCLKR) Enables the reference clock. Position  */
#define PMONC_REFCLKR_Msk                     _UINT32_(0x000013FF)                                 /* (PMONC_REFCLKR) Register Mask  */


/* -------- PMONC_SR : (PMONC Offset: 0x08) ( R/ 32) Status Register -------- */
#define PMONC_SR_RESETVALUE                   _UINT32_(0x00)                                       /*  (PMONC_SR) Status Register  Reset Value */

#define PMONC_SR_PM_FREQ_Pos                  _UINT32_(0)                                          /* (PMONC_SR) Selected Oscillator Frequency Image Position */
#define PMONC_SR_PM_FREQ_Msk                  (_UINT32_(0xFFFF) << PMONC_SR_PM_FREQ_Pos)           /* (PMONC_SR) Selected Oscillator Frequency Image Mask */
#define PMONC_SR_PM_FREQ(value)               (PMONC_SR_PM_FREQ_Msk & (_UINT32_(value) << PMONC_SR_PM_FREQ_Pos)) /* Assigment of value for PM_FREQ in the PMONC_SR register */
#define PMONC_SR_PM_ADDR_Pos                  _UINT32_(16)                                         /* (PMONC_SR) Process Monitor Number for the Measured Frequency Position */
#define PMONC_SR_PM_ADDR_Msk                  (_UINT32_(0xFF) << PMONC_SR_PM_ADDR_Pos)             /* (PMONC_SR) Process Monitor Number for the Measured Frequency Mask */
#define PMONC_SR_PM_ADDR(value)               (PMONC_SR_PM_ADDR_Msk & (_UINT32_(value) << PMONC_SR_PM_ADDR_Pos)) /* Assigment of value for PM_ADDR in the PMONC_SR register */
#define PMONC_SR_DONE_Pos                     _UINT32_(24)                                         /* (PMONC_SR) Frequency Measurement Completion Flag Position */
#define PMONC_SR_DONE_Msk                     (_UINT32_(0x1) << PMONC_SR_DONE_Pos)                 /* (PMONC_SR) Frequency Measurement Completion Flag Mask */
#define PMONC_SR_DONE(value)                  (PMONC_SR_DONE_Msk & (_UINT32_(value) << PMONC_SR_DONE_Pos)) /* Assigment of value for DONE in the PMONC_SR register */
#define   PMONC_SR_DONE_0_Val                 _UINT32_(0x0)                                        /* (PMONC_SR) Invalid PM_FREQ field.  */
#define   PMONC_SR_DONE_1_Val                 _UINT32_(0x1)                                        /* (PMONC_SR) Validates the frequency value returned on PM_FREQ field.  */
#define PMONC_SR_DONE_0                       (PMONC_SR_DONE_0_Val << PMONC_SR_DONE_Pos)           /* (PMONC_SR) Invalid PM_FREQ field. Position  */
#define PMONC_SR_DONE_1                       (PMONC_SR_DONE_1_Val << PMONC_SR_DONE_Pos)           /* (PMONC_SR) Validates the frequency value returned on PM_FREQ field. Position  */
#define PMONC_SR_NEW_Pos                      _UINT32_(25)                                         /* (PMONC_SR) New Frequency Measurement Ready (Cleared on read) Position */
#define PMONC_SR_NEW_Msk                      (_UINT32_(0x1) << PMONC_SR_NEW_Pos)                  /* (PMONC_SR) New Frequency Measurement Ready (Cleared on read) Mask */
#define PMONC_SR_NEW(value)                   (PMONC_SR_NEW_Msk & (_UINT32_(value) << PMONC_SR_NEW_Pos)) /* Assigment of value for NEW in the PMONC_SR register */
#define   PMONC_SR_NEW_0_Val                  _UINT32_(0x0)                                        /* (PMONC_SR) No new frequency value available in the register since the last read of PMONC_SR.  */
#define   PMONC_SR_NEW_1_Val                  _UINT32_(0x1)                                        /* (PMONC_SR) A new frequency measure is available since the last read of PMONC_SR.  */
#define PMONC_SR_NEW_0                        (PMONC_SR_NEW_0_Val << PMONC_SR_NEW_Pos)             /* (PMONC_SR) No new frequency value available in the register since the last read of PMONC_SR. Position  */
#define PMONC_SR_NEW_1                        (PMONC_SR_NEW_1_Val << PMONC_SR_NEW_Pos)             /* (PMONC_SR) A new frequency measure is available since the last read of PMONC_SR. Position  */
#define PMONC_SR_Msk                          _UINT32_(0x03FFFFFF)                                 /* (PMONC_SR) Register Mask  */


/** \brief PMONC register offsets definitions */
#define PMONC_CR_REG_OFST              _UINT32_(0x00)      /* (PMONC_CR) Control Register Offset */
#define PMONC_REFCLKR_REG_OFST         _UINT32_(0x04)      /* (PMONC_REFCLKR) Reference Clock Configuration Register Offset */
#define PMONC_SR_REG_OFST              _UINT32_(0x08)      /* (PMONC_SR) Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PMONC register API structure */
typedef struct
{  /* Process Monitor Controller */
  __IO  uint32_t                       PMONC_CR;           /**< Offset: 0x00 (R/W  32) Control Register */
  __IO  uint32_t                       PMONC_REFCLKR;      /**< Offset: 0x04 (R/W  32) Reference Clock Configuration Register */
  __I   uint32_t                       PMONC_SR;           /**< Offset: 0x08 (R/   32) Status Register */
} pmonc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7D6_PMONC_COMPONENT_H_ */
