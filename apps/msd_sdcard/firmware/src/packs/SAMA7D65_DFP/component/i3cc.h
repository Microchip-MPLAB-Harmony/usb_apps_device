/*
 * Component description for I3CC
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
#ifndef _SAMA7D6_I3CC_COMPONENT_H_
#define _SAMA7D6_I3CC_COMPONENT_H_

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR I3CC                      */
/* ************************************************************************** */

/* -------- I3CC_HCI_VERSION : (I3CC Offset: 0x00) ( R/ 32) HCI Version Register -------- */
#define I3CC_HCI_VERSION_RESETVALUE           _UINT32_(0x100)                                      /*  (I3CC_HCI_VERSION) HCI Version Register  Reset Value */

#define I3CC_HCI_VERSION_VERSION_Pos          _UINT32_(0)                                          /* (I3CC_HCI_VERSION) HCI Version Position */
#define I3CC_HCI_VERSION_VERSION_Msk          (_UINT32_(0xFFFFFFFF) << I3CC_HCI_VERSION_VERSION_Pos) /* (I3CC_HCI_VERSION) HCI Version Mask */
#define I3CC_HCI_VERSION_VERSION(value)       (I3CC_HCI_VERSION_VERSION_Msk & (_UINT32_(value) << I3CC_HCI_VERSION_VERSION_Pos)) /* Assignment of value for VERSION in the I3CC_HCI_VERSION register */
#define I3CC_HCI_VERSION_Msk                  _UINT32_(0xFFFFFFFF)                                 /* (I3CC_HCI_VERSION) Register Mask  */


/* -------- I3CC_HC_CONTROL : (I3CC Offset: 0x04) (R/W 32) Controller Control Register -------- */
#define I3CC_HC_CONTROL_RESETVALUE            _UINT32_(0x00)                                       /*  (I3CC_HC_CONTROL) Controller Control Register  Reset Value */

#define I3CC_HC_CONTROL_IBA_INCLUDE_Pos       _UINT32_(0)                                          /* (I3CC_HC_CONTROL) Include I3C Broadcast Address Position */
#define I3CC_HC_CONTROL_IBA_INCLUDE_Msk       (_UINT32_(0x1) << I3CC_HC_CONTROL_IBA_INCLUDE_Pos)   /* (I3CC_HC_CONTROL) Include I3C Broadcast Address Mask */
#define I3CC_HC_CONTROL_IBA_INCLUDE(value)    (I3CC_HC_CONTROL_IBA_INCLUDE_Msk & (_UINT32_(value) << I3CC_HC_CONTROL_IBA_INCLUDE_Pos)) /* Assignment of value for IBA_INCLUDE in the I3CC_HC_CONTROL register */
#define   I3CC_HC_CONTROL_IBA_INCLUDE_0_Val   _UINT32_(0x0)                                        /* (I3CC_HC_CONTROL) Do not include I3C Broadcast Address for private transfers.  */
#define   I3CC_HC_CONTROL_IBA_INCLUDE_1_Val   _UINT32_(0x1)                                        /* (I3CC_HC_CONTROL) Include I3C Broadcast Address for private transfers.  */
#define I3CC_HC_CONTROL_IBA_INCLUDE_0         (I3CC_HC_CONTROL_IBA_INCLUDE_0_Val << I3CC_HC_CONTROL_IBA_INCLUDE_Pos) /* (I3CC_HC_CONTROL) Do not include I3C Broadcast Address for private transfers. Position */
#define I3CC_HC_CONTROL_IBA_INCLUDE_1         (I3CC_HC_CONTROL_IBA_INCLUDE_1_Val << I3CC_HC_CONTROL_IBA_INCLUDE_Pos) /* (I3CC_HC_CONTROL) Include I3C Broadcast Address for private transfers. Position */
#define I3CC_HC_CONTROL_I2C_DEV_PRESENT_Pos   _UINT32_(7)                                          /* (I3CC_HC_CONTROL) I2C Device Present on Bus Position */
#define I3CC_HC_CONTROL_I2C_DEV_PRESENT_Msk   (_UINT32_(0x1) << I3CC_HC_CONTROL_I2C_DEV_PRESENT_Pos) /* (I3CC_HC_CONTROL) I2C Device Present on Bus Mask */
#define I3CC_HC_CONTROL_I2C_DEV_PRESENT(value) (I3CC_HC_CONTROL_I2C_DEV_PRESENT_Msk & (_UINT32_(value) << I3CC_HC_CONTROL_I2C_DEV_PRESENT_Pos)) /* Assignment of value for I2C_DEV_PRESENT in the I3CC_HC_CONTROL register */
#define   I3CC_HC_CONTROL_I2C_DEV_PRESENT_0_Val _UINT32_(0x0)                                        /* (I3CC_HC_CONTROL) Legacy I2C devices must not be present on the I3C bus.  */
#define   I3CC_HC_CONTROL_I2C_DEV_PRESENT_1_Val _UINT32_(0x1)                                        /* (I3CC_HC_CONTROL) Legacy I2C devices can be present on the I3C bus.  */
#define I3CC_HC_CONTROL_I2C_DEV_PRESENT_0     (I3CC_HC_CONTROL_I2C_DEV_PRESENT_0_Val << I3CC_HC_CONTROL_I2C_DEV_PRESENT_Pos) /* (I3CC_HC_CONTROL) Legacy I2C devices must not be present on the I3C bus. Position */
#define I3CC_HC_CONTROL_I2C_DEV_PRESENT_1     (I3CC_HC_CONTROL_I2C_DEV_PRESENT_1_Val << I3CC_HC_CONTROL_I2C_DEV_PRESENT_Pos) /* (I3CC_HC_CONTROL) Legacy I2C devices can be present on the I3C bus. Position */
#define I3CC_HC_CONTROL_HOT_JOIN_CTRL_Pos     _UINT32_(8)                                          /* (I3CC_HC_CONTROL) Hot-Join ACK/NACK Control Position */
#define I3CC_HC_CONTROL_HOT_JOIN_CTRL_Msk     (_UINT32_(0x1) << I3CC_HC_CONTROL_HOT_JOIN_CTRL_Pos) /* (I3CC_HC_CONTROL) Hot-Join ACK/NACK Control Mask */
#define I3CC_HC_CONTROL_HOT_JOIN_CTRL(value)  (I3CC_HC_CONTROL_HOT_JOIN_CTRL_Msk & (_UINT32_(value) << I3CC_HC_CONTROL_HOT_JOIN_CTRL_Pos)) /* Assignment of value for HOT_JOIN_CTRL in the I3CC_HC_CONTROL register */
#define   I3CC_HC_CONTROL_HOT_JOIN_CTRL_1_Val _UINT32_(0x1)                                        /* (I3CC_HC_CONTROL) NACK and send broadcast CCC to disable Hot-Join.  */
#define I3CC_HC_CONTROL_HOT_JOIN_CTRL_1       (I3CC_HC_CONTROL_HOT_JOIN_CTRL_1_Val << I3CC_HC_CONTROL_HOT_JOIN_CTRL_Pos) /* (I3CC_HC_CONTROL) NACK and send broadcast CCC to disable Hot-Join. Position */
#define I3CC_HC_CONTROL_ABORT_Pos             _UINT32_(29)                                         /* (I3CC_HC_CONTROL) I3CC Abort Position */
#define I3CC_HC_CONTROL_ABORT_Msk             (_UINT32_(0x1) << I3CC_HC_CONTROL_ABORT_Pos)         /* (I3CC_HC_CONTROL) I3CC Abort Mask */
#define I3CC_HC_CONTROL_ABORT(value)          (I3CC_HC_CONTROL_ABORT_Msk & (_UINT32_(value) << I3CC_HC_CONTROL_ABORT_Pos)) /* Assignment of value for ABORT in the I3CC_HC_CONTROL register */
#define   I3CC_HC_CONTROL_ABORT_0_Val         _UINT32_(0x0)                                        /* (I3CC_HC_CONTROL) The driver clears the ABORT bit to allow operation on the bus.  */
#define   I3CC_HC_CONTROL_ABORT_1_Val         _UINT32_(0x1)                                        /* (I3CC_HC_CONTROL) The I3CC aborts a transfer by issuing the STOP condition on the I3C Bus after the complete data byte is transferred or received.  */
#define I3CC_HC_CONTROL_ABORT_0               (I3CC_HC_CONTROL_ABORT_0_Val << I3CC_HC_CONTROL_ABORT_Pos) /* (I3CC_HC_CONTROL) The driver clears the ABORT bit to allow operation on the bus. Position */
#define I3CC_HC_CONTROL_ABORT_1               (I3CC_HC_CONTROL_ABORT_1_Val << I3CC_HC_CONTROL_ABORT_Pos) /* (I3CC_HC_CONTROL) The I3CC aborts a transfer by issuing the STOP condition on the I3C Bus after the complete data byte is transferred or received. Position */
#define I3CC_HC_CONTROL_RESUME_Pos            _UINT32_(30)                                         /* (I3CC_HC_CONTROL) I3CC Resume Position */
#define I3CC_HC_CONTROL_RESUME_Msk            (_UINT32_(0x1) << I3CC_HC_CONTROL_RESUME_Pos)        /* (I3CC_HC_CONTROL) I3CC Resume Mask */
#define I3CC_HC_CONTROL_RESUME(value)         (I3CC_HC_CONTROL_RESUME_Msk & (_UINT32_(value) << I3CC_HC_CONTROL_RESUME_Pos)) /* Assignment of value for RESUME in the I3CC_HC_CONTROL register */
#define   I3CC_HC_CONTROL_RESUME_0_Val        _UINT32_(0x0)                                        /* (I3CC_HC_CONTROL) (RUNNING) The I3CC running.  */
#define   I3CC_HC_CONTROL_RESUME_1_Val        _UINT32_(0x1)                                        /* (I3CC_HC_CONTROL) (SUSPENDED) The I3CC is suspended.  */
#define I3CC_HC_CONTROL_RESUME_0              (I3CC_HC_CONTROL_RESUME_0_Val << I3CC_HC_CONTROL_RESUME_Pos) /* (I3CC_HC_CONTROL) (RUNNING) The I3CC running. Position */
#define I3CC_HC_CONTROL_RESUME_1              (I3CC_HC_CONTROL_RESUME_1_Val << I3CC_HC_CONTROL_RESUME_Pos) /* (I3CC_HC_CONTROL) (SUSPENDED) The I3CC is suspended. Position */
#define I3CC_HC_CONTROL_BUS_ENABLE_Pos        _UINT32_(31)                                         /* (I3CC_HC_CONTROL) I3CC Bus Enable Position */
#define I3CC_HC_CONTROL_BUS_ENABLE_Msk        (_UINT32_(0x1) << I3CC_HC_CONTROL_BUS_ENABLE_Pos)    /* (I3CC_HC_CONTROL) I3CC Bus Enable Mask */
#define I3CC_HC_CONTROL_BUS_ENABLE(value)     (I3CC_HC_CONTROL_BUS_ENABLE_Msk & (_UINT32_(value) << I3CC_HC_CONTROL_BUS_ENABLE_Pos)) /* Assignment of value for BUS_ENABLE in the I3CC_HC_CONTROL register */
#define   I3CC_HC_CONTROL_BUS_ENABLE_0_Val    _UINT32_(0x0)                                        /* (I3CC_HC_CONTROL) Disables I3CC bus operations when writing a '0' or indicates the I3CC operations are completed when reading '0'.  */
#define   I3CC_HC_CONTROL_BUS_ENABLE_1_Val    _UINT32_(0x1)                                        /* (I3CC_HC_CONTROL) Enables I3CC bus operations.  */
#define I3CC_HC_CONTROL_BUS_ENABLE_0          (I3CC_HC_CONTROL_BUS_ENABLE_0_Val << I3CC_HC_CONTROL_BUS_ENABLE_Pos) /* (I3CC_HC_CONTROL) Disables I3CC bus operations when writing a '0' or indicates the I3CC operations are completed when reading '0'. Position */
#define I3CC_HC_CONTROL_BUS_ENABLE_1          (I3CC_HC_CONTROL_BUS_ENABLE_1_Val << I3CC_HC_CONTROL_BUS_ENABLE_Pos) /* (I3CC_HC_CONTROL) Enables I3CC bus operations. Position */
#define I3CC_HC_CONTROL_Msk                   _UINT32_(0xE0000181)                                 /* (I3CC_HC_CONTROL) Register Mask  */


/* -------- I3CC_CONTROLLER_DEVICE_ADDR : (I3CC Offset: 0x08) (R/W 32) Controller Device Address Register -------- */
#define I3CC_CONTROLLER_DEVICE_ADDR_RESETVALUE _UINT32_(0x80000000)                                 /*  (I3CC_CONTROLLER_DEVICE_ADDR) Controller Device Address Register  Reset Value */

#define I3CC_CONTROLLER_DEVICE_ADDR_DYNAMIC_ADDR_Pos _UINT32_(16)                                         /* (I3CC_CONTROLLER_DEVICE_ADDR) Device Dynamic Address Position */
#define I3CC_CONTROLLER_DEVICE_ADDR_DYNAMIC_ADDR_Msk (_UINT32_(0x7F) << I3CC_CONTROLLER_DEVICE_ADDR_DYNAMIC_ADDR_Pos) /* (I3CC_CONTROLLER_DEVICE_ADDR) Device Dynamic Address Mask */
#define I3CC_CONTROLLER_DEVICE_ADDR_DYNAMIC_ADDR(value) (I3CC_CONTROLLER_DEVICE_ADDR_DYNAMIC_ADDR_Msk & (_UINT32_(value) << I3CC_CONTROLLER_DEVICE_ADDR_DYNAMIC_ADDR_Pos)) /* Assignment of value for DYNAMIC_ADDR in the I3CC_CONTROLLER_DEVICE_ADDR register */
#define I3CC_CONTROLLER_DEVICE_ADDR_DYNAMIC_ADDR_VALID_Pos _UINT32_(31)                                         /* (I3CC_CONTROLLER_DEVICE_ADDR) Device Dynamic Address Valid Position */
#define I3CC_CONTROLLER_DEVICE_ADDR_DYNAMIC_ADDR_VALID_Msk (_UINT32_(0x1) << I3CC_CONTROLLER_DEVICE_ADDR_DYNAMIC_ADDR_VALID_Pos) /* (I3CC_CONTROLLER_DEVICE_ADDR) Device Dynamic Address Valid Mask */
#define I3CC_CONTROLLER_DEVICE_ADDR_DYNAMIC_ADDR_VALID(value) (I3CC_CONTROLLER_DEVICE_ADDR_DYNAMIC_ADDR_VALID_Msk & (_UINT32_(value) << I3CC_CONTROLLER_DEVICE_ADDR_DYNAMIC_ADDR_VALID_Pos)) /* Assignment of value for DYNAMIC_ADDR_VALID in the I3CC_CONTROLLER_DEVICE_ADDR register */
#define   I3CC_CONTROLLER_DEVICE_ADDR_DYNAMIC_ADDR_VALID_0_Val _UINT32_(0x0)                                        /* (I3CC_CONTROLLER_DEVICE_ADDR) Invalidates DYNAMIC_ADDR.  */
#define   I3CC_CONTROLLER_DEVICE_ADDR_DYNAMIC_ADDR_VALID_1_Val _UINT32_(0x1)                                        /* (I3CC_CONTROLLER_DEVICE_ADDR) Validates DYNAMIC_ADDR.  */
#define I3CC_CONTROLLER_DEVICE_ADDR_DYNAMIC_ADDR_VALID_0 (I3CC_CONTROLLER_DEVICE_ADDR_DYNAMIC_ADDR_VALID_0_Val << I3CC_CONTROLLER_DEVICE_ADDR_DYNAMIC_ADDR_VALID_Pos) /* (I3CC_CONTROLLER_DEVICE_ADDR) Invalidates DYNAMIC_ADDR. Position */
#define I3CC_CONTROLLER_DEVICE_ADDR_DYNAMIC_ADDR_VALID_1 (I3CC_CONTROLLER_DEVICE_ADDR_DYNAMIC_ADDR_VALID_1_Val << I3CC_CONTROLLER_DEVICE_ADDR_DYNAMIC_ADDR_VALID_Pos) /* (I3CC_CONTROLLER_DEVICE_ADDR) Validates DYNAMIC_ADDR. Position */
#define I3CC_CONTROLLER_DEVICE_ADDR_Msk       _UINT32_(0x807F0000)                                 /* (I3CC_CONTROLLER_DEVICE_ADDR) Register Mask  */


/* -------- I3CC_HC_CAPABILITIES : (I3CC Offset: 0x0C) ( R/ 32) Controller Capabilities Register -------- */
#define I3CC_HC_CAPABILITIES_RESETVALUE       _UINT32_(0x4C)                                       /*  (I3CC_HC_CAPABILITIES) Controller Capabilities Register  Reset Value */

#define I3CC_HC_CAPABILITIES_COMBO_COMMAND_Pos _UINT32_(2)                                          /* (I3CC_HC_CAPABILITIES) Combo Command Transfers Position */
#define I3CC_HC_CAPABILITIES_COMBO_COMMAND_Msk (_UINT32_(0x1) << I3CC_HC_CAPABILITIES_COMBO_COMMAND_Pos) /* (I3CC_HC_CAPABILITIES) Combo Command Transfers Mask */
#define I3CC_HC_CAPABILITIES_COMBO_COMMAND(value) (I3CC_HC_CAPABILITIES_COMBO_COMMAND_Msk & (_UINT32_(value) << I3CC_HC_CAPABILITIES_COMBO_COMMAND_Pos)) /* Assignment of value for COMBO_COMMAND in the I3CC_HC_CAPABILITIES register */
#define   I3CC_HC_CAPABILITIES_COMBO_COMMAND_0_Val _UINT32_(0x0)                                        /* (I3CC_HC_CAPABILITIES) Combo Command transfers not supported.  */
#define   I3CC_HC_CAPABILITIES_COMBO_COMMAND_1_Val _UINT32_(0x1)                                        /* (I3CC_HC_CAPABILITIES) Combo Command transfers supported.  */
#define I3CC_HC_CAPABILITIES_COMBO_COMMAND_0  (I3CC_HC_CAPABILITIES_COMBO_COMMAND_0_Val << I3CC_HC_CAPABILITIES_COMBO_COMMAND_Pos) /* (I3CC_HC_CAPABILITIES) Combo Command transfers not supported. Position */
#define I3CC_HC_CAPABILITIES_COMBO_COMMAND_1  (I3CC_HC_CAPABILITIES_COMBO_COMMAND_1_Val << I3CC_HC_CAPABILITIES_COMBO_COMMAND_Pos) /* (I3CC_HC_CAPABILITIES) Combo Command transfers supported. Position */
#define I3CC_HC_CAPABILITIES_AUTO_COMMAND_Pos _UINT32_(3)                                          /* (I3CC_HC_CAPABILITIES) Auto Command Position */
#define I3CC_HC_CAPABILITIES_AUTO_COMMAND_Msk (_UINT32_(0x1) << I3CC_HC_CAPABILITIES_AUTO_COMMAND_Pos) /* (I3CC_HC_CAPABILITIES) Auto Command Mask */
#define I3CC_HC_CAPABILITIES_AUTO_COMMAND(value) (I3CC_HC_CAPABILITIES_AUTO_COMMAND_Msk & (_UINT32_(value) << I3CC_HC_CAPABILITIES_AUTO_COMMAND_Pos)) /* Assignment of value for AUTO_COMMAND in the I3CC_HC_CAPABILITIES register */
#define   I3CC_HC_CAPABILITIES_AUTO_COMMAND_0_Val _UINT32_(0x0)                                        /* (I3CC_HC_CAPABILITIES) IBI Auto Command transfers is not supported.  */
#define   I3CC_HC_CAPABILITIES_AUTO_COMMAND_1_Val _UINT32_(0x1)                                        /* (I3CC_HC_CAPABILITIES) IBI Auto Command transfers is supported.  */
#define I3CC_HC_CAPABILITIES_AUTO_COMMAND_0   (I3CC_HC_CAPABILITIES_AUTO_COMMAND_0_Val << I3CC_HC_CAPABILITIES_AUTO_COMMAND_Pos) /* (I3CC_HC_CAPABILITIES) IBI Auto Command transfers is not supported. Position */
#define I3CC_HC_CAPABILITIES_AUTO_COMMAND_1   (I3CC_HC_CAPABILITIES_AUTO_COMMAND_1_Val << I3CC_HC_CAPABILITIES_AUTO_COMMAND_Pos) /* (I3CC_HC_CAPABILITIES) IBI Auto Command transfers is supported. Position */
#define I3CC_HC_CAPABILITIES_STANDBY_CR_CAP_Pos _UINT32_(5)                                          /* (I3CC_HC_CAPABILITIES) Standby I3CC Capability Position */
#define I3CC_HC_CAPABILITIES_STANDBY_CR_CAP_Msk (_UINT32_(0x1) << I3CC_HC_CAPABILITIES_STANDBY_CR_CAP_Pos) /* (I3CC_HC_CAPABILITIES) Standby I3CC Capability Mask */
#define I3CC_HC_CAPABILITIES_STANDBY_CR_CAP(value) (I3CC_HC_CAPABILITIES_STANDBY_CR_CAP_Msk & (_UINT32_(value) << I3CC_HC_CAPABILITIES_STANDBY_CR_CAP_Pos)) /* Assignment of value for STANDBY_CR_CAP in the I3CC_HC_CAPABILITIES register */
#define   I3CC_HC_CAPABILITIES_STANDBY_CR_CAP_0_Val _UINT32_(0x0)                                        /* (I3CC_HC_CAPABILITIES) Not capable of acting as standby controller.  */
#define   I3CC_HC_CAPABILITIES_STANDBY_CR_CAP_1_Val _UINT32_(0x1)                                        /* (I3CC_HC_CAPABILITIES) Capable acting as standby controller (i.e., secondary controller).  */
#define I3CC_HC_CAPABILITIES_STANDBY_CR_CAP_0 (I3CC_HC_CAPABILITIES_STANDBY_CR_CAP_0_Val << I3CC_HC_CAPABILITIES_STANDBY_CR_CAP_Pos) /* (I3CC_HC_CAPABILITIES) Not capable of acting as standby controller. Position */
#define I3CC_HC_CAPABILITIES_STANDBY_CR_CAP_1 (I3CC_HC_CAPABILITIES_STANDBY_CR_CAP_1_Val << I3CC_HC_CAPABILITIES_STANDBY_CR_CAP_Pos) /* (I3CC_HC_CAPABILITIES) Capable acting as standby controller (i.e., secondary controller). Position */
#define I3CC_HC_CAPABILITIES_HDR_DDR_EN_Pos   _UINT32_(6)                                          /* (I3CC_HC_CAPABILITIES) HDR-DDR transfers Position */
#define I3CC_HC_CAPABILITIES_HDR_DDR_EN_Msk   (_UINT32_(0x1) << I3CC_HC_CAPABILITIES_HDR_DDR_EN_Pos) /* (I3CC_HC_CAPABILITIES) HDR-DDR transfers Mask */
#define I3CC_HC_CAPABILITIES_HDR_DDR_EN(value) (I3CC_HC_CAPABILITIES_HDR_DDR_EN_Msk & (_UINT32_(value) << I3CC_HC_CAPABILITIES_HDR_DDR_EN_Pos)) /* Assignment of value for HDR_DDR_EN in the I3CC_HC_CAPABILITIES register */
#define   I3CC_HC_CAPABILITIES_HDR_DDR_EN_0_Val _UINT32_(0x0)                                        /* (I3CC_HC_CAPABILITIES) HDR-DDR not supported.  */
#define   I3CC_HC_CAPABILITIES_HDR_DDR_EN_1_Val _UINT32_(0x1)                                        /* (I3CC_HC_CAPABILITIES) HDR-DDR supported.  */
#define I3CC_HC_CAPABILITIES_HDR_DDR_EN_0     (I3CC_HC_CAPABILITIES_HDR_DDR_EN_0_Val << I3CC_HC_CAPABILITIES_HDR_DDR_EN_Pos) /* (I3CC_HC_CAPABILITIES) HDR-DDR not supported. Position */
#define I3CC_HC_CAPABILITIES_HDR_DDR_EN_1     (I3CC_HC_CAPABILITIES_HDR_DDR_EN_1_Val << I3CC_HC_CAPABILITIES_HDR_DDR_EN_Pos) /* (I3CC_HC_CAPABILITIES) HDR-DDR supported. Position */
#define I3CC_HC_CAPABILITIES_HDR_TS_EN_Pos    _UINT32_(7)                                          /* (I3CC_HC_CAPABILITIES) HDR Ternary Symbol Transfer Position */
#define I3CC_HC_CAPABILITIES_HDR_TS_EN_Msk    (_UINT32_(0x1) << I3CC_HC_CAPABILITIES_HDR_TS_EN_Pos) /* (I3CC_HC_CAPABILITIES) HDR Ternary Symbol Transfer Mask */
#define I3CC_HC_CAPABILITIES_HDR_TS_EN(value) (I3CC_HC_CAPABILITIES_HDR_TS_EN_Msk & (_UINT32_(value) << I3CC_HC_CAPABILITIES_HDR_TS_EN_Pos)) /* Assignment of value for HDR_TS_EN in the I3CC_HC_CAPABILITIES register */
#define   I3CC_HC_CAPABILITIES_HDR_TS_EN_0_Val _UINT32_(0x0)                                        /* (I3CC_HC_CAPABILITIES) HDR-TS not supported.  */
#define   I3CC_HC_CAPABILITIES_HDR_TS_EN_1_Val _UINT32_(0x1)                                        /* (I3CC_HC_CAPABILITIES) HDR-TS supported.  */
#define I3CC_HC_CAPABILITIES_HDR_TS_EN_0      (I3CC_HC_CAPABILITIES_HDR_TS_EN_0_Val << I3CC_HC_CAPABILITIES_HDR_TS_EN_Pos) /* (I3CC_HC_CAPABILITIES) HDR-TS not supported. Position */
#define I3CC_HC_CAPABILITIES_HDR_TS_EN_1      (I3CC_HC_CAPABILITIES_HDR_TS_EN_1_Val << I3CC_HC_CAPABILITIES_HDR_TS_EN_Pos) /* (I3CC_HC_CAPABILITIES) HDR-TS supported. Position */
#define I3CC_HC_CAPABILITIES_Msk              _UINT32_(0x000000EC)                                 /* (I3CC_HC_CAPABILITIES) Register Mask  */


/* -------- I3CC_RESET_CONTROL : (I3CC Offset: 0x10) (R/W 32) Reset Control Register -------- */
#define I3CC_RESET_CONTROL_RESETVALUE         _UINT32_(0x00)                                       /*  (I3CC_RESET_CONTROL) Reset Control Register  Reset Value */

#define I3CC_RESET_CONTROL_SOFT_RST_Pos       _UINT32_(0)                                          /* (I3CC_RESET_CONTROL) Core Software Reset Position */
#define I3CC_RESET_CONTROL_SOFT_RST_Msk       (_UINT32_(0x1) << I3CC_RESET_CONTROL_SOFT_RST_Pos)   /* (I3CC_RESET_CONTROL) Core Software Reset Mask */
#define I3CC_RESET_CONTROL_SOFT_RST(value)    (I3CC_RESET_CONTROL_SOFT_RST_Msk & (_UINT32_(value) << I3CC_RESET_CONTROL_SOFT_RST_Pos)) /* Assignment of value for SOFT_RST in the I3CC_RESET_CONTROL register */
#define   I3CC_RESET_CONTROL_SOFT_RST_0_Val   _UINT32_(0x0)                                        /* (I3CC_RESET_CONTROL) No effect.  */
#define   I3CC_RESET_CONTROL_SOFT_RST_1_Val   _UINT32_(0x1)                                        /* (I3CC_RESET_CONTROL) The I3CC is reset and disabled. All registers return to their reset values, and the software must re-initialize the I3CC.  */
#define I3CC_RESET_CONTROL_SOFT_RST_0         (I3CC_RESET_CONTROL_SOFT_RST_0_Val << I3CC_RESET_CONTROL_SOFT_RST_Pos) /* (I3CC_RESET_CONTROL) No effect. Position */
#define I3CC_RESET_CONTROL_SOFT_RST_1         (I3CC_RESET_CONTROL_SOFT_RST_1_Val << I3CC_RESET_CONTROL_SOFT_RST_Pos) /* (I3CC_RESET_CONTROL) The I3CC is reset and disabled. All registers return to their reset values, and the software must re-initialize the I3CC. Position */
#define I3CC_RESET_CONTROL_CMD_QUEUE_RST_Pos  _UINT32_(1)                                          /* (I3CC_RESET_CONTROL) Command Queue Software reset Position */
#define I3CC_RESET_CONTROL_CMD_QUEUE_RST_Msk  (_UINT32_(0x1) << I3CC_RESET_CONTROL_CMD_QUEUE_RST_Pos) /* (I3CC_RESET_CONTROL) Command Queue Software reset Mask */
#define I3CC_RESET_CONTROL_CMD_QUEUE_RST(value) (I3CC_RESET_CONTROL_CMD_QUEUE_RST_Msk & (_UINT32_(value) << I3CC_RESET_CONTROL_CMD_QUEUE_RST_Pos)) /* Assignment of value for CMD_QUEUE_RST in the I3CC_RESET_CONTROL register */
#define   I3CC_RESET_CONTROL_CMD_QUEUE_RST_0_Val _UINT32_(0x0)                                        /* (I3CC_RESET_CONTROL) No effect.  */
#define   I3CC_RESET_CONTROL_CMD_QUEUE_RST_1_Val _UINT32_(0x1)                                        /* (I3CC_RESET_CONTROL) The Command queues in the I3CC are flushed. Cleared automatically upon Command queue reset completion.  */
#define I3CC_RESET_CONTROL_CMD_QUEUE_RST_0    (I3CC_RESET_CONTROL_CMD_QUEUE_RST_0_Val << I3CC_RESET_CONTROL_CMD_QUEUE_RST_Pos) /* (I3CC_RESET_CONTROL) No effect. Position */
#define I3CC_RESET_CONTROL_CMD_QUEUE_RST_1    (I3CC_RESET_CONTROL_CMD_QUEUE_RST_1_Val << I3CC_RESET_CONTROL_CMD_QUEUE_RST_Pos) /* (I3CC_RESET_CONTROL) The Command queues in the I3CC are flushed. Cleared automatically upon Command queue reset completion. Position */
#define I3CC_RESET_CONTROL_RESP_QUEUE_RST_Pos _UINT32_(2)                                          /* (I3CC_RESET_CONTROL) Response Queue Software Reset Position */
#define I3CC_RESET_CONTROL_RESP_QUEUE_RST_Msk (_UINT32_(0x1) << I3CC_RESET_CONTROL_RESP_QUEUE_RST_Pos) /* (I3CC_RESET_CONTROL) Response Queue Software Reset Mask */
#define I3CC_RESET_CONTROL_RESP_QUEUE_RST(value) (I3CC_RESET_CONTROL_RESP_QUEUE_RST_Msk & (_UINT32_(value) << I3CC_RESET_CONTROL_RESP_QUEUE_RST_Pos)) /* Assignment of value for RESP_QUEUE_RST in the I3CC_RESET_CONTROL register */
#define   I3CC_RESET_CONTROL_RESP_QUEUE_RST_0_Val _UINT32_(0x0)                                        /* (I3CC_RESET_CONTROL) No effect.  */
#define   I3CC_RESET_CONTROL_RESP_QUEUE_RST_1_Val _UINT32_(0x1)                                        /* (I3CC_RESET_CONTROL) The Response queues in the I3CC are flushed. Cleared automatically upon Response queue reset completion.  */
#define I3CC_RESET_CONTROL_RESP_QUEUE_RST_0   (I3CC_RESET_CONTROL_RESP_QUEUE_RST_0_Val << I3CC_RESET_CONTROL_RESP_QUEUE_RST_Pos) /* (I3CC_RESET_CONTROL) No effect. Position */
#define I3CC_RESET_CONTROL_RESP_QUEUE_RST_1   (I3CC_RESET_CONTROL_RESP_QUEUE_RST_1_Val << I3CC_RESET_CONTROL_RESP_QUEUE_RST_Pos) /* (I3CC_RESET_CONTROL) The Response queues in the I3CC are flushed. Cleared automatically upon Response queue reset completion. Position */
#define I3CC_RESET_CONTROL_TX_FIFO_RST_Pos    _UINT32_(3)                                          /* (I3CC_RESET_CONTROL) Transmit Queue Software Reset Position */
#define I3CC_RESET_CONTROL_TX_FIFO_RST_Msk    (_UINT32_(0x1) << I3CC_RESET_CONTROL_TX_FIFO_RST_Pos) /* (I3CC_RESET_CONTROL) Transmit Queue Software Reset Mask */
#define I3CC_RESET_CONTROL_TX_FIFO_RST(value) (I3CC_RESET_CONTROL_TX_FIFO_RST_Msk & (_UINT32_(value) << I3CC_RESET_CONTROL_TX_FIFO_RST_Pos)) /* Assignment of value for TX_FIFO_RST in the I3CC_RESET_CONTROL register */
#define   I3CC_RESET_CONTROL_TX_FIFO_RST_0_Val _UINT32_(0x0)                                        /* (I3CC_RESET_CONTROL) No effect.  */
#define   I3CC_RESET_CONTROL_TX_FIFO_RST_1_Val _UINT32_(0x1)                                        /* (I3CC_RESET_CONTROL) The Transmit queues in the I3CC are flushed. Cleared automatically upon Transmit queue reset completion.  */
#define I3CC_RESET_CONTROL_TX_FIFO_RST_0      (I3CC_RESET_CONTROL_TX_FIFO_RST_0_Val << I3CC_RESET_CONTROL_TX_FIFO_RST_Pos) /* (I3CC_RESET_CONTROL) No effect. Position */
#define I3CC_RESET_CONTROL_TX_FIFO_RST_1      (I3CC_RESET_CONTROL_TX_FIFO_RST_1_Val << I3CC_RESET_CONTROL_TX_FIFO_RST_Pos) /* (I3CC_RESET_CONTROL) The Transmit queues in the I3CC are flushed. Cleared automatically upon Transmit queue reset completion. Position */
#define I3CC_RESET_CONTROL_RX_FIFO_RST_Pos    _UINT32_(4)                                          /* (I3CC_RESET_CONTROL) Receive Queue Software Reset Position */
#define I3CC_RESET_CONTROL_RX_FIFO_RST_Msk    (_UINT32_(0x1) << I3CC_RESET_CONTROL_RX_FIFO_RST_Pos) /* (I3CC_RESET_CONTROL) Receive Queue Software Reset Mask */
#define I3CC_RESET_CONTROL_RX_FIFO_RST(value) (I3CC_RESET_CONTROL_RX_FIFO_RST_Msk & (_UINT32_(value) << I3CC_RESET_CONTROL_RX_FIFO_RST_Pos)) /* Assignment of value for RX_FIFO_RST in the I3CC_RESET_CONTROL register */
#define   I3CC_RESET_CONTROL_RX_FIFO_RST_0_Val _UINT32_(0x0)                                        /* (I3CC_RESET_CONTROL) No effect.  */
#define   I3CC_RESET_CONTROL_RX_FIFO_RST_1_Val _UINT32_(0x1)                                        /* (I3CC_RESET_CONTROL) The Receive queues in the I3CC are flushed. Cleared automatically upon Receive queue reset completion.  */
#define I3CC_RESET_CONTROL_RX_FIFO_RST_0      (I3CC_RESET_CONTROL_RX_FIFO_RST_0_Val << I3CC_RESET_CONTROL_RX_FIFO_RST_Pos) /* (I3CC_RESET_CONTROL) No effect. Position */
#define I3CC_RESET_CONTROL_RX_FIFO_RST_1      (I3CC_RESET_CONTROL_RX_FIFO_RST_1_Val << I3CC_RESET_CONTROL_RX_FIFO_RST_Pos) /* (I3CC_RESET_CONTROL) The Receive queues in the I3CC are flushed. Cleared automatically upon Receive queue reset completion. Position */
#define I3CC_RESET_CONTROL_IBI_QUEUE_RST_Pos  _UINT32_(5)                                          /* (I3CC_RESET_CONTROL) IBI Queue Reset Position */
#define I3CC_RESET_CONTROL_IBI_QUEUE_RST_Msk  (_UINT32_(0x1) << I3CC_RESET_CONTROL_IBI_QUEUE_RST_Pos) /* (I3CC_RESET_CONTROL) IBI Queue Reset Mask */
#define I3CC_RESET_CONTROL_IBI_QUEUE_RST(value) (I3CC_RESET_CONTROL_IBI_QUEUE_RST_Msk & (_UINT32_(value) << I3CC_RESET_CONTROL_IBI_QUEUE_RST_Pos)) /* Assignment of value for IBI_QUEUE_RST in the I3CC_RESET_CONTROL register */
#define   I3CC_RESET_CONTROL_IBI_QUEUE_RST_0_Val _UINT32_(0x0)                                        /* (I3CC_RESET_CONTROL) No effect.  */
#define   I3CC_RESET_CONTROL_IBI_QUEUE_RST_1_Val _UINT32_(0x1)                                        /* (I3CC_RESET_CONTROL) The IBI queues in the I3CC are flushed. Cleared automatically upon IBI queue reset completion.  */
#define I3CC_RESET_CONTROL_IBI_QUEUE_RST_0    (I3CC_RESET_CONTROL_IBI_QUEUE_RST_0_Val << I3CC_RESET_CONTROL_IBI_QUEUE_RST_Pos) /* (I3CC_RESET_CONTROL) No effect. Position */
#define I3CC_RESET_CONTROL_IBI_QUEUE_RST_1    (I3CC_RESET_CONTROL_IBI_QUEUE_RST_1_Val << I3CC_RESET_CONTROL_IBI_QUEUE_RST_Pos) /* (I3CC_RESET_CONTROL) The IBI queues in the I3CC are flushed. Cleared automatically upon IBI queue reset completion. Position */
#define I3CC_RESET_CONTROL_Msk                _UINT32_(0x0000003F)                                 /* (I3CC_RESET_CONTROL) Register Mask  */


/* -------- I3CC_PRESENT_STATE : (I3CC Offset: 0x14) ( R/ 32) Present State Register -------- */
#define I3CC_PRESENT_STATE_RESETVALUE         _UINT32_(0x00)                                       /*  (I3CC_PRESENT_STATE) Present State Register  Reset Value */

#define I3CC_PRESENT_STATE_CURRENT_CONTROLLER_Pos _UINT32_(2)                                          /* (I3CC_PRESENT_STATE) Active Controller Position */
#define I3CC_PRESENT_STATE_CURRENT_CONTROLLER_Msk (_UINT32_(0x1) << I3CC_PRESENT_STATE_CURRENT_CONTROLLER_Pos) /* (I3CC_PRESENT_STATE) Active Controller Mask */
#define I3CC_PRESENT_STATE_CURRENT_CONTROLLER(value) (I3CC_PRESENT_STATE_CURRENT_CONTROLLER_Msk & (_UINT32_(value) << I3CC_PRESENT_STATE_CURRENT_CONTROLLER_Pos)) /* Assignment of value for CURRENT_CONTROLLER in the I3CC_PRESENT_STATE register */
#define   I3CC_PRESENT_STATE_CURRENT_CONTROLLER_1_Val _UINT32_(0x1)                                        /* (I3CC_PRESENT_STATE) (BUS_OWNER) The I3CC is the active controller and, as a result, can initiate transfers.  */
#define I3CC_PRESENT_STATE_CURRENT_CONTROLLER_1 (I3CC_PRESENT_STATE_CURRENT_CONTROLLER_1_Val << I3CC_PRESENT_STATE_CURRENT_CONTROLLER_Pos) /* (I3CC_PRESENT_STATE) (BUS_OWNER) The I3CC is the active controller and, as a result, can initiate transfers. Position */
#define I3CC_PRESENT_STATE_Msk                _UINT32_(0x00000004)                                 /* (I3CC_PRESENT_STATE) Register Mask  */


/* -------- I3CC_INTR_STATUS : (I3CC Offset: 0x20) (R/W 32) Interrupt Status Register -------- */
#define I3CC_INTR_STATUS_RESETVALUE           _UINT32_(0x00)                                       /*  (I3CC_INTR_STATUS) Interrupt Status Register  Reset Value */

#define I3CC_INTR_STATUS_HC_INTERNAL_ERR_STAT_Pos _UINT32_(10)                                         /* (I3CC_INTR_STATUS) I3CC Internal Error Position */
#define I3CC_INTR_STATUS_HC_INTERNAL_ERR_STAT_Msk (_UINT32_(0x1) << I3CC_INTR_STATUS_HC_INTERNAL_ERR_STAT_Pos) /* (I3CC_INTR_STATUS) I3CC Internal Error Mask */
#define I3CC_INTR_STATUS_HC_INTERNAL_ERR_STAT(value) (I3CC_INTR_STATUS_HC_INTERNAL_ERR_STAT_Msk & (_UINT32_(value) << I3CC_INTR_STATUS_HC_INTERNAL_ERR_STAT_Pos)) /* Assignment of value for HC_INTERNAL_ERR_STAT in the I3CC_INTR_STATUS register */
#define I3CC_INTR_STATUS_Msk                  _UINT32_(0x00000400)                                 /* (I3CC_INTR_STATUS) Register Mask  */


/* -------- I3CC_INTR_STATUS_ENABLE : (I3CC Offset: 0x24) (R/W 32) Interrupt Status Enable Register -------- */
#define I3CC_INTR_STATUS_ENABLE_RESETVALUE    _UINT32_(0x00)                                       /*  (I3CC_INTR_STATUS_ENABLE) Interrupt Status Enable Register  Reset Value */

#define I3CC_INTR_STATUS_ENABLE_HC_INTERNAL_ERR_STAT_EN_Pos _UINT32_(10)                                         /* (I3CC_INTR_STATUS_ENABLE) I3CC Internal Error Status Enable Position */
#define I3CC_INTR_STATUS_ENABLE_HC_INTERNAL_ERR_STAT_EN_Msk (_UINT32_(0x1) << I3CC_INTR_STATUS_ENABLE_HC_INTERNAL_ERR_STAT_EN_Pos) /* (I3CC_INTR_STATUS_ENABLE) I3CC Internal Error Status Enable Mask */
#define I3CC_INTR_STATUS_ENABLE_HC_INTERNAL_ERR_STAT_EN(value) (I3CC_INTR_STATUS_ENABLE_HC_INTERNAL_ERR_STAT_EN_Msk & (_UINT32_(value) << I3CC_INTR_STATUS_ENABLE_HC_INTERNAL_ERR_STAT_EN_Pos)) /* Assignment of value for HC_INTERNAL_ERR_STAT_EN in the I3CC_INTR_STATUS_ENABLE register */
#define   I3CC_INTR_STATUS_ENABLE_HC_INTERNAL_ERR_STAT_EN_0_Val _UINT32_(0x0)                                        /* (I3CC_INTR_STATUS_ENABLE) Disables the HC_INTERNAL_ERR_STAT interrupt bit logging.  */
#define   I3CC_INTR_STATUS_ENABLE_HC_INTERNAL_ERR_STAT_EN_1_Val _UINT32_(0x1)                                        /* (I3CC_INTR_STATUS_ENABLE) Enables the HC_INTERNAL_ERR_STAT interrupt bit logging.  */
#define I3CC_INTR_STATUS_ENABLE_HC_INTERNAL_ERR_STAT_EN_0 (I3CC_INTR_STATUS_ENABLE_HC_INTERNAL_ERR_STAT_EN_0_Val << I3CC_INTR_STATUS_ENABLE_HC_INTERNAL_ERR_STAT_EN_Pos) /* (I3CC_INTR_STATUS_ENABLE) Disables the HC_INTERNAL_ERR_STAT interrupt bit logging. Position */
#define I3CC_INTR_STATUS_ENABLE_HC_INTERNAL_ERR_STAT_EN_1 (I3CC_INTR_STATUS_ENABLE_HC_INTERNAL_ERR_STAT_EN_1_Val << I3CC_INTR_STATUS_ENABLE_HC_INTERNAL_ERR_STAT_EN_Pos) /* (I3CC_INTR_STATUS_ENABLE) Enables the HC_INTERNAL_ERR_STAT interrupt bit logging. Position */
#define I3CC_INTR_STATUS_ENABLE_Msk           _UINT32_(0x00000400)                                 /* (I3CC_INTR_STATUS_ENABLE) Register Mask  */


/* -------- I3CC_INTR_SIGNAL_ENABLE : (I3CC Offset: 0x28) (R/W 32) Interrupt Signal Enable Register -------- */
#define I3CC_INTR_SIGNAL_ENABLE_RESETVALUE    _UINT32_(0x00)                                       /*  (I3CC_INTR_SIGNAL_ENABLE) Interrupt Signal Enable Register  Reset Value */

#define I3CC_INTR_SIGNAL_ENABLE_HC_INTERNAL_ERR_SIGNAL_EN_Pos _UINT32_(10)                                         /* (I3CC_INTR_SIGNAL_ENABLE) I3CC Internal Error Signal Enable Position */
#define I3CC_INTR_SIGNAL_ENABLE_HC_INTERNAL_ERR_SIGNAL_EN_Msk (_UINT32_(0x1) << I3CC_INTR_SIGNAL_ENABLE_HC_INTERNAL_ERR_SIGNAL_EN_Pos) /* (I3CC_INTR_SIGNAL_ENABLE) I3CC Internal Error Signal Enable Mask */
#define I3CC_INTR_SIGNAL_ENABLE_HC_INTERNAL_ERR_SIGNAL_EN(value) (I3CC_INTR_SIGNAL_ENABLE_HC_INTERNAL_ERR_SIGNAL_EN_Msk & (_UINT32_(value) << I3CC_INTR_SIGNAL_ENABLE_HC_INTERNAL_ERR_SIGNAL_EN_Pos)) /* Assignment of value for HC_INTERNAL_ERR_SIGNAL_EN in the I3CC_INTR_SIGNAL_ENABLE register */
#define   I3CC_INTR_SIGNAL_ENABLE_HC_INTERNAL_ERR_SIGNAL_EN_0_Val _UINT32_(0x0)                                        /* (I3CC_INTR_SIGNAL_ENABLE) The I3CC interrupt line is not triggered by I3CC_INTR_STATUS.HC_INTERNAL_ERR_STAT.  */
#define   I3CC_INTR_SIGNAL_ENABLE_HC_INTERNAL_ERR_SIGNAL_EN_1_Val _UINT32_(0x1)                                        /* (I3CC_INTR_SIGNAL_ENABLE) If I3CC_INTR_STATUS.HC_INTERNAL_ERR_STAT is set to '1', the I3CC interrupt line is triggered.  */
#define I3CC_INTR_SIGNAL_ENABLE_HC_INTERNAL_ERR_SIGNAL_EN_0 (I3CC_INTR_SIGNAL_ENABLE_HC_INTERNAL_ERR_SIGNAL_EN_0_Val << I3CC_INTR_SIGNAL_ENABLE_HC_INTERNAL_ERR_SIGNAL_EN_Pos) /* (I3CC_INTR_SIGNAL_ENABLE) The I3CC interrupt line is not triggered by I3CC_INTR_STATUS.HC_INTERNAL_ERR_STAT. Position */
#define I3CC_INTR_SIGNAL_ENABLE_HC_INTERNAL_ERR_SIGNAL_EN_1 (I3CC_INTR_SIGNAL_ENABLE_HC_INTERNAL_ERR_SIGNAL_EN_1_Val << I3CC_INTR_SIGNAL_ENABLE_HC_INTERNAL_ERR_SIGNAL_EN_Pos) /* (I3CC_INTR_SIGNAL_ENABLE) If I3CC_INTR_STATUS.HC_INTERNAL_ERR_STAT is set to '1', the I3CC interrupt line is triggered. Position */
#define I3CC_INTR_SIGNAL_ENABLE_Msk           _UINT32_(0x00000400)                                 /* (I3CC_INTR_SIGNAL_ENABLE) Register Mask  */


/* -------- I3CC_INTR_FORCE : (I3CC Offset: 0x2C) ( /W 32) Interrupt Force Register -------- */
#define I3CC_INTR_FORCE_INTR_FORCE_Pos        _UINT32_(10)                                         /* (I3CC_INTR_FORCE) I3CC Internal Error Force Position */
#define I3CC_INTR_FORCE_INTR_FORCE_Msk        (_UINT32_(0x1) << I3CC_INTR_FORCE_INTR_FORCE_Pos)    /* (I3CC_INTR_FORCE) I3CC Internal Error Force Mask */
#define I3CC_INTR_FORCE_INTR_FORCE(value)     (I3CC_INTR_FORCE_INTR_FORCE_Msk & (_UINT32_(value) << I3CC_INTR_FORCE_INTR_FORCE_Pos)) /* Assignment of value for INTR_FORCE in the I3CC_INTR_FORCE register */
#define   I3CC_INTR_FORCE_INTR_FORCE_0_Val    _UINT32_(0x0)                                        /* (I3CC_INTR_FORCE) No effect.  */
#define   I3CC_INTR_FORCE_INTR_FORCE_1_Val    _UINT32_(0x1)                                        /* (I3CC_INTR_FORCE) Sets I3CC_INTR_STATUS.HC_INTERNAL_ERR_STAT interrupt source to '1'.  */
#define I3CC_INTR_FORCE_INTR_FORCE_0          (I3CC_INTR_FORCE_INTR_FORCE_0_Val << I3CC_INTR_FORCE_INTR_FORCE_Pos) /* (I3CC_INTR_FORCE) No effect. Position */
#define I3CC_INTR_FORCE_INTR_FORCE_1          (I3CC_INTR_FORCE_INTR_FORCE_1_Val << I3CC_INTR_FORCE_INTR_FORCE_Pos) /* (I3CC_INTR_FORCE) Sets I3CC_INTR_STATUS.HC_INTERNAL_ERR_STAT interrupt source to '1'. Position */
#define I3CC_INTR_FORCE_Msk                   _UINT32_(0x00000400)                                 /* (I3CC_INTR_FORCE) Register Mask  */


/* -------- I3CC_DAT_SECTION_OFFSET : (I3CC Offset: 0x30) ( R/ 32) Device Address Table Section Offset Register -------- */
#define I3CC_DAT_SECTION_OFFSET_RESETVALUE    _UINT32_(0x10080)                                    /*  (I3CC_DAT_SECTION_OFFSET) Device Address Table Section Offset Register  Reset Value */

#define I3CC_DAT_SECTION_OFFSET_TABLE_OFFSET_Pos _UINT32_(0)                                          /* (I3CC_DAT_SECTION_OFFSET) DAT Table Offset Position */
#define I3CC_DAT_SECTION_OFFSET_TABLE_OFFSET_Msk (_UINT32_(0xFFF) << I3CC_DAT_SECTION_OFFSET_TABLE_OFFSET_Pos) /* (I3CC_DAT_SECTION_OFFSET) DAT Table Offset Mask */
#define I3CC_DAT_SECTION_OFFSET_TABLE_OFFSET(value) (I3CC_DAT_SECTION_OFFSET_TABLE_OFFSET_Msk & (_UINT32_(value) << I3CC_DAT_SECTION_OFFSET_TABLE_OFFSET_Pos)) /* Assignment of value for TABLE_OFFSET in the I3CC_DAT_SECTION_OFFSET register */
#define I3CC_DAT_SECTION_OFFSET_TABLE_SIZE_Pos _UINT32_(12)                                         /* (I3CC_DAT_SECTION_OFFSET) DAT Table Size Position */
#define I3CC_DAT_SECTION_OFFSET_TABLE_SIZE_Msk (_UINT32_(0x3F) << I3CC_DAT_SECTION_OFFSET_TABLE_SIZE_Pos) /* (I3CC_DAT_SECTION_OFFSET) DAT Table Size Mask */
#define I3CC_DAT_SECTION_OFFSET_TABLE_SIZE(value) (I3CC_DAT_SECTION_OFFSET_TABLE_SIZE_Msk & (_UINT32_(value) << I3CC_DAT_SECTION_OFFSET_TABLE_SIZE_Pos)) /* Assignment of value for TABLE_SIZE in the I3CC_DAT_SECTION_OFFSET register */
#define I3CC_DAT_SECTION_OFFSET_Msk           _UINT32_(0x0003FFFF)                                 /* (I3CC_DAT_SECTION_OFFSET) Register Mask  */


/* -------- I3CC_DCT_SECTION_OFFSET : (I3CC Offset: 0x34) (R/W 32) Device Characteristics Table Section Offset Register -------- */
#define I3CC_DCT_SECTION_OFFSET_RESETVALUE    _UINT32_(0x20100)                                    /*  (I3CC_DCT_SECTION_OFFSET) Device Characteristics Table Section Offset Register  Reset Value */

#define I3CC_DCT_SECTION_OFFSET_TABLE_OFFSET_Pos _UINT32_(0)                                          /* (I3CC_DCT_SECTION_OFFSET) DCT Table Offset Position */
#define I3CC_DCT_SECTION_OFFSET_TABLE_OFFSET_Msk (_UINT32_(0xFFF) << I3CC_DCT_SECTION_OFFSET_TABLE_OFFSET_Pos) /* (I3CC_DCT_SECTION_OFFSET) DCT Table Offset Mask */
#define I3CC_DCT_SECTION_OFFSET_TABLE_OFFSET(value) (I3CC_DCT_SECTION_OFFSET_TABLE_OFFSET_Msk & (_UINT32_(value) << I3CC_DCT_SECTION_OFFSET_TABLE_OFFSET_Pos)) /* Assignment of value for TABLE_OFFSET in the I3CC_DCT_SECTION_OFFSET register */
#define I3CC_DCT_SECTION_OFFSET_TABLE_SIZE_Pos _UINT32_(12)                                         /* (I3CC_DCT_SECTION_OFFSET) DCT Table Size Position */
#define I3CC_DCT_SECTION_OFFSET_TABLE_SIZE_Msk (_UINT32_(0x7F) << I3CC_DCT_SECTION_OFFSET_TABLE_SIZE_Pos) /* (I3CC_DCT_SECTION_OFFSET) DCT Table Size Mask */
#define I3CC_DCT_SECTION_OFFSET_TABLE_SIZE(value) (I3CC_DCT_SECTION_OFFSET_TABLE_SIZE_Msk & (_UINT32_(value) << I3CC_DCT_SECTION_OFFSET_TABLE_SIZE_Pos)) /* Assignment of value for TABLE_SIZE in the I3CC_DCT_SECTION_OFFSET register */
#define I3CC_DCT_SECTION_OFFSET_TABLE_INDEX_Pos _UINT32_(19)                                         /* (I3CC_DCT_SECTION_OFFSET) DCT Table Index Position */
#define I3CC_DCT_SECTION_OFFSET_TABLE_INDEX_Msk (_UINT32_(0x7) << I3CC_DCT_SECTION_OFFSET_TABLE_INDEX_Pos) /* (I3CC_DCT_SECTION_OFFSET) DCT Table Index Mask */
#define I3CC_DCT_SECTION_OFFSET_TABLE_INDEX(value) (I3CC_DCT_SECTION_OFFSET_TABLE_INDEX_Msk & (_UINT32_(value) << I3CC_DCT_SECTION_OFFSET_TABLE_INDEX_Pos)) /* Assignment of value for TABLE_INDEX in the I3CC_DCT_SECTION_OFFSET register */
#define I3CC_DCT_SECTION_OFFSET_Msk           _UINT32_(0x003FFFFF)                                 /* (I3CC_DCT_SECTION_OFFSET) Register Mask  */


/* -------- I3CC_RING_HEADERS_SECTION_OFFSET : (I3CC Offset: 0x38) ( R/ 32) Ring Headers Section Offset Register -------- */
#define I3CC_RING_HEADERS_SECTION_OFFSET_RESETVALUE _UINT32_(0x00)                                       /*  (I3CC_RING_HEADERS_SECTION_OFFSET) Ring Headers Section Offset Register  Reset Value */

#define I3CC_RING_HEADERS_SECTION_OFFSET_SECTION_OFFSET_Pos _UINT32_(0)                                          /* (I3CC_RING_HEADERS_SECTION_OFFSET) Ring Headers Section Offset Position */
#define I3CC_RING_HEADERS_SECTION_OFFSET_SECTION_OFFSET_Msk (_UINT32_(0xFFFF) << I3CC_RING_HEADERS_SECTION_OFFSET_SECTION_OFFSET_Pos) /* (I3CC_RING_HEADERS_SECTION_OFFSET) Ring Headers Section Offset Mask */
#define I3CC_RING_HEADERS_SECTION_OFFSET_SECTION_OFFSET(value) (I3CC_RING_HEADERS_SECTION_OFFSET_SECTION_OFFSET_Msk & (_UINT32_(value) << I3CC_RING_HEADERS_SECTION_OFFSET_SECTION_OFFSET_Pos)) /* Assignment of value for SECTION_OFFSET in the I3CC_RING_HEADERS_SECTION_OFFSET register */
#define I3CC_RING_HEADERS_SECTION_OFFSET_Msk  _UINT32_(0x0000FFFF)                                 /* (I3CC_RING_HEADERS_SECTION_OFFSET) Register Mask  */


/* -------- I3CC_PIO_SECTION_OFFSET : (I3CC Offset: 0x3C) ( R/ 32) PIO Section Offset Register -------- */
#define I3CC_PIO_SECTION_OFFSET_RESETVALUE    _UINT32_(0xC0)                                       /*  (I3CC_PIO_SECTION_OFFSET) PIO Section Offset Register  Reset Value */

#define I3CC_PIO_SECTION_OFFSET_SECTION_OFFSET_Pos _UINT32_(0)                                          /* (I3CC_PIO_SECTION_OFFSET) PIO Section Offset Position */
#define I3CC_PIO_SECTION_OFFSET_SECTION_OFFSET_Msk (_UINT32_(0xFFFF) << I3CC_PIO_SECTION_OFFSET_SECTION_OFFSET_Pos) /* (I3CC_PIO_SECTION_OFFSET) PIO Section Offset Mask */
#define I3CC_PIO_SECTION_OFFSET_SECTION_OFFSET(value) (I3CC_PIO_SECTION_OFFSET_SECTION_OFFSET_Msk & (_UINT32_(value) << I3CC_PIO_SECTION_OFFSET_SECTION_OFFSET_Pos)) /* Assignment of value for SECTION_OFFSET in the I3CC_PIO_SECTION_OFFSET register */
#define I3CC_PIO_SECTION_OFFSET_Msk           _UINT32_(0x0000FFFF)                                 /* (I3CC_PIO_SECTION_OFFSET) Register Mask  */


/* -------- I3CC_EXT_CAPS_SECTION_OFFSET : (I3CC Offset: 0x40) ( R/ 32) Extended Capabilities Section Offset Register -------- */
#define I3CC_EXT_CAPS_SECTION_OFFSET_RESETVALUE _UINT32_(0x200)                                      /*  (I3CC_EXT_CAPS_SECTION_OFFSET) Extended Capabilities Section Offset Register  Reset Value */

#define I3CC_EXT_CAPS_SECTION_OFFSET_SECTION_OFFSET_Pos _UINT32_(0)                                          /* (I3CC_EXT_CAPS_SECTION_OFFSET) Extended Capabilities Section Offset Position */
#define I3CC_EXT_CAPS_SECTION_OFFSET_SECTION_OFFSET_Msk (_UINT32_(0xFFFF) << I3CC_EXT_CAPS_SECTION_OFFSET_SECTION_OFFSET_Pos) /* (I3CC_EXT_CAPS_SECTION_OFFSET) Extended Capabilities Section Offset Mask */
#define I3CC_EXT_CAPS_SECTION_OFFSET_SECTION_OFFSET(value) (I3CC_EXT_CAPS_SECTION_OFFSET_SECTION_OFFSET_Msk & (_UINT32_(value) << I3CC_EXT_CAPS_SECTION_OFFSET_SECTION_OFFSET_Pos)) /* Assignment of value for SECTION_OFFSET in the I3CC_EXT_CAPS_SECTION_OFFSET register */
#define I3CC_EXT_CAPS_SECTION_OFFSET_Msk      _UINT32_(0x0000FFFF)                                 /* (I3CC_EXT_CAPS_SECTION_OFFSET) Register Mask  */


/* -------- I3CC_IBI_NOTIFY_CTRL : (I3CC Offset: 0x58) (R/W 32) IBI Notify Control Register -------- */
#define I3CC_IBI_NOTIFY_CTRL_RESETVALUE       _UINT32_(0x00)                                       /*  (I3CC_IBI_NOTIFY_CTRL) IBI Notify Control Register  Reset Value */

#define I3CC_IBI_NOTIFY_CTRL_NOTIFY_HJ_REJECTED_Pos _UINT32_(0)                                          /* (I3CC_IBI_NOTIFY_CTRL) Notify Rejected Hot-Join Control Position */
#define I3CC_IBI_NOTIFY_CTRL_NOTIFY_HJ_REJECTED_Msk (_UINT32_(0x1) << I3CC_IBI_NOTIFY_CTRL_NOTIFY_HJ_REJECTED_Pos) /* (I3CC_IBI_NOTIFY_CTRL) Notify Rejected Hot-Join Control Mask */
#define I3CC_IBI_NOTIFY_CTRL_NOTIFY_HJ_REJECTED(value) (I3CC_IBI_NOTIFY_CTRL_NOTIFY_HJ_REJECTED_Msk & (_UINT32_(value) << I3CC_IBI_NOTIFY_CTRL_NOTIFY_HJ_REJECTED_Pos)) /* Assignment of value for NOTIFY_HJ_REJECTED in the I3CC_IBI_NOTIFY_CTRL register */
#define   I3CC_IBI_NOTIFY_CTRL_NOTIFY_HJ_REJECTED_0_Val _UINT32_(0x0)                                        /* (I3CC_IBI_NOTIFY_CTRL) (DISABLED) Do not pass rejected IBI status to IBI queue, if the incoming hot-join request is NACK'ed and is auto-disabled based on I3CC_HC_CONTROL.HOT_JOIN_CTRL.  */
#define   I3CC_IBI_NOTIFY_CTRL_NOTIFY_HJ_REJECTED_1_Val _UINT32_(0x1)                                        /* (I3CC_IBI_NOTIFY_CTRL) (ENABLED) Pass rejected IBI status to the IBI queue, if the incoming hot join request is NACK'ed and is auto-disabled based on I3CC_HC_CONTROL.HOT_JOIN_CTRL.  */
#define I3CC_IBI_NOTIFY_CTRL_NOTIFY_HJ_REJECTED_0 (I3CC_IBI_NOTIFY_CTRL_NOTIFY_HJ_REJECTED_0_Val << I3CC_IBI_NOTIFY_CTRL_NOTIFY_HJ_REJECTED_Pos) /* (I3CC_IBI_NOTIFY_CTRL) (DISABLED) Do not pass rejected IBI status to IBI queue, if the incoming hot-join request is NACK'ed and is auto-disabled based on I3CC_HC_CONTROL.HOT_JOIN_CTRL. Position */
#define I3CC_IBI_NOTIFY_CTRL_NOTIFY_HJ_REJECTED_1 (I3CC_IBI_NOTIFY_CTRL_NOTIFY_HJ_REJECTED_1_Val << I3CC_IBI_NOTIFY_CTRL_NOTIFY_HJ_REJECTED_Pos) /* (I3CC_IBI_NOTIFY_CTRL) (ENABLED) Pass rejected IBI status to the IBI queue, if the incoming hot join request is NACK'ed and is auto-disabled based on I3CC_HC_CONTROL.HOT_JOIN_CTRL. Position */
#define I3CC_IBI_NOTIFY_CTRL_NOTIFY_CRR_REJECTED_Pos _UINT32_(1)                                          /* (I3CC_IBI_NOTIFY_CTRL) Notify Rejected Controller-role Request Control Position */
#define I3CC_IBI_NOTIFY_CTRL_NOTIFY_CRR_REJECTED_Msk (_UINT32_(0x1) << I3CC_IBI_NOTIFY_CTRL_NOTIFY_CRR_REJECTED_Pos) /* (I3CC_IBI_NOTIFY_CTRL) Notify Rejected Controller-role Request Control Mask */
#define I3CC_IBI_NOTIFY_CTRL_NOTIFY_CRR_REJECTED(value) (I3CC_IBI_NOTIFY_CTRL_NOTIFY_CRR_REJECTED_Msk & (_UINT32_(value) << I3CC_IBI_NOTIFY_CTRL_NOTIFY_CRR_REJECTED_Pos)) /* Assignment of value for NOTIFY_CRR_REJECTED in the I3CC_IBI_NOTIFY_CTRL register */
#define   I3CC_IBI_NOTIFY_CTRL_NOTIFY_CRR_REJECTED_0_Val _UINT32_(0x0)                                        /* (I3CC_IBI_NOTIFY_CTRL) (DISABLED) Do not pass rejected IBI status to IBI queue/ring, if the incoming controller-role request is NACK'ed and is auto-disabled based on the CRR_REJECT field in the relevant DAT entry.  */
#define   I3CC_IBI_NOTIFY_CTRL_NOTIFY_CRR_REJECTED_1_Val _UINT32_(0x1)                                        /* (I3CC_IBI_NOTIFY_CTRL) (ENABLED) Pass rejected IBI status to the IBI queue, if the incoming controller-role request is NACK'ed and is auto-disabled based on the CRR_REJECT field in the relevant DAT entry.  */
#define I3CC_IBI_NOTIFY_CTRL_NOTIFY_CRR_REJECTED_0 (I3CC_IBI_NOTIFY_CTRL_NOTIFY_CRR_REJECTED_0_Val << I3CC_IBI_NOTIFY_CTRL_NOTIFY_CRR_REJECTED_Pos) /* (I3CC_IBI_NOTIFY_CTRL) (DISABLED) Do not pass rejected IBI status to IBI queue/ring, if the incoming controller-role request is NACK'ed and is auto-disabled based on the CRR_REJECT field in the relevant DAT entry. Position */
#define I3CC_IBI_NOTIFY_CTRL_NOTIFY_CRR_REJECTED_1 (I3CC_IBI_NOTIFY_CTRL_NOTIFY_CRR_REJECTED_1_Val << I3CC_IBI_NOTIFY_CTRL_NOTIFY_CRR_REJECTED_Pos) /* (I3CC_IBI_NOTIFY_CTRL) (ENABLED) Pass rejected IBI status to the IBI queue, if the incoming controller-role request is NACK'ed and is auto-disabled based on the CRR_REJECT field in the relevant DAT entry. Position */
#define I3CC_IBI_NOTIFY_CTRL_NOTIFY_IBI_REJECTED_Pos _UINT32_(3)                                          /* (I3CC_IBI_NOTIFY_CTRL) Notify Rejected In-Band Interrupt Request Control Position */
#define I3CC_IBI_NOTIFY_CTRL_NOTIFY_IBI_REJECTED_Msk (_UINT32_(0x1) << I3CC_IBI_NOTIFY_CTRL_NOTIFY_IBI_REJECTED_Pos) /* (I3CC_IBI_NOTIFY_CTRL) Notify Rejected In-Band Interrupt Request Control Mask */
#define I3CC_IBI_NOTIFY_CTRL_NOTIFY_IBI_REJECTED(value) (I3CC_IBI_NOTIFY_CTRL_NOTIFY_IBI_REJECTED_Msk & (_UINT32_(value) << I3CC_IBI_NOTIFY_CTRL_NOTIFY_IBI_REJECTED_Pos)) /* Assignment of value for NOTIFY_IBI_REJECTED in the I3CC_IBI_NOTIFY_CTRL register */
#define   I3CC_IBI_NOTIFY_CTRL_NOTIFY_IBI_REJECTED_0_Val _UINT32_(0x0)                                        /* (I3CC_IBI_NOTIFY_CTRL) (DISABLED) Do not pass rejected IBI status to the IBI queue/rings, if the incoming IBI is NACK'ed and is auto-disabled based on the IBI_REJECT field in relevant DAT entry.  */
#define   I3CC_IBI_NOTIFY_CTRL_NOTIFY_IBI_REJECTED_1_Val _UINT32_(0x1)                                        /* (I3CC_IBI_NOTIFY_CTRL) (ENABLED) Pass rejected IBI status to the IBI queue/rings, if the incoming IBI is NACK'ed and is auto-disabled based on the IBI_REJECT field in the relevant DAT entry.  */
#define I3CC_IBI_NOTIFY_CTRL_NOTIFY_IBI_REJECTED_0 (I3CC_IBI_NOTIFY_CTRL_NOTIFY_IBI_REJECTED_0_Val << I3CC_IBI_NOTIFY_CTRL_NOTIFY_IBI_REJECTED_Pos) /* (I3CC_IBI_NOTIFY_CTRL) (DISABLED) Do not pass rejected IBI status to the IBI queue/rings, if the incoming IBI is NACK'ed and is auto-disabled based on the IBI_REJECT field in relevant DAT entry. Position */
#define I3CC_IBI_NOTIFY_CTRL_NOTIFY_IBI_REJECTED_1 (I3CC_IBI_NOTIFY_CTRL_NOTIFY_IBI_REJECTED_1_Val << I3CC_IBI_NOTIFY_CTRL_NOTIFY_IBI_REJECTED_Pos) /* (I3CC_IBI_NOTIFY_CTRL) (ENABLED) Pass rejected IBI status to the IBI queue/rings, if the incoming IBI is NACK'ed and is auto-disabled based on the IBI_REJECT field in the relevant DAT entry. Position */
#define I3CC_IBI_NOTIFY_CTRL_Msk              _UINT32_(0x0000000B)                                 /* (I3CC_IBI_NOTIFY_CTRL) Register Mask  */


/* -------- I3CC_DEV_CTX_BASE_LO : (I3CC Offset: 0x60) ( R/ 32) Device Context Base Address Low Register -------- */
#define I3CC_DEV_CTX_BASE_LO_RESETVALUE       _UINT32_(0x00)                                       /*  (I3CC_DEV_CTX_BASE_LO) Device Context Base Address Low Register  Reset Value */

#define I3CC_DEV_CTX_BASE_LO_BASE_LO_Pos      _UINT32_(0)                                          /* (I3CC_DEV_CTX_BASE_LO) Device Context Base Low Position */
#define I3CC_DEV_CTX_BASE_LO_BASE_LO_Msk      (_UINT32_(0xFFFFFFFF) << I3CC_DEV_CTX_BASE_LO_BASE_LO_Pos) /* (I3CC_DEV_CTX_BASE_LO) Device Context Base Low Mask */
#define I3CC_DEV_CTX_BASE_LO_BASE_LO(value)   (I3CC_DEV_CTX_BASE_LO_BASE_LO_Msk & (_UINT32_(value) << I3CC_DEV_CTX_BASE_LO_BASE_LO_Pos)) /* Assignment of value for BASE_LO in the I3CC_DEV_CTX_BASE_LO register */
#define I3CC_DEV_CTX_BASE_LO_Msk              _UINT32_(0xFFFFFFFF)                                 /* (I3CC_DEV_CTX_BASE_LO) Register Mask  */


/* -------- I3CC_DEV_CTX_BASE_HI : (I3CC Offset: 0x64) ( R/ 32) Device Context Base Address High Register -------- */
#define I3CC_DEV_CTX_BASE_HI_RESETVALUE       _UINT32_(0x00)                                       /*  (I3CC_DEV_CTX_BASE_HI) Device Context Base Address High Register  Reset Value */

#define I3CC_DEV_CTX_BASE_HI_BASE_HI_Pos      _UINT32_(0)                                          /* (I3CC_DEV_CTX_BASE_HI) Device Context Base High Position */
#define I3CC_DEV_CTX_BASE_HI_BASE_HI_Msk      (_UINT32_(0xFFFFFFFF) << I3CC_DEV_CTX_BASE_HI_BASE_HI_Pos) /* (I3CC_DEV_CTX_BASE_HI) Device Context Base High Mask */
#define I3CC_DEV_CTX_BASE_HI_BASE_HI(value)   (I3CC_DEV_CTX_BASE_HI_BASE_HI_Msk & (_UINT32_(value) << I3CC_DEV_CTX_BASE_HI_BASE_HI_Pos)) /* Assignment of value for BASE_HI in the I3CC_DEV_CTX_BASE_HI register */
#define I3CC_DEV_CTX_BASE_HI_Msk              _UINT32_(0xFFFFFFFF)                                 /* (I3CC_DEV_CTX_BASE_HI) Register Mask  */


/* -------- I3CC_COMMAND_QUEUE_PORT : (I3CC Offset: 0xC0) ( /W 32) Command Queue Port Register -------- */
#define I3CC_COMMAND_QUEUE_PORT_COMMAND_Pos   _UINT32_(0)                                          /* (I3CC_COMMAND_QUEUE_PORT) 32-bit Command Part Position */
#define I3CC_COMMAND_QUEUE_PORT_COMMAND_Msk   (_UINT32_(0xFFFFFFFF) << I3CC_COMMAND_QUEUE_PORT_COMMAND_Pos) /* (I3CC_COMMAND_QUEUE_PORT) 32-bit Command Part Mask */
#define I3CC_COMMAND_QUEUE_PORT_COMMAND(value) (I3CC_COMMAND_QUEUE_PORT_COMMAND_Msk & (_UINT32_(value) << I3CC_COMMAND_QUEUE_PORT_COMMAND_Pos)) /* Assignment of value for COMMAND in the I3CC_COMMAND_QUEUE_PORT register */
#define I3CC_COMMAND_QUEUE_PORT_Msk           _UINT32_(0xFFFFFFFF)                                 /* (I3CC_COMMAND_QUEUE_PORT) Register Mask  */


/* -------- I3CC_RESPONSE_QUEUE_PORT : (I3CC Offset: 0xC4) ( R/ 32) Response Queue Port Register -------- */
#define I3CC_RESPONSE_QUEUE_PORT_RESETVALUE   _UINT32_(0x00)                                       /*  (I3CC_RESPONSE_QUEUE_PORT) Response Queue Port Register  Reset Value */

#define I3CC_RESPONSE_QUEUE_PORT_DATA_LENGTH_Pos _UINT32_(0)                                          /* (I3CC_RESPONSE_QUEUE_PORT) Data Length/Device Count Position */
#define I3CC_RESPONSE_QUEUE_PORT_DATA_LENGTH_Msk (_UINT32_(0xFFFF) << I3CC_RESPONSE_QUEUE_PORT_DATA_LENGTH_Pos) /* (I3CC_RESPONSE_QUEUE_PORT) Data Length/Device Count Mask */
#define I3CC_RESPONSE_QUEUE_PORT_DATA_LENGTH(value) (I3CC_RESPONSE_QUEUE_PORT_DATA_LENGTH_Msk & (_UINT32_(value) << I3CC_RESPONSE_QUEUE_PORT_DATA_LENGTH_Pos)) /* Assignment of value for DATA_LENGTH in the I3CC_RESPONSE_QUEUE_PORT register */
#define I3CC_RESPONSE_QUEUE_PORT_TID_Pos      _UINT32_(24)                                         /* (I3CC_RESPONSE_QUEUE_PORT) Command/Response Transaction ID Position */
#define I3CC_RESPONSE_QUEUE_PORT_TID_Msk      (_UINT32_(0xF) << I3CC_RESPONSE_QUEUE_PORT_TID_Pos)  /* (I3CC_RESPONSE_QUEUE_PORT) Command/Response Transaction ID Mask */
#define I3CC_RESPONSE_QUEUE_PORT_TID(value)   (I3CC_RESPONSE_QUEUE_PORT_TID_Msk & (_UINT32_(value) << I3CC_RESPONSE_QUEUE_PORT_TID_Pos)) /* Assignment of value for TID in the I3CC_RESPONSE_QUEUE_PORT register */
#define I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_Pos _UINT32_(28)                                         /* (I3CC_RESPONSE_QUEUE_PORT) Response Error Status Position */
#define I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_Msk (_UINT32_(0xF) << I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_Pos) /* (I3CC_RESPONSE_QUEUE_PORT) Response Error Status Mask */
#define I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS(value) (I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_Msk & (_UINT32_(value) << I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_Pos)) /* Assignment of value for ERR_STATUS in the I3CC_RESPONSE_QUEUE_PORT register */
#define   I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_SUCCESS_Val _UINT32_(0x0)                                        /* (I3CC_RESPONSE_QUEUE_PORT) Transfer successful, no error  */
#define   I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_CRC_Val _UINT32_(0x1)                                        /* (I3CC_RESPONSE_QUEUE_PORT) CRC error  */
#define   I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_PARITY_Val _UINT32_(0x2)                                        /* (I3CC_RESPONSE_QUEUE_PORT) Parity error  */
#define   I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_FRAME_Val _UINT32_(0x3)                                        /* (I3CC_RESPONSE_QUEUE_PORT) Frame error  */
#define   I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_ADDR_HEADER_Val _UINT32_(0x4)                                        /* (I3CC_RESPONSE_QUEUE_PORT) Address header error  */
#define   I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_NACK_Val _UINT32_(0x5)                                        /* (I3CC_RESPONSE_QUEUE_PORT) Address NACK'ed or Dynamic Address Assignment NACK'ed  */
#define   I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_OVL_Val _UINT32_(0x6)                                        /* (I3CC_RESPONSE_QUEUE_PORT) Receive overflow or transfer underflow error  */
#define   I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_ABORTED_Val _UINT32_(0x8)                                        /* (I3CC_RESPONSE_QUEUE_PORT) Aborted  */
#define I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_SUCCESS (I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_SUCCESS_Val << I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_Pos) /* (I3CC_RESPONSE_QUEUE_PORT) Transfer successful, no error Position */
#define I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_CRC (I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_CRC_Val << I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_Pos) /* (I3CC_RESPONSE_QUEUE_PORT) CRC error Position */
#define I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_PARITY (I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_PARITY_Val << I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_Pos) /* (I3CC_RESPONSE_QUEUE_PORT) Parity error Position */
#define I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_FRAME (I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_FRAME_Val << I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_Pos) /* (I3CC_RESPONSE_QUEUE_PORT) Frame error Position */
#define I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_ADDR_HEADER (I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_ADDR_HEADER_Val << I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_Pos) /* (I3CC_RESPONSE_QUEUE_PORT) Address header error Position */
#define I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_NACK (I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_NACK_Val << I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_Pos) /* (I3CC_RESPONSE_QUEUE_PORT) Address NACK'ed or Dynamic Address Assignment NACK'ed Position */
#define I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_OVL (I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_OVL_Val << I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_Pos) /* (I3CC_RESPONSE_QUEUE_PORT) Receive overflow or transfer underflow error Position */
#define I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_ABORTED (I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_ABORTED_Val << I3CC_RESPONSE_QUEUE_PORT_ERR_STATUS_Pos) /* (I3CC_RESPONSE_QUEUE_PORT) Aborted Position */
#define I3CC_RESPONSE_QUEUE_PORT_Msk          _UINT32_(0xFF00FFFF)                                 /* (I3CC_RESPONSE_QUEUE_PORT) Register Mask  */


/* -------- I3CC_XFER_DATA_PORT : (I3CC Offset: 0xC8) (R/W 32) Transfer Data Port Register -------- */
#define I3CC_XFER_DATA_PORT_RESETVALUE        _UINT32_(0x00)                                       /*  (I3CC_XFER_DATA_PORT) Transfer Data Port Register  Reset Value */

#define I3CC_XFER_DATA_PORT_DATA_Pos          _UINT32_(0)                                          /* (I3CC_XFER_DATA_PORT) 32-bit Data Position */
#define I3CC_XFER_DATA_PORT_DATA_Msk          (_UINT32_(0xFFFFFFFF) << I3CC_XFER_DATA_PORT_DATA_Pos) /* (I3CC_XFER_DATA_PORT) 32-bit Data Mask */
#define I3CC_XFER_DATA_PORT_DATA(value)       (I3CC_XFER_DATA_PORT_DATA_Msk & (_UINT32_(value) << I3CC_XFER_DATA_PORT_DATA_Pos)) /* Assignment of value for DATA in the I3CC_XFER_DATA_PORT register */
#define I3CC_XFER_DATA_PORT_Msk               _UINT32_(0xFFFFFFFF)                                 /* (I3CC_XFER_DATA_PORT) Register Mask  */


/* -------- I3CC_IBI_PORT : (I3CC Offset: 0xCC) ( R/ 32) IBI Port Register -------- */
#define I3CC_IBI_PORT_RESETVALUE              _UINT32_(0x00)                                       /*  (I3CC_IBI_PORT) IBI Port Register  Reset Value */

#define I3CC_IBI_PORT_IBI_DATA_Pos            _UINT32_(0)                                          /* (I3CC_IBI_PORT) Data Read from IBI Data Buffer Position */
#define I3CC_IBI_PORT_IBI_DATA_Msk            (_UINT32_(0xFFFFFFFF) << I3CC_IBI_PORT_IBI_DATA_Pos) /* (I3CC_IBI_PORT) Data Read from IBI Data Buffer Mask */
#define I3CC_IBI_PORT_IBI_DATA(value)         (I3CC_IBI_PORT_IBI_DATA_Msk & (_UINT32_(value) << I3CC_IBI_PORT_IBI_DATA_Pos)) /* Assignment of value for IBI_DATA in the I3CC_IBI_PORT register */
#define I3CC_IBI_PORT_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (I3CC_IBI_PORT) Register Mask  */


/* -------- I3CC_QUEUE_THLD_CTRL : (I3CC Offset: 0xD0) (R/W 32) Queue Threshold Control Register -------- */
#define I3CC_QUEUE_THLD_CTRL_RESETVALUE       _UINT32_(0x1000101)                                  /*  (I3CC_QUEUE_THLD_CTRL) Queue Threshold Control Register  Reset Value */

#define I3CC_QUEUE_THLD_CTRL_CMD_EMPTY_BUF_THLD_Pos _UINT32_(0)                                          /* (I3CC_QUEUE_THLD_CTRL) Command Ready Buffer Threshold Position */
#define I3CC_QUEUE_THLD_CTRL_CMD_EMPTY_BUF_THLD_Msk (_UINT32_(0xFF) << I3CC_QUEUE_THLD_CTRL_CMD_EMPTY_BUF_THLD_Pos) /* (I3CC_QUEUE_THLD_CTRL) Command Ready Buffer Threshold Mask */
#define I3CC_QUEUE_THLD_CTRL_CMD_EMPTY_BUF_THLD(value) (I3CC_QUEUE_THLD_CTRL_CMD_EMPTY_BUF_THLD_Msk & (_UINT32_(value) << I3CC_QUEUE_THLD_CTRL_CMD_EMPTY_BUF_THLD_Pos)) /* Assignment of value for CMD_EMPTY_BUF_THLD in the I3CC_QUEUE_THLD_CTRL register */
#define   I3CC_QUEUE_THLD_CTRL_CMD_EMPTY_BUF_THLD_0_Val _UINT32_(0x0)                                        /* (I3CC_QUEUE_THLD_CTRL) Interrupt is issued when command queue is completely empty.  */
#define I3CC_QUEUE_THLD_CTRL_CMD_EMPTY_BUF_THLD_0 (I3CC_QUEUE_THLD_CTRL_CMD_EMPTY_BUF_THLD_0_Val << I3CC_QUEUE_THLD_CTRL_CMD_EMPTY_BUF_THLD_Pos) /* (I3CC_QUEUE_THLD_CTRL) Interrupt is issued when command queue is completely empty. Position */
#define I3CC_QUEUE_THLD_CTRL_RESP_BUF_THLD_Pos _UINT32_(8)                                          /* (I3CC_QUEUE_THLD_CTRL) Response Ready Buffer Threshold Position */
#define I3CC_QUEUE_THLD_CTRL_RESP_BUF_THLD_Msk (_UINT32_(0xFF) << I3CC_QUEUE_THLD_CTRL_RESP_BUF_THLD_Pos) /* (I3CC_QUEUE_THLD_CTRL) Response Ready Buffer Threshold Mask */
#define I3CC_QUEUE_THLD_CTRL_RESP_BUF_THLD(value) (I3CC_QUEUE_THLD_CTRL_RESP_BUF_THLD_Msk & (_UINT32_(value) << I3CC_QUEUE_THLD_CTRL_RESP_BUF_THLD_Pos)) /* Assignment of value for RESP_BUF_THLD in the I3CC_QUEUE_THLD_CTRL register */
#define   I3CC_QUEUE_THLD_CTRL_RESP_BUF_THLD_0_Val _UINT32_(0x0)                                        /* (I3CC_QUEUE_THLD_CTRL) Interrupt is triggered when response queue contains 1 entry (32-bit word).  */
#define I3CC_QUEUE_THLD_CTRL_RESP_BUF_THLD_0  (I3CC_QUEUE_THLD_CTRL_RESP_BUF_THLD_0_Val << I3CC_QUEUE_THLD_CTRL_RESP_BUF_THLD_Pos) /* (I3CC_QUEUE_THLD_CTRL) Interrupt is triggered when response queue contains 1 entry (32-bit word). Position */
#define I3CC_QUEUE_THLD_CTRL_IBI_DATA_SEGMENT_SIZE_Pos _UINT32_(16)                                         /* (I3CC_QUEUE_THLD_CTRL) IBI Data Segment Size Position */
#define I3CC_QUEUE_THLD_CTRL_IBI_DATA_SEGMENT_SIZE_Msk (_UINT32_(0xFF) << I3CC_QUEUE_THLD_CTRL_IBI_DATA_SEGMENT_SIZE_Pos) /* (I3CC_QUEUE_THLD_CTRL) IBI Data Segment Size Mask */
#define I3CC_QUEUE_THLD_CTRL_IBI_DATA_SEGMENT_SIZE(value) (I3CC_QUEUE_THLD_CTRL_IBI_DATA_SEGMENT_SIZE_Msk & (_UINT32_(value) << I3CC_QUEUE_THLD_CTRL_IBI_DATA_SEGMENT_SIZE_Pos)) /* Assignment of value for IBI_DATA_SEGMENT_SIZE in the I3CC_QUEUE_THLD_CTRL register */
#define I3CC_QUEUE_THLD_CTRL_IBI_STATUS_THLD_Pos _UINT32_(24)                                         /* (I3CC_QUEUE_THLD_CTRL) IBI Status Threshold Position */
#define I3CC_QUEUE_THLD_CTRL_IBI_STATUS_THLD_Msk (_UINT32_(0xFF) << I3CC_QUEUE_THLD_CTRL_IBI_STATUS_THLD_Pos) /* (I3CC_QUEUE_THLD_CTRL) IBI Status Threshold Mask */
#define I3CC_QUEUE_THLD_CTRL_IBI_STATUS_THLD(value) (I3CC_QUEUE_THLD_CTRL_IBI_STATUS_THLD_Msk & (_UINT32_(value) << I3CC_QUEUE_THLD_CTRL_IBI_STATUS_THLD_Pos)) /* Assignment of value for IBI_STATUS_THLD in the I3CC_QUEUE_THLD_CTRL register */
#define   I3CC_QUEUE_THLD_CTRL_IBI_STATUS_THLD_0_Val _UINT32_(0x0)                                        /* (I3CC_QUEUE_THLD_CTRL) Interrupt is triggered when the outstanding IBI status count in the IBI queue reaches 1 or above.  */
#define I3CC_QUEUE_THLD_CTRL_IBI_STATUS_THLD_0 (I3CC_QUEUE_THLD_CTRL_IBI_STATUS_THLD_0_Val << I3CC_QUEUE_THLD_CTRL_IBI_STATUS_THLD_Pos) /* (I3CC_QUEUE_THLD_CTRL) Interrupt is triggered when the outstanding IBI status count in the IBI queue reaches 1 or above. Position */
#define I3CC_QUEUE_THLD_CTRL_Msk              _UINT32_(0xFFFFFFFF)                                 /* (I3CC_QUEUE_THLD_CTRL) Register Mask  */


/* -------- I3CC_DATA_BUFFER_THLD_CTRL : (I3CC Offset: 0xD4) (R/W 32) Transfer Data Buffer Threshold Control Register -------- */
#define I3CC_DATA_BUFFER_THLD_CTRL_RESETVALUE _UINT32_(0x1010101)                                  /*  (I3CC_DATA_BUFFER_THLD_CTRL) Transfer Data Buffer Threshold Control Register  Reset Value */

#define I3CC_DATA_BUFFER_THLD_CTRL_TX_BUF_THLD_Pos _UINT32_(0)                                          /* (I3CC_DATA_BUFFER_THLD_CTRL) Transmit Buffer Threshold Position */
#define I3CC_DATA_BUFFER_THLD_CTRL_TX_BUF_THLD_Msk (_UINT32_(0x7) << I3CC_DATA_BUFFER_THLD_CTRL_TX_BUF_THLD_Pos) /* (I3CC_DATA_BUFFER_THLD_CTRL) Transmit Buffer Threshold Mask */
#define I3CC_DATA_BUFFER_THLD_CTRL_TX_BUF_THLD(value) (I3CC_DATA_BUFFER_THLD_CTRL_TX_BUF_THLD_Msk & (_UINT32_(value) << I3CC_DATA_BUFFER_THLD_CTRL_TX_BUF_THLD_Pos)) /* Assignment of value for TX_BUF_THLD in the I3CC_DATA_BUFFER_THLD_CTRL register */
#define   I3CC_DATA_BUFFER_THLD_CTRL_TX_BUF_THLD_1_ENTRY_Val _UINT32_(0x0)                                        /* (I3CC_DATA_BUFFER_THLD_CTRL) 1 available FIFO entry  */
#define   I3CC_DATA_BUFFER_THLD_CTRL_TX_BUF_THLD_4_ENTRIES_Val _UINT32_(0x1)                                        /* (I3CC_DATA_BUFFER_THLD_CTRL) 4 available FIFO entries  */
#define   I3CC_DATA_BUFFER_THLD_CTRL_TX_BUF_THLD_8_ENTRIES_Val _UINT32_(0x2)                                        /* (I3CC_DATA_BUFFER_THLD_CTRL) 8 available FIFO entries  */
#define   I3CC_DATA_BUFFER_THLD_CTRL_TX_BUF_THLD_16_ENTRIES_Val _UINT32_(0x3)                                        /* (I3CC_DATA_BUFFER_THLD_CTRL) 16 available FIFO entries  */
#define   I3CC_DATA_BUFFER_THLD_CTRL_TX_BUF_THLD_32_ENTRIES_Val _UINT32_(0x4)                                        /* (I3CC_DATA_BUFFER_THLD_CTRL) 32 available FIFO entries  */
#define   I3CC_DATA_BUFFER_THLD_CTRL_TX_BUF_THLD_64_ENTRIES_Val _UINT32_(0x5)                                        /* (I3CC_DATA_BUFFER_THLD_CTRL) 64 available FIFO entries  */
#define I3CC_DATA_BUFFER_THLD_CTRL_TX_BUF_THLD_1_ENTRY (I3CC_DATA_BUFFER_THLD_CTRL_TX_BUF_THLD_1_ENTRY_Val << I3CC_DATA_BUFFER_THLD_CTRL_TX_BUF_THLD_Pos) /* (I3CC_DATA_BUFFER_THLD_CTRL) 1 available FIFO entry Position */
#define I3CC_DATA_BUFFER_THLD_CTRL_TX_BUF_THLD_4_ENTRIES (I3CC_DATA_BUFFER_THLD_CTRL_TX_BUF_THLD_4_ENTRIES_Val << I3CC_DATA_BUFFER_THLD_CTRL_TX_BUF_THLD_Pos) /* (I3CC_DATA_BUFFER_THLD_CTRL) 4 available FIFO entries Position */
#define I3CC_DATA_BUFFER_THLD_CTRL_TX_BUF_THLD_8_ENTRIES (I3CC_DATA_BUFFER_THLD_CTRL_TX_BUF_THLD_8_ENTRIES_Val << I3CC_DATA_BUFFER_THLD_CTRL_TX_BUF_THLD_Pos) /* (I3CC_DATA_BUFFER_THLD_CTRL) 8 available FIFO entries Position */
#define I3CC_DATA_BUFFER_THLD_CTRL_TX_BUF_THLD_16_ENTRIES (I3CC_DATA_BUFFER_THLD_CTRL_TX_BUF_THLD_16_ENTRIES_Val << I3CC_DATA_BUFFER_THLD_CTRL_TX_BUF_THLD_Pos) /* (I3CC_DATA_BUFFER_THLD_CTRL) 16 available FIFO entries Position */
#define I3CC_DATA_BUFFER_THLD_CTRL_TX_BUF_THLD_32_ENTRIES (I3CC_DATA_BUFFER_THLD_CTRL_TX_BUF_THLD_32_ENTRIES_Val << I3CC_DATA_BUFFER_THLD_CTRL_TX_BUF_THLD_Pos) /* (I3CC_DATA_BUFFER_THLD_CTRL) 32 available FIFO entries Position */
#define I3CC_DATA_BUFFER_THLD_CTRL_TX_BUF_THLD_64_ENTRIES (I3CC_DATA_BUFFER_THLD_CTRL_TX_BUF_THLD_64_ENTRIES_Val << I3CC_DATA_BUFFER_THLD_CTRL_TX_BUF_THLD_Pos) /* (I3CC_DATA_BUFFER_THLD_CTRL) 64 available FIFO entries Position */
#define I3CC_DATA_BUFFER_THLD_CTRL_RX_BUF_THLD_Pos _UINT32_(8)                                          /* (I3CC_DATA_BUFFER_THLD_CTRL) Receive Buffer Threshold Position */
#define I3CC_DATA_BUFFER_THLD_CTRL_RX_BUF_THLD_Msk (_UINT32_(0x7) << I3CC_DATA_BUFFER_THLD_CTRL_RX_BUF_THLD_Pos) /* (I3CC_DATA_BUFFER_THLD_CTRL) Receive Buffer Threshold Mask */
#define I3CC_DATA_BUFFER_THLD_CTRL_RX_BUF_THLD(value) (I3CC_DATA_BUFFER_THLD_CTRL_RX_BUF_THLD_Msk & (_UINT32_(value) << I3CC_DATA_BUFFER_THLD_CTRL_RX_BUF_THLD_Pos)) /* Assignment of value for RX_BUF_THLD in the I3CC_DATA_BUFFER_THLD_CTRL register */
#define   I3CC_DATA_BUFFER_THLD_CTRL_RX_BUF_THLD_1_WORD_Val _UINT32_(0x0)                                        /* (I3CC_DATA_BUFFER_THLD_CTRL) 1 received data  */
#define   I3CC_DATA_BUFFER_THLD_CTRL_RX_BUF_THLD_4_WORDS_Val _UINT32_(0x1)                                        /* (I3CC_DATA_BUFFER_THLD_CTRL) 4 received data  */
#define   I3CC_DATA_BUFFER_THLD_CTRL_RX_BUF_THLD_8_WORDS_Val _UINT32_(0x2)                                        /* (I3CC_DATA_BUFFER_THLD_CTRL) 8 received data  */
#define   I3CC_DATA_BUFFER_THLD_CTRL_RX_BUF_THLD_16_WORDS_Val _UINT32_(0x3)                                        /* (I3CC_DATA_BUFFER_THLD_CTRL) 16 received data  */
#define   I3CC_DATA_BUFFER_THLD_CTRL_RX_BUF_THLD_32_WORDS_Val _UINT32_(0x4)                                        /* (I3CC_DATA_BUFFER_THLD_CTRL) 32 received data  */
#define   I3CC_DATA_BUFFER_THLD_CTRL_RX_BUF_THLD_64_WORDS_Val _UINT32_(0x5)                                        /* (I3CC_DATA_BUFFER_THLD_CTRL) 64 received data  */
#define I3CC_DATA_BUFFER_THLD_CTRL_RX_BUF_THLD_1_WORD (I3CC_DATA_BUFFER_THLD_CTRL_RX_BUF_THLD_1_WORD_Val << I3CC_DATA_BUFFER_THLD_CTRL_RX_BUF_THLD_Pos) /* (I3CC_DATA_BUFFER_THLD_CTRL) 1 received data Position */
#define I3CC_DATA_BUFFER_THLD_CTRL_RX_BUF_THLD_4_WORDS (I3CC_DATA_BUFFER_THLD_CTRL_RX_BUF_THLD_4_WORDS_Val << I3CC_DATA_BUFFER_THLD_CTRL_RX_BUF_THLD_Pos) /* (I3CC_DATA_BUFFER_THLD_CTRL) 4 received data Position */
#define I3CC_DATA_BUFFER_THLD_CTRL_RX_BUF_THLD_8_WORDS (I3CC_DATA_BUFFER_THLD_CTRL_RX_BUF_THLD_8_WORDS_Val << I3CC_DATA_BUFFER_THLD_CTRL_RX_BUF_THLD_Pos) /* (I3CC_DATA_BUFFER_THLD_CTRL) 8 received data Position */
#define I3CC_DATA_BUFFER_THLD_CTRL_RX_BUF_THLD_16_WORDS (I3CC_DATA_BUFFER_THLD_CTRL_RX_BUF_THLD_16_WORDS_Val << I3CC_DATA_BUFFER_THLD_CTRL_RX_BUF_THLD_Pos) /* (I3CC_DATA_BUFFER_THLD_CTRL) 16 received data Position */
#define I3CC_DATA_BUFFER_THLD_CTRL_RX_BUF_THLD_32_WORDS (I3CC_DATA_BUFFER_THLD_CTRL_RX_BUF_THLD_32_WORDS_Val << I3CC_DATA_BUFFER_THLD_CTRL_RX_BUF_THLD_Pos) /* (I3CC_DATA_BUFFER_THLD_CTRL) 32 received data Position */
#define I3CC_DATA_BUFFER_THLD_CTRL_RX_BUF_THLD_64_WORDS (I3CC_DATA_BUFFER_THLD_CTRL_RX_BUF_THLD_64_WORDS_Val << I3CC_DATA_BUFFER_THLD_CTRL_RX_BUF_THLD_Pos) /* (I3CC_DATA_BUFFER_THLD_CTRL) 64 received data Position */
#define I3CC_DATA_BUFFER_THLD_CTRL_TX_START_THLD_Pos _UINT32_(16)                                         /* (I3CC_DATA_BUFFER_THLD_CTRL) Transmit (Transfer) Start Threshold Position */
#define I3CC_DATA_BUFFER_THLD_CTRL_TX_START_THLD_Msk (_UINT32_(0x7) << I3CC_DATA_BUFFER_THLD_CTRL_TX_START_THLD_Pos) /* (I3CC_DATA_BUFFER_THLD_CTRL) Transmit (Transfer) Start Threshold Mask */
#define I3CC_DATA_BUFFER_THLD_CTRL_TX_START_THLD(value) (I3CC_DATA_BUFFER_THLD_CTRL_TX_START_THLD_Msk & (_UINT32_(value) << I3CC_DATA_BUFFER_THLD_CTRL_TX_START_THLD_Pos)) /* Assignment of value for TX_START_THLD in the I3CC_DATA_BUFFER_THLD_CTRL register */
#define   I3CC_DATA_BUFFER_THLD_CTRL_TX_START_THLD_1_WORD_Val _UINT32_(0x0)                                        /* (I3CC_DATA_BUFFER_THLD_CTRL) 1 available transmit data  */
#define   I3CC_DATA_BUFFER_THLD_CTRL_TX_START_THLD_4_WORDS_Val _UINT32_(0x1)                                        /* (I3CC_DATA_BUFFER_THLD_CTRL) 4 available transmit data  */
#define   I3CC_DATA_BUFFER_THLD_CTRL_TX_START_THLD_8_WORDS_Val _UINT32_(0x2)                                        /* (I3CC_DATA_BUFFER_THLD_CTRL) 8 available transmit data  */
#define   I3CC_DATA_BUFFER_THLD_CTRL_TX_START_THLD_16_WORDS_Val _UINT32_(0x3)                                        /* (I3CC_DATA_BUFFER_THLD_CTRL) 16 available transmit data  */
#define   I3CC_DATA_BUFFER_THLD_CTRL_TX_START_THLD_32_WORDS_Val _UINT32_(0x4)                                        /* (I3CC_DATA_BUFFER_THLD_CTRL) 32 available transmit data  */
#define   I3CC_DATA_BUFFER_THLD_CTRL_TX_START_THLD_64_WORDS_Val _UINT32_(0x5)                                        /* (I3CC_DATA_BUFFER_THLD_CTRL) 64 available transmit data  */
#define I3CC_DATA_BUFFER_THLD_CTRL_TX_START_THLD_1_WORD (I3CC_DATA_BUFFER_THLD_CTRL_TX_START_THLD_1_WORD_Val << I3CC_DATA_BUFFER_THLD_CTRL_TX_START_THLD_Pos) /* (I3CC_DATA_BUFFER_THLD_CTRL) 1 available transmit data Position */
#define I3CC_DATA_BUFFER_THLD_CTRL_TX_START_THLD_4_WORDS (I3CC_DATA_BUFFER_THLD_CTRL_TX_START_THLD_4_WORDS_Val << I3CC_DATA_BUFFER_THLD_CTRL_TX_START_THLD_Pos) /* (I3CC_DATA_BUFFER_THLD_CTRL) 4 available transmit data Position */
#define I3CC_DATA_BUFFER_THLD_CTRL_TX_START_THLD_8_WORDS (I3CC_DATA_BUFFER_THLD_CTRL_TX_START_THLD_8_WORDS_Val << I3CC_DATA_BUFFER_THLD_CTRL_TX_START_THLD_Pos) /* (I3CC_DATA_BUFFER_THLD_CTRL) 8 available transmit data Position */
#define I3CC_DATA_BUFFER_THLD_CTRL_TX_START_THLD_16_WORDS (I3CC_DATA_BUFFER_THLD_CTRL_TX_START_THLD_16_WORDS_Val << I3CC_DATA_BUFFER_THLD_CTRL_TX_START_THLD_Pos) /* (I3CC_DATA_BUFFER_THLD_CTRL) 16 available transmit data Position */
#define I3CC_DATA_BUFFER_THLD_CTRL_TX_START_THLD_32_WORDS (I3CC_DATA_BUFFER_THLD_CTRL_TX_START_THLD_32_WORDS_Val << I3CC_DATA_BUFFER_THLD_CTRL_TX_START_THLD_Pos) /* (I3CC_DATA_BUFFER_THLD_CTRL) 32 available transmit data Position */
#define I3CC_DATA_BUFFER_THLD_CTRL_TX_START_THLD_64_WORDS (I3CC_DATA_BUFFER_THLD_CTRL_TX_START_THLD_64_WORDS_Val << I3CC_DATA_BUFFER_THLD_CTRL_TX_START_THLD_Pos) /* (I3CC_DATA_BUFFER_THLD_CTRL) 64 available transmit data Position */
#define I3CC_DATA_BUFFER_THLD_CTRL_RX_START_THLD_Pos _UINT32_(24)                                         /* (I3CC_DATA_BUFFER_THLD_CTRL) Receive Start Threshold Position */
#define I3CC_DATA_BUFFER_THLD_CTRL_RX_START_THLD_Msk (_UINT32_(0x7) << I3CC_DATA_BUFFER_THLD_CTRL_RX_START_THLD_Pos) /* (I3CC_DATA_BUFFER_THLD_CTRL) Receive Start Threshold Mask */
#define I3CC_DATA_BUFFER_THLD_CTRL_RX_START_THLD(value) (I3CC_DATA_BUFFER_THLD_CTRL_RX_START_THLD_Msk & (_UINT32_(value) << I3CC_DATA_BUFFER_THLD_CTRL_RX_START_THLD_Pos)) /* Assignment of value for RX_START_THLD in the I3CC_DATA_BUFFER_THLD_CTRL register */
#define   I3CC_DATA_BUFFER_THLD_CTRL_RX_START_THLD_1_ENTRY_Val _UINT32_(0x0)                                        /* (I3CC_DATA_BUFFER_THLD_CTRL) 1 available FIFO entry  */
#define   I3CC_DATA_BUFFER_THLD_CTRL_RX_START_THLD_4_ENTRIES_Val _UINT32_(0x1)                                        /* (I3CC_DATA_BUFFER_THLD_CTRL) 4 available FIFO entries  */
#define   I3CC_DATA_BUFFER_THLD_CTRL_RX_START_THLD_8_ENTRIES_Val _UINT32_(0x2)                                        /* (I3CC_DATA_BUFFER_THLD_CTRL) 8 available FIFO entries  */
#define   I3CC_DATA_BUFFER_THLD_CTRL_RX_START_THLD_16_ENTRIES_Val _UINT32_(0x3)                                        /* (I3CC_DATA_BUFFER_THLD_CTRL) 16 available FIFO entries  */
#define   I3CC_DATA_BUFFER_THLD_CTRL_RX_START_THLD_32_ENTRIES_Val _UINT32_(0x4)                                        /* (I3CC_DATA_BUFFER_THLD_CTRL) 32 available FIFO entries  */
#define   I3CC_DATA_BUFFER_THLD_CTRL_RX_START_THLD_64_ENTRIES_Val _UINT32_(0x5)                                        /* (I3CC_DATA_BUFFER_THLD_CTRL) 64 available FIFO entries  */
#define I3CC_DATA_BUFFER_THLD_CTRL_RX_START_THLD_1_ENTRY (I3CC_DATA_BUFFER_THLD_CTRL_RX_START_THLD_1_ENTRY_Val << I3CC_DATA_BUFFER_THLD_CTRL_RX_START_THLD_Pos) /* (I3CC_DATA_BUFFER_THLD_CTRL) 1 available FIFO entry Position */
#define I3CC_DATA_BUFFER_THLD_CTRL_RX_START_THLD_4_ENTRIES (I3CC_DATA_BUFFER_THLD_CTRL_RX_START_THLD_4_ENTRIES_Val << I3CC_DATA_BUFFER_THLD_CTRL_RX_START_THLD_Pos) /* (I3CC_DATA_BUFFER_THLD_CTRL) 4 available FIFO entries Position */
#define I3CC_DATA_BUFFER_THLD_CTRL_RX_START_THLD_8_ENTRIES (I3CC_DATA_BUFFER_THLD_CTRL_RX_START_THLD_8_ENTRIES_Val << I3CC_DATA_BUFFER_THLD_CTRL_RX_START_THLD_Pos) /* (I3CC_DATA_BUFFER_THLD_CTRL) 8 available FIFO entries Position */
#define I3CC_DATA_BUFFER_THLD_CTRL_RX_START_THLD_16_ENTRIES (I3CC_DATA_BUFFER_THLD_CTRL_RX_START_THLD_16_ENTRIES_Val << I3CC_DATA_BUFFER_THLD_CTRL_RX_START_THLD_Pos) /* (I3CC_DATA_BUFFER_THLD_CTRL) 16 available FIFO entries Position */
#define I3CC_DATA_BUFFER_THLD_CTRL_RX_START_THLD_32_ENTRIES (I3CC_DATA_BUFFER_THLD_CTRL_RX_START_THLD_32_ENTRIES_Val << I3CC_DATA_BUFFER_THLD_CTRL_RX_START_THLD_Pos) /* (I3CC_DATA_BUFFER_THLD_CTRL) 32 available FIFO entries Position */
#define I3CC_DATA_BUFFER_THLD_CTRL_RX_START_THLD_64_ENTRIES (I3CC_DATA_BUFFER_THLD_CTRL_RX_START_THLD_64_ENTRIES_Val << I3CC_DATA_BUFFER_THLD_CTRL_RX_START_THLD_Pos) /* (I3CC_DATA_BUFFER_THLD_CTRL) 64 available FIFO entries Position */
#define I3CC_DATA_BUFFER_THLD_CTRL_Msk        _UINT32_(0x07070707)                                 /* (I3CC_DATA_BUFFER_THLD_CTRL) Register Mask  */


/* -------- I3CC_QUEUE_SIZE : (I3CC Offset: 0xD8) ( R/ 32) Queue Size Register -------- */
#define I3CC_QUEUE_SIZE_RESETVALUE            _UINT32_(0x5051010)                                  /*  (I3CC_QUEUE_SIZE) Queue Size Register  Reset Value */

#define I3CC_QUEUE_SIZE_CR_QUEUE_SIZE_Pos     _UINT32_(0)                                          /* (I3CC_QUEUE_SIZE) Command/Response Queue Size Position */
#define I3CC_QUEUE_SIZE_CR_QUEUE_SIZE_Msk     (_UINT32_(0xFF) << I3CC_QUEUE_SIZE_CR_QUEUE_SIZE_Pos) /* (I3CC_QUEUE_SIZE) Command/Response Queue Size Mask */
#define I3CC_QUEUE_SIZE_CR_QUEUE_SIZE(value)  (I3CC_QUEUE_SIZE_CR_QUEUE_SIZE_Msk & (_UINT32_(value) << I3CC_QUEUE_SIZE_CR_QUEUE_SIZE_Pos)) /* Assignment of value for CR_QUEUE_SIZE in the I3CC_QUEUE_SIZE register */
#define I3CC_QUEUE_SIZE_IBI_STATUS_SIZE_Pos   _UINT32_(8)                                          /* (I3CC_QUEUE_SIZE) IBI Queue Size Position */
#define I3CC_QUEUE_SIZE_IBI_STATUS_SIZE_Msk   (_UINT32_(0xFF) << I3CC_QUEUE_SIZE_IBI_STATUS_SIZE_Pos) /* (I3CC_QUEUE_SIZE) IBI Queue Size Mask */
#define I3CC_QUEUE_SIZE_IBI_STATUS_SIZE(value) (I3CC_QUEUE_SIZE_IBI_STATUS_SIZE_Msk & (_UINT32_(value) << I3CC_QUEUE_SIZE_IBI_STATUS_SIZE_Pos)) /* Assignment of value for IBI_STATUS_SIZE in the I3CC_QUEUE_SIZE register */
#define I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_Pos _UINT32_(16)                                         /* (I3CC_QUEUE_SIZE) Receive Data Buffer Size Position */
#define I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_Msk (_UINT32_(0xFF) << I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_Pos) /* (I3CC_QUEUE_SIZE) Receive Data Buffer Size Mask */
#define I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE(value) (I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_Msk & (_UINT32_(value) << I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_Pos)) /* Assignment of value for RX_DATA_BUFFER_SIZE in the I3CC_QUEUE_SIZE register */
#define   I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_2_WORDS_Val _UINT32_(0x0)                                        /* (I3CC_QUEUE_SIZE) 2 32-bit words  */
#define   I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_4_WORDS_Val _UINT32_(0x1)                                        /* (I3CC_QUEUE_SIZE) 4 32-bit words  */
#define   I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_8_WORDS_Val _UINT32_(0x2)                                        /* (I3CC_QUEUE_SIZE) 8 32-bit words  */
#define   I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_16_WORDS_Val _UINT32_(0x3)                                        /* (I3CC_QUEUE_SIZE) 16 32-bit words  */
#define   I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_32_WORDS_Val _UINT32_(0x4)                                        /* (I3CC_QUEUE_SIZE) 32 32-bit words  */
#define   I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_64_WORDS_Val _UINT32_(0x5)                                        /* (I3CC_QUEUE_SIZE) 64 32-bit words  */
#define   I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_128_WORDS_Val _UINT32_(0x6)                                        /* (I3CC_QUEUE_SIZE) 128 32-bit words  */
#define   I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_256_WORDS_Val _UINT32_(0x7)                                        /* (I3CC_QUEUE_SIZE) 256 32-bit words  */
#define I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_2_WORDS (I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_2_WORDS_Val << I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_Pos) /* (I3CC_QUEUE_SIZE) 2 32-bit words Position */
#define I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_4_WORDS (I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_4_WORDS_Val << I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_Pos) /* (I3CC_QUEUE_SIZE) 4 32-bit words Position */
#define I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_8_WORDS (I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_8_WORDS_Val << I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_Pos) /* (I3CC_QUEUE_SIZE) 8 32-bit words Position */
#define I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_16_WORDS (I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_16_WORDS_Val << I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_Pos) /* (I3CC_QUEUE_SIZE) 16 32-bit words Position */
#define I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_32_WORDS (I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_32_WORDS_Val << I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_Pos) /* (I3CC_QUEUE_SIZE) 32 32-bit words Position */
#define I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_64_WORDS (I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_64_WORDS_Val << I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_Pos) /* (I3CC_QUEUE_SIZE) 64 32-bit words Position */
#define I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_128_WORDS (I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_128_WORDS_Val << I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_Pos) /* (I3CC_QUEUE_SIZE) 128 32-bit words Position */
#define I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_256_WORDS (I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_256_WORDS_Val << I3CC_QUEUE_SIZE_RX_DATA_BUFFER_SIZE_Pos) /* (I3CC_QUEUE_SIZE) 256 32-bit words Position */
#define I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_Pos _UINT32_(24)                                         /* (I3CC_QUEUE_SIZE) Transmit Data Buffer Size Position */
#define I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_Msk (_UINT32_(0xFF) << I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_Pos) /* (I3CC_QUEUE_SIZE) Transmit Data Buffer Size Mask */
#define I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE(value) (I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_Msk & (_UINT32_(value) << I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_Pos)) /* Assignment of value for TX_DATA_BUFFER_SIZE in the I3CC_QUEUE_SIZE register */
#define   I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_2_WORDS_Val _UINT32_(0x0)                                        /* (I3CC_QUEUE_SIZE) 2 32-bit words  */
#define   I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_4_WORDS_Val _UINT32_(0x1)                                        /* (I3CC_QUEUE_SIZE) 4 32-bit words  */
#define   I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_8_WORDS_Val _UINT32_(0x2)                                        /* (I3CC_QUEUE_SIZE) 8 32-bit words  */
#define   I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_16_WORDS_Val _UINT32_(0x3)                                        /* (I3CC_QUEUE_SIZE) 16 32-bit words  */
#define   I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_32_WORDS_Val _UINT32_(0x4)                                        /* (I3CC_QUEUE_SIZE) 32 32-bit words  */
#define   I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_64_WORDS_Val _UINT32_(0x5)                                        /* (I3CC_QUEUE_SIZE) 64 32-bit words  */
#define   I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_128_WORDS_Val _UINT32_(0x6)                                        /* (I3CC_QUEUE_SIZE) 128 32-bit words  */
#define   I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_256_WORDS_Val _UINT32_(0x7)                                        /* (I3CC_QUEUE_SIZE) 256 32-bit words  */
#define I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_2_WORDS (I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_2_WORDS_Val << I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_Pos) /* (I3CC_QUEUE_SIZE) 2 32-bit words Position */
#define I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_4_WORDS (I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_4_WORDS_Val << I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_Pos) /* (I3CC_QUEUE_SIZE) 4 32-bit words Position */
#define I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_8_WORDS (I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_8_WORDS_Val << I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_Pos) /* (I3CC_QUEUE_SIZE) 8 32-bit words Position */
#define I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_16_WORDS (I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_16_WORDS_Val << I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_Pos) /* (I3CC_QUEUE_SIZE) 16 32-bit words Position */
#define I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_32_WORDS (I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_32_WORDS_Val << I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_Pos) /* (I3CC_QUEUE_SIZE) 32 32-bit words Position */
#define I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_64_WORDS (I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_64_WORDS_Val << I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_Pos) /* (I3CC_QUEUE_SIZE) 64 32-bit words Position */
#define I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_128_WORDS (I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_128_WORDS_Val << I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_Pos) /* (I3CC_QUEUE_SIZE) 128 32-bit words Position */
#define I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_256_WORDS (I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_256_WORDS_Val << I3CC_QUEUE_SIZE_TX_DATA_BUFFER_SIZE_Pos) /* (I3CC_QUEUE_SIZE) 256 32-bit words Position */
#define I3CC_QUEUE_SIZE_Msk                   _UINT32_(0xFFFFFFFF)                                 /* (I3CC_QUEUE_SIZE) Register Mask  */


/* -------- I3CC_PIO_INTR_STATUS : (I3CC Offset: 0xE0) (R/W 32) PIO Interrupt Status Register -------- */
#define I3CC_PIO_INTR_STATUS_RESETVALUE       _UINT32_(0x00)                                       /*  (I3CC_PIO_INTR_STATUS) PIO Interrupt Status Register  Reset Value */

#define I3CC_PIO_INTR_STATUS_TX_THLD_STAT_Pos _UINT32_(0)                                          /* (I3CC_PIO_INTR_STATUS) Transmit Data Buffer Threshold Status Position */
#define I3CC_PIO_INTR_STATUS_TX_THLD_STAT_Msk (_UINT32_(0x1) << I3CC_PIO_INTR_STATUS_TX_THLD_STAT_Pos) /* (I3CC_PIO_INTR_STATUS) Transmit Data Buffer Threshold Status Mask */
#define I3CC_PIO_INTR_STATUS_TX_THLD_STAT(value) (I3CC_PIO_INTR_STATUS_TX_THLD_STAT_Msk & (_UINT32_(value) << I3CC_PIO_INTR_STATUS_TX_THLD_STAT_Pos)) /* Assignment of value for TX_THLD_STAT in the I3CC_PIO_INTR_STATUS register */
#define I3CC_PIO_INTR_STATUS_RX_THLD_STAT_Pos _UINT32_(1)                                          /* (I3CC_PIO_INTR_STATUS) Receive Data Buffer Threshold Status Position */
#define I3CC_PIO_INTR_STATUS_RX_THLD_STAT_Msk (_UINT32_(0x1) << I3CC_PIO_INTR_STATUS_RX_THLD_STAT_Pos) /* (I3CC_PIO_INTR_STATUS) Receive Data Buffer Threshold Status Mask */
#define I3CC_PIO_INTR_STATUS_RX_THLD_STAT(value) (I3CC_PIO_INTR_STATUS_RX_THLD_STAT_Msk & (_UINT32_(value) << I3CC_PIO_INTR_STATUS_RX_THLD_STAT_Pos)) /* Assignment of value for RX_THLD_STAT in the I3CC_PIO_INTR_STATUS register */
#define I3CC_PIO_INTR_STATUS_IBI_STATUS_THLD_STAT_Pos _UINT32_(2)                                          /* (I3CC_PIO_INTR_STATUS) IBI Status Threshold Status Position */
#define I3CC_PIO_INTR_STATUS_IBI_STATUS_THLD_STAT_Msk (_UINT32_(0x1) << I3CC_PIO_INTR_STATUS_IBI_STATUS_THLD_STAT_Pos) /* (I3CC_PIO_INTR_STATUS) IBI Status Threshold Status Mask */
#define I3CC_PIO_INTR_STATUS_IBI_STATUS_THLD_STAT(value) (I3CC_PIO_INTR_STATUS_IBI_STATUS_THLD_STAT_Msk & (_UINT32_(value) << I3CC_PIO_INTR_STATUS_IBI_STATUS_THLD_STAT_Pos)) /* Assignment of value for IBI_STATUS_THLD_STAT in the I3CC_PIO_INTR_STATUS register */
#define I3CC_PIO_INTR_STATUS_CMD_QUEUE_READY_STAT_Pos _UINT32_(3)                                          /* (I3CC_PIO_INTR_STATUS) Command Queue Ready Status Position */
#define I3CC_PIO_INTR_STATUS_CMD_QUEUE_READY_STAT_Msk (_UINT32_(0x1) << I3CC_PIO_INTR_STATUS_CMD_QUEUE_READY_STAT_Pos) /* (I3CC_PIO_INTR_STATUS) Command Queue Ready Status Mask */
#define I3CC_PIO_INTR_STATUS_CMD_QUEUE_READY_STAT(value) (I3CC_PIO_INTR_STATUS_CMD_QUEUE_READY_STAT_Msk & (_UINT32_(value) << I3CC_PIO_INTR_STATUS_CMD_QUEUE_READY_STAT_Pos)) /* Assignment of value for CMD_QUEUE_READY_STAT in the I3CC_PIO_INTR_STATUS register */
#define I3CC_PIO_INTR_STATUS_RESP_READY_STAT_Pos _UINT32_(4)                                          /* (I3CC_PIO_INTR_STATUS) Response Ready Status Position */
#define I3CC_PIO_INTR_STATUS_RESP_READY_STAT_Msk (_UINT32_(0x1) << I3CC_PIO_INTR_STATUS_RESP_READY_STAT_Pos) /* (I3CC_PIO_INTR_STATUS) Response Ready Status Mask */
#define I3CC_PIO_INTR_STATUS_RESP_READY_STAT(value) (I3CC_PIO_INTR_STATUS_RESP_READY_STAT_Msk & (_UINT32_(value) << I3CC_PIO_INTR_STATUS_RESP_READY_STAT_Pos)) /* Assignment of value for RESP_READY_STAT in the I3CC_PIO_INTR_STATUS register */
#define I3CC_PIO_INTR_STATUS_TRANSFER_ABORT_STAT_Pos _UINT32_(5)                                          /* (I3CC_PIO_INTR_STATUS) Transfer Abort Status Position */
#define I3CC_PIO_INTR_STATUS_TRANSFER_ABORT_STAT_Msk (_UINT32_(0x1) << I3CC_PIO_INTR_STATUS_TRANSFER_ABORT_STAT_Pos) /* (I3CC_PIO_INTR_STATUS) Transfer Abort Status Mask */
#define I3CC_PIO_INTR_STATUS_TRANSFER_ABORT_STAT(value) (I3CC_PIO_INTR_STATUS_TRANSFER_ABORT_STAT_Msk & (_UINT32_(value) << I3CC_PIO_INTR_STATUS_TRANSFER_ABORT_STAT_Pos)) /* Assignment of value for TRANSFER_ABORT_STAT in the I3CC_PIO_INTR_STATUS register */
#define I3CC_PIO_INTR_STATUS_TRANSFER_ERR_STAT_Pos _UINT32_(9)                                          /* (I3CC_PIO_INTR_STATUS) Transfer Error Status Position */
#define I3CC_PIO_INTR_STATUS_TRANSFER_ERR_STAT_Msk (_UINT32_(0x1) << I3CC_PIO_INTR_STATUS_TRANSFER_ERR_STAT_Pos) /* (I3CC_PIO_INTR_STATUS) Transfer Error Status Mask */
#define I3CC_PIO_INTR_STATUS_TRANSFER_ERR_STAT(value) (I3CC_PIO_INTR_STATUS_TRANSFER_ERR_STAT_Msk & (_UINT32_(value) << I3CC_PIO_INTR_STATUS_TRANSFER_ERR_STAT_Pos)) /* Assignment of value for TRANSFER_ERR_STAT in the I3CC_PIO_INTR_STATUS register */
#define I3CC_PIO_INTR_STATUS_Msk              _UINT32_(0x0000023F)                                 /* (I3CC_PIO_INTR_STATUS) Register Mask  */


/* -------- I3CC_PIO_INTR_STATUS_ENABLE : (I3CC Offset: 0xE4) (R/W 32) PIO Interrupt Status Enable Register -------- */
#define I3CC_PIO_INTR_STATUS_ENABLE_RESETVALUE _UINT32_(0x00)                                       /*  (I3CC_PIO_INTR_STATUS_ENABLE) PIO Interrupt Status Enable Register  Reset Value */

#define I3CC_PIO_INTR_STATUS_ENABLE_TX_THLD_STAT_EN_Pos _UINT32_(0)                                          /* (I3CC_PIO_INTR_STATUS_ENABLE) Transmit Data Buffer Threshold Status Enable Position */
#define I3CC_PIO_INTR_STATUS_ENABLE_TX_THLD_STAT_EN_Msk (_UINT32_(0x1) << I3CC_PIO_INTR_STATUS_ENABLE_TX_THLD_STAT_EN_Pos) /* (I3CC_PIO_INTR_STATUS_ENABLE) Transmit Data Buffer Threshold Status Enable Mask */
#define I3CC_PIO_INTR_STATUS_ENABLE_TX_THLD_STAT_EN(value) (I3CC_PIO_INTR_STATUS_ENABLE_TX_THLD_STAT_EN_Msk & (_UINT32_(value) << I3CC_PIO_INTR_STATUS_ENABLE_TX_THLD_STAT_EN_Pos)) /* Assignment of value for TX_THLD_STAT_EN in the I3CC_PIO_INTR_STATUS_ENABLE register */
#define   I3CC_PIO_INTR_STATUS_ENABLE_TX_THLD_STAT_EN_0_Val _UINT32_(0x0)                                        /* (I3CC_PIO_INTR_STATUS_ENABLE) Disables interrupt status logging for TX_THLD_STAT.  */
#define   I3CC_PIO_INTR_STATUS_ENABLE_TX_THLD_STAT_EN_1_Val _UINT32_(0x1)                                        /* (I3CC_PIO_INTR_STATUS_ENABLE) Enables interrupt status logging for TX_THLD_STAT.  */
#define I3CC_PIO_INTR_STATUS_ENABLE_TX_THLD_STAT_EN_0 (I3CC_PIO_INTR_STATUS_ENABLE_TX_THLD_STAT_EN_0_Val << I3CC_PIO_INTR_STATUS_ENABLE_TX_THLD_STAT_EN_Pos) /* (I3CC_PIO_INTR_STATUS_ENABLE) Disables interrupt status logging for TX_THLD_STAT. Position */
#define I3CC_PIO_INTR_STATUS_ENABLE_TX_THLD_STAT_EN_1 (I3CC_PIO_INTR_STATUS_ENABLE_TX_THLD_STAT_EN_1_Val << I3CC_PIO_INTR_STATUS_ENABLE_TX_THLD_STAT_EN_Pos) /* (I3CC_PIO_INTR_STATUS_ENABLE) Enables interrupt status logging for TX_THLD_STAT. Position */
#define I3CC_PIO_INTR_STATUS_ENABLE_RX_THLD_STAT_EN_Pos _UINT32_(1)                                          /* (I3CC_PIO_INTR_STATUS_ENABLE) Receive Data Buffer Threshold Status Enable Position */
#define I3CC_PIO_INTR_STATUS_ENABLE_RX_THLD_STAT_EN_Msk (_UINT32_(0x1) << I3CC_PIO_INTR_STATUS_ENABLE_RX_THLD_STAT_EN_Pos) /* (I3CC_PIO_INTR_STATUS_ENABLE) Receive Data Buffer Threshold Status Enable Mask */
#define I3CC_PIO_INTR_STATUS_ENABLE_RX_THLD_STAT_EN(value) (I3CC_PIO_INTR_STATUS_ENABLE_RX_THLD_STAT_EN_Msk & (_UINT32_(value) << I3CC_PIO_INTR_STATUS_ENABLE_RX_THLD_STAT_EN_Pos)) /* Assignment of value for RX_THLD_STAT_EN in the I3CC_PIO_INTR_STATUS_ENABLE register */
#define   I3CC_PIO_INTR_STATUS_ENABLE_RX_THLD_STAT_EN_0_Val _UINT32_(0x0)                                        /* (I3CC_PIO_INTR_STATUS_ENABLE) Disables interrupt status logging for RX_THLD_STAT.  */
#define   I3CC_PIO_INTR_STATUS_ENABLE_RX_THLD_STAT_EN_1_Val _UINT32_(0x1)                                        /* (I3CC_PIO_INTR_STATUS_ENABLE) Enables interrupt status logging for RX_THLD_STAT.  */
#define I3CC_PIO_INTR_STATUS_ENABLE_RX_THLD_STAT_EN_0 (I3CC_PIO_INTR_STATUS_ENABLE_RX_THLD_STAT_EN_0_Val << I3CC_PIO_INTR_STATUS_ENABLE_RX_THLD_STAT_EN_Pos) /* (I3CC_PIO_INTR_STATUS_ENABLE) Disables interrupt status logging for RX_THLD_STAT. Position */
#define I3CC_PIO_INTR_STATUS_ENABLE_RX_THLD_STAT_EN_1 (I3CC_PIO_INTR_STATUS_ENABLE_RX_THLD_STAT_EN_1_Val << I3CC_PIO_INTR_STATUS_ENABLE_RX_THLD_STAT_EN_Pos) /* (I3CC_PIO_INTR_STATUS_ENABLE) Enables interrupt status logging for RX_THLD_STAT. Position */
#define I3CC_PIO_INTR_STATUS_ENABLE_IBI_STATUS_THLD_STAT_EN_Pos _UINT32_(2)                                          /* (I3CC_PIO_INTR_STATUS_ENABLE) IBI Status Threshold Status Enable Position */
#define I3CC_PIO_INTR_STATUS_ENABLE_IBI_STATUS_THLD_STAT_EN_Msk (_UINT32_(0x1) << I3CC_PIO_INTR_STATUS_ENABLE_IBI_STATUS_THLD_STAT_EN_Pos) /* (I3CC_PIO_INTR_STATUS_ENABLE) IBI Status Threshold Status Enable Mask */
#define I3CC_PIO_INTR_STATUS_ENABLE_IBI_STATUS_THLD_STAT_EN(value) (I3CC_PIO_INTR_STATUS_ENABLE_IBI_STATUS_THLD_STAT_EN_Msk & (_UINT32_(value) << I3CC_PIO_INTR_STATUS_ENABLE_IBI_STATUS_THLD_STAT_EN_Pos)) /* Assignment of value for IBI_STATUS_THLD_STAT_EN in the I3CC_PIO_INTR_STATUS_ENABLE register */
#define   I3CC_PIO_INTR_STATUS_ENABLE_IBI_STATUS_THLD_STAT_EN_0_Val _UINT32_(0x0)                                        /* (I3CC_PIO_INTR_STATUS_ENABLE) Disables interrupt status logging for IBI_STATUS_THLD_STAT.  */
#define   I3CC_PIO_INTR_STATUS_ENABLE_IBI_STATUS_THLD_STAT_EN_1_Val _UINT32_(0x1)                                        /* (I3CC_PIO_INTR_STATUS_ENABLE) Enables interrupt status logging for IBI_STATUS_THLD_STAT.  */
#define I3CC_PIO_INTR_STATUS_ENABLE_IBI_STATUS_THLD_STAT_EN_0 (I3CC_PIO_INTR_STATUS_ENABLE_IBI_STATUS_THLD_STAT_EN_0_Val << I3CC_PIO_INTR_STATUS_ENABLE_IBI_STATUS_THLD_STAT_EN_Pos) /* (I3CC_PIO_INTR_STATUS_ENABLE) Disables interrupt status logging for IBI_STATUS_THLD_STAT. Position */
#define I3CC_PIO_INTR_STATUS_ENABLE_IBI_STATUS_THLD_STAT_EN_1 (I3CC_PIO_INTR_STATUS_ENABLE_IBI_STATUS_THLD_STAT_EN_1_Val << I3CC_PIO_INTR_STATUS_ENABLE_IBI_STATUS_THLD_STAT_EN_Pos) /* (I3CC_PIO_INTR_STATUS_ENABLE) Enables interrupt status logging for IBI_STATUS_THLD_STAT. Position */
#define I3CC_PIO_INTR_STATUS_ENABLE_CMD_QUEUE_READY_STAT_EN_Pos _UINT32_(3)                                          /* (I3CC_PIO_INTR_STATUS_ENABLE) Command Queue Ready Status Enable Position */
#define I3CC_PIO_INTR_STATUS_ENABLE_CMD_QUEUE_READY_STAT_EN_Msk (_UINT32_(0x1) << I3CC_PIO_INTR_STATUS_ENABLE_CMD_QUEUE_READY_STAT_EN_Pos) /* (I3CC_PIO_INTR_STATUS_ENABLE) Command Queue Ready Status Enable Mask */
#define I3CC_PIO_INTR_STATUS_ENABLE_CMD_QUEUE_READY_STAT_EN(value) (I3CC_PIO_INTR_STATUS_ENABLE_CMD_QUEUE_READY_STAT_EN_Msk & (_UINT32_(value) << I3CC_PIO_INTR_STATUS_ENABLE_CMD_QUEUE_READY_STAT_EN_Pos)) /* Assignment of value for CMD_QUEUE_READY_STAT_EN in the I3CC_PIO_INTR_STATUS_ENABLE register */
#define   I3CC_PIO_INTR_STATUS_ENABLE_CMD_QUEUE_READY_STAT_EN_0_Val _UINT32_(0x0)                                        /* (I3CC_PIO_INTR_STATUS_ENABLE) Disables interrupt status logging for CMD_QUEUE_READY_STAT.  */
#define   I3CC_PIO_INTR_STATUS_ENABLE_CMD_QUEUE_READY_STAT_EN_1_Val _UINT32_(0x1)                                        /* (I3CC_PIO_INTR_STATUS_ENABLE) Enables interrupt status logging for CMD_QUEUE_READY_STAT.  */
#define I3CC_PIO_INTR_STATUS_ENABLE_CMD_QUEUE_READY_STAT_EN_0 (I3CC_PIO_INTR_STATUS_ENABLE_CMD_QUEUE_READY_STAT_EN_0_Val << I3CC_PIO_INTR_STATUS_ENABLE_CMD_QUEUE_READY_STAT_EN_Pos) /* (I3CC_PIO_INTR_STATUS_ENABLE) Disables interrupt status logging for CMD_QUEUE_READY_STAT. Position */
#define I3CC_PIO_INTR_STATUS_ENABLE_CMD_QUEUE_READY_STAT_EN_1 (I3CC_PIO_INTR_STATUS_ENABLE_CMD_QUEUE_READY_STAT_EN_1_Val << I3CC_PIO_INTR_STATUS_ENABLE_CMD_QUEUE_READY_STAT_EN_Pos) /* (I3CC_PIO_INTR_STATUS_ENABLE) Enables interrupt status logging for CMD_QUEUE_READY_STAT. Position */
#define I3CC_PIO_INTR_STATUS_ENABLE_RESP_READY_STAT_EN_Pos _UINT32_(4)                                          /* (I3CC_PIO_INTR_STATUS_ENABLE) Response Ready Status Enable Position */
#define I3CC_PIO_INTR_STATUS_ENABLE_RESP_READY_STAT_EN_Msk (_UINT32_(0x1) << I3CC_PIO_INTR_STATUS_ENABLE_RESP_READY_STAT_EN_Pos) /* (I3CC_PIO_INTR_STATUS_ENABLE) Response Ready Status Enable Mask */
#define I3CC_PIO_INTR_STATUS_ENABLE_RESP_READY_STAT_EN(value) (I3CC_PIO_INTR_STATUS_ENABLE_RESP_READY_STAT_EN_Msk & (_UINT32_(value) << I3CC_PIO_INTR_STATUS_ENABLE_RESP_READY_STAT_EN_Pos)) /* Assignment of value for RESP_READY_STAT_EN in the I3CC_PIO_INTR_STATUS_ENABLE register */
#define   I3CC_PIO_INTR_STATUS_ENABLE_RESP_READY_STAT_EN_0_Val _UINT32_(0x0)                                        /* (I3CC_PIO_INTR_STATUS_ENABLE) Disables interrupt status logging for RESP_READY_STAT.  */
#define   I3CC_PIO_INTR_STATUS_ENABLE_RESP_READY_STAT_EN_1_Val _UINT32_(0x1)                                        /* (I3CC_PIO_INTR_STATUS_ENABLE) Enables interrupt status logging for RESP_READY_STAT.  */
#define I3CC_PIO_INTR_STATUS_ENABLE_RESP_READY_STAT_EN_0 (I3CC_PIO_INTR_STATUS_ENABLE_RESP_READY_STAT_EN_0_Val << I3CC_PIO_INTR_STATUS_ENABLE_RESP_READY_STAT_EN_Pos) /* (I3CC_PIO_INTR_STATUS_ENABLE) Disables interrupt status logging for RESP_READY_STAT. Position */
#define I3CC_PIO_INTR_STATUS_ENABLE_RESP_READY_STAT_EN_1 (I3CC_PIO_INTR_STATUS_ENABLE_RESP_READY_STAT_EN_1_Val << I3CC_PIO_INTR_STATUS_ENABLE_RESP_READY_STAT_EN_Pos) /* (I3CC_PIO_INTR_STATUS_ENABLE) Enables interrupt status logging for RESP_READY_STAT. Position */
#define I3CC_PIO_INTR_STATUS_ENABLE_TRANSFER_ABORT_STAT_EN_Pos _UINT32_(5)                                          /* (I3CC_PIO_INTR_STATUS_ENABLE) Transfer Abort Status Enable Position */
#define I3CC_PIO_INTR_STATUS_ENABLE_TRANSFER_ABORT_STAT_EN_Msk (_UINT32_(0x1) << I3CC_PIO_INTR_STATUS_ENABLE_TRANSFER_ABORT_STAT_EN_Pos) /* (I3CC_PIO_INTR_STATUS_ENABLE) Transfer Abort Status Enable Mask */
#define I3CC_PIO_INTR_STATUS_ENABLE_TRANSFER_ABORT_STAT_EN(value) (I3CC_PIO_INTR_STATUS_ENABLE_TRANSFER_ABORT_STAT_EN_Msk & (_UINT32_(value) << I3CC_PIO_INTR_STATUS_ENABLE_TRANSFER_ABORT_STAT_EN_Pos)) /* Assignment of value for TRANSFER_ABORT_STAT_EN in the I3CC_PIO_INTR_STATUS_ENABLE register */
#define   I3CC_PIO_INTR_STATUS_ENABLE_TRANSFER_ABORT_STAT_EN_0_Val _UINT32_(0x0)                                        /* (I3CC_PIO_INTR_STATUS_ENABLE) Disables interrupt status logging for TRANSFER_ABORT_STAT.  */
#define   I3CC_PIO_INTR_STATUS_ENABLE_TRANSFER_ABORT_STAT_EN_1_Val _UINT32_(0x1)                                        /* (I3CC_PIO_INTR_STATUS_ENABLE) Enables interrupt status logging for TRANSFER_ABORT_STAT.  */
#define I3CC_PIO_INTR_STATUS_ENABLE_TRANSFER_ABORT_STAT_EN_0 (I3CC_PIO_INTR_STATUS_ENABLE_TRANSFER_ABORT_STAT_EN_0_Val << I3CC_PIO_INTR_STATUS_ENABLE_TRANSFER_ABORT_STAT_EN_Pos) /* (I3CC_PIO_INTR_STATUS_ENABLE) Disables interrupt status logging for TRANSFER_ABORT_STAT. Position */
#define I3CC_PIO_INTR_STATUS_ENABLE_TRANSFER_ABORT_STAT_EN_1 (I3CC_PIO_INTR_STATUS_ENABLE_TRANSFER_ABORT_STAT_EN_1_Val << I3CC_PIO_INTR_STATUS_ENABLE_TRANSFER_ABORT_STAT_EN_Pos) /* (I3CC_PIO_INTR_STATUS_ENABLE) Enables interrupt status logging for TRANSFER_ABORT_STAT. Position */
#define I3CC_PIO_INTR_STATUS_ENABLE_TRANSFER_ERR_STAT_EN_Pos _UINT32_(9)                                          /* (I3CC_PIO_INTR_STATUS_ENABLE) Transfer Error Status Enable Position */
#define I3CC_PIO_INTR_STATUS_ENABLE_TRANSFER_ERR_STAT_EN_Msk (_UINT32_(0x1) << I3CC_PIO_INTR_STATUS_ENABLE_TRANSFER_ERR_STAT_EN_Pos) /* (I3CC_PIO_INTR_STATUS_ENABLE) Transfer Error Status Enable Mask */
#define I3CC_PIO_INTR_STATUS_ENABLE_TRANSFER_ERR_STAT_EN(value) (I3CC_PIO_INTR_STATUS_ENABLE_TRANSFER_ERR_STAT_EN_Msk & (_UINT32_(value) << I3CC_PIO_INTR_STATUS_ENABLE_TRANSFER_ERR_STAT_EN_Pos)) /* Assignment of value for TRANSFER_ERR_STAT_EN in the I3CC_PIO_INTR_STATUS_ENABLE register */
#define   I3CC_PIO_INTR_STATUS_ENABLE_TRANSFER_ERR_STAT_EN_0_Val _UINT32_(0x0)                                        /* (I3CC_PIO_INTR_STATUS_ENABLE) Disables interrupt status logging for TRANSFER_ERR_STAT.  */
#define   I3CC_PIO_INTR_STATUS_ENABLE_TRANSFER_ERR_STAT_EN_1_Val _UINT32_(0x1)                                        /* (I3CC_PIO_INTR_STATUS_ENABLE) Enables interrupt status logging for TRANSFER_ERR_STAT.  */
#define I3CC_PIO_INTR_STATUS_ENABLE_TRANSFER_ERR_STAT_EN_0 (I3CC_PIO_INTR_STATUS_ENABLE_TRANSFER_ERR_STAT_EN_0_Val << I3CC_PIO_INTR_STATUS_ENABLE_TRANSFER_ERR_STAT_EN_Pos) /* (I3CC_PIO_INTR_STATUS_ENABLE) Disables interrupt status logging for TRANSFER_ERR_STAT. Position */
#define I3CC_PIO_INTR_STATUS_ENABLE_TRANSFER_ERR_STAT_EN_1 (I3CC_PIO_INTR_STATUS_ENABLE_TRANSFER_ERR_STAT_EN_1_Val << I3CC_PIO_INTR_STATUS_ENABLE_TRANSFER_ERR_STAT_EN_Pos) /* (I3CC_PIO_INTR_STATUS_ENABLE) Enables interrupt status logging for TRANSFER_ERR_STAT. Position */
#define I3CC_PIO_INTR_STATUS_ENABLE_Msk       _UINT32_(0x0000023F)                                 /* (I3CC_PIO_INTR_STATUS_ENABLE) Register Mask  */


/* -------- I3CC_PIO_INTR_SIGNAL_ENABLE : (I3CC Offset: 0xE8) (R/W 32) PIO Interrupt Signal Enable Register -------- */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_RESETVALUE _UINT32_(0x00)                                       /*  (I3CC_PIO_INTR_SIGNAL_ENABLE) PIO Interrupt Signal Enable Register  Reset Value */

#define I3CC_PIO_INTR_SIGNAL_ENABLE_TX_THLD_SIGNAL_EN_Pos _UINT32_(0)                                          /* (I3CC_PIO_INTR_SIGNAL_ENABLE) Transmit Data Buffer Threshold Signal Enable Position */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_TX_THLD_SIGNAL_EN_Msk (_UINT32_(0x1) << I3CC_PIO_INTR_SIGNAL_ENABLE_TX_THLD_SIGNAL_EN_Pos) /* (I3CC_PIO_INTR_SIGNAL_ENABLE) Transmit Data Buffer Threshold Signal Enable Mask */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_TX_THLD_SIGNAL_EN(value) (I3CC_PIO_INTR_SIGNAL_ENABLE_TX_THLD_SIGNAL_EN_Msk & (_UINT32_(value) << I3CC_PIO_INTR_SIGNAL_ENABLE_TX_THLD_SIGNAL_EN_Pos)) /* Assignment of value for TX_THLD_SIGNAL_EN in the I3CC_PIO_INTR_SIGNAL_ENABLE register */
#define   I3CC_PIO_INTR_SIGNAL_ENABLE_TX_THLD_SIGNAL_EN_0_Val _UINT32_(0x0)                                        /* (I3CC_PIO_INTR_SIGNAL_ENABLE) TX_THLD_STAT cannot trigger the interrupt line.  */
#define   I3CC_PIO_INTR_SIGNAL_ENABLE_TX_THLD_SIGNAL_EN_1_Val _UINT32_(0x1)                                        /* (I3CC_PIO_INTR_SIGNAL_ENABLE) TX_THLD_STAT triggers the interrupt line.  */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_TX_THLD_SIGNAL_EN_0 (I3CC_PIO_INTR_SIGNAL_ENABLE_TX_THLD_SIGNAL_EN_0_Val << I3CC_PIO_INTR_SIGNAL_ENABLE_TX_THLD_SIGNAL_EN_Pos) /* (I3CC_PIO_INTR_SIGNAL_ENABLE) TX_THLD_STAT cannot trigger the interrupt line. Position */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_TX_THLD_SIGNAL_EN_1 (I3CC_PIO_INTR_SIGNAL_ENABLE_TX_THLD_SIGNAL_EN_1_Val << I3CC_PIO_INTR_SIGNAL_ENABLE_TX_THLD_SIGNAL_EN_Pos) /* (I3CC_PIO_INTR_SIGNAL_ENABLE) TX_THLD_STAT triggers the interrupt line. Position */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_RX_THLD_SIGNAL_EN_Pos _UINT32_(1)                                          /* (I3CC_PIO_INTR_SIGNAL_ENABLE) Receive Data Buffer Threshold Signal Enable Position */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_RX_THLD_SIGNAL_EN_Msk (_UINT32_(0x1) << I3CC_PIO_INTR_SIGNAL_ENABLE_RX_THLD_SIGNAL_EN_Pos) /* (I3CC_PIO_INTR_SIGNAL_ENABLE) Receive Data Buffer Threshold Signal Enable Mask */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_RX_THLD_SIGNAL_EN(value) (I3CC_PIO_INTR_SIGNAL_ENABLE_RX_THLD_SIGNAL_EN_Msk & (_UINT32_(value) << I3CC_PIO_INTR_SIGNAL_ENABLE_RX_THLD_SIGNAL_EN_Pos)) /* Assignment of value for RX_THLD_SIGNAL_EN in the I3CC_PIO_INTR_SIGNAL_ENABLE register */
#define   I3CC_PIO_INTR_SIGNAL_ENABLE_RX_THLD_SIGNAL_EN_0_Val _UINT32_(0x0)                                        /* (I3CC_PIO_INTR_SIGNAL_ENABLE) RX_THLD_STAT cannot trigger the interrupt line.  */
#define   I3CC_PIO_INTR_SIGNAL_ENABLE_RX_THLD_SIGNAL_EN_1_Val _UINT32_(0x1)                                        /* (I3CC_PIO_INTR_SIGNAL_ENABLE) RX_THLD_STAT triggers the interrupt line.  */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_RX_THLD_SIGNAL_EN_0 (I3CC_PIO_INTR_SIGNAL_ENABLE_RX_THLD_SIGNAL_EN_0_Val << I3CC_PIO_INTR_SIGNAL_ENABLE_RX_THLD_SIGNAL_EN_Pos) /* (I3CC_PIO_INTR_SIGNAL_ENABLE) RX_THLD_STAT cannot trigger the interrupt line. Position */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_RX_THLD_SIGNAL_EN_1 (I3CC_PIO_INTR_SIGNAL_ENABLE_RX_THLD_SIGNAL_EN_1_Val << I3CC_PIO_INTR_SIGNAL_ENABLE_RX_THLD_SIGNAL_EN_Pos) /* (I3CC_PIO_INTR_SIGNAL_ENABLE) RX_THLD_STAT triggers the interrupt line. Position */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_IBI_STATUS_THLD_SIGNAL_EN_Pos _UINT32_(2)                                          /* (I3CC_PIO_INTR_SIGNAL_ENABLE) IBI Status Threshold Signal Enable Position */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_IBI_STATUS_THLD_SIGNAL_EN_Msk (_UINT32_(0x1) << I3CC_PIO_INTR_SIGNAL_ENABLE_IBI_STATUS_THLD_SIGNAL_EN_Pos) /* (I3CC_PIO_INTR_SIGNAL_ENABLE) IBI Status Threshold Signal Enable Mask */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_IBI_STATUS_THLD_SIGNAL_EN(value) (I3CC_PIO_INTR_SIGNAL_ENABLE_IBI_STATUS_THLD_SIGNAL_EN_Msk & (_UINT32_(value) << I3CC_PIO_INTR_SIGNAL_ENABLE_IBI_STATUS_THLD_SIGNAL_EN_Pos)) /* Assignment of value for IBI_STATUS_THLD_SIGNAL_EN in the I3CC_PIO_INTR_SIGNAL_ENABLE register */
#define   I3CC_PIO_INTR_SIGNAL_ENABLE_IBI_STATUS_THLD_SIGNAL_EN_0_Val _UINT32_(0x0)                                        /* (I3CC_PIO_INTR_SIGNAL_ENABLE) IBI_STATUS_THLD_STAT cannot trigger the interrupt line.  */
#define   I3CC_PIO_INTR_SIGNAL_ENABLE_IBI_STATUS_THLD_SIGNAL_EN_1_Val _UINT32_(0x1)                                        /* (I3CC_PIO_INTR_SIGNAL_ENABLE) IBI_STATUS_THLD_STAT triggers the interrupt line.  */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_IBI_STATUS_THLD_SIGNAL_EN_0 (I3CC_PIO_INTR_SIGNAL_ENABLE_IBI_STATUS_THLD_SIGNAL_EN_0_Val << I3CC_PIO_INTR_SIGNAL_ENABLE_IBI_STATUS_THLD_SIGNAL_EN_Pos) /* (I3CC_PIO_INTR_SIGNAL_ENABLE) IBI_STATUS_THLD_STAT cannot trigger the interrupt line. Position */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_IBI_STATUS_THLD_SIGNAL_EN_1 (I3CC_PIO_INTR_SIGNAL_ENABLE_IBI_STATUS_THLD_SIGNAL_EN_1_Val << I3CC_PIO_INTR_SIGNAL_ENABLE_IBI_STATUS_THLD_SIGNAL_EN_Pos) /* (I3CC_PIO_INTR_SIGNAL_ENABLE) IBI_STATUS_THLD_STAT triggers the interrupt line. Position */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_CMD_QUEUE_READY_SIGNAL_EN_Pos _UINT32_(3)                                          /* (I3CC_PIO_INTR_SIGNAL_ENABLE) Command Queue Ready Signal Enable Position */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_CMD_QUEUE_READY_SIGNAL_EN_Msk (_UINT32_(0x1) << I3CC_PIO_INTR_SIGNAL_ENABLE_CMD_QUEUE_READY_SIGNAL_EN_Pos) /* (I3CC_PIO_INTR_SIGNAL_ENABLE) Command Queue Ready Signal Enable Mask */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_CMD_QUEUE_READY_SIGNAL_EN(value) (I3CC_PIO_INTR_SIGNAL_ENABLE_CMD_QUEUE_READY_SIGNAL_EN_Msk & (_UINT32_(value) << I3CC_PIO_INTR_SIGNAL_ENABLE_CMD_QUEUE_READY_SIGNAL_EN_Pos)) /* Assignment of value for CMD_QUEUE_READY_SIGNAL_EN in the I3CC_PIO_INTR_SIGNAL_ENABLE register */
#define   I3CC_PIO_INTR_SIGNAL_ENABLE_CMD_QUEUE_READY_SIGNAL_EN_0_Val _UINT32_(0x0)                                        /* (I3CC_PIO_INTR_SIGNAL_ENABLE) CMD_QUEUE_READY_STAT cannot trigger the interrupt line.  */
#define   I3CC_PIO_INTR_SIGNAL_ENABLE_CMD_QUEUE_READY_SIGNAL_EN_1_Val _UINT32_(0x1)                                        /* (I3CC_PIO_INTR_SIGNAL_ENABLE) CMD_QUEUE_READY_STAT triggers the interrupt line.  */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_CMD_QUEUE_READY_SIGNAL_EN_0 (I3CC_PIO_INTR_SIGNAL_ENABLE_CMD_QUEUE_READY_SIGNAL_EN_0_Val << I3CC_PIO_INTR_SIGNAL_ENABLE_CMD_QUEUE_READY_SIGNAL_EN_Pos) /* (I3CC_PIO_INTR_SIGNAL_ENABLE) CMD_QUEUE_READY_STAT cannot trigger the interrupt line. Position */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_CMD_QUEUE_READY_SIGNAL_EN_1 (I3CC_PIO_INTR_SIGNAL_ENABLE_CMD_QUEUE_READY_SIGNAL_EN_1_Val << I3CC_PIO_INTR_SIGNAL_ENABLE_CMD_QUEUE_READY_SIGNAL_EN_Pos) /* (I3CC_PIO_INTR_SIGNAL_ENABLE) CMD_QUEUE_READY_STAT triggers the interrupt line. Position */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_RESP_READY_SIGNAL_EN_Pos _UINT32_(4)                                          /* (I3CC_PIO_INTR_SIGNAL_ENABLE) Response Ready Signal Enable Position */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_RESP_READY_SIGNAL_EN_Msk (_UINT32_(0x1) << I3CC_PIO_INTR_SIGNAL_ENABLE_RESP_READY_SIGNAL_EN_Pos) /* (I3CC_PIO_INTR_SIGNAL_ENABLE) Response Ready Signal Enable Mask */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_RESP_READY_SIGNAL_EN(value) (I3CC_PIO_INTR_SIGNAL_ENABLE_RESP_READY_SIGNAL_EN_Msk & (_UINT32_(value) << I3CC_PIO_INTR_SIGNAL_ENABLE_RESP_READY_SIGNAL_EN_Pos)) /* Assignment of value for RESP_READY_SIGNAL_EN in the I3CC_PIO_INTR_SIGNAL_ENABLE register */
#define   I3CC_PIO_INTR_SIGNAL_ENABLE_RESP_READY_SIGNAL_EN_0_Val _UINT32_(0x0)                                        /* (I3CC_PIO_INTR_SIGNAL_ENABLE) RESP_READY_STAT cannot trigger the interrupt line.  */
#define   I3CC_PIO_INTR_SIGNAL_ENABLE_RESP_READY_SIGNAL_EN_1_Val _UINT32_(0x1)                                        /* (I3CC_PIO_INTR_SIGNAL_ENABLE) RESP_READY_STAT triggers the interrupt line.  */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_RESP_READY_SIGNAL_EN_0 (I3CC_PIO_INTR_SIGNAL_ENABLE_RESP_READY_SIGNAL_EN_0_Val << I3CC_PIO_INTR_SIGNAL_ENABLE_RESP_READY_SIGNAL_EN_Pos) /* (I3CC_PIO_INTR_SIGNAL_ENABLE) RESP_READY_STAT cannot trigger the interrupt line. Position */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_RESP_READY_SIGNAL_EN_1 (I3CC_PIO_INTR_SIGNAL_ENABLE_RESP_READY_SIGNAL_EN_1_Val << I3CC_PIO_INTR_SIGNAL_ENABLE_RESP_READY_SIGNAL_EN_Pos) /* (I3CC_PIO_INTR_SIGNAL_ENABLE) RESP_READY_STAT triggers the interrupt line. Position */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_TRANSFER_ABORT_SIGNAL_EN_Pos _UINT32_(5)                                          /* (I3CC_PIO_INTR_SIGNAL_ENABLE) Transfer Abort Signal Enable Position */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_TRANSFER_ABORT_SIGNAL_EN_Msk (_UINT32_(0x1) << I3CC_PIO_INTR_SIGNAL_ENABLE_TRANSFER_ABORT_SIGNAL_EN_Pos) /* (I3CC_PIO_INTR_SIGNAL_ENABLE) Transfer Abort Signal Enable Mask */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_TRANSFER_ABORT_SIGNAL_EN(value) (I3CC_PIO_INTR_SIGNAL_ENABLE_TRANSFER_ABORT_SIGNAL_EN_Msk & (_UINT32_(value) << I3CC_PIO_INTR_SIGNAL_ENABLE_TRANSFER_ABORT_SIGNAL_EN_Pos)) /* Assignment of value for TRANSFER_ABORT_SIGNAL_EN in the I3CC_PIO_INTR_SIGNAL_ENABLE register */
#define   I3CC_PIO_INTR_SIGNAL_ENABLE_TRANSFER_ABORT_SIGNAL_EN_0_Val _UINT32_(0x0)                                        /* (I3CC_PIO_INTR_SIGNAL_ENABLE) TRANSFER_ABORT_STAT cannot trigger the interrupt line.  */
#define   I3CC_PIO_INTR_SIGNAL_ENABLE_TRANSFER_ABORT_SIGNAL_EN_1_Val _UINT32_(0x1)                                        /* (I3CC_PIO_INTR_SIGNAL_ENABLE) TRANSFER_ABORT_STAT triggers the interrupt line.  */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_TRANSFER_ABORT_SIGNAL_EN_0 (I3CC_PIO_INTR_SIGNAL_ENABLE_TRANSFER_ABORT_SIGNAL_EN_0_Val << I3CC_PIO_INTR_SIGNAL_ENABLE_TRANSFER_ABORT_SIGNAL_EN_Pos) /* (I3CC_PIO_INTR_SIGNAL_ENABLE) TRANSFER_ABORT_STAT cannot trigger the interrupt line. Position */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_TRANSFER_ABORT_SIGNAL_EN_1 (I3CC_PIO_INTR_SIGNAL_ENABLE_TRANSFER_ABORT_SIGNAL_EN_1_Val << I3CC_PIO_INTR_SIGNAL_ENABLE_TRANSFER_ABORT_SIGNAL_EN_Pos) /* (I3CC_PIO_INTR_SIGNAL_ENABLE) TRANSFER_ABORT_STAT triggers the interrupt line. Position */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_TRANSFER_ERR_SIGNAL_EN_Pos _UINT32_(9)                                          /* (I3CC_PIO_INTR_SIGNAL_ENABLE) Transfer Error Signal Enable Position */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_TRANSFER_ERR_SIGNAL_EN_Msk (_UINT32_(0x1) << I3CC_PIO_INTR_SIGNAL_ENABLE_TRANSFER_ERR_SIGNAL_EN_Pos) /* (I3CC_PIO_INTR_SIGNAL_ENABLE) Transfer Error Signal Enable Mask */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_TRANSFER_ERR_SIGNAL_EN(value) (I3CC_PIO_INTR_SIGNAL_ENABLE_TRANSFER_ERR_SIGNAL_EN_Msk & (_UINT32_(value) << I3CC_PIO_INTR_SIGNAL_ENABLE_TRANSFER_ERR_SIGNAL_EN_Pos)) /* Assignment of value for TRANSFER_ERR_SIGNAL_EN in the I3CC_PIO_INTR_SIGNAL_ENABLE register */
#define   I3CC_PIO_INTR_SIGNAL_ENABLE_TRANSFER_ERR_SIGNAL_EN_0_Val _UINT32_(0x0)                                        /* (I3CC_PIO_INTR_SIGNAL_ENABLE) TRANSFER_ERR_STAT cannot trigger the interrupt line.  */
#define   I3CC_PIO_INTR_SIGNAL_ENABLE_TRANSFER_ERR_SIGNAL_EN_1_Val _UINT32_(0x1)                                        /* (I3CC_PIO_INTR_SIGNAL_ENABLE) TRANSFER_ERR_STAT triggers the interrupt line.  */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_TRANSFER_ERR_SIGNAL_EN_0 (I3CC_PIO_INTR_SIGNAL_ENABLE_TRANSFER_ERR_SIGNAL_EN_0_Val << I3CC_PIO_INTR_SIGNAL_ENABLE_TRANSFER_ERR_SIGNAL_EN_Pos) /* (I3CC_PIO_INTR_SIGNAL_ENABLE) TRANSFER_ERR_STAT cannot trigger the interrupt line. Position */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_TRANSFER_ERR_SIGNAL_EN_1 (I3CC_PIO_INTR_SIGNAL_ENABLE_TRANSFER_ERR_SIGNAL_EN_1_Val << I3CC_PIO_INTR_SIGNAL_ENABLE_TRANSFER_ERR_SIGNAL_EN_Pos) /* (I3CC_PIO_INTR_SIGNAL_ENABLE) TRANSFER_ERR_STAT triggers the interrupt line. Position */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_Msk       _UINT32_(0x0000023F)                                 /* (I3CC_PIO_INTR_SIGNAL_ENABLE) Register Mask  */


/* -------- I3CC_PIO_INTR_FORCE : (I3CC Offset: 0xEC) ( /W 32) PIO Interrupt Force Register -------- */
#define I3CC_PIO_INTR_FORCE_TX_THLD_FORCE_Pos _UINT32_(0)                                          /* (I3CC_PIO_INTR_FORCE) Transmit Data Buffer Threshold Status Force Position */
#define I3CC_PIO_INTR_FORCE_TX_THLD_FORCE_Msk (_UINT32_(0x1) << I3CC_PIO_INTR_FORCE_TX_THLD_FORCE_Pos) /* (I3CC_PIO_INTR_FORCE) Transmit Data Buffer Threshold Status Force Mask */
#define I3CC_PIO_INTR_FORCE_TX_THLD_FORCE(value) (I3CC_PIO_INTR_FORCE_TX_THLD_FORCE_Msk & (_UINT32_(value) << I3CC_PIO_INTR_FORCE_TX_THLD_FORCE_Pos)) /* Assignment of value for TX_THLD_FORCE in the I3CC_PIO_INTR_FORCE register */
#define   I3CC_PIO_INTR_FORCE_TX_THLD_FORCE_0_Val _UINT32_(0x0)                                        /* (I3CC_PIO_INTR_FORCE) No effect.  */
#define   I3CC_PIO_INTR_FORCE_TX_THLD_FORCE_1_Val _UINT32_(0x1)                                        /* (I3CC_PIO_INTR_FORCE) Sets TX_THLD_STAT to 1.  */
#define I3CC_PIO_INTR_FORCE_TX_THLD_FORCE_0   (I3CC_PIO_INTR_FORCE_TX_THLD_FORCE_0_Val << I3CC_PIO_INTR_FORCE_TX_THLD_FORCE_Pos) /* (I3CC_PIO_INTR_FORCE) No effect. Position */
#define I3CC_PIO_INTR_FORCE_TX_THLD_FORCE_1   (I3CC_PIO_INTR_FORCE_TX_THLD_FORCE_1_Val << I3CC_PIO_INTR_FORCE_TX_THLD_FORCE_Pos) /* (I3CC_PIO_INTR_FORCE) Sets TX_THLD_STAT to 1. Position */
#define I3CC_PIO_INTR_FORCE_RX_THLD_FORCE_Pos _UINT32_(1)                                          /* (I3CC_PIO_INTR_FORCE) Receive Data Buffer Threshold Status Force Position */
#define I3CC_PIO_INTR_FORCE_RX_THLD_FORCE_Msk (_UINT32_(0x1) << I3CC_PIO_INTR_FORCE_RX_THLD_FORCE_Pos) /* (I3CC_PIO_INTR_FORCE) Receive Data Buffer Threshold Status Force Mask */
#define I3CC_PIO_INTR_FORCE_RX_THLD_FORCE(value) (I3CC_PIO_INTR_FORCE_RX_THLD_FORCE_Msk & (_UINT32_(value) << I3CC_PIO_INTR_FORCE_RX_THLD_FORCE_Pos)) /* Assignment of value for RX_THLD_FORCE in the I3CC_PIO_INTR_FORCE register */
#define   I3CC_PIO_INTR_FORCE_RX_THLD_FORCE_0_Val _UINT32_(0x0)                                        /* (I3CC_PIO_INTR_FORCE) No effect.  */
#define   I3CC_PIO_INTR_FORCE_RX_THLD_FORCE_1_Val _UINT32_(0x1)                                        /* (I3CC_PIO_INTR_FORCE) Sets RX_THLD_STAT to 1.  */
#define I3CC_PIO_INTR_FORCE_RX_THLD_FORCE_0   (I3CC_PIO_INTR_FORCE_RX_THLD_FORCE_0_Val << I3CC_PIO_INTR_FORCE_RX_THLD_FORCE_Pos) /* (I3CC_PIO_INTR_FORCE) No effect. Position */
#define I3CC_PIO_INTR_FORCE_RX_THLD_FORCE_1   (I3CC_PIO_INTR_FORCE_RX_THLD_FORCE_1_Val << I3CC_PIO_INTR_FORCE_RX_THLD_FORCE_Pos) /* (I3CC_PIO_INTR_FORCE) Sets RX_THLD_STAT to 1. Position */
#define I3CC_PIO_INTR_FORCE_IBI_STATUS_THLD_FORCE_Pos _UINT32_(2)                                          /* (I3CC_PIO_INTR_FORCE) IBI Status Threshold Status Force Position */
#define I3CC_PIO_INTR_FORCE_IBI_STATUS_THLD_FORCE_Msk (_UINT32_(0x1) << I3CC_PIO_INTR_FORCE_IBI_STATUS_THLD_FORCE_Pos) /* (I3CC_PIO_INTR_FORCE) IBI Status Threshold Status Force Mask */
#define I3CC_PIO_INTR_FORCE_IBI_STATUS_THLD_FORCE(value) (I3CC_PIO_INTR_FORCE_IBI_STATUS_THLD_FORCE_Msk & (_UINT32_(value) << I3CC_PIO_INTR_FORCE_IBI_STATUS_THLD_FORCE_Pos)) /* Assignment of value for IBI_STATUS_THLD_FORCE in the I3CC_PIO_INTR_FORCE register */
#define   I3CC_PIO_INTR_FORCE_IBI_STATUS_THLD_FORCE_0_Val _UINT32_(0x0)                                        /* (I3CC_PIO_INTR_FORCE) No effect.  */
#define   I3CC_PIO_INTR_FORCE_IBI_STATUS_THLD_FORCE_1_Val _UINT32_(0x1)                                        /* (I3CC_PIO_INTR_FORCE) Sets IBI_STATUS_THLD_STAT to 1.  */
#define I3CC_PIO_INTR_FORCE_IBI_STATUS_THLD_FORCE_0 (I3CC_PIO_INTR_FORCE_IBI_STATUS_THLD_FORCE_0_Val << I3CC_PIO_INTR_FORCE_IBI_STATUS_THLD_FORCE_Pos) /* (I3CC_PIO_INTR_FORCE) No effect. Position */
#define I3CC_PIO_INTR_FORCE_IBI_STATUS_THLD_FORCE_1 (I3CC_PIO_INTR_FORCE_IBI_STATUS_THLD_FORCE_1_Val << I3CC_PIO_INTR_FORCE_IBI_STATUS_THLD_FORCE_Pos) /* (I3CC_PIO_INTR_FORCE) Sets IBI_STATUS_THLD_STAT to 1. Position */
#define I3CC_PIO_INTR_FORCE_CMD_QUEUE_READY_FORCE_Pos _UINT32_(3)                                          /* (I3CC_PIO_INTR_FORCE) Command Queue Ready Status Force Position */
#define I3CC_PIO_INTR_FORCE_CMD_QUEUE_READY_FORCE_Msk (_UINT32_(0x1) << I3CC_PIO_INTR_FORCE_CMD_QUEUE_READY_FORCE_Pos) /* (I3CC_PIO_INTR_FORCE) Command Queue Ready Status Force Mask */
#define I3CC_PIO_INTR_FORCE_CMD_QUEUE_READY_FORCE(value) (I3CC_PIO_INTR_FORCE_CMD_QUEUE_READY_FORCE_Msk & (_UINT32_(value) << I3CC_PIO_INTR_FORCE_CMD_QUEUE_READY_FORCE_Pos)) /* Assignment of value for CMD_QUEUE_READY_FORCE in the I3CC_PIO_INTR_FORCE register */
#define   I3CC_PIO_INTR_FORCE_CMD_QUEUE_READY_FORCE_0_Val _UINT32_(0x0)                                        /* (I3CC_PIO_INTR_FORCE) No effect.  */
#define   I3CC_PIO_INTR_FORCE_CMD_QUEUE_READY_FORCE_1_Val _UINT32_(0x1)                                        /* (I3CC_PIO_INTR_FORCE) Sets CMD_QUEUE_READY_STAT to 1.  */
#define I3CC_PIO_INTR_FORCE_CMD_QUEUE_READY_FORCE_0 (I3CC_PIO_INTR_FORCE_CMD_QUEUE_READY_FORCE_0_Val << I3CC_PIO_INTR_FORCE_CMD_QUEUE_READY_FORCE_Pos) /* (I3CC_PIO_INTR_FORCE) No effect. Position */
#define I3CC_PIO_INTR_FORCE_CMD_QUEUE_READY_FORCE_1 (I3CC_PIO_INTR_FORCE_CMD_QUEUE_READY_FORCE_1_Val << I3CC_PIO_INTR_FORCE_CMD_QUEUE_READY_FORCE_Pos) /* (I3CC_PIO_INTR_FORCE) Sets CMD_QUEUE_READY_STAT to 1. Position */
#define I3CC_PIO_INTR_FORCE_RESP_READY_FORCE_Pos _UINT32_(4)                                          /* (I3CC_PIO_INTR_FORCE) Response Ready Status Force Position */
#define I3CC_PIO_INTR_FORCE_RESP_READY_FORCE_Msk (_UINT32_(0x1) << I3CC_PIO_INTR_FORCE_RESP_READY_FORCE_Pos) /* (I3CC_PIO_INTR_FORCE) Response Ready Status Force Mask */
#define I3CC_PIO_INTR_FORCE_RESP_READY_FORCE(value) (I3CC_PIO_INTR_FORCE_RESP_READY_FORCE_Msk & (_UINT32_(value) << I3CC_PIO_INTR_FORCE_RESP_READY_FORCE_Pos)) /* Assignment of value for RESP_READY_FORCE in the I3CC_PIO_INTR_FORCE register */
#define   I3CC_PIO_INTR_FORCE_RESP_READY_FORCE_0_Val _UINT32_(0x0)                                        /* (I3CC_PIO_INTR_FORCE) No effect.  */
#define   I3CC_PIO_INTR_FORCE_RESP_READY_FORCE_1_Val _UINT32_(0x1)                                        /* (I3CC_PIO_INTR_FORCE) Sets RESP_READY_STAT to 1.  */
#define I3CC_PIO_INTR_FORCE_RESP_READY_FORCE_0 (I3CC_PIO_INTR_FORCE_RESP_READY_FORCE_0_Val << I3CC_PIO_INTR_FORCE_RESP_READY_FORCE_Pos) /* (I3CC_PIO_INTR_FORCE) No effect. Position */
#define I3CC_PIO_INTR_FORCE_RESP_READY_FORCE_1 (I3CC_PIO_INTR_FORCE_RESP_READY_FORCE_1_Val << I3CC_PIO_INTR_FORCE_RESP_READY_FORCE_Pos) /* (I3CC_PIO_INTR_FORCE) Sets RESP_READY_STAT to 1. Position */
#define I3CC_PIO_INTR_FORCE_TRANSFER_ABORT_FORCE_Pos _UINT32_(5)                                          /* (I3CC_PIO_INTR_FORCE) Transfer Abort Status Force Position */
#define I3CC_PIO_INTR_FORCE_TRANSFER_ABORT_FORCE_Msk (_UINT32_(0x1) << I3CC_PIO_INTR_FORCE_TRANSFER_ABORT_FORCE_Pos) /* (I3CC_PIO_INTR_FORCE) Transfer Abort Status Force Mask */
#define I3CC_PIO_INTR_FORCE_TRANSFER_ABORT_FORCE(value) (I3CC_PIO_INTR_FORCE_TRANSFER_ABORT_FORCE_Msk & (_UINT32_(value) << I3CC_PIO_INTR_FORCE_TRANSFER_ABORT_FORCE_Pos)) /* Assignment of value for TRANSFER_ABORT_FORCE in the I3CC_PIO_INTR_FORCE register */
#define   I3CC_PIO_INTR_FORCE_TRANSFER_ABORT_FORCE_0_Val _UINT32_(0x0)                                        /* (I3CC_PIO_INTR_FORCE) No effect.  */
#define   I3CC_PIO_INTR_FORCE_TRANSFER_ABORT_FORCE_1_Val _UINT32_(0x1)                                        /* (I3CC_PIO_INTR_FORCE) Sets TRANSFER_ABORT_STAT to 1.  */
#define I3CC_PIO_INTR_FORCE_TRANSFER_ABORT_FORCE_0 (I3CC_PIO_INTR_FORCE_TRANSFER_ABORT_FORCE_0_Val << I3CC_PIO_INTR_FORCE_TRANSFER_ABORT_FORCE_Pos) /* (I3CC_PIO_INTR_FORCE) No effect. Position */
#define I3CC_PIO_INTR_FORCE_TRANSFER_ABORT_FORCE_1 (I3CC_PIO_INTR_FORCE_TRANSFER_ABORT_FORCE_1_Val << I3CC_PIO_INTR_FORCE_TRANSFER_ABORT_FORCE_Pos) /* (I3CC_PIO_INTR_FORCE) Sets TRANSFER_ABORT_STAT to 1. Position */
#define I3CC_PIO_INTR_FORCE_TRANSFER_ERR_FORCE_Pos _UINT32_(9)                                          /* (I3CC_PIO_INTR_FORCE) Transfer Error Status Force Position */
#define I3CC_PIO_INTR_FORCE_TRANSFER_ERR_FORCE_Msk (_UINT32_(0x1) << I3CC_PIO_INTR_FORCE_TRANSFER_ERR_FORCE_Pos) /* (I3CC_PIO_INTR_FORCE) Transfer Error Status Force Mask */
#define I3CC_PIO_INTR_FORCE_TRANSFER_ERR_FORCE(value) (I3CC_PIO_INTR_FORCE_TRANSFER_ERR_FORCE_Msk & (_UINT32_(value) << I3CC_PIO_INTR_FORCE_TRANSFER_ERR_FORCE_Pos)) /* Assignment of value for TRANSFER_ERR_FORCE in the I3CC_PIO_INTR_FORCE register */
#define   I3CC_PIO_INTR_FORCE_TRANSFER_ERR_FORCE_0_Val _UINT32_(0x0)                                        /* (I3CC_PIO_INTR_FORCE) No effect.  */
#define   I3CC_PIO_INTR_FORCE_TRANSFER_ERR_FORCE_1_Val _UINT32_(0x1)                                        /* (I3CC_PIO_INTR_FORCE) Sets TRANSFER_ERR_STAT to 1.  */
#define I3CC_PIO_INTR_FORCE_TRANSFER_ERR_FORCE_0 (I3CC_PIO_INTR_FORCE_TRANSFER_ERR_FORCE_0_Val << I3CC_PIO_INTR_FORCE_TRANSFER_ERR_FORCE_Pos) /* (I3CC_PIO_INTR_FORCE) No effect. Position */
#define I3CC_PIO_INTR_FORCE_TRANSFER_ERR_FORCE_1 (I3CC_PIO_INTR_FORCE_TRANSFER_ERR_FORCE_1_Val << I3CC_PIO_INTR_FORCE_TRANSFER_ERR_FORCE_Pos) /* (I3CC_PIO_INTR_FORCE) Sets TRANSFER_ERR_STAT to 1. Position */
#define I3CC_PIO_INTR_FORCE_Msk               _UINT32_(0x0000023F)                                 /* (I3CC_PIO_INTR_FORCE) Register Mask  */


/* -------- I3CC_HW_IDENTIFICATION_HEADER : (I3CC Offset: 0x200) ( R/ 32) Hardware Identification Header Register -------- */
#define I3CC_HW_IDENTIFICATION_HEADER_RESETVALUE _UINT32_(0x401)                                      /*  (I3CC_HW_IDENTIFICATION_HEADER) Hardware Identification Header Register  Reset Value */

#define I3CC_HW_IDENTIFICATION_HEADER_CAP_ID_Pos _UINT32_(0)                                          /* (I3CC_HW_IDENTIFICATION_HEADER) Extended Capability ID Position */
#define I3CC_HW_IDENTIFICATION_HEADER_CAP_ID_Msk (_UINT32_(0xFF) << I3CC_HW_IDENTIFICATION_HEADER_CAP_ID_Pos) /* (I3CC_HW_IDENTIFICATION_HEADER) Extended Capability ID Mask */
#define I3CC_HW_IDENTIFICATION_HEADER_CAP_ID(value) (I3CC_HW_IDENTIFICATION_HEADER_CAP_ID_Msk & (_UINT32_(value) << I3CC_HW_IDENTIFICATION_HEADER_CAP_ID_Pos)) /* Assignment of value for CAP_ID in the I3CC_HW_IDENTIFICATION_HEADER register */
#define I3CC_HW_IDENTIFICATION_HEADER_CAP_LEN_Pos _UINT32_(8)                                          /* (I3CC_HW_IDENTIFICATION_HEADER) Capability Structure Length Position */
#define I3CC_HW_IDENTIFICATION_HEADER_CAP_LEN_Msk (_UINT32_(0xFFFF) << I3CC_HW_IDENTIFICATION_HEADER_CAP_LEN_Pos) /* (I3CC_HW_IDENTIFICATION_HEADER) Capability Structure Length Mask */
#define I3CC_HW_IDENTIFICATION_HEADER_CAP_LEN(value) (I3CC_HW_IDENTIFICATION_HEADER_CAP_LEN_Msk & (_UINT32_(value) << I3CC_HW_IDENTIFICATION_HEADER_CAP_LEN_Pos)) /* Assignment of value for CAP_LEN in the I3CC_HW_IDENTIFICATION_HEADER register */
#define I3CC_HW_IDENTIFICATION_HEADER_Msk     _UINT32_(0x00FFFFFF)                                 /* (I3CC_HW_IDENTIFICATION_HEADER) Register Mask  */


/* -------- I3CC_COMP_MANUFACTURER : (I3CC Offset: 0x204) ( R/ 32) Component Manufacturer Register -------- */
#define I3CC_COMP_MANUFACTURER_RESETVALUE     _UINT32_(0x00)                                       /*  (I3CC_COMP_MANUFACTURER) Component Manufacturer Register  Reset Value */

#define I3CC_COMP_MANUFACTURER_MIPI_VENDOR_ID_Pos _UINT32_(0)                                          /* (I3CC_COMP_MANUFACTURER) MIPI Vendor ID Position */
#define I3CC_COMP_MANUFACTURER_MIPI_VENDOR_ID_Msk (_UINT32_(0xFFFFFFFF) << I3CC_COMP_MANUFACTURER_MIPI_VENDOR_ID_Pos) /* (I3CC_COMP_MANUFACTURER) MIPI Vendor ID Mask */
#define I3CC_COMP_MANUFACTURER_MIPI_VENDOR_ID(value) (I3CC_COMP_MANUFACTURER_MIPI_VENDOR_ID_Msk & (_UINT32_(value) << I3CC_COMP_MANUFACTURER_MIPI_VENDOR_ID_Pos)) /* Assignment of value for MIPI_VENDOR_ID in the I3CC_COMP_MANUFACTURER register */
#define I3CC_COMP_MANUFACTURER_Msk            _UINT32_(0xFFFFFFFF)                                 /* (I3CC_COMP_MANUFACTURER) Register Mask  */


/* -------- I3CC_COMP_VERSION : (I3CC Offset: 0x208) ( R/ 32) Component Version Register -------- */
#define I3CC_COMP_VERSION_RESETVALUE          _UINT32_(0x3130312A)                                 /*  (I3CC_COMP_VERSION) Component Version Register  Reset Value */

#define I3CC_COMP_VERSION_I3C_VER_ID_Pos      _UINT32_(0)                                          /* (I3CC_COMP_VERSION) I3CC Component Version Position */
#define I3CC_COMP_VERSION_I3C_VER_ID_Msk      (_UINT32_(0xFFFFFFFF) << I3CC_COMP_VERSION_I3C_VER_ID_Pos) /* (I3CC_COMP_VERSION) I3CC Component Version Mask */
#define I3CC_COMP_VERSION_I3C_VER_ID(value)   (I3CC_COMP_VERSION_I3C_VER_ID_Msk & (_UINT32_(value) << I3CC_COMP_VERSION_I3C_VER_ID_Pos)) /* Assignment of value for I3C_VER_ID in the I3CC_COMP_VERSION register */
#define I3CC_COMP_VERSION_Msk                 _UINT32_(0xFFFFFFFF)                                 /* (I3CC_COMP_VERSION) Register Mask  */


/* -------- I3CC_COMP_TYPE : (I3CC Offset: 0x20C) ( R/ 32) Component Type Register -------- */
#define I3CC_COMP_TYPE_RESETVALUE             _UINT32_(0x65613030)                                 /*  (I3CC_COMP_TYPE) Component Type Register  Reset Value */

#define I3CC_COMP_TYPE_I3C_PRODUCT_ID_Pos     _UINT32_(0)                                          /* (I3CC_COMP_TYPE) I3CC Component Type Position */
#define I3CC_COMP_TYPE_I3C_PRODUCT_ID_Msk     (_UINT32_(0xFFFFFFFF) << I3CC_COMP_TYPE_I3C_PRODUCT_ID_Pos) /* (I3CC_COMP_TYPE) I3CC Component Type Mask */
#define I3CC_COMP_TYPE_I3C_PRODUCT_ID(value)  (I3CC_COMP_TYPE_I3C_PRODUCT_ID_Msk & (_UINT32_(value) << I3CC_COMP_TYPE_I3C_PRODUCT_ID_Pos)) /* Assignment of value for I3C_PRODUCT_ID in the I3CC_COMP_TYPE register */
#define I3CC_COMP_TYPE_Msk                    _UINT32_(0xFFFFFFFF)                                 /* (I3CC_COMP_TYPE) Register Mask  */


/* -------- I3CC_BUS_TIMING_HEADER : (I3CC Offset: 0x210) ( R/ 32) Bus Timing Header Register -------- */
#define I3CC_BUS_TIMING_HEADER_RESETVALUE     _UINT32_(0xCC0)                                      /*  (I3CC_BUS_TIMING_HEADER) Bus Timing Header Register  Reset Value */

#define I3CC_BUS_TIMING_HEADER_CAP_ID_Pos     _UINT32_(0)                                          /* (I3CC_BUS_TIMING_HEADER) Extended Capability ID Position */
#define I3CC_BUS_TIMING_HEADER_CAP_ID_Msk     (_UINT32_(0xFF) << I3CC_BUS_TIMING_HEADER_CAP_ID_Pos) /* (I3CC_BUS_TIMING_HEADER) Extended Capability ID Mask */
#define I3CC_BUS_TIMING_HEADER_CAP_ID(value)  (I3CC_BUS_TIMING_HEADER_CAP_ID_Msk & (_UINT32_(value) << I3CC_BUS_TIMING_HEADER_CAP_ID_Pos)) /* Assignment of value for CAP_ID in the I3CC_BUS_TIMING_HEADER register */
#define I3CC_BUS_TIMING_HEADER_CAP_LEN_Pos    _UINT32_(8)                                          /* (I3CC_BUS_TIMING_HEADER) Capability Structure Length Position */
#define I3CC_BUS_TIMING_HEADER_CAP_LEN_Msk    (_UINT32_(0xFFFF) << I3CC_BUS_TIMING_HEADER_CAP_LEN_Pos) /* (I3CC_BUS_TIMING_HEADER) Capability Structure Length Mask */
#define I3CC_BUS_TIMING_HEADER_CAP_LEN(value) (I3CC_BUS_TIMING_HEADER_CAP_LEN_Msk & (_UINT32_(value) << I3CC_BUS_TIMING_HEADER_CAP_LEN_Pos)) /* Assignment of value for CAP_LEN in the I3CC_BUS_TIMING_HEADER register */
#define I3CC_BUS_TIMING_HEADER_Msk            _UINT32_(0x00FFFFFF)                                 /* (I3CC_BUS_TIMING_HEADER) Register Mask  */


/* -------- I3CC_SCL_I3C_OD_TIMING : (I3CC Offset: 0x214) (R/W 32) SCL I3C Open-Drain Timing Register -------- */
#define I3CC_SCL_I3C_OD_TIMING_RESETVALUE     _UINT32_(0xA0010)                                    /*  (I3CC_SCL_I3C_OD_TIMING) SCL I3C Open-Drain Timing Register  Reset Value */

#define I3CC_SCL_I3C_OD_TIMING_I3C_OD_LCNT_Pos _UINT32_(0)                                          /* (I3CC_SCL_I3C_OD_TIMING) I3C Open-Drain Low Count Position */
#define I3CC_SCL_I3C_OD_TIMING_I3C_OD_LCNT_Msk (_UINT32_(0xFF) << I3CC_SCL_I3C_OD_TIMING_I3C_OD_LCNT_Pos) /* (I3CC_SCL_I3C_OD_TIMING) I3C Open-Drain Low Count Mask */
#define I3CC_SCL_I3C_OD_TIMING_I3C_OD_LCNT(value) (I3CC_SCL_I3C_OD_TIMING_I3C_OD_LCNT_Msk & (_UINT32_(value) << I3CC_SCL_I3C_OD_TIMING_I3C_OD_LCNT_Pos)) /* Assignment of value for I3C_OD_LCNT in the I3CC_SCL_I3C_OD_TIMING register */
#define I3CC_SCL_I3C_OD_TIMING_I3C_OD_HCNT_Pos _UINT32_(16)                                         /* (I3CC_SCL_I3C_OD_TIMING) I3C Open-Drain High Count Position */
#define I3CC_SCL_I3C_OD_TIMING_I3C_OD_HCNT_Msk (_UINT32_(0xFF) << I3CC_SCL_I3C_OD_TIMING_I3C_OD_HCNT_Pos) /* (I3CC_SCL_I3C_OD_TIMING) I3C Open-Drain High Count Mask */
#define I3CC_SCL_I3C_OD_TIMING_I3C_OD_HCNT(value) (I3CC_SCL_I3C_OD_TIMING_I3C_OD_HCNT_Msk & (_UINT32_(value) << I3CC_SCL_I3C_OD_TIMING_I3C_OD_HCNT_Pos)) /* Assignment of value for I3C_OD_HCNT in the I3CC_SCL_I3C_OD_TIMING register */
#define I3CC_SCL_I3C_OD_TIMING_Msk            _UINT32_(0x00FF00FF)                                 /* (I3CC_SCL_I3C_OD_TIMING) Register Mask  */


/* -------- I3CC_SCL_I3C_PP_TIMING : (I3CC Offset: 0x218) (R/W 32) SCL I3C Push-Pull Timing Register -------- */
#define I3CC_SCL_I3C_PP_TIMING_RESETVALUE     _UINT32_(0xA000A)                                    /*  (I3CC_SCL_I3C_PP_TIMING) SCL I3C Push-Pull Timing Register  Reset Value */

#define I3CC_SCL_I3C_PP_TIMING_I3C_PP_LCNT_Pos _UINT32_(0)                                          /* (I3CC_SCL_I3C_PP_TIMING) I3C Push-Pull Low Count Position */
#define I3CC_SCL_I3C_PP_TIMING_I3C_PP_LCNT_Msk (_UINT32_(0xFF) << I3CC_SCL_I3C_PP_TIMING_I3C_PP_LCNT_Pos) /* (I3CC_SCL_I3C_PP_TIMING) I3C Push-Pull Low Count Mask */
#define I3CC_SCL_I3C_PP_TIMING_I3C_PP_LCNT(value) (I3CC_SCL_I3C_PP_TIMING_I3C_PP_LCNT_Msk & (_UINT32_(value) << I3CC_SCL_I3C_PP_TIMING_I3C_PP_LCNT_Pos)) /* Assignment of value for I3C_PP_LCNT in the I3CC_SCL_I3C_PP_TIMING register */
#define I3CC_SCL_I3C_PP_TIMING_I3C_PP_HCNT_Pos _UINT32_(16)                                         /* (I3CC_SCL_I3C_PP_TIMING) I3C Push-Pull High Count Position */
#define I3CC_SCL_I3C_PP_TIMING_I3C_PP_HCNT_Msk (_UINT32_(0xFF) << I3CC_SCL_I3C_PP_TIMING_I3C_PP_HCNT_Pos) /* (I3CC_SCL_I3C_PP_TIMING) I3C Push-Pull High Count Mask */
#define I3CC_SCL_I3C_PP_TIMING_I3C_PP_HCNT(value) (I3CC_SCL_I3C_PP_TIMING_I3C_PP_HCNT_Msk & (_UINT32_(value) << I3CC_SCL_I3C_PP_TIMING_I3C_PP_HCNT_Pos)) /* Assignment of value for I3C_PP_HCNT in the I3CC_SCL_I3C_PP_TIMING register */
#define I3CC_SCL_I3C_PP_TIMING_Msk            _UINT32_(0x00FF00FF)                                 /* (I3CC_SCL_I3C_PP_TIMING) Register Mask  */


/* -------- I3CC_SCL_I2C_FM_TIMING : (I3CC Offset: 0x21C) (R/W 32) SCL I2C Fast Mode Timing Register -------- */
#define I3CC_SCL_I2C_FM_TIMING_RESETVALUE     _UINT32_(0x100010)                                   /*  (I3CC_SCL_I2C_FM_TIMING) SCL I2C Fast Mode Timing Register  Reset Value */

#define I3CC_SCL_I2C_FM_TIMING_I2C_FM_LCNT_Pos _UINT32_(0)                                          /* (I3CC_SCL_I2C_FM_TIMING) I2C Fast Mode Low Count Position */
#define I3CC_SCL_I2C_FM_TIMING_I2C_FM_LCNT_Msk (_UINT32_(0xFF) << I3CC_SCL_I2C_FM_TIMING_I2C_FM_LCNT_Pos) /* (I3CC_SCL_I2C_FM_TIMING) I2C Fast Mode Low Count Mask */
#define I3CC_SCL_I2C_FM_TIMING_I2C_FM_LCNT(value) (I3CC_SCL_I2C_FM_TIMING_I2C_FM_LCNT_Msk & (_UINT32_(value) << I3CC_SCL_I2C_FM_TIMING_I2C_FM_LCNT_Pos)) /* Assignment of value for I2C_FM_LCNT in the I3CC_SCL_I2C_FM_TIMING register */
#define I3CC_SCL_I2C_FM_TIMING_I2C_FM_HCNT_Pos _UINT32_(16)                                         /* (I3CC_SCL_I2C_FM_TIMING) I2C Fast Mode High Count Position */
#define I3CC_SCL_I2C_FM_TIMING_I2C_FM_HCNT_Msk (_UINT32_(0xFF) << I3CC_SCL_I2C_FM_TIMING_I2C_FM_HCNT_Pos) /* (I3CC_SCL_I2C_FM_TIMING) I2C Fast Mode High Count Mask */
#define I3CC_SCL_I2C_FM_TIMING_I2C_FM_HCNT(value) (I3CC_SCL_I2C_FM_TIMING_I2C_FM_HCNT_Msk & (_UINT32_(value) << I3CC_SCL_I2C_FM_TIMING_I2C_FM_HCNT_Pos)) /* Assignment of value for I2C_FM_HCNT in the I3CC_SCL_I2C_FM_TIMING register */
#define I3CC_SCL_I2C_FM_TIMING_Msk            _UINT32_(0x00FF00FF)                                 /* (I3CC_SCL_I2C_FM_TIMING) Register Mask  */


/* -------- I3CC_SCL_I2C_FMP_TIMING : (I3CC Offset: 0x220) (R/W 32) SCL I2C Fast Mode Plus Timing Register -------- */
#define I3CC_SCL_I2C_FMP_TIMING_RESETVALUE    _UINT32_(0x100010)                                   /*  (I3CC_SCL_I2C_FMP_TIMING) SCL I2C Fast Mode Plus Timing Register  Reset Value */

#define I3CC_SCL_I2C_FMP_TIMING_I2C_FMP_LCNT_Pos _UINT32_(0)                                          /* (I3CC_SCL_I2C_FMP_TIMING) I2C Fast Mode Plus Low Count Position */
#define I3CC_SCL_I2C_FMP_TIMING_I2C_FMP_LCNT_Msk (_UINT32_(0xFF) << I3CC_SCL_I2C_FMP_TIMING_I2C_FMP_LCNT_Pos) /* (I3CC_SCL_I2C_FMP_TIMING) I2C Fast Mode Plus Low Count Mask */
#define I3CC_SCL_I2C_FMP_TIMING_I2C_FMP_LCNT(value) (I3CC_SCL_I2C_FMP_TIMING_I2C_FMP_LCNT_Msk & (_UINT32_(value) << I3CC_SCL_I2C_FMP_TIMING_I2C_FMP_LCNT_Pos)) /* Assignment of value for I2C_FMP_LCNT in the I3CC_SCL_I2C_FMP_TIMING register */
#define I3CC_SCL_I2C_FMP_TIMING_I2C_FMP_HCNT_Pos _UINT32_(16)                                         /* (I3CC_SCL_I2C_FMP_TIMING) I2C Fast Mode Plus High Count Position */
#define I3CC_SCL_I2C_FMP_TIMING_I2C_FMP_HCNT_Msk (_UINT32_(0xFF) << I3CC_SCL_I2C_FMP_TIMING_I2C_FMP_HCNT_Pos) /* (I3CC_SCL_I2C_FMP_TIMING) I2C Fast Mode Plus High Count Mask */
#define I3CC_SCL_I2C_FMP_TIMING_I2C_FMP_HCNT(value) (I3CC_SCL_I2C_FMP_TIMING_I2C_FMP_HCNT_Msk & (_UINT32_(value) << I3CC_SCL_I2C_FMP_TIMING_I2C_FMP_HCNT_Pos)) /* Assignment of value for I2C_FMP_HCNT in the I3CC_SCL_I2C_FMP_TIMING register */
#define I3CC_SCL_I2C_FMP_TIMING_Msk           _UINT32_(0x00FF00FF)                                 /* (I3CC_SCL_I2C_FMP_TIMING) Register Mask  */


/* -------- I3CC_SCL_I2C_SS_TIMING : (I3CC Offset: 0x224) (R/W 32) SCL I2C Standard Speed Timing Register -------- */
#define I3CC_SCL_I2C_SS_TIMING_RESETVALUE     _UINT32_(0x100010)                                   /*  (I3CC_SCL_I2C_SS_TIMING) SCL I2C Standard Speed Timing Register  Reset Value */

#define I3CC_SCL_I2C_SS_TIMING_I2C_SS_LCNT_Pos _UINT32_(0)                                          /* (I3CC_SCL_I2C_SS_TIMING) I2C Standard Speed Low Count Position */
#define I3CC_SCL_I2C_SS_TIMING_I2C_SS_LCNT_Msk (_UINT32_(0xFF) << I3CC_SCL_I2C_SS_TIMING_I2C_SS_LCNT_Pos) /* (I3CC_SCL_I2C_SS_TIMING) I2C Standard Speed Low Count Mask */
#define I3CC_SCL_I2C_SS_TIMING_I2C_SS_LCNT(value) (I3CC_SCL_I2C_SS_TIMING_I2C_SS_LCNT_Msk & (_UINT32_(value) << I3CC_SCL_I2C_SS_TIMING_I2C_SS_LCNT_Pos)) /* Assignment of value for I2C_SS_LCNT in the I3CC_SCL_I2C_SS_TIMING register */
#define I3CC_SCL_I2C_SS_TIMING_I2C_SS_HCNT_Pos _UINT32_(16)                                         /* (I3CC_SCL_I2C_SS_TIMING) I2C Standard Speed High Count Position */
#define I3CC_SCL_I2C_SS_TIMING_I2C_SS_HCNT_Msk (_UINT32_(0xFF) << I3CC_SCL_I2C_SS_TIMING_I2C_SS_HCNT_Pos) /* (I3CC_SCL_I2C_SS_TIMING) I2C Standard Speed High Count Mask */
#define I3CC_SCL_I2C_SS_TIMING_I2C_SS_HCNT(value) (I3CC_SCL_I2C_SS_TIMING_I2C_SS_HCNT_Msk & (_UINT32_(value) << I3CC_SCL_I2C_SS_TIMING_I2C_SS_HCNT_Pos)) /* Assignment of value for I2C_SS_HCNT in the I3CC_SCL_I2C_SS_TIMING register */
#define I3CC_SCL_I2C_SS_TIMING_Msk            _UINT32_(0x00FF00FF)                                 /* (I3CC_SCL_I2C_SS_TIMING) Register Mask  */


/* -------- I3CC_SCL_EXT_LCNT_TIMING : (I3CC Offset: 0x228) (R/W 32) SCL Extended Low Count Timing Register -------- */
#define I3CC_SCL_EXT_LCNT_TIMING_RESETVALUE   _UINT32_(0x20202020)                                 /*  (I3CC_SCL_EXT_LCNT_TIMING) SCL Extended Low Count Timing Register  Reset Value */

#define I3CC_SCL_EXT_LCNT_TIMING_I3C_EXT_LCNT_1_Pos _UINT32_(0)                                          /* (I3CC_SCL_EXT_LCNT_TIMING) I3C Extended Low Count Register 1 Position */
#define I3CC_SCL_EXT_LCNT_TIMING_I3C_EXT_LCNT_1_Msk (_UINT32_(0xFF) << I3CC_SCL_EXT_LCNT_TIMING_I3C_EXT_LCNT_1_Pos) /* (I3CC_SCL_EXT_LCNT_TIMING) I3C Extended Low Count Register 1 Mask */
#define I3CC_SCL_EXT_LCNT_TIMING_I3C_EXT_LCNT_1(value) (I3CC_SCL_EXT_LCNT_TIMING_I3C_EXT_LCNT_1_Msk & (_UINT32_(value) << I3CC_SCL_EXT_LCNT_TIMING_I3C_EXT_LCNT_1_Pos)) /* Assignment of value for I3C_EXT_LCNT_1 in the I3CC_SCL_EXT_LCNT_TIMING register */
#define I3CC_SCL_EXT_LCNT_TIMING_I3C_EXT_LCNT_2_Pos _UINT32_(8)                                          /* (I3CC_SCL_EXT_LCNT_TIMING) I3C Extended Low Count Register 2 Position */
#define I3CC_SCL_EXT_LCNT_TIMING_I3C_EXT_LCNT_2_Msk (_UINT32_(0xFF) << I3CC_SCL_EXT_LCNT_TIMING_I3C_EXT_LCNT_2_Pos) /* (I3CC_SCL_EXT_LCNT_TIMING) I3C Extended Low Count Register 2 Mask */
#define I3CC_SCL_EXT_LCNT_TIMING_I3C_EXT_LCNT_2(value) (I3CC_SCL_EXT_LCNT_TIMING_I3C_EXT_LCNT_2_Msk & (_UINT32_(value) << I3CC_SCL_EXT_LCNT_TIMING_I3C_EXT_LCNT_2_Pos)) /* Assignment of value for I3C_EXT_LCNT_2 in the I3CC_SCL_EXT_LCNT_TIMING register */
#define I3CC_SCL_EXT_LCNT_TIMING_I3C_EXT_LCNT_3_Pos _UINT32_(16)                                         /* (I3CC_SCL_EXT_LCNT_TIMING) I3C Extended Low Count Register 3 Position */
#define I3CC_SCL_EXT_LCNT_TIMING_I3C_EXT_LCNT_3_Msk (_UINT32_(0xFF) << I3CC_SCL_EXT_LCNT_TIMING_I3C_EXT_LCNT_3_Pos) /* (I3CC_SCL_EXT_LCNT_TIMING) I3C Extended Low Count Register 3 Mask */
#define I3CC_SCL_EXT_LCNT_TIMING_I3C_EXT_LCNT_3(value) (I3CC_SCL_EXT_LCNT_TIMING_I3C_EXT_LCNT_3_Msk & (_UINT32_(value) << I3CC_SCL_EXT_LCNT_TIMING_I3C_EXT_LCNT_3_Pos)) /* Assignment of value for I3C_EXT_LCNT_3 in the I3CC_SCL_EXT_LCNT_TIMING register */
#define I3CC_SCL_EXT_LCNT_TIMING_I3C_EXT_LCNT_4_Pos _UINT32_(24)                                         /* (I3CC_SCL_EXT_LCNT_TIMING) I3C Extended Low Count Register 4 Position */
#define I3CC_SCL_EXT_LCNT_TIMING_I3C_EXT_LCNT_4_Msk (_UINT32_(0xFF) << I3CC_SCL_EXT_LCNT_TIMING_I3C_EXT_LCNT_4_Pos) /* (I3CC_SCL_EXT_LCNT_TIMING) I3C Extended Low Count Register 4 Mask */
#define I3CC_SCL_EXT_LCNT_TIMING_I3C_EXT_LCNT_4(value) (I3CC_SCL_EXT_LCNT_TIMING_I3C_EXT_LCNT_4_Msk & (_UINT32_(value) << I3CC_SCL_EXT_LCNT_TIMING_I3C_EXT_LCNT_4_Pos)) /* Assignment of value for I3C_EXT_LCNT_4 in the I3CC_SCL_EXT_LCNT_TIMING register */
#define I3CC_SCL_EXT_LCNT_TIMING_Msk          _UINT32_(0xFFFFFFFF)                                 /* (I3CC_SCL_EXT_LCNT_TIMING) Register Mask  */


/* -------- I3CC_SCL_EXT_TERMN_LCNT_TIMING : (I3CC Offset: 0x22C) (R/W 32) SCL Termination Bit Low Count Timing Register -------- */
#define I3CC_SCL_EXT_TERMN_LCNT_TIMING_RESETVALUE _UINT32_(0x30000)                                    /*  (I3CC_SCL_EXT_TERMN_LCNT_TIMING) SCL Termination Bit Low Count Timing Register  Reset Value */

#define I3CC_SCL_EXT_TERMN_LCNT_TIMING_I3C_EXT_TERMN_LCNT_Pos _UINT32_(0)                                          /* (I3CC_SCL_EXT_TERMN_LCNT_TIMING) I3C Read Termination Bit Low count. Position */
#define I3CC_SCL_EXT_TERMN_LCNT_TIMING_I3C_EXT_TERMN_LCNT_Msk (_UINT32_(0xF) << I3CC_SCL_EXT_TERMN_LCNT_TIMING_I3C_EXT_TERMN_LCNT_Pos) /* (I3CC_SCL_EXT_TERMN_LCNT_TIMING) I3C Read Termination Bit Low count. Mask */
#define I3CC_SCL_EXT_TERMN_LCNT_TIMING_I3C_EXT_TERMN_LCNT(value) (I3CC_SCL_EXT_TERMN_LCNT_TIMING_I3C_EXT_TERMN_LCNT_Msk & (_UINT32_(value) << I3CC_SCL_EXT_TERMN_LCNT_TIMING_I3C_EXT_TERMN_LCNT_Pos)) /* Assignment of value for I3C_EXT_TERMN_LCNT in the I3CC_SCL_EXT_TERMN_LCNT_TIMING register */
#define I3CC_SCL_EXT_TERMN_LCNT_TIMING_Msk    _UINT32_(0x0000000F)                                 /* (I3CC_SCL_EXT_TERMN_LCNT_TIMING) Register Mask  */


/* -------- I3CC_SDA_HOLD_SWITCH_DLY_TIMING : (I3CC Offset: 0x230) (R/W 32) SDA Hold and Mode Switch Delay Timing Register -------- */
#define I3CC_SDA_HOLD_SWITCH_DLY_TIMING_RESETVALUE _UINT32_(0x10000)                                    /*  (I3CC_SDA_HOLD_SWITCH_DLY_TIMING) SDA Hold and Mode Switch Delay Timing Register  Reset Value */

#define I3CC_SDA_HOLD_SWITCH_DLY_TIMING_SDA_OD_PP_SWITCH_DLY_Pos _UINT32_(0)                                          /* (I3CC_SDA_HOLD_SWITCH_DLY_TIMING) I3CC_SDA Open-Drain to Push-Pull Switch Delay Position */
#define I3CC_SDA_HOLD_SWITCH_DLY_TIMING_SDA_OD_PP_SWITCH_DLY_Msk (_UINT32_(0x7) << I3CC_SDA_HOLD_SWITCH_DLY_TIMING_SDA_OD_PP_SWITCH_DLY_Pos) /* (I3CC_SDA_HOLD_SWITCH_DLY_TIMING) I3CC_SDA Open-Drain to Push-Pull Switch Delay Mask */
#define I3CC_SDA_HOLD_SWITCH_DLY_TIMING_SDA_OD_PP_SWITCH_DLY(value) (I3CC_SDA_HOLD_SWITCH_DLY_TIMING_SDA_OD_PP_SWITCH_DLY_Msk & (_UINT32_(value) << I3CC_SDA_HOLD_SWITCH_DLY_TIMING_SDA_OD_PP_SWITCH_DLY_Pos)) /* Assignment of value for SDA_OD_PP_SWITCH_DLY in the I3CC_SDA_HOLD_SWITCH_DLY_TIMING register */
#define I3CC_SDA_HOLD_SWITCH_DLY_TIMING_SDA_PP_OD_SWITCH_DLY_Pos _UINT32_(8)                                          /* (I3CC_SDA_HOLD_SWITCH_DLY_TIMING) I3CC_SDA Push-Pull to Open-Drain Switch Delay Position */
#define I3CC_SDA_HOLD_SWITCH_DLY_TIMING_SDA_PP_OD_SWITCH_DLY_Msk (_UINT32_(0x7) << I3CC_SDA_HOLD_SWITCH_DLY_TIMING_SDA_PP_OD_SWITCH_DLY_Pos) /* (I3CC_SDA_HOLD_SWITCH_DLY_TIMING) I3CC_SDA Push-Pull to Open-Drain Switch Delay Mask */
#define I3CC_SDA_HOLD_SWITCH_DLY_TIMING_SDA_PP_OD_SWITCH_DLY(value) (I3CC_SDA_HOLD_SWITCH_DLY_TIMING_SDA_PP_OD_SWITCH_DLY_Msk & (_UINT32_(value) << I3CC_SDA_HOLD_SWITCH_DLY_TIMING_SDA_PP_OD_SWITCH_DLY_Pos)) /* Assignment of value for SDA_PP_OD_SWITCH_DLY in the I3CC_SDA_HOLD_SWITCH_DLY_TIMING register */
#define I3CC_SDA_HOLD_SWITCH_DLY_TIMING_SDA_TX_HOLD_Pos _UINT32_(16)                                         /* (I3CC_SDA_HOLD_SWITCH_DLY_TIMING) I3CC_SDA Transmit Hold Position */
#define I3CC_SDA_HOLD_SWITCH_DLY_TIMING_SDA_TX_HOLD_Msk (_UINT32_(0x7) << I3CC_SDA_HOLD_SWITCH_DLY_TIMING_SDA_TX_HOLD_Pos) /* (I3CC_SDA_HOLD_SWITCH_DLY_TIMING) I3CC_SDA Transmit Hold Mask */
#define I3CC_SDA_HOLD_SWITCH_DLY_TIMING_SDA_TX_HOLD(value) (I3CC_SDA_HOLD_SWITCH_DLY_TIMING_SDA_TX_HOLD_Msk & (_UINT32_(value) << I3CC_SDA_HOLD_SWITCH_DLY_TIMING_SDA_TX_HOLD_Pos)) /* Assignment of value for SDA_TX_HOLD in the I3CC_SDA_HOLD_SWITCH_DLY_TIMING register */
#define I3CC_SDA_HOLD_SWITCH_DLY_TIMING_Msk   _UINT32_(0x00070707)                                 /* (I3CC_SDA_HOLD_SWITCH_DLY_TIMING) Register Mask  */


/* -------- I3CC_BUS_FREE_TIMING : (I3CC Offset: 0x234) (R/W 32) Bus Free Timing Register -------- */
#define I3CC_BUS_FREE_TIMING_RESETVALUE       _UINT32_(0x20)                                       /*  (I3CC_BUS_FREE_TIMING) Bus Free Timing Register  Reset Value */

#define I3CC_BUS_FREE_TIMING_I3C_HC_FREE_Pos  _UINT32_(0)                                          /* (I3CC_BUS_FREE_TIMING) I3C I3CC Free Count Position */
#define I3CC_BUS_FREE_TIMING_I3C_HC_FREE_Msk  (_UINT32_(0xFFFF) << I3CC_BUS_FREE_TIMING_I3C_HC_FREE_Pos) /* (I3CC_BUS_FREE_TIMING) I3C I3CC Free Count Mask */
#define I3CC_BUS_FREE_TIMING_I3C_HC_FREE(value) (I3CC_BUS_FREE_TIMING_I3C_HC_FREE_Msk & (_UINT32_(value) << I3CC_BUS_FREE_TIMING_I3C_HC_FREE_Pos)) /* Assignment of value for I3C_HC_FREE in the I3CC_BUS_FREE_TIMING register */
#define I3CC_BUS_FREE_TIMING_Msk              _UINT32_(0x0000FFFF)                                 /* (I3CC_BUS_FREE_TIMING) Register Mask  */


/* -------- I3CC_SCL_LOW_MST_EXT_TIMEOUT : (I3CC Offset: 0x23C) (R/W 32) SCL Low Master Extended Timeout Register -------- */
#define I3CC_SCL_LOW_MST_EXT_TIMEOUT_RESETVALUE _UINT32_(0x3567E0)                                   /*  (I3CC_SCL_LOW_MST_EXT_TIMEOUT) SCL Low Master Extended Timeout Register  Reset Value */

#define I3CC_SCL_LOW_MST_EXT_TIMEOUT_SCL_LOW_MST_TIMEOUT_COUNT_Pos _UINT32_(0)                                          /* (I3CC_SCL_LOW_MST_EXT_TIMEOUT) Low Bus Reset Pattern Count Position */
#define I3CC_SCL_LOW_MST_EXT_TIMEOUT_SCL_LOW_MST_TIMEOUT_COUNT_Msk (_UINT32_(0x3FFFFFF) << I3CC_SCL_LOW_MST_EXT_TIMEOUT_SCL_LOW_MST_TIMEOUT_COUNT_Pos) /* (I3CC_SCL_LOW_MST_EXT_TIMEOUT) Low Bus Reset Pattern Count Mask */
#define I3CC_SCL_LOW_MST_EXT_TIMEOUT_SCL_LOW_MST_TIMEOUT_COUNT(value) (I3CC_SCL_LOW_MST_EXT_TIMEOUT_SCL_LOW_MST_TIMEOUT_COUNT_Msk & (_UINT32_(value) << I3CC_SCL_LOW_MST_EXT_TIMEOUT_SCL_LOW_MST_TIMEOUT_COUNT_Pos)) /* Assignment of value for SCL_LOW_MST_TIMEOUT_COUNT in the I3CC_SCL_LOW_MST_EXT_TIMEOUT register */
#define I3CC_SCL_LOW_MST_EXT_TIMEOUT_Msk      _UINT32_(0x03FFFFFF)                                 /* (I3CC_SCL_LOW_MST_EXT_TIMEOUT) Register Mask  */


/* -------- I3CC_DS_EXTCAP_HEADER : (I3CC Offset: 0x240) ( R/ 32) Debug Specific Header Register -------- */
#define I3CC_DS_EXTCAP_HEADER_RESETVALUE      _UINT32_(0x50C)                                      /*  (I3CC_DS_EXTCAP_HEADER) Debug Specific Header Register  Reset Value */

#define I3CC_DS_EXTCAP_HEADER_CAP_ID_Pos      _UINT32_(0)                                          /* (I3CC_DS_EXTCAP_HEADER) Extended Capability ID Position */
#define I3CC_DS_EXTCAP_HEADER_CAP_ID_Msk      (_UINT32_(0xFF) << I3CC_DS_EXTCAP_HEADER_CAP_ID_Pos) /* (I3CC_DS_EXTCAP_HEADER) Extended Capability ID Mask */
#define I3CC_DS_EXTCAP_HEADER_CAP_ID(value)   (I3CC_DS_EXTCAP_HEADER_CAP_ID_Msk & (_UINT32_(value) << I3CC_DS_EXTCAP_HEADER_CAP_ID_Pos)) /* Assignment of value for CAP_ID in the I3CC_DS_EXTCAP_HEADER register */
#define I3CC_DS_EXTCAP_HEADER_CAP_LEN_Pos     _UINT32_(8)                                          /* (I3CC_DS_EXTCAP_HEADER) Capability Structure Length Position */
#define I3CC_DS_EXTCAP_HEADER_CAP_LEN_Msk     (_UINT32_(0xFFFF) << I3CC_DS_EXTCAP_HEADER_CAP_LEN_Pos) /* (I3CC_DS_EXTCAP_HEADER) Capability Structure Length Mask */
#define I3CC_DS_EXTCAP_HEADER_CAP_LEN(value)  (I3CC_DS_EXTCAP_HEADER_CAP_LEN_Msk & (_UINT32_(value) << I3CC_DS_EXTCAP_HEADER_CAP_LEN_Pos)) /* Assignment of value for CAP_LEN in the I3CC_DS_EXTCAP_HEADER register */
#define I3CC_DS_EXTCAP_HEADER_Msk             _UINT32_(0x00FFFFFF)                                 /* (I3CC_DS_EXTCAP_HEADER) Register Mask  */


/* -------- I3CC_QUEUE_STATUS_LEVEL : (I3CC Offset: 0x244) ( R/ 32) Queue Status Level Register -------- */
#define I3CC_QUEUE_STATUS_LEVEL_RESETVALUE    _UINT32_(0x10)                                       /*  (I3CC_QUEUE_STATUS_LEVEL) Queue Status Level Register  Reset Value */

#define I3CC_QUEUE_STATUS_LEVEL_CMD_QUEUE_FREE_LVL_Pos _UINT32_(0)                                          /* (I3CC_QUEUE_STATUS_LEVEL) Command Queue Free Buffer Level Position */
#define I3CC_QUEUE_STATUS_LEVEL_CMD_QUEUE_FREE_LVL_Msk (_UINT32_(0xFF) << I3CC_QUEUE_STATUS_LEVEL_CMD_QUEUE_FREE_LVL_Pos) /* (I3CC_QUEUE_STATUS_LEVEL) Command Queue Free Buffer Level Mask */
#define I3CC_QUEUE_STATUS_LEVEL_CMD_QUEUE_FREE_LVL(value) (I3CC_QUEUE_STATUS_LEVEL_CMD_QUEUE_FREE_LVL_Msk & (_UINT32_(value) << I3CC_QUEUE_STATUS_LEVEL_CMD_QUEUE_FREE_LVL_Pos)) /* Assignment of value for CMD_QUEUE_FREE_LVL in the I3CC_QUEUE_STATUS_LEVEL register */
#define I3CC_QUEUE_STATUS_LEVEL_RESPONSE_BUFFER_LVL_Pos _UINT32_(8)                                          /* (I3CC_QUEUE_STATUS_LEVEL) Response Buffer Level Position */
#define I3CC_QUEUE_STATUS_LEVEL_RESPONSE_BUFFER_LVL_Msk (_UINT32_(0xFF) << I3CC_QUEUE_STATUS_LEVEL_RESPONSE_BUFFER_LVL_Pos) /* (I3CC_QUEUE_STATUS_LEVEL) Response Buffer Level Mask */
#define I3CC_QUEUE_STATUS_LEVEL_RESPONSE_BUFFER_LVL(value) (I3CC_QUEUE_STATUS_LEVEL_RESPONSE_BUFFER_LVL_Msk & (_UINT32_(value) << I3CC_QUEUE_STATUS_LEVEL_RESPONSE_BUFFER_LVL_Pos)) /* Assignment of value for RESPONSE_BUFFER_LVL in the I3CC_QUEUE_STATUS_LEVEL register */
#define I3CC_QUEUE_STATUS_LEVEL_IBI_BUFFER_LVL_Pos _UINT32_(16)                                         /* (I3CC_QUEUE_STATUS_LEVEL) IBI Buffer Level Position */
#define I3CC_QUEUE_STATUS_LEVEL_IBI_BUFFER_LVL_Msk (_UINT32_(0xFF) << I3CC_QUEUE_STATUS_LEVEL_IBI_BUFFER_LVL_Pos) /* (I3CC_QUEUE_STATUS_LEVEL) IBI Buffer Level Mask */
#define I3CC_QUEUE_STATUS_LEVEL_IBI_BUFFER_LVL(value) (I3CC_QUEUE_STATUS_LEVEL_IBI_BUFFER_LVL_Msk & (_UINT32_(value) << I3CC_QUEUE_STATUS_LEVEL_IBI_BUFFER_LVL_Pos)) /* Assignment of value for IBI_BUFFER_LVL in the I3CC_QUEUE_STATUS_LEVEL register */
#define I3CC_QUEUE_STATUS_LEVEL_IBI_STATUS_CNT_Pos _UINT32_(24)                                         /* (I3CC_QUEUE_STATUS_LEVEL) IBI Buffer Status Count Position */
#define I3CC_QUEUE_STATUS_LEVEL_IBI_STATUS_CNT_Msk (_UINT32_(0xFF) << I3CC_QUEUE_STATUS_LEVEL_IBI_STATUS_CNT_Pos) /* (I3CC_QUEUE_STATUS_LEVEL) IBI Buffer Status Count Mask */
#define I3CC_QUEUE_STATUS_LEVEL_IBI_STATUS_CNT(value) (I3CC_QUEUE_STATUS_LEVEL_IBI_STATUS_CNT_Msk & (_UINT32_(value) << I3CC_QUEUE_STATUS_LEVEL_IBI_STATUS_CNT_Pos)) /* Assignment of value for IBI_STATUS_CNT in the I3CC_QUEUE_STATUS_LEVEL register */
#define I3CC_QUEUE_STATUS_LEVEL_Msk           _UINT32_(0xFFFFFFFF)                                 /* (I3CC_QUEUE_STATUS_LEVEL) Register Mask  */


/* -------- I3CC_DATA_BUFFER_STATUS_LEVEL : (I3CC Offset: 0x248) ( R/ 32) Data Buffer Status Level Register -------- */
#define I3CC_DATA_BUFFER_STATUS_LEVEL_RESETVALUE _UINT32_(0x40)                                       /*  (I3CC_DATA_BUFFER_STATUS_LEVEL) Data Buffer Status Level Register  Reset Value */

#define I3CC_DATA_BUFFER_STATUS_LEVEL_TX_BUF_FREE_LVL_Pos _UINT32_(0)                                          /* (I3CC_DATA_BUFFER_STATUS_LEVEL) Transmit Data Buffer Status Count Position */
#define I3CC_DATA_BUFFER_STATUS_LEVEL_TX_BUF_FREE_LVL_Msk (_UINT32_(0xFF) << I3CC_DATA_BUFFER_STATUS_LEVEL_TX_BUF_FREE_LVL_Pos) /* (I3CC_DATA_BUFFER_STATUS_LEVEL) Transmit Data Buffer Status Count Mask */
#define I3CC_DATA_BUFFER_STATUS_LEVEL_TX_BUF_FREE_LVL(value) (I3CC_DATA_BUFFER_STATUS_LEVEL_TX_BUF_FREE_LVL_Msk & (_UINT32_(value) << I3CC_DATA_BUFFER_STATUS_LEVEL_TX_BUF_FREE_LVL_Pos)) /* Assignment of value for TX_BUF_FREE_LVL in the I3CC_DATA_BUFFER_STATUS_LEVEL register */
#define I3CC_DATA_BUFFER_STATUS_LEVEL_RX_BUF_LVL_Pos _UINT32_(8)                                          /* (I3CC_DATA_BUFFER_STATUS_LEVEL) Receive Data Buffer Status Count Position */
#define I3CC_DATA_BUFFER_STATUS_LEVEL_RX_BUF_LVL_Msk (_UINT32_(0xFF) << I3CC_DATA_BUFFER_STATUS_LEVEL_RX_BUF_LVL_Pos) /* (I3CC_DATA_BUFFER_STATUS_LEVEL) Receive Data Buffer Status Count Mask */
#define I3CC_DATA_BUFFER_STATUS_LEVEL_RX_BUF_LVL(value) (I3CC_DATA_BUFFER_STATUS_LEVEL_RX_BUF_LVL_Msk & (_UINT32_(value) << I3CC_DATA_BUFFER_STATUS_LEVEL_RX_BUF_LVL_Pos)) /* Assignment of value for RX_BUF_LVL in the I3CC_DATA_BUFFER_STATUS_LEVEL register */
#define I3CC_DATA_BUFFER_STATUS_LEVEL_Msk     _UINT32_(0x0000FFFF)                                 /* (I3CC_DATA_BUFFER_STATUS_LEVEL) Register Mask  */


/* -------- I3CC_PRESENT_STATE_DEBUG : (I3CC Offset: 0x24C) ( R/ 32) Present State Debug Register -------- */
#define I3CC_PRESENT_STATE_DEBUG_RESETVALUE   _UINT32_(0x10000003)                                 /*  (I3CC_PRESENT_STATE_DEBUG) Present State Debug Register  Reset Value */

#define I3CC_PRESENT_STATE_DEBUG_SCL_LINE_SIGNAL_LEVEL_Pos _UINT32_(0)                                          /* (I3CC_PRESENT_STATE_DEBUG) I3CC_SCL Line Signal Level Position */
#define I3CC_PRESENT_STATE_DEBUG_SCL_LINE_SIGNAL_LEVEL_Msk (_UINT32_(0x1) << I3CC_PRESENT_STATE_DEBUG_SCL_LINE_SIGNAL_LEVEL_Pos) /* (I3CC_PRESENT_STATE_DEBUG) I3CC_SCL Line Signal Level Mask */
#define I3CC_PRESENT_STATE_DEBUG_SCL_LINE_SIGNAL_LEVEL(value) (I3CC_PRESENT_STATE_DEBUG_SCL_LINE_SIGNAL_LEVEL_Msk & (_UINT32_(value) << I3CC_PRESENT_STATE_DEBUG_SCL_LINE_SIGNAL_LEVEL_Pos)) /* Assignment of value for SCL_LINE_SIGNAL_LEVEL in the I3CC_PRESENT_STATE_DEBUG register */
#define I3CC_PRESENT_STATE_DEBUG_SDA_LINE_SIGNAL_LEVEL_Pos _UINT32_(1)                                          /* (I3CC_PRESENT_STATE_DEBUG) SDA Line Signal Level Position */
#define I3CC_PRESENT_STATE_DEBUG_SDA_LINE_SIGNAL_LEVEL_Msk (_UINT32_(0x1) << I3CC_PRESENT_STATE_DEBUG_SDA_LINE_SIGNAL_LEVEL_Pos) /* (I3CC_PRESENT_STATE_DEBUG) SDA Line Signal Level Mask */
#define I3CC_PRESENT_STATE_DEBUG_SDA_LINE_SIGNAL_LEVEL(value) (I3CC_PRESENT_STATE_DEBUG_SDA_LINE_SIGNAL_LEVEL_Msk & (_UINT32_(value) << I3CC_PRESENT_STATE_DEBUG_SDA_LINE_SIGNAL_LEVEL_Pos)) /* Assignment of value for SDA_LINE_SIGNAL_LEVEL in the I3CC_PRESENT_STATE_DEBUG register */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_Pos _UINT32_(8)                                          /* (I3CC_PRESENT_STATE_DEBUG) I3CC Transfer Type Status Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_Msk (_UINT32_(0x3F) << I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) I3CC Transfer Type Status Mask */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS(value) (I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_Msk & (_UINT32_(value) << I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_Pos)) /* Assignment of value for CM_TFR_STATUS in the I3CC_PRESENT_STATE_DEBUG register */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_IDLE_Val _UINT32_(0x0)                                        /* (I3CC_PRESENT_STATE_DEBUG) I3CC is in the Idle state, waiting for commands from the application, or for target-initiated IBIs  */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_BCAST_WRITE_Val _UINT32_(0x1)                                        /* (I3CC_PRESENT_STATE_DEBUG) Broadcast CCC Write transfer  */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_TARGET_WRITE_Val _UINT32_(0x2)                                        /* (I3CC_PRESENT_STATE_DEBUG) Directed CCC Write transfer  */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_TARGET_READ_Val _UINT32_(0x3)                                        /* (I3CC_PRESENT_STATE_DEBUG) Directed CCC Read transfer  */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_ENTDAA_Val _UINT32_(0x4)                                        /* (I3CC_PRESENT_STATE_DEBUG) ENTDAA Address Assignment transfer  */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_SETDASA_Val _UINT32_(0x5)                                        /* (I3CC_PRESENT_STATE_DEBUG) SETDASA Address Assignment transfer  */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_I3C_SDR_WRITE_Val _UINT32_(0x6)                                        /* (I3CC_PRESENT_STATE_DEBUG) Private I3C SDR Write transfer  */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_I3C_SDR_READ_Val _UINT32_(0x7)                                        /* (I3CC_PRESENT_STATE_DEBUG) Private I3C SDR Read transfer  */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_I2C_SDR_WRITE_Val _UINT32_(0x8)                                        /* (I3CC_PRESENT_STATE_DEBUG) Private I2C SDR Write transfer  */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_I2C_SDR_READ_Val _UINT32_(0x9)                                        /* (I3CC_PRESENT_STATE_DEBUG) Private I2C SDR Read transfer  */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_HDR_DDR_WRITE_Val _UINT32_(0xC)                                        /* (I3CC_PRESENT_STATE_DEBUG) Private HDR Double-Data Rate (DDR) Write transfer  */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_HDR_DDR_READ_Val _UINT32_(0xD)                                        /* (I3CC_PRESENT_STATE_DEBUG) Private HDR Double-Data Rate (DDR) Read transfer  */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_IBI_Val _UINT32_(0xE)                                        /* (I3CC_PRESENT_STATE_DEBUG) Servicing IBI transfer  */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_HALTED_Val _UINT32_(0xF)                                        /* (I3CC_PRESENT_STATE_DEBUG) I3CC is in the Halt state, waiting for the application to resume through I3CC_HC_CONTROL  */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_IDLE (I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_IDLE_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) I3CC is in the Idle state, waiting for commands from the application, or for target-initiated IBIs Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_BCAST_WRITE (I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_BCAST_WRITE_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) Broadcast CCC Write transfer Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_TARGET_WRITE (I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_TARGET_WRITE_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) Directed CCC Write transfer Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_TARGET_READ (I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_TARGET_READ_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) Directed CCC Read transfer Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_ENTDAA (I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_ENTDAA_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) ENTDAA Address Assignment transfer Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_SETDASA (I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_SETDASA_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) SETDASA Address Assignment transfer Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_I3C_SDR_WRITE (I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_I3C_SDR_WRITE_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) Private I3C SDR Write transfer Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_I3C_SDR_READ (I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_I3C_SDR_READ_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) Private I3C SDR Read transfer Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_I2C_SDR_WRITE (I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_I2C_SDR_WRITE_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) Private I2C SDR Write transfer Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_I2C_SDR_READ (I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_I2C_SDR_READ_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) Private I2C SDR Read transfer Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_HDR_DDR_WRITE (I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_HDR_DDR_WRITE_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) Private HDR Double-Data Rate (DDR) Write transfer Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_HDR_DDR_READ (I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_HDR_DDR_READ_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) Private HDR Double-Data Rate (DDR) Read transfer Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_IBI (I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_IBI_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) Servicing IBI transfer Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_HALTED (I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_HALTED_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) I3CC is in the Halt state, waiting for the application to resume through I3CC_HC_CONTROL Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_Pos _UINT32_(16)                                         /* (I3CC_PRESENT_STATE_DEBUG) I3CC Transfer State Status Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_Msk (_UINT32_(0x3F) << I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) I3CC Transfer State Status Mask */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS(value) (I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_Msk & (_UINT32_(value) << I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_Pos)) /* Assignment of value for CM_TFR_ST_STATUS in the I3CC_PRESENT_STATE_DEBUG register */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_IDLE_Val _UINT32_(0x0)                                        /* (I3CC_PRESENT_STATE_DEBUG) I3CC is in the Idle state, waiting for commands from the application or for target-initiated IBIs  */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_START_Val _UINT32_(0x1)                                        /* (I3CC_PRESENT_STATE_DEBUG) START Generation state  */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_RESTART_Val _UINT32_(0x2)                                        /* (I3CC_PRESENT_STATE_DEBUG) RESTART Generation state  */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_STOP_Val _UINT32_(0x3)                                        /* (I3CC_PRESENT_STATE_DEBUG) STOP Generation state  */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_START_HOLD_Val _UINT32_(0x4)                                        /* (I3CC_PRESENT_STATE_DEBUG) START Hold Generation for the target-initiated START state  */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_BCAST_WRITE_Val _UINT32_(0x5)                                        /* (I3CC_PRESENT_STATE_DEBUG) Broadcast Write Address Header(0x7E,W) Generation state  */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_BCAST_READ_Val _UINT32_(0x6)                                        /* (I3CC_PRESENT_STATE_DEBUG) Broadcast Read Address Header(0x7E,R) Generation state  */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_DAA_Val _UINT32_(0x7)                                        /* (I3CC_PRESENT_STATE_DEBUG) Dynamic Address Assignment state  */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_ADDR_Val _UINT32_(0x8)                                        /* (I3CC_PRESENT_STATE_DEBUG) Target Address Generation state  */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_CCC_Val _UINT32_(0xB)                                        /* (I3CC_PRESENT_STATE_DEBUG) CCC Byte Generation state  */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_HDR_Val _UINT32_(0xC)                                        /* (I3CC_PRESENT_STATE_DEBUG) HDR Command Generation state  */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_WR_Val _UINT32_(0xD)                                        /* (I3CC_PRESENT_STATE_DEBUG) Write Data Transfer state  */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_RD_Val _UINT32_(0xE)                                        /* (I3CC_PRESENT_STATE_DEBUG) Read Data Transfer state  */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_IBI_ADDR_READ_Val _UINT32_(0xF)                                        /* (I3CC_PRESENT_STATE_DEBUG) IBI Address Read Data state  */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_IBI_DIS_Val _UINT32_(0x10)                                       /* (I3CC_PRESENT_STATE_DEBUG) IBI Auto-Disable state  */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_HDR_DDR_CRC_Val _UINT32_(0x11)                                       /* (I3CC_PRESENT_STATE_DEBUG) HDR-DDR CRC Data Generation/Receive state  */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_CLOCK_EXT_Val _UINT32_(0x12)                                       /* (I3CC_PRESENT_STATE_DEBUG) Clock Extension state  */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_HALT_Val _UINT32_(0x13)                                       /* (I3CC_PRESENT_STATE_DEBUG) Halt state  */
#define   I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_IBI_READ_Val _UINT32_(0x14)                                       /* (I3CC_PRESENT_STATE_DEBUG) IBI Read Data state  */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_IDLE (I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_IDLE_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) I3CC is in the Idle state, waiting for commands from the application or for target-initiated IBIs Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_START (I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_START_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) START Generation state Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_RESTART (I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_RESTART_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) RESTART Generation state Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_STOP (I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_STOP_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) STOP Generation state Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_START_HOLD (I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_START_HOLD_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) START Hold Generation for the target-initiated START state Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_BCAST_WRITE (I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_BCAST_WRITE_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) Broadcast Write Address Header(0x7E,W) Generation state Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_BCAST_READ (I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_BCAST_READ_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) Broadcast Read Address Header(0x7E,R) Generation state Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_DAA (I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_DAA_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) Dynamic Address Assignment state Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_ADDR (I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_ADDR_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) Target Address Generation state Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_CCC (I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_CCC_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) CCC Byte Generation state Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_HDR (I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_HDR_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) HDR Command Generation state Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_WR (I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_WR_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) Write Data Transfer state Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_RD (I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_RD_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) Read Data Transfer state Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_IBI_ADDR_READ (I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_IBI_ADDR_READ_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) IBI Address Read Data state Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_IBI_DIS (I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_IBI_DIS_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) IBI Auto-Disable state Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_HDR_DDR_CRC (I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_HDR_DDR_CRC_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) HDR-DDR CRC Data Generation/Receive state Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_CLOCK_EXT (I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_CLOCK_EXT_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) Clock Extension state Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_HALT (I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_HALT_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) Halt state Position */
#define I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_IBI_READ (I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_IBI_READ_Val << I3CC_PRESENT_STATE_DEBUG_CM_TFR_ST_STATUS_Pos) /* (I3CC_PRESENT_STATE_DEBUG) IBI Read Data state Position */
#define I3CC_PRESENT_STATE_DEBUG_CMD_TID_Pos  _UINT32_(24)                                         /* (I3CC_PRESENT_STATE_DEBUG) Command Transaction ID Position */
#define I3CC_PRESENT_STATE_DEBUG_CMD_TID_Msk  (_UINT32_(0xF) << I3CC_PRESENT_STATE_DEBUG_CMD_TID_Pos) /* (I3CC_PRESENT_STATE_DEBUG) Command Transaction ID Mask */
#define I3CC_PRESENT_STATE_DEBUG_CMD_TID(value) (I3CC_PRESENT_STATE_DEBUG_CMD_TID_Msk & (_UINT32_(value) << I3CC_PRESENT_STATE_DEBUG_CMD_TID_Pos)) /* Assignment of value for CMD_TID in the I3CC_PRESENT_STATE_DEBUG register */
#define I3CC_PRESENT_STATE_DEBUG_HC_IDLE_Pos  _UINT32_(28)                                         /* (I3CC_PRESENT_STATE_DEBUG) I3CC Idle Position */
#define I3CC_PRESENT_STATE_DEBUG_HC_IDLE_Msk  (_UINT32_(0x1) << I3CC_PRESENT_STATE_DEBUG_HC_IDLE_Pos) /* (I3CC_PRESENT_STATE_DEBUG) I3CC Idle Mask */
#define I3CC_PRESENT_STATE_DEBUG_HC_IDLE(value) (I3CC_PRESENT_STATE_DEBUG_HC_IDLE_Msk & (_UINT32_(value) << I3CC_PRESENT_STATE_DEBUG_HC_IDLE_Pos)) /* Assignment of value for HC_IDLE in the I3CC_PRESENT_STATE_DEBUG register */
#define   I3CC_PRESENT_STATE_DEBUG_HC_IDLE_0_Val _UINT32_(0x0)                                        /* (I3CC_PRESENT_STATE_DEBUG) (HC_NOT_IDLE) I3CC is not in Idle state.  */
#define   I3CC_PRESENT_STATE_DEBUG_HC_IDLE_1_Val _UINT32_(0x1)                                        /* (I3CC_PRESENT_STATE_DEBUG) (HC_IDLE) I3CC is in Idle state. All of the queues (Command, Response, IBI) and buffers (Transmit and Receive) are empty.  */
#define I3CC_PRESENT_STATE_DEBUG_HC_IDLE_0    (I3CC_PRESENT_STATE_DEBUG_HC_IDLE_0_Val << I3CC_PRESENT_STATE_DEBUG_HC_IDLE_Pos) /* (I3CC_PRESENT_STATE_DEBUG) (HC_NOT_IDLE) I3CC is not in Idle state. Position */
#define I3CC_PRESENT_STATE_DEBUG_HC_IDLE_1    (I3CC_PRESENT_STATE_DEBUG_HC_IDLE_1_Val << I3CC_PRESENT_STATE_DEBUG_HC_IDLE_Pos) /* (I3CC_PRESENT_STATE_DEBUG) (HC_IDLE) I3CC is in Idle state. All of the queues (Command, Response, IBI) and buffers (Transmit and Receive) are empty. Position */
#define I3CC_PRESENT_STATE_DEBUG_Msk          _UINT32_(0x1F3F3F03)                                 /* (I3CC_PRESENT_STATE_DEBUG) Register Mask  */


/* -------- I3CC_CONTROLLER_EXT_HEADER : (I3CC Offset: 0x254) ( R/ 32) Controller Extended Header Register -------- */
#define I3CC_CONTROLLER_EXT_HEADER_RESETVALUE _UINT32_(0x1002)                                     /*  (I3CC_CONTROLLER_EXT_HEADER) Controller Extended Header Register  Reset Value */

#define I3CC_CONTROLLER_EXT_HEADER_CAP_ID_Pos _UINT32_(0)                                          /* (I3CC_CONTROLLER_EXT_HEADER) Extended Capability ID Position */
#define I3CC_CONTROLLER_EXT_HEADER_CAP_ID_Msk (_UINT32_(0xFF) << I3CC_CONTROLLER_EXT_HEADER_CAP_ID_Pos) /* (I3CC_CONTROLLER_EXT_HEADER) Extended Capability ID Mask */
#define I3CC_CONTROLLER_EXT_HEADER_CAP_ID(value) (I3CC_CONTROLLER_EXT_HEADER_CAP_ID_Msk & (_UINT32_(value) << I3CC_CONTROLLER_EXT_HEADER_CAP_ID_Pos)) /* Assignment of value for CAP_ID in the I3CC_CONTROLLER_EXT_HEADER register */
#define I3CC_CONTROLLER_EXT_HEADER_CAP_LEN_Pos _UINT32_(8)                                          /* (I3CC_CONTROLLER_EXT_HEADER) Capability Structure Length Position */
#define I3CC_CONTROLLER_EXT_HEADER_CAP_LEN_Msk (_UINT32_(0xFFFF) << I3CC_CONTROLLER_EXT_HEADER_CAP_LEN_Pos) /* (I3CC_CONTROLLER_EXT_HEADER) Capability Structure Length Mask */
#define I3CC_CONTROLLER_EXT_HEADER_CAP_LEN(value) (I3CC_CONTROLLER_EXT_HEADER_CAP_LEN_Msk & (_UINT32_(value) << I3CC_CONTROLLER_EXT_HEADER_CAP_LEN_Pos)) /* Assignment of value for CAP_LEN in the I3CC_CONTROLLER_EXT_HEADER register */
#define I3CC_CONTROLLER_EXT_HEADER_Msk        _UINT32_(0x00FFFFFF)                                 /* (I3CC_CONTROLLER_EXT_HEADER) Register Mask  */


/* -------- I3CC_CONTROLLER_CONFIG : (I3CC Offset: 0x258) ( R/ 32) Controller Configuration Register -------- */
#define I3CC_CONTROLLER_CONFIG_RESETVALUE     _UINT32_(0x39)                                       /*  (I3CC_CONTROLLER_CONFIG) Controller Configuration Register  Reset Value */

#define I3CC_CONTROLLER_CONFIG_OPERATION_MODE_Pos _UINT32_(4)                                          /* (I3CC_CONTROLLER_CONFIG) Controller Operation Mode Position */
#define I3CC_CONTROLLER_CONFIG_OPERATION_MODE_Msk (_UINT32_(0x3) << I3CC_CONTROLLER_CONFIG_OPERATION_MODE_Pos) /* (I3CC_CONTROLLER_CONFIG) Controller Operation Mode Mask */
#define I3CC_CONTROLLER_CONFIG_OPERATION_MODE(value) (I3CC_CONTROLLER_CONFIG_OPERATION_MODE_Msk & (_UINT32_(value) << I3CC_CONTROLLER_CONFIG_OPERATION_MODE_Pos)) /* Assignment of value for OPERATION_MODE in the I3CC_CONTROLLER_CONFIG register */
#define I3CC_CONTROLLER_CONFIG_Msk            _UINT32_(0x00000030)                                 /* (I3CC_CONTROLLER_CONFIG) Register Mask  */


/* I3CC register offsets definitions */
#define I3CC_HCI_VERSION_REG_OFST      _UINT32_(0x00)      /* (I3CC_HCI_VERSION) HCI Version Register Offset */
#define I3CC_HC_CONTROL_REG_OFST       _UINT32_(0x04)      /* (I3CC_HC_CONTROL) Controller Control Register Offset */
#define I3CC_CONTROLLER_DEVICE_ADDR_REG_OFST _UINT32_(0x08)      /* (I3CC_CONTROLLER_DEVICE_ADDR) Controller Device Address Register Offset */
#define I3CC_HC_CAPABILITIES_REG_OFST  _UINT32_(0x0C)      /* (I3CC_HC_CAPABILITIES) Controller Capabilities Register Offset */
#define I3CC_RESET_CONTROL_REG_OFST    _UINT32_(0x10)      /* (I3CC_RESET_CONTROL) Reset Control Register Offset */
#define I3CC_PRESENT_STATE_REG_OFST    _UINT32_(0x14)      /* (I3CC_PRESENT_STATE) Present State Register Offset */
#define I3CC_INTR_STATUS_REG_OFST      _UINT32_(0x20)      /* (I3CC_INTR_STATUS) Interrupt Status Register Offset */
#define I3CC_INTR_STATUS_ENABLE_REG_OFST _UINT32_(0x24)      /* (I3CC_INTR_STATUS_ENABLE) Interrupt Status Enable Register Offset */
#define I3CC_INTR_SIGNAL_ENABLE_REG_OFST _UINT32_(0x28)      /* (I3CC_INTR_SIGNAL_ENABLE) Interrupt Signal Enable Register Offset */
#define I3CC_INTR_FORCE_REG_OFST       _UINT32_(0x2C)      /* (I3CC_INTR_FORCE) Interrupt Force Register Offset */
#define I3CC_DAT_SECTION_OFFSET_REG_OFST _UINT32_(0x30)      /* (I3CC_DAT_SECTION_OFFSET) Device Address Table Section Offset Register Offset */
#define I3CC_DCT_SECTION_OFFSET_REG_OFST _UINT32_(0x34)      /* (I3CC_DCT_SECTION_OFFSET) Device Characteristics Table Section Offset Register Offset */
#define I3CC_RING_HEADERS_SECTION_OFFSET_REG_OFST _UINT32_(0x38)      /* (I3CC_RING_HEADERS_SECTION_OFFSET) Ring Headers Section Offset Register Offset */
#define I3CC_PIO_SECTION_OFFSET_REG_OFST _UINT32_(0x3C)      /* (I3CC_PIO_SECTION_OFFSET) PIO Section Offset Register Offset */
#define I3CC_EXT_CAPS_SECTION_OFFSET_REG_OFST _UINT32_(0x40)      /* (I3CC_EXT_CAPS_SECTION_OFFSET) Extended Capabilities Section Offset Register Offset */
#define I3CC_IBI_NOTIFY_CTRL_REG_OFST  _UINT32_(0x58)      /* (I3CC_IBI_NOTIFY_CTRL) IBI Notify Control Register Offset */
#define I3CC_DEV_CTX_BASE_LO_REG_OFST  _UINT32_(0x60)      /* (I3CC_DEV_CTX_BASE_LO) Device Context Base Address Low Register Offset */
#define I3CC_DEV_CTX_BASE_HI_REG_OFST  _UINT32_(0x64)      /* (I3CC_DEV_CTX_BASE_HI) Device Context Base Address High Register Offset */
#define I3CC_COMMAND_QUEUE_PORT_REG_OFST _UINT32_(0xC0)      /* (I3CC_COMMAND_QUEUE_PORT) Command Queue Port Register Offset */
#define I3CC_RESPONSE_QUEUE_PORT_REG_OFST _UINT32_(0xC4)      /* (I3CC_RESPONSE_QUEUE_PORT) Response Queue Port Register Offset */
#define I3CC_XFER_DATA_PORT_REG_OFST   _UINT32_(0xC8)      /* (I3CC_XFER_DATA_PORT) Transfer Data Port Register Offset */
#define I3CC_IBI_PORT_REG_OFST         _UINT32_(0xCC)      /* (I3CC_IBI_PORT) IBI Port Register Offset */
#define I3CC_QUEUE_THLD_CTRL_REG_OFST  _UINT32_(0xD0)      /* (I3CC_QUEUE_THLD_CTRL) Queue Threshold Control Register Offset */
#define I3CC_DATA_BUFFER_THLD_CTRL_REG_OFST _UINT32_(0xD4)      /* (I3CC_DATA_BUFFER_THLD_CTRL) Transfer Data Buffer Threshold Control Register Offset */
#define I3CC_QUEUE_SIZE_REG_OFST       _UINT32_(0xD8)      /* (I3CC_QUEUE_SIZE) Queue Size Register Offset */
#define I3CC_PIO_INTR_STATUS_REG_OFST  _UINT32_(0xE0)      /* (I3CC_PIO_INTR_STATUS) PIO Interrupt Status Register Offset */
#define I3CC_PIO_INTR_STATUS_ENABLE_REG_OFST _UINT32_(0xE4)      /* (I3CC_PIO_INTR_STATUS_ENABLE) PIO Interrupt Status Enable Register Offset */
#define I3CC_PIO_INTR_SIGNAL_ENABLE_REG_OFST _UINT32_(0xE8)      /* (I3CC_PIO_INTR_SIGNAL_ENABLE) PIO Interrupt Signal Enable Register Offset */
#define I3CC_PIO_INTR_FORCE_REG_OFST   _UINT32_(0xEC)      /* (I3CC_PIO_INTR_FORCE) PIO Interrupt Force Register Offset */
#define I3CC_HW_IDENTIFICATION_HEADER_REG_OFST _UINT32_(0x200)     /* (I3CC_HW_IDENTIFICATION_HEADER) Hardware Identification Header Register Offset */
#define I3CC_COMP_MANUFACTURER_REG_OFST _UINT32_(0x204)     /* (I3CC_COMP_MANUFACTURER) Component Manufacturer Register Offset */
#define I3CC_COMP_VERSION_REG_OFST     _UINT32_(0x208)     /* (I3CC_COMP_VERSION) Component Version Register Offset */
#define I3CC_COMP_TYPE_REG_OFST        _UINT32_(0x20C)     /* (I3CC_COMP_TYPE) Component Type Register Offset */
#define I3CC_BUS_TIMING_HEADER_REG_OFST _UINT32_(0x210)     /* (I3CC_BUS_TIMING_HEADER) Bus Timing Header Register Offset */
#define I3CC_SCL_I3C_OD_TIMING_REG_OFST _UINT32_(0x214)     /* (I3CC_SCL_I3C_OD_TIMING) SCL I3C Open-Drain Timing Register Offset */
#define I3CC_SCL_I3C_PP_TIMING_REG_OFST _UINT32_(0x218)     /* (I3CC_SCL_I3C_PP_TIMING) SCL I3C Push-Pull Timing Register Offset */
#define I3CC_SCL_I2C_FM_TIMING_REG_OFST _UINT32_(0x21C)     /* (I3CC_SCL_I2C_FM_TIMING) SCL I2C Fast Mode Timing Register Offset */
#define I3CC_SCL_I2C_FMP_TIMING_REG_OFST _UINT32_(0x220)     /* (I3CC_SCL_I2C_FMP_TIMING) SCL I2C Fast Mode Plus Timing Register Offset */
#define I3CC_SCL_I2C_SS_TIMING_REG_OFST _UINT32_(0x224)     /* (I3CC_SCL_I2C_SS_TIMING) SCL I2C Standard Speed Timing Register Offset */
#define I3CC_SCL_EXT_LCNT_TIMING_REG_OFST _UINT32_(0x228)     /* (I3CC_SCL_EXT_LCNT_TIMING) SCL Extended Low Count Timing Register Offset */
#define I3CC_SCL_EXT_TERMN_LCNT_TIMING_REG_OFST _UINT32_(0x22C)     /* (I3CC_SCL_EXT_TERMN_LCNT_TIMING) SCL Termination Bit Low Count Timing Register Offset */
#define I3CC_SDA_HOLD_SWITCH_DLY_TIMING_REG_OFST _UINT32_(0x230)     /* (I3CC_SDA_HOLD_SWITCH_DLY_TIMING) SDA Hold and Mode Switch Delay Timing Register Offset */
#define I3CC_BUS_FREE_TIMING_REG_OFST  _UINT32_(0x234)     /* (I3CC_BUS_FREE_TIMING) Bus Free Timing Register Offset */
#define I3CC_SCL_LOW_MST_EXT_TIMEOUT_REG_OFST _UINT32_(0x23C)     /* (I3CC_SCL_LOW_MST_EXT_TIMEOUT) SCL Low Master Extended Timeout Register Offset */
#define I3CC_DS_EXTCAP_HEADER_REG_OFST _UINT32_(0x240)     /* (I3CC_DS_EXTCAP_HEADER) Debug Specific Header Register Offset */
#define I3CC_QUEUE_STATUS_LEVEL_REG_OFST _UINT32_(0x244)     /* (I3CC_QUEUE_STATUS_LEVEL) Queue Status Level Register Offset */
#define I3CC_DATA_BUFFER_STATUS_LEVEL_REG_OFST _UINT32_(0x248)     /* (I3CC_DATA_BUFFER_STATUS_LEVEL) Data Buffer Status Level Register Offset */
#define I3CC_PRESENT_STATE_DEBUG_REG_OFST _UINT32_(0x24C)     /* (I3CC_PRESENT_STATE_DEBUG) Present State Debug Register Offset */
#define I3CC_CONTROLLER_EXT_HEADER_REG_OFST _UINT32_(0x254)     /* (I3CC_CONTROLLER_EXT_HEADER) Controller Extended Header Register Offset */
#define I3CC_CONTROLLER_CONFIG_REG_OFST _UINT32_(0x258)     /* (I3CC_CONTROLLER_CONFIG) Controller Configuration Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* I3CC register API structure */
typedef struct
{  /* I3C Host Controller */
  __I   uint32_t                       I3CC_HCI_VERSION;   /* Offset: 0x00 (R/   32) HCI Version Register */
  __IO  uint32_t                       I3CC_HC_CONTROL;    /* Offset: 0x04 (R/W  32) Controller Control Register */
  __IO  uint32_t                       I3CC_CONTROLLER_DEVICE_ADDR; /* Offset: 0x08 (R/W  32) Controller Device Address Register */
  __I   uint32_t                       I3CC_HC_CAPABILITIES; /* Offset: 0x0C (R/   32) Controller Capabilities Register */
  __IO  uint32_t                       I3CC_RESET_CONTROL; /* Offset: 0x10 (R/W  32) Reset Control Register */
  __I   uint32_t                       I3CC_PRESENT_STATE; /* Offset: 0x14 (R/   32) Present State Register */
  __I   uint8_t                        Reserved1[0x08];
  __IO  uint32_t                       I3CC_INTR_STATUS;   /* Offset: 0x20 (R/W  32) Interrupt Status Register */
  __IO  uint32_t                       I3CC_INTR_STATUS_ENABLE; /* Offset: 0x24 (R/W  32) Interrupt Status Enable Register */
  __IO  uint32_t                       I3CC_INTR_SIGNAL_ENABLE; /* Offset: 0x28 (R/W  32) Interrupt Signal Enable Register */
  __O   uint32_t                       I3CC_INTR_FORCE;    /* Offset: 0x2C ( /W  32) Interrupt Force Register */
  __I   uint32_t                       I3CC_DAT_SECTION_OFFSET; /* Offset: 0x30 (R/   32) Device Address Table Section Offset Register */
  __IO  uint32_t                       I3CC_DCT_SECTION_OFFSET; /* Offset: 0x34 (R/W  32) Device Characteristics Table Section Offset Register */
  __I   uint32_t                       I3CC_RING_HEADERS_SECTION_OFFSET; /* Offset: 0x38 (R/   32) Ring Headers Section Offset Register */
  __I   uint32_t                       I3CC_PIO_SECTION_OFFSET; /* Offset: 0x3C (R/   32) PIO Section Offset Register */
  __I   uint32_t                       I3CC_EXT_CAPS_SECTION_OFFSET; /* Offset: 0x40 (R/   32) Extended Capabilities Section Offset Register */
  __I   uint8_t                        Reserved2[0x14];
  __IO  uint32_t                       I3CC_IBI_NOTIFY_CTRL; /* Offset: 0x58 (R/W  32) IBI Notify Control Register */
  __I   uint8_t                        Reserved3[0x04];
  __I   uint32_t                       I3CC_DEV_CTX_BASE_LO; /* Offset: 0x60 (R/   32) Device Context Base Address Low Register */
  __I   uint32_t                       I3CC_DEV_CTX_BASE_HI; /* Offset: 0x64 (R/   32) Device Context Base Address High Register */
  __I   uint8_t                        Reserved4[0x58];
  __O   uint32_t                       I3CC_COMMAND_QUEUE_PORT; /* Offset: 0xC0 ( /W  32) Command Queue Port Register */
  __I   uint32_t                       I3CC_RESPONSE_QUEUE_PORT; /* Offset: 0xC4 (R/   32) Response Queue Port Register */
  __IO  uint32_t                       I3CC_XFER_DATA_PORT; /* Offset: 0xC8 (R/W  32) Transfer Data Port Register */
  __I   uint32_t                       I3CC_IBI_PORT;      /* Offset: 0xCC (R/   32) IBI Port Register */
  __IO  uint32_t                       I3CC_QUEUE_THLD_CTRL; /* Offset: 0xD0 (R/W  32) Queue Threshold Control Register */
  __IO  uint32_t                       I3CC_DATA_BUFFER_THLD_CTRL; /* Offset: 0xD4 (R/W  32) Transfer Data Buffer Threshold Control Register */
  __I   uint32_t                       I3CC_QUEUE_SIZE;    /* Offset: 0xD8 (R/   32) Queue Size Register */
  __I   uint8_t                        Reserved5[0x04];
  __IO  uint32_t                       I3CC_PIO_INTR_STATUS; /* Offset: 0xE0 (R/W  32) PIO Interrupt Status Register */
  __IO  uint32_t                       I3CC_PIO_INTR_STATUS_ENABLE; /* Offset: 0xE4 (R/W  32) PIO Interrupt Status Enable Register */
  __IO  uint32_t                       I3CC_PIO_INTR_SIGNAL_ENABLE; /* Offset: 0xE8 (R/W  32) PIO Interrupt Signal Enable Register */
  __O   uint32_t                       I3CC_PIO_INTR_FORCE; /* Offset: 0xEC ( /W  32) PIO Interrupt Force Register */
  __I   uint8_t                        Reserved6[0x110];
  __I   uint32_t                       I3CC_HW_IDENTIFICATION_HEADER; /* Offset: 0x200 (R/   32) Hardware Identification Header Register */
  __I   uint32_t                       I3CC_COMP_MANUFACTURER; /* Offset: 0x204 (R/   32) Component Manufacturer Register */
  __I   uint32_t                       I3CC_COMP_VERSION;  /* Offset: 0x208 (R/   32) Component Version Register */
  __I   uint32_t                       I3CC_COMP_TYPE;     /* Offset: 0x20C (R/   32) Component Type Register */
  __I   uint32_t                       I3CC_BUS_TIMING_HEADER; /* Offset: 0x210 (R/   32) Bus Timing Header Register */
  __IO  uint32_t                       I3CC_SCL_I3C_OD_TIMING; /* Offset: 0x214 (R/W  32) SCL I3C Open-Drain Timing Register */
  __IO  uint32_t                       I3CC_SCL_I3C_PP_TIMING; /* Offset: 0x218 (R/W  32) SCL I3C Push-Pull Timing Register */
  __IO  uint32_t                       I3CC_SCL_I2C_FM_TIMING; /* Offset: 0x21C (R/W  32) SCL I2C Fast Mode Timing Register */
  __IO  uint32_t                       I3CC_SCL_I2C_FMP_TIMING; /* Offset: 0x220 (R/W  32) SCL I2C Fast Mode Plus Timing Register */
  __IO  uint32_t                       I3CC_SCL_I2C_SS_TIMING; /* Offset: 0x224 (R/W  32) SCL I2C Standard Speed Timing Register */
  __IO  uint32_t                       I3CC_SCL_EXT_LCNT_TIMING; /* Offset: 0x228 (R/W  32) SCL Extended Low Count Timing Register */
  __IO  uint32_t                       I3CC_SCL_EXT_TERMN_LCNT_TIMING; /* Offset: 0x22C (R/W  32) SCL Termination Bit Low Count Timing Register */
  __IO  uint32_t                       I3CC_SDA_HOLD_SWITCH_DLY_TIMING; /* Offset: 0x230 (R/W  32) SDA Hold and Mode Switch Delay Timing Register */
  __IO  uint32_t                       I3CC_BUS_FREE_TIMING; /* Offset: 0x234 (R/W  32) Bus Free Timing Register */
  __I   uint8_t                        Reserved7[0x04];
  __IO  uint32_t                       I3CC_SCL_LOW_MST_EXT_TIMEOUT; /* Offset: 0x23C (R/W  32) SCL Low Master Extended Timeout Register */
  __I   uint32_t                       I3CC_DS_EXTCAP_HEADER; /* Offset: 0x240 (R/   32) Debug Specific Header Register */
  __I   uint32_t                       I3CC_QUEUE_STATUS_LEVEL; /* Offset: 0x244 (R/   32) Queue Status Level Register */
  __I   uint32_t                       I3CC_DATA_BUFFER_STATUS_LEVEL; /* Offset: 0x248 (R/   32) Data Buffer Status Level Register */
  __I   uint32_t                       I3CC_PRESENT_STATE_DEBUG; /* Offset: 0x24C (R/   32) Present State Debug Register */
  __I   uint8_t                        Reserved8[0x04];
  __I   uint32_t                       I3CC_CONTROLLER_EXT_HEADER; /* Offset: 0x254 (R/   32) Controller Extended Header Register */
  __I   uint32_t                       I3CC_CONTROLLER_CONFIG; /* Offset: 0x258 (R/   32) Controller Configuration Register */
} i3cc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7D6_I3CC_COMPONENT_H_ */
