/*
 * Component description for PDMC
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
#ifndef _SAMA7D6_PDMC_COMPONENT_H_
#define _SAMA7D6_PDMC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PDMC                                         */
/* ************************************************************************** */

/* -------- PDMC_CR : (PDMC Offset: 0x00) ( /W 32) Control Register -------- */
#define PDMC_CR_SWRST_Pos                     _UINT32_(0)                                          /* (PDMC_CR) Software Reset Position */
#define PDMC_CR_SWRST_Msk                     (_UINT32_(0x1) << PDMC_CR_SWRST_Pos)                 /* (PDMC_CR) Software Reset Mask */
#define PDMC_CR_SWRST(value)                  (PDMC_CR_SWRST_Msk & (_UINT32_(value) << PDMC_CR_SWRST_Pos)) /* Assigment of value for SWRST in the PDMC_CR register */
#define   PDMC_CR_SWRST_0_Val                 _UINT32_(0x0)                                        /* (PDMC_CR) No effect.  */
#define   PDMC_CR_SWRST_1_Val                 _UINT32_(0x1)                                        /* (PDMC_CR) Resets the PDMC interface.  */
#define PDMC_CR_SWRST_0                       (PDMC_CR_SWRST_0_Val << PDMC_CR_SWRST_Pos)           /* (PDMC_CR) No effect. Position  */
#define PDMC_CR_SWRST_1                       (PDMC_CR_SWRST_1_Val << PDMC_CR_SWRST_Pos)           /* (PDMC_CR) Resets the PDMC interface. Position  */
#define PDMC_CR_Msk                           _UINT32_(0x00000001)                                 /* (PDMC_CR) Register Mask  */


/* -------- PDMC_MR : (PDMC Offset: 0x04) (R/W 32) Mode Register -------- */
#define PDMC_MR_RESETVALUE                    _UINT32_(0x10300000)                                 /*  (PDMC_MR) Mode Register  Reset Value */

#define PDMC_MR_PDMCEN0_Pos                   _UINT32_(0)                                          /* (PDMC_MR) PDMC Channel 0 Enable Position */
#define PDMC_MR_PDMCEN0_Msk                   (_UINT32_(0x1) << PDMC_MR_PDMCEN0_Pos)               /* (PDMC_MR) PDMC Channel 0 Enable Mask */
#define PDMC_MR_PDMCEN0(value)                (PDMC_MR_PDMCEN0_Msk & (_UINT32_(value) << PDMC_MR_PDMCEN0_Pos)) /* Assigment of value for PDMCEN0 in the PDMC_MR register */
#define   PDMC_MR_PDMCEN0_DISABLE_Val         _UINT32_(0x0)                                        /* (PDMC_MR) PDMC is disabled.  */
#define   PDMC_MR_PDMCEN0_ENABLE_Val          _UINT32_(0x1)                                        /* (PDMC_MR) PDMC is enabled.  */
#define PDMC_MR_PDMCEN0_DISABLE               (PDMC_MR_PDMCEN0_DISABLE_Val << PDMC_MR_PDMCEN0_Pos) /* (PDMC_MR) PDMC is disabled. Position  */
#define PDMC_MR_PDMCEN0_ENABLE                (PDMC_MR_PDMCEN0_ENABLE_Val << PDMC_MR_PDMCEN0_Pos)  /* (PDMC_MR) PDMC is enabled. Position  */
#define PDMC_MR_PDMCEN1_Pos                   _UINT32_(1)                                          /* (PDMC_MR) PDMC Channel 1 Enable Position */
#define PDMC_MR_PDMCEN1_Msk                   (_UINT32_(0x1) << PDMC_MR_PDMCEN1_Pos)               /* (PDMC_MR) PDMC Channel 1 Enable Mask */
#define PDMC_MR_PDMCEN1(value)                (PDMC_MR_PDMCEN1_Msk & (_UINT32_(value) << PDMC_MR_PDMCEN1_Pos)) /* Assigment of value for PDMCEN1 in the PDMC_MR register */
#define   PDMC_MR_PDMCEN1_DISABLE_Val         _UINT32_(0x0)                                        /* (PDMC_MR) PDMC is disabled.  */
#define   PDMC_MR_PDMCEN1_ENABLE_Val          _UINT32_(0x1)                                        /* (PDMC_MR) PDMC is enabled.  */
#define PDMC_MR_PDMCEN1_DISABLE               (PDMC_MR_PDMCEN1_DISABLE_Val << PDMC_MR_PDMCEN1_Pos) /* (PDMC_MR) PDMC is disabled. Position  */
#define PDMC_MR_PDMCEN1_ENABLE                (PDMC_MR_PDMCEN1_ENABLE_Val << PDMC_MR_PDMCEN1_Pos)  /* (PDMC_MR) PDMC is enabled. Position  */
#define PDMC_MR_PDMCEN2_Pos                   _UINT32_(2)                                          /* (PDMC_MR) PDMC Channel 2 Enable Position */
#define PDMC_MR_PDMCEN2_Msk                   (_UINT32_(0x1) << PDMC_MR_PDMCEN2_Pos)               /* (PDMC_MR) PDMC Channel 2 Enable Mask */
#define PDMC_MR_PDMCEN2(value)                (PDMC_MR_PDMCEN2_Msk & (_UINT32_(value) << PDMC_MR_PDMCEN2_Pos)) /* Assigment of value for PDMCEN2 in the PDMC_MR register */
#define   PDMC_MR_PDMCEN2_DISABLE_Val         _UINT32_(0x0)                                        /* (PDMC_MR) PDMC is disabled.  */
#define   PDMC_MR_PDMCEN2_ENABLE_Val          _UINT32_(0x1)                                        /* (PDMC_MR) PDMC is enabled.  */
#define PDMC_MR_PDMCEN2_DISABLE               (PDMC_MR_PDMCEN2_DISABLE_Val << PDMC_MR_PDMCEN2_Pos) /* (PDMC_MR) PDMC is disabled. Position  */
#define PDMC_MR_PDMCEN2_ENABLE                (PDMC_MR_PDMCEN2_ENABLE_Val << PDMC_MR_PDMCEN2_Pos)  /* (PDMC_MR) PDMC is enabled. Position  */
#define PDMC_MR_PDMCEN3_Pos                   _UINT32_(3)                                          /* (PDMC_MR) PDMC Channel 3 Enable Position */
#define PDMC_MR_PDMCEN3_Msk                   (_UINT32_(0x1) << PDMC_MR_PDMCEN3_Pos)               /* (PDMC_MR) PDMC Channel 3 Enable Mask */
#define PDMC_MR_PDMCEN3(value)                (PDMC_MR_PDMCEN3_Msk & (_UINT32_(value) << PDMC_MR_PDMCEN3_Pos)) /* Assigment of value for PDMCEN3 in the PDMC_MR register */
#define   PDMC_MR_PDMCEN3_DISABLE_Val         _UINT32_(0x0)                                        /* (PDMC_MR) PDMC is disabled.  */
#define   PDMC_MR_PDMCEN3_ENABLE_Val          _UINT32_(0x1)                                        /* (PDMC_MR) PDMC is enabled.  */
#define PDMC_MR_PDMCEN3_DISABLE               (PDMC_MR_PDMCEN3_DISABLE_Val << PDMC_MR_PDMCEN3_Pos) /* (PDMC_MR) PDMC is disabled. Position  */
#define PDMC_MR_PDMCEN3_ENABLE                (PDMC_MR_PDMCEN3_ENABLE_Val << PDMC_MR_PDMCEN3_Pos)  /* (PDMC_MR) PDMC is enabled. Position  */
#define PDMC_MR_DST_Pos                       _UINT32_(12)                                         /* (PDMC_MR) Audio Data Destination Position */
#define PDMC_MR_DST_Msk                       (_UINT32_(0x1) << PDMC_MR_DST_Pos)                   /* (PDMC_MR) Audio Data Destination Mask */
#define PDMC_MR_DST(value)                    (PDMC_MR_DST_Msk & (_UINT32_(value) << PDMC_MR_DST_Pos)) /* Assigment of value for DST in the PDMC_MR register */
#define   PDMC_MR_DST_0_Val                   _UINT32_(0x0)                                        /* (PDMC_MR) Audio data are read through PDMC_RHR by the DMA or software.  */
#define   PDMC_MR_DST_1_Val                   _UINT32_(0x1)                                        /* (PDMC_MR) Audio data are transferred directly to the ASRC without DMA intervention or software.  */
#define PDMC_MR_DST_0                         (PDMC_MR_DST_0_Val << PDMC_MR_DST_Pos)               /* (PDMC_MR) Audio data are read through PDMC_RHR by the DMA or software. Position  */
#define PDMC_MR_DST_1                         (PDMC_MR_DST_1_Val << PDMC_MR_DST_Pos)               /* (PDMC_MR) Audio data are transferred directly to the ASRC without DMA intervention or software. Position  */
#define PDMC_MR_RHRMSB_Pos                    _UINT32_(14)                                         /* (PDMC_MR) RHR MSB Mode Position */
#define PDMC_MR_RHRMSB_Msk                    (_UINT32_(0x1) << PDMC_MR_RHRMSB_Pos)                /* (PDMC_MR) RHR MSB Mode Mask */
#define PDMC_MR_RHRMSB(value)                 (PDMC_MR_RHRMSB_Msk & (_UINT32_(value) << PDMC_MR_RHRMSB_Pos)) /* Assigment of value for RHRMSB in the PDMC_MR register */
#define   PDMC_MR_RHRMSB_CH_INDEX_Val         _UINT32_(0x0)                                        /* (PDMC_MR) The MSB section of PDMC_RHR contains the index of the microphone channel where the audio data sample.  */
#define   PDMC_MR_RHRMSB_ZERO_OR_DATA_Val     _UINT32_(0x1)                                        /* (PDMC_MR) When RHRJUSTIF=0, the MSB section of PDMC_RHR contains the sign extension. PDMC_RHR carries the audio samples of all the enabled channels in a round robin manner.  */
#define PDMC_MR_RHRMSB_CH_INDEX               (PDMC_MR_RHRMSB_CH_INDEX_Val << PDMC_MR_RHRMSB_Pos)  /* (PDMC_MR) The MSB section of PDMC_RHR contains the index of the microphone channel where the audio data sample. Position  */
#define PDMC_MR_RHRMSB_ZERO_OR_DATA           (PDMC_MR_RHRMSB_ZERO_OR_DATA_Val << PDMC_MR_RHRMSB_Pos) /* (PDMC_MR) When RHRJUSTIF=0, the MSB section of PDMC_RHR contains the sign extension. PDMC_RHR carries the audio samples of all the enabled channels in a round robin manner. Position  */
#define PDMC_MR_RHRJUSTIF_Pos                 _UINT32_(15)                                         /* (PDMC_MR) RHR Justification Mode Position */
#define PDMC_MR_RHRJUSTIF_Msk                 (_UINT32_(0x1) << PDMC_MR_RHRJUSTIF_Pos)             /* (PDMC_MR) RHR Justification Mode Mask */
#define PDMC_MR_RHRJUSTIF(value)              (PDMC_MR_RHRJUSTIF_Msk & (_UINT32_(value) << PDMC_MR_RHRJUSTIF_Pos)) /* Assigment of value for RHRJUSTIF in the PDMC_MR register */
#define   PDMC_MR_RHRJUSTIF_RIGHT_Val         _UINT32_(0x0)                                        /* (PDMC_MR) The audio sample data is right-justified in PDMC_RHR.  */
#define   PDMC_MR_RHRJUSTIF_LEFT_Val          _UINT32_(0x1)                                        /* (PDMC_MR) The audio sample data is left-justified in PDMC_RHR.  */
#define PDMC_MR_RHRJUSTIF_RIGHT               (PDMC_MR_RHRJUSTIF_RIGHT_Val << PDMC_MR_RHRJUSTIF_Pos) /* (PDMC_MR) The audio sample data is right-justified in PDMC_RHR. Position  */
#define PDMC_MR_RHRJUSTIF_LEFT                (PDMC_MR_RHRJUSTIF_LEFT_Val << PDMC_MR_RHRJUSTIF_Pos) /* (PDMC_MR) The audio sample data is left-justified in PDMC_RHR. Position  */
#define PDMC_MR_OSR_Pos                       _UINT32_(16)                                         /* (PDMC_MR) Audio Oversampling Ratio Position */
#define PDMC_MR_OSR_Msk                       (_UINT32_(0x3) << PDMC_MR_OSR_Pos)                   /* (PDMC_MR) Audio Oversampling Ratio Mask */
#define PDMC_MR_OSR(value)                    (PDMC_MR_OSR_Msk & (_UINT32_(value) << PDMC_MR_OSR_Pos)) /* Assigment of value for OSR in the PDMC_MR register */
#define   PDMC_MR_OSR_OSR64_Val               _UINT32_(0x1)                                        /* (PDMC_MR) OSR is 64  */
#define   PDMC_MR_OSR_OSR128_Val              _UINT32_(0x2)                                        /* (PDMC_MR) OSR is 128  */
#define   PDMC_MR_OSR_OSR256_Val              _UINT32_(0x3)                                        /* (PDMC_MR) OSR is 256  */
#define PDMC_MR_OSR_OSR64                     (PDMC_MR_OSR_OSR64_Val << PDMC_MR_OSR_Pos)           /* (PDMC_MR) OSR is 64 Position  */
#define PDMC_MR_OSR_OSR128                    (PDMC_MR_OSR_OSR128_Val << PDMC_MR_OSR_Pos)          /* (PDMC_MR) OSR is 128 Position  */
#define PDMC_MR_OSR_OSR256                    (PDMC_MR_OSR_OSR256_Val << PDMC_MR_OSR_Pos)          /* (PDMC_MR) OSR is 256 Position  */
#define PDMC_MR_SINCORDER_Pos                 _UINT32_(20)                                         /* (PDMC_MR) SINC Filter Order Position */
#define PDMC_MR_SINCORDER_Msk                 (_UINT32_(0xF) << PDMC_MR_SINCORDER_Pos)             /* (PDMC_MR) SINC Filter Order Mask */
#define PDMC_MR_SINCORDER(value)              (PDMC_MR_SINCORDER_Msk & (_UINT32_(value) << PDMC_MR_SINCORDER_Pos)) /* Assigment of value for SINCORDER in the PDMC_MR register */
#define   PDMC_MR_SINCORDER_ORDER1_Val        _UINT32_(0x1)                                        /* (PDMC_MR) SINC filter order is 1  */
#define   PDMC_MR_SINCORDER_ORDER2_Val        _UINT32_(0x2)                                        /* (PDMC_MR) SINC filter order is 2  */
#define   PDMC_MR_SINCORDER_ORDER3_Val        _UINT32_(0x3)                                        /* (PDMC_MR) SINC filter order is 3. Recommended if SINC_OSR=0  */
#define   PDMC_MR_SINCORDER_ORDER4_Val        _UINT32_(0x4)                                        /* (PDMC_MR) SINC filter order is 4  */
#define   PDMC_MR_SINCORDER_ORDER5_Val        _UINT32_(0x5)                                        /* (PDMC_MR) SINC filter order is 5  */
#define PDMC_MR_SINCORDER_ORDER1              (PDMC_MR_SINCORDER_ORDER1_Val << PDMC_MR_SINCORDER_Pos) /* (PDMC_MR) SINC filter order is 1 Position  */
#define PDMC_MR_SINCORDER_ORDER2              (PDMC_MR_SINCORDER_ORDER2_Val << PDMC_MR_SINCORDER_Pos) /* (PDMC_MR) SINC filter order is 2 Position  */
#define PDMC_MR_SINCORDER_ORDER3              (PDMC_MR_SINCORDER_ORDER3_Val << PDMC_MR_SINCORDER_Pos) /* (PDMC_MR) SINC filter order is 3. Recommended if SINC_OSR=0 Position  */
#define PDMC_MR_SINCORDER_ORDER4              (PDMC_MR_SINCORDER_ORDER4_Val << PDMC_MR_SINCORDER_Pos) /* (PDMC_MR) SINC filter order is 4 Position  */
#define PDMC_MR_SINCORDER_ORDER5              (PDMC_MR_SINCORDER_ORDER5_Val << PDMC_MR_SINCORDER_Pos) /* (PDMC_MR) SINC filter order is 5 Position  */
#define PDMC_MR_SINC_OSR_Pos                  _UINT32_(24)                                         /* (PDMC_MR) SINC Filter Oversampling Ratio Position */
#define PDMC_MR_SINC_OSR_Msk                  (_UINT32_(0xF) << PDMC_MR_SINC_OSR_Pos)              /* (PDMC_MR) SINC Filter Oversampling Ratio Mask */
#define PDMC_MR_SINC_OSR(value)               (PDMC_MR_SINC_OSR_Msk & (_UINT32_(value) << PDMC_MR_SINC_OSR_Pos)) /* Assigment of value for SINC_OSR in the PDMC_MR register */
#define   PDMC_MR_SINC_OSR_DISABLE_Val        _UINT32_(0x0)                                        /* (PDMC_MR) Audio filtering mode. The SINC filter OSR is implicitly defined by the PDMC_MR.OSR field.  */
#define   PDMC_MR_SINC_OSR_OSR8_Val           _UINT32_(0x1)                                        /* (PDMC_MR) The SINC filter OSR is 8.  */
#define   PDMC_MR_SINC_OSR_OSR16_Val          _UINT32_(0x2)                                        /* (PDMC_MR) The SINC filter OSR is 16.  */
#define   PDMC_MR_SINC_OSR_OSR32_Val          _UINT32_(0x3)                                        /* (PDMC_MR) The SINC filter OSR is 32.  */
#define   PDMC_MR_SINC_OSR_OSR64_Val          _UINT32_(0x4)                                        /* (PDMC_MR) The SINC filter OSR is 64.  */
#define   PDMC_MR_SINC_OSR_OSR128_Val         _UINT32_(0x5)                                        /* (PDMC_MR) The SINC filter OSR is 128.  */
#define   PDMC_MR_SINC_OSR_OSR256_Val         _UINT32_(0x6)                                        /* (PDMC_MR) The SINC filter OSR is 256.  */
#define PDMC_MR_SINC_OSR_DISABLE              (PDMC_MR_SINC_OSR_DISABLE_Val << PDMC_MR_SINC_OSR_Pos) /* (PDMC_MR) Audio filtering mode. The SINC filter OSR is implicitly defined by the PDMC_MR.OSR field. Position  */
#define PDMC_MR_SINC_OSR_OSR8                 (PDMC_MR_SINC_OSR_OSR8_Val << PDMC_MR_SINC_OSR_Pos)  /* (PDMC_MR) The SINC filter OSR is 8. Position  */
#define PDMC_MR_SINC_OSR_OSR16                (PDMC_MR_SINC_OSR_OSR16_Val << PDMC_MR_SINC_OSR_Pos) /* (PDMC_MR) The SINC filter OSR is 16. Position  */
#define PDMC_MR_SINC_OSR_OSR32                (PDMC_MR_SINC_OSR_OSR32_Val << PDMC_MR_SINC_OSR_Pos) /* (PDMC_MR) The SINC filter OSR is 32. Position  */
#define PDMC_MR_SINC_OSR_OSR64                (PDMC_MR_SINC_OSR_OSR64_Val << PDMC_MR_SINC_OSR_Pos) /* (PDMC_MR) The SINC filter OSR is 64. Position  */
#define PDMC_MR_SINC_OSR_OSR128               (PDMC_MR_SINC_OSR_OSR128_Val << PDMC_MR_SINC_OSR_Pos) /* (PDMC_MR) The SINC filter OSR is 128. Position  */
#define PDMC_MR_SINC_OSR_OSR256               (PDMC_MR_SINC_OSR_OSR256_Val << PDMC_MR_SINC_OSR_Pos) /* (PDMC_MR) The SINC filter OSR is 256. Position  */
#define PDMC_MR_CHUNK_Pos                     _UINT32_(28)                                         /* (PDMC_MR) Chunk Size Position */
#define PDMC_MR_CHUNK_Msk                     (_UINT32_(0xF) << PDMC_MR_CHUNK_Pos)                 /* (PDMC_MR) Chunk Size Mask */
#define PDMC_MR_CHUNK(value)                  (PDMC_MR_CHUNK_Msk & (_UINT32_(value) << PDMC_MR_CHUNK_Pos)) /* Assigment of value for CHUNK in the PDMC_MR register */
#define PDMC_MR_Msk                           _UINT32_(0xFFF3D00F)                                 /* (PDMC_MR) Register Mask  */

#define PDMC_MR_PDMCEN_Pos                    _UINT32_(0)                                          /* (PDMC_MR Position) PDMC Channel x Enable */
#define PDMC_MR_PDMCEN_Msk                    (_UINT32_(0xF) << PDMC_MR_PDMCEN_Pos)                /* (PDMC_MR Mask) PDMCEN */
#define PDMC_MR_PDMCEN(value)                 (PDMC_MR_PDMCEN_Msk & (_UINT32_(value) << PDMC_MR_PDMCEN_Pos)) 

/* -------- PDMC_CFGR : (PDMC Offset: 0x08) (R/W 32) Configuration Register -------- */
#define PDMC_CFGR_RESETVALUE                  _UINT32_(0x500044)                                   /*  (PDMC_CFGR) Configuration Register  Reset Value */

#define PDMC_CFGR_BSSEL0_Pos                  _UINT32_(0)                                          /* (PDMC_CFGR) Bitstream Source Selection Position */
#define PDMC_CFGR_BSSEL0_Msk                  (_UINT32_(0x1) << PDMC_CFGR_BSSEL0_Pos)              /* (PDMC_CFGR) Bitstream Source Selection Mask */
#define PDMC_CFGR_BSSEL0(value)               (PDMC_CFGR_BSSEL0_Msk & (_UINT32_(value) << PDMC_CFGR_BSSEL0_Pos)) /* Assigment of value for BSSEL0 in the PDMC_CFGR register */
#define   PDMC_CFGR_BSSEL0_0_Val              _UINT32_(0x0)                                        /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the positive edge of PDMC_CLK.  */
#define   PDMC_CFGR_BSSEL0_1_Val              _UINT32_(0x1)                                        /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the negative edge of PDMC_CLK.  */
#define PDMC_CFGR_BSSEL0_0                    (PDMC_CFGR_BSSEL0_0_Val << PDMC_CFGR_BSSEL0_Pos)     /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the positive edge of PDMC_CLK. Position  */
#define PDMC_CFGR_BSSEL0_1                    (PDMC_CFGR_BSSEL0_1_Val << PDMC_CFGR_BSSEL0_Pos)     /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the negative edge of PDMC_CLK. Position  */
#define PDMC_CFGR_BSSEL1_Pos                  _UINT32_(2)                                          /* (PDMC_CFGR) Bitstream Source Selection Position */
#define PDMC_CFGR_BSSEL1_Msk                  (_UINT32_(0x1) << PDMC_CFGR_BSSEL1_Pos)              /* (PDMC_CFGR) Bitstream Source Selection Mask */
#define PDMC_CFGR_BSSEL1(value)               (PDMC_CFGR_BSSEL1_Msk & (_UINT32_(value) << PDMC_CFGR_BSSEL1_Pos)) /* Assigment of value for BSSEL1 in the PDMC_CFGR register */
#define   PDMC_CFGR_BSSEL1_0_Val              _UINT32_(0x0)                                        /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the positive edge of PDMC_CLK.  */
#define   PDMC_CFGR_BSSEL1_1_Val              _UINT32_(0x1)                                        /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the negative edge of PDMC_CLK.  */
#define PDMC_CFGR_BSSEL1_0                    (PDMC_CFGR_BSSEL1_0_Val << PDMC_CFGR_BSSEL1_Pos)     /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the positive edge of PDMC_CLK. Position  */
#define PDMC_CFGR_BSSEL1_1                    (PDMC_CFGR_BSSEL1_1_Val << PDMC_CFGR_BSSEL1_Pos)     /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the negative edge of PDMC_CLK. Position  */
#define PDMC_CFGR_BSSEL2_Pos                  _UINT32_(4)                                          /* (PDMC_CFGR) Bitstream Source Selection Position */
#define PDMC_CFGR_BSSEL2_Msk                  (_UINT32_(0x1) << PDMC_CFGR_BSSEL2_Pos)              /* (PDMC_CFGR) Bitstream Source Selection Mask */
#define PDMC_CFGR_BSSEL2(value)               (PDMC_CFGR_BSSEL2_Msk & (_UINT32_(value) << PDMC_CFGR_BSSEL2_Pos)) /* Assigment of value for BSSEL2 in the PDMC_CFGR register */
#define   PDMC_CFGR_BSSEL2_0_Val              _UINT32_(0x0)                                        /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the positive edge of PDMC_CLK.  */
#define   PDMC_CFGR_BSSEL2_1_Val              _UINT32_(0x1)                                        /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the negative edge of PDMC_CLK.  */
#define PDMC_CFGR_BSSEL2_0                    (PDMC_CFGR_BSSEL2_0_Val << PDMC_CFGR_BSSEL2_Pos)     /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the positive edge of PDMC_CLK. Position  */
#define PDMC_CFGR_BSSEL2_1                    (PDMC_CFGR_BSSEL2_1_Val << PDMC_CFGR_BSSEL2_Pos)     /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the negative edge of PDMC_CLK. Position  */
#define PDMC_CFGR_BSSEL3_Pos                  _UINT32_(6)                                          /* (PDMC_CFGR) Bitstream Source Selection Position */
#define PDMC_CFGR_BSSEL3_Msk                  (_UINT32_(0x1) << PDMC_CFGR_BSSEL3_Pos)              /* (PDMC_CFGR) Bitstream Source Selection Mask */
#define PDMC_CFGR_BSSEL3(value)               (PDMC_CFGR_BSSEL3_Msk & (_UINT32_(value) << PDMC_CFGR_BSSEL3_Pos)) /* Assigment of value for BSSEL3 in the PDMC_CFGR register */
#define   PDMC_CFGR_BSSEL3_0_Val              _UINT32_(0x0)                                        /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the positive edge of PDMC_CLK.  */
#define   PDMC_CFGR_BSSEL3_1_Val              _UINT32_(0x1)                                        /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the negative edge of PDMC_CLK.  */
#define PDMC_CFGR_BSSEL3_0                    (PDMC_CFGR_BSSEL3_0_Val << PDMC_CFGR_BSSEL3_Pos)     /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the positive edge of PDMC_CLK. Position  */
#define PDMC_CFGR_BSSEL3_1                    (PDMC_CFGR_BSSEL3_1_Val << PDMC_CFGR_BSSEL3_Pos)     /* (PDMC_CFGR) The selected PDMC_DSx source is sampled on the negative edge of PDMC_CLK. Position  */
#define PDMC_CFGR_DATAL_Pos                   _UINT32_(8)                                          /* (PDMC_CFGR) Data Length Position */
#define PDMC_CFGR_DATAL_Msk                   (_UINT32_(0x7) << PDMC_CFGR_DATAL_Pos)               /* (PDMC_CFGR) Data Length Mask */
#define PDMC_CFGR_DATAL(value)                (PDMC_CFGR_DATAL_Msk & (_UINT32_(value) << PDMC_CFGR_DATAL_Pos)) /* Assigment of value for DATAL in the PDMC_CFGR register */
#define   PDMC_CFGR_DATAL_24_BITS_Val         _UINT32_(0x0)                                        /* (PDMC_CFGR) Data are defined on 24 bits  */
#define   PDMC_CFGR_DATAL_32_BITS_Val         _UINT32_(0x1)                                        /* (PDMC_CFGR) Data are defined on 32 bits  */
#define   PDMC_CFGR_DATAL_20_BITS_Val         _UINT32_(0x2)                                        /* (PDMC_CFGR) Data are defined on 20 bits  */
#define   PDMC_CFGR_DATAL_16_BITS_Val         _UINT32_(0x3)                                        /* (PDMC_CFGR) Data are defined on 16 bits  */
#define   PDMC_CFGR_DATAL_8_BITS_Val          _UINT32_(0x4)                                        /* (PDMC_CFGR) Data are defined on 8 bits  */
#define PDMC_CFGR_DATAL_24_BITS               (PDMC_CFGR_DATAL_24_BITS_Val << PDMC_CFGR_DATAL_Pos) /* (PDMC_CFGR) Data are defined on 24 bits Position  */
#define PDMC_CFGR_DATAL_32_BITS               (PDMC_CFGR_DATAL_32_BITS_Val << PDMC_CFGR_DATAL_Pos) /* (PDMC_CFGR) Data are defined on 32 bits Position  */
#define PDMC_CFGR_DATAL_20_BITS               (PDMC_CFGR_DATAL_20_BITS_Val << PDMC_CFGR_DATAL_Pos) /* (PDMC_CFGR) Data are defined on 20 bits Position  */
#define PDMC_CFGR_DATAL_16_BITS               (PDMC_CFGR_DATAL_16_BITS_Val << PDMC_CFGR_DATAL_Pos) /* (PDMC_CFGR) Data are defined on 16 bits Position  */
#define PDMC_CFGR_DATAL_8_BITS                (PDMC_CFGR_DATAL_8_BITS_Val << PDMC_CFGR_DATAL_Pos)  /* (PDMC_CFGR) Data are defined on 8 bits Position  */
#define PDMC_CFGR_PACK_Pos                    _UINT32_(12)                                         /* (PDMC_CFGR) Packed Data Position */
#define PDMC_CFGR_PACK_Msk                    (_UINT32_(0x1) << PDMC_CFGR_PACK_Pos)                /* (PDMC_CFGR) Packed Data Mask */
#define PDMC_CFGR_PACK(value)                 (PDMC_CFGR_PACK_Msk & (_UINT32_(value) << PDMC_CFGR_PACK_Pos)) /* Assigment of value for PACK in the PDMC_CFGR register */
#define   PDMC_CFGR_PACK_0_Val                _UINT32_(0x0)                                        /* (PDMC_CFGR) Data are not packed.  */
#define   PDMC_CFGR_PACK_1_Val                _UINT32_(0x1)                                        /* (PDMC_CFGR) Data are packed (if the DATAL configuration allows the packing).  */
#define PDMC_CFGR_PACK_0                      (PDMC_CFGR_PACK_0_Val << PDMC_CFGR_PACK_Pos)         /* (PDMC_CFGR) Data are not packed. Position  */
#define PDMC_CFGR_PACK_1                      (PDMC_CFGR_PACK_1_Val << PDMC_CFGR_PACK_Pos)         /* (PDMC_CFGR) Data are packed (if the DATAL configuration allows the packing). Position  */
#define PDMC_CFGR_PDMSEL0_Pos                 _UINT32_(16)                                         /* (PDMC_CFGR) PDM Microphone Source Selection Position */
#define PDMC_CFGR_PDMSEL0_Msk                 (_UINT32_(0x1) << PDMC_CFGR_PDMSEL0_Pos)             /* (PDMC_CFGR) PDM Microphone Source Selection Mask */
#define PDMC_CFGR_PDMSEL0(value)              (PDMC_CFGR_PDMSEL0_Msk & (_UINT32_(value) << PDMC_CFGR_PDMSEL0_Pos)) /* Assigment of value for PDMSEL0 in the PDMC_CFGR register */
#define   PDMC_CFGR_PDMSEL0_0_Val             _UINT32_(0x0)                                        /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS0.  */
#define   PDMC_CFGR_PDMSEL0_1_Val             _UINT32_(0x1)                                        /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS1.  */
#define PDMC_CFGR_PDMSEL0_0                   (PDMC_CFGR_PDMSEL0_0_Val << PDMC_CFGR_PDMSEL0_Pos)   /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS0. Position  */
#define PDMC_CFGR_PDMSEL0_1                   (PDMC_CFGR_PDMSEL0_1_Val << PDMC_CFGR_PDMSEL0_Pos)   /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS1. Position  */
#define PDMC_CFGR_PDMSEL1_Pos                 _UINT32_(18)                                         /* (PDMC_CFGR) PDM Microphone Source Selection Position */
#define PDMC_CFGR_PDMSEL1_Msk                 (_UINT32_(0x1) << PDMC_CFGR_PDMSEL1_Pos)             /* (PDMC_CFGR) PDM Microphone Source Selection Mask */
#define PDMC_CFGR_PDMSEL1(value)              (PDMC_CFGR_PDMSEL1_Msk & (_UINT32_(value) << PDMC_CFGR_PDMSEL1_Pos)) /* Assigment of value for PDMSEL1 in the PDMC_CFGR register */
#define   PDMC_CFGR_PDMSEL1_0_Val             _UINT32_(0x0)                                        /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS0.  */
#define   PDMC_CFGR_PDMSEL1_1_Val             _UINT32_(0x1)                                        /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS1.  */
#define PDMC_CFGR_PDMSEL1_0                   (PDMC_CFGR_PDMSEL1_0_Val << PDMC_CFGR_PDMSEL1_Pos)   /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS0. Position  */
#define PDMC_CFGR_PDMSEL1_1                   (PDMC_CFGR_PDMSEL1_1_Val << PDMC_CFGR_PDMSEL1_Pos)   /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS1. Position  */
#define PDMC_CFGR_PDMSEL2_Pos                 _UINT32_(20)                                         /* (PDMC_CFGR) PDM Microphone Source Selection Position */
#define PDMC_CFGR_PDMSEL2_Msk                 (_UINT32_(0x1) << PDMC_CFGR_PDMSEL2_Pos)             /* (PDMC_CFGR) PDM Microphone Source Selection Mask */
#define PDMC_CFGR_PDMSEL2(value)              (PDMC_CFGR_PDMSEL2_Msk & (_UINT32_(value) << PDMC_CFGR_PDMSEL2_Pos)) /* Assigment of value for PDMSEL2 in the PDMC_CFGR register */
#define   PDMC_CFGR_PDMSEL2_0_Val             _UINT32_(0x0)                                        /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS0.  */
#define   PDMC_CFGR_PDMSEL2_1_Val             _UINT32_(0x1)                                        /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS1.  */
#define PDMC_CFGR_PDMSEL2_0                   (PDMC_CFGR_PDMSEL2_0_Val << PDMC_CFGR_PDMSEL2_Pos)   /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS0. Position  */
#define PDMC_CFGR_PDMSEL2_1                   (PDMC_CFGR_PDMSEL2_1_Val << PDMC_CFGR_PDMSEL2_Pos)   /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS1. Position  */
#define PDMC_CFGR_PDMSEL3_Pos                 _UINT32_(22)                                         /* (PDMC_CFGR) PDM Microphone Source Selection Position */
#define PDMC_CFGR_PDMSEL3_Msk                 (_UINT32_(0x1) << PDMC_CFGR_PDMSEL3_Pos)             /* (PDMC_CFGR) PDM Microphone Source Selection Mask */
#define PDMC_CFGR_PDMSEL3(value)              (PDMC_CFGR_PDMSEL3_Msk & (_UINT32_(value) << PDMC_CFGR_PDMSEL3_Pos)) /* Assigment of value for PDMSEL3 in the PDMC_CFGR register */
#define   PDMC_CFGR_PDMSEL3_0_Val             _UINT32_(0x0)                                        /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS0.  */
#define   PDMC_CFGR_PDMSEL3_1_Val             _UINT32_(0x1)                                        /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS1.  */
#define PDMC_CFGR_PDMSEL3_0                   (PDMC_CFGR_PDMSEL3_0_Val << PDMC_CFGR_PDMSEL3_Pos)   /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS0. Position  */
#define PDMC_CFGR_PDMSEL3_1                   (PDMC_CFGR_PDMSEL3_1_Val << PDMC_CFGR_PDMSEL3_Pos)   /* (PDMC_CFGR) PDMSELx corresponds to PMDC_DS1. Position  */
#define PDMC_CFGR_Msk                         _UINT32_(0x00551755)                                 /* (PDMC_CFGR) Register Mask  */

#define PDMC_CFGR_BSSEL_Pos                   _UINT32_(0)                                          /* (PDMC_CFGR Position) Bitstream Source Selection */
#define PDMC_CFGR_BSSEL_Msk                   (_UINT32_(0xF) << PDMC_CFGR_BSSEL_Pos)               /* (PDMC_CFGR Mask) BSSEL */
#define PDMC_CFGR_BSSEL(value)                (PDMC_CFGR_BSSEL_Msk & (_UINT32_(value) << PDMC_CFGR_BSSEL_Pos)) 
#define PDMC_CFGR_PDMSEL_Pos                  _UINT32_(16)                                         /* (PDMC_CFGR Position) PDM Microphone Source Selection */
#define PDMC_CFGR_PDMSEL_Msk                  (_UINT32_(0xF) << PDMC_CFGR_PDMSEL_Pos)              /* (PDMC_CFGR Mask) PDMSEL */
#define PDMC_CFGR_PDMSEL(value)               (PDMC_CFGR_PDMSEL_Msk & (_UINT32_(value) << PDMC_CFGR_PDMSEL_Pos)) 

/* -------- PDMC_RHR : (PDMC Offset: 0x0C) ( R/ 32) Receive Holding Register -------- */
#define PDMC_RHR_RESETVALUE                   _UINT32_(0x00)                                       /*  (PDMC_RHR) Receive Holding Register  Reset Value */

#define PDMC_RHR_DATA_Pos                     _UINT32_(0)                                          /* (PDMC_RHR) Converted Data Position */
#define PDMC_RHR_DATA_Msk                     (_UINT32_(0xFFFFFF) << PDMC_RHR_DATA_Pos)            /* (PDMC_RHR) Converted Data Mask */
#define PDMC_RHR_DATA(value)                  (PDMC_RHR_DATA_Msk & (_UINT32_(value) << PDMC_RHR_DATA_Pos)) /* Assigment of value for DATA in the PDMC_RHR register */
#define PDMC_RHR_CHANNEL_Pos                  _UINT32_(24)                                         /* (PDMC_RHR) Channel Index of Data Position */
#define PDMC_RHR_CHANNEL_Msk                  (_UINT32_(0xFF) << PDMC_RHR_CHANNEL_Pos)             /* (PDMC_RHR) Channel Index of Data Mask */
#define PDMC_RHR_CHANNEL(value)               (PDMC_RHR_CHANNEL_Msk & (_UINT32_(value) << PDMC_RHR_CHANNEL_Pos)) /* Assigment of value for CHANNEL in the PDMC_RHR register */
#define PDMC_RHR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (PDMC_RHR) Register Mask  */


/* -------- PDMC_IER : (PDMC Offset: 0x14) ( /W 32) Interrupt Enable Register -------- */
#define PDMC_IER_RXRDY_Pos                    _UINT32_(0)                                          /* (PDMC_IER) Receive Ready Interrupt Enable Position */
#define PDMC_IER_RXRDY_Msk                    (_UINT32_(0x1) << PDMC_IER_RXRDY_Pos)                /* (PDMC_IER) Receive Ready Interrupt Enable Mask */
#define PDMC_IER_RXRDY(value)                 (PDMC_IER_RXRDY_Msk & (_UINT32_(value) << PDMC_IER_RXRDY_Pos)) /* Assigment of value for RXRDY in the PDMC_IER register */
#define PDMC_IER_RXEMPTY_Pos                  _UINT32_(1)                                          /* (PDMC_IER) Receive FIFO Empty Interrupt Enable Position */
#define PDMC_IER_RXEMPTY_Msk                  (_UINT32_(0x1) << PDMC_IER_RXEMPTY_Pos)              /* (PDMC_IER) Receive FIFO Empty Interrupt Enable Mask */
#define PDMC_IER_RXEMPTY(value)               (PDMC_IER_RXEMPTY_Msk & (_UINT32_(value) << PDMC_IER_RXEMPTY_Pos)) /* Assigment of value for RXEMPTY in the PDMC_IER register */
#define PDMC_IER_RXFULL_Pos                   _UINT32_(2)                                          /* (PDMC_IER) Receive FIFO Full Interrupt Enable Position */
#define PDMC_IER_RXFULL_Msk                   (_UINT32_(0x1) << PDMC_IER_RXFULL_Pos)               /* (PDMC_IER) Receive FIFO Full Interrupt Enable Mask */
#define PDMC_IER_RXFULL(value)                (PDMC_IER_RXFULL_Msk & (_UINT32_(value) << PDMC_IER_RXFULL_Pos)) /* Assigment of value for RXFULL in the PDMC_IER register */
#define PDMC_IER_RXCHUNK_Pos                  _UINT32_(3)                                          /* (PDMC_IER) Receive FIFO Chunk Interrupt Enable Position */
#define PDMC_IER_RXCHUNK_Msk                  (_UINT32_(0x1) << PDMC_IER_RXCHUNK_Pos)              /* (PDMC_IER) Receive FIFO Chunk Interrupt Enable Mask */
#define PDMC_IER_RXCHUNK(value)               (PDMC_IER_RXCHUNK_Msk & (_UINT32_(value) << PDMC_IER_RXCHUNK_Pos)) /* Assigment of value for RXCHUNK in the PDMC_IER register */
#define PDMC_IER_RXUDR_Pos                    _UINT32_(4)                                          /* (PDMC_IER) Receive Under Flow Interrupt Enable Position */
#define PDMC_IER_RXUDR_Msk                    (_UINT32_(0x1) << PDMC_IER_RXUDR_Pos)                /* (PDMC_IER) Receive Under Flow Interrupt Enable Mask */
#define PDMC_IER_RXUDR(value)                 (PDMC_IER_RXUDR_Msk & (_UINT32_(value) << PDMC_IER_RXUDR_Pos)) /* Assigment of value for RXUDR in the PDMC_IER register */
#define PDMC_IER_RXOVR_Pos                    _UINT32_(5)                                          /* (PDMC_IER) Receive Over Flow Interrupt Enable Position */
#define PDMC_IER_RXOVR_Msk                    (_UINT32_(0x1) << PDMC_IER_RXOVR_Pos)                /* (PDMC_IER) Receive Over Flow Interrupt Enable Mask */
#define PDMC_IER_RXOVR(value)                 (PDMC_IER_RXOVR_Msk & (_UINT32_(value) << PDMC_IER_RXOVR_Pos)) /* Assigment of value for RXOVR in the PDMC_IER register */
#define PDMC_IER_SAT0_Pos                     _UINT32_(8)                                          /* (PDMC_IER) Saturation Detection on Channel 0 Interrupt Enable Position */
#define PDMC_IER_SAT0_Msk                     (_UINT32_(0x1) << PDMC_IER_SAT0_Pos)                 /* (PDMC_IER) Saturation Detection on Channel 0 Interrupt Enable Mask */
#define PDMC_IER_SAT0(value)                  (PDMC_IER_SAT0_Msk & (_UINT32_(value) << PDMC_IER_SAT0_Pos)) /* Assigment of value for SAT0 in the PDMC_IER register */
#define PDMC_IER_SAT1_Pos                     _UINT32_(9)                                          /* (PDMC_IER) Saturation Detection on Channel 1 Interrupt Enable Position */
#define PDMC_IER_SAT1_Msk                     (_UINT32_(0x1) << PDMC_IER_SAT1_Pos)                 /* (PDMC_IER) Saturation Detection on Channel 1 Interrupt Enable Mask */
#define PDMC_IER_SAT1(value)                  (PDMC_IER_SAT1_Msk & (_UINT32_(value) << PDMC_IER_SAT1_Pos)) /* Assigment of value for SAT1 in the PDMC_IER register */
#define PDMC_IER_SAT2_Pos                     _UINT32_(10)                                         /* (PDMC_IER) Saturation Detection on Channel 2 Interrupt Enable Position */
#define PDMC_IER_SAT2_Msk                     (_UINT32_(0x1) << PDMC_IER_SAT2_Pos)                 /* (PDMC_IER) Saturation Detection on Channel 2 Interrupt Enable Mask */
#define PDMC_IER_SAT2(value)                  (PDMC_IER_SAT2_Msk & (_UINT32_(value) << PDMC_IER_SAT2_Pos)) /* Assigment of value for SAT2 in the PDMC_IER register */
#define PDMC_IER_SAT3_Pos                     _UINT32_(11)                                         /* (PDMC_IER) Saturation Detection on Channel 3 Interrupt Enable Position */
#define PDMC_IER_SAT3_Msk                     (_UINT32_(0x1) << PDMC_IER_SAT3_Pos)                 /* (PDMC_IER) Saturation Detection on Channel 3 Interrupt Enable Mask */
#define PDMC_IER_SAT3(value)                  (PDMC_IER_SAT3_Msk & (_UINT32_(value) << PDMC_IER_SAT3_Pos)) /* Assigment of value for SAT3 in the PDMC_IER register */
#define PDMC_IER_WPERR_Pos                    _UINT32_(28)                                         /* (PDMC_IER) Write Protect Event Interrupt Enable Position */
#define PDMC_IER_WPERR_Msk                    (_UINT32_(0x1) << PDMC_IER_WPERR_Pos)                /* (PDMC_IER) Write Protect Event Interrupt Enable Mask */
#define PDMC_IER_WPERR(value)                 (PDMC_IER_WPERR_Msk & (_UINT32_(value) << PDMC_IER_WPERR_Pos)) /* Assigment of value for WPERR in the PDMC_IER register */
#define PDMC_IER_Msk                          _UINT32_(0x10000F3F)                                 /* (PDMC_IER) Register Mask  */

#define PDMC_IER_SAT_Pos                      _UINT32_(8)                                          /* (PDMC_IER Position) Saturation Detection on Channel x Interrupt Enable */
#define PDMC_IER_SAT_Msk                      (_UINT32_(0xF) << PDMC_IER_SAT_Pos)                  /* (PDMC_IER Mask) SAT */
#define PDMC_IER_SAT(value)                   (PDMC_IER_SAT_Msk & (_UINT32_(value) << PDMC_IER_SAT_Pos)) 

/* -------- PDMC_IDR : (PDMC Offset: 0x18) ( /W 32) Interrupt Disable Register -------- */
#define PDMC_IDR_RXRDY_Pos                    _UINT32_(0)                                          /* (PDMC_IDR) Receive Ready Interrupt Disable Position */
#define PDMC_IDR_RXRDY_Msk                    (_UINT32_(0x1) << PDMC_IDR_RXRDY_Pos)                /* (PDMC_IDR) Receive Ready Interrupt Disable Mask */
#define PDMC_IDR_RXRDY(value)                 (PDMC_IDR_RXRDY_Msk & (_UINT32_(value) << PDMC_IDR_RXRDY_Pos)) /* Assigment of value for RXRDY in the PDMC_IDR register */
#define PDMC_IDR_RXEMPTY_Pos                  _UINT32_(1)                                          /* (PDMC_IDR) Receive FIFO Empty Interrupt Disable Position */
#define PDMC_IDR_RXEMPTY_Msk                  (_UINT32_(0x1) << PDMC_IDR_RXEMPTY_Pos)              /* (PDMC_IDR) Receive FIFO Empty Interrupt Disable Mask */
#define PDMC_IDR_RXEMPTY(value)               (PDMC_IDR_RXEMPTY_Msk & (_UINT32_(value) << PDMC_IDR_RXEMPTY_Pos)) /* Assigment of value for RXEMPTY in the PDMC_IDR register */
#define PDMC_IDR_RXFULL_Pos                   _UINT32_(2)                                          /* (PDMC_IDR) Receive FIFO Full Interrupt Disable Position */
#define PDMC_IDR_RXFULL_Msk                   (_UINT32_(0x1) << PDMC_IDR_RXFULL_Pos)               /* (PDMC_IDR) Receive FIFO Full Interrupt Disable Mask */
#define PDMC_IDR_RXFULL(value)                (PDMC_IDR_RXFULL_Msk & (_UINT32_(value) << PDMC_IDR_RXFULL_Pos)) /* Assigment of value for RXFULL in the PDMC_IDR register */
#define PDMC_IDR_RXCHUNK_Pos                  _UINT32_(3)                                          /* (PDMC_IDR) Receive FIFO Chunk Interrupt Disable Position */
#define PDMC_IDR_RXCHUNK_Msk                  (_UINT32_(0x1) << PDMC_IDR_RXCHUNK_Pos)              /* (PDMC_IDR) Receive FIFO Chunk Interrupt Disable Mask */
#define PDMC_IDR_RXCHUNK(value)               (PDMC_IDR_RXCHUNK_Msk & (_UINT32_(value) << PDMC_IDR_RXCHUNK_Pos)) /* Assigment of value for RXCHUNK in the PDMC_IDR register */
#define PDMC_IDR_RXUDR_Pos                    _UINT32_(4)                                          /* (PDMC_IDR) Receive Under Flow Interrupt Disable Position */
#define PDMC_IDR_RXUDR_Msk                    (_UINT32_(0x1) << PDMC_IDR_RXUDR_Pos)                /* (PDMC_IDR) Receive Under Flow Interrupt Disable Mask */
#define PDMC_IDR_RXUDR(value)                 (PDMC_IDR_RXUDR_Msk & (_UINT32_(value) << PDMC_IDR_RXUDR_Pos)) /* Assigment of value for RXUDR in the PDMC_IDR register */
#define PDMC_IDR_RXOVR_Pos                    _UINT32_(5)                                          /* (PDMC_IDR) Receive Over Flow Interrupt Disable Position */
#define PDMC_IDR_RXOVR_Msk                    (_UINT32_(0x1) << PDMC_IDR_RXOVR_Pos)                /* (PDMC_IDR) Receive Over Flow Interrupt Disable Mask */
#define PDMC_IDR_RXOVR(value)                 (PDMC_IDR_RXOVR_Msk & (_UINT32_(value) << PDMC_IDR_RXOVR_Pos)) /* Assigment of value for RXOVR in the PDMC_IDR register */
#define PDMC_IDR_SAT0_Pos                     _UINT32_(8)                                          /* (PDMC_IDR) Saturation Detection on Channel 0 Interrupt Disable Position */
#define PDMC_IDR_SAT0_Msk                     (_UINT32_(0x1) << PDMC_IDR_SAT0_Pos)                 /* (PDMC_IDR) Saturation Detection on Channel 0 Interrupt Disable Mask */
#define PDMC_IDR_SAT0(value)                  (PDMC_IDR_SAT0_Msk & (_UINT32_(value) << PDMC_IDR_SAT0_Pos)) /* Assigment of value for SAT0 in the PDMC_IDR register */
#define PDMC_IDR_SAT1_Pos                     _UINT32_(9)                                          /* (PDMC_IDR) Saturation Detection on Channel 1 Interrupt Disable Position */
#define PDMC_IDR_SAT1_Msk                     (_UINT32_(0x1) << PDMC_IDR_SAT1_Pos)                 /* (PDMC_IDR) Saturation Detection on Channel 1 Interrupt Disable Mask */
#define PDMC_IDR_SAT1(value)                  (PDMC_IDR_SAT1_Msk & (_UINT32_(value) << PDMC_IDR_SAT1_Pos)) /* Assigment of value for SAT1 in the PDMC_IDR register */
#define PDMC_IDR_SAT2_Pos                     _UINT32_(10)                                         /* (PDMC_IDR) Saturation Detection on Channel 2 Interrupt Disable Position */
#define PDMC_IDR_SAT2_Msk                     (_UINT32_(0x1) << PDMC_IDR_SAT2_Pos)                 /* (PDMC_IDR) Saturation Detection on Channel 2 Interrupt Disable Mask */
#define PDMC_IDR_SAT2(value)                  (PDMC_IDR_SAT2_Msk & (_UINT32_(value) << PDMC_IDR_SAT2_Pos)) /* Assigment of value for SAT2 in the PDMC_IDR register */
#define PDMC_IDR_SAT3_Pos                     _UINT32_(11)                                         /* (PDMC_IDR) Saturation Detection on Channel 3 Interrupt Disable Position */
#define PDMC_IDR_SAT3_Msk                     (_UINT32_(0x1) << PDMC_IDR_SAT3_Pos)                 /* (PDMC_IDR) Saturation Detection on Channel 3 Interrupt Disable Mask */
#define PDMC_IDR_SAT3(value)                  (PDMC_IDR_SAT3_Msk & (_UINT32_(value) << PDMC_IDR_SAT3_Pos)) /* Assigment of value for SAT3 in the PDMC_IDR register */
#define PDMC_IDR_WPERR_Pos                    _UINT32_(28)                                         /* (PDMC_IDR) Write Protect Event Interrupt Disable Position */
#define PDMC_IDR_WPERR_Msk                    (_UINT32_(0x1) << PDMC_IDR_WPERR_Pos)                /* (PDMC_IDR) Write Protect Event Interrupt Disable Mask */
#define PDMC_IDR_WPERR(value)                 (PDMC_IDR_WPERR_Msk & (_UINT32_(value) << PDMC_IDR_WPERR_Pos)) /* Assigment of value for WPERR in the PDMC_IDR register */
#define PDMC_IDR_Msk                          _UINT32_(0x10000F3F)                                 /* (PDMC_IDR) Register Mask  */

#define PDMC_IDR_SAT_Pos                      _UINT32_(8)                                          /* (PDMC_IDR Position) Saturation Detection on Channel x Interrupt Disable */
#define PDMC_IDR_SAT_Msk                      (_UINT32_(0xF) << PDMC_IDR_SAT_Pos)                  /* (PDMC_IDR Mask) SAT */
#define PDMC_IDR_SAT(value)                   (PDMC_IDR_SAT_Msk & (_UINT32_(value) << PDMC_IDR_SAT_Pos)) 

/* -------- PDMC_IMR : (PDMC Offset: 0x1C) ( R/ 32) Interrupt Mask Register -------- */
#define PDMC_IMR_RESETVALUE                   _UINT32_(0x00)                                       /*  (PDMC_IMR) Interrupt Mask Register  Reset Value */

#define PDMC_IMR_RXRDY_Pos                    _UINT32_(0)                                          /* (PDMC_IMR) Receive Ready Interrupt Mask Position */
#define PDMC_IMR_RXRDY_Msk                    (_UINT32_(0x1) << PDMC_IMR_RXRDY_Pos)                /* (PDMC_IMR) Receive Ready Interrupt Mask Mask */
#define PDMC_IMR_RXRDY(value)                 (PDMC_IMR_RXRDY_Msk & (_UINT32_(value) << PDMC_IMR_RXRDY_Pos)) /* Assigment of value for RXRDY in the PDMC_IMR register */
#define PDMC_IMR_RXEMPTY_Pos                  _UINT32_(1)                                          /* (PDMC_IMR) Receive FIFO Empty Interrupt Mask Position */
#define PDMC_IMR_RXEMPTY_Msk                  (_UINT32_(0x1) << PDMC_IMR_RXEMPTY_Pos)              /* (PDMC_IMR) Receive FIFO Empty Interrupt Mask Mask */
#define PDMC_IMR_RXEMPTY(value)               (PDMC_IMR_RXEMPTY_Msk & (_UINT32_(value) << PDMC_IMR_RXEMPTY_Pos)) /* Assigment of value for RXEMPTY in the PDMC_IMR register */
#define PDMC_IMR_RXFULL_Pos                   _UINT32_(2)                                          /* (PDMC_IMR) Receive FIFO Full Interrupt Mask Position */
#define PDMC_IMR_RXFULL_Msk                   (_UINT32_(0x1) << PDMC_IMR_RXFULL_Pos)               /* (PDMC_IMR) Receive FIFO Full Interrupt Mask Mask */
#define PDMC_IMR_RXFULL(value)                (PDMC_IMR_RXFULL_Msk & (_UINT32_(value) << PDMC_IMR_RXFULL_Pos)) /* Assigment of value for RXFULL in the PDMC_IMR register */
#define PDMC_IMR_RXCHUNK_Pos                  _UINT32_(3)                                          /* (PDMC_IMR) Receive FIFO Chunk Interrupt Mask Position */
#define PDMC_IMR_RXCHUNK_Msk                  (_UINT32_(0x1) << PDMC_IMR_RXCHUNK_Pos)              /* (PDMC_IMR) Receive FIFO Chunk Interrupt Mask Mask */
#define PDMC_IMR_RXCHUNK(value)               (PDMC_IMR_RXCHUNK_Msk & (_UINT32_(value) << PDMC_IMR_RXCHUNK_Pos)) /* Assigment of value for RXCHUNK in the PDMC_IMR register */
#define PDMC_IMR_RXUDR_Pos                    _UINT32_(4)                                          /* (PDMC_IMR) Receive Under Flow Interrupt Mask Position */
#define PDMC_IMR_RXUDR_Msk                    (_UINT32_(0x1) << PDMC_IMR_RXUDR_Pos)                /* (PDMC_IMR) Receive Under Flow Interrupt Mask Mask */
#define PDMC_IMR_RXUDR(value)                 (PDMC_IMR_RXUDR_Msk & (_UINT32_(value) << PDMC_IMR_RXUDR_Pos)) /* Assigment of value for RXUDR in the PDMC_IMR register */
#define PDMC_IMR_RXOVR_Pos                    _UINT32_(5)                                          /* (PDMC_IMR) Receive Over Flow Interrupt Mask Position */
#define PDMC_IMR_RXOVR_Msk                    (_UINT32_(0x1) << PDMC_IMR_RXOVR_Pos)                /* (PDMC_IMR) Receive Over Flow Interrupt Mask Mask */
#define PDMC_IMR_RXOVR(value)                 (PDMC_IMR_RXOVR_Msk & (_UINT32_(value) << PDMC_IMR_RXOVR_Pos)) /* Assigment of value for RXOVR in the PDMC_IMR register */
#define PDMC_IMR_SAT0_Pos                     _UINT32_(8)                                          /* (PDMC_IMR) Saturation Detection on Channel 0 Interrupt Mask Position */
#define PDMC_IMR_SAT0_Msk                     (_UINT32_(0x1) << PDMC_IMR_SAT0_Pos)                 /* (PDMC_IMR) Saturation Detection on Channel 0 Interrupt Mask Mask */
#define PDMC_IMR_SAT0(value)                  (PDMC_IMR_SAT0_Msk & (_UINT32_(value) << PDMC_IMR_SAT0_Pos)) /* Assigment of value for SAT0 in the PDMC_IMR register */
#define PDMC_IMR_SAT1_Pos                     _UINT32_(9)                                          /* (PDMC_IMR) Saturation Detection on Channel 1 Interrupt Mask Position */
#define PDMC_IMR_SAT1_Msk                     (_UINT32_(0x1) << PDMC_IMR_SAT1_Pos)                 /* (PDMC_IMR) Saturation Detection on Channel 1 Interrupt Mask Mask */
#define PDMC_IMR_SAT1(value)                  (PDMC_IMR_SAT1_Msk & (_UINT32_(value) << PDMC_IMR_SAT1_Pos)) /* Assigment of value for SAT1 in the PDMC_IMR register */
#define PDMC_IMR_SAT2_Pos                     _UINT32_(10)                                         /* (PDMC_IMR) Saturation Detection on Channel 2 Interrupt Mask Position */
#define PDMC_IMR_SAT2_Msk                     (_UINT32_(0x1) << PDMC_IMR_SAT2_Pos)                 /* (PDMC_IMR) Saturation Detection on Channel 2 Interrupt Mask Mask */
#define PDMC_IMR_SAT2(value)                  (PDMC_IMR_SAT2_Msk & (_UINT32_(value) << PDMC_IMR_SAT2_Pos)) /* Assigment of value for SAT2 in the PDMC_IMR register */
#define PDMC_IMR_SAT3_Pos                     _UINT32_(11)                                         /* (PDMC_IMR) Saturation Detection on Channel 3 Interrupt Mask Position */
#define PDMC_IMR_SAT3_Msk                     (_UINT32_(0x1) << PDMC_IMR_SAT3_Pos)                 /* (PDMC_IMR) Saturation Detection on Channel 3 Interrupt Mask Mask */
#define PDMC_IMR_SAT3(value)                  (PDMC_IMR_SAT3_Msk & (_UINT32_(value) << PDMC_IMR_SAT3_Pos)) /* Assigment of value for SAT3 in the PDMC_IMR register */
#define PDMC_IMR_WPERR_Pos                    _UINT32_(28)                                         /* (PDMC_IMR) Write Protect Event Interrupt Mask Position */
#define PDMC_IMR_WPERR_Msk                    (_UINT32_(0x1) << PDMC_IMR_WPERR_Pos)                /* (PDMC_IMR) Write Protect Event Interrupt Mask Mask */
#define PDMC_IMR_WPERR(value)                 (PDMC_IMR_WPERR_Msk & (_UINT32_(value) << PDMC_IMR_WPERR_Pos)) /* Assigment of value for WPERR in the PDMC_IMR register */
#define PDMC_IMR_Msk                          _UINT32_(0x10000F3F)                                 /* (PDMC_IMR) Register Mask  */

#define PDMC_IMR_SAT_Pos                      _UINT32_(8)                                          /* (PDMC_IMR Position) Saturation Detection on Channel x Interrupt Mask */
#define PDMC_IMR_SAT_Msk                      (_UINT32_(0xF) << PDMC_IMR_SAT_Pos)                  /* (PDMC_IMR Mask) SAT */
#define PDMC_IMR_SAT(value)                   (PDMC_IMR_SAT_Msk & (_UINT32_(value) << PDMC_IMR_SAT_Pos)) 

/* -------- PDMC_ISR : (PDMC Offset: 0x20) ( R/ 32) Interrupt Status Register -------- */
#define PDMC_ISR_RESETVALUE                   _UINT32_(0x02)                                       /*  (PDMC_ISR) Interrupt Status Register  Reset Value */

#define PDMC_ISR_RXRDY_Pos                    _UINT32_(0)                                          /* (PDMC_ISR) Receive Ready Interrupt Status Position */
#define PDMC_ISR_RXRDY_Msk                    (_UINT32_(0x1) << PDMC_ISR_RXRDY_Pos)                /* (PDMC_ISR) Receive Ready Interrupt Status Mask */
#define PDMC_ISR_RXRDY(value)                 (PDMC_ISR_RXRDY_Msk & (_UINT32_(value) << PDMC_ISR_RXRDY_Pos)) /* Assigment of value for RXRDY in the PDMC_ISR register */
#define   PDMC_ISR_RXRDY_0_Val                _UINT32_(0x0)                                        /* (PDMC_ISR) There is no data in the RX FIFO.  */
#define   PDMC_ISR_RXRDY_1_Val                _UINT32_(0x1)                                        /* (PDMC_ISR) At least one data is in the RX FIFO and can be read through PDMC_RHR.  */
#define PDMC_ISR_RXRDY_0                      (PDMC_ISR_RXRDY_0_Val << PDMC_ISR_RXRDY_Pos)         /* (PDMC_ISR) There is no data in the RX FIFO. Position  */
#define PDMC_ISR_RXRDY_1                      (PDMC_ISR_RXRDY_1_Val << PDMC_ISR_RXRDY_Pos)         /* (PDMC_ISR) At least one data is in the RX FIFO and can be read through PDMC_RHR. Position  */
#define PDMC_ISR_RXEMPTY_Pos                  _UINT32_(1)                                          /* (PDMC_ISR) Receive FIFO Empty Interrupt Status Position */
#define PDMC_ISR_RXEMPTY_Msk                  (_UINT32_(0x1) << PDMC_ISR_RXEMPTY_Pos)              /* (PDMC_ISR) Receive FIFO Empty Interrupt Status Mask */
#define PDMC_ISR_RXEMPTY(value)               (PDMC_ISR_RXEMPTY_Msk & (_UINT32_(value) << PDMC_ISR_RXEMPTY_Pos)) /* Assigment of value for RXEMPTY in the PDMC_ISR register */
#define   PDMC_ISR_RXEMPTY_0_Val              _UINT32_(0x0)                                        /* (PDMC_ISR) At least one data is in the RX FIFO.  */
#define   PDMC_ISR_RXEMPTY_1_Val              _UINT32_(0x1)                                        /* (PDMC_ISR) The RX FIFO is empty.  */
#define PDMC_ISR_RXEMPTY_0                    (PDMC_ISR_RXEMPTY_0_Val << PDMC_ISR_RXEMPTY_Pos)     /* (PDMC_ISR) At least one data is in the RX FIFO. Position  */
#define PDMC_ISR_RXEMPTY_1                    (PDMC_ISR_RXEMPTY_1_Val << PDMC_ISR_RXEMPTY_Pos)     /* (PDMC_ISR) The RX FIFO is empty. Position  */
#define PDMC_ISR_RXFULL_Pos                   _UINT32_(2)                                          /* (PDMC_ISR) Receive FIFO Full Interrupt Status Position */
#define PDMC_ISR_RXFULL_Msk                   (_UINT32_(0x1) << PDMC_ISR_RXFULL_Pos)               /* (PDMC_ISR) Receive FIFO Full Interrupt Status Mask */
#define PDMC_ISR_RXFULL(value)                (PDMC_ISR_RXFULL_Msk & (_UINT32_(value) << PDMC_ISR_RXFULL_Pos)) /* Assigment of value for RXFULL in the PDMC_ISR register */
#define   PDMC_ISR_RXFULL_0_Val               _UINT32_(0x0)                                        /* (PDMC_ISR) The RX FIFO is not full and can still receive data.  */
#define   PDMC_ISR_RXFULL_1_Val               _UINT32_(0x1)                                        /* (PDMC_ISR) The RX FIFO is full and cannot receive more data.  */
#define PDMC_ISR_RXFULL_0                     (PDMC_ISR_RXFULL_0_Val << PDMC_ISR_RXFULL_Pos)       /* (PDMC_ISR) The RX FIFO is not full and can still receive data. Position  */
#define PDMC_ISR_RXFULL_1                     (PDMC_ISR_RXFULL_1_Val << PDMC_ISR_RXFULL_Pos)       /* (PDMC_ISR) The RX FIFO is full and cannot receive more data. Position  */
#define PDMC_ISR_RXCHUNK_Pos                  _UINT32_(3)                                          /* (PDMC_ISR) Receive FIFO Chunk Interrupt Status Position */
#define PDMC_ISR_RXCHUNK_Msk                  (_UINT32_(0x1) << PDMC_ISR_RXCHUNK_Pos)              /* (PDMC_ISR) Receive FIFO Chunk Interrupt Status Mask */
#define PDMC_ISR_RXCHUNK(value)               (PDMC_ISR_RXCHUNK_Msk & (_UINT32_(value) << PDMC_ISR_RXCHUNK_Pos)) /* Assigment of value for RXCHUNK in the PDMC_ISR register */
#define   PDMC_ISR_RXCHUNK_0_Val              _UINT32_(0x0)                                        /* (PDMC_ISR) There is less than PDMC_MR.CHUNK data in the RX FIFO.  */
#define   PDMC_ISR_RXCHUNK_1_Val              _UINT32_(0x1)                                        /* (PDMC_ISR) At least PDMC_MR.CHUNK data can be read in the RX FIFO.  */
#define PDMC_ISR_RXCHUNK_0                    (PDMC_ISR_RXCHUNK_0_Val << PDMC_ISR_RXCHUNK_Pos)     /* (PDMC_ISR) There is less than PDMC_MR.CHUNK data in the RX FIFO. Position  */
#define PDMC_ISR_RXCHUNK_1                    (PDMC_ISR_RXCHUNK_1_Val << PDMC_ISR_RXCHUNK_Pos)     /* (PDMC_ISR) At least PDMC_MR.CHUNK data can be read in the RX FIFO. Position  */
#define PDMC_ISR_RXUDR_Pos                    _UINT32_(4)                                          /* (PDMC_ISR) Receive Under Flow Interrupt Status (cleared on read) Position */
#define PDMC_ISR_RXUDR_Msk                    (_UINT32_(0x1) << PDMC_ISR_RXUDR_Pos)                /* (PDMC_ISR) Receive Under Flow Interrupt Status (cleared on read) Mask */
#define PDMC_ISR_RXUDR(value)                 (PDMC_ISR_RXUDR_Msk & (_UINT32_(value) << PDMC_ISR_RXUDR_Pos)) /* Assigment of value for RXUDR in the PDMC_ISR register */
#define   PDMC_ISR_RXUDR_0_Val                _UINT32_(0x0)                                        /* (PDMC_ISR) No underflow event occurred since the last read of PDMC_ISR.  */
#define   PDMC_ISR_RXUDR_1_Val                _UINT32_(0x1)                                        /* (PDMC_ISR) At least one underflow event occurred since the last read of PDMC_ISR.  */
#define PDMC_ISR_RXUDR_0                      (PDMC_ISR_RXUDR_0_Val << PDMC_ISR_RXUDR_Pos)         /* (PDMC_ISR) No underflow event occurred since the last read of PDMC_ISR. Position  */
#define PDMC_ISR_RXUDR_1                      (PDMC_ISR_RXUDR_1_Val << PDMC_ISR_RXUDR_Pos)         /* (PDMC_ISR) At least one underflow event occurred since the last read of PDMC_ISR. Position  */
#define PDMC_ISR_RXOVR_Pos                    _UINT32_(5)                                          /* (PDMC_ISR) Receive Over Flow Interrupt Status (cleared on read) Position */
#define PDMC_ISR_RXOVR_Msk                    (_UINT32_(0x1) << PDMC_ISR_RXOVR_Pos)                /* (PDMC_ISR) Receive Over Flow Interrupt Status (cleared on read) Mask */
#define PDMC_ISR_RXOVR(value)                 (PDMC_ISR_RXOVR_Msk & (_UINT32_(value) << PDMC_ISR_RXOVR_Pos)) /* Assigment of value for RXOVR in the PDMC_ISR register */
#define   PDMC_ISR_RXOVR_0_Val                _UINT32_(0x0)                                        /* (PDMC_ISR) No overflow event occurred since the last read of PDMC_ISR.  */
#define   PDMC_ISR_RXOVR_1_Val                _UINT32_(0x1)                                        /* (PDMC_ISR) At least one overflow event occurred since the last read of PDMC_ISR.  */
#define PDMC_ISR_RXOVR_0                      (PDMC_ISR_RXOVR_0_Val << PDMC_ISR_RXOVR_Pos)         /* (PDMC_ISR) No overflow event occurred since the last read of PDMC_ISR. Position  */
#define PDMC_ISR_RXOVR_1                      (PDMC_ISR_RXOVR_1_Val << PDMC_ISR_RXOVR_Pos)         /* (PDMC_ISR) At least one overflow event occurred since the last read of PDMC_ISR. Position  */
#define PDMC_ISR_SAT0_Pos                     _UINT32_(8)                                          /* (PDMC_ISR) Saturation Detection on Channel 0 Interrupt Status Position */
#define PDMC_ISR_SAT0_Msk                     (_UINT32_(0x1) << PDMC_ISR_SAT0_Pos)                 /* (PDMC_ISR) Saturation Detection on Channel 0 Interrupt Status Mask */
#define PDMC_ISR_SAT0(value)                  (PDMC_ISR_SAT0_Msk & (_UINT32_(value) << PDMC_ISR_SAT0_Pos)) /* Assigment of value for SAT0 in the PDMC_ISR register */
#define   PDMC_ISR_SAT0_0_Val                 _UINT32_(0x0)                                        /* (PDMC_ISR) No saturation event has occurred on channel x since the last read of PDMC_ISR.  */
#define   PDMC_ISR_SAT0_1_Val                 _UINT32_(0x1)                                        /* (PDMC_ISR) One or more saturation event has occurred on channel x since the last read of PDMC_ISR.  */
#define PDMC_ISR_SAT0_0                       (PDMC_ISR_SAT0_0_Val << PDMC_ISR_SAT0_Pos)           /* (PDMC_ISR) No saturation event has occurred on channel x since the last read of PDMC_ISR. Position  */
#define PDMC_ISR_SAT0_1                       (PDMC_ISR_SAT0_1_Val << PDMC_ISR_SAT0_Pos)           /* (PDMC_ISR) One or more saturation event has occurred on channel x since the last read of PDMC_ISR. Position  */
#define PDMC_ISR_SAT1_Pos                     _UINT32_(9)                                          /* (PDMC_ISR) Saturation Detection on Channel 1 Interrupt Status Position */
#define PDMC_ISR_SAT1_Msk                     (_UINT32_(0x1) << PDMC_ISR_SAT1_Pos)                 /* (PDMC_ISR) Saturation Detection on Channel 1 Interrupt Status Mask */
#define PDMC_ISR_SAT1(value)                  (PDMC_ISR_SAT1_Msk & (_UINT32_(value) << PDMC_ISR_SAT1_Pos)) /* Assigment of value for SAT1 in the PDMC_ISR register */
#define   PDMC_ISR_SAT1_0_Val                 _UINT32_(0x0)                                        /* (PDMC_ISR) No saturation event has occurred on channel x since the last read of PDMC_ISR.  */
#define   PDMC_ISR_SAT1_1_Val                 _UINT32_(0x1)                                        /* (PDMC_ISR) One or more saturation event has occurred on channel x since the last read of PDMC_ISR.  */
#define PDMC_ISR_SAT1_0                       (PDMC_ISR_SAT1_0_Val << PDMC_ISR_SAT1_Pos)           /* (PDMC_ISR) No saturation event has occurred on channel x since the last read of PDMC_ISR. Position  */
#define PDMC_ISR_SAT1_1                       (PDMC_ISR_SAT1_1_Val << PDMC_ISR_SAT1_Pos)           /* (PDMC_ISR) One or more saturation event has occurred on channel x since the last read of PDMC_ISR. Position  */
#define PDMC_ISR_SAT2_Pos                     _UINT32_(10)                                         /* (PDMC_ISR) Saturation Detection on Channel 2 Interrupt Status Position */
#define PDMC_ISR_SAT2_Msk                     (_UINT32_(0x1) << PDMC_ISR_SAT2_Pos)                 /* (PDMC_ISR) Saturation Detection on Channel 2 Interrupt Status Mask */
#define PDMC_ISR_SAT2(value)                  (PDMC_ISR_SAT2_Msk & (_UINT32_(value) << PDMC_ISR_SAT2_Pos)) /* Assigment of value for SAT2 in the PDMC_ISR register */
#define   PDMC_ISR_SAT2_0_Val                 _UINT32_(0x0)                                        /* (PDMC_ISR) No saturation event has occurred on channel x since the last read of PDMC_ISR.  */
#define   PDMC_ISR_SAT2_1_Val                 _UINT32_(0x1)                                        /* (PDMC_ISR) One or more saturation event has occurred on channel x since the last read of PDMC_ISR.  */
#define PDMC_ISR_SAT2_0                       (PDMC_ISR_SAT2_0_Val << PDMC_ISR_SAT2_Pos)           /* (PDMC_ISR) No saturation event has occurred on channel x since the last read of PDMC_ISR. Position  */
#define PDMC_ISR_SAT2_1                       (PDMC_ISR_SAT2_1_Val << PDMC_ISR_SAT2_Pos)           /* (PDMC_ISR) One or more saturation event has occurred on channel x since the last read of PDMC_ISR. Position  */
#define PDMC_ISR_SAT3_Pos                     _UINT32_(11)                                         /* (PDMC_ISR) Saturation Detection on Channel 3 Interrupt Status Position */
#define PDMC_ISR_SAT3_Msk                     (_UINT32_(0x1) << PDMC_ISR_SAT3_Pos)                 /* (PDMC_ISR) Saturation Detection on Channel 3 Interrupt Status Mask */
#define PDMC_ISR_SAT3(value)                  (PDMC_ISR_SAT3_Msk & (_UINT32_(value) << PDMC_ISR_SAT3_Pos)) /* Assigment of value for SAT3 in the PDMC_ISR register */
#define   PDMC_ISR_SAT3_0_Val                 _UINT32_(0x0)                                        /* (PDMC_ISR) No saturation event has occurred on channel x since the last read of PDMC_ISR.  */
#define   PDMC_ISR_SAT3_1_Val                 _UINT32_(0x1)                                        /* (PDMC_ISR) One or more saturation event has occurred on channel x since the last read of PDMC_ISR.  */
#define PDMC_ISR_SAT3_0                       (PDMC_ISR_SAT3_0_Val << PDMC_ISR_SAT3_Pos)           /* (PDMC_ISR) No saturation event has occurred on channel x since the last read of PDMC_ISR. Position  */
#define PDMC_ISR_SAT3_1                       (PDMC_ISR_SAT3_1_Val << PDMC_ISR_SAT3_Pos)           /* (PDMC_ISR) One or more saturation event has occurred on channel x since the last read of PDMC_ISR. Position  */
#define PDMC_ISR_WPERR_Pos                    _UINT32_(28)                                         /* (PDMC_ISR) Write Protect Event Interrupt Status (cleared on read) Position */
#define PDMC_ISR_WPERR_Msk                    (_UINT32_(0x1) << PDMC_ISR_WPERR_Pos)                /* (PDMC_ISR) Write Protect Event Interrupt Status (cleared on read) Mask */
#define PDMC_ISR_WPERR(value)                 (PDMC_ISR_WPERR_Msk & (_UINT32_(value) << PDMC_ISR_WPERR_Pos)) /* Assigment of value for WPERR in the PDMC_ISR register */
#define   PDMC_ISR_WPERR_0_Val                _UINT32_(0x0)                                        /* (PDMC_ISR) No write protect event has occurred since the last read of PDMC_ISR.  */
#define   PDMC_ISR_WPERR_1_Val                _UINT32_(0x1)                                        /* (PDMC_ISR) One or more write protect event occurred since the last read of PDMC_ISR. For details on the event, see PDMC Write Protection Status Register.  */
#define PDMC_ISR_WPERR_0                      (PDMC_ISR_WPERR_0_Val << PDMC_ISR_WPERR_Pos)         /* (PDMC_ISR) No write protect event has occurred since the last read of PDMC_ISR. Position  */
#define PDMC_ISR_WPERR_1                      (PDMC_ISR_WPERR_1_Val << PDMC_ISR_WPERR_Pos)         /* (PDMC_ISR) One or more write protect event occurred since the last read of PDMC_ISR. For details on the event, see PDMC Write Protection Status Register. Position  */
#define PDMC_ISR_Msk                          _UINT32_(0x10000F3F)                                 /* (PDMC_ISR) Register Mask  */

#define PDMC_ISR_SAT_Pos                      _UINT32_(8)                                          /* (PDMC_ISR Position) Saturation Detection on Channel x Interrupt Status */
#define PDMC_ISR_SAT_Msk                      (_UINT32_(0xF) << PDMC_ISR_SAT_Pos)                  /* (PDMC_ISR Mask) SAT */
#define PDMC_ISR_SAT(value)                   (PDMC_ISR_SAT_Msk & (_UINT32_(value) << PDMC_ISR_SAT_Pos)) 

/* -------- PDMC_WPMR : (PDMC Offset: 0x2C) (R/W 32) Write Protection Mode Register -------- */
#define PDMC_WPMR_RESETVALUE                  _UINT32_(0x00)                                       /*  (PDMC_WPMR) Write Protection Mode Register  Reset Value */

#define PDMC_WPMR_WPEN_Pos                    _UINT32_(0)                                          /* (PDMC_WPMR) Write Protection Enable for Configuration Registers Position */
#define PDMC_WPMR_WPEN_Msk                    (_UINT32_(0x1) << PDMC_WPMR_WPEN_Pos)                /* (PDMC_WPMR) Write Protection Enable for Configuration Registers Mask */
#define PDMC_WPMR_WPEN(value)                 (PDMC_WPMR_WPEN_Msk & (_UINT32_(value) << PDMC_WPMR_WPEN_Pos)) /* Assigment of value for WPEN in the PDMC_WPMR register */
#define   PDMC_WPMR_WPEN_0_Val                _UINT32_(0x0)                                        /* (PDMC_WPMR) Disables write protection if WPKEY corresponds to 0x50444D ("PDM" in ASCII).  */
#define   PDMC_WPMR_WPEN_1_Val                _UINT32_(0x1)                                        /* (PDMC_WPMR) Enables write protection if WPKEY corresponds to 0x50444D ("PDM" in ASCII).  */
#define PDMC_WPMR_WPEN_0                      (PDMC_WPMR_WPEN_0_Val << PDMC_WPMR_WPEN_Pos)         /* (PDMC_WPMR) Disables write protection if WPKEY corresponds to 0x50444D ("PDM" in ASCII). Position  */
#define PDMC_WPMR_WPEN_1                      (PDMC_WPMR_WPEN_1_Val << PDMC_WPMR_WPEN_Pos)         /* (PDMC_WPMR) Enables write protection if WPKEY corresponds to 0x50444D ("PDM" in ASCII). Position  */
#define PDMC_WPMR_WPITEN_Pos                  _UINT32_(1)                                          /* (PDMC_WPMR) Write Protection Enable for Interrupt Registers Position */
#define PDMC_WPMR_WPITEN_Msk                  (_UINT32_(0x1) << PDMC_WPMR_WPITEN_Pos)              /* (PDMC_WPMR) Write Protection Enable for Interrupt Registers Mask */
#define PDMC_WPMR_WPITEN(value)               (PDMC_WPMR_WPITEN_Msk & (_UINT32_(value) << PDMC_WPMR_WPITEN_Pos)) /* Assigment of value for WPITEN in the PDMC_WPMR register */
#define   PDMC_WPMR_WPITEN_0_Val              _UINT32_(0x0)                                        /* (PDMC_WPMR) Disables the write protection on interrupt registers if WPKEY corresponds to 0x50444D ("PDM" in ASCII).  */
#define   PDMC_WPMR_WPITEN_1_Val              _UINT32_(0x1)                                        /* (PDMC_WPMR) Enables the write protection on interrupt registers if WPKEY corresponds to 0x50444D ("PDM" in ASCII).  */
#define PDMC_WPMR_WPITEN_0                    (PDMC_WPMR_WPITEN_0_Val << PDMC_WPMR_WPITEN_Pos)     /* (PDMC_WPMR) Disables the write protection on interrupt registers if WPKEY corresponds to 0x50444D ("PDM" in ASCII). Position  */
#define PDMC_WPMR_WPITEN_1                    (PDMC_WPMR_WPITEN_1_Val << PDMC_WPMR_WPITEN_Pos)     /* (PDMC_WPMR) Enables the write protection on interrupt registers if WPKEY corresponds to 0x50444D ("PDM" in ASCII). Position  */
#define PDMC_WPMR_WPCREN_Pos                  _UINT32_(2)                                          /* (PDMC_WPMR) Write Protection Enable for Control Registers Position */
#define PDMC_WPMR_WPCREN_Msk                  (_UINT32_(0x1) << PDMC_WPMR_WPCREN_Pos)              /* (PDMC_WPMR) Write Protection Enable for Control Registers Mask */
#define PDMC_WPMR_WPCREN(value)               (PDMC_WPMR_WPCREN_Msk & (_UINT32_(value) << PDMC_WPMR_WPCREN_Pos)) /* Assigment of value for WPCREN in the PDMC_WPMR register */
#define   PDMC_WPMR_WPCREN_0_Val              _UINT32_(0x0)                                        /* (PDMC_WPMR) Disables the write protection on control registers if WPKEY corresponds to 0x50444D ("PDM" in ASCII).  */
#define   PDMC_WPMR_WPCREN_1_Val              _UINT32_(0x1)                                        /* (PDMC_WPMR) Enables the write protection on control registers if WPKEY corresponds to 0x50444D ("PDM" in ASCII).  */
#define PDMC_WPMR_WPCREN_0                    (PDMC_WPMR_WPCREN_0_Val << PDMC_WPMR_WPCREN_Pos)     /* (PDMC_WPMR) Disables the write protection on control registers if WPKEY corresponds to 0x50444D ("PDM" in ASCII). Position  */
#define PDMC_WPMR_WPCREN_1                    (PDMC_WPMR_WPCREN_1_Val << PDMC_WPMR_WPCREN_Pos)     /* (PDMC_WPMR) Enables the write protection on control registers if WPKEY corresponds to 0x50444D ("PDM" in ASCII). Position  */
#define PDMC_WPMR_FIRSTE_Pos                  _UINT32_(4)                                          /* (PDMC_WPMR) First Error Report Enable Position */
#define PDMC_WPMR_FIRSTE_Msk                  (_UINT32_(0x1) << PDMC_WPMR_FIRSTE_Pos)              /* (PDMC_WPMR) First Error Report Enable Mask */
#define PDMC_WPMR_FIRSTE(value)               (PDMC_WPMR_FIRSTE_Msk & (_UINT32_(value) << PDMC_WPMR_FIRSTE_Pos)) /* Assigment of value for FIRSTE in the PDMC_WPMR register */
#define   PDMC_WPMR_FIRSTE_0_Val              _UINT32_(0x0)                                        /* (PDMC_WPMR) The last write protection violation source is reported in PDMC_WPSR.WPSRC and the last software control error type is reported in PDMC_WPSR.SWETYP. The PDMC_ISR.WPERR flag is set at the first error occurrence within a series.  */
#define   PDMC_WPMR_FIRSTE_1_Val              _UINT32_(0x1)                                        /* (PDMC_WPMR) Only the first write protection violation source is reported in PDMC_WPSR.WPSRC and only the first software control error type is reported in PDMC_WPSR.SWETYP. The PDMC_ISR.WPERR flag is set at the first error occurrence within a series.  */
#define PDMC_WPMR_FIRSTE_0                    (PDMC_WPMR_FIRSTE_0_Val << PDMC_WPMR_FIRSTE_Pos)     /* (PDMC_WPMR) The last write protection violation source is reported in PDMC_WPSR.WPSRC and the last software control error type is reported in PDMC_WPSR.SWETYP. The PDMC_ISR.WPERR flag is set at the first error occurrence within a series. Position  */
#define PDMC_WPMR_FIRSTE_1                    (PDMC_WPMR_FIRSTE_1_Val << PDMC_WPMR_FIRSTE_Pos)     /* (PDMC_WPMR) Only the first write protection violation source is reported in PDMC_WPSR.WPSRC and only the first software control error type is reported in PDMC_WPSR.SWETYP. The PDMC_ISR.WPERR flag is set at the first error occurrence within a series. Position  */
#define PDMC_WPMR_WPKEY_Pos                   _UINT32_(8)                                          /* (PDMC_WPMR) Write Protection Key Position */
#define PDMC_WPMR_WPKEY_Msk                   (_UINT32_(0xFFFFFF) << PDMC_WPMR_WPKEY_Pos)          /* (PDMC_WPMR) Write Protection Key Mask */
#define PDMC_WPMR_WPKEY(value)                (PDMC_WPMR_WPKEY_Msk & (_UINT32_(value) << PDMC_WPMR_WPKEY_Pos)) /* Assigment of value for WPKEY in the PDMC_WPMR register */
#define   PDMC_WPMR_WPKEY_PASSWD_Val          _UINT32_(0x50444D)                                   /* (PDMC_WPMR) Writing any other value in this field aborts the write operation of the WPEN and WPITEN bits. Always read at 0.  */
#define PDMC_WPMR_WPKEY_PASSWD                (PDMC_WPMR_WPKEY_PASSWD_Val << PDMC_WPMR_WPKEY_Pos)  /* (PDMC_WPMR) Writing any other value in this field aborts the write operation of the WPEN and WPITEN bits. Always read at 0. Position  */
#define PDMC_WPMR_Msk                         _UINT32_(0xFFFFFF17)                                 /* (PDMC_WPMR) Register Mask  */


/* -------- PDMC_WPSR : (PDMC Offset: 0x30) ( R/ 32) Write Protection Status Register -------- */
#define PDMC_WPSR_RESETVALUE                  _UINT32_(0x00)                                       /*  (PDMC_WPSR) Write Protection Status Register  Reset Value */

#define PDMC_WPSR_WPVS_Pos                    _UINT32_(0)                                          /* (PDMC_WPSR) Write Protection Violation Status Position */
#define PDMC_WPSR_WPVS_Msk                    (_UINT32_(0x1) << PDMC_WPSR_WPVS_Pos)                /* (PDMC_WPSR) Write Protection Violation Status Mask */
#define PDMC_WPSR_WPVS(value)                 (PDMC_WPSR_WPVS_Msk & (_UINT32_(value) << PDMC_WPSR_WPVS_Pos)) /* Assigment of value for WPVS in the PDMC_WPSR register */
#define   PDMC_WPSR_WPVS_0_Val                _UINT32_(0x0)                                        /* (PDMC_WPSR) No write protection violation has occurred since the last read of PDMC_WPSR.  */
#define   PDMC_WPSR_WPVS_1_Val                _UINT32_(0x1)                                        /* (PDMC_WPSR) A write protection violation has occurred since the last read of PDMC_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPSRC.  */
#define PDMC_WPSR_WPVS_0                      (PDMC_WPSR_WPVS_0_Val << PDMC_WPSR_WPVS_Pos)         /* (PDMC_WPSR) No write protection violation has occurred since the last read of PDMC_WPSR. Position  */
#define PDMC_WPSR_WPVS_1                      (PDMC_WPSR_WPVS_1_Val << PDMC_WPSR_WPVS_Pos)         /* (PDMC_WPSR) A write protection violation has occurred since the last read of PDMC_WPSR. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPSRC. Position  */
#define PDMC_WPSR_SEQE_Pos                    _UINT32_(2)                                          /* (PDMC_WPSR) Internal Sequencer Error Position */
#define PDMC_WPSR_SEQE_Msk                    (_UINT32_(0x1) << PDMC_WPSR_SEQE_Pos)                /* (PDMC_WPSR) Internal Sequencer Error Mask */
#define PDMC_WPSR_SEQE(value)                 (PDMC_WPSR_SEQE_Msk & (_UINT32_(value) << PDMC_WPSR_SEQE_Pos)) /* Assigment of value for SEQE in the PDMC_WPSR register */
#define   PDMC_WPSR_SEQE_0_Val                _UINT32_(0x0)                                        /* (PDMC_WPSR) No peripheral internal sequencer error has occurred since the last read of PDMC_WPSR.  */
#define   PDMC_WPSR_SEQE_1_Val                _UINT32_(0x1)                                        /* (PDMC_WPSR) A peripheral internal sequencer error has occurred since the last read of PDMC_WPSR.  */
#define PDMC_WPSR_SEQE_0                      (PDMC_WPSR_SEQE_0_Val << PDMC_WPSR_SEQE_Pos)         /* (PDMC_WPSR) No peripheral internal sequencer error has occurred since the last read of PDMC_WPSR. Position  */
#define PDMC_WPSR_SEQE_1                      (PDMC_WPSR_SEQE_1_Val << PDMC_WPSR_SEQE_Pos)         /* (PDMC_WPSR) A peripheral internal sequencer error has occurred since the last read of PDMC_WPSR. Position  */
#define PDMC_WPSR_SWE_Pos                     _UINT32_(3)                                          /* (PDMC_WPSR) Software Control Error (cleared on read) Position */
#define PDMC_WPSR_SWE_Msk                     (_UINT32_(0x1) << PDMC_WPSR_SWE_Pos)                 /* (PDMC_WPSR) Software Control Error (cleared on read) Mask */
#define PDMC_WPSR_SWE(value)                  (PDMC_WPSR_SWE_Msk & (_UINT32_(value) << PDMC_WPSR_SWE_Pos)) /* Assigment of value for SWE in the PDMC_WPSR register */
#define   PDMC_WPSR_SWE_0_Val                 _UINT32_(0x0)                                        /* (PDMC_WPSR) No software error has occurred since the last read of PDMC_WPSR.  */
#define   PDMC_WPSR_SWE_1_Val                 _UINT32_(0x1)                                        /* (PDMC_WPSR) A software error has occurred since the last read of PDMC_WPSR. SWETYP details the type of software error; the associated incorrect software access is reported in WPSRC (if WPVS=0).  */
#define PDMC_WPSR_SWE_0                       (PDMC_WPSR_SWE_0_Val << PDMC_WPSR_SWE_Pos)           /* (PDMC_WPSR) No software error has occurred since the last read of PDMC_WPSR. Position  */
#define PDMC_WPSR_SWE_1                       (PDMC_WPSR_SWE_1_Val << PDMC_WPSR_SWE_Pos)           /* (PDMC_WPSR) A software error has occurred since the last read of PDMC_WPSR. SWETYP details the type of software error; the associated incorrect software access is reported in WPSRC (if WPVS=0). Position  */
#define PDMC_WPSR_NCE_Pos                     _UINT32_(4)                                          /* (PDMC_WPSR) Non Corrected Error (cleared by reconfiguring the faulty registers or by clearing the error via PDMC_FIR) Position */
#define PDMC_WPSR_NCE_Msk                     (_UINT32_(0x3) << PDMC_WPSR_NCE_Pos)                 /* (PDMC_WPSR) Non Corrected Error (cleared by reconfiguring the faulty registers or by clearing the error via PDMC_FIR) Mask */
#define PDMC_WPSR_NCE(value)                  (PDMC_WPSR_NCE_Msk & (_UINT32_(value) << PDMC_WPSR_NCE_Pos)) /* Assigment of value for NCE in the PDMC_WPSR register */
#define   PDMC_WPSR_NCE_0_Val                 _UINT32_(0x0)                                        /* (PDMC_WPSR) No error is detected in the configuration registers.  */
#define   PDMC_WPSR_NCE_1_Val                 _UINT32_(0x1)                                        /* (PDMC_WPSR) An error is detected in PDMC_MR, PDMC_CFGR or PDMC_IMR.  */
#define PDMC_WPSR_NCE_0                       (PDMC_WPSR_NCE_0_Val << PDMC_WPSR_NCE_Pos)           /* (PDMC_WPSR) No error is detected in the configuration registers. Position  */
#define PDMC_WPSR_NCE_1                       (PDMC_WPSR_NCE_1_Val << PDMC_WPSR_NCE_Pos)           /* (PDMC_WPSR) An error is detected in PDMC_MR, PDMC_CFGR or PDMC_IMR. Position  */
#define PDMC_WPSR_WPSRC_Pos                   _UINT32_(8)                                          /* (PDMC_WPSR) Write Protection Source Position */
#define PDMC_WPSR_WPSRC_Msk                   (_UINT32_(0xFFFF) << PDMC_WPSR_WPSRC_Pos)            /* (PDMC_WPSR) Write Protection Source Mask */
#define PDMC_WPSR_WPSRC(value)                (PDMC_WPSR_WPSRC_Msk & (_UINT32_(value) << PDMC_WPSR_WPSRC_Pos)) /* Assigment of value for WPSRC in the PDMC_WPSR register */
#define PDMC_WPSR_SWETYP_Pos                  _UINT32_(24)                                         /* (PDMC_WPSR) Software Error Type (cleared on read) Position */
#define PDMC_WPSR_SWETYP_Msk                  (_UINT32_(0x7) << PDMC_WPSR_SWETYP_Pos)              /* (PDMC_WPSR) Software Error Type (cleared on read) Mask */
#define PDMC_WPSR_SWETYP(value)               (PDMC_WPSR_SWETYP_Msk & (_UINT32_(value) << PDMC_WPSR_SWETYP_Pos)) /* Assigment of value for SWETYP in the PDMC_WPSR register */
#define   PDMC_WPSR_SWETYP_READ_WO_Val        _UINT32_(0x0)                                        /* (PDMC_WPSR) A write-only register has been read (warning).  */
#define   PDMC_WPSR_SWETYP_WRITE_RO_Val       _UINT32_(0x1)                                        /* (PDMC_WPSR) A write access has been performed on a read-only register (warning).  */
#define   PDMC_WPSR_SWETYP_UNDEF_RW_Val       _UINT32_(0x2)                                        /* (PDMC_WPSR) Access to an undefined address (warning).  */
#define PDMC_WPSR_SWETYP_READ_WO              (PDMC_WPSR_SWETYP_READ_WO_Val << PDMC_WPSR_SWETYP_Pos) /* (PDMC_WPSR) A write-only register has been read (warning). Position  */
#define PDMC_WPSR_SWETYP_WRITE_RO             (PDMC_WPSR_SWETYP_WRITE_RO_Val << PDMC_WPSR_SWETYP_Pos) /* (PDMC_WPSR) A write access has been performed on a read-only register (warning). Position  */
#define PDMC_WPSR_SWETYP_UNDEF_RW             (PDMC_WPSR_SWETYP_UNDEF_RW_Val << PDMC_WPSR_SWETYP_Pos) /* (PDMC_WPSR) Access to an undefined address (warning). Position  */
#define PDMC_WPSR_Msk                         _UINT32_(0x07FFFF3D)                                 /* (PDMC_WPSR) Register Mask  */


/* -------- PDMC_FIR : (PDMC Offset: 0x38) (R/W 32) Fault Injection Register -------- */
#define PDMC_FIR_RESETVALUE                   _UINT32_(0x00)                                       /*  (PDMC_FIR) Fault Injection Register  Reset Value */

#define PDMC_FIR_F0_Pos                       _UINT32_(0)                                          /* (PDMC_FIR) Single Fault for Mode Registers (PDMC_MR) Position */
#define PDMC_FIR_F0_Msk                       (_UINT32_(0x1) << PDMC_FIR_F0_Pos)                   /* (PDMC_FIR) Single Fault for Mode Registers (PDMC_MR) Mask */
#define PDMC_FIR_F0(value)                    (PDMC_FIR_F0_Msk & (_UINT32_(value) << PDMC_FIR_F0_Pos)) /* Assigment of value for F0 in the PDMC_FIR register */
#define   PDMC_FIR_F0_0_Val                   _UINT32_(0x0)                                        /* (PDMC_FIR) No effect.  */
#define   PDMC_FIR_F0_1_Val                   _UINT32_(0x1)                                        /* (PDMC_FIR) Creates a single fault in the error detection circuitry of PDMC_MR (the configuration is not modified) which triggers the PDMC_WPSR.NCE to '1'.  */
#define PDMC_FIR_F0_0                         (PDMC_FIR_F0_0_Val << PDMC_FIR_F0_Pos)               /* (PDMC_FIR) No effect. Position  */
#define PDMC_FIR_F0_1                         (PDMC_FIR_F0_1_Val << PDMC_FIR_F0_Pos)               /* (PDMC_FIR) Creates a single fault in the error detection circuitry of PDMC_MR (the configuration is not modified) which triggers the PDMC_WPSR.NCE to '1'. Position  */
#define PDMC_FIR_F1_Pos                       _UINT32_(1)                                          /* (PDMC_FIR) Single Fault for Configuration Register (PDMC_CFGR) Position */
#define PDMC_FIR_F1_Msk                       (_UINT32_(0x1) << PDMC_FIR_F1_Pos)                   /* (PDMC_FIR) Single Fault for Configuration Register (PDMC_CFGR) Mask */
#define PDMC_FIR_F1(value)                    (PDMC_FIR_F1_Msk & (_UINT32_(value) << PDMC_FIR_F1_Pos)) /* Assigment of value for F1 in the PDMC_FIR register */
#define   PDMC_FIR_F1_0_Val                   _UINT32_(0x0)                                        /* (PDMC_FIR) No effect.  */
#define   PDMC_FIR_F1_1_Val                   _UINT32_(0x1)                                        /* (PDMC_FIR) Creates a single fault in the error detection circuitry of PDMC_CFGR (the configuration is not modified) which triggers the PDMC_WPSR.NCE to '1'.  */
#define PDMC_FIR_F1_0                         (PDMC_FIR_F1_0_Val << PDMC_FIR_F1_Pos)               /* (PDMC_FIR) No effect. Position  */
#define PDMC_FIR_F1_1                         (PDMC_FIR_F1_1_Val << PDMC_FIR_F1_Pos)               /* (PDMC_FIR) Creates a single fault in the error detection circuitry of PDMC_CFGR (the configuration is not modified) which triggers the PDMC_WPSR.NCE to '1'. Position  */
#define PDMC_FIR_F2_Pos                       _UINT32_(2)                                          /* (PDMC_FIR) Single Fault for Interrupt Mask Register (PDMC_IMR) Position */
#define PDMC_FIR_F2_Msk                       (_UINT32_(0x1) << PDMC_FIR_F2_Pos)                   /* (PDMC_FIR) Single Fault for Interrupt Mask Register (PDMC_IMR) Mask */
#define PDMC_FIR_F2(value)                    (PDMC_FIR_F2_Msk & (_UINT32_(value) << PDMC_FIR_F2_Pos)) /* Assigment of value for F2 in the PDMC_FIR register */
#define   PDMC_FIR_F2_0_Val                   _UINT32_(0x0)                                        /* (PDMC_FIR) No effect.  */
#define   PDMC_FIR_F2_1_Val                   _UINT32_(0x1)                                        /* (PDMC_FIR) Creates a single fault in the error detection circuitry of PDMC_IMR (the configuration is not modified) which triggers the PDMC_WPSR.NCE to '1'.  */
#define PDMC_FIR_F2_0                         (PDMC_FIR_F2_0_Val << PDMC_FIR_F2_Pos)               /* (PDMC_FIR) No effect. Position  */
#define PDMC_FIR_F2_1                         (PDMC_FIR_F2_1_Val << PDMC_FIR_F2_Pos)               /* (PDMC_FIR) Creates a single fault in the error detection circuitry of PDMC_IMR (the configuration is not modified) which triggers the PDMC_WPSR.NCE to '1'. Position  */
#define PDMC_FIR_F3_Pos                       _UINT32_(3)                                          /* (PDMC_FIR) Single Fault for Write Protection Mode Register (PDMC_WPMR) Position */
#define PDMC_FIR_F3_Msk                       (_UINT32_(0x1) << PDMC_FIR_F3_Pos)                   /* (PDMC_FIR) Single Fault for Write Protection Mode Register (PDMC_WPMR) Mask */
#define PDMC_FIR_F3(value)                    (PDMC_FIR_F3_Msk & (_UINT32_(value) << PDMC_FIR_F3_Pos)) /* Assigment of value for F3 in the PDMC_FIR register */
#define   PDMC_FIR_F3_0_Val                   _UINT32_(0x0)                                        /* (PDMC_FIR) No effect.  */
#define   PDMC_FIR_F3_1_Val                   _UINT32_(0x1)                                        /* (PDMC_FIR) Creates a single fault in the error detection circuitry of PDMC_WPMR (the configuration is not modified) which triggers the PDMC_WPSR.NCE to '1'.  */
#define PDMC_FIR_F3_0                         (PDMC_FIR_F3_0_Val << PDMC_FIR_F3_Pos)               /* (PDMC_FIR) No effect. Position  */
#define PDMC_FIR_F3_1                         (PDMC_FIR_F3_1_Val << PDMC_FIR_F3_Pos)               /* (PDMC_FIR) Creates a single fault in the error detection circuitry of PDMC_WPMR (the configuration is not modified) which triggers the PDMC_WPSR.NCE to '1'. Position  */
#define PDMC_FIR_SFEN_Pos                     _UINT32_(5)                                          /* (PDMC_FIR) Single Fault Enable Position */
#define PDMC_FIR_SFEN_Msk                     (_UINT32_(0x1) << PDMC_FIR_SFEN_Pos)                 /* (PDMC_FIR) Single Fault Enable Mask */
#define PDMC_FIR_SFEN(value)                  (PDMC_FIR_SFEN_Msk & (_UINT32_(value) << PDMC_FIR_SFEN_Pos)) /* Assigment of value for SFEN in the PDMC_FIR register */
#define   PDMC_FIR_SFEN_0_Val                 _UINT32_(0x0)                                        /* (PDMC_FIR) No effect.  */
#define   PDMC_FIR_SFEN_1_Val                 _UINT32_(0x1)                                        /* (PDMC_FIR) Always write to '1' for fault injection  */
#define PDMC_FIR_SFEN_0                       (PDMC_FIR_SFEN_0_Val << PDMC_FIR_SFEN_Pos)           /* (PDMC_FIR) No effect. Position  */
#define PDMC_FIR_SFEN_1                       (PDMC_FIR_SFEN_1_Val << PDMC_FIR_SFEN_Pos)           /* (PDMC_FIR) Always write to '1' for fault injection Position  */
#define PDMC_FIR_FIRDIS_Pos                   _UINT32_(7)                                          /* (PDMC_FIR) Fault Injection Register Disable Position */
#define PDMC_FIR_FIRDIS_Msk                   (_UINT32_(0x1) << PDMC_FIR_FIRDIS_Pos)               /* (PDMC_FIR) Fault Injection Register Disable Mask */
#define PDMC_FIR_FIRDIS(value)                (PDMC_FIR_FIRDIS_Msk & (_UINT32_(value) << PDMC_FIR_FIRDIS_Pos)) /* Assigment of value for FIRDIS in the PDMC_FIR register */
#define   PDMC_FIR_FIRDIS_NO_EFFECT_Val       _UINT32_(0x0)                                        /* (PDMC_FIR) No effect.  */
#define   PDMC_FIR_FIRDIS_ACTIVE_Val          _UINT32_(0x1)                                        /* (PDMC_FIR) Disables the fault injection until the next hardware reset. The command is valid only if PDMC_WPSR.NCE=0 and the other bits are cleared (F0=F1=F2=F3=0).  */
#define PDMC_FIR_FIRDIS_NO_EFFECT             (PDMC_FIR_FIRDIS_NO_EFFECT_Val << PDMC_FIR_FIRDIS_Pos) /* (PDMC_FIR) No effect. Position  */
#define PDMC_FIR_FIRDIS_ACTIVE                (PDMC_FIR_FIRDIS_ACTIVE_Val << PDMC_FIR_FIRDIS_Pos)  /* (PDMC_FIR) Disables the fault injection until the next hardware reset. The command is valid only if PDMC_WPSR.NCE=0 and the other bits are cleared (F0=F1=F2=F3=0). Position  */
#define PDMC_FIR_FIKEY_Pos                    _UINT32_(8)                                          /* (PDMC_FIR) Fault Injection Key Position */
#define PDMC_FIR_FIKEY_Msk                    (_UINT32_(0xFFFFFF) << PDMC_FIR_FIKEY_Pos)           /* (PDMC_FIR) Fault Injection Key Mask */
#define PDMC_FIR_FIKEY(value)                 (PDMC_FIR_FIKEY_Msk & (_UINT32_(value) << PDMC_FIR_FIKEY_Pos)) /* Assigment of value for FIKEY in the PDMC_FIR register */
#define   PDMC_FIR_FIKEY_PASSWD_Val           _UINT32_(0x504649)                                   /* (PDMC_FIR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0.  */
#define PDMC_FIR_FIKEY_PASSWD                 (PDMC_FIR_FIKEY_PASSWD_Val << PDMC_FIR_FIKEY_Pos)    /* (PDMC_FIR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0. Position  */
#define PDMC_FIR_Msk                          _UINT32_(0xFFFFFFAF)                                 /* (PDMC_FIR) Register Mask  */

#define PDMC_FIR_F_Pos                        _UINT32_(0)                                          /* (PDMC_FIR Position) Single Fault for Mode Registers (PDMC_MR) */
#define PDMC_FIR_F_Msk                        (_UINT32_(0xF) << PDMC_FIR_F_Pos)                    /* (PDMC_FIR Mask) F */
#define PDMC_FIR_F(value)                     (PDMC_FIR_F_Msk & (_UINT32_(value) << PDMC_FIR_F_Pos)) 

/* -------- PDMC_FSR : (PDMC Offset: 0x3C) ( R/ 32) Fault Status Register -------- */
#define PDMC_FSR_RESETVALUE                   _UINT32_(0x00)                                       /*  (PDMC_FSR) Fault Status Register  Reset Value */

#define PDMC_FSR_MRNCF_Pos                    _UINT32_(8)                                          /* (PDMC_FSR) Mode Registers Non-Corrected Fault Status Position */
#define PDMC_FSR_MRNCF_Msk                    (_UINT32_(0x1) << PDMC_FSR_MRNCF_Pos)                /* (PDMC_FSR) Mode Registers Non-Corrected Fault Status Mask */
#define PDMC_FSR_MRNCF(value)                 (PDMC_FSR_MRNCF_Msk & (_UINT32_(value) << PDMC_FSR_MRNCF_Pos)) /* Assigment of value for MRNCF in the PDMC_FSR register */
#define   PDMC_FSR_MRNCF_0_Val                _UINT32_(0x0)                                        /* (PDMC_FSR) No fault in PDMC_MR.  */
#define   PDMC_FSR_MRNCF_1_Val                _UINT32_(0x1)                                        /* (PDMC_FSR) There is a non-correctable fault in PDMC_MR. To correct the fault, a write access must be performed in PDMC_MR with the correct value.  */
#define PDMC_FSR_MRNCF_0                      (PDMC_FSR_MRNCF_0_Val << PDMC_FSR_MRNCF_Pos)         /* (PDMC_FSR) No fault in PDMC_MR. Position  */
#define PDMC_FSR_MRNCF_1                      (PDMC_FSR_MRNCF_1_Val << PDMC_FSR_MRNCF_Pos)         /* (PDMC_FSR) There is a non-correctable fault in PDMC_MR. To correct the fault, a write access must be performed in PDMC_MR with the correct value. Position  */
#define PDMC_FSR_CFGNCF_Pos                   _UINT32_(9)                                          /* (PDMC_FSR) Configuration Register Non-Corrected Fault Status Position */
#define PDMC_FSR_CFGNCF_Msk                   (_UINT32_(0x1) << PDMC_FSR_CFGNCF_Pos)               /* (PDMC_FSR) Configuration Register Non-Corrected Fault Status Mask */
#define PDMC_FSR_CFGNCF(value)                (PDMC_FSR_CFGNCF_Msk & (_UINT32_(value) << PDMC_FSR_CFGNCF_Pos)) /* Assigment of value for CFGNCF in the PDMC_FSR register */
#define   PDMC_FSR_CFGNCF_0_Val               _UINT32_(0x0)                                        /* (PDMC_FSR) No fault in PDMC_CFGR.  */
#define   PDMC_FSR_CFGNCF_1_Val               _UINT32_(0x1)                                        /* (PDMC_FSR) There is a non-correctable fault in PDMC_CFGR. To correct the fault, a write access must be performed in PDMC_CFGR with the correct value.  */
#define PDMC_FSR_CFGNCF_0                     (PDMC_FSR_CFGNCF_0_Val << PDMC_FSR_CFGNCF_Pos)       /* (PDMC_FSR) No fault in PDMC_CFGR. Position  */
#define PDMC_FSR_CFGNCF_1                     (PDMC_FSR_CFGNCF_1_Val << PDMC_FSR_CFGNCF_Pos)       /* (PDMC_FSR) There is a non-correctable fault in PDMC_CFGR. To correct the fault, a write access must be performed in PDMC_CFGR with the correct value. Position  */
#define PDMC_FSR_IMRNCF_Pos                   _UINT32_(10)                                         /* (PDMC_FSR) User Data Registers Non-Corrected Fault Status Position */
#define PDMC_FSR_IMRNCF_Msk                   (_UINT32_(0x1) << PDMC_FSR_IMRNCF_Pos)               /* (PDMC_FSR) User Data Registers Non-Corrected Fault Status Mask */
#define PDMC_FSR_IMRNCF(value)                (PDMC_FSR_IMRNCF_Msk & (_UINT32_(value) << PDMC_FSR_IMRNCF_Pos)) /* Assigment of value for IMRNCF in the PDMC_FSR register */
#define   PDMC_FSR_IMRNCF_0_Val               _UINT32_(0x0)                                        /* (PDMC_FSR) No fault in PDMC_IMR.  */
#define   PDMC_FSR_IMRNCF_1_Val               _UINT32_(0x1)                                        /* (PDMC_FSR) There is a non-correctable fault in PDMC_IMR. To correct the fault, a write access must be performed in PDMC_IDR to clear all the sources of interrupts and a write access must be performed in the PDMC_IER to reload the correct value for the enabled sources of interrupt.  */
#define PDMC_FSR_IMRNCF_0                     (PDMC_FSR_IMRNCF_0_Val << PDMC_FSR_IMRNCF_Pos)       /* (PDMC_FSR) No fault in PDMC_IMR. Position  */
#define PDMC_FSR_IMRNCF_1                     (PDMC_FSR_IMRNCF_1_Val << PDMC_FSR_IMRNCF_Pos)       /* (PDMC_FSR) There is a non-correctable fault in PDMC_IMR. To correct the fault, a write access must be performed in PDMC_IDR to clear all the sources of interrupts and a write access must be performed in the PDMC_IER to reload the correct value for the enabled sources of interrupt. Position  */
#define PDMC_FSR_WPMRNCF_Pos                  _UINT32_(11)                                         /* (PDMC_FSR) Write Protection Mode Register Non-Corrected Fault Status Position */
#define PDMC_FSR_WPMRNCF_Msk                  (_UINT32_(0x1) << PDMC_FSR_WPMRNCF_Pos)              /* (PDMC_FSR) Write Protection Mode Register Non-Corrected Fault Status Mask */
#define PDMC_FSR_WPMRNCF(value)               (PDMC_FSR_WPMRNCF_Msk & (_UINT32_(value) << PDMC_FSR_WPMRNCF_Pos)) /* Assigment of value for WPMRNCF in the PDMC_FSR register */
#define   PDMC_FSR_WPMRNCF_0_Val              _UINT32_(0x0)                                        /* (PDMC_FSR) No fault in PDMC_WPMR.  */
#define   PDMC_FSR_WPMRNCF_1_Val              _UINT32_(0x1)                                        /* (PDMC_FSR) There is a non-correctable fault in PDMC_WPMR. To correct the fault, write accesses must be performed in PDMC_WPMR with the correct value.  */
#define PDMC_FSR_WPMRNCF_0                    (PDMC_FSR_WPMRNCF_0_Val << PDMC_FSR_WPMRNCF_Pos)     /* (PDMC_FSR) No fault in PDMC_WPMR. Position  */
#define PDMC_FSR_WPMRNCF_1                    (PDMC_FSR_WPMRNCF_1_Val << PDMC_FSR_WPMRNCF_Pos)     /* (PDMC_FSR) There is a non-correctable fault in PDMC_WPMR. To correct the fault, write accesses must be performed in PDMC_WPMR with the correct value. Position  */
#define PDMC_FSR_Msk                          _UINT32_(0x00000F00)                                 /* (PDMC_FSR) Register Mask  */


/* -------- PDMC_GAIN : (PDMC Offset: 0x40) (R/W 32) Gain Register -------- */
#define PDMC_GAIN_RESETVALUE                  _UINT32_(0x18181818)                                 /*  (PDMC_GAIN) Gain Register  Reset Value */

#define PDMC_GAIN_GAIN0_Pos                   _UINT32_(0)                                          /* (PDMC_GAIN) Gain of Channel 0 Position */
#define PDMC_GAIN_GAIN0_Msk                   (_UINT32_(0xFF) << PDMC_GAIN_GAIN0_Pos)              /* (PDMC_GAIN) Gain of Channel 0 Mask */
#define PDMC_GAIN_GAIN0(value)                (PDMC_GAIN_GAIN0_Msk & (_UINT32_(value) << PDMC_GAIN_GAIN0_Pos)) /* Assigment of value for GAIN0 in the PDMC_GAIN register */
#define PDMC_GAIN_GAIN1_Pos                   _UINT32_(8)                                          /* (PDMC_GAIN) Gain of Channel 1 Position */
#define PDMC_GAIN_GAIN1_Msk                   (_UINT32_(0xFF) << PDMC_GAIN_GAIN1_Pos)              /* (PDMC_GAIN) Gain of Channel 1 Mask */
#define PDMC_GAIN_GAIN1(value)                (PDMC_GAIN_GAIN1_Msk & (_UINT32_(value) << PDMC_GAIN_GAIN1_Pos)) /* Assigment of value for GAIN1 in the PDMC_GAIN register */
#define PDMC_GAIN_GAIN2_Pos                   _UINT32_(16)                                         /* (PDMC_GAIN) Gain of Channel 2 Position */
#define PDMC_GAIN_GAIN2_Msk                   (_UINT32_(0xFF) << PDMC_GAIN_GAIN2_Pos)              /* (PDMC_GAIN) Gain of Channel 2 Mask */
#define PDMC_GAIN_GAIN2(value)                (PDMC_GAIN_GAIN2_Msk & (_UINT32_(value) << PDMC_GAIN_GAIN2_Pos)) /* Assigment of value for GAIN2 in the PDMC_GAIN register */
#define PDMC_GAIN_GAIN3_Pos                   _UINT32_(24)                                         /* (PDMC_GAIN) Gain of Channel 3 Position */
#define PDMC_GAIN_GAIN3_Msk                   (_UINT32_(0xFF) << PDMC_GAIN_GAIN3_Pos)              /* (PDMC_GAIN) Gain of Channel 3 Mask */
#define PDMC_GAIN_GAIN3(value)                (PDMC_GAIN_GAIN3_Msk & (_UINT32_(value) << PDMC_GAIN_GAIN3_Pos)) /* Assigment of value for GAIN3 in the PDMC_GAIN register */
#define PDMC_GAIN_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (PDMC_GAIN) Register Mask  */


/* -------- PDMC_CHM : (PDMC Offset: 0x44) (R/W 32) Channel Mapping Register -------- */
#define PDMC_CHM_RESETVALUE                   _UINT32_(0x3020100)                                  /*  (PDMC_CHM) Channel Mapping Register  Reset Value */

#define PDMC_CHM_CHM0_Pos                     _UINT32_(0)                                          /* (PDMC_CHM) Channel Mapping 0 Position */
#define PDMC_CHM_CHM0_Msk                     (_UINT32_(0x7) << PDMC_CHM_CHM0_Pos)                 /* (PDMC_CHM) Channel Mapping 0 Mask */
#define PDMC_CHM_CHM0(value)                  (PDMC_CHM_CHM0_Msk & (_UINT32_(value) << PDMC_CHM_CHM0_Pos)) /* Assigment of value for CHM0 in the PDMC_CHM register */
#define PDMC_CHM_CHM1_Pos                     _UINT32_(8)                                          /* (PDMC_CHM) Channel Mapping 1 Position */
#define PDMC_CHM_CHM1_Msk                     (_UINT32_(0x7) << PDMC_CHM_CHM1_Pos)                 /* (PDMC_CHM) Channel Mapping 1 Mask */
#define PDMC_CHM_CHM1(value)                  (PDMC_CHM_CHM1_Msk & (_UINT32_(value) << PDMC_CHM_CHM1_Pos)) /* Assigment of value for CHM1 in the PDMC_CHM register */
#define PDMC_CHM_CHM2_Pos                     _UINT32_(16)                                         /* (PDMC_CHM) Channel Mapping 2 Position */
#define PDMC_CHM_CHM2_Msk                     (_UINT32_(0x7) << PDMC_CHM_CHM2_Pos)                 /* (PDMC_CHM) Channel Mapping 2 Mask */
#define PDMC_CHM_CHM2(value)                  (PDMC_CHM_CHM2_Msk & (_UINT32_(value) << PDMC_CHM_CHM2_Pos)) /* Assigment of value for CHM2 in the PDMC_CHM register */
#define PDMC_CHM_CHM3_Pos                     _UINT32_(24)                                         /* (PDMC_CHM) Channel Mapping 3 Position */
#define PDMC_CHM_CHM3_Msk                     (_UINT32_(0x7) << PDMC_CHM_CHM3_Pos)                 /* (PDMC_CHM) Channel Mapping 3 Mask */
#define PDMC_CHM_CHM3(value)                  (PDMC_CHM_CHM3_Msk & (_UINT32_(value) << PDMC_CHM_CHM3_Pos)) /* Assigment of value for CHM3 in the PDMC_CHM register */
#define PDMC_CHM_Msk                          _UINT32_(0x07070707)                                 /* (PDMC_CHM) Register Mask  */


/** \brief PDMC register offsets definitions */
#define PDMC_CR_REG_OFST               _UINT32_(0x00)      /* (PDMC_CR) Control Register Offset */
#define PDMC_MR_REG_OFST               _UINT32_(0x04)      /* (PDMC_MR) Mode Register Offset */
#define PDMC_CFGR_REG_OFST             _UINT32_(0x08)      /* (PDMC_CFGR) Configuration Register Offset */
#define PDMC_RHR_REG_OFST              _UINT32_(0x0C)      /* (PDMC_RHR) Receive Holding Register Offset */
#define PDMC_IER_REG_OFST              _UINT32_(0x14)      /* (PDMC_IER) Interrupt Enable Register Offset */
#define PDMC_IDR_REG_OFST              _UINT32_(0x18)      /* (PDMC_IDR) Interrupt Disable Register Offset */
#define PDMC_IMR_REG_OFST              _UINT32_(0x1C)      /* (PDMC_IMR) Interrupt Mask Register Offset */
#define PDMC_ISR_REG_OFST              _UINT32_(0x20)      /* (PDMC_ISR) Interrupt Status Register Offset */
#define PDMC_WPMR_REG_OFST             _UINT32_(0x2C)      /* (PDMC_WPMR) Write Protection Mode Register Offset */
#define PDMC_WPSR_REG_OFST             _UINT32_(0x30)      /* (PDMC_WPSR) Write Protection Status Register Offset */
#define PDMC_FIR_REG_OFST              _UINT32_(0x38)      /* (PDMC_FIR) Fault Injection Register Offset */
#define PDMC_FSR_REG_OFST              _UINT32_(0x3C)      /* (PDMC_FSR) Fault Status Register Offset */
#define PDMC_GAIN_REG_OFST             _UINT32_(0x40)      /* (PDMC_GAIN) Gain Register Offset */
#define PDMC_CHM_REG_OFST              _UINT32_(0x44)      /* (PDMC_CHM) Channel Mapping Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PDMC register API structure */
typedef struct
{  /* Pulse Density Microphone Controller */
  __O   uint32_t                       PDMC_CR;            /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       PDMC_MR;            /**< Offset: 0x04 (R/W  32) Mode Register */
  __IO  uint32_t                       PDMC_CFGR;          /**< Offset: 0x08 (R/W  32) Configuration Register */
  __I   uint32_t                       PDMC_RHR;           /**< Offset: 0x0C (R/   32) Receive Holding Register */
  __I   uint8_t                        Reserved1[0x04];
  __O   uint32_t                       PDMC_IER;           /**< Offset: 0x14 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       PDMC_IDR;           /**< Offset: 0x18 ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       PDMC_IMR;           /**< Offset: 0x1C (R/   32) Interrupt Mask Register */
  __I   uint32_t                       PDMC_ISR;           /**< Offset: 0x20 (R/   32) Interrupt Status Register */
  __I   uint8_t                        Reserved2[0x08];
  __IO  uint32_t                       PDMC_WPMR;          /**< Offset: 0x2C (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       PDMC_WPSR;          /**< Offset: 0x30 (R/   32) Write Protection Status Register */
  __I   uint8_t                        Reserved3[0x04];
  __IO  uint32_t                       PDMC_FIR;           /**< Offset: 0x38 (R/W  32) Fault Injection Register */
  __I   uint32_t                       PDMC_FSR;           /**< Offset: 0x3C (R/   32) Fault Status Register */
  __IO  uint32_t                       PDMC_GAIN;          /**< Offset: 0x40 (R/W  32) Gain Register */
  __IO  uint32_t                       PDMC_CHM;           /**< Offset: 0x44 (R/W  32) Channel Mapping Register */
} pdmc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7D6_PDMC_COMPONENT_H_ */
