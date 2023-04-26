/*
 * Component description for DSI
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

/* file generated from device description version 2022-01-05T08:57:53Z */
#ifndef _SAM9X7_DSI_COMPONENT_H_
#define _SAM9X7_DSI_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR DSI                                          */
/* ************************************************************************** */

/* -------- DSI_VERSION : (DSI Offset: 0x00) ( R/ 32) This register contains the version of the DSI host controller. -------- */
#define DSI_VERSION_VERSION_Pos               _U_(0)                                               /**< (DSI_VERSION) This field indicates the version of the DWC_mipi_dsi_host. Position */
#define DSI_VERSION_VERSION_Msk               (_U_(0xFFFFFFFF) << DSI_VERSION_VERSION_Pos)         /**< (DSI_VERSION) This field indicates the version of the DWC_mipi_dsi_host. Mask */
#define DSI_VERSION_VERSION(value)            (DSI_VERSION_VERSION_Msk & ((value) << DSI_VERSION_VERSION_Pos))
#define DSI_VERSION_Msk                       _U_(0xFFFFFFFF)                                      /**< (DSI_VERSION) Register Mask  */


/* -------- DSI_PWR_UP : (DSI Offset: 0x04) (R/W 32) This register controls the power up of the core. -------- */
#define DSI_PWR_UP_SHUTDOWNZ_Pos              _U_(0)                                               /**< (DSI_PWR_UP) This bit configures the core either to power up or to reset.  - 0: Reset  - 1: Power-up Position */
#define DSI_PWR_UP_SHUTDOWNZ_Msk              (_U_(0x1) << DSI_PWR_UP_SHUTDOWNZ_Pos)               /**< (DSI_PWR_UP) This bit configures the core either to power up or to reset.  - 0: Reset  - 1: Power-up Mask */
#define DSI_PWR_UP_SHUTDOWNZ(value)           (DSI_PWR_UP_SHUTDOWNZ_Msk & ((value) << DSI_PWR_UP_SHUTDOWNZ_Pos))
#define DSI_PWR_UP_Msk                        _U_(0x00000001)                                      /**< (DSI_PWR_UP) Register Mask  */


/* -------- DSI_CLKMGR_CFG : (DSI Offset: 0x08) (R/W 32) This register configures the factor for internal dividers to divide lanebyteclk for timeout purposes. -------- */
#define DSI_CLKMGR_CFG_TX_ESC_CLK_DIVISION_Pos _U_(0)                                               /**< (DSI_CLKMGR_CFG) This field indicates the division factor for the TX Escape clock source (lanebyteclk). The values 0 and 1 stop the TX_ESC clock generation. Position */
#define DSI_CLKMGR_CFG_TX_ESC_CLK_DIVISION_Msk (_U_(0xFF) << DSI_CLKMGR_CFG_TX_ESC_CLK_DIVISION_Pos) /**< (DSI_CLKMGR_CFG) This field indicates the division factor for the TX Escape clock source (lanebyteclk). The values 0 and 1 stop the TX_ESC clock generation. Mask */
#define DSI_CLKMGR_CFG_TX_ESC_CLK_DIVISION(value) (DSI_CLKMGR_CFG_TX_ESC_CLK_DIVISION_Msk & ((value) << DSI_CLKMGR_CFG_TX_ESC_CLK_DIVISION_Pos))
#define DSI_CLKMGR_CFG_TO_CLK_DIVISION_Pos    _U_(8)                                               /**< (DSI_CLKMGR_CFG) This field indicates the division factor for the Time Out clock used as the timing unit in the configuration of HS to LP and LP to HS transition error. Position */
#define DSI_CLKMGR_CFG_TO_CLK_DIVISION_Msk    (_U_(0xFF) << DSI_CLKMGR_CFG_TO_CLK_DIVISION_Pos)    /**< (DSI_CLKMGR_CFG) This field indicates the division factor for the Time Out clock used as the timing unit in the configuration of HS to LP and LP to HS transition error. Mask */
#define DSI_CLKMGR_CFG_TO_CLK_DIVISION(value) (DSI_CLKMGR_CFG_TO_CLK_DIVISION_Msk & ((value) << DSI_CLKMGR_CFG_TO_CLK_DIVISION_Pos))
#define DSI_CLKMGR_CFG_Msk                    _U_(0x0000FFFF)                                      /**< (DSI_CLKMGR_CFG) Register Mask  */


/* -------- DSI_DPI_VCID : (DSI Offset: 0x0C) (R/W 32) This register configures the Virtual Channel ID for DPI traffic. -------- */
#define DSI_DPI_VCID_DPI_VCID_Pos             _U_(0)                                               /**< (DSI_DPI_VCID) This field configures the DPI virtual channel id that is indexed to the Video mode packets. Position */
#define DSI_DPI_VCID_DPI_VCID_Msk             (_U_(0x3) << DSI_DPI_VCID_DPI_VCID_Pos)              /**< (DSI_DPI_VCID) This field configures the DPI virtual channel id that is indexed to the Video mode packets. Mask */
#define DSI_DPI_VCID_DPI_VCID(value)          (DSI_DPI_VCID_DPI_VCID_Msk & ((value) << DSI_DPI_VCID_DPI_VCID_Pos))
#define DSI_DPI_VCID_Msk                      _U_(0x00000003)                                      /**< (DSI_DPI_VCID) Register Mask  */


/* -------- DSI_DPI_COLOR_CODING : (DSI Offset: 0x10) (R/W 32) This register configures DPI color coding. -------- */
#define DSI_DPI_COLOR_CODING_DPI_COLOR_CODING_Pos _U_(0)                                               /**< (DSI_DPI_COLOR_CODING) This field configures the DPI color coding as follows:  - 0000: 16-bit configuration 1  - 0001: 16-bit configuration 2  - 0010: 16-bit configuration 3  - 0011: 18-bit configuration 1  - 0100: 18-bit configuration 2  - 0101: 24-bit  - 0110: 20-bit YCbCr 4:2:2 loosely packed  - 0111: 24-bit YCbCr 4:2:2  - 1000: 16-bit YCbCr 4:2:2  - 1001: 30-bit  - 1010: 36-bit  - 1011: 12-bit YCbCr 4:2:0  - 11xx: DSC24 compressed Data If the eDPI interface is chosen and currently works in the Command mode (cmd_video_mode = 1), then:  - 0000: 16-bit configuration 1  - 0001: 16-bit configuration 2  - 0010: 16-bit configuration 3  - 0011: 18-bit configuration 1  - 0100: 18-bit configuration 2  - 0101-0111: 24-bit  - 1Xxx: DSC24 compressed Data Position */
#define DSI_DPI_COLOR_CODING_DPI_COLOR_CODING_Msk (_U_(0xF) << DSI_DPI_COLOR_CODING_DPI_COLOR_CODING_Pos) /**< (DSI_DPI_COLOR_CODING) This field configures the DPI color coding as follows:  - 0000: 16-bit configuration 1  - 0001: 16-bit configuration 2  - 0010: 16-bit configuration 3  - 0011: 18-bit configuration 1  - 0100: 18-bit configuration 2  - 0101: 24-bit  - 0110: 20-bit YCbCr 4:2:2 loosely packed  - 0111: 24-bit YCbCr 4:2:2  - 1000: 16-bit YCbCr 4:2:2  - 1001: 30-bit  - 1010: 36-bit  - 1011: 12-bit YCbCr 4:2:0  - 11xx: DSC24 compressed Data If the eDPI interface is chosen and currently works in the Command mode (cmd_video_mode = 1), then:  - 0000: 16-bit configuration 1  - 0001: 16-bit configuration 2  - 0010: 16-bit configuration 3  - 0011: 18-bit configuration 1  - 0100: 18-bit configuration 2  - 0101-0111: 24-bit  - 1Xxx: DSC24 compressed Data Mask */
#define DSI_DPI_COLOR_CODING_DPI_COLOR_CODING(value) (DSI_DPI_COLOR_CODING_DPI_COLOR_CODING_Msk & ((value) << DSI_DPI_COLOR_CODING_DPI_COLOR_CODING_Pos))
#define DSI_DPI_COLOR_CODING_LOOSELY18_EN_Pos _U_(8)                                               /**< (DSI_DPI_COLOR_CODING) When set to 1, this bit activates loosely packed variant to 18-bit configurations. Position */
#define DSI_DPI_COLOR_CODING_LOOSELY18_EN_Msk (_U_(0x1) << DSI_DPI_COLOR_CODING_LOOSELY18_EN_Pos)  /**< (DSI_DPI_COLOR_CODING) When set to 1, this bit activates loosely packed variant to 18-bit configurations. Mask */
#define DSI_DPI_COLOR_CODING_LOOSELY18_EN(value) (DSI_DPI_COLOR_CODING_LOOSELY18_EN_Msk & ((value) << DSI_DPI_COLOR_CODING_LOOSELY18_EN_Pos))
#define DSI_DPI_COLOR_CODING_Msk              _U_(0x0000010F)                                      /**< (DSI_DPI_COLOR_CODING) Register Mask  */


/* -------- DSI_DPI_CFG_POL : (DSI Offset: 0x14) (R/W 32) This register configures the polarity of DPI signals. -------- */
#define DSI_DPI_CFG_POL_DATAEN_ACTIVE_LOW_Pos _U_(0)                                               /**< (DSI_DPI_CFG_POL) When set to 1, this bit configures the data enable pin (dpidataen) as active low. Position */
#define DSI_DPI_CFG_POL_DATAEN_ACTIVE_LOW_Msk (_U_(0x1) << DSI_DPI_CFG_POL_DATAEN_ACTIVE_LOW_Pos)  /**< (DSI_DPI_CFG_POL) When set to 1, this bit configures the data enable pin (dpidataen) as active low. Mask */
#define DSI_DPI_CFG_POL_DATAEN_ACTIVE_LOW(value) (DSI_DPI_CFG_POL_DATAEN_ACTIVE_LOW_Msk & ((value) << DSI_DPI_CFG_POL_DATAEN_ACTIVE_LOW_Pos))
#define DSI_DPI_CFG_POL_VSYNC_ACTIVE_LOW_Pos  _U_(1)                                               /**< (DSI_DPI_CFG_POL) When set to 1, this bit configures the vertical synchronism pin (dpivsync) as active low. Position */
#define DSI_DPI_CFG_POL_VSYNC_ACTIVE_LOW_Msk  (_U_(0x1) << DSI_DPI_CFG_POL_VSYNC_ACTIVE_LOW_Pos)   /**< (DSI_DPI_CFG_POL) When set to 1, this bit configures the vertical synchronism pin (dpivsync) as active low. Mask */
#define DSI_DPI_CFG_POL_VSYNC_ACTIVE_LOW(value) (DSI_DPI_CFG_POL_VSYNC_ACTIVE_LOW_Msk & ((value) << DSI_DPI_CFG_POL_VSYNC_ACTIVE_LOW_Pos))
#define DSI_DPI_CFG_POL_HSYNC_ACTIVE_LOW_Pos  _U_(2)                                               /**< (DSI_DPI_CFG_POL) When set to 1, this bit configures the horizontal synchronism pin (dpihsync) as active low. Position */
#define DSI_DPI_CFG_POL_HSYNC_ACTIVE_LOW_Msk  (_U_(0x1) << DSI_DPI_CFG_POL_HSYNC_ACTIVE_LOW_Pos)   /**< (DSI_DPI_CFG_POL) When set to 1, this bit configures the horizontal synchronism pin (dpihsync) as active low. Mask */
#define DSI_DPI_CFG_POL_HSYNC_ACTIVE_LOW(value) (DSI_DPI_CFG_POL_HSYNC_ACTIVE_LOW_Msk & ((value) << DSI_DPI_CFG_POL_HSYNC_ACTIVE_LOW_Pos))
#define DSI_DPI_CFG_POL_SHUTD_ACTIVE_LOW_Pos  _U_(3)                                               /**< (DSI_DPI_CFG_POL) When set to 1, this bit configures the shutdown pin (dpishutdn) as active low. Position */
#define DSI_DPI_CFG_POL_SHUTD_ACTIVE_LOW_Msk  (_U_(0x1) << DSI_DPI_CFG_POL_SHUTD_ACTIVE_LOW_Pos)   /**< (DSI_DPI_CFG_POL) When set to 1, this bit configures the shutdown pin (dpishutdn) as active low. Mask */
#define DSI_DPI_CFG_POL_SHUTD_ACTIVE_LOW(value) (DSI_DPI_CFG_POL_SHUTD_ACTIVE_LOW_Msk & ((value) << DSI_DPI_CFG_POL_SHUTD_ACTIVE_LOW_Pos))
#define DSI_DPI_CFG_POL_COLORM_ACTIVE_LOW_Pos _U_(4)                                               /**< (DSI_DPI_CFG_POL) When set to 1, this bit configures the color mode pin (dpicolorm) as active low. Position */
#define DSI_DPI_CFG_POL_COLORM_ACTIVE_LOW_Msk (_U_(0x1) << DSI_DPI_CFG_POL_COLORM_ACTIVE_LOW_Pos)  /**< (DSI_DPI_CFG_POL) When set to 1, this bit configures the color mode pin (dpicolorm) as active low. Mask */
#define DSI_DPI_CFG_POL_COLORM_ACTIVE_LOW(value) (DSI_DPI_CFG_POL_COLORM_ACTIVE_LOW_Msk & ((value) << DSI_DPI_CFG_POL_COLORM_ACTIVE_LOW_Pos))
#define DSI_DPI_CFG_POL_Msk                   _U_(0x0000001F)                                      /**< (DSI_DPI_CFG_POL) Register Mask  */


/* -------- DSI_DPI_LP_CMD_TIM : (DSI Offset: 0x18) (R/W 32) This register configures the timing for low-power commands sent while in video mode. -------- */
#define DSI_DPI_LP_CMD_TIM_INVACT_LPCMD_TIME_Pos _U_(0)                                               /**< (DSI_DPI_LP_CMD_TIM) This field is used for the transmission of commands in low-power mode. It defines the size, in bytes, of the largest packet that can fit in a line during the VACT region. Position */
#define DSI_DPI_LP_CMD_TIM_INVACT_LPCMD_TIME_Msk (_U_(0xFF) << DSI_DPI_LP_CMD_TIM_INVACT_LPCMD_TIME_Pos) /**< (DSI_DPI_LP_CMD_TIM) This field is used for the transmission of commands in low-power mode. It defines the size, in bytes, of the largest packet that can fit in a line during the VACT region. Mask */
#define DSI_DPI_LP_CMD_TIM_INVACT_LPCMD_TIME(value) (DSI_DPI_LP_CMD_TIM_INVACT_LPCMD_TIME_Msk & ((value) << DSI_DPI_LP_CMD_TIM_INVACT_LPCMD_TIME_Pos))
#define DSI_DPI_LP_CMD_TIM_OUTVACT_LPCMD_TIME_Pos _U_(16)                                              /**< (DSI_DPI_LP_CMD_TIM) This field is used for the transmission of commands in low-power mode. It defines the size, in bytes, of the largest packet that can fit in a line during the VSA, VBP, and VFP regions. Position */
#define DSI_DPI_LP_CMD_TIM_OUTVACT_LPCMD_TIME_Msk (_U_(0xFF) << DSI_DPI_LP_CMD_TIM_OUTVACT_LPCMD_TIME_Pos) /**< (DSI_DPI_LP_CMD_TIM) This field is used for the transmission of commands in low-power mode. It defines the size, in bytes, of the largest packet that can fit in a line during the VSA, VBP, and VFP regions. Mask */
#define DSI_DPI_LP_CMD_TIM_OUTVACT_LPCMD_TIME(value) (DSI_DPI_LP_CMD_TIM_OUTVACT_LPCMD_TIME_Msk & ((value) << DSI_DPI_LP_CMD_TIM_OUTVACT_LPCMD_TIME_Pos))
#define DSI_DPI_LP_CMD_TIM_Msk                _U_(0x00FF00FF)                                      /**< (DSI_DPI_LP_CMD_TIM) Register Mask  */


/* -------- DSI_PCKHDL_CFG : (DSI Offset: 0x2C) (R/W 32) This register configures how EoTp, BTA, CRC and ECC are to be used, to meet peripheral's characteristics -------- */
#define DSI_PCKHDL_CFG_EOTP_TX_EN_Pos         _U_(0)                                               /**< (DSI_PCKHDL_CFG) When set to 1, this bit enables the EoTp transmission. Position */
#define DSI_PCKHDL_CFG_EOTP_TX_EN_Msk         (_U_(0x1) << DSI_PCKHDL_CFG_EOTP_TX_EN_Pos)          /**< (DSI_PCKHDL_CFG) When set to 1, this bit enables the EoTp transmission. Mask */
#define DSI_PCKHDL_CFG_EOTP_TX_EN(value)      (DSI_PCKHDL_CFG_EOTP_TX_EN_Msk & ((value) << DSI_PCKHDL_CFG_EOTP_TX_EN_Pos))
#define DSI_PCKHDL_CFG_EOTP_RX_EN_Pos         _U_(1)                                               /**< (DSI_PCKHDL_CFG) When set to 1, this bit enables the EoTp reception. Position */
#define DSI_PCKHDL_CFG_EOTP_RX_EN_Msk         (_U_(0x1) << DSI_PCKHDL_CFG_EOTP_RX_EN_Pos)          /**< (DSI_PCKHDL_CFG) When set to 1, this bit enables the EoTp reception. Mask */
#define DSI_PCKHDL_CFG_EOTP_RX_EN(value)      (DSI_PCKHDL_CFG_EOTP_RX_EN_Msk & ((value) << DSI_PCKHDL_CFG_EOTP_RX_EN_Pos))
#define DSI_PCKHDL_CFG_BTA_EN_Pos             _U_(2)                                               /**< (DSI_PCKHDL_CFG) When set to 1, this bit enables the Bus Turn-Around (BTA) request. Position */
#define DSI_PCKHDL_CFG_BTA_EN_Msk             (_U_(0x1) << DSI_PCKHDL_CFG_BTA_EN_Pos)              /**< (DSI_PCKHDL_CFG) When set to 1, this bit enables the Bus Turn-Around (BTA) request. Mask */
#define DSI_PCKHDL_CFG_BTA_EN(value)          (DSI_PCKHDL_CFG_BTA_EN_Msk & ((value) << DSI_PCKHDL_CFG_BTA_EN_Pos))
#define DSI_PCKHDL_CFG_ECC_RX_EN_Pos          _U_(3)                                               /**< (DSI_PCKHDL_CFG) When set to 1, this bit enables the ECC reception, error correction, and reporting. Position */
#define DSI_PCKHDL_CFG_ECC_RX_EN_Msk          (_U_(0x1) << DSI_PCKHDL_CFG_ECC_RX_EN_Pos)           /**< (DSI_PCKHDL_CFG) When set to 1, this bit enables the ECC reception, error correction, and reporting. Mask */
#define DSI_PCKHDL_CFG_ECC_RX_EN(value)       (DSI_PCKHDL_CFG_ECC_RX_EN_Msk & ((value) << DSI_PCKHDL_CFG_ECC_RX_EN_Pos))
#define DSI_PCKHDL_CFG_CRC_RX_EN_Pos          _U_(4)                                               /**< (DSI_PCKHDL_CFG) When set to 1, this bit enables the CRC reception and error reporting. Position */
#define DSI_PCKHDL_CFG_CRC_RX_EN_Msk          (_U_(0x1) << DSI_PCKHDL_CFG_CRC_RX_EN_Pos)           /**< (DSI_PCKHDL_CFG) When set to 1, this bit enables the CRC reception and error reporting. Mask */
#define DSI_PCKHDL_CFG_CRC_RX_EN(value)       (DSI_PCKHDL_CFG_CRC_RX_EN_Msk & ((value) << DSI_PCKHDL_CFG_CRC_RX_EN_Pos))
#define DSI_PCKHDL_CFG_Msk                    _U_(0x0000001F)                                      /**< (DSI_PCKHDL_CFG) Register Mask  */


/* -------- DSI_GEN_VCID : (DSI Offset: 0x30) (R/W 32) This register configures the Virtual Channel ID of READ responses to store and return to Generic interface. -------- */
#define DSI_GEN_VCID_GEN_VCID_RX_Pos          _U_(0)                                               /**< (DSI_GEN_VCID) This field indicates the Generic interface read-back virtual channel identification. Position */
#define DSI_GEN_VCID_GEN_VCID_RX_Msk          (_U_(0x3) << DSI_GEN_VCID_GEN_VCID_RX_Pos)           /**< (DSI_GEN_VCID) This field indicates the Generic interface read-back virtual channel identification. Mask */
#define DSI_GEN_VCID_GEN_VCID_RX(value)       (DSI_GEN_VCID_GEN_VCID_RX_Msk & ((value) << DSI_GEN_VCID_GEN_VCID_RX_Pos))
#define DSI_GEN_VCID_Msk                      _U_(0x00000003)                                      /**< (DSI_GEN_VCID) Register Mask  */


/* -------- DSI_MODE_CFG : (DSI Offset: 0x34) (R/W 32) This register configures the mode of operation between Video or Command Mode. (Commands can still be sent while in video mode.) -------- */
#define DSI_MODE_CFG_CMD_VIDEO_MODE_Pos       _U_(0)                                               /**< (DSI_MODE_CFG) This bit configuers the operation mode:  - 0: video mode  - 1: command mode Position */
#define DSI_MODE_CFG_CMD_VIDEO_MODE_Msk       (_U_(0x1) << DSI_MODE_CFG_CMD_VIDEO_MODE_Pos)        /**< (DSI_MODE_CFG) This bit configuers the operation mode:  - 0: video mode  - 1: command mode Mask */
#define DSI_MODE_CFG_CMD_VIDEO_MODE(value)    (DSI_MODE_CFG_CMD_VIDEO_MODE_Msk & ((value) << DSI_MODE_CFG_CMD_VIDEO_MODE_Pos))
#define DSI_MODE_CFG_Msk                      _U_(0x00000001)                                      /**< (DSI_MODE_CFG) Register Mask  */


/* -------- DSI_VID_MODE_CFG : (DSI Offset: 0x38) (R/W 32) This register configures several aspects of Video mode operation, the transmission mode, switching to Low-Power in the middle of a frame, enabling acknowledge and whether to send commands in Low-Power. -------- */
#define DSI_VID_MODE_CFG_VID_MODE_TYPE_Pos    _U_(0)                                               /**< (DSI_VID_MODE_CFG) This field indicates the video mode transmission type as follows:  - 00: Non-burst with sync pulses  - 01: Non-burst with sync events  - 10 and 11: Burst mode Position */
#define DSI_VID_MODE_CFG_VID_MODE_TYPE_Msk    (_U_(0x3) << DSI_VID_MODE_CFG_VID_MODE_TYPE_Pos)     /**< (DSI_VID_MODE_CFG) This field indicates the video mode transmission type as follows:  - 00: Non-burst with sync pulses  - 01: Non-burst with sync events  - 10 and 11: Burst mode Mask */
#define DSI_VID_MODE_CFG_VID_MODE_TYPE(value) (DSI_VID_MODE_CFG_VID_MODE_TYPE_Msk & ((value) << DSI_VID_MODE_CFG_VID_MODE_TYPE_Pos))
#define DSI_VID_MODE_CFG_LP_VSA_EN_Pos        _U_(8)                                               /**< (DSI_VID_MODE_CFG) When set to 1, this bit enables the return to low-power inside the VSA period when timing allows. Position */
#define DSI_VID_MODE_CFG_LP_VSA_EN_Msk        (_U_(0x1) << DSI_VID_MODE_CFG_LP_VSA_EN_Pos)         /**< (DSI_VID_MODE_CFG) When set to 1, this bit enables the return to low-power inside the VSA period when timing allows. Mask */
#define DSI_VID_MODE_CFG_LP_VSA_EN(value)     (DSI_VID_MODE_CFG_LP_VSA_EN_Msk & ((value) << DSI_VID_MODE_CFG_LP_VSA_EN_Pos))
#define DSI_VID_MODE_CFG_LP_VBP_EN_Pos        _U_(9)                                               /**< (DSI_VID_MODE_CFG) When set to 1, this bit enables the return to low-power inside the VBP period when timing allows. Position */
#define DSI_VID_MODE_CFG_LP_VBP_EN_Msk        (_U_(0x1) << DSI_VID_MODE_CFG_LP_VBP_EN_Pos)         /**< (DSI_VID_MODE_CFG) When set to 1, this bit enables the return to low-power inside the VBP period when timing allows. Mask */
#define DSI_VID_MODE_CFG_LP_VBP_EN(value)     (DSI_VID_MODE_CFG_LP_VBP_EN_Msk & ((value) << DSI_VID_MODE_CFG_LP_VBP_EN_Pos))
#define DSI_VID_MODE_CFG_LP_VFP_EN_Pos        _U_(10)                                              /**< (DSI_VID_MODE_CFG) When set to 1, this bit enables the return to low-power inside the VFP period when timing allows. Position */
#define DSI_VID_MODE_CFG_LP_VFP_EN_Msk        (_U_(0x1) << DSI_VID_MODE_CFG_LP_VFP_EN_Pos)         /**< (DSI_VID_MODE_CFG) When set to 1, this bit enables the return to low-power inside the VFP period when timing allows. Mask */
#define DSI_VID_MODE_CFG_LP_VFP_EN(value)     (DSI_VID_MODE_CFG_LP_VFP_EN_Msk & ((value) << DSI_VID_MODE_CFG_LP_VFP_EN_Pos))
#define DSI_VID_MODE_CFG_LP_VACT_EN_Pos       _U_(11)                                              /**< (DSI_VID_MODE_CFG) When set to 1, this bit enables the return to low-power inside the VACT period when timing allows. Position */
#define DSI_VID_MODE_CFG_LP_VACT_EN_Msk       (_U_(0x1) << DSI_VID_MODE_CFG_LP_VACT_EN_Pos)        /**< (DSI_VID_MODE_CFG) When set to 1, this bit enables the return to low-power inside the VACT period when timing allows. Mask */
#define DSI_VID_MODE_CFG_LP_VACT_EN(value)    (DSI_VID_MODE_CFG_LP_VACT_EN_Msk & ((value) << DSI_VID_MODE_CFG_LP_VACT_EN_Pos))
#define DSI_VID_MODE_CFG_LP_HBP_EN_Pos        _U_(12)                                              /**< (DSI_VID_MODE_CFG) When set to 1, this bit enables the return to low-power inside the HBP period when timing allows. Position */
#define DSI_VID_MODE_CFG_LP_HBP_EN_Msk        (_U_(0x1) << DSI_VID_MODE_CFG_LP_HBP_EN_Pos)         /**< (DSI_VID_MODE_CFG) When set to 1, this bit enables the return to low-power inside the HBP period when timing allows. Mask */
#define DSI_VID_MODE_CFG_LP_HBP_EN(value)     (DSI_VID_MODE_CFG_LP_HBP_EN_Msk & ((value) << DSI_VID_MODE_CFG_LP_HBP_EN_Pos))
#define DSI_VID_MODE_CFG_LP_HFP_EN_Pos        _U_(13)                                              /**< (DSI_VID_MODE_CFG) When set to 1, this bit enables the return to low-power inside the HFP period when timing allows. Position */
#define DSI_VID_MODE_CFG_LP_HFP_EN_Msk        (_U_(0x1) << DSI_VID_MODE_CFG_LP_HFP_EN_Pos)         /**< (DSI_VID_MODE_CFG) When set to 1, this bit enables the return to low-power inside the HFP period when timing allows. Mask */
#define DSI_VID_MODE_CFG_LP_HFP_EN(value)     (DSI_VID_MODE_CFG_LP_HFP_EN_Msk & ((value) << DSI_VID_MODE_CFG_LP_HFP_EN_Pos))
#define DSI_VID_MODE_CFG_FRAME_BTA_ACK_EN_Pos _U_(14)                                              /**< (DSI_VID_MODE_CFG) When set to 1, this bit enables the request for an acknowledge response at the end of a frame. Position */
#define DSI_VID_MODE_CFG_FRAME_BTA_ACK_EN_Msk (_U_(0x1) << DSI_VID_MODE_CFG_FRAME_BTA_ACK_EN_Pos)  /**< (DSI_VID_MODE_CFG) When set to 1, this bit enables the request for an acknowledge response at the end of a frame. Mask */
#define DSI_VID_MODE_CFG_FRAME_BTA_ACK_EN(value) (DSI_VID_MODE_CFG_FRAME_BTA_ACK_EN_Msk & ((value) << DSI_VID_MODE_CFG_FRAME_BTA_ACK_EN_Pos))
#define DSI_VID_MODE_CFG_LP_CMD_EN_Pos        _U_(15)                                              /**< (DSI_VID_MODE_CFG) When set to 1, this bit enables the command transmission only in low-power mode. Position */
#define DSI_VID_MODE_CFG_LP_CMD_EN_Msk        (_U_(0x1) << DSI_VID_MODE_CFG_LP_CMD_EN_Pos)         /**< (DSI_VID_MODE_CFG) When set to 1, this bit enables the command transmission only in low-power mode. Mask */
#define DSI_VID_MODE_CFG_LP_CMD_EN(value)     (DSI_VID_MODE_CFG_LP_CMD_EN_Msk & ((value) << DSI_VID_MODE_CFG_LP_CMD_EN_Pos))
#define DSI_VID_MODE_CFG_VPG_EN_Pos           _U_(16)                                              /**< (DSI_VID_MODE_CFG) When set to 1, this bit enables the video mode pattern generator. Position */
#define DSI_VID_MODE_CFG_VPG_EN_Msk           (_U_(0x1) << DSI_VID_MODE_CFG_VPG_EN_Pos)            /**< (DSI_VID_MODE_CFG) When set to 1, this bit enables the video mode pattern generator. Mask */
#define DSI_VID_MODE_CFG_VPG_EN(value)        (DSI_VID_MODE_CFG_VPG_EN_Msk & ((value) << DSI_VID_MODE_CFG_VPG_EN_Pos))
#define DSI_VID_MODE_CFG_VPG_MODE_Pos         _U_(20)                                              /**< (DSI_VID_MODE_CFG) This field is to select the pattern:  - 0: Color bar (horizontal or vertical)  - 1: BERpattern (vertical only) Position */
#define DSI_VID_MODE_CFG_VPG_MODE_Msk         (_U_(0x1) << DSI_VID_MODE_CFG_VPG_MODE_Pos)          /**< (DSI_VID_MODE_CFG) This field is to select the pattern:  - 0: Color bar (horizontal or vertical)  - 1: BERpattern (vertical only) Mask */
#define DSI_VID_MODE_CFG_VPG_MODE(value)      (DSI_VID_MODE_CFG_VPG_MODE_Msk & ((value) << DSI_VID_MODE_CFG_VPG_MODE_Pos))
#define DSI_VID_MODE_CFG_VPG_ORIENTATION_Pos  _U_(24)                                              /**< (DSI_VID_MODE_CFG) This field indicates the color bar orientation as follows:  - 0: Vertical mode  - 1: Horizontal mode Position */
#define DSI_VID_MODE_CFG_VPG_ORIENTATION_Msk  (_U_(0x1) << DSI_VID_MODE_CFG_VPG_ORIENTATION_Pos)   /**< (DSI_VID_MODE_CFG) This field indicates the color bar orientation as follows:  - 0: Vertical mode  - 1: Horizontal mode Mask */
#define DSI_VID_MODE_CFG_VPG_ORIENTATION(value) (DSI_VID_MODE_CFG_VPG_ORIENTATION_Msk & ((value) << DSI_VID_MODE_CFG_VPG_ORIENTATION_Pos))
#define DSI_VID_MODE_CFG_Msk                  _U_(0x0111FF03)                                      /**< (DSI_VID_MODE_CFG) Register Mask  */


/* -------- DSI_VID_PKT_SIZE : (DSI Offset: 0x3C) (R/W 32) This register configures the video packet size. -------- */
#define DSI_VID_PKT_SIZE_VID_PKT_SIZE_Pos     _U_(0)                                               /**< (DSI_VID_PKT_SIZE) This field configures the number of pixels in a single video packet.  - For 18-bit not loosely packed data types, this number must be a multiple of 4.  - For YCbCr data types, it must be a multiple of 2, as described in the DSI specification.  - For DSC24, this field configures the number of Bytes. Note that when using slices (i.e chunks) the minimum size packet size must be 3. Position */
#define DSI_VID_PKT_SIZE_VID_PKT_SIZE_Msk     (_U_(0x3FFF) << DSI_VID_PKT_SIZE_VID_PKT_SIZE_Pos)   /**< (DSI_VID_PKT_SIZE) This field configures the number of pixels in a single video packet.  - For 18-bit not loosely packed data types, this number must be a multiple of 4.  - For YCbCr data types, it must be a multiple of 2, as described in the DSI specification.  - For DSC24, this field configures the number of Bytes. Note that when using slices (i.e chunks) the minimum size packet size must be 3. Mask */
#define DSI_VID_PKT_SIZE_VID_PKT_SIZE(value)  (DSI_VID_PKT_SIZE_VID_PKT_SIZE_Msk & ((value) << DSI_VID_PKT_SIZE_VID_PKT_SIZE_Pos))
#define DSI_VID_PKT_SIZE_Msk                  _U_(0x00003FFF)                                      /**< (DSI_VID_PKT_SIZE) Register Mask  */


/* -------- DSI_VID_NUM_CHUNKS : (DSI Offset: 0x40) (R/W 32) This register configures the number of chunks to use. The data in each chunk has the size provided by VID_PKT_SIZE. -------- */
#define DSI_VID_NUM_CHUNKS_VID_NUM_CHUNKS_Pos _U_(0)                                               /**< (DSI_VID_NUM_CHUNKS) This register configures the number of chunks to be transmitted during a Line period (a chunk is pair made of a video packet and a null packet). If set to 0 or 1, video line is still transmitted in a single packet. If set to 1 that packet is part of a chunk, meaning that a null packet follows it (if vid_null_size>0). Otherwise, multiple chunks are used to transmit each video line. Position */
#define DSI_VID_NUM_CHUNKS_VID_NUM_CHUNKS_Msk (_U_(0x1FFF) << DSI_VID_NUM_CHUNKS_VID_NUM_CHUNKS_Pos) /**< (DSI_VID_NUM_CHUNKS) This register configures the number of chunks to be transmitted during a Line period (a chunk is pair made of a video packet and a null packet). If set to 0 or 1, video line is still transmitted in a single packet. If set to 1 that packet is part of a chunk, meaning that a null packet follows it (if vid_null_size>0). Otherwise, multiple chunks are used to transmit each video line. Mask */
#define DSI_VID_NUM_CHUNKS_VID_NUM_CHUNKS(value) (DSI_VID_NUM_CHUNKS_VID_NUM_CHUNKS_Msk & ((value) << DSI_VID_NUM_CHUNKS_VID_NUM_CHUNKS_Pos))
#define DSI_VID_NUM_CHUNKS_Msk                _U_(0x00001FFF)                                      /**< (DSI_VID_NUM_CHUNKS) Register Mask  */


/* -------- DSI_VID_NULL_SIZE : (DSI Offset: 0x44) (R/W 32) This register configures the size of null packets. -------- */
#define DSI_VID_NULL_SIZE_VID_NULL_SIZE_Pos   _U_(0)                                               /**< (DSI_VID_NULL_SIZE) This register configures the number of bytes inside a null packet. Setting to 0 disables null packets. Position */
#define DSI_VID_NULL_SIZE_VID_NULL_SIZE_Msk   (_U_(0x1FFF) << DSI_VID_NULL_SIZE_VID_NULL_SIZE_Pos) /**< (DSI_VID_NULL_SIZE) This register configures the number of bytes inside a null packet. Setting to 0 disables null packets. Mask */
#define DSI_VID_NULL_SIZE_VID_NULL_SIZE(value) (DSI_VID_NULL_SIZE_VID_NULL_SIZE_Msk & ((value) << DSI_VID_NULL_SIZE_VID_NULL_SIZE_Pos))
#define DSI_VID_NULL_SIZE_Msk                 _U_(0x00001FFF)                                      /**< (DSI_VID_NULL_SIZE) Register Mask  */


/* -------- DSI_VID_HSA_TIME : (DSI Offset: 0x48) (R/W 32) This register configures the video HSA time. -------- */
#define DSI_VID_HSA_TIME_VID_HSA_TIME_Pos     _U_(0)                                               /**< (DSI_VID_HSA_TIME) This field configures the Horizontal Synchronism Active period in lane byte clock cycles. Position */
#define DSI_VID_HSA_TIME_VID_HSA_TIME_Msk     (_U_(0xFFF) << DSI_VID_HSA_TIME_VID_HSA_TIME_Pos)    /**< (DSI_VID_HSA_TIME) This field configures the Horizontal Synchronism Active period in lane byte clock cycles. Mask */
#define DSI_VID_HSA_TIME_VID_HSA_TIME(value)  (DSI_VID_HSA_TIME_VID_HSA_TIME_Msk & ((value) << DSI_VID_HSA_TIME_VID_HSA_TIME_Pos))
#define DSI_VID_HSA_TIME_Msk                  _U_(0x00000FFF)                                      /**< (DSI_VID_HSA_TIME) Register Mask  */


/* -------- DSI_VID_HBP_TIME : (DSI Offset: 0x4C) (R/W 32) This register configures the video HBP time. -------- */
#define DSI_VID_HBP_TIME_VID_HBP_TIME_Pos     _U_(0)                                               /**< (DSI_VID_HBP_TIME) This field configures the Horizontal Back Porch period in lane byte clock cycles. Position */
#define DSI_VID_HBP_TIME_VID_HBP_TIME_Msk     (_U_(0xFFF) << DSI_VID_HBP_TIME_VID_HBP_TIME_Pos)    /**< (DSI_VID_HBP_TIME) This field configures the Horizontal Back Porch period in lane byte clock cycles. Mask */
#define DSI_VID_HBP_TIME_VID_HBP_TIME(value)  (DSI_VID_HBP_TIME_VID_HBP_TIME_Msk & ((value) << DSI_VID_HBP_TIME_VID_HBP_TIME_Pos))
#define DSI_VID_HBP_TIME_Msk                  _U_(0x00000FFF)                                      /**< (DSI_VID_HBP_TIME) Register Mask  */


/* -------- DSI_VID_HLINE_TIME : (DSI Offset: 0x50) (R/W 32) This register configures the overall time for each video line. -------- */
#define DSI_VID_HLINE_TIME_VID_HLINE_TIME_Pos _U_(0)                                               /**< (DSI_VID_HLINE_TIME) This field configures the size of the total line time (HSA+HBP+HACT+HFP) counted in lane byte clock cycles. Position */
#define DSI_VID_HLINE_TIME_VID_HLINE_TIME_Msk (_U_(0x7FFF) << DSI_VID_HLINE_TIME_VID_HLINE_TIME_Pos) /**< (DSI_VID_HLINE_TIME) This field configures the size of the total line time (HSA+HBP+HACT+HFP) counted in lane byte clock cycles. Mask */
#define DSI_VID_HLINE_TIME_VID_HLINE_TIME(value) (DSI_VID_HLINE_TIME_VID_HLINE_TIME_Msk & ((value) << DSI_VID_HLINE_TIME_VID_HLINE_TIME_Pos))
#define DSI_VID_HLINE_TIME_Msk                _U_(0x00007FFF)                                      /**< (DSI_VID_HLINE_TIME) Register Mask  */


/* -------- DSI_VID_VSA_LINES : (DSI Offset: 0x54) (R/W 32) This register configures the VSA period. -------- */
#define DSI_VID_VSA_LINES_VSA_LINES_Pos       _U_(0)                                               /**< (DSI_VID_VSA_LINES) This field configures the Vertical Synchronism Active period measured in number of horizontal lines. Position */
#define DSI_VID_VSA_LINES_VSA_LINES_Msk       (_U_(0x3FF) << DSI_VID_VSA_LINES_VSA_LINES_Pos)      /**< (DSI_VID_VSA_LINES) This field configures the Vertical Synchronism Active period measured in number of horizontal lines. Mask */
#define DSI_VID_VSA_LINES_VSA_LINES(value)    (DSI_VID_VSA_LINES_VSA_LINES_Msk & ((value) << DSI_VID_VSA_LINES_VSA_LINES_Pos))
#define DSI_VID_VSA_LINES_Msk                 _U_(0x000003FF)                                      /**< (DSI_VID_VSA_LINES) Register Mask  */


/* -------- DSI_VID_VBP_LINES : (DSI Offset: 0x58) (R/W 32) This register configures the VBP period. -------- */
#define DSI_VID_VBP_LINES_VBP_LINES_Pos       _U_(0)                                               /**< (DSI_VID_VBP_LINES) This field configures the Vertical Back Porch period measured in number of horizontal lines. Position */
#define DSI_VID_VBP_LINES_VBP_LINES_Msk       (_U_(0x3FF) << DSI_VID_VBP_LINES_VBP_LINES_Pos)      /**< (DSI_VID_VBP_LINES) This field configures the Vertical Back Porch period measured in number of horizontal lines. Mask */
#define DSI_VID_VBP_LINES_VBP_LINES(value)    (DSI_VID_VBP_LINES_VBP_LINES_Msk & ((value) << DSI_VID_VBP_LINES_VBP_LINES_Pos))
#define DSI_VID_VBP_LINES_Msk                 _U_(0x000003FF)                                      /**< (DSI_VID_VBP_LINES) Register Mask  */


/* -------- DSI_VID_VFP_LINES : (DSI Offset: 0x5C) (R/W 32) This register configures the VFP period. -------- */
#define DSI_VID_VFP_LINES_VFP_LINES_Pos       _U_(0)                                               /**< (DSI_VID_VFP_LINES) This field configures the Vertical Front Porch period measured in number of horizontal lines. Position */
#define DSI_VID_VFP_LINES_VFP_LINES_Msk       (_U_(0x3FF) << DSI_VID_VFP_LINES_VFP_LINES_Pos)      /**< (DSI_VID_VFP_LINES) This field configures the Vertical Front Porch period measured in number of horizontal lines. Mask */
#define DSI_VID_VFP_LINES_VFP_LINES(value)    (DSI_VID_VFP_LINES_VFP_LINES_Msk & ((value) << DSI_VID_VFP_LINES_VFP_LINES_Pos))
#define DSI_VID_VFP_LINES_Msk                 _U_(0x000003FF)                                      /**< (DSI_VID_VFP_LINES) Register Mask  */


/* -------- DSI_VID_VACTIVE_LINES : (DSI Offset: 0x60) (R/W 32) This register configures the vertical resolution of video. -------- */
#define DSI_VID_VACTIVE_LINES_V_ACTIVE_LINES_Pos _U_(0)                                               /**< (DSI_VID_VACTIVE_LINES) This field configures the Vertical Active period measured in number of horizontal lines. Position */
#define DSI_VID_VACTIVE_LINES_V_ACTIVE_LINES_Msk (_U_(0x3FFF) << DSI_VID_VACTIVE_LINES_V_ACTIVE_LINES_Pos) /**< (DSI_VID_VACTIVE_LINES) This field configures the Vertical Active period measured in number of horizontal lines. Mask */
#define DSI_VID_VACTIVE_LINES_V_ACTIVE_LINES(value) (DSI_VID_VACTIVE_LINES_V_ACTIVE_LINES_Msk & ((value) << DSI_VID_VACTIVE_LINES_V_ACTIVE_LINES_Pos))
#define DSI_VID_VACTIVE_LINES_Msk             _U_(0x00003FFF)                                      /**< (DSI_VID_VACTIVE_LINES) Register Mask  */


/* -------- DSI_CMD_MODE_CFG : (DSI Offset: 0x68) (R/W 32) This register configures several aspect of command mode operation, tearing effect, acknowledge for each packet and the speed mode to transmit each Data Type related to commands. -------- */
#define DSI_CMD_MODE_CFG_TEAR_FX_EN_Pos       _U_(0)                                               /**< (DSI_CMD_MODE_CFG) When set to 1, this bit enables the tearing effect acknowledge request. Position */
#define DSI_CMD_MODE_CFG_TEAR_FX_EN_Msk       (_U_(0x1) << DSI_CMD_MODE_CFG_TEAR_FX_EN_Pos)        /**< (DSI_CMD_MODE_CFG) When set to 1, this bit enables the tearing effect acknowledge request. Mask */
#define DSI_CMD_MODE_CFG_TEAR_FX_EN(value)    (DSI_CMD_MODE_CFG_TEAR_FX_EN_Msk & ((value) << DSI_CMD_MODE_CFG_TEAR_FX_EN_Pos))
#define DSI_CMD_MODE_CFG_ACK_RQST_EN_Pos      _U_(1)                                               /**< (DSI_CMD_MODE_CFG) When set to 1, this bit enables the acknowledge request after each packet transmission. Position */
#define DSI_CMD_MODE_CFG_ACK_RQST_EN_Msk      (_U_(0x1) << DSI_CMD_MODE_CFG_ACK_RQST_EN_Pos)       /**< (DSI_CMD_MODE_CFG) When set to 1, this bit enables the acknowledge request after each packet transmission. Mask */
#define DSI_CMD_MODE_CFG_ACK_RQST_EN(value)   (DSI_CMD_MODE_CFG_ACK_RQST_EN_Msk & ((value) << DSI_CMD_MODE_CFG_ACK_RQST_EN_Pos))
#define DSI_CMD_MODE_CFG_GEN_SW_0P_TX_Pos     _U_(8)                                               /**< (DSI_CMD_MODE_CFG) This bit configures the Generic short write packet with zero parameter command transmission type:  - 0: High-speed  - 1: Low-power Position */
#define DSI_CMD_MODE_CFG_GEN_SW_0P_TX_Msk     (_U_(0x1) << DSI_CMD_MODE_CFG_GEN_SW_0P_TX_Pos)      /**< (DSI_CMD_MODE_CFG) This bit configures the Generic short write packet with zero parameter command transmission type:  - 0: High-speed  - 1: Low-power Mask */
#define DSI_CMD_MODE_CFG_GEN_SW_0P_TX(value)  (DSI_CMD_MODE_CFG_GEN_SW_0P_TX_Msk & ((value) << DSI_CMD_MODE_CFG_GEN_SW_0P_TX_Pos))
#define DSI_CMD_MODE_CFG_GEN_SW_1P_TX_Pos     _U_(9)                                               /**< (DSI_CMD_MODE_CFG) This bit configures the Generic short write packet with one parameter command transmission type:  - 0: High-speed  - 1: Low-power Position */
#define DSI_CMD_MODE_CFG_GEN_SW_1P_TX_Msk     (_U_(0x1) << DSI_CMD_MODE_CFG_GEN_SW_1P_TX_Pos)      /**< (DSI_CMD_MODE_CFG) This bit configures the Generic short write packet with one parameter command transmission type:  - 0: High-speed  - 1: Low-power Mask */
#define DSI_CMD_MODE_CFG_GEN_SW_1P_TX(value)  (DSI_CMD_MODE_CFG_GEN_SW_1P_TX_Msk & ((value) << DSI_CMD_MODE_CFG_GEN_SW_1P_TX_Pos))
#define DSI_CMD_MODE_CFG_GEN_SW_2P_TX_Pos     _U_(10)                                              /**< (DSI_CMD_MODE_CFG) This bit configures the Generic short write packet with two parameters command transmission type:  - 0: High-speed  - 1: Low-power Position */
#define DSI_CMD_MODE_CFG_GEN_SW_2P_TX_Msk     (_U_(0x1) << DSI_CMD_MODE_CFG_GEN_SW_2P_TX_Pos)      /**< (DSI_CMD_MODE_CFG) This bit configures the Generic short write packet with two parameters command transmission type:  - 0: High-speed  - 1: Low-power Mask */
#define DSI_CMD_MODE_CFG_GEN_SW_2P_TX(value)  (DSI_CMD_MODE_CFG_GEN_SW_2P_TX_Msk & ((value) << DSI_CMD_MODE_CFG_GEN_SW_2P_TX_Pos))
#define DSI_CMD_MODE_CFG_GEN_SR_0P_TX_Pos     _U_(11)                                              /**< (DSI_CMD_MODE_CFG) This bit configures the Generic short read packet with zero parameter command transmission type:  - 0: High-speed  - 1: Low-power Position */
#define DSI_CMD_MODE_CFG_GEN_SR_0P_TX_Msk     (_U_(0x1) << DSI_CMD_MODE_CFG_GEN_SR_0P_TX_Pos)      /**< (DSI_CMD_MODE_CFG) This bit configures the Generic short read packet with zero parameter command transmission type:  - 0: High-speed  - 1: Low-power Mask */
#define DSI_CMD_MODE_CFG_GEN_SR_0P_TX(value)  (DSI_CMD_MODE_CFG_GEN_SR_0P_TX_Msk & ((value) << DSI_CMD_MODE_CFG_GEN_SR_0P_TX_Pos))
#define DSI_CMD_MODE_CFG_GEN_SR_1P_TX_Pos     _U_(12)                                              /**< (DSI_CMD_MODE_CFG) This bit configures the Generic short read packet with one parameter command transmission type:  - 0: High-speed  - 1: Low-power Position */
#define DSI_CMD_MODE_CFG_GEN_SR_1P_TX_Msk     (_U_(0x1) << DSI_CMD_MODE_CFG_GEN_SR_1P_TX_Pos)      /**< (DSI_CMD_MODE_CFG) This bit configures the Generic short read packet with one parameter command transmission type:  - 0: High-speed  - 1: Low-power Mask */
#define DSI_CMD_MODE_CFG_GEN_SR_1P_TX(value)  (DSI_CMD_MODE_CFG_GEN_SR_1P_TX_Msk & ((value) << DSI_CMD_MODE_CFG_GEN_SR_1P_TX_Pos))
#define DSI_CMD_MODE_CFG_GEN_SR_2P_TX_Pos     _U_(13)                                              /**< (DSI_CMD_MODE_CFG) This bit configures the Generic short read packet with two parameters command transmission type:  - 0: High-speed  - 1: Low-power Position */
#define DSI_CMD_MODE_CFG_GEN_SR_2P_TX_Msk     (_U_(0x1) << DSI_CMD_MODE_CFG_GEN_SR_2P_TX_Pos)      /**< (DSI_CMD_MODE_CFG) This bit configures the Generic short read packet with two parameters command transmission type:  - 0: High-speed  - 1: Low-power Mask */
#define DSI_CMD_MODE_CFG_GEN_SR_2P_TX(value)  (DSI_CMD_MODE_CFG_GEN_SR_2P_TX_Msk & ((value) << DSI_CMD_MODE_CFG_GEN_SR_2P_TX_Pos))
#define DSI_CMD_MODE_CFG_GEN_LW_TX_Pos        _U_(14)                                              /**< (DSI_CMD_MODE_CFG) This bit configures the Generic long write packet command transmission type:  - 0: High-speed  - 1: Low-power Position */
#define DSI_CMD_MODE_CFG_GEN_LW_TX_Msk        (_U_(0x1) << DSI_CMD_MODE_CFG_GEN_LW_TX_Pos)         /**< (DSI_CMD_MODE_CFG) This bit configures the Generic long write packet command transmission type:  - 0: High-speed  - 1: Low-power Mask */
#define DSI_CMD_MODE_CFG_GEN_LW_TX(value)     (DSI_CMD_MODE_CFG_GEN_LW_TX_Msk & ((value) << DSI_CMD_MODE_CFG_GEN_LW_TX_Pos))
#define DSI_CMD_MODE_CFG_DCS_SW_0P_TX_Pos     _U_(16)                                              /**< (DSI_CMD_MODE_CFG) This bit configures the DCS short write packet with zero parameter command transmission type:  - 0: High-speed  - 1: Low-power Position */
#define DSI_CMD_MODE_CFG_DCS_SW_0P_TX_Msk     (_U_(0x1) << DSI_CMD_MODE_CFG_DCS_SW_0P_TX_Pos)      /**< (DSI_CMD_MODE_CFG) This bit configures the DCS short write packet with zero parameter command transmission type:  - 0: High-speed  - 1: Low-power Mask */
#define DSI_CMD_MODE_CFG_DCS_SW_0P_TX(value)  (DSI_CMD_MODE_CFG_DCS_SW_0P_TX_Msk & ((value) << DSI_CMD_MODE_CFG_DCS_SW_0P_TX_Pos))
#define DSI_CMD_MODE_CFG_DCS_SW_1P_TX_Pos     _U_(17)                                              /**< (DSI_CMD_MODE_CFG) This bit configures the DCS short write packet with one parameter command transmission type:  - 0: High-speed  - 1: Low-power Position */
#define DSI_CMD_MODE_CFG_DCS_SW_1P_TX_Msk     (_U_(0x1) << DSI_CMD_MODE_CFG_DCS_SW_1P_TX_Pos)      /**< (DSI_CMD_MODE_CFG) This bit configures the DCS short write packet with one parameter command transmission type:  - 0: High-speed  - 1: Low-power Mask */
#define DSI_CMD_MODE_CFG_DCS_SW_1P_TX(value)  (DSI_CMD_MODE_CFG_DCS_SW_1P_TX_Msk & ((value) << DSI_CMD_MODE_CFG_DCS_SW_1P_TX_Pos))
#define DSI_CMD_MODE_CFG_DCS_SR_0P_TX_Pos     _U_(18)                                              /**< (DSI_CMD_MODE_CFG) This bit configures the DCS short read packet with zero parameter command transmission type:  - 0: High-speed  - 1: Low-power Position */
#define DSI_CMD_MODE_CFG_DCS_SR_0P_TX_Msk     (_U_(0x1) << DSI_CMD_MODE_CFG_DCS_SR_0P_TX_Pos)      /**< (DSI_CMD_MODE_CFG) This bit configures the DCS short read packet with zero parameter command transmission type:  - 0: High-speed  - 1: Low-power Mask */
#define DSI_CMD_MODE_CFG_DCS_SR_0P_TX(value)  (DSI_CMD_MODE_CFG_DCS_SR_0P_TX_Msk & ((value) << DSI_CMD_MODE_CFG_DCS_SR_0P_TX_Pos))
#define DSI_CMD_MODE_CFG_DCS_LW_TX_Pos        _U_(19)                                              /**< (DSI_CMD_MODE_CFG) This bit configures the DCS long write packet command transmission type:  - 0: High-speed  - 1: Low-power Position */
#define DSI_CMD_MODE_CFG_DCS_LW_TX_Msk        (_U_(0x1) << DSI_CMD_MODE_CFG_DCS_LW_TX_Pos)         /**< (DSI_CMD_MODE_CFG) This bit configures the DCS long write packet command transmission type:  - 0: High-speed  - 1: Low-power Mask */
#define DSI_CMD_MODE_CFG_DCS_LW_TX(value)     (DSI_CMD_MODE_CFG_DCS_LW_TX_Msk & ((value) << DSI_CMD_MODE_CFG_DCS_LW_TX_Pos))
#define DSI_CMD_MODE_CFG_MAX_RD_PKT_SIZE_Pos  _U_(24)                                              /**< (DSI_CMD_MODE_CFG) This bit configures the maximum read packet size command transmission type:  - 0: High-speed  - 1: Low-power Position */
#define DSI_CMD_MODE_CFG_MAX_RD_PKT_SIZE_Msk  (_U_(0x1) << DSI_CMD_MODE_CFG_MAX_RD_PKT_SIZE_Pos)   /**< (DSI_CMD_MODE_CFG) This bit configures the maximum read packet size command transmission type:  - 0: High-speed  - 1: Low-power Mask */
#define DSI_CMD_MODE_CFG_MAX_RD_PKT_SIZE(value) (DSI_CMD_MODE_CFG_MAX_RD_PKT_SIZE_Msk & ((value) << DSI_CMD_MODE_CFG_MAX_RD_PKT_SIZE_Pos))
#define DSI_CMD_MODE_CFG_Msk                  _U_(0x010F7F03)                                      /**< (DSI_CMD_MODE_CFG) Register Mask  */


/* -------- DSI_GEN_HDR : (DSI Offset: 0x6C) (R/W 32) This register sets the header for new packets sent using the Generic interface. -------- */
#define DSI_GEN_HDR_GEN_DT_Pos                _U_(0)                                               /**< (DSI_GEN_HDR) This field configures the packet Data Type of the header packet. Position */
#define DSI_GEN_HDR_GEN_DT_Msk                (_U_(0x3F) << DSI_GEN_HDR_GEN_DT_Pos)                /**< (DSI_GEN_HDR) This field configures the packet Data Type of the header packet. Mask */
#define DSI_GEN_HDR_GEN_DT(value)             (DSI_GEN_HDR_GEN_DT_Msk & ((value) << DSI_GEN_HDR_GEN_DT_Pos))
#define DSI_GEN_HDR_GEN_VC_Pos                _U_(6)                                               /**< (DSI_GEN_HDR) This field configures the Virtual Channel ID of the header packet. Position */
#define DSI_GEN_HDR_GEN_VC_Msk                (_U_(0x3) << DSI_GEN_HDR_GEN_VC_Pos)                 /**< (DSI_GEN_HDR) This field configures the Virtual Channel ID of the header packet. Mask */
#define DSI_GEN_HDR_GEN_VC(value)             (DSI_GEN_HDR_GEN_VC_Msk & ((value) << DSI_GEN_HDR_GEN_VC_Pos))
#define DSI_GEN_HDR_GEN_WC_LSBYTE_Pos         _U_(8)                                               /**< (DSI_GEN_HDR) This field configures the least significant byte of the header packet's Word count for long packets or data 0 for short packets. Position */
#define DSI_GEN_HDR_GEN_WC_LSBYTE_Msk         (_U_(0xFF) << DSI_GEN_HDR_GEN_WC_LSBYTE_Pos)         /**< (DSI_GEN_HDR) This field configures the least significant byte of the header packet's Word count for long packets or data 0 for short packets. Mask */
#define DSI_GEN_HDR_GEN_WC_LSBYTE(value)      (DSI_GEN_HDR_GEN_WC_LSBYTE_Msk & ((value) << DSI_GEN_HDR_GEN_WC_LSBYTE_Pos))
#define DSI_GEN_HDR_GEN_WC_MSBYTE_Pos         _U_(16)                                              /**< (DSI_GEN_HDR) This field configures the most significant byte of the header packet's word count for long packets or data 1 for short packets. Position */
#define DSI_GEN_HDR_GEN_WC_MSBYTE_Msk         (_U_(0xFF) << DSI_GEN_HDR_GEN_WC_MSBYTE_Pos)         /**< (DSI_GEN_HDR) This field configures the most significant byte of the header packet's word count for long packets or data 1 for short packets. Mask */
#define DSI_GEN_HDR_GEN_WC_MSBYTE(value)      (DSI_GEN_HDR_GEN_WC_MSBYTE_Msk & ((value) << DSI_GEN_HDR_GEN_WC_MSBYTE_Pos))
#define DSI_GEN_HDR_Msk                       _U_(0x00FFFFFF)                                      /**< (DSI_GEN_HDR) Register Mask  */


/* -------- DSI_GEN_PLD_DATA : (DSI Offset: 0x70) (R/W 32) This register sets the payload for packets sent using the Generic interface and, when read, returns the contents of READ responses from the peripheral. -------- */
#define DSI_GEN_PLD_DATA_GEN_PLD_B1_Pos       _U_(0)                                               /**< (DSI_GEN_PLD_DATA) This field indicates byte 1 of the packet payload. Position */
#define DSI_GEN_PLD_DATA_GEN_PLD_B1_Msk       (_U_(0xFF) << DSI_GEN_PLD_DATA_GEN_PLD_B1_Pos)       /**< (DSI_GEN_PLD_DATA) This field indicates byte 1 of the packet payload. Mask */
#define DSI_GEN_PLD_DATA_GEN_PLD_B1(value)    (DSI_GEN_PLD_DATA_GEN_PLD_B1_Msk & ((value) << DSI_GEN_PLD_DATA_GEN_PLD_B1_Pos))
#define DSI_GEN_PLD_DATA_GEN_PLD_B2_Pos       _U_(8)                                               /**< (DSI_GEN_PLD_DATA) This field indicates byte 2 of the packet payload. Position */
#define DSI_GEN_PLD_DATA_GEN_PLD_B2_Msk       (_U_(0xFF) << DSI_GEN_PLD_DATA_GEN_PLD_B2_Pos)       /**< (DSI_GEN_PLD_DATA) This field indicates byte 2 of the packet payload. Mask */
#define DSI_GEN_PLD_DATA_GEN_PLD_B2(value)    (DSI_GEN_PLD_DATA_GEN_PLD_B2_Msk & ((value) << DSI_GEN_PLD_DATA_GEN_PLD_B2_Pos))
#define DSI_GEN_PLD_DATA_GEN_PLD_B3_Pos       _U_(16)                                              /**< (DSI_GEN_PLD_DATA) This field indicates byte 3 of the packet payload. Position */
#define DSI_GEN_PLD_DATA_GEN_PLD_B3_Msk       (_U_(0xFF) << DSI_GEN_PLD_DATA_GEN_PLD_B3_Pos)       /**< (DSI_GEN_PLD_DATA) This field indicates byte 3 of the packet payload. Mask */
#define DSI_GEN_PLD_DATA_GEN_PLD_B3(value)    (DSI_GEN_PLD_DATA_GEN_PLD_B3_Msk & ((value) << DSI_GEN_PLD_DATA_GEN_PLD_B3_Pos))
#define DSI_GEN_PLD_DATA_GEN_PLD_B4_Pos       _U_(24)                                              /**< (DSI_GEN_PLD_DATA) This field indicates byte 4 of the packet payload. Position */
#define DSI_GEN_PLD_DATA_GEN_PLD_B4_Msk       (_U_(0xFF) << DSI_GEN_PLD_DATA_GEN_PLD_B4_Pos)       /**< (DSI_GEN_PLD_DATA) This field indicates byte 4 of the packet payload. Mask */
#define DSI_GEN_PLD_DATA_GEN_PLD_B4(value)    (DSI_GEN_PLD_DATA_GEN_PLD_B4_Msk & ((value) << DSI_GEN_PLD_DATA_GEN_PLD_B4_Pos))
#define DSI_GEN_PLD_DATA_Msk                  _U_(0xFFFFFFFF)                                      /**< (DSI_GEN_PLD_DATA) Register Mask  */


/* -------- DSI_CMD_PKT_STATUS : (DSI Offset: 0x74) ( R/ 32) This register configures contains information about the status of FIFOs related to DBI and Generic interface. -------- */
#define DSI_CMD_PKT_STATUS_GEN_CMD_EMPTY_Pos  _U_(0)                                               /**< (DSI_CMD_PKT_STATUS) This bit indicates the empty status of the generic command FIFO. Position */
#define DSI_CMD_PKT_STATUS_GEN_CMD_EMPTY_Msk  (_U_(0x1) << DSI_CMD_PKT_STATUS_GEN_CMD_EMPTY_Pos)   /**< (DSI_CMD_PKT_STATUS) This bit indicates the empty status of the generic command FIFO. Mask */
#define DSI_CMD_PKT_STATUS_GEN_CMD_EMPTY(value) (DSI_CMD_PKT_STATUS_GEN_CMD_EMPTY_Msk & ((value) << DSI_CMD_PKT_STATUS_GEN_CMD_EMPTY_Pos))
#define DSI_CMD_PKT_STATUS_GEN_CMD_FULL_Pos   _U_(1)                                               /**< (DSI_CMD_PKT_STATUS) This bit indicates the full status of the generic command FIFO. Position */
#define DSI_CMD_PKT_STATUS_GEN_CMD_FULL_Msk   (_U_(0x1) << DSI_CMD_PKT_STATUS_GEN_CMD_FULL_Pos)    /**< (DSI_CMD_PKT_STATUS) This bit indicates the full status of the generic command FIFO. Mask */
#define DSI_CMD_PKT_STATUS_GEN_CMD_FULL(value) (DSI_CMD_PKT_STATUS_GEN_CMD_FULL_Msk & ((value) << DSI_CMD_PKT_STATUS_GEN_CMD_FULL_Pos))
#define DSI_CMD_PKT_STATUS_GEN_PLD_W_EMPTY_Pos _U_(2)                                               /**< (DSI_CMD_PKT_STATUS) This bit indicates the empty status of the generic write payload FIFO. Position */
#define DSI_CMD_PKT_STATUS_GEN_PLD_W_EMPTY_Msk (_U_(0x1) << DSI_CMD_PKT_STATUS_GEN_PLD_W_EMPTY_Pos) /**< (DSI_CMD_PKT_STATUS) This bit indicates the empty status of the generic write payload FIFO. Mask */
#define DSI_CMD_PKT_STATUS_GEN_PLD_W_EMPTY(value) (DSI_CMD_PKT_STATUS_GEN_PLD_W_EMPTY_Msk & ((value) << DSI_CMD_PKT_STATUS_GEN_PLD_W_EMPTY_Pos))
#define DSI_CMD_PKT_STATUS_GEN_PLD_W_FULL_Pos _U_(3)                                               /**< (DSI_CMD_PKT_STATUS) This bit indicates the full status of the generic write payload FIFO. Position */
#define DSI_CMD_PKT_STATUS_GEN_PLD_W_FULL_Msk (_U_(0x1) << DSI_CMD_PKT_STATUS_GEN_PLD_W_FULL_Pos)  /**< (DSI_CMD_PKT_STATUS) This bit indicates the full status of the generic write payload FIFO. Mask */
#define DSI_CMD_PKT_STATUS_GEN_PLD_W_FULL(value) (DSI_CMD_PKT_STATUS_GEN_PLD_W_FULL_Msk & ((value) << DSI_CMD_PKT_STATUS_GEN_PLD_W_FULL_Pos))
#define DSI_CMD_PKT_STATUS_GEN_PLD_R_EMPTY_Pos _U_(4)                                               /**< (DSI_CMD_PKT_STATUS) This bit indicates the empty status of the generic read payload FIFO. Position */
#define DSI_CMD_PKT_STATUS_GEN_PLD_R_EMPTY_Msk (_U_(0x1) << DSI_CMD_PKT_STATUS_GEN_PLD_R_EMPTY_Pos) /**< (DSI_CMD_PKT_STATUS) This bit indicates the empty status of the generic read payload FIFO. Mask */
#define DSI_CMD_PKT_STATUS_GEN_PLD_R_EMPTY(value) (DSI_CMD_PKT_STATUS_GEN_PLD_R_EMPTY_Msk & ((value) << DSI_CMD_PKT_STATUS_GEN_PLD_R_EMPTY_Pos))
#define DSI_CMD_PKT_STATUS_GEN_PLD_R_FULL_Pos _U_(5)                                               /**< (DSI_CMD_PKT_STATUS) This bit indicates the full status of the generic read payload FIFO. Position */
#define DSI_CMD_PKT_STATUS_GEN_PLD_R_FULL_Msk (_U_(0x1) << DSI_CMD_PKT_STATUS_GEN_PLD_R_FULL_Pos)  /**< (DSI_CMD_PKT_STATUS) This bit indicates the full status of the generic read payload FIFO. Mask */
#define DSI_CMD_PKT_STATUS_GEN_PLD_R_FULL(value) (DSI_CMD_PKT_STATUS_GEN_PLD_R_FULL_Msk & ((value) << DSI_CMD_PKT_STATUS_GEN_PLD_R_FULL_Pos))
#define DSI_CMD_PKT_STATUS_GEN_RD_CMD_BUSY_Pos _U_(6)                                               /**< (DSI_CMD_PKT_STATUS) This bit is set when a read command is issued and cleared when the entire response is stored in the FIFO for GENERIC interface. Position */
#define DSI_CMD_PKT_STATUS_GEN_RD_CMD_BUSY_Msk (_U_(0x1) << DSI_CMD_PKT_STATUS_GEN_RD_CMD_BUSY_Pos) /**< (DSI_CMD_PKT_STATUS) This bit is set when a read command is issued and cleared when the entire response is stored in the FIFO for GENERIC interface. Mask */
#define DSI_CMD_PKT_STATUS_GEN_RD_CMD_BUSY(value) (DSI_CMD_PKT_STATUS_GEN_RD_CMD_BUSY_Msk & ((value) << DSI_CMD_PKT_STATUS_GEN_RD_CMD_BUSY_Pos))
#define DSI_CMD_PKT_STATUS_Msk                _U_(0x0000007F)                                      /**< (DSI_CMD_PKT_STATUS) Register Mask  */


/* -------- DSI_TO_CNT_CFG : (DSI Offset: 0x78) (R/W 32) This register configures counters that trigger timeout errors. These are used to warn the system of a failure, through an interrupt, and restart the core in case of unexpected situations that cause deadlock conditions. -------- */
#define DSI_TO_CNT_CFG_LPRX_TO_CNT_Pos        _U_(0)                                               /**< (DSI_TO_CNT_CFG) This field configures the timeout counter that triggers a low-power reception timeout contention detection (measured in TO_CLK_DIVISION cycles). Position */
#define DSI_TO_CNT_CFG_LPRX_TO_CNT_Msk        (_U_(0xFFFF) << DSI_TO_CNT_CFG_LPRX_TO_CNT_Pos)      /**< (DSI_TO_CNT_CFG) This field configures the timeout counter that triggers a low-power reception timeout contention detection (measured in TO_CLK_DIVISION cycles). Mask */
#define DSI_TO_CNT_CFG_LPRX_TO_CNT(value)     (DSI_TO_CNT_CFG_LPRX_TO_CNT_Msk & ((value) << DSI_TO_CNT_CFG_LPRX_TO_CNT_Pos))
#define DSI_TO_CNT_CFG_HSTX_TO_CNT_Pos        _U_(16)                                              /**< (DSI_TO_CNT_CFG) This field configures the timeout counter that triggers a high-speed transmission timeout contention detection (measured in TO_CLK_DIVISION cycles).  If using non-burst mode and there is not sufficient time to switch from HS to LP and back in the period which is from one line data finishing to the next line sync start, the DSI link will return LP state once per frame, then you should configure the TO_CLK_DIVISION and hstx_to_cnt to satisfy the formula below: hstx_to_cnt * lanebyteclkperiod * TO_CLK_DIVISION >= the time of one FRAME data transmission * (1 + 10%)  In burst mode, RGB pixel packets are time-compressed, leaving more time during a scan line. So if in burst mode and there is sufficient time to switch from HS to LP and back in the period of time from one line data finishing to the next line sync start, the DSI link can return LP mode and back in this time interval to save power. If you choose so, you should configure the TO_CLK_DIVISION and hstx_to_cnt to satisfy the formula below: hstx_to_cnt * lanebyteclkperiod * TO_CLK_DIVISION >= the time of one LINE data transmission * (1 + 10%) Position */
#define DSI_TO_CNT_CFG_HSTX_TO_CNT_Msk        (_U_(0xFFFF) << DSI_TO_CNT_CFG_HSTX_TO_CNT_Pos)      /**< (DSI_TO_CNT_CFG) This field configures the timeout counter that triggers a high-speed transmission timeout contention detection (measured in TO_CLK_DIVISION cycles).  If using non-burst mode and there is not sufficient time to switch from HS to LP and back in the period which is from one line data finishing to the next line sync start, the DSI link will return LP state once per frame, then you should configure the TO_CLK_DIVISION and hstx_to_cnt to satisfy the formula below: hstx_to_cnt * lanebyteclkperiod * TO_CLK_DIVISION >= the time of one FRAME data transmission * (1 + 10%)  In burst mode, RGB pixel packets are time-compressed, leaving more time during a scan line. So if in burst mode and there is sufficient time to switch from HS to LP and back in the period of time from one line data finishing to the next line sync start, the DSI link can return LP mode and back in this time interval to save power. If you choose so, you should configure the TO_CLK_DIVISION and hstx_to_cnt to satisfy the formula below: hstx_to_cnt * lanebyteclkperiod * TO_CLK_DIVISION >= the time of one LINE data transmission * (1 + 10%) Mask */
#define DSI_TO_CNT_CFG_HSTX_TO_CNT(value)     (DSI_TO_CNT_CFG_HSTX_TO_CNT_Msk & ((value) << DSI_TO_CNT_CFG_HSTX_TO_CNT_Pos))
#define DSI_TO_CNT_CFG_Msk                    _U_(0xFFFFFFFF)                                      /**< (DSI_TO_CNT_CFG) Register Mask  */


/* -------- DSI_HS_RD_TO_CNT : (DSI Offset: 0x7C) (R/W 32) This register configures the Peripheral Response timeout after High-Speed Read operations. -------- */
#define DSI_HS_RD_TO_CNT_HS_RD_TO_CNT_Pos     _U_(0)                                               /**< (DSI_HS_RD_TO_CNT) This field sets a period for which DWC_mipi_dsi_host keeps the link still, after sending a High-Speed Read operation. This period is measured in cycles of lanebyteclk, starts to count when the D-PHY enters stop state and causes no interrupts. Position */
#define DSI_HS_RD_TO_CNT_HS_RD_TO_CNT_Msk     (_U_(0xFFFF) << DSI_HS_RD_TO_CNT_HS_RD_TO_CNT_Pos)   /**< (DSI_HS_RD_TO_CNT) This field sets a period for which DWC_mipi_dsi_host keeps the link still, after sending a High-Speed Read operation. This period is measured in cycles of lanebyteclk, starts to count when the D-PHY enters stop state and causes no interrupts. Mask */
#define DSI_HS_RD_TO_CNT_HS_RD_TO_CNT(value)  (DSI_HS_RD_TO_CNT_HS_RD_TO_CNT_Msk & ((value) << DSI_HS_RD_TO_CNT_HS_RD_TO_CNT_Pos))
#define DSI_HS_RD_TO_CNT_Msk                  _U_(0x0000FFFF)                                      /**< (DSI_HS_RD_TO_CNT) Register Mask  */


/* -------- DSI_LP_RD_TO_CNT : (DSI Offset: 0x80) (R/W 32) This register configures the Peripheral Response timeout after Low-Power Read operations. -------- */
#define DSI_LP_RD_TO_CNT_LP_RD_TO_CNT_Pos     _U_(0)                                               /**< (DSI_LP_RD_TO_CNT) This field sets a period for which DWC_mipi_dsi_host keeps the link still, after sending a Low-Power Read operation. This period is measured in cycles of lanebyteclk, starts to count when the D-PHY enters stop state and causes no interrupts. Position */
#define DSI_LP_RD_TO_CNT_LP_RD_TO_CNT_Msk     (_U_(0xFFFF) << DSI_LP_RD_TO_CNT_LP_RD_TO_CNT_Pos)   /**< (DSI_LP_RD_TO_CNT) This field sets a period for which DWC_mipi_dsi_host keeps the link still, after sending a Low-Power Read operation. This period is measured in cycles of lanebyteclk, starts to count when the D-PHY enters stop state and causes no interrupts. Mask */
#define DSI_LP_RD_TO_CNT_LP_RD_TO_CNT(value)  (DSI_LP_RD_TO_CNT_LP_RD_TO_CNT_Msk & ((value) << DSI_LP_RD_TO_CNT_LP_RD_TO_CNT_Pos))
#define DSI_LP_RD_TO_CNT_Msk                  _U_(0x0000FFFF)                                      /**< (DSI_LP_RD_TO_CNT) Register Mask  */


/* -------- DSI_HS_WR_TO_CNT : (DSI Offset: 0x84) (R/W 32) This register configures the Peripheral Response timeout after High-Speed Write operations. -------- */
#define DSI_HS_WR_TO_CNT_HS_WR_TO_CNT_Pos     _U_(0)                                               /**< (DSI_HS_WR_TO_CNT) This field sets a period for which DWC_mipi_dsi_host keeps the link still, after sending a High-Speed Write operation. This period is measured in cycles of lanebyteclk, starts to count when the D-PHY enters stop state and causes no interrupts. Position */
#define DSI_HS_WR_TO_CNT_HS_WR_TO_CNT_Msk     (_U_(0xFFFF) << DSI_HS_WR_TO_CNT_HS_WR_TO_CNT_Pos)   /**< (DSI_HS_WR_TO_CNT) This field sets a period for which DWC_mipi_dsi_host keeps the link still, after sending a High-Speed Write operation. This period is measured in cycles of lanebyteclk, starts to count when the D-PHY enters stop state and causes no interrupts. Mask */
#define DSI_HS_WR_TO_CNT_HS_WR_TO_CNT(value)  (DSI_HS_WR_TO_CNT_HS_WR_TO_CNT_Msk & ((value) << DSI_HS_WR_TO_CNT_HS_WR_TO_CNT_Pos))
#define DSI_HS_WR_TO_CNT_Msk                  _U_(0x0000FFFF)                                      /**< (DSI_HS_WR_TO_CNT) Register Mask  */


/* -------- DSI_LP_WR_TO_CNT : (DSI Offset: 0x88) (R/W 32) This register configures the Peripheral Response timeout after Low-Power Write operations. -------- */
#define DSI_LP_WR_TO_CNT_LP_WR_TO_CNT_Pos     _U_(0)                                               /**< (DSI_LP_WR_TO_CNT) This field sets a period for which DWC_mipi_dsi_host keeps the link still, after sending a Low-Power Write operation. This period is measured in cycles of lanebyteclk, starts to count when the D-PHY enters stop state and causes no interrupts. Position */
#define DSI_LP_WR_TO_CNT_LP_WR_TO_CNT_Msk     (_U_(0xFFFF) << DSI_LP_WR_TO_CNT_LP_WR_TO_CNT_Pos)   /**< (DSI_LP_WR_TO_CNT) This field sets a period for which DWC_mipi_dsi_host keeps the link still, after sending a Low-Power Write operation. This period is measured in cycles of lanebyteclk, starts to count when the D-PHY enters stop state and causes no interrupts. Mask */
#define DSI_LP_WR_TO_CNT_LP_WR_TO_CNT(value)  (DSI_LP_WR_TO_CNT_LP_WR_TO_CNT_Msk & ((value) << DSI_LP_WR_TO_CNT_LP_WR_TO_CNT_Pos))
#define DSI_LP_WR_TO_CNT_Msk                  _U_(0x0000FFFF)                                      /**< (DSI_LP_WR_TO_CNT) Register Mask  */


/* -------- DSI_BTA_TO_CNT : (DSI Offset: 0x8C) (R/W 32) This register configures the Peripheral Response timeout after Bus Turnaround completion. -------- */
#define DSI_BTA_TO_CNT_BTA_TO_CNT_Pos         _U_(0)                                               /**< (DSI_BTA_TO_CNT) This field sets a period for which DWC_mipi_dsi_host keeps the link still, after completing a Bus Turnaround. This period is measured in cycles of lanebyteclk, starts to count when the D-PHY enters stop state and causes no interrupts. Position */
#define DSI_BTA_TO_CNT_BTA_TO_CNT_Msk         (_U_(0xFFFF) << DSI_BTA_TO_CNT_BTA_TO_CNT_Pos)       /**< (DSI_BTA_TO_CNT) This field sets a period for which DWC_mipi_dsi_host keeps the link still, after completing a Bus Turnaround. This period is measured in cycles of lanebyteclk, starts to count when the D-PHY enters stop state and causes no interrupts. Mask */
#define DSI_BTA_TO_CNT_BTA_TO_CNT(value)      (DSI_BTA_TO_CNT_BTA_TO_CNT_Msk & ((value) << DSI_BTA_TO_CNT_BTA_TO_CNT_Pos))
#define DSI_BTA_TO_CNT_Msk                    _U_(0x0000FFFF)                                      /**< (DSI_BTA_TO_CNT) Register Mask  */


/* -------- DSI_SDF_3D : (DSI Offset: 0x90) (R/W 32) This register stores 3D control information for VSS packets in video mode. -------- */
#define DSI_SDF_3D_MODE_3D_Pos                _U_(0)                                               /**< (DSI_SDF_3D) This field defines 3D Mode On/Off and Display Orientation:  - 00: 3D Mode Off (2D Mode On).  - 01: 3D Mode On, Portrait Orientation.  - 10: 3D Mode On, Landscape Orientation.  - 11: Reserved. Position */
#define DSI_SDF_3D_MODE_3D_Msk                (_U_(0x3) << DSI_SDF_3D_MODE_3D_Pos)                 /**< (DSI_SDF_3D) This field defines 3D Mode On/Off and Display Orientation:  - 00: 3D Mode Off (2D Mode On).  - 01: 3D Mode On, Portrait Orientation.  - 10: 3D Mode On, Landscape Orientation.  - 11: Reserved. Mask */
#define DSI_SDF_3D_MODE_3D(value)             (DSI_SDF_3D_MODE_3D_Msk & ((value) << DSI_SDF_3D_MODE_3D_Pos))
#define DSI_SDF_3D_FORMAT_3D_Pos              _U_(2)                                               /**< (DSI_SDF_3D) This field defines 3D Image Format:  - 00: Line (alternating lines of left and right data).  - 01: Frame (alternating frames of left and right data).  - 10: Pixel (alternating pixels of left and right data).  - 11: Reserved Position */
#define DSI_SDF_3D_FORMAT_3D_Msk              (_U_(0x3) << DSI_SDF_3D_FORMAT_3D_Pos)               /**< (DSI_SDF_3D) This field defines 3D Image Format:  - 00: Line (alternating lines of left and right data).  - 01: Frame (alternating frames of left and right data).  - 10: Pixel (alternating pixels of left and right data).  - 11: Reserved Mask */
#define DSI_SDF_3D_FORMAT_3D(value)           (DSI_SDF_3D_FORMAT_3D_Msk & ((value) << DSI_SDF_3D_FORMAT_3D_Pos))
#define DSI_SDF_3D_SECOND_VSYNC_Pos           _U_(4)                                               /**< (DSI_SDF_3D) This field defines whether there is a second VSYNC pulse between Left and Right Images, when 3D Image Format is Frame-based:  - 0: No sync pulses between left and right data.  - 1: Sync pulse (HSYNC, VSYNC, blanking) between left and right data. Position */
#define DSI_SDF_3D_SECOND_VSYNC_Msk           (_U_(0x1) << DSI_SDF_3D_SECOND_VSYNC_Pos)            /**< (DSI_SDF_3D) This field defines whether there is a second VSYNC pulse between Left and Right Images, when 3D Image Format is Frame-based:  - 0: No sync pulses between left and right data.  - 1: Sync pulse (HSYNC, VSYNC, blanking) between left and right data. Mask */
#define DSI_SDF_3D_SECOND_VSYNC(value)        (DSI_SDF_3D_SECOND_VSYNC_Msk & ((value) << DSI_SDF_3D_SECOND_VSYNC_Pos))
#define DSI_SDF_3D_RIGHT_FIRST_Pos            _U_(5)                                               /**< (DSI_SDF_3D) This bit defines the left/right order:  - 0: left eye is sent first, then right eye  - 1: right eye data is sent first, then left eye Position */
#define DSI_SDF_3D_RIGHT_FIRST_Msk            (_U_(0x1) << DSI_SDF_3D_RIGHT_FIRST_Pos)             /**< (DSI_SDF_3D) This bit defines the left/right order:  - 0: left eye is sent first, then right eye  - 1: right eye data is sent first, then left eye Mask */
#define DSI_SDF_3D_RIGHT_FIRST(value)         (DSI_SDF_3D_RIGHT_FIRST_Msk & ((value) << DSI_SDF_3D_RIGHT_FIRST_Pos))
#define DSI_SDF_3D_SEND_3D_CFG_Pos            _U_(16)                                              /**< (DSI_SDF_3D) When set, causes the next VSS packet to include 3D control payload in every VSS packet. Position */
#define DSI_SDF_3D_SEND_3D_CFG_Msk            (_U_(0x1) << DSI_SDF_3D_SEND_3D_CFG_Pos)             /**< (DSI_SDF_3D) When set, causes the next VSS packet to include 3D control payload in every VSS packet. Mask */
#define DSI_SDF_3D_SEND_3D_CFG(value)         (DSI_SDF_3D_SEND_3D_CFG_Msk & ((value) << DSI_SDF_3D_SEND_3D_CFG_Pos))
#define DSI_SDF_3D_Msk                        _U_(0x0001003F)                                      /**< (DSI_SDF_3D) Register Mask  */


/* -------- DSI_LPCLK_CTRL : (DSI Offset: 0x94) (R/W 32) This register configures the possibility for using non continuous clock in the clock lane. -------- */
#define DSI_LPCLK_CTRL_PHY_TXREQUESTCLKHS_Pos _U_(0)                                               /**< (DSI_LPCLK_CTRL) This bit controls the D-PHY PPI txrequestclkhs signal. Position */
#define DSI_LPCLK_CTRL_PHY_TXREQUESTCLKHS_Msk (_U_(0x1) << DSI_LPCLK_CTRL_PHY_TXREQUESTCLKHS_Pos)  /**< (DSI_LPCLK_CTRL) This bit controls the D-PHY PPI txrequestclkhs signal. Mask */
#define DSI_LPCLK_CTRL_PHY_TXREQUESTCLKHS(value) (DSI_LPCLK_CTRL_PHY_TXREQUESTCLKHS_Msk & ((value) << DSI_LPCLK_CTRL_PHY_TXREQUESTCLKHS_Pos))
#define DSI_LPCLK_CTRL_AUTO_CLKLANE_CTRL_Pos  _U_(1)                                               /**< (DSI_LPCLK_CTRL) This bit enables the automatic mechanism to stop providing clock in the clock lane when time allows. Position */
#define DSI_LPCLK_CTRL_AUTO_CLKLANE_CTRL_Msk  (_U_(0x1) << DSI_LPCLK_CTRL_AUTO_CLKLANE_CTRL_Pos)   /**< (DSI_LPCLK_CTRL) This bit enables the automatic mechanism to stop providing clock in the clock lane when time allows. Mask */
#define DSI_LPCLK_CTRL_AUTO_CLKLANE_CTRL(value) (DSI_LPCLK_CTRL_AUTO_CLKLANE_CTRL_Msk & ((value) << DSI_LPCLK_CTRL_AUTO_CLKLANE_CTRL_Pos))
#define DSI_LPCLK_CTRL_Msk                    _U_(0x00000003)                                      /**< (DSI_LPCLK_CTRL) Register Mask  */


/* -------- DSI_PHY_TMR_LPCLK_CFG : (DSI Offset: 0x98) (R/W 32) This register sets the time that DWC_mipi_dsi_host assumes in calculations for the clock lane to switch between High-Speed and Low-Power. -------- */
#define DSI_PHY_TMR_LPCLK_CFG_PHY_CLKLP2HS_TIME_Pos _U_(0)                                               /**< (DSI_PHY_TMR_LPCLK_CFG) This field configures the maximum time that the D-PHY clock lane takes to go from low-power to high-speed transmission measured in lane byte clock cycles. Position */
#define DSI_PHY_TMR_LPCLK_CFG_PHY_CLKLP2HS_TIME_Msk (_U_(0x3FF) << DSI_PHY_TMR_LPCLK_CFG_PHY_CLKLP2HS_TIME_Pos) /**< (DSI_PHY_TMR_LPCLK_CFG) This field configures the maximum time that the D-PHY clock lane takes to go from low-power to high-speed transmission measured in lane byte clock cycles. Mask */
#define DSI_PHY_TMR_LPCLK_CFG_PHY_CLKLP2HS_TIME(value) (DSI_PHY_TMR_LPCLK_CFG_PHY_CLKLP2HS_TIME_Msk & ((value) << DSI_PHY_TMR_LPCLK_CFG_PHY_CLKLP2HS_TIME_Pos))
#define DSI_PHY_TMR_LPCLK_CFG_PHY_CLKHS2LP_TIME_Pos _U_(16)                                              /**< (DSI_PHY_TMR_LPCLK_CFG) This field configures the maximum time that the D-PHY clock lane takes to go from high-speed to low-power transmission measured in lane byte clock cycles. Position */
#define DSI_PHY_TMR_LPCLK_CFG_PHY_CLKHS2LP_TIME_Msk (_U_(0x3FF) << DSI_PHY_TMR_LPCLK_CFG_PHY_CLKHS2LP_TIME_Pos) /**< (DSI_PHY_TMR_LPCLK_CFG) This field configures the maximum time that the D-PHY clock lane takes to go from high-speed to low-power transmission measured in lane byte clock cycles. Mask */
#define DSI_PHY_TMR_LPCLK_CFG_PHY_CLKHS2LP_TIME(value) (DSI_PHY_TMR_LPCLK_CFG_PHY_CLKHS2LP_TIME_Msk & ((value) << DSI_PHY_TMR_LPCLK_CFG_PHY_CLKHS2LP_TIME_Pos))
#define DSI_PHY_TMR_LPCLK_CFG_Msk             _U_(0x03FF03FF)                                      /**< (DSI_PHY_TMR_LPCLK_CFG) Register Mask  */


/* -------- DSI_PHY_TMR_CFG : (DSI Offset: 0x9C) (R/W 32) This register sets the time that DWC_mipi_dsi_host assumes in calculations for the data lanes to switch between High-Speed and Low-Power. -------- */
#define DSI_PHY_TMR_CFG_PHY_LP2HS_TIME_Pos    _U_(0)                                               /**< (DSI_PHY_TMR_CFG) This field configures the maximum time that the D-PHY data lanes take to go from low-power to high-speed transmission measured in lane byte clock cycles. Position */
#define DSI_PHY_TMR_CFG_PHY_LP2HS_TIME_Msk    (_U_(0x3FF) << DSI_PHY_TMR_CFG_PHY_LP2HS_TIME_Pos)   /**< (DSI_PHY_TMR_CFG) This field configures the maximum time that the D-PHY data lanes take to go from low-power to high-speed transmission measured in lane byte clock cycles. Mask */
#define DSI_PHY_TMR_CFG_PHY_LP2HS_TIME(value) (DSI_PHY_TMR_CFG_PHY_LP2HS_TIME_Msk & ((value) << DSI_PHY_TMR_CFG_PHY_LP2HS_TIME_Pos))
#define DSI_PHY_TMR_CFG_PHY_HS2LP_TIME_Pos    _U_(16)                                              /**< (DSI_PHY_TMR_CFG) This field configures the maximum time that the D-PHY data lanes take to go from high-speed to low-power transmission measured in lane byte clock cycles. Position */
#define DSI_PHY_TMR_CFG_PHY_HS2LP_TIME_Msk    (_U_(0x3FF) << DSI_PHY_TMR_CFG_PHY_HS2LP_TIME_Pos)   /**< (DSI_PHY_TMR_CFG) This field configures the maximum time that the D-PHY data lanes take to go from high-speed to low-power transmission measured in lane byte clock cycles. Mask */
#define DSI_PHY_TMR_CFG_PHY_HS2LP_TIME(value) (DSI_PHY_TMR_CFG_PHY_HS2LP_TIME_Msk & ((value) << DSI_PHY_TMR_CFG_PHY_HS2LP_TIME_Pos))
#define DSI_PHY_TMR_CFG_Msk                   _U_(0x03FF03FF)                                      /**< (DSI_PHY_TMR_CFG) Register Mask  */


/* -------- DSI_PHY_RSTZ : (DSI Offset: 0xA0) (R/W 32) This register controls resets and the PLL of the D-PHY. -------- */
#define DSI_PHY_RSTZ_PHY_SHUTDOWNZ_Pos        _U_(0)                                               /**< (DSI_PHY_RSTZ) When set to 0, this bit places the complete D-PHY macro in power-down state. Position */
#define DSI_PHY_RSTZ_PHY_SHUTDOWNZ_Msk        (_U_(0x1) << DSI_PHY_RSTZ_PHY_SHUTDOWNZ_Pos)         /**< (DSI_PHY_RSTZ) When set to 0, this bit places the complete D-PHY macro in power-down state. Mask */
#define DSI_PHY_RSTZ_PHY_SHUTDOWNZ(value)     (DSI_PHY_RSTZ_PHY_SHUTDOWNZ_Msk & ((value) << DSI_PHY_RSTZ_PHY_SHUTDOWNZ_Pos))
#define DSI_PHY_RSTZ_PHY_RSTZ_Pos             _U_(1)                                               /**< (DSI_PHY_RSTZ) When set to 0, this bit places the digital section of the D-PHY in the reset state. Position */
#define DSI_PHY_RSTZ_PHY_RSTZ_Msk             (_U_(0x1) << DSI_PHY_RSTZ_PHY_RSTZ_Pos)              /**< (DSI_PHY_RSTZ) When set to 0, this bit places the digital section of the D-PHY in the reset state. Mask */
#define DSI_PHY_RSTZ_PHY_RSTZ(value)          (DSI_PHY_RSTZ_PHY_RSTZ_Msk & ((value) << DSI_PHY_RSTZ_PHY_RSTZ_Pos))
#define DSI_PHY_RSTZ_PHY_ENABLECLK_Pos        _U_(2)                                               /**< (DSI_PHY_RSTZ) When set to 1, this bit enables the D-PHY Clock Lane Module. Position */
#define DSI_PHY_RSTZ_PHY_ENABLECLK_Msk        (_U_(0x1) << DSI_PHY_RSTZ_PHY_ENABLECLK_Pos)         /**< (DSI_PHY_RSTZ) When set to 1, this bit enables the D-PHY Clock Lane Module. Mask */
#define DSI_PHY_RSTZ_PHY_ENABLECLK(value)     (DSI_PHY_RSTZ_PHY_ENABLECLK_Msk & ((value) << DSI_PHY_RSTZ_PHY_ENABLECLK_Pos))
#define DSI_PHY_RSTZ_PHY_FORCEPLL_Pos         _U_(3)                                               /**< (DSI_PHY_RSTZ) When the D-PHY is in ULPS, this bit enables the D-PHY PLL. Position */
#define DSI_PHY_RSTZ_PHY_FORCEPLL_Msk         (_U_(0x1) << DSI_PHY_RSTZ_PHY_FORCEPLL_Pos)          /**< (DSI_PHY_RSTZ) When the D-PHY is in ULPS, this bit enables the D-PHY PLL. Mask */
#define DSI_PHY_RSTZ_PHY_FORCEPLL(value)      (DSI_PHY_RSTZ_PHY_FORCEPLL_Msk & ((value) << DSI_PHY_RSTZ_PHY_FORCEPLL_Pos))
#define DSI_PHY_RSTZ_Msk                      _U_(0x0000000F)                                      /**< (DSI_PHY_RSTZ) Register Mask  */


/* -------- DSI_PHY_IF_CFG : (DSI Offset: 0xA4) (R/W 32) This register configures the number of active lanes and the minimum time to remain in stop state. -------- */
#define DSI_PHY_IF_CFG_N_LANES_Pos            _U_(0)                                               /**< (DSI_PHY_IF_CFG) This field configures the number of active data lanes:  - 00: One data lane (ane 0)  - 01: Two data lanes (lanes 0 and 1)  - 10: Three data lanes (lanes 0, 1, and 2)  - 11: Four data lanes (lanes 0, 1, 2, and 3) Position */
#define DSI_PHY_IF_CFG_N_LANES_Msk            (_U_(0x3) << DSI_PHY_IF_CFG_N_LANES_Pos)             /**< (DSI_PHY_IF_CFG) This field configures the number of active data lanes:  - 00: One data lane (ane 0)  - 01: Two data lanes (lanes 0 and 1)  - 10: Three data lanes (lanes 0, 1, and 2)  - 11: Four data lanes (lanes 0, 1, 2, and 3) Mask */
#define DSI_PHY_IF_CFG_N_LANES(value)         (DSI_PHY_IF_CFG_N_LANES_Msk & ((value) << DSI_PHY_IF_CFG_N_LANES_Pos))
#define DSI_PHY_IF_CFG_PHY_STOP_WAIT_TIME_Pos _U_(8)                                               /**< (DSI_PHY_IF_CFG) This field configures the minimum wait period to request a highspeed transmission after the Stop state. Position */
#define DSI_PHY_IF_CFG_PHY_STOP_WAIT_TIME_Msk (_U_(0xFF) << DSI_PHY_IF_CFG_PHY_STOP_WAIT_TIME_Pos) /**< (DSI_PHY_IF_CFG) This field configures the minimum wait period to request a highspeed transmission after the Stop state. Mask */
#define DSI_PHY_IF_CFG_PHY_STOP_WAIT_TIME(value) (DSI_PHY_IF_CFG_PHY_STOP_WAIT_TIME_Msk & ((value) << DSI_PHY_IF_CFG_PHY_STOP_WAIT_TIME_Pos))
#define DSI_PHY_IF_CFG_Msk                    _U_(0x0000FF03)                                      /**< (DSI_PHY_IF_CFG) Register Mask  */


/* -------- DSI_PHY_ULPS_CTRL : (DSI Offset: 0xA8) (R/W 32) This register configures entering and leaving ULPS in the D-PHY. -------- */
#define DSI_PHY_ULPS_CTRL_PHY_TXREQULPSCLK_Pos _U_(0)                                               /**< (DSI_PHY_ULPS_CTRL) ULPS mode Request on clock lane. Position */
#define DSI_PHY_ULPS_CTRL_PHY_TXREQULPSCLK_Msk (_U_(0x1) << DSI_PHY_ULPS_CTRL_PHY_TXREQULPSCLK_Pos) /**< (DSI_PHY_ULPS_CTRL) ULPS mode Request on clock lane. Mask */
#define DSI_PHY_ULPS_CTRL_PHY_TXREQULPSCLK(value) (DSI_PHY_ULPS_CTRL_PHY_TXREQULPSCLK_Msk & ((value) << DSI_PHY_ULPS_CTRL_PHY_TXREQULPSCLK_Pos))
#define DSI_PHY_ULPS_CTRL_PHY_TXEXITULPSCLK_Pos _U_(1)                                               /**< (DSI_PHY_ULPS_CTRL) ULPS mode Exit on clock lane. Position */
#define DSI_PHY_ULPS_CTRL_PHY_TXEXITULPSCLK_Msk (_U_(0x1) << DSI_PHY_ULPS_CTRL_PHY_TXEXITULPSCLK_Pos) /**< (DSI_PHY_ULPS_CTRL) ULPS mode Exit on clock lane. Mask */
#define DSI_PHY_ULPS_CTRL_PHY_TXEXITULPSCLK(value) (DSI_PHY_ULPS_CTRL_PHY_TXEXITULPSCLK_Msk & ((value) << DSI_PHY_ULPS_CTRL_PHY_TXEXITULPSCLK_Pos))
#define DSI_PHY_ULPS_CTRL_PHY_TXREQULPSLAN_Pos _U_(2)                                               /**< (DSI_PHY_ULPS_CTRL) ULPS mode Request on all active data lanes. Position */
#define DSI_PHY_ULPS_CTRL_PHY_TXREQULPSLAN_Msk (_U_(0x1) << DSI_PHY_ULPS_CTRL_PHY_TXREQULPSLAN_Pos) /**< (DSI_PHY_ULPS_CTRL) ULPS mode Request on all active data lanes. Mask */
#define DSI_PHY_ULPS_CTRL_PHY_TXREQULPSLAN(value) (DSI_PHY_ULPS_CTRL_PHY_TXREQULPSLAN_Msk & ((value) << DSI_PHY_ULPS_CTRL_PHY_TXREQULPSLAN_Pos))
#define DSI_PHY_ULPS_CTRL_PHY_TXEXITULPSLAN_Pos _U_(3)                                               /**< (DSI_PHY_ULPS_CTRL) ULPS mode Exit on all active data lanes. Position */
#define DSI_PHY_ULPS_CTRL_PHY_TXEXITULPSLAN_Msk (_U_(0x1) << DSI_PHY_ULPS_CTRL_PHY_TXEXITULPSLAN_Pos) /**< (DSI_PHY_ULPS_CTRL) ULPS mode Exit on all active data lanes. Mask */
#define DSI_PHY_ULPS_CTRL_PHY_TXEXITULPSLAN(value) (DSI_PHY_ULPS_CTRL_PHY_TXEXITULPSLAN_Msk & ((value) << DSI_PHY_ULPS_CTRL_PHY_TXEXITULPSLAN_Pos))
#define DSI_PHY_ULPS_CTRL_Msk                 _U_(0x0000000F)                                      /**< (DSI_PHY_ULPS_CTRL) Register Mask  */


/* -------- DSI_PHY_TX_TRIGGERS : (DSI Offset: 0xAC) (R/W 32) This register configures the pins that activate triggers in the D-PHY. -------- */
#define DSI_PHY_TX_TRIGGERS_PHY_TX_TRIGGERS_Pos _U_(0)                                               /**< (DSI_PHY_TX_TRIGGERS) This field controls the trigger transmissions. Position */
#define DSI_PHY_TX_TRIGGERS_PHY_TX_TRIGGERS_Msk (_U_(0xF) << DSI_PHY_TX_TRIGGERS_PHY_TX_TRIGGERS_Pos) /**< (DSI_PHY_TX_TRIGGERS) This field controls the trigger transmissions. Mask */
#define DSI_PHY_TX_TRIGGERS_PHY_TX_TRIGGERS(value) (DSI_PHY_TX_TRIGGERS_PHY_TX_TRIGGERS_Msk & ((value) << DSI_PHY_TX_TRIGGERS_PHY_TX_TRIGGERS_Pos))
#define DSI_PHY_TX_TRIGGERS_Msk               _U_(0x0000000F)                                      /**< (DSI_PHY_TX_TRIGGERS) Register Mask  */


/* -------- DSI_PHY_STATUS : (DSI Offset: 0xB0) ( R/ 32) This register contains information about the status of the D-PHY. -------- */
#define DSI_PHY_STATUS_PHY_LOCK_Pos           _U_(0)                                               /**< (DSI_PHY_STATUS) This bit indicates the status of phylock D-PHY signal. Position */
#define DSI_PHY_STATUS_PHY_LOCK_Msk           (_U_(0x1) << DSI_PHY_STATUS_PHY_LOCK_Pos)            /**< (DSI_PHY_STATUS) This bit indicates the status of phylock D-PHY signal. Mask */
#define DSI_PHY_STATUS_PHY_LOCK(value)        (DSI_PHY_STATUS_PHY_LOCK_Msk & ((value) << DSI_PHY_STATUS_PHY_LOCK_Pos))
#define DSI_PHY_STATUS_PHY_DIRECTION_Pos      _U_(1)                                               /**< (DSI_PHY_STATUS) This bit indicates the status of phydirection D-PHY signal. Position */
#define DSI_PHY_STATUS_PHY_DIRECTION_Msk      (_U_(0x1) << DSI_PHY_STATUS_PHY_DIRECTION_Pos)       /**< (DSI_PHY_STATUS) This bit indicates the status of phydirection D-PHY signal. Mask */
#define DSI_PHY_STATUS_PHY_DIRECTION(value)   (DSI_PHY_STATUS_PHY_DIRECTION_Msk & ((value) << DSI_PHY_STATUS_PHY_DIRECTION_Pos))
#define DSI_PHY_STATUS_PHY_STOPSTATECLKLANE_Pos _U_(2)                                               /**< (DSI_PHY_STATUS) This bit indicates the status of phystopstateclklane D-PHY signal. Position */
#define DSI_PHY_STATUS_PHY_STOPSTATECLKLANE_Msk (_U_(0x1) << DSI_PHY_STATUS_PHY_STOPSTATECLKLANE_Pos) /**< (DSI_PHY_STATUS) This bit indicates the status of phystopstateclklane D-PHY signal. Mask */
#define DSI_PHY_STATUS_PHY_STOPSTATECLKLANE(value) (DSI_PHY_STATUS_PHY_STOPSTATECLKLANE_Msk & ((value) << DSI_PHY_STATUS_PHY_STOPSTATECLKLANE_Pos))
#define DSI_PHY_STATUS_PHY_ULPSACTIVENOTCLK_Pos _U_(3)                                               /**< (DSI_PHY_STATUS) This bit indicates the status of phyulpsactivenotclk D-PHY signal. Position */
#define DSI_PHY_STATUS_PHY_ULPSACTIVENOTCLK_Msk (_U_(0x1) << DSI_PHY_STATUS_PHY_ULPSACTIVENOTCLK_Pos) /**< (DSI_PHY_STATUS) This bit indicates the status of phyulpsactivenotclk D-PHY signal. Mask */
#define DSI_PHY_STATUS_PHY_ULPSACTIVENOTCLK(value) (DSI_PHY_STATUS_PHY_ULPSACTIVENOTCLK_Msk & ((value) << DSI_PHY_STATUS_PHY_ULPSACTIVENOTCLK_Pos))
#define DSI_PHY_STATUS_PHY_STOPSTATE0LANE_Pos _U_(4)                                               /**< (DSI_PHY_STATUS) This bit indicates the status of phystopstate0lane D-PHY signal. Position */
#define DSI_PHY_STATUS_PHY_STOPSTATE0LANE_Msk (_U_(0x1) << DSI_PHY_STATUS_PHY_STOPSTATE0LANE_Pos)  /**< (DSI_PHY_STATUS) This bit indicates the status of phystopstate0lane D-PHY signal. Mask */
#define DSI_PHY_STATUS_PHY_STOPSTATE0LANE(value) (DSI_PHY_STATUS_PHY_STOPSTATE0LANE_Msk & ((value) << DSI_PHY_STATUS_PHY_STOPSTATE0LANE_Pos))
#define DSI_PHY_STATUS_PHY_ULPSACTIVENOT0LANE_Pos _U_(5)                                               /**< (DSI_PHY_STATUS) This bit indicates the status of ulpsactivenot0lane D-PHY signal. Position */
#define DSI_PHY_STATUS_PHY_ULPSACTIVENOT0LANE_Msk (_U_(0x1) << DSI_PHY_STATUS_PHY_ULPSACTIVENOT0LANE_Pos) /**< (DSI_PHY_STATUS) This bit indicates the status of ulpsactivenot0lane D-PHY signal. Mask */
#define DSI_PHY_STATUS_PHY_ULPSACTIVENOT0LANE(value) (DSI_PHY_STATUS_PHY_ULPSACTIVENOT0LANE_Msk & ((value) << DSI_PHY_STATUS_PHY_ULPSACTIVENOT0LANE_Pos))
#define DSI_PHY_STATUS_PHY_RXULPSESC0LANE_Pos _U_(6)                                               /**< (DSI_PHY_STATUS) This bit indicates the status of rxulpsesc0lane D-PHY signal. Position */
#define DSI_PHY_STATUS_PHY_RXULPSESC0LANE_Msk (_U_(0x1) << DSI_PHY_STATUS_PHY_RXULPSESC0LANE_Pos)  /**< (DSI_PHY_STATUS) This bit indicates the status of rxulpsesc0lane D-PHY signal. Mask */
#define DSI_PHY_STATUS_PHY_RXULPSESC0LANE(value) (DSI_PHY_STATUS_PHY_RXULPSESC0LANE_Msk & ((value) << DSI_PHY_STATUS_PHY_RXULPSESC0LANE_Pos))
#define DSI_PHY_STATUS_PHY_STOPSTATE1LANE_Pos _U_(7)                                               /**< (DSI_PHY_STATUS) This bit indicates the status of phystopstate1lane D-PHY signal. Position */
#define DSI_PHY_STATUS_PHY_STOPSTATE1LANE_Msk (_U_(0x1) << DSI_PHY_STATUS_PHY_STOPSTATE1LANE_Pos)  /**< (DSI_PHY_STATUS) This bit indicates the status of phystopstate1lane D-PHY signal. Mask */
#define DSI_PHY_STATUS_PHY_STOPSTATE1LANE(value) (DSI_PHY_STATUS_PHY_STOPSTATE1LANE_Msk & ((value) << DSI_PHY_STATUS_PHY_STOPSTATE1LANE_Pos))
#define DSI_PHY_STATUS_PHY_ULPSACTIVENOT1LANE_Pos _U_(8)                                               /**< (DSI_PHY_STATUS) This bit indicates the status of ulpsactivenot1lane D-PHY signal. Position */
#define DSI_PHY_STATUS_PHY_ULPSACTIVENOT1LANE_Msk (_U_(0x1) << DSI_PHY_STATUS_PHY_ULPSACTIVENOT1LANE_Pos) /**< (DSI_PHY_STATUS) This bit indicates the status of ulpsactivenot1lane D-PHY signal. Mask */
#define DSI_PHY_STATUS_PHY_ULPSACTIVENOT1LANE(value) (DSI_PHY_STATUS_PHY_ULPSACTIVENOT1LANE_Msk & ((value) << DSI_PHY_STATUS_PHY_ULPSACTIVENOT1LANE_Pos))
#define DSI_PHY_STATUS_Msk                    _U_(0x000001FF)                                      /**< (DSI_PHY_STATUS) Register Mask  */


/* -------- DSI_PHY_TST_CTRL0 : (DSI Offset: 0xB4) (R/W 32) This register controls clock and clear pins of the D-PHY vendor specific interface. -------- */
#define DSI_PHY_TST_CTRL0_PHY_TESTCLR_Pos     _U_(0)                                               /**< (DSI_PHY_TST_CTRL0) PHY test interface clear (active high). Position */
#define DSI_PHY_TST_CTRL0_PHY_TESTCLR_Msk     (_U_(0x1) << DSI_PHY_TST_CTRL0_PHY_TESTCLR_Pos)      /**< (DSI_PHY_TST_CTRL0) PHY test interface clear (active high). Mask */
#define DSI_PHY_TST_CTRL0_PHY_TESTCLR(value)  (DSI_PHY_TST_CTRL0_PHY_TESTCLR_Msk & ((value) << DSI_PHY_TST_CTRL0_PHY_TESTCLR_Pos))
#define DSI_PHY_TST_CTRL0_PHY_TESTCLK_Pos     _U_(1)                                               /**< (DSI_PHY_TST_CTRL0) This bit is used to clock the TESTDIN bus into the D-PHY. Position */
#define DSI_PHY_TST_CTRL0_PHY_TESTCLK_Msk     (_U_(0x1) << DSI_PHY_TST_CTRL0_PHY_TESTCLK_Pos)      /**< (DSI_PHY_TST_CTRL0) This bit is used to clock the TESTDIN bus into the D-PHY. Mask */
#define DSI_PHY_TST_CTRL0_PHY_TESTCLK(value)  (DSI_PHY_TST_CTRL0_PHY_TESTCLK_Msk & ((value) << DSI_PHY_TST_CTRL0_PHY_TESTCLK_Pos))
#define DSI_PHY_TST_CTRL0_Msk                 _U_(0x00000003)                                      /**< (DSI_PHY_TST_CTRL0) Register Mask  */


/* -------- DSI_PHY_TST_CTRL1 : (DSI Offset: 0xB8) (R/W 32) This register controls data and enable pins of the D-PHY vendor specific interface. -------- */
#define DSI_PHY_TST_CTRL1_PHY_TESTDIN_Pos     _U_(0)                                               /**< (DSI_PHY_TST_CTRL1) PHY test interface input 8-bit data bus for internal register programming and test functionalities access. Position */
#define DSI_PHY_TST_CTRL1_PHY_TESTDIN_Msk     (_U_(0xFF) << DSI_PHY_TST_CTRL1_PHY_TESTDIN_Pos)     /**< (DSI_PHY_TST_CTRL1) PHY test interface input 8-bit data bus for internal register programming and test functionalities access. Mask */
#define DSI_PHY_TST_CTRL1_PHY_TESTDIN(value)  (DSI_PHY_TST_CTRL1_PHY_TESTDIN_Msk & ((value) << DSI_PHY_TST_CTRL1_PHY_TESTDIN_Pos))
#define DSI_PHY_TST_CTRL1_PHT_TESTDOUT_Pos    _U_(8)                                               /**< (DSI_PHY_TST_CTRL1) PHY output 8-bit data bus for read-back and internal probing functionalities. Position */
#define DSI_PHY_TST_CTRL1_PHT_TESTDOUT_Msk    (_U_(0xFF) << DSI_PHY_TST_CTRL1_PHT_TESTDOUT_Pos)    /**< (DSI_PHY_TST_CTRL1) PHY output 8-bit data bus for read-back and internal probing functionalities. Mask */
#define DSI_PHY_TST_CTRL1_PHT_TESTDOUT(value) (DSI_PHY_TST_CTRL1_PHT_TESTDOUT_Msk & ((value) << DSI_PHY_TST_CTRL1_PHT_TESTDOUT_Pos))
#define DSI_PHY_TST_CTRL1_PHY_TESTEN_Pos      _U_(16)                                              /**< (DSI_PHY_TST_CTRL1) PHY test interface operation selector: 1: the address write operation is set on the falling edge of the testclk signal. 0: the data write operation is set on the rising edge of the testclk signal. Position */
#define DSI_PHY_TST_CTRL1_PHY_TESTEN_Msk      (_U_(0x1) << DSI_PHY_TST_CTRL1_PHY_TESTEN_Pos)       /**< (DSI_PHY_TST_CTRL1) PHY test interface operation selector: 1: the address write operation is set on the falling edge of the testclk signal. 0: the data write operation is set on the rising edge of the testclk signal. Mask */
#define DSI_PHY_TST_CTRL1_PHY_TESTEN(value)   (DSI_PHY_TST_CTRL1_PHY_TESTEN_Msk & ((value) << DSI_PHY_TST_CTRL1_PHY_TESTEN_Pos))
#define DSI_PHY_TST_CTRL1_Msk                 _U_(0x0001FFFF)                                      /**< (DSI_PHY_TST_CTRL1) Register Mask  */


/* -------- DSI_INT_ST0 : (DSI Offset: 0xBC) ( R/ 32) This register contains the status of interrupt sources from acknowledge reports and the D-PHY. -------- */
#define DSI_INT_ST0_ACK_WITH_ERR_0_Pos        _U_(0)                                               /**< (DSI_INT_ST0) This bit retrieves the SoT error from the Acknowledge error report. Position */
#define DSI_INT_ST0_ACK_WITH_ERR_0_Msk        (_U_(0x1) << DSI_INT_ST0_ACK_WITH_ERR_0_Pos)         /**< (DSI_INT_ST0) This bit retrieves the SoT error from the Acknowledge error report. Mask */
#define DSI_INT_ST0_ACK_WITH_ERR_0(value)     (DSI_INT_ST0_ACK_WITH_ERR_0_Msk & ((value) << DSI_INT_ST0_ACK_WITH_ERR_0_Pos))
#define DSI_INT_ST0_ACK_WITH_ERR_1_Pos        _U_(1)                                               /**< (DSI_INT_ST0) This bit retrieves the SoT Sync error from the Acknowledge error report. Position */
#define DSI_INT_ST0_ACK_WITH_ERR_1_Msk        (_U_(0x1) << DSI_INT_ST0_ACK_WITH_ERR_1_Pos)         /**< (DSI_INT_ST0) This bit retrieves the SoT Sync error from the Acknowledge error report. Mask */
#define DSI_INT_ST0_ACK_WITH_ERR_1(value)     (DSI_INT_ST0_ACK_WITH_ERR_1_Msk & ((value) << DSI_INT_ST0_ACK_WITH_ERR_1_Pos))
#define DSI_INT_ST0_ACK_WITH_ERR_2_Pos        _U_(2)                                               /**< (DSI_INT_ST0) This bit retrieves the EoT Sync error from the Acknowledge error report. Position */
#define DSI_INT_ST0_ACK_WITH_ERR_2_Msk        (_U_(0x1) << DSI_INT_ST0_ACK_WITH_ERR_2_Pos)         /**< (DSI_INT_ST0) This bit retrieves the EoT Sync error from the Acknowledge error report. Mask */
#define DSI_INT_ST0_ACK_WITH_ERR_2(value)     (DSI_INT_ST0_ACK_WITH_ERR_2_Msk & ((value) << DSI_INT_ST0_ACK_WITH_ERR_2_Pos))
#define DSI_INT_ST0_ACK_WITH_ERR_3_Pos        _U_(3)                                               /**< (DSI_INT_ST0) This bit retrieves the Escape Mode Entry Command error from the Acknowledge error report. Position */
#define DSI_INT_ST0_ACK_WITH_ERR_3_Msk        (_U_(0x1) << DSI_INT_ST0_ACK_WITH_ERR_3_Pos)         /**< (DSI_INT_ST0) This bit retrieves the Escape Mode Entry Command error from the Acknowledge error report. Mask */
#define DSI_INT_ST0_ACK_WITH_ERR_3(value)     (DSI_INT_ST0_ACK_WITH_ERR_3_Msk & ((value) << DSI_INT_ST0_ACK_WITH_ERR_3_Pos))
#define DSI_INT_ST0_ACK_WITH_ERR_4_Pos        _U_(4)                                               /**< (DSI_INT_ST0) This bit retrieves the LP Transmit Sync error from the Acknowledge error report. Position */
#define DSI_INT_ST0_ACK_WITH_ERR_4_Msk        (_U_(0x1) << DSI_INT_ST0_ACK_WITH_ERR_4_Pos)         /**< (DSI_INT_ST0) This bit retrieves the LP Transmit Sync error from the Acknowledge error report. Mask */
#define DSI_INT_ST0_ACK_WITH_ERR_4(value)     (DSI_INT_ST0_ACK_WITH_ERR_4_Msk & ((value) << DSI_INT_ST0_ACK_WITH_ERR_4_Pos))
#define DSI_INT_ST0_ACK_WITH_ERR_5_Pos        _U_(5)                                               /**< (DSI_INT_ST0) This bit retrieves the Peripheral Timeout error from the Acknowledge error report. Position */
#define DSI_INT_ST0_ACK_WITH_ERR_5_Msk        (_U_(0x1) << DSI_INT_ST0_ACK_WITH_ERR_5_Pos)         /**< (DSI_INT_ST0) This bit retrieves the Peripheral Timeout error from the Acknowledge error report. Mask */
#define DSI_INT_ST0_ACK_WITH_ERR_5(value)     (DSI_INT_ST0_ACK_WITH_ERR_5_Msk & ((value) << DSI_INT_ST0_ACK_WITH_ERR_5_Pos))
#define DSI_INT_ST0_ACK_WITH_ERR_6_Pos        _U_(6)                                               /**< (DSI_INT_ST0) This bit retrieves the False Control error from the Acknowledge error report. Position */
#define DSI_INT_ST0_ACK_WITH_ERR_6_Msk        (_U_(0x1) << DSI_INT_ST0_ACK_WITH_ERR_6_Pos)         /**< (DSI_INT_ST0) This bit retrieves the False Control error from the Acknowledge error report. Mask */
#define DSI_INT_ST0_ACK_WITH_ERR_6(value)     (DSI_INT_ST0_ACK_WITH_ERR_6_Msk & ((value) << DSI_INT_ST0_ACK_WITH_ERR_6_Pos))
#define DSI_INT_ST0_ACK_WITH_ERR_7_Pos        _U_(7)                                               /**< (DSI_INT_ST0) This bit retrieves the reserved (specific to device) from the acknowledge error report. Position */
#define DSI_INT_ST0_ACK_WITH_ERR_7_Msk        (_U_(0x1) << DSI_INT_ST0_ACK_WITH_ERR_7_Pos)         /**< (DSI_INT_ST0) This bit retrieves the reserved (specific to device) from the acknowledge error report. Mask */
#define DSI_INT_ST0_ACK_WITH_ERR_7(value)     (DSI_INT_ST0_ACK_WITH_ERR_7_Msk & ((value) << DSI_INT_ST0_ACK_WITH_ERR_7_Pos))
#define DSI_INT_ST0_ACK_WITH_ERR_8_Pos        _U_(8)                                               /**< (DSI_INT_ST0) This bit retrieves the ECC error, single-bit (detected and corrected) from the Acknowledge error report. Position */
#define DSI_INT_ST0_ACK_WITH_ERR_8_Msk        (_U_(0x1) << DSI_INT_ST0_ACK_WITH_ERR_8_Pos)         /**< (DSI_INT_ST0) This bit retrieves the ECC error, single-bit (detected and corrected) from the Acknowledge error report. Mask */
#define DSI_INT_ST0_ACK_WITH_ERR_8(value)     (DSI_INT_ST0_ACK_WITH_ERR_8_Msk & ((value) << DSI_INT_ST0_ACK_WITH_ERR_8_Pos))
#define DSI_INT_ST0_ACK_WITH_ERR_9_Pos        _U_(9)                                               /**< (DSI_INT_ST0) This bit retrieves the ECC error, multi-bit (detected, not corrected) from the Acknowledge error report. Position */
#define DSI_INT_ST0_ACK_WITH_ERR_9_Msk        (_U_(0x1) << DSI_INT_ST0_ACK_WITH_ERR_9_Pos)         /**< (DSI_INT_ST0) This bit retrieves the ECC error, multi-bit (detected, not corrected) from the Acknowledge error report. Mask */
#define DSI_INT_ST0_ACK_WITH_ERR_9(value)     (DSI_INT_ST0_ACK_WITH_ERR_9_Msk & ((value) << DSI_INT_ST0_ACK_WITH_ERR_9_Pos))
#define DSI_INT_ST0_ACK_WITH_ERR_10_Pos       _U_(10)                                              /**< (DSI_INT_ST0) This bit retrieves the checksum error (long packet only) from the Acknowledge error report. Position */
#define DSI_INT_ST0_ACK_WITH_ERR_10_Msk       (_U_(0x1) << DSI_INT_ST0_ACK_WITH_ERR_10_Pos)        /**< (DSI_INT_ST0) This bit retrieves the checksum error (long packet only) from the Acknowledge error report. Mask */
#define DSI_INT_ST0_ACK_WITH_ERR_10(value)    (DSI_INT_ST0_ACK_WITH_ERR_10_Msk & ((value) << DSI_INT_ST0_ACK_WITH_ERR_10_Pos))
#define DSI_INT_ST0_ACK_WITH_ERR_11_Pos       _U_(11)                                              /**< (DSI_INT_ST0) This bit retrieves the not recognized DSI data type from the Acknowledge error report. Position */
#define DSI_INT_ST0_ACK_WITH_ERR_11_Msk       (_U_(0x1) << DSI_INT_ST0_ACK_WITH_ERR_11_Pos)        /**< (DSI_INT_ST0) This bit retrieves the not recognized DSI data type from the Acknowledge error report. Mask */
#define DSI_INT_ST0_ACK_WITH_ERR_11(value)    (DSI_INT_ST0_ACK_WITH_ERR_11_Msk & ((value) << DSI_INT_ST0_ACK_WITH_ERR_11_Pos))
#define DSI_INT_ST0_ACK_WITH_ERR_12_Pos       _U_(12)                                              /**< (DSI_INT_ST0) This bit retrieves the DSI VC ID Invalid from the Acknowledge error report. Position */
#define DSI_INT_ST0_ACK_WITH_ERR_12_Msk       (_U_(0x1) << DSI_INT_ST0_ACK_WITH_ERR_12_Pos)        /**< (DSI_INT_ST0) This bit retrieves the DSI VC ID Invalid from the Acknowledge error report. Mask */
#define DSI_INT_ST0_ACK_WITH_ERR_12(value)    (DSI_INT_ST0_ACK_WITH_ERR_12_Msk & ((value) << DSI_INT_ST0_ACK_WITH_ERR_12_Pos))
#define DSI_INT_ST0_ACK_WITH_ERR_13_Pos       _U_(13)                                              /**< (DSI_INT_ST0) This bit retrieves the invalid transmission length from the Acknowledge error report. Position */
#define DSI_INT_ST0_ACK_WITH_ERR_13_Msk       (_U_(0x1) << DSI_INT_ST0_ACK_WITH_ERR_13_Pos)        /**< (DSI_INT_ST0) This bit retrieves the invalid transmission length from the Acknowledge error report. Mask */
#define DSI_INT_ST0_ACK_WITH_ERR_13(value)    (DSI_INT_ST0_ACK_WITH_ERR_13_Msk & ((value) << DSI_INT_ST0_ACK_WITH_ERR_13_Pos))
#define DSI_INT_ST0_ACK_WITH_ERR_14_Pos       _U_(14)                                              /**< (DSI_INT_ST0) This bit retrieves the reserved (specific to device) from the Acknowledge error report. Position */
#define DSI_INT_ST0_ACK_WITH_ERR_14_Msk       (_U_(0x1) << DSI_INT_ST0_ACK_WITH_ERR_14_Pos)        /**< (DSI_INT_ST0) This bit retrieves the reserved (specific to device) from the Acknowledge error report. Mask */
#define DSI_INT_ST0_ACK_WITH_ERR_14(value)    (DSI_INT_ST0_ACK_WITH_ERR_14_Msk & ((value) << DSI_INT_ST0_ACK_WITH_ERR_14_Pos))
#define DSI_INT_ST0_ACK_WITH_ERR_15_Pos       _U_(15)                                              /**< (DSI_INT_ST0) This bit retrieves the DSI protocol violation from the Acknowledge error report. Position */
#define DSI_INT_ST0_ACK_WITH_ERR_15_Msk       (_U_(0x1) << DSI_INT_ST0_ACK_WITH_ERR_15_Pos)        /**< (DSI_INT_ST0) This bit retrieves the DSI protocol violation from the Acknowledge error report. Mask */
#define DSI_INT_ST0_ACK_WITH_ERR_15(value)    (DSI_INT_ST0_ACK_WITH_ERR_15_Msk & ((value) << DSI_INT_ST0_ACK_WITH_ERR_15_Pos))
#define DSI_INT_ST0_DPHY_ERRORS_0_Pos         _U_(16)                                              /**< (DSI_INT_ST0) This bit indicates ErrEsc escape entry error from Lane 0. Position */
#define DSI_INT_ST0_DPHY_ERRORS_0_Msk         (_U_(0x1) << DSI_INT_ST0_DPHY_ERRORS_0_Pos)          /**< (DSI_INT_ST0) This bit indicates ErrEsc escape entry error from Lane 0. Mask */
#define DSI_INT_ST0_DPHY_ERRORS_0(value)      (DSI_INT_ST0_DPHY_ERRORS_0_Msk & ((value) << DSI_INT_ST0_DPHY_ERRORS_0_Pos))
#define DSI_INT_ST0_DPHY_ERRORS_1_Pos         _U_(17)                                              /**< (DSI_INT_ST0) This bit indicates ErrSyncEsc low-power data transmission synchronization error from Lane 0. Position */
#define DSI_INT_ST0_DPHY_ERRORS_1_Msk         (_U_(0x1) << DSI_INT_ST0_DPHY_ERRORS_1_Pos)          /**< (DSI_INT_ST0) This bit indicates ErrSyncEsc low-power data transmission synchronization error from Lane 0. Mask */
#define DSI_INT_ST0_DPHY_ERRORS_1(value)      (DSI_INT_ST0_DPHY_ERRORS_1_Msk & ((value) << DSI_INT_ST0_DPHY_ERRORS_1_Pos))
#define DSI_INT_ST0_DPHY_ERRORS_2_Pos         _U_(18)                                              /**< (DSI_INT_ST0) This bit indicates control error ErrControl from Lane 0. Position */
#define DSI_INT_ST0_DPHY_ERRORS_2_Msk         (_U_(0x1) << DSI_INT_ST0_DPHY_ERRORS_2_Pos)          /**< (DSI_INT_ST0) This bit indicates control error ErrControl from Lane 0. Mask */
#define DSI_INT_ST0_DPHY_ERRORS_2(value)      (DSI_INT_ST0_DPHY_ERRORS_2_Msk & ((value) << DSI_INT_ST0_DPHY_ERRORS_2_Pos))
#define DSI_INT_ST0_DPHY_ERRORS_3_Pos         _U_(19)                                              /**< (DSI_INT_ST0) This bit indicates LP0 contention error ErrContentionLP0 from Lane 0. Position */
#define DSI_INT_ST0_DPHY_ERRORS_3_Msk         (_U_(0x1) << DSI_INT_ST0_DPHY_ERRORS_3_Pos)          /**< (DSI_INT_ST0) This bit indicates LP0 contention error ErrContentionLP0 from Lane 0. Mask */
#define DSI_INT_ST0_DPHY_ERRORS_3(value)      (DSI_INT_ST0_DPHY_ERRORS_3_Msk & ((value) << DSI_INT_ST0_DPHY_ERRORS_3_Pos))
#define DSI_INT_ST0_DPHY_ERRORS_4_Pos         _U_(20)                                              /**< (DSI_INT_ST0) This bit indicates LP1 contention error ErrContentionLP1 from Lane 0. Position */
#define DSI_INT_ST0_DPHY_ERRORS_4_Msk         (_U_(0x1) << DSI_INT_ST0_DPHY_ERRORS_4_Pos)          /**< (DSI_INT_ST0) This bit indicates LP1 contention error ErrContentionLP1 from Lane 0. Mask */
#define DSI_INT_ST0_DPHY_ERRORS_4(value)      (DSI_INT_ST0_DPHY_ERRORS_4_Msk & ((value) << DSI_INT_ST0_DPHY_ERRORS_4_Pos))
#define DSI_INT_ST0_Msk                       _U_(0x001FFFFF)                                      /**< (DSI_INT_ST0) Register Mask  */

#define DSI_INT_ST0_ACK_WITH_ERR__Pos         _U_(0)                                               /**< (DSI_INT_ST0 Position) This bit retrieves the SoT error from the Acknowledge error report. */
#define DSI_INT_ST0_ACK_WITH_ERR__Msk         (_U_(0xFFFF) << DSI_INT_ST0_ACK_WITH_ERR__Pos)       /**< (DSI_INT_ST0 Mask) ACK_WITH_ERR_ */
#define DSI_INT_ST0_ACK_WITH_ERR_(value)      (DSI_INT_ST0_ACK_WITH_ERR__Msk & ((value) << DSI_INT_ST0_ACK_WITH_ERR__Pos)) 
#define DSI_INT_ST0_DPHY_ERRORS__Pos          _U_(16)                                              /**< (DSI_INT_ST0 Position) This bit indicates LPx contention error ErrContentionLPx from Lane x. */
#define DSI_INT_ST0_DPHY_ERRORS__Msk          (_U_(0x1F) << DSI_INT_ST0_DPHY_ERRORS__Pos)          /**< (DSI_INT_ST0 Mask) DPHY_ERRORS_ */
#define DSI_INT_ST0_DPHY_ERRORS_(value)       (DSI_INT_ST0_DPHY_ERRORS__Msk & ((value) << DSI_INT_ST0_DPHY_ERRORS__Pos)) 

/* -------- DSI_INT_ST1 : (DSI Offset: 0xC0) ( R/ 32) This register contains the status of interrupt sources related to timeouts, ECC, CRC, packet size, EoTp, Generic and DBI interfaces. -------- */
#define DSI_INT_ST1_TO_HS_TX_Pos              _U_(0)                                               /**< (DSI_INT_ST1) This bit indicates that the high-speed transmission timeout counter reached the end and contention has been detected. Position */
#define DSI_INT_ST1_TO_HS_TX_Msk              (_U_(0x1) << DSI_INT_ST1_TO_HS_TX_Pos)               /**< (DSI_INT_ST1) This bit indicates that the high-speed transmission timeout counter reached the end and contention has been detected. Mask */
#define DSI_INT_ST1_TO_HS_TX(value)           (DSI_INT_ST1_TO_HS_TX_Msk & ((value) << DSI_INT_ST1_TO_HS_TX_Pos))
#define DSI_INT_ST1_TO_LP_RX_Pos              _U_(1)                                               /**< (DSI_INT_ST1) This bit indicates that the low-power reception timeout counter reached the end and contention has been detected. Position */
#define DSI_INT_ST1_TO_LP_RX_Msk              (_U_(0x1) << DSI_INT_ST1_TO_LP_RX_Pos)               /**< (DSI_INT_ST1) This bit indicates that the low-power reception timeout counter reached the end and contention has been detected. Mask */
#define DSI_INT_ST1_TO_LP_RX(value)           (DSI_INT_ST1_TO_LP_RX_Msk & ((value) << DSI_INT_ST1_TO_LP_RX_Pos))
#define DSI_INT_ST1_ECC_SINGLE_ERR_Pos        _U_(2)                                               /**< (DSI_INT_ST1) This bit indicates that the ECC single error has been detected and corrected in a received packet. Position */
#define DSI_INT_ST1_ECC_SINGLE_ERR_Msk        (_U_(0x1) << DSI_INT_ST1_ECC_SINGLE_ERR_Pos)         /**< (DSI_INT_ST1) This bit indicates that the ECC single error has been detected and corrected in a received packet. Mask */
#define DSI_INT_ST1_ECC_SINGLE_ERR(value)     (DSI_INT_ST1_ECC_SINGLE_ERR_Msk & ((value) << DSI_INT_ST1_ECC_SINGLE_ERR_Pos))
#define DSI_INT_ST1_ECC_MILTI_ERR_Pos         _U_(3)                                               /**< (DSI_INT_ST1) This bit indicates that the ECC multiple error has been detected in a received packet. Position */
#define DSI_INT_ST1_ECC_MILTI_ERR_Msk         (_U_(0x1) << DSI_INT_ST1_ECC_MILTI_ERR_Pos)          /**< (DSI_INT_ST1) This bit indicates that the ECC multiple error has been detected in a received packet. Mask */
#define DSI_INT_ST1_ECC_MILTI_ERR(value)      (DSI_INT_ST1_ECC_MILTI_ERR_Msk & ((value) << DSI_INT_ST1_ECC_MILTI_ERR_Pos))
#define DSI_INT_ST1_CRC_ERR_Pos               _U_(4)                                               /**< (DSI_INT_ST1) This bit indicates that the CRC error has been detected in the received packet payload. Position */
#define DSI_INT_ST1_CRC_ERR_Msk               (_U_(0x1) << DSI_INT_ST1_CRC_ERR_Pos)                /**< (DSI_INT_ST1) This bit indicates that the CRC error has been detected in the received packet payload. Mask */
#define DSI_INT_ST1_CRC_ERR(value)            (DSI_INT_ST1_CRC_ERR_Msk & ((value) << DSI_INT_ST1_CRC_ERR_Pos))
#define DSI_INT_ST1_PKT_SIZE_ERR_Pos          _U_(5)                                               /**< (DSI_INT_ST1) This bit indicates that the packet size error has been detected during the packet reception. Position */
#define DSI_INT_ST1_PKT_SIZE_ERR_Msk          (_U_(0x1) << DSI_INT_ST1_PKT_SIZE_ERR_Pos)           /**< (DSI_INT_ST1) This bit indicates that the packet size error has been detected during the packet reception. Mask */
#define DSI_INT_ST1_PKT_SIZE_ERR(value)       (DSI_INT_ST1_PKT_SIZE_ERR_Msk & ((value) << DSI_INT_ST1_PKT_SIZE_ERR_Pos))
#define DSI_INT_ST1_EOPT_ERR_Pos              _U_(6)                                               /**< (DSI_INT_ST1) This bit indicates that the EoTp packet has not been received at the end of the incoming peripheral transmission. Position */
#define DSI_INT_ST1_EOPT_ERR_Msk              (_U_(0x1) << DSI_INT_ST1_EOPT_ERR_Pos)               /**< (DSI_INT_ST1) This bit indicates that the EoTp packet has not been received at the end of the incoming peripheral transmission. Mask */
#define DSI_INT_ST1_EOPT_ERR(value)           (DSI_INT_ST1_EOPT_ERR_Msk & ((value) << DSI_INT_ST1_EOPT_ERR_Pos))
#define DSI_INT_ST1_DPI_PLD_WR_ERR_Pos        _U_(7)                                               /**< (DSI_INT_ST1) This bit indicates that during a DPI pixel line storage, the payload FIFO becomes full and the data stored is corrupted. Position */
#define DSI_INT_ST1_DPI_PLD_WR_ERR_Msk        (_U_(0x1) << DSI_INT_ST1_DPI_PLD_WR_ERR_Pos)         /**< (DSI_INT_ST1) This bit indicates that during a DPI pixel line storage, the payload FIFO becomes full and the data stored is corrupted. Mask */
#define DSI_INT_ST1_DPI_PLD_WR_ERR(value)     (DSI_INT_ST1_DPI_PLD_WR_ERR_Msk & ((value) << DSI_INT_ST1_DPI_PLD_WR_ERR_Pos))
#define DSI_INT_ST1_GEN_CMD_WR_ERR_Pos        _U_(8)                                               /**< (DSI_INT_ST1) This bit indicates that the system tried to write a command through the Generic interface and the FIFO is full. Therefore, the command is not written. Position */
#define DSI_INT_ST1_GEN_CMD_WR_ERR_Msk        (_U_(0x1) << DSI_INT_ST1_GEN_CMD_WR_ERR_Pos)         /**< (DSI_INT_ST1) This bit indicates that the system tried to write a command through the Generic interface and the FIFO is full. Therefore, the command is not written. Mask */
#define DSI_INT_ST1_GEN_CMD_WR_ERR(value)     (DSI_INT_ST1_GEN_CMD_WR_ERR_Msk & ((value) << DSI_INT_ST1_GEN_CMD_WR_ERR_Pos))
#define DSI_INT_ST1_GEN_PLD_WR_ERR_Pos        _U_(9)                                               /**< (DSI_INT_ST1) This bit indicates that the system tried to write a payload data through the Generic interface and the FIFO is full. Therefore, the payload is not written. Position */
#define DSI_INT_ST1_GEN_PLD_WR_ERR_Msk        (_U_(0x1) << DSI_INT_ST1_GEN_PLD_WR_ERR_Pos)         /**< (DSI_INT_ST1) This bit indicates that the system tried to write a payload data through the Generic interface and the FIFO is full. Therefore, the payload is not written. Mask */
#define DSI_INT_ST1_GEN_PLD_WR_ERR(value)     (DSI_INT_ST1_GEN_PLD_WR_ERR_Msk & ((value) << DSI_INT_ST1_GEN_PLD_WR_ERR_Pos))
#define DSI_INT_ST1_GEN_PLD_SEND_ERR_Pos      _U_(10)                                              /**< (DSI_INT_ST1) This bit indicates that during a Generic interface packet build, the payload FIFO becomes empty and corrupt data is sent. Position */
#define DSI_INT_ST1_GEN_PLD_SEND_ERR_Msk      (_U_(0x1) << DSI_INT_ST1_GEN_PLD_SEND_ERR_Pos)       /**< (DSI_INT_ST1) This bit indicates that during a Generic interface packet build, the payload FIFO becomes empty and corrupt data is sent. Mask */
#define DSI_INT_ST1_GEN_PLD_SEND_ERR(value)   (DSI_INT_ST1_GEN_PLD_SEND_ERR_Msk & ((value) << DSI_INT_ST1_GEN_PLD_SEND_ERR_Pos))
#define DSI_INT_ST1_GEN_PLD_RD_ERR_Pos        _U_(11)                                              /**< (DSI_INT_ST1) This bit indicates that during a DCS read data, the payload FIFO becomes empty and the data sent to the interface is corrupted. Position */
#define DSI_INT_ST1_GEN_PLD_RD_ERR_Msk        (_U_(0x1) << DSI_INT_ST1_GEN_PLD_RD_ERR_Pos)         /**< (DSI_INT_ST1) This bit indicates that during a DCS read data, the payload FIFO becomes empty and the data sent to the interface is corrupted. Mask */
#define DSI_INT_ST1_GEN_PLD_RD_ERR(value)     (DSI_INT_ST1_GEN_PLD_RD_ERR_Msk & ((value) << DSI_INT_ST1_GEN_PLD_RD_ERR_Pos))
#define DSI_INT_ST1_GEN_PLD_RECEV_ERR_Pos     _U_(12)                                              /**< (DSI_INT_ST1) This bit indicates that during a generic interface packet read back, the payload FIFO becomes full and the received data is corrupted. Position */
#define DSI_INT_ST1_GEN_PLD_RECEV_ERR_Msk     (_U_(0x1) << DSI_INT_ST1_GEN_PLD_RECEV_ERR_Pos)      /**< (DSI_INT_ST1) This bit indicates that during a generic interface packet read back, the payload FIFO becomes full and the received data is corrupted. Mask */
#define DSI_INT_ST1_GEN_PLD_RECEV_ERR(value)  (DSI_INT_ST1_GEN_PLD_RECEV_ERR_Msk & ((value) << DSI_INT_ST1_GEN_PLD_RECEV_ERR_Pos))
#define DSI_INT_ST1_Msk                       _U_(0x00001FFF)                                      /**< (DSI_INT_ST1) Register Mask  */


/* -------- DSI_INT_MSK0 : (DSI Offset: 0xC4) (R/W 32) This register configures masks for the sources of interrupts that affect the INT_ST0 register. Write 1 to Un-mask each error report. -------- */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_0_Pos  _U_(0)                                               /**< (DSI_INT_MSK0) Mask for ack_with_err_0 Position */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_0_Msk  (_U_(0x1) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_0_Pos)   /**< (DSI_INT_MSK0) Mask for ack_with_err_0 Mask */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_0(value) (DSI_INT_MSK0_MASK_ACK_WITH_ERR_0_Msk & ((value) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_0_Pos))
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_1_Pos  _U_(1)                                               /**< (DSI_INT_MSK0) Mask for ack_with_err_1 Position */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_1_Msk  (_U_(0x1) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_1_Pos)   /**< (DSI_INT_MSK0) Mask for ack_with_err_1 Mask */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_1(value) (DSI_INT_MSK0_MASK_ACK_WITH_ERR_1_Msk & ((value) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_1_Pos))
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_2_Pos  _U_(2)                                               /**< (DSI_INT_MSK0) Mask for ack_with_err_2 Position */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_2_Msk  (_U_(0x1) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_2_Pos)   /**< (DSI_INT_MSK0) Mask for ack_with_err_2 Mask */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_2(value) (DSI_INT_MSK0_MASK_ACK_WITH_ERR_2_Msk & ((value) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_2_Pos))
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_3_Pos  _U_(3)                                               /**< (DSI_INT_MSK0) Mask for ack_with_err_3 Position */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_3_Msk  (_U_(0x1) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_3_Pos)   /**< (DSI_INT_MSK0) Mask for ack_with_err_3 Mask */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_3(value) (DSI_INT_MSK0_MASK_ACK_WITH_ERR_3_Msk & ((value) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_3_Pos))
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_4_Pos  _U_(4)                                               /**< (DSI_INT_MSK0) Mask for ack_with_err_4 Position */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_4_Msk  (_U_(0x1) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_4_Pos)   /**< (DSI_INT_MSK0) Mask for ack_with_err_4 Mask */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_4(value) (DSI_INT_MSK0_MASK_ACK_WITH_ERR_4_Msk & ((value) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_4_Pos))
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_5_Pos  _U_(5)                                               /**< (DSI_INT_MSK0) Mask for ack_with_err_5 Position */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_5_Msk  (_U_(0x1) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_5_Pos)   /**< (DSI_INT_MSK0) Mask for ack_with_err_5 Mask */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_5(value) (DSI_INT_MSK0_MASK_ACK_WITH_ERR_5_Msk & ((value) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_5_Pos))
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_6_Pos  _U_(6)                                               /**< (DSI_INT_MSK0) Mask for ack_with_err_6 Position */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_6_Msk  (_U_(0x1) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_6_Pos)   /**< (DSI_INT_MSK0) Mask for ack_with_err_6 Mask */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_6(value) (DSI_INT_MSK0_MASK_ACK_WITH_ERR_6_Msk & ((value) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_6_Pos))
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_7_Pos  _U_(7)                                               /**< (DSI_INT_MSK0) Mask for ack_with_err_7 Position */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_7_Msk  (_U_(0x1) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_7_Pos)   /**< (DSI_INT_MSK0) Mask for ack_with_err_7 Mask */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_7(value) (DSI_INT_MSK0_MASK_ACK_WITH_ERR_7_Msk & ((value) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_7_Pos))
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_8_Pos  _U_(8)                                               /**< (DSI_INT_MSK0) Mask for ack_with_err_8 Position */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_8_Msk  (_U_(0x1) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_8_Pos)   /**< (DSI_INT_MSK0) Mask for ack_with_err_8 Mask */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_8(value) (DSI_INT_MSK0_MASK_ACK_WITH_ERR_8_Msk & ((value) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_8_Pos))
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_9_Pos  _U_(9)                                               /**< (DSI_INT_MSK0) Mask for ack_with_err_9 Position */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_9_Msk  (_U_(0x1) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_9_Pos)   /**< (DSI_INT_MSK0) Mask for ack_with_err_9 Mask */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_9(value) (DSI_INT_MSK0_MASK_ACK_WITH_ERR_9_Msk & ((value) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_9_Pos))
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_10_Pos _U_(10)                                              /**< (DSI_INT_MSK0) Mask for ack_with_err_10 Position */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_10_Msk (_U_(0x1) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_10_Pos)  /**< (DSI_INT_MSK0) Mask for ack_with_err_10 Mask */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_10(value) (DSI_INT_MSK0_MASK_ACK_WITH_ERR_10_Msk & ((value) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_10_Pos))
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_11_Pos _U_(11)                                              /**< (DSI_INT_MSK0) Mask for ack_with_err_11 Position */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_11_Msk (_U_(0x1) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_11_Pos)  /**< (DSI_INT_MSK0) Mask for ack_with_err_11 Mask */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_11(value) (DSI_INT_MSK0_MASK_ACK_WITH_ERR_11_Msk & ((value) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_11_Pos))
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_12_Pos _U_(12)                                              /**< (DSI_INT_MSK0) Mask for ack_with_err_12 Position */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_12_Msk (_U_(0x1) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_12_Pos)  /**< (DSI_INT_MSK0) Mask for ack_with_err_12 Mask */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_12(value) (DSI_INT_MSK0_MASK_ACK_WITH_ERR_12_Msk & ((value) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_12_Pos))
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_13_Pos _U_(13)                                              /**< (DSI_INT_MSK0) Mask for ack_with_err_13 Position */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_13_Msk (_U_(0x1) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_13_Pos)  /**< (DSI_INT_MSK0) Mask for ack_with_err_13 Mask */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_13(value) (DSI_INT_MSK0_MASK_ACK_WITH_ERR_13_Msk & ((value) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_13_Pos))
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_14_Pos _U_(14)                                              /**< (DSI_INT_MSK0) Mask for ack_with_err_14 Position */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_14_Msk (_U_(0x1) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_14_Pos)  /**< (DSI_INT_MSK0) Mask for ack_with_err_14 Mask */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_14(value) (DSI_INT_MSK0_MASK_ACK_WITH_ERR_14_Msk & ((value) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_14_Pos))
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_15_Pos _U_(15)                                              /**< (DSI_INT_MSK0) Mask for ack_with_err_15 Position */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_15_Msk (_U_(0x1) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_15_Pos)  /**< (DSI_INT_MSK0) Mask for ack_with_err_15 Mask */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_15(value) (DSI_INT_MSK0_MASK_ACK_WITH_ERR_15_Msk & ((value) << DSI_INT_MSK0_MASK_ACK_WITH_ERR_15_Pos))
#define DSI_INT_MSK0_MASK_DPHY_ERRORS_0_Pos   _U_(16)                                              /**< (DSI_INT_MSK0) Mask for dphy_errors_0 Position */
#define DSI_INT_MSK0_MASK_DPHY_ERRORS_0_Msk   (_U_(0x1) << DSI_INT_MSK0_MASK_DPHY_ERRORS_0_Pos)    /**< (DSI_INT_MSK0) Mask for dphy_errors_0 Mask */
#define DSI_INT_MSK0_MASK_DPHY_ERRORS_0(value) (DSI_INT_MSK0_MASK_DPHY_ERRORS_0_Msk & ((value) << DSI_INT_MSK0_MASK_DPHY_ERRORS_0_Pos))
#define DSI_INT_MSK0_MASK_DPHY_ERRORS_1_Pos   _U_(17)                                              /**< (DSI_INT_MSK0) Mask for dphy_errors_1 Position */
#define DSI_INT_MSK0_MASK_DPHY_ERRORS_1_Msk   (_U_(0x1) << DSI_INT_MSK0_MASK_DPHY_ERRORS_1_Pos)    /**< (DSI_INT_MSK0) Mask for dphy_errors_1 Mask */
#define DSI_INT_MSK0_MASK_DPHY_ERRORS_1(value) (DSI_INT_MSK0_MASK_DPHY_ERRORS_1_Msk & ((value) << DSI_INT_MSK0_MASK_DPHY_ERRORS_1_Pos))
#define DSI_INT_MSK0_MASK_DPHY_ERRORS_2_Pos   _U_(18)                                              /**< (DSI_INT_MSK0) Mask for dphy_errors_2 Position */
#define DSI_INT_MSK0_MASK_DPHY_ERRORS_2_Msk   (_U_(0x1) << DSI_INT_MSK0_MASK_DPHY_ERRORS_2_Pos)    /**< (DSI_INT_MSK0) Mask for dphy_errors_2 Mask */
#define DSI_INT_MSK0_MASK_DPHY_ERRORS_2(value) (DSI_INT_MSK0_MASK_DPHY_ERRORS_2_Msk & ((value) << DSI_INT_MSK0_MASK_DPHY_ERRORS_2_Pos))
#define DSI_INT_MSK0_MASK_DPHY_ERRORS_3_Pos   _U_(19)                                              /**< (DSI_INT_MSK0) Mask for dphy_errors_3 Position */
#define DSI_INT_MSK0_MASK_DPHY_ERRORS_3_Msk   (_U_(0x1) << DSI_INT_MSK0_MASK_DPHY_ERRORS_3_Pos)    /**< (DSI_INT_MSK0) Mask for dphy_errors_3 Mask */
#define DSI_INT_MSK0_MASK_DPHY_ERRORS_3(value) (DSI_INT_MSK0_MASK_DPHY_ERRORS_3_Msk & ((value) << DSI_INT_MSK0_MASK_DPHY_ERRORS_3_Pos))
#define DSI_INT_MSK0_MASK_DPHY_ERRORS_4_Pos   _U_(20)                                              /**< (DSI_INT_MSK0) Mask for dphy_errors_4 Position */
#define DSI_INT_MSK0_MASK_DPHY_ERRORS_4_Msk   (_U_(0x1) << DSI_INT_MSK0_MASK_DPHY_ERRORS_4_Pos)    /**< (DSI_INT_MSK0) Mask for dphy_errors_4 Mask */
#define DSI_INT_MSK0_MASK_DPHY_ERRORS_4(value) (DSI_INT_MSK0_MASK_DPHY_ERRORS_4_Msk & ((value) << DSI_INT_MSK0_MASK_DPHY_ERRORS_4_Pos))
#define DSI_INT_MSK0_Msk                      _U_(0x001FFFFF)                                      /**< (DSI_INT_MSK0) Register Mask  */

#define DSI_INT_MSK0_MASK_ACK_WITH_ERR__Pos   _U_(0)                                               /**< (DSI_INT_MSK0 Position) Mask for ack_with_err_x */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR__Msk   (_U_(0xFFFF) << DSI_INT_MSK0_MASK_ACK_WITH_ERR__Pos) /**< (DSI_INT_MSK0 Mask) MASK_ACK_WITH_ERR_ */
#define DSI_INT_MSK0_MASK_ACK_WITH_ERR_(value) (DSI_INT_MSK0_MASK_ACK_WITH_ERR__Msk & ((value) << DSI_INT_MSK0_MASK_ACK_WITH_ERR__Pos)) 
#define DSI_INT_MSK0_MASK_DPHY_ERRORS__Pos    _U_(16)                                              /**< (DSI_INT_MSK0 Position) Mask for dphy_errors_4 */
#define DSI_INT_MSK0_MASK_DPHY_ERRORS__Msk    (_U_(0x1F) << DSI_INT_MSK0_MASK_DPHY_ERRORS__Pos)    /**< (DSI_INT_MSK0 Mask) MASK_DPHY_ERRORS_ */
#define DSI_INT_MSK0_MASK_DPHY_ERRORS_(value) (DSI_INT_MSK0_MASK_DPHY_ERRORS__Msk & ((value) << DSI_INT_MSK0_MASK_DPHY_ERRORS__Pos)) 

/* -------- DSI_INT_MSK1 : (DSI Offset: 0xC8) (R/W 32) This register configures masks for the sources of interrupts that affect the INT_ST1 register. -------- */
#define DSI_INT_MSK1_MASK_TO_HS_TX_Pos        _U_(0)                                               /**< (DSI_INT_MSK1) Mask for to_hs_tx Position */
#define DSI_INT_MSK1_MASK_TO_HS_TX_Msk        (_U_(0x1) << DSI_INT_MSK1_MASK_TO_HS_TX_Pos)         /**< (DSI_INT_MSK1) Mask for to_hs_tx Mask */
#define DSI_INT_MSK1_MASK_TO_HS_TX(value)     (DSI_INT_MSK1_MASK_TO_HS_TX_Msk & ((value) << DSI_INT_MSK1_MASK_TO_HS_TX_Pos))
#define DSI_INT_MSK1_MASK_TO_LP_RX_Pos        _U_(1)                                               /**< (DSI_INT_MSK1) Mask for to_lp_rx Position */
#define DSI_INT_MSK1_MASK_TO_LP_RX_Msk        (_U_(0x1) << DSI_INT_MSK1_MASK_TO_LP_RX_Pos)         /**< (DSI_INT_MSK1) Mask for to_lp_rx Mask */
#define DSI_INT_MSK1_MASK_TO_LP_RX(value)     (DSI_INT_MSK1_MASK_TO_LP_RX_Msk & ((value) << DSI_INT_MSK1_MASK_TO_LP_RX_Pos))
#define DSI_INT_MSK1_MASK_ECC_SINGLE_ERR_Pos  _U_(2)                                               /**< (DSI_INT_MSK1) Mask for ecc_single_err Position */
#define DSI_INT_MSK1_MASK_ECC_SINGLE_ERR_Msk  (_U_(0x1) << DSI_INT_MSK1_MASK_ECC_SINGLE_ERR_Pos)   /**< (DSI_INT_MSK1) Mask for ecc_single_err Mask */
#define DSI_INT_MSK1_MASK_ECC_SINGLE_ERR(value) (DSI_INT_MSK1_MASK_ECC_SINGLE_ERR_Msk & ((value) << DSI_INT_MSK1_MASK_ECC_SINGLE_ERR_Pos))
#define DSI_INT_MSK1_MASK_ECC_MILTI_ERR_Pos   _U_(3)                                               /**< (DSI_INT_MSK1) Mask for ecc_milti_err Position */
#define DSI_INT_MSK1_MASK_ECC_MILTI_ERR_Msk   (_U_(0x1) << DSI_INT_MSK1_MASK_ECC_MILTI_ERR_Pos)    /**< (DSI_INT_MSK1) Mask for ecc_milti_err Mask */
#define DSI_INT_MSK1_MASK_ECC_MILTI_ERR(value) (DSI_INT_MSK1_MASK_ECC_MILTI_ERR_Msk & ((value) << DSI_INT_MSK1_MASK_ECC_MILTI_ERR_Pos))
#define DSI_INT_MSK1_MASK_CRC_ERR_Pos         _U_(4)                                               /**< (DSI_INT_MSK1) Mask for crc_err Position */
#define DSI_INT_MSK1_MASK_CRC_ERR_Msk         (_U_(0x1) << DSI_INT_MSK1_MASK_CRC_ERR_Pos)          /**< (DSI_INT_MSK1) Mask for crc_err Mask */
#define DSI_INT_MSK1_MASK_CRC_ERR(value)      (DSI_INT_MSK1_MASK_CRC_ERR_Msk & ((value) << DSI_INT_MSK1_MASK_CRC_ERR_Pos))
#define DSI_INT_MSK1_MASK_PKT_SIZE_ERR_Pos    _U_(5)                                               /**< (DSI_INT_MSK1) Mask for pkt_size_err Position */
#define DSI_INT_MSK1_MASK_PKT_SIZE_ERR_Msk    (_U_(0x1) << DSI_INT_MSK1_MASK_PKT_SIZE_ERR_Pos)     /**< (DSI_INT_MSK1) Mask for pkt_size_err Mask */
#define DSI_INT_MSK1_MASK_PKT_SIZE_ERR(value) (DSI_INT_MSK1_MASK_PKT_SIZE_ERR_Msk & ((value) << DSI_INT_MSK1_MASK_PKT_SIZE_ERR_Pos))
#define DSI_INT_MSK1_MASK_EOPT_ERR_Pos        _U_(6)                                               /**< (DSI_INT_MSK1) Mask for eopt_err Position */
#define DSI_INT_MSK1_MASK_EOPT_ERR_Msk        (_U_(0x1) << DSI_INT_MSK1_MASK_EOPT_ERR_Pos)         /**< (DSI_INT_MSK1) Mask for eopt_err Mask */
#define DSI_INT_MSK1_MASK_EOPT_ERR(value)     (DSI_INT_MSK1_MASK_EOPT_ERR_Msk & ((value) << DSI_INT_MSK1_MASK_EOPT_ERR_Pos))
#define DSI_INT_MSK1_MASK_DPI_PLD_WR_ERR_Pos  _U_(7)                                               /**< (DSI_INT_MSK1) Mask for dpi_pld_wr_err Position */
#define DSI_INT_MSK1_MASK_DPI_PLD_WR_ERR_Msk  (_U_(0x1) << DSI_INT_MSK1_MASK_DPI_PLD_WR_ERR_Pos)   /**< (DSI_INT_MSK1) Mask for dpi_pld_wr_err Mask */
#define DSI_INT_MSK1_MASK_DPI_PLD_WR_ERR(value) (DSI_INT_MSK1_MASK_DPI_PLD_WR_ERR_Msk & ((value) << DSI_INT_MSK1_MASK_DPI_PLD_WR_ERR_Pos))
#define DSI_INT_MSK1_MASK_GEN_CMD_WR_ERR_Pos  _U_(8)                                               /**< (DSI_INT_MSK1) Mask for gen_cmd_wr_err Position */
#define DSI_INT_MSK1_MASK_GEN_CMD_WR_ERR_Msk  (_U_(0x1) << DSI_INT_MSK1_MASK_GEN_CMD_WR_ERR_Pos)   /**< (DSI_INT_MSK1) Mask for gen_cmd_wr_err Mask */
#define DSI_INT_MSK1_MASK_GEN_CMD_WR_ERR(value) (DSI_INT_MSK1_MASK_GEN_CMD_WR_ERR_Msk & ((value) << DSI_INT_MSK1_MASK_GEN_CMD_WR_ERR_Pos))
#define DSI_INT_MSK1_MASK_GEN_PLD_WR_ERR_Pos  _U_(9)                                               /**< (DSI_INT_MSK1) Mask for gen_pld_wr_err Position */
#define DSI_INT_MSK1_MASK_GEN_PLD_WR_ERR_Msk  (_U_(0x1) << DSI_INT_MSK1_MASK_GEN_PLD_WR_ERR_Pos)   /**< (DSI_INT_MSK1) Mask for gen_pld_wr_err Mask */
#define DSI_INT_MSK1_MASK_GEN_PLD_WR_ERR(value) (DSI_INT_MSK1_MASK_GEN_PLD_WR_ERR_Msk & ((value) << DSI_INT_MSK1_MASK_GEN_PLD_WR_ERR_Pos))
#define DSI_INT_MSK1_MASK_GEN_PLD_SEND_ERR_Pos _U_(10)                                              /**< (DSI_INT_MSK1) Mask for gen_pld_send_err Position */
#define DSI_INT_MSK1_MASK_GEN_PLD_SEND_ERR_Msk (_U_(0x1) << DSI_INT_MSK1_MASK_GEN_PLD_SEND_ERR_Pos) /**< (DSI_INT_MSK1) Mask for gen_pld_send_err Mask */
#define DSI_INT_MSK1_MASK_GEN_PLD_SEND_ERR(value) (DSI_INT_MSK1_MASK_GEN_PLD_SEND_ERR_Msk & ((value) << DSI_INT_MSK1_MASK_GEN_PLD_SEND_ERR_Pos))
#define DSI_INT_MSK1_MASK_GEN_PLD_RD_ERR_Pos  _U_(11)                                              /**< (DSI_INT_MSK1) Mask for gen_pld_rd_err Position */
#define DSI_INT_MSK1_MASK_GEN_PLD_RD_ERR_Msk  (_U_(0x1) << DSI_INT_MSK1_MASK_GEN_PLD_RD_ERR_Pos)   /**< (DSI_INT_MSK1) Mask for gen_pld_rd_err Mask */
#define DSI_INT_MSK1_MASK_GEN_PLD_RD_ERR(value) (DSI_INT_MSK1_MASK_GEN_PLD_RD_ERR_Msk & ((value) << DSI_INT_MSK1_MASK_GEN_PLD_RD_ERR_Pos))
#define DSI_INT_MSK1_MASK_GEN_PLD_RECEV_ERR_Pos _U_(12)                                              /**< (DSI_INT_MSK1) Mask for gen_pld_recev_err Position */
#define DSI_INT_MSK1_MASK_GEN_PLD_RECEV_ERR_Msk (_U_(0x1) << DSI_INT_MSK1_MASK_GEN_PLD_RECEV_ERR_Pos) /**< (DSI_INT_MSK1) Mask for gen_pld_recev_err Mask */
#define DSI_INT_MSK1_MASK_GEN_PLD_RECEV_ERR(value) (DSI_INT_MSK1_MASK_GEN_PLD_RECEV_ERR_Msk & ((value) << DSI_INT_MSK1_MASK_GEN_PLD_RECEV_ERR_Pos))
#define DSI_INT_MSK1_Msk                      _U_(0x00001FFF)                                      /**< (DSI_INT_MSK1) Register Mask  */


/* -------- DSI_PHY_CAL : (DSI Offset: 0xCC) (R/W 32) This register controls the skew calibration of D-PHY. -------- */
#define DSI_PHY_CAL_TXSKEWCALHS_Pos           _U_(0)                                               /**< (DSI_PHY_CAL) High-speed skew calibration is started when txskewcalhs is set high (assuming that PHY is in Stop state) Position */
#define DSI_PHY_CAL_TXSKEWCALHS_Msk           (_U_(0x1) << DSI_PHY_CAL_TXSKEWCALHS_Pos)            /**< (DSI_PHY_CAL) High-speed skew calibration is started when txskewcalhs is set high (assuming that PHY is in Stop state) Mask */
#define DSI_PHY_CAL_TXSKEWCALHS(value)        (DSI_PHY_CAL_TXSKEWCALHS_Msk & ((value) << DSI_PHY_CAL_TXSKEWCALHS_Pos))
#define DSI_PHY_CAL_Msk                       _U_(0x00000001)                                      /**< (DSI_PHY_CAL) Register Mask  */


/* -------- DSI_INT_FORCE0 : (DSI Offset: 0xD8) ( /W 32) This register forces that affect the INT_ST0 register. -------- */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_0_Pos _U_(0)                                               /**< (DSI_INT_FORCE0) Force ack_with_err_0 Position */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_0_Msk (_U_(0x1) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_0_Pos) /**< (DSI_INT_FORCE0) Force ack_with_err_0 Mask */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_0(value) (DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_0_Msk & ((value) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_0_Pos))
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_1_Pos _U_(1)                                               /**< (DSI_INT_FORCE0) Force ack_with_err_1 Position */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_1_Msk (_U_(0x1) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_1_Pos) /**< (DSI_INT_FORCE0) Force ack_with_err_1 Mask */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_1(value) (DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_1_Msk & ((value) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_1_Pos))
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_2_Pos _U_(2)                                               /**< (DSI_INT_FORCE0) Force ack_with_err_2 Position */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_2_Msk (_U_(0x1) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_2_Pos) /**< (DSI_INT_FORCE0) Force ack_with_err_2 Mask */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_2(value) (DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_2_Msk & ((value) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_2_Pos))
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_3_Pos _U_(3)                                               /**< (DSI_INT_FORCE0) Force ack_with_err_3 Position */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_3_Msk (_U_(0x1) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_3_Pos) /**< (DSI_INT_FORCE0) Force ack_with_err_3 Mask */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_3(value) (DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_3_Msk & ((value) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_3_Pos))
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_4_Pos _U_(4)                                               /**< (DSI_INT_FORCE0) Force ack_with_err_4 Position */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_4_Msk (_U_(0x1) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_4_Pos) /**< (DSI_INT_FORCE0) Force ack_with_err_4 Mask */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_4(value) (DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_4_Msk & ((value) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_4_Pos))
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_5_Pos _U_(5)                                               /**< (DSI_INT_FORCE0) Force ack_with_err_5 Position */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_5_Msk (_U_(0x1) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_5_Pos) /**< (DSI_INT_FORCE0) Force ack_with_err_5 Mask */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_5(value) (DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_5_Msk & ((value) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_5_Pos))
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_6_Pos _U_(6)                                               /**< (DSI_INT_FORCE0) Force ack_with_err_6 Position */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_6_Msk (_U_(0x1) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_6_Pos) /**< (DSI_INT_FORCE0) Force ack_with_err_6 Mask */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_6(value) (DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_6_Msk & ((value) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_6_Pos))
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_7_Pos _U_(7)                                               /**< (DSI_INT_FORCE0) Force ack_with_err_7 Position */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_7_Msk (_U_(0x1) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_7_Pos) /**< (DSI_INT_FORCE0) Force ack_with_err_7 Mask */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_7(value) (DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_7_Msk & ((value) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_7_Pos))
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_8_Pos _U_(8)                                               /**< (DSI_INT_FORCE0) Force ack_with_err_8 Position */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_8_Msk (_U_(0x1) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_8_Pos) /**< (DSI_INT_FORCE0) Force ack_with_err_8 Mask */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_8(value) (DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_8_Msk & ((value) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_8_Pos))
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_9_Pos _U_(9)                                               /**< (DSI_INT_FORCE0) Force ack_with_err_9 Position */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_9_Msk (_U_(0x1) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_9_Pos) /**< (DSI_INT_FORCE0) Force ack_with_err_9 Mask */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_9(value) (DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_9_Msk & ((value) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_9_Pos))
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_10_Pos _U_(10)                                              /**< (DSI_INT_FORCE0) Force ack_with_err_10 Position */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_10_Msk (_U_(0x1) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_10_Pos) /**< (DSI_INT_FORCE0) Force ack_with_err_10 Mask */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_10(value) (DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_10_Msk & ((value) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_10_Pos))
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_11_Pos _U_(11)                                              /**< (DSI_INT_FORCE0) Force ack_with_err_11 Position */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_11_Msk (_U_(0x1) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_11_Pos) /**< (DSI_INT_FORCE0) Force ack_with_err_11 Mask */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_11(value) (DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_11_Msk & ((value) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_11_Pos))
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_12_Pos _U_(12)                                              /**< (DSI_INT_FORCE0) Force ack_with_err_12 Position */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_12_Msk (_U_(0x1) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_12_Pos) /**< (DSI_INT_FORCE0) Force ack_with_err_12 Mask */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_12(value) (DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_12_Msk & ((value) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_12_Pos))
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_13_Pos _U_(13)                                              /**< (DSI_INT_FORCE0) Force ack_with_err_13 Position */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_13_Msk (_U_(0x1) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_13_Pos) /**< (DSI_INT_FORCE0) Force ack_with_err_13 Mask */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_13(value) (DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_13_Msk & ((value) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_13_Pos))
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_14_Pos _U_(14)                                              /**< (DSI_INT_FORCE0) Force ack_with_err_14 Position */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_14_Msk (_U_(0x1) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_14_Pos) /**< (DSI_INT_FORCE0) Force ack_with_err_14 Mask */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_14(value) (DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_14_Msk & ((value) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_14_Pos))
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_15_Pos _U_(15)                                              /**< (DSI_INT_FORCE0) Force ack_with_err_15 Position */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_15_Msk (_U_(0x1) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_15_Pos) /**< (DSI_INT_FORCE0) Force ack_with_err_15 Mask */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_15(value) (DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_15_Msk & ((value) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_15_Pos))
#define DSI_INT_FORCE0_FORCE_DPHY_ERRORS_0_Pos _U_(16)                                              /**< (DSI_INT_FORCE0) Force dphy_errors_0 Position */
#define DSI_INT_FORCE0_FORCE_DPHY_ERRORS_0_Msk (_U_(0x1) << DSI_INT_FORCE0_FORCE_DPHY_ERRORS_0_Pos) /**< (DSI_INT_FORCE0) Force dphy_errors_0 Mask */
#define DSI_INT_FORCE0_FORCE_DPHY_ERRORS_0(value) (DSI_INT_FORCE0_FORCE_DPHY_ERRORS_0_Msk & ((value) << DSI_INT_FORCE0_FORCE_DPHY_ERRORS_0_Pos))
#define DSI_INT_FORCE0_FORCE_DPHY_ERRORS_1_Pos _U_(17)                                              /**< (DSI_INT_FORCE0) Force dphy_errors_1 Position */
#define DSI_INT_FORCE0_FORCE_DPHY_ERRORS_1_Msk (_U_(0x1) << DSI_INT_FORCE0_FORCE_DPHY_ERRORS_1_Pos) /**< (DSI_INT_FORCE0) Force dphy_errors_1 Mask */
#define DSI_INT_FORCE0_FORCE_DPHY_ERRORS_1(value) (DSI_INT_FORCE0_FORCE_DPHY_ERRORS_1_Msk & ((value) << DSI_INT_FORCE0_FORCE_DPHY_ERRORS_1_Pos))
#define DSI_INT_FORCE0_FORCE_DPHY_ERRORS_2_Pos _U_(18)                                              /**< (DSI_INT_FORCE0) Force dphy_errors_2 Position */
#define DSI_INT_FORCE0_FORCE_DPHY_ERRORS_2_Msk (_U_(0x1) << DSI_INT_FORCE0_FORCE_DPHY_ERRORS_2_Pos) /**< (DSI_INT_FORCE0) Force dphy_errors_2 Mask */
#define DSI_INT_FORCE0_FORCE_DPHY_ERRORS_2(value) (DSI_INT_FORCE0_FORCE_DPHY_ERRORS_2_Msk & ((value) << DSI_INT_FORCE0_FORCE_DPHY_ERRORS_2_Pos))
#define DSI_INT_FORCE0_FORCE_DPHY_ERRORS_3_Pos _U_(19)                                              /**< (DSI_INT_FORCE0) Force dphy_errors_3 Position */
#define DSI_INT_FORCE0_FORCE_DPHY_ERRORS_3_Msk (_U_(0x1) << DSI_INT_FORCE0_FORCE_DPHY_ERRORS_3_Pos) /**< (DSI_INT_FORCE0) Force dphy_errors_3 Mask */
#define DSI_INT_FORCE0_FORCE_DPHY_ERRORS_3(value) (DSI_INT_FORCE0_FORCE_DPHY_ERRORS_3_Msk & ((value) << DSI_INT_FORCE0_FORCE_DPHY_ERRORS_3_Pos))
#define DSI_INT_FORCE0_FORCE_DPHY_ERRORS_4_Pos _U_(20)                                              /**< (DSI_INT_FORCE0) Force dphy_errors_4 Position */
#define DSI_INT_FORCE0_FORCE_DPHY_ERRORS_4_Msk (_U_(0x1) << DSI_INT_FORCE0_FORCE_DPHY_ERRORS_4_Pos) /**< (DSI_INT_FORCE0) Force dphy_errors_4 Mask */
#define DSI_INT_FORCE0_FORCE_DPHY_ERRORS_4(value) (DSI_INT_FORCE0_FORCE_DPHY_ERRORS_4_Msk & ((value) << DSI_INT_FORCE0_FORCE_DPHY_ERRORS_4_Pos))
#define DSI_INT_FORCE0_Msk                    _U_(0x001FFFFF)                                      /**< (DSI_INT_FORCE0) Register Mask  */

#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR__Pos _U_(0)                                               /**< (DSI_INT_FORCE0 Position) Force ack_with_err_x */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR__Msk (_U_(0xFFFF) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR__Pos) /**< (DSI_INT_FORCE0 Mask) FORCE_ACK_WITH_ERR_ */
#define DSI_INT_FORCE0_FORCE_ACK_WITH_ERR_(value) (DSI_INT_FORCE0_FORCE_ACK_WITH_ERR__Msk & ((value) << DSI_INT_FORCE0_FORCE_ACK_WITH_ERR__Pos)) 
#define DSI_INT_FORCE0_FORCE_DPHY_ERRORS__Pos _U_(16)                                              /**< (DSI_INT_FORCE0 Position) Force dphy_errors_4 */
#define DSI_INT_FORCE0_FORCE_DPHY_ERRORS__Msk (_U_(0x1F) << DSI_INT_FORCE0_FORCE_DPHY_ERRORS__Pos) /**< (DSI_INT_FORCE0 Mask) FORCE_DPHY_ERRORS_ */
#define DSI_INT_FORCE0_FORCE_DPHY_ERRORS_(value) (DSI_INT_FORCE0_FORCE_DPHY_ERRORS__Msk & ((value) << DSI_INT_FORCE0_FORCE_DPHY_ERRORS__Pos)) 

/* -------- DSI_INT_FORCE1 : (DSI Offset: 0xDC) ( /W 32) This register forces interrupts that affect the INT_ST1 register. -------- */
#define DSI_INT_FORCE1_FORCE_TO_HS_TX_Pos     _U_(0)                                               /**< (DSI_INT_FORCE1) Force to_hs_tx Position */
#define DSI_INT_FORCE1_FORCE_TO_HS_TX_Msk     (_U_(0x1) << DSI_INT_FORCE1_FORCE_TO_HS_TX_Pos)      /**< (DSI_INT_FORCE1) Force to_hs_tx Mask */
#define DSI_INT_FORCE1_FORCE_TO_HS_TX(value)  (DSI_INT_FORCE1_FORCE_TO_HS_TX_Msk & ((value) << DSI_INT_FORCE1_FORCE_TO_HS_TX_Pos))
#define DSI_INT_FORCE1_FORCE_TO_LP_RX_Pos     _U_(1)                                               /**< (DSI_INT_FORCE1) Force to_lp_rx Position */
#define DSI_INT_FORCE1_FORCE_TO_LP_RX_Msk     (_U_(0x1) << DSI_INT_FORCE1_FORCE_TO_LP_RX_Pos)      /**< (DSI_INT_FORCE1) Force to_lp_rx Mask */
#define DSI_INT_FORCE1_FORCE_TO_LP_RX(value)  (DSI_INT_FORCE1_FORCE_TO_LP_RX_Msk & ((value) << DSI_INT_FORCE1_FORCE_TO_LP_RX_Pos))
#define DSI_INT_FORCE1_FORCE_ECC_SINGLE_ERR_Pos _U_(2)                                               /**< (DSI_INT_FORCE1) Force ecc_single_err Position */
#define DSI_INT_FORCE1_FORCE_ECC_SINGLE_ERR_Msk (_U_(0x1) << DSI_INT_FORCE1_FORCE_ECC_SINGLE_ERR_Pos) /**< (DSI_INT_FORCE1) Force ecc_single_err Mask */
#define DSI_INT_FORCE1_FORCE_ECC_SINGLE_ERR(value) (DSI_INT_FORCE1_FORCE_ECC_SINGLE_ERR_Msk & ((value) << DSI_INT_FORCE1_FORCE_ECC_SINGLE_ERR_Pos))
#define DSI_INT_FORCE1_FORCE_ECC_MILTI_ERR_Pos _U_(3)                                               /**< (DSI_INT_FORCE1) Force ecc_milti_err Position */
#define DSI_INT_FORCE1_FORCE_ECC_MILTI_ERR_Msk (_U_(0x1) << DSI_INT_FORCE1_FORCE_ECC_MILTI_ERR_Pos) /**< (DSI_INT_FORCE1) Force ecc_milti_err Mask */
#define DSI_INT_FORCE1_FORCE_ECC_MILTI_ERR(value) (DSI_INT_FORCE1_FORCE_ECC_MILTI_ERR_Msk & ((value) << DSI_INT_FORCE1_FORCE_ECC_MILTI_ERR_Pos))
#define DSI_INT_FORCE1_FORCE_CRC_ERR_Pos      _U_(4)                                               /**< (DSI_INT_FORCE1) Force crc_err Position */
#define DSI_INT_FORCE1_FORCE_CRC_ERR_Msk      (_U_(0x1) << DSI_INT_FORCE1_FORCE_CRC_ERR_Pos)       /**< (DSI_INT_FORCE1) Force crc_err Mask */
#define DSI_INT_FORCE1_FORCE_CRC_ERR(value)   (DSI_INT_FORCE1_FORCE_CRC_ERR_Msk & ((value) << DSI_INT_FORCE1_FORCE_CRC_ERR_Pos))
#define DSI_INT_FORCE1_FORCE_PKT_SIZE_ERR_Pos _U_(5)                                               /**< (DSI_INT_FORCE1) Force pkt_size_err Position */
#define DSI_INT_FORCE1_FORCE_PKT_SIZE_ERR_Msk (_U_(0x1) << DSI_INT_FORCE1_FORCE_PKT_SIZE_ERR_Pos)  /**< (DSI_INT_FORCE1) Force pkt_size_err Mask */
#define DSI_INT_FORCE1_FORCE_PKT_SIZE_ERR(value) (DSI_INT_FORCE1_FORCE_PKT_SIZE_ERR_Msk & ((value) << DSI_INT_FORCE1_FORCE_PKT_SIZE_ERR_Pos))
#define DSI_INT_FORCE1_FORCE_EOPT_ERR_Pos     _U_(6)                                               /**< (DSI_INT_FORCE1) Force eopt_err Position */
#define DSI_INT_FORCE1_FORCE_EOPT_ERR_Msk     (_U_(0x1) << DSI_INT_FORCE1_FORCE_EOPT_ERR_Pos)      /**< (DSI_INT_FORCE1) Force eopt_err Mask */
#define DSI_INT_FORCE1_FORCE_EOPT_ERR(value)  (DSI_INT_FORCE1_FORCE_EOPT_ERR_Msk & ((value) << DSI_INT_FORCE1_FORCE_EOPT_ERR_Pos))
#define DSI_INT_FORCE1_FORCE_DPI_PLD_WR_ERR_Pos _U_(7)                                               /**< (DSI_INT_FORCE1) Force dpi_pld_wr_err Position */
#define DSI_INT_FORCE1_FORCE_DPI_PLD_WR_ERR_Msk (_U_(0x1) << DSI_INT_FORCE1_FORCE_DPI_PLD_WR_ERR_Pos) /**< (DSI_INT_FORCE1) Force dpi_pld_wr_err Mask */
#define DSI_INT_FORCE1_FORCE_DPI_PLD_WR_ERR(value) (DSI_INT_FORCE1_FORCE_DPI_PLD_WR_ERR_Msk & ((value) << DSI_INT_FORCE1_FORCE_DPI_PLD_WR_ERR_Pos))
#define DSI_INT_FORCE1_FORCE_GEN_CMD_WR_ERR_Pos _U_(8)                                               /**< (DSI_INT_FORCE1) Force gen_cmd_wr_err Position */
#define DSI_INT_FORCE1_FORCE_GEN_CMD_WR_ERR_Msk (_U_(0x1) << DSI_INT_FORCE1_FORCE_GEN_CMD_WR_ERR_Pos) /**< (DSI_INT_FORCE1) Force gen_cmd_wr_err Mask */
#define DSI_INT_FORCE1_FORCE_GEN_CMD_WR_ERR(value) (DSI_INT_FORCE1_FORCE_GEN_CMD_WR_ERR_Msk & ((value) << DSI_INT_FORCE1_FORCE_GEN_CMD_WR_ERR_Pos))
#define DSI_INT_FORCE1_FORCE_GEN_PLD_WR_ERR_Pos _U_(9)                                               /**< (DSI_INT_FORCE1) Force gen_pld_wr_err Position */
#define DSI_INT_FORCE1_FORCE_GEN_PLD_WR_ERR_Msk (_U_(0x1) << DSI_INT_FORCE1_FORCE_GEN_PLD_WR_ERR_Pos) /**< (DSI_INT_FORCE1) Force gen_pld_wr_err Mask */
#define DSI_INT_FORCE1_FORCE_GEN_PLD_WR_ERR(value) (DSI_INT_FORCE1_FORCE_GEN_PLD_WR_ERR_Msk & ((value) << DSI_INT_FORCE1_FORCE_GEN_PLD_WR_ERR_Pos))
#define DSI_INT_FORCE1_FORCE_GEN_PLD_SEND_ERR_Pos _U_(10)                                              /**< (DSI_INT_FORCE1) Force gen_pld_send_err Position */
#define DSI_INT_FORCE1_FORCE_GEN_PLD_SEND_ERR_Msk (_U_(0x1) << DSI_INT_FORCE1_FORCE_GEN_PLD_SEND_ERR_Pos) /**< (DSI_INT_FORCE1) Force gen_pld_send_err Mask */
#define DSI_INT_FORCE1_FORCE_GEN_PLD_SEND_ERR(value) (DSI_INT_FORCE1_FORCE_GEN_PLD_SEND_ERR_Msk & ((value) << DSI_INT_FORCE1_FORCE_GEN_PLD_SEND_ERR_Pos))
#define DSI_INT_FORCE1_FORCE_GEN_PLD_RD_ERR_Pos _U_(11)                                              /**< (DSI_INT_FORCE1) Force gen_pld_rd_err Position */
#define DSI_INT_FORCE1_FORCE_GEN_PLD_RD_ERR_Msk (_U_(0x1) << DSI_INT_FORCE1_FORCE_GEN_PLD_RD_ERR_Pos) /**< (DSI_INT_FORCE1) Force gen_pld_rd_err Mask */
#define DSI_INT_FORCE1_FORCE_GEN_PLD_RD_ERR(value) (DSI_INT_FORCE1_FORCE_GEN_PLD_RD_ERR_Msk & ((value) << DSI_INT_FORCE1_FORCE_GEN_PLD_RD_ERR_Pos))
#define DSI_INT_FORCE1_FORCE_GEN_PLD_RECEV_ERR_Pos _U_(12)                                              /**< (DSI_INT_FORCE1) Force gen_pld_recev_err Position */
#define DSI_INT_FORCE1_FORCE_GEN_PLD_RECEV_ERR_Msk (_U_(0x1) << DSI_INT_FORCE1_FORCE_GEN_PLD_RECEV_ERR_Pos) /**< (DSI_INT_FORCE1) Force gen_pld_recev_err Mask */
#define DSI_INT_FORCE1_FORCE_GEN_PLD_RECEV_ERR(value) (DSI_INT_FORCE1_FORCE_GEN_PLD_RECEV_ERR_Msk & ((value) << DSI_INT_FORCE1_FORCE_GEN_PLD_RECEV_ERR_Pos))
#define DSI_INT_FORCE1_Msk                    _U_(0x00001FFF)                                      /**< (DSI_INT_FORCE1) Register Mask  */


/* -------- DSI_DSC_PARAMETER : (DSI Offset: 0xF0) (R/W 32) This register configures Display Stream Compression -------- */
#define DSI_DSC_PARAMETER_COMPRESSION_MODE_Pos _U_(0)                                               /**< (DSI_DSC_PARAMETER) When set to 1, this bit enables the compression mode. Position */
#define DSI_DSC_PARAMETER_COMPRESSION_MODE_Msk (_U_(0x1) << DSI_DSC_PARAMETER_COMPRESSION_MODE_Pos) /**< (DSI_DSC_PARAMETER) When set to 1, this bit enables the compression mode. Mask */
#define DSI_DSC_PARAMETER_COMPRESSION_MODE(value) (DSI_DSC_PARAMETER_COMPRESSION_MODE_Msk & ((value) << DSI_DSC_PARAMETER_COMPRESSION_MODE_Pos))
#define DSI_DSC_PARAMETER_COMPRESS_ALGO_Pos   _U_(8)                                               /**< (DSI_DSC_PARAMETER) This field indicates the algorithm identifier:  - 00 = VESA DSC Standard 1.1  - 11 = vendor-specific algorithm  - 01 and 10 = reserved, not used Position */
#define DSI_DSC_PARAMETER_COMPRESS_ALGO_Msk   (_U_(0x3) << DSI_DSC_PARAMETER_COMPRESS_ALGO_Pos)    /**< (DSI_DSC_PARAMETER) This field indicates the algorithm identifier:  - 00 = VESA DSC Standard 1.1  - 11 = vendor-specific algorithm  - 01 and 10 = reserved, not used Mask */
#define DSI_DSC_PARAMETER_COMPRESS_ALGO(value) (DSI_DSC_PARAMETER_COMPRESS_ALGO_Msk & ((value) << DSI_DSC_PARAMETER_COMPRESS_ALGO_Pos))
#define DSI_DSC_PARAMETER_PPS_SEL_Pos         _U_(16)                                              /**< (DSI_DSC_PARAMETER) This field indicates the  PPS selector:  - 00 = PPS Table 1  - 01 = PPS Table 2  - 10 = PPS Table 3  - 11 = PPS Table 4 Position */
#define DSI_DSC_PARAMETER_PPS_SEL_Msk         (_U_(0x3) << DSI_DSC_PARAMETER_PPS_SEL_Pos)          /**< (DSI_DSC_PARAMETER) This field indicates the  PPS selector:  - 00 = PPS Table 1  - 01 = PPS Table 2  - 10 = PPS Table 3  - 11 = PPS Table 4 Mask */
#define DSI_DSC_PARAMETER_PPS_SEL(value)      (DSI_DSC_PARAMETER_PPS_SEL_Msk & ((value) << DSI_DSC_PARAMETER_PPS_SEL_Pos))
#define DSI_DSC_PARAMETER_Msk                 _U_(0x00030301)                                      /**< (DSI_DSC_PARAMETER) Register Mask  */


/* -------- DSI_PHY_TMR_RD_CFG : (DSI Offset: 0xF4) (R/W 32) This register configures times related to PHY to perform some operations in lane byte clock cycles. -------- */
#define DSI_PHY_TMR_RD_CFG_MAX_RD_TIME_Pos    _U_(0)                                               /**< (DSI_PHY_TMR_RD_CFG) This field configures the maximum time required to perform a read command in lane byte clock cycles. This register can only be modified when no read command is in progress. Position */
#define DSI_PHY_TMR_RD_CFG_MAX_RD_TIME_Msk    (_U_(0x7FFF) << DSI_PHY_TMR_RD_CFG_MAX_RD_TIME_Pos)  /**< (DSI_PHY_TMR_RD_CFG) This field configures the maximum time required to perform a read command in lane byte clock cycles. This register can only be modified when no read command is in progress. Mask */
#define DSI_PHY_TMR_RD_CFG_MAX_RD_TIME(value) (DSI_PHY_TMR_RD_CFG_MAX_RD_TIME_Msk & ((value) << DSI_PHY_TMR_RD_CFG_MAX_RD_TIME_Pos))
#define DSI_PHY_TMR_RD_CFG_Msk                _U_(0x00007FFF)                                      /**< (DSI_PHY_TMR_RD_CFG) Register Mask  */


/* -------- DSI_VID_SHADOW_CTRL : (DSI Offset: 0x100) (R/W 32) This register controls dpi shadow feature -------- */
#define DSI_VID_SHADOW_CTRL_VID_SHADOW_EN_Pos _U_(0)                                               /**< (DSI_VID_SHADOW_CTRL) When set to 1, DPI receives the active configuration from the auxiliary registers. When the feature is set at the same time than vid_shadow_req the auxiliary registers are automatically updated. Position */
#define DSI_VID_SHADOW_CTRL_VID_SHADOW_EN_Msk (_U_(0x1) << DSI_VID_SHADOW_CTRL_VID_SHADOW_EN_Pos)  /**< (DSI_VID_SHADOW_CTRL) When set to 1, DPI receives the active configuration from the auxiliary registers. When the feature is set at the same time than vid_shadow_req the auxiliary registers are automatically updated. Mask */
#define DSI_VID_SHADOW_CTRL_VID_SHADOW_EN(value) (DSI_VID_SHADOW_CTRL_VID_SHADOW_EN_Msk & ((value) << DSI_VID_SHADOW_CTRL_VID_SHADOW_EN_Pos))
#define DSI_VID_SHADOW_CTRL_VID_SHADOW_REQ_Pos _U_(8)                                               /**< (DSI_VID_SHADOW_CTRL) When set to 1, this bit request that the dpi registers from regbank are copied to the auxiliary registers. When the request is completed this bit is auto clear. Position */
#define DSI_VID_SHADOW_CTRL_VID_SHADOW_REQ_Msk (_U_(0x1) << DSI_VID_SHADOW_CTRL_VID_SHADOW_REQ_Pos) /**< (DSI_VID_SHADOW_CTRL) When set to 1, this bit request that the dpi registers from regbank are copied to the auxiliary registers. When the request is completed this bit is auto clear. Mask */
#define DSI_VID_SHADOW_CTRL_VID_SHADOW_REQ(value) (DSI_VID_SHADOW_CTRL_VID_SHADOW_REQ_Msk & ((value) << DSI_VID_SHADOW_CTRL_VID_SHADOW_REQ_Pos))
#define DSI_VID_SHADOW_CTRL_VID_SHADOW_PIN_REQ_Pos _U_(16)                                              /**< (DSI_VID_SHADOW_CTRL) When set to 1, the video request is done by external pin. In this mode vid_shadow_req is ignored. Position */
#define DSI_VID_SHADOW_CTRL_VID_SHADOW_PIN_REQ_Msk (_U_(0x1) << DSI_VID_SHADOW_CTRL_VID_SHADOW_PIN_REQ_Pos) /**< (DSI_VID_SHADOW_CTRL) When set to 1, the video request is done by external pin. In this mode vid_shadow_req is ignored. Mask */
#define DSI_VID_SHADOW_CTRL_VID_SHADOW_PIN_REQ(value) (DSI_VID_SHADOW_CTRL_VID_SHADOW_PIN_REQ_Msk & ((value) << DSI_VID_SHADOW_CTRL_VID_SHADOW_PIN_REQ_Pos))
#define DSI_VID_SHADOW_CTRL_Msk               _U_(0x00010101)                                      /**< (DSI_VID_SHADOW_CTRL) Register Mask  */


/* -------- DSI_DPI_VCID_ACT : (DSI Offset: 0x10C) ( R/ 32) This register holds the value that controller is using for DPI_VCID. -------- */
#define DSI_DPI_VCID_ACT_DPI_VCID_Pos         _U_(0)                                               /**< (DSI_DPI_VCID_ACT) This field specifies the DPI virtual channel id that is indexed to the Video mode packets. Position */
#define DSI_DPI_VCID_ACT_DPI_VCID_Msk         (_U_(0x3) << DSI_DPI_VCID_ACT_DPI_VCID_Pos)          /**< (DSI_DPI_VCID_ACT) This field specifies the DPI virtual channel id that is indexed to the Video mode packets. Mask */
#define DSI_DPI_VCID_ACT_DPI_VCID(value)      (DSI_DPI_VCID_ACT_DPI_VCID_Msk & ((value) << DSI_DPI_VCID_ACT_DPI_VCID_Pos))
#define DSI_DPI_VCID_ACT_Msk                  _U_(0x00000003)                                      /**< (DSI_DPI_VCID_ACT) Register Mask  */


/* -------- DSI_DPI_COLOR_CODING_ACT : (DSI Offset: 0x110) ( R/ 32) This register holds the value that controller is using for DPI_COLOR_CODING. -------- */
#define DSI_DPI_COLOR_CODING_ACT_DPI_COLOR_CODING_Pos _U_(0)                                               /**< (DSI_DPI_COLOR_CODING_ACT) This field specifies the DPI color coding as follows:  - 0000: 16-bit configuration 1  - 0001: 16-bit configuration 2  - 0010: 16-bit configuration 3  - 0011: 18-bit configuration 1  - 0100: 18-bit configuration 2  - 0101: 24-bit  - 0110: 20-bit YCbCr 4:2:2 loosely packed  - 0111: 24-bit YCbCr 4:2:2  - 1000: 16-bit YCbCr 4:2:2  - 1001: 30-bit  - 1010: 36-bit  - 1011: 12-bit YCbCr 4:2:0  - 11xx: DSC24 compressed Data If the eDPI interface is chosen and currently works in the Command mode (cmd_video_mode = 1), then:  - 0000: 16-bit configuration 1  - 0001: 16-bit configuration 2  - 0010: 16-bit configuration 3  - 0011: 18-bit configuration 1  - 0100: 18-bit configuration 2  - 0101-0111: 24-bit  - 1Xxx: DSC24 compressed Data Position */
#define DSI_DPI_COLOR_CODING_ACT_DPI_COLOR_CODING_Msk (_U_(0xF) << DSI_DPI_COLOR_CODING_ACT_DPI_COLOR_CODING_Pos) /**< (DSI_DPI_COLOR_CODING_ACT) This field specifies the DPI color coding as follows:  - 0000: 16-bit configuration 1  - 0001: 16-bit configuration 2  - 0010: 16-bit configuration 3  - 0011: 18-bit configuration 1  - 0100: 18-bit configuration 2  - 0101: 24-bit  - 0110: 20-bit YCbCr 4:2:2 loosely packed  - 0111: 24-bit YCbCr 4:2:2  - 1000: 16-bit YCbCr 4:2:2  - 1001: 30-bit  - 1010: 36-bit  - 1011: 12-bit YCbCr 4:2:0  - 11xx: DSC24 compressed Data If the eDPI interface is chosen and currently works in the Command mode (cmd_video_mode = 1), then:  - 0000: 16-bit configuration 1  - 0001: 16-bit configuration 2  - 0010: 16-bit configuration 3  - 0011: 18-bit configuration 1  - 0100: 18-bit configuration 2  - 0101-0111: 24-bit  - 1Xxx: DSC24 compressed Data Mask */
#define DSI_DPI_COLOR_CODING_ACT_DPI_COLOR_CODING(value) (DSI_DPI_COLOR_CODING_ACT_DPI_COLOR_CODING_Msk & ((value) << DSI_DPI_COLOR_CODING_ACT_DPI_COLOR_CODING_Pos))
#define DSI_DPI_COLOR_CODING_ACT_LOOSELY18_EN_Pos _U_(8)                                               /**< (DSI_DPI_COLOR_CODING_ACT) When 1, this bit activates loosely packed variant to 18-bit configurations. Position */
#define DSI_DPI_COLOR_CODING_ACT_LOOSELY18_EN_Msk (_U_(0x1) << DSI_DPI_COLOR_CODING_ACT_LOOSELY18_EN_Pos) /**< (DSI_DPI_COLOR_CODING_ACT) When 1, this bit activates loosely packed variant to 18-bit configurations. Mask */
#define DSI_DPI_COLOR_CODING_ACT_LOOSELY18_EN(value) (DSI_DPI_COLOR_CODING_ACT_LOOSELY18_EN_Msk & ((value) << DSI_DPI_COLOR_CODING_ACT_LOOSELY18_EN_Pos))
#define DSI_DPI_COLOR_CODING_ACT_Msk          _U_(0x0000010F)                                      /**< (DSI_DPI_COLOR_CODING_ACT) Register Mask  */


/* -------- DSI_DPI_LP_CMD_TIM_ACT : (DSI Offset: 0x118) ( R/ 32) This register holds the value that controller is using for DPI_LP_CMD_TIM. -------- */
#define DSI_DPI_LP_CMD_TIM_ACT_INVACT_LPCMD_TIME_Pos _U_(0)                                               /**< (DSI_DPI_LP_CMD_TIM_ACT) This field is used for the transmission of commands in low-power mode. It specifies the size, in bytes, of the largest packet that can fit in a line during the VACT region. Position */
#define DSI_DPI_LP_CMD_TIM_ACT_INVACT_LPCMD_TIME_Msk (_U_(0xFF) << DSI_DPI_LP_CMD_TIM_ACT_INVACT_LPCMD_TIME_Pos) /**< (DSI_DPI_LP_CMD_TIM_ACT) This field is used for the transmission of commands in low-power mode. It specifies the size, in bytes, of the largest packet that can fit in a line during the VACT region. Mask */
#define DSI_DPI_LP_CMD_TIM_ACT_INVACT_LPCMD_TIME(value) (DSI_DPI_LP_CMD_TIM_ACT_INVACT_LPCMD_TIME_Msk & ((value) << DSI_DPI_LP_CMD_TIM_ACT_INVACT_LPCMD_TIME_Pos))
#define DSI_DPI_LP_CMD_TIM_ACT_OUTVACT_LPCMD_TIME_Pos _U_(16)                                              /**< (DSI_DPI_LP_CMD_TIM_ACT) This field is used for the transmission of commands in low-power mode. It specifies the size, in bytes, of the largest packet that can fit in a line during the VSA, VBP, and VFP regions. Position */
#define DSI_DPI_LP_CMD_TIM_ACT_OUTVACT_LPCMD_TIME_Msk (_U_(0xFF) << DSI_DPI_LP_CMD_TIM_ACT_OUTVACT_LPCMD_TIME_Pos) /**< (DSI_DPI_LP_CMD_TIM_ACT) This field is used for the transmission of commands in low-power mode. It specifies the size, in bytes, of the largest packet that can fit in a line during the VSA, VBP, and VFP regions. Mask */
#define DSI_DPI_LP_CMD_TIM_ACT_OUTVACT_LPCMD_TIME(value) (DSI_DPI_LP_CMD_TIM_ACT_OUTVACT_LPCMD_TIME_Msk & ((value) << DSI_DPI_LP_CMD_TIM_ACT_OUTVACT_LPCMD_TIME_Pos))
#define DSI_DPI_LP_CMD_TIM_ACT_Msk            _U_(0x00FF00FF)                                      /**< (DSI_DPI_LP_CMD_TIM_ACT) Register Mask  */


/* -------- DSI_VID_MODE_CFG_ACT : (DSI Offset: 0x138) ( R/ 32) This register holds the value that controller is using for VID_MODE_CFG. -------- */
#define DSI_VID_MODE_CFG_ACT_VID_MODE_TYPE_Pos _U_(0)                                               /**< (DSI_VID_MODE_CFG_ACT) This field specifies the video mode transmission type as follows: 00: Non-burst with sync pulses 01: Non-burst with sync events 10 and 11: Burst mode Position */
#define DSI_VID_MODE_CFG_ACT_VID_MODE_TYPE_Msk (_U_(0x3) << DSI_VID_MODE_CFG_ACT_VID_MODE_TYPE_Pos) /**< (DSI_VID_MODE_CFG_ACT) This field specifies the video mode transmission type as follows: 00: Non-burst with sync pulses 01: Non-burst with sync events 10 and 11: Burst mode Mask */
#define DSI_VID_MODE_CFG_ACT_VID_MODE_TYPE(value) (DSI_VID_MODE_CFG_ACT_VID_MODE_TYPE_Msk & ((value) << DSI_VID_MODE_CFG_ACT_VID_MODE_TYPE_Pos))
#define DSI_VID_MODE_CFG_ACT_LP_VSA_EN_Pos    _U_(2)                                               /**< (DSI_VID_MODE_CFG_ACT) When 1, this bit enables the return to low-power inside the VSA period when timing allows. Position */
#define DSI_VID_MODE_CFG_ACT_LP_VSA_EN_Msk    (_U_(0x1) << DSI_VID_MODE_CFG_ACT_LP_VSA_EN_Pos)     /**< (DSI_VID_MODE_CFG_ACT) When 1, this bit enables the return to low-power inside the VSA period when timing allows. Mask */
#define DSI_VID_MODE_CFG_ACT_LP_VSA_EN(value) (DSI_VID_MODE_CFG_ACT_LP_VSA_EN_Msk & ((value) << DSI_VID_MODE_CFG_ACT_LP_VSA_EN_Pos))
#define DSI_VID_MODE_CFG_ACT_LP_VBP_EN_Pos    _U_(3)                                               /**< (DSI_VID_MODE_CFG_ACT) When 1, this bit enables the return to low-power inside the VBP period when timing allows. Position */
#define DSI_VID_MODE_CFG_ACT_LP_VBP_EN_Msk    (_U_(0x1) << DSI_VID_MODE_CFG_ACT_LP_VBP_EN_Pos)     /**< (DSI_VID_MODE_CFG_ACT) When 1, this bit enables the return to low-power inside the VBP period when timing allows. Mask */
#define DSI_VID_MODE_CFG_ACT_LP_VBP_EN(value) (DSI_VID_MODE_CFG_ACT_LP_VBP_EN_Msk & ((value) << DSI_VID_MODE_CFG_ACT_LP_VBP_EN_Pos))
#define DSI_VID_MODE_CFG_ACT_LP_VFP_EN_Pos    _U_(4)                                               /**< (DSI_VID_MODE_CFG_ACT) When 1, this bit enables the return to low-power inside the VFP period when timing allows. Position */
#define DSI_VID_MODE_CFG_ACT_LP_VFP_EN_Msk    (_U_(0x1) << DSI_VID_MODE_CFG_ACT_LP_VFP_EN_Pos)     /**< (DSI_VID_MODE_CFG_ACT) When 1, this bit enables the return to low-power inside the VFP period when timing allows. Mask */
#define DSI_VID_MODE_CFG_ACT_LP_VFP_EN(value) (DSI_VID_MODE_CFG_ACT_LP_VFP_EN_Msk & ((value) << DSI_VID_MODE_CFG_ACT_LP_VFP_EN_Pos))
#define DSI_VID_MODE_CFG_ACT_LP_VACT_EN_Pos   _U_(5)                                               /**< (DSI_VID_MODE_CFG_ACT) When 1, this bit enables the return to low-power inside the VACT period when timing allows. Position */
#define DSI_VID_MODE_CFG_ACT_LP_VACT_EN_Msk   (_U_(0x1) << DSI_VID_MODE_CFG_ACT_LP_VACT_EN_Pos)    /**< (DSI_VID_MODE_CFG_ACT) When 1, this bit enables the return to low-power inside the VACT period when timing allows. Mask */
#define DSI_VID_MODE_CFG_ACT_LP_VACT_EN(value) (DSI_VID_MODE_CFG_ACT_LP_VACT_EN_Msk & ((value) << DSI_VID_MODE_CFG_ACT_LP_VACT_EN_Pos))
#define DSI_VID_MODE_CFG_ACT_LP_HBP_EN_Pos    _U_(6)                                               /**< (DSI_VID_MODE_CFG_ACT) When 1, this bit enables the return to low-power inside the HBP period when timing allows. Position */
#define DSI_VID_MODE_CFG_ACT_LP_HBP_EN_Msk    (_U_(0x1) << DSI_VID_MODE_CFG_ACT_LP_HBP_EN_Pos)     /**< (DSI_VID_MODE_CFG_ACT) When 1, this bit enables the return to low-power inside the HBP period when timing allows. Mask */
#define DSI_VID_MODE_CFG_ACT_LP_HBP_EN(value) (DSI_VID_MODE_CFG_ACT_LP_HBP_EN_Msk & ((value) << DSI_VID_MODE_CFG_ACT_LP_HBP_EN_Pos))
#define DSI_VID_MODE_CFG_ACT_LP_HFP_EN_Pos    _U_(7)                                               /**< (DSI_VID_MODE_CFG_ACT) When 1, this bit enables the return to low-power inside the HFP period when timing allows. Position */
#define DSI_VID_MODE_CFG_ACT_LP_HFP_EN_Msk    (_U_(0x1) << DSI_VID_MODE_CFG_ACT_LP_HFP_EN_Pos)     /**< (DSI_VID_MODE_CFG_ACT) When 1, this bit enables the return to low-power inside the HFP period when timing allows. Mask */
#define DSI_VID_MODE_CFG_ACT_LP_HFP_EN(value) (DSI_VID_MODE_CFG_ACT_LP_HFP_EN_Msk & ((value) << DSI_VID_MODE_CFG_ACT_LP_HFP_EN_Pos))
#define DSI_VID_MODE_CFG_ACT_FRAME_BTA_ACK_EN_Pos _U_(8)                                               /**< (DSI_VID_MODE_CFG_ACT) When 1, this bit enables the request for an acknowledge response at the end of a frame. Position */
#define DSI_VID_MODE_CFG_ACT_FRAME_BTA_ACK_EN_Msk (_U_(0x1) << DSI_VID_MODE_CFG_ACT_FRAME_BTA_ACK_EN_Pos) /**< (DSI_VID_MODE_CFG_ACT) When 1, this bit enables the request for an acknowledge response at the end of a frame. Mask */
#define DSI_VID_MODE_CFG_ACT_FRAME_BTA_ACK_EN(value) (DSI_VID_MODE_CFG_ACT_FRAME_BTA_ACK_EN_Msk & ((value) << DSI_VID_MODE_CFG_ACT_FRAME_BTA_ACK_EN_Pos))
#define DSI_VID_MODE_CFG_ACT_LP_CMD_EN_Pos    _U_(9)                                               /**< (DSI_VID_MODE_CFG_ACT) When 1, this bit enables the command transmission only in low-power mode. Position */
#define DSI_VID_MODE_CFG_ACT_LP_CMD_EN_Msk    (_U_(0x1) << DSI_VID_MODE_CFG_ACT_LP_CMD_EN_Pos)     /**< (DSI_VID_MODE_CFG_ACT) When 1, this bit enables the command transmission only in low-power mode. Mask */
#define DSI_VID_MODE_CFG_ACT_LP_CMD_EN(value) (DSI_VID_MODE_CFG_ACT_LP_CMD_EN_Msk & ((value) << DSI_VID_MODE_CFG_ACT_LP_CMD_EN_Pos))
#define DSI_VID_MODE_CFG_ACT_Msk              _U_(0x000003FF)                                      /**< (DSI_VID_MODE_CFG_ACT) Register Mask  */


/* -------- DSI_VID_PKT_SIZE_ACT : (DSI Offset: 0x13C) ( R/ 32) This register holds the value that controller is using for VID_PKT_SIZE. -------- */
#define DSI_VID_PKT_SIZE_ACT_VID_PKT_SIZE_Pos _U_(0)                                               /**< (DSI_VID_PKT_SIZE_ACT) This field specifies the number of pixels in a single video packet. For 18-bit not loosely packed this number must be a multiple of 4 and YCbCr Data Types, it must be a multiple of 2, as described in DSI specification. Position */
#define DSI_VID_PKT_SIZE_ACT_VID_PKT_SIZE_Msk (_U_(0x3FFF) << DSI_VID_PKT_SIZE_ACT_VID_PKT_SIZE_Pos) /**< (DSI_VID_PKT_SIZE_ACT) This field specifies the number of pixels in a single video packet. For 18-bit not loosely packed this number must be a multiple of 4 and YCbCr Data Types, it must be a multiple of 2, as described in DSI specification. Mask */
#define DSI_VID_PKT_SIZE_ACT_VID_PKT_SIZE(value) (DSI_VID_PKT_SIZE_ACT_VID_PKT_SIZE_Msk & ((value) << DSI_VID_PKT_SIZE_ACT_VID_PKT_SIZE_Pos))
#define DSI_VID_PKT_SIZE_ACT_Msk              _U_(0x00003FFF)                                      /**< (DSI_VID_PKT_SIZE_ACT) Register Mask  */


/* -------- DSI_VID_NUM_CHUNKS_ACT : (DSI Offset: 0x140) ( R/ 32) This register holds the value that controller is using for VID_NUM_CHUNKS. -------- */
#define DSI_VID_NUM_CHUNKS_ACT_VID_NUM_CHUNKS_Pos _U_(0)                                               /**< (DSI_VID_NUM_CHUNKS_ACT) This register specifies the number of chunks to be transmitted during a Line period (a chunk is pair made of a video packet and a null packet). If set to 0 or 1, video line is still transmitted in a single packet. If set to 1 that packet is part of a chunk, meaning that a null packet follows it (if vid_null_size>0). Otherwise, multiple chunks are used to transmit each video line. Position */
#define DSI_VID_NUM_CHUNKS_ACT_VID_NUM_CHUNKS_Msk (_U_(0x1FFF) << DSI_VID_NUM_CHUNKS_ACT_VID_NUM_CHUNKS_Pos) /**< (DSI_VID_NUM_CHUNKS_ACT) This register specifies the number of chunks to be transmitted during a Line period (a chunk is pair made of a video packet and a null packet). If set to 0 or 1, video line is still transmitted in a single packet. If set to 1 that packet is part of a chunk, meaning that a null packet follows it (if vid_null_size>0). Otherwise, multiple chunks are used to transmit each video line. Mask */
#define DSI_VID_NUM_CHUNKS_ACT_VID_NUM_CHUNKS(value) (DSI_VID_NUM_CHUNKS_ACT_VID_NUM_CHUNKS_Msk & ((value) << DSI_VID_NUM_CHUNKS_ACT_VID_NUM_CHUNKS_Pos))
#define DSI_VID_NUM_CHUNKS_ACT_Msk            _U_(0x00001FFF)                                      /**< (DSI_VID_NUM_CHUNKS_ACT) Register Mask  */


/* -------- DSI_VID_NULL_SIZE_ACT : (DSI Offset: 0x144) ( R/ 32) This register holds the value that controller is using for VID_NULL_SIZE. -------- */
#define DSI_VID_NULL_SIZE_ACT_VID_NULL_SIZE_Pos _U_(0)                                               /**< (DSI_VID_NULL_SIZE_ACT) This register specifies the number of bytes inside a null packet. Setting to 0 disables null packets. Position */
#define DSI_VID_NULL_SIZE_ACT_VID_NULL_SIZE_Msk (_U_(0x1FFF) << DSI_VID_NULL_SIZE_ACT_VID_NULL_SIZE_Pos) /**< (DSI_VID_NULL_SIZE_ACT) This register specifies the number of bytes inside a null packet. Setting to 0 disables null packets. Mask */
#define DSI_VID_NULL_SIZE_ACT_VID_NULL_SIZE(value) (DSI_VID_NULL_SIZE_ACT_VID_NULL_SIZE_Msk & ((value) << DSI_VID_NULL_SIZE_ACT_VID_NULL_SIZE_Pos))
#define DSI_VID_NULL_SIZE_ACT_Msk             _U_(0x00001FFF)                                      /**< (DSI_VID_NULL_SIZE_ACT) Register Mask  */


/* -------- DSI_VID_HSA_TIME_ACT : (DSI Offset: 0x148) ( R/ 32) This register holds the value that controller is using for VID_HSA_TIME. -------- */
#define DSI_VID_HSA_TIME_ACT_VID_HSA_TIME_Pos _U_(0)                                               /**< (DSI_VID_HSA_TIME_ACT) This field specifies the Horizontal Synchronism Active period in lane byte clock cycles. Position */
#define DSI_VID_HSA_TIME_ACT_VID_HSA_TIME_Msk (_U_(0xFFF) << DSI_VID_HSA_TIME_ACT_VID_HSA_TIME_Pos) /**< (DSI_VID_HSA_TIME_ACT) This field specifies the Horizontal Synchronism Active period in lane byte clock cycles. Mask */
#define DSI_VID_HSA_TIME_ACT_VID_HSA_TIME(value) (DSI_VID_HSA_TIME_ACT_VID_HSA_TIME_Msk & ((value) << DSI_VID_HSA_TIME_ACT_VID_HSA_TIME_Pos))
#define DSI_VID_HSA_TIME_ACT_Msk              _U_(0x00000FFF)                                      /**< (DSI_VID_HSA_TIME_ACT) Register Mask  */


/* -------- DSI_VID_HBP_TIME_ACT : (DSI Offset: 0x14C) ( R/ 32) This register holds the value that controller is using for VID_HBP_TIME. -------- */
#define DSI_VID_HBP_TIME_ACT_VID_HBP_TIME_Pos _U_(0)                                               /**< (DSI_VID_HBP_TIME_ACT) This field specifies the Horizontal Back Porch period in lane byte clock cycles. Position */
#define DSI_VID_HBP_TIME_ACT_VID_HBP_TIME_Msk (_U_(0xFFF) << DSI_VID_HBP_TIME_ACT_VID_HBP_TIME_Pos) /**< (DSI_VID_HBP_TIME_ACT) This field specifies the Horizontal Back Porch period in lane byte clock cycles. Mask */
#define DSI_VID_HBP_TIME_ACT_VID_HBP_TIME(value) (DSI_VID_HBP_TIME_ACT_VID_HBP_TIME_Msk & ((value) << DSI_VID_HBP_TIME_ACT_VID_HBP_TIME_Pos))
#define DSI_VID_HBP_TIME_ACT_Msk              _U_(0x00000FFF)                                      /**< (DSI_VID_HBP_TIME_ACT) Register Mask  */


/* -------- DSI_VID_HLINE_TIME_ACT : (DSI Offset: 0x150) ( R/ 32) This register holds the value that controller is using for VID_HLINE_TIME. -------- */
#define DSI_VID_HLINE_TIME_ACT_VID_HLINE_TIME_Pos _U_(0)                                               /**< (DSI_VID_HLINE_TIME_ACT) This field specifies the size of the total line time (HSA+HBP+HACT+HFP) counted in lane byte clock cycles. Position */
#define DSI_VID_HLINE_TIME_ACT_VID_HLINE_TIME_Msk (_U_(0x7FFF) << DSI_VID_HLINE_TIME_ACT_VID_HLINE_TIME_Pos) /**< (DSI_VID_HLINE_TIME_ACT) This field specifies the size of the total line time (HSA+HBP+HACT+HFP) counted in lane byte clock cycles. Mask */
#define DSI_VID_HLINE_TIME_ACT_VID_HLINE_TIME(value) (DSI_VID_HLINE_TIME_ACT_VID_HLINE_TIME_Msk & ((value) << DSI_VID_HLINE_TIME_ACT_VID_HLINE_TIME_Pos))
#define DSI_VID_HLINE_TIME_ACT_Msk            _U_(0x00007FFF)                                      /**< (DSI_VID_HLINE_TIME_ACT) Register Mask  */


/* -------- DSI_VID_VSA_LINES_ACT : (DSI Offset: 0x154) ( R/ 32) This register holds the value that controller is using for VID_VSA_LINES. -------- */
#define DSI_VID_VSA_LINES_ACT_VSA_LINES_Pos   _U_(0)                                               /**< (DSI_VID_VSA_LINES_ACT) This field specifies the Vertical Synchronism Active period measured in number of horizontal lines. Position */
#define DSI_VID_VSA_LINES_ACT_VSA_LINES_Msk   (_U_(0x3FF) << DSI_VID_VSA_LINES_ACT_VSA_LINES_Pos)  /**< (DSI_VID_VSA_LINES_ACT) This field specifies the Vertical Synchronism Active period measured in number of horizontal lines. Mask */
#define DSI_VID_VSA_LINES_ACT_VSA_LINES(value) (DSI_VID_VSA_LINES_ACT_VSA_LINES_Msk & ((value) << DSI_VID_VSA_LINES_ACT_VSA_LINES_Pos))
#define DSI_VID_VSA_LINES_ACT_Msk             _U_(0x000003FF)                                      /**< (DSI_VID_VSA_LINES_ACT) Register Mask  */


/* -------- DSI_VID_VBP_LINES_ACT : (DSI Offset: 0x158) ( R/ 32) This register holds the value that controller is using for VID_VBP_LINES. -------- */
#define DSI_VID_VBP_LINES_ACT_VBP_LINES_Pos   _U_(0)                                               /**< (DSI_VID_VBP_LINES_ACT) This field specifies the Vertical Back Porch period measured in number of horizontal lines. Position */
#define DSI_VID_VBP_LINES_ACT_VBP_LINES_Msk   (_U_(0x3FF) << DSI_VID_VBP_LINES_ACT_VBP_LINES_Pos)  /**< (DSI_VID_VBP_LINES_ACT) This field specifies the Vertical Back Porch period measured in number of horizontal lines. Mask */
#define DSI_VID_VBP_LINES_ACT_VBP_LINES(value) (DSI_VID_VBP_LINES_ACT_VBP_LINES_Msk & ((value) << DSI_VID_VBP_LINES_ACT_VBP_LINES_Pos))
#define DSI_VID_VBP_LINES_ACT_Msk             _U_(0x000003FF)                                      /**< (DSI_VID_VBP_LINES_ACT) Register Mask  */


/* -------- DSI_VID_VFP_LINES_ACT : (DSI Offset: 0x15C) ( R/ 32) This register holds the value that controller is using for VID_VFP_LINES. -------- */
#define DSI_VID_VFP_LINES_ACT_VFP_LINES_Pos   _U_(0)                                               /**< (DSI_VID_VFP_LINES_ACT) This field specifies the Vertical Front Porch period measured in number of horizontal lines. Position */
#define DSI_VID_VFP_LINES_ACT_VFP_LINES_Msk   (_U_(0x3FF) << DSI_VID_VFP_LINES_ACT_VFP_LINES_Pos)  /**< (DSI_VID_VFP_LINES_ACT) This field specifies the Vertical Front Porch period measured in number of horizontal lines. Mask */
#define DSI_VID_VFP_LINES_ACT_VFP_LINES(value) (DSI_VID_VFP_LINES_ACT_VFP_LINES_Msk & ((value) << DSI_VID_VFP_LINES_ACT_VFP_LINES_Pos))
#define DSI_VID_VFP_LINES_ACT_Msk             _U_(0x000003FF)                                      /**< (DSI_VID_VFP_LINES_ACT) Register Mask  */


/* -------- DSI_VID_VACTIVE_LINES_ACT : (DSI Offset: 0x160) ( R/ 32) This register holds the value that controller is using for VID_VACTIVE_LINES. -------- */
#define DSI_VID_VACTIVE_LINES_ACT_V_ACTIVE_LINES_Pos _U_(0)                                               /**< (DSI_VID_VACTIVE_LINES_ACT) This field specifies the Vertical Active period measured in number of horizontal lines. Position */
#define DSI_VID_VACTIVE_LINES_ACT_V_ACTIVE_LINES_Msk (_U_(0x3FFF) << DSI_VID_VACTIVE_LINES_ACT_V_ACTIVE_LINES_Pos) /**< (DSI_VID_VACTIVE_LINES_ACT) This field specifies the Vertical Active period measured in number of horizontal lines. Mask */
#define DSI_VID_VACTIVE_LINES_ACT_V_ACTIVE_LINES(value) (DSI_VID_VACTIVE_LINES_ACT_V_ACTIVE_LINES_Msk & ((value) << DSI_VID_VACTIVE_LINES_ACT_V_ACTIVE_LINES_Pos))
#define DSI_VID_VACTIVE_LINES_ACT_Msk         _U_(0x00003FFF)                                      /**< (DSI_VID_VACTIVE_LINES_ACT) Register Mask  */


/* -------- DSI_SDF_3D_ACT : (DSI Offset: 0x190) ( R/ 32) This register holds the value that controller is using for SDF_3D. -------- */
#define DSI_SDF_3D_ACT_MODE_3D_Pos            _U_(0)                                               /**< (DSI_SDF_3D_ACT) This field specifies 3D Mode On/Off and Display Orientation:  - 00: 3D Mode Off (2D Mode On).  - 01: 3D Mode On, Portrait Orientation.  - 10: 3D Mode On, Landscape Orientation.  - 11: Reserved. Position */
#define DSI_SDF_3D_ACT_MODE_3D_Msk            (_U_(0x3) << DSI_SDF_3D_ACT_MODE_3D_Pos)             /**< (DSI_SDF_3D_ACT) This field specifies 3D Mode On/Off and Display Orientation:  - 00: 3D Mode Off (2D Mode On).  - 01: 3D Mode On, Portrait Orientation.  - 10: 3D Mode On, Landscape Orientation.  - 11: Reserved. Mask */
#define DSI_SDF_3D_ACT_MODE_3D(value)         (DSI_SDF_3D_ACT_MODE_3D_Msk & ((value) << DSI_SDF_3D_ACT_MODE_3D_Pos))
#define DSI_SDF_3D_ACT_FORMAT_3D_Pos          _U_(2)                                               /**< (DSI_SDF_3D_ACT) This field specifies 3D Image Format:  - 00: Line (alternating lines of left and right data).  - 01: Frame (alternating frames of left and right data).  - 10: Pixel (alternating pixels of left and right data).  - 11: Reserved Position */
#define DSI_SDF_3D_ACT_FORMAT_3D_Msk          (_U_(0x3) << DSI_SDF_3D_ACT_FORMAT_3D_Pos)           /**< (DSI_SDF_3D_ACT) This field specifies 3D Image Format:  - 00: Line (alternating lines of left and right data).  - 01: Frame (alternating frames of left and right data).  - 10: Pixel (alternating pixels of left and right data).  - 11: Reserved Mask */
#define DSI_SDF_3D_ACT_FORMAT_3D(value)       (DSI_SDF_3D_ACT_FORMAT_3D_Msk & ((value) << DSI_SDF_3D_ACT_FORMAT_3D_Pos))
#define DSI_SDF_3D_ACT_SECOND_VSYNC_Pos       _U_(4)                                               /**< (DSI_SDF_3D_ACT) This field specifies whether there is a second VSYNC pulse between Left and Right Images, when 3D Image Format is Frame-based:  - 0: No sync pulses between left and right data.  - 1: Sync pulse (HSYNC, VSYNC, blanking) between left and right data. Position */
#define DSI_SDF_3D_ACT_SECOND_VSYNC_Msk       (_U_(0x1) << DSI_SDF_3D_ACT_SECOND_VSYNC_Pos)        /**< (DSI_SDF_3D_ACT) This field specifies whether there is a second VSYNC pulse between Left and Right Images, when 3D Image Format is Frame-based:  - 0: No sync pulses between left and right data.  - 1: Sync pulse (HSYNC, VSYNC, blanking) between left and right data. Mask */
#define DSI_SDF_3D_ACT_SECOND_VSYNC(value)    (DSI_SDF_3D_ACT_SECOND_VSYNC_Msk & ((value) << DSI_SDF_3D_ACT_SECOND_VSYNC_Pos))
#define DSI_SDF_3D_ACT_RIGHT_FIRST_Pos        _U_(5)                                               /**< (DSI_SDF_3D_ACT) This bit specifies the left/right order:  - 0: left eye is sent first, then right eye  - 1: right eye data is sent first, then left eye Position */
#define DSI_SDF_3D_ACT_RIGHT_FIRST_Msk        (_U_(0x1) << DSI_SDF_3D_ACT_RIGHT_FIRST_Pos)         /**< (DSI_SDF_3D_ACT) This bit specifies the left/right order:  - 0: left eye is sent first, then right eye  - 1: right eye data is sent first, then left eye Mask */
#define DSI_SDF_3D_ACT_RIGHT_FIRST(value)     (DSI_SDF_3D_ACT_RIGHT_FIRST_Msk & ((value) << DSI_SDF_3D_ACT_RIGHT_FIRST_Pos))
#define DSI_SDF_3D_ACT_SEND_3D_CFG_Pos        _U_(16)                                              /**< (DSI_SDF_3D_ACT) When set, causes the next VSS packet to include 3D control payload in every VSS packet. Position */
#define DSI_SDF_3D_ACT_SEND_3D_CFG_Msk        (_U_(0x1) << DSI_SDF_3D_ACT_SEND_3D_CFG_Pos)         /**< (DSI_SDF_3D_ACT) When set, causes the next VSS packet to include 3D control payload in every VSS packet. Mask */
#define DSI_SDF_3D_ACT_SEND_3D_CFG(value)     (DSI_SDF_3D_ACT_SEND_3D_CFG_Msk & ((value) << DSI_SDF_3D_ACT_SEND_3D_CFG_Pos))
#define DSI_SDF_3D_ACT_Msk                    _U_(0x0001003F)                                      /**< (DSI_SDF_3D_ACT) Register Mask  */


/** \brief DSI register offsets definitions */
#define DSI_VERSION_REG_OFST           (0x00)              /* (DSI_VERSION) This register contains the version of the DSI host controller. Offset */
#define DSI_PWR_UP_REG_OFST            (0x04)              /* (DSI_PWR_UP) This register controls the power up of the core. Offset */
#define DSI_CLKMGR_CFG_REG_OFST        (0x08)              /* (DSI_CLKMGR_CFG) This register configures the factor for internal dividers to divide lanebyteclk for timeout purposes. Offset */
#define DSI_DPI_VCID_REG_OFST          (0x0C)              /* (DSI_DPI_VCID) This register configures the Virtual Channel ID for DPI traffic. Offset */
#define DSI_DPI_COLOR_CODING_REG_OFST  (0x10)              /* (DSI_DPI_COLOR_CODING) This register configures DPI color coding. Offset */
#define DSI_DPI_CFG_POL_REG_OFST       (0x14)              /* (DSI_DPI_CFG_POL) This register configures the polarity of DPI signals. Offset */
#define DSI_DPI_LP_CMD_TIM_REG_OFST    (0x18)              /* (DSI_DPI_LP_CMD_TIM) This register configures the timing for low-power commands sent while in video mode. Offset */
#define DSI_PCKHDL_CFG_REG_OFST        (0x2C)              /* (DSI_PCKHDL_CFG) This register configures how EoTp, BTA, CRC and ECC are to be used, to meet peripheral's characteristics Offset */
#define DSI_GEN_VCID_REG_OFST          (0x30)              /* (DSI_GEN_VCID) This register configures the Virtual Channel ID of READ responses to store and return to Generic interface. Offset */
#define DSI_MODE_CFG_REG_OFST          (0x34)              /* (DSI_MODE_CFG) This register configures the mode of operation between Video or Command Mode. (Commands can still be sent while in video mode.) Offset */
#define DSI_VID_MODE_CFG_REG_OFST      (0x38)              /* (DSI_VID_MODE_CFG) This register configures several aspects of Video mode operation, the transmission mode, switching to Low-Power in the middle of a frame, enabling acknowledge and whether to send commands in Low-Power. Offset */
#define DSI_VID_PKT_SIZE_REG_OFST      (0x3C)              /* (DSI_VID_PKT_SIZE) This register configures the video packet size. Offset */
#define DSI_VID_NUM_CHUNKS_REG_OFST    (0x40)              /* (DSI_VID_NUM_CHUNKS) This register configures the number of chunks to use. The data in each chunk has the size provided by VID_PKT_SIZE. Offset */
#define DSI_VID_NULL_SIZE_REG_OFST     (0x44)              /* (DSI_VID_NULL_SIZE) This register configures the size of null packets. Offset */
#define DSI_VID_HSA_TIME_REG_OFST      (0x48)              /* (DSI_VID_HSA_TIME) This register configures the video HSA time. Offset */
#define DSI_VID_HBP_TIME_REG_OFST      (0x4C)              /* (DSI_VID_HBP_TIME) This register configures the video HBP time. Offset */
#define DSI_VID_HLINE_TIME_REG_OFST    (0x50)              /* (DSI_VID_HLINE_TIME) This register configures the overall time for each video line. Offset */
#define DSI_VID_VSA_LINES_REG_OFST     (0x54)              /* (DSI_VID_VSA_LINES) This register configures the VSA period. Offset */
#define DSI_VID_VBP_LINES_REG_OFST     (0x58)              /* (DSI_VID_VBP_LINES) This register configures the VBP period. Offset */
#define DSI_VID_VFP_LINES_REG_OFST     (0x5C)              /* (DSI_VID_VFP_LINES) This register configures the VFP period. Offset */
#define DSI_VID_VACTIVE_LINES_REG_OFST (0x60)              /* (DSI_VID_VACTIVE_LINES) This register configures the vertical resolution of video. Offset */
#define DSI_CMD_MODE_CFG_REG_OFST      (0x68)              /* (DSI_CMD_MODE_CFG) This register configures several aspect of command mode operation, tearing effect, acknowledge for each packet and the speed mode to transmit each Data Type related to commands. Offset */
#define DSI_GEN_HDR_REG_OFST           (0x6C)              /* (DSI_GEN_HDR) This register sets the header for new packets sent using the Generic interface. Offset */
#define DSI_GEN_PLD_DATA_REG_OFST      (0x70)              /* (DSI_GEN_PLD_DATA) This register sets the payload for packets sent using the Generic interface and, when read, returns the contents of READ responses from the peripheral. Offset */
#define DSI_CMD_PKT_STATUS_REG_OFST    (0x74)              /* (DSI_CMD_PKT_STATUS) This register configures contains information about the status of FIFOs related to DBI and Generic interface. Offset */
#define DSI_TO_CNT_CFG_REG_OFST        (0x78)              /* (DSI_TO_CNT_CFG) This register configures counters that trigger timeout errors. These are used to warn the system of a failure, through an interrupt, and restart the core in case of unexpected situations that cause deadlock conditions. Offset */
#define DSI_HS_RD_TO_CNT_REG_OFST      (0x7C)              /* (DSI_HS_RD_TO_CNT) This register configures the Peripheral Response timeout after High-Speed Read operations. Offset */
#define DSI_LP_RD_TO_CNT_REG_OFST      (0x80)              /* (DSI_LP_RD_TO_CNT) This register configures the Peripheral Response timeout after Low-Power Read operations. Offset */
#define DSI_HS_WR_TO_CNT_REG_OFST      (0x84)              /* (DSI_HS_WR_TO_CNT) This register configures the Peripheral Response timeout after High-Speed Write operations. Offset */
#define DSI_LP_WR_TO_CNT_REG_OFST      (0x88)              /* (DSI_LP_WR_TO_CNT) This register configures the Peripheral Response timeout after Low-Power Write operations. Offset */
#define DSI_BTA_TO_CNT_REG_OFST        (0x8C)              /* (DSI_BTA_TO_CNT) This register configures the Peripheral Response timeout after Bus Turnaround completion. Offset */
#define DSI_SDF_3D_REG_OFST            (0x90)              /* (DSI_SDF_3D) This register stores 3D control information for VSS packets in video mode. Offset */
#define DSI_LPCLK_CTRL_REG_OFST        (0x94)              /* (DSI_LPCLK_CTRL) This register configures the possibility for using non continuous clock in the clock lane. Offset */
#define DSI_PHY_TMR_LPCLK_CFG_REG_OFST (0x98)              /* (DSI_PHY_TMR_LPCLK_CFG) This register sets the time that DWC_mipi_dsi_host assumes in calculations for the clock lane to switch between High-Speed and Low-Power. Offset */
#define DSI_PHY_TMR_CFG_REG_OFST       (0x9C)              /* (DSI_PHY_TMR_CFG) This register sets the time that DWC_mipi_dsi_host assumes in calculations for the data lanes to switch between High-Speed and Low-Power. Offset */
#define DSI_PHY_RSTZ_REG_OFST          (0xA0)              /* (DSI_PHY_RSTZ) This register controls resets and the PLL of the D-PHY. Offset */
#define DSI_PHY_IF_CFG_REG_OFST        (0xA4)              /* (DSI_PHY_IF_CFG) This register configures the number of active lanes and the minimum time to remain in stop state. Offset */
#define DSI_PHY_ULPS_CTRL_REG_OFST     (0xA8)              /* (DSI_PHY_ULPS_CTRL) This register configures entering and leaving ULPS in the D-PHY. Offset */
#define DSI_PHY_TX_TRIGGERS_REG_OFST   (0xAC)              /* (DSI_PHY_TX_TRIGGERS) This register configures the pins that activate triggers in the D-PHY. Offset */
#define DSI_PHY_STATUS_REG_OFST        (0xB0)              /* (DSI_PHY_STATUS) This register contains information about the status of the D-PHY. Offset */
#define DSI_PHY_TST_CTRL0_REG_OFST     (0xB4)              /* (DSI_PHY_TST_CTRL0) This register controls clock and clear pins of the D-PHY vendor specific interface. Offset */
#define DSI_PHY_TST_CTRL1_REG_OFST     (0xB8)              /* (DSI_PHY_TST_CTRL1) This register controls data and enable pins of the D-PHY vendor specific interface. Offset */
#define DSI_INT_ST0_REG_OFST           (0xBC)              /* (DSI_INT_ST0) This register contains the status of interrupt sources from acknowledge reports and the D-PHY. Offset */
#define DSI_INT_ST1_REG_OFST           (0xC0)              /* (DSI_INT_ST1) This register contains the status of interrupt sources related to timeouts, ECC, CRC, packet size, EoTp, Generic and DBI interfaces. Offset */
#define DSI_INT_MSK0_REG_OFST          (0xC4)              /* (DSI_INT_MSK0) This register configures masks for the sources of interrupts that affect the INT_ST0 register. Write 1 to Un-mask each error report. Offset */
#define DSI_INT_MSK1_REG_OFST          (0xC8)              /* (DSI_INT_MSK1) This register configures masks for the sources of interrupts that affect the INT_ST1 register. Offset */
#define DSI_PHY_CAL_REG_OFST           (0xCC)              /* (DSI_PHY_CAL) This register controls the skew calibration of D-PHY. Offset */
#define DSI_INT_FORCE0_REG_OFST        (0xD8)              /* (DSI_INT_FORCE0) This register forces that affect the INT_ST0 register. Offset */
#define DSI_INT_FORCE1_REG_OFST        (0xDC)              /* (DSI_INT_FORCE1) This register forces interrupts that affect the INT_ST1 register. Offset */
#define DSI_DSC_PARAMETER_REG_OFST     (0xF0)              /* (DSI_DSC_PARAMETER) This register configures Display Stream Compression Offset */
#define DSI_PHY_TMR_RD_CFG_REG_OFST    (0xF4)              /* (DSI_PHY_TMR_RD_CFG) This register configures times related to PHY to perform some operations in lane byte clock cycles. Offset */
#define DSI_VID_SHADOW_CTRL_REG_OFST   (0x100)             /* (DSI_VID_SHADOW_CTRL) This register controls dpi shadow feature Offset */
#define DSI_DPI_VCID_ACT_REG_OFST      (0x10C)             /* (DSI_DPI_VCID_ACT) This register holds the value that controller is using for DPI_VCID. Offset */
#define DSI_DPI_COLOR_CODING_ACT_REG_OFST (0x110)             /* (DSI_DPI_COLOR_CODING_ACT) This register holds the value that controller is using for DPI_COLOR_CODING. Offset */
#define DSI_DPI_LP_CMD_TIM_ACT_REG_OFST (0x118)             /* (DSI_DPI_LP_CMD_TIM_ACT) This register holds the value that controller is using for DPI_LP_CMD_TIM. Offset */
#define DSI_VID_MODE_CFG_ACT_REG_OFST  (0x138)             /* (DSI_VID_MODE_CFG_ACT) This register holds the value that controller is using for VID_MODE_CFG. Offset */
#define DSI_VID_PKT_SIZE_ACT_REG_OFST  (0x13C)             /* (DSI_VID_PKT_SIZE_ACT) This register holds the value that controller is using for VID_PKT_SIZE. Offset */
#define DSI_VID_NUM_CHUNKS_ACT_REG_OFST (0x140)             /* (DSI_VID_NUM_CHUNKS_ACT) This register holds the value that controller is using for VID_NUM_CHUNKS. Offset */
#define DSI_VID_NULL_SIZE_ACT_REG_OFST (0x144)             /* (DSI_VID_NULL_SIZE_ACT) This register holds the value that controller is using for VID_NULL_SIZE. Offset */
#define DSI_VID_HSA_TIME_ACT_REG_OFST  (0x148)             /* (DSI_VID_HSA_TIME_ACT) This register holds the value that controller is using for VID_HSA_TIME. Offset */
#define DSI_VID_HBP_TIME_ACT_REG_OFST  (0x14C)             /* (DSI_VID_HBP_TIME_ACT) This register holds the value that controller is using for VID_HBP_TIME. Offset */
#define DSI_VID_HLINE_TIME_ACT_REG_OFST (0x150)             /* (DSI_VID_HLINE_TIME_ACT) This register holds the value that controller is using for VID_HLINE_TIME. Offset */
#define DSI_VID_VSA_LINES_ACT_REG_OFST (0x154)             /* (DSI_VID_VSA_LINES_ACT) This register holds the value that controller is using for VID_VSA_LINES. Offset */
#define DSI_VID_VBP_LINES_ACT_REG_OFST (0x158)             /* (DSI_VID_VBP_LINES_ACT) This register holds the value that controller is using for VID_VBP_LINES. Offset */
#define DSI_VID_VFP_LINES_ACT_REG_OFST (0x15C)             /* (DSI_VID_VFP_LINES_ACT) This register holds the value that controller is using for VID_VFP_LINES. Offset */
#define DSI_VID_VACTIVE_LINES_ACT_REG_OFST (0x160)             /* (DSI_VID_VACTIVE_LINES_ACT) This register holds the value that controller is using for VID_VACTIVE_LINES. Offset */
#define DSI_SDF_3D_ACT_REG_OFST        (0x190)             /* (DSI_SDF_3D_ACT) This register holds the value that controller is using for SDF_3D. Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief DSI register API structure */
typedef struct
{  /* MIPI DSI Host */
  __I   uint32_t                       DSI_VERSION;        /**< Offset: 0x00 (R/   32) This register contains the version of the DSI host controller. */
  __IO  uint32_t                       DSI_PWR_UP;         /**< Offset: 0x04 (R/W  32) This register controls the power up of the core. */
  __IO  uint32_t                       DSI_CLKMGR_CFG;     /**< Offset: 0x08 (R/W  32) This register configures the factor for internal dividers to divide lanebyteclk for timeout purposes. */
  __IO  uint32_t                       DSI_DPI_VCID;       /**< Offset: 0x0C (R/W  32) This register configures the Virtual Channel ID for DPI traffic. */
  __IO  uint32_t                       DSI_DPI_COLOR_CODING; /**< Offset: 0x10 (R/W  32) This register configures DPI color coding. */
  __IO  uint32_t                       DSI_DPI_CFG_POL;    /**< Offset: 0x14 (R/W  32) This register configures the polarity of DPI signals. */
  __IO  uint32_t                       DSI_DPI_LP_CMD_TIM; /**< Offset: 0x18 (R/W  32) This register configures the timing for low-power commands sent while in video mode. */
  __I   uint8_t                        Reserved1[0x10];
  __IO  uint32_t                       DSI_PCKHDL_CFG;     /**< Offset: 0x2C (R/W  32) This register configures how EoTp, BTA, CRC and ECC are to be used, to meet peripheral's characteristics */
  __IO  uint32_t                       DSI_GEN_VCID;       /**< Offset: 0x30 (R/W  32) This register configures the Virtual Channel ID of READ responses to store and return to Generic interface. */
  __IO  uint32_t                       DSI_MODE_CFG;       /**< Offset: 0x34 (R/W  32) This register configures the mode of operation between Video or Command Mode. (Commands can still be sent while in video mode.) */
  __IO  uint32_t                       DSI_VID_MODE_CFG;   /**< Offset: 0x38 (R/W  32) This register configures several aspects of Video mode operation, the transmission mode, switching to Low-Power in the middle of a frame, enabling acknowledge and whether to send commands in Low-Power. */
  __IO  uint32_t                       DSI_VID_PKT_SIZE;   /**< Offset: 0x3C (R/W  32) This register configures the video packet size. */
  __IO  uint32_t                       DSI_VID_NUM_CHUNKS; /**< Offset: 0x40 (R/W  32) This register configures the number of chunks to use. The data in each chunk has the size provided by VID_PKT_SIZE. */
  __IO  uint32_t                       DSI_VID_NULL_SIZE;  /**< Offset: 0x44 (R/W  32) This register configures the size of null packets. */
  __IO  uint32_t                       DSI_VID_HSA_TIME;   /**< Offset: 0x48 (R/W  32) This register configures the video HSA time. */
  __IO  uint32_t                       DSI_VID_HBP_TIME;   /**< Offset: 0x4C (R/W  32) This register configures the video HBP time. */
  __IO  uint32_t                       DSI_VID_HLINE_TIME; /**< Offset: 0x50 (R/W  32) This register configures the overall time for each video line. */
  __IO  uint32_t                       DSI_VID_VSA_LINES;  /**< Offset: 0x54 (R/W  32) This register configures the VSA period. */
  __IO  uint32_t                       DSI_VID_VBP_LINES;  /**< Offset: 0x58 (R/W  32) This register configures the VBP period. */
  __IO  uint32_t                       DSI_VID_VFP_LINES;  /**< Offset: 0x5C (R/W  32) This register configures the VFP period. */
  __IO  uint32_t                       DSI_VID_VACTIVE_LINES; /**< Offset: 0x60 (R/W  32) This register configures the vertical resolution of video. */
  __I   uint8_t                        Reserved2[0x04];
  __IO  uint32_t                       DSI_CMD_MODE_CFG;   /**< Offset: 0x68 (R/W  32) This register configures several aspect of command mode operation, tearing effect, acknowledge for each packet and the speed mode to transmit each Data Type related to commands. */
  __IO  uint32_t                       DSI_GEN_HDR;        /**< Offset: 0x6C (R/W  32) This register sets the header for new packets sent using the Generic interface. */
  __IO  uint32_t                       DSI_GEN_PLD_DATA;   /**< Offset: 0x70 (R/W  32) This register sets the payload for packets sent using the Generic interface and, when read, returns the contents of READ responses from the peripheral. */
  __I   uint32_t                       DSI_CMD_PKT_STATUS; /**< Offset: 0x74 (R/   32) This register configures contains information about the status of FIFOs related to DBI and Generic interface. */
  __IO  uint32_t                       DSI_TO_CNT_CFG;     /**< Offset: 0x78 (R/W  32) This register configures counters that trigger timeout errors. These are used to warn the system of a failure, through an interrupt, and restart the core in case of unexpected situations that cause deadlock conditions. */
  __IO  uint32_t                       DSI_HS_RD_TO_CNT;   /**< Offset: 0x7C (R/W  32) This register configures the Peripheral Response timeout after High-Speed Read operations. */
  __IO  uint32_t                       DSI_LP_RD_TO_CNT;   /**< Offset: 0x80 (R/W  32) This register configures the Peripheral Response timeout after Low-Power Read operations. */
  __IO  uint32_t                       DSI_HS_WR_TO_CNT;   /**< Offset: 0x84 (R/W  32) This register configures the Peripheral Response timeout after High-Speed Write operations. */
  __IO  uint32_t                       DSI_LP_WR_TO_CNT;   /**< Offset: 0x88 (R/W  32) This register configures the Peripheral Response timeout after Low-Power Write operations. */
  __IO  uint32_t                       DSI_BTA_TO_CNT;     /**< Offset: 0x8C (R/W  32) This register configures the Peripheral Response timeout after Bus Turnaround completion. */
  __IO  uint32_t                       DSI_SDF_3D;         /**< Offset: 0x90 (R/W  32) This register stores 3D control information for VSS packets in video mode. */
  __IO  uint32_t                       DSI_LPCLK_CTRL;     /**< Offset: 0x94 (R/W  32) This register configures the possibility for using non continuous clock in the clock lane. */
  __IO  uint32_t                       DSI_PHY_TMR_LPCLK_CFG; /**< Offset: 0x98 (R/W  32) This register sets the time that DWC_mipi_dsi_host assumes in calculations for the clock lane to switch between High-Speed and Low-Power. */
  __IO  uint32_t                       DSI_PHY_TMR_CFG;    /**< Offset: 0x9C (R/W  32) This register sets the time that DWC_mipi_dsi_host assumes in calculations for the data lanes to switch between High-Speed and Low-Power. */
  __IO  uint32_t                       DSI_PHY_RSTZ;       /**< Offset: 0xA0 (R/W  32) This register controls resets and the PLL of the D-PHY. */
  __IO  uint32_t                       DSI_PHY_IF_CFG;     /**< Offset: 0xA4 (R/W  32) This register configures the number of active lanes and the minimum time to remain in stop state. */
  __IO  uint32_t                       DSI_PHY_ULPS_CTRL;  /**< Offset: 0xA8 (R/W  32) This register configures entering and leaving ULPS in the D-PHY. */
  __IO  uint32_t                       DSI_PHY_TX_TRIGGERS; /**< Offset: 0xAC (R/W  32) This register configures the pins that activate triggers in the D-PHY. */
  __I   uint32_t                       DSI_PHY_STATUS;     /**< Offset: 0xB0 (R/   32) This register contains information about the status of the D-PHY. */
  __IO  uint32_t                       DSI_PHY_TST_CTRL0;  /**< Offset: 0xB4 (R/W  32) This register controls clock and clear pins of the D-PHY vendor specific interface. */
  __IO  uint32_t                       DSI_PHY_TST_CTRL1;  /**< Offset: 0xB8 (R/W  32) This register controls data and enable pins of the D-PHY vendor specific interface. */
  __I   uint32_t                       DSI_INT_ST0;        /**< Offset: 0xBC (R/   32) This register contains the status of interrupt sources from acknowledge reports and the D-PHY. */
  __I   uint32_t                       DSI_INT_ST1;        /**< Offset: 0xC0 (R/   32) This register contains the status of interrupt sources related to timeouts, ECC, CRC, packet size, EoTp, Generic and DBI interfaces. */
  __IO  uint32_t                       DSI_INT_MSK0;       /**< Offset: 0xC4 (R/W  32) This register configures masks for the sources of interrupts that affect the INT_ST0 register. Write 1 to Un-mask each error report. */
  __IO  uint32_t                       DSI_INT_MSK1;       /**< Offset: 0xC8 (R/W  32) This register configures masks for the sources of interrupts that affect the INT_ST1 register. */
  __IO  uint32_t                       DSI_PHY_CAL;        /**< Offset: 0xCC (R/W  32) This register controls the skew calibration of D-PHY. */
  __I   uint8_t                        Reserved3[0x08];
  __O   uint32_t                       DSI_INT_FORCE0;     /**< Offset: 0xD8 ( /W  32) This register forces that affect the INT_ST0 register. */
  __O   uint32_t                       DSI_INT_FORCE1;     /**< Offset: 0xDC ( /W  32) This register forces interrupts that affect the INT_ST1 register. */
  __I   uint8_t                        Reserved4[0x10];
  __IO  uint32_t                       DSI_DSC_PARAMETER;  /**< Offset: 0xF0 (R/W  32) This register configures Display Stream Compression */
  __IO  uint32_t                       DSI_PHY_TMR_RD_CFG; /**< Offset: 0xF4 (R/W  32) This register configures times related to PHY to perform some operations in lane byte clock cycles. */
  __I   uint8_t                        Reserved5[0x08];
  __IO  uint32_t                       DSI_VID_SHADOW_CTRL; /**< Offset: 0x100 (R/W  32) This register controls dpi shadow feature */
  __I   uint8_t                        Reserved6[0x08];
  __I   uint32_t                       DSI_DPI_VCID_ACT;   /**< Offset: 0x10C (R/   32) This register holds the value that controller is using for DPI_VCID. */
  __I   uint32_t                       DSI_DPI_COLOR_CODING_ACT; /**< Offset: 0x110 (R/   32) This register holds the value that controller is using for DPI_COLOR_CODING. */
  __I   uint8_t                        Reserved7[0x04];
  __I   uint32_t                       DSI_DPI_LP_CMD_TIM_ACT; /**< Offset: 0x118 (R/   32) This register holds the value that controller is using for DPI_LP_CMD_TIM. */
  __I   uint8_t                        Reserved8[0x1C];
  __I   uint32_t                       DSI_VID_MODE_CFG_ACT; /**< Offset: 0x138 (R/   32) This register holds the value that controller is using for VID_MODE_CFG. */
  __I   uint32_t                       DSI_VID_PKT_SIZE_ACT; /**< Offset: 0x13C (R/   32) This register holds the value that controller is using for VID_PKT_SIZE. */
  __I   uint32_t                       DSI_VID_NUM_CHUNKS_ACT; /**< Offset: 0x140 (R/   32) This register holds the value that controller is using for VID_NUM_CHUNKS. */
  __I   uint32_t                       DSI_VID_NULL_SIZE_ACT; /**< Offset: 0x144 (R/   32) This register holds the value that controller is using for VID_NULL_SIZE. */
  __I   uint32_t                       DSI_VID_HSA_TIME_ACT; /**< Offset: 0x148 (R/   32) This register holds the value that controller is using for VID_HSA_TIME. */
  __I   uint32_t                       DSI_VID_HBP_TIME_ACT; /**< Offset: 0x14C (R/   32) This register holds the value that controller is using for VID_HBP_TIME. */
  __I   uint32_t                       DSI_VID_HLINE_TIME_ACT; /**< Offset: 0x150 (R/   32) This register holds the value that controller is using for VID_HLINE_TIME. */
  __I   uint32_t                       DSI_VID_VSA_LINES_ACT; /**< Offset: 0x154 (R/   32) This register holds the value that controller is using for VID_VSA_LINES. */
  __I   uint32_t                       DSI_VID_VBP_LINES_ACT; /**< Offset: 0x158 (R/   32) This register holds the value that controller is using for VID_VBP_LINES. */
  __I   uint32_t                       DSI_VID_VFP_LINES_ACT; /**< Offset: 0x15C (R/   32) This register holds the value that controller is using for VID_VFP_LINES. */
  __I   uint32_t                       DSI_VID_VACTIVE_LINES_ACT; /**< Offset: 0x160 (R/   32) This register holds the value that controller is using for VID_VACTIVE_LINES. */
  __I   uint8_t                        Reserved9[0x2C];
  __I   uint32_t                       DSI_SDF_3D_ACT;     /**< Offset: 0x190 (R/   32) This register holds the value that controller is using for SDF_3D. */
} dsi_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAM9X7_DSI_COMPONENT_H_ */
