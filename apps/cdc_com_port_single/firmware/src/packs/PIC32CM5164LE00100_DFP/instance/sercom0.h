/*
 * Instance header file for PIC32CM5164LE00100
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

/* file generated from device description file (ATDF) version 2022-09-09T06:08:26Z */
#ifndef _PIC32CMLE00_SERCOM0_INSTANCE_
#define _PIC32CMLE00_SERCOM0_INSTANCE_


/* ========== Instance Parameter definitions for SERCOM0 peripheral ========== */
#define SERCOM0_CLK_REDUCTION                    (1)        /* Reduce clock options to pin 1 for SPI and USART */
#define SERCOM0_DMA                              (1)        /* DMA support implemented? */
#define SERCOM0_DMAC_ID_RX                       (4)        /* Index of DMA RX trigger */
#define SERCOM0_DMAC_ID_TX                       (5)        /* Index of DMA TX trigger */
#define SERCOM0_FIFO_IMPLEMENTED                 (1)        /* FIFO Rx/Tx implemented? */
#define SERCOM0_FIFO_SIZE                        (8)        /* Rx-Tx FIFO size in bytes */
#define SERCOM0_FSYNC_IMPLEMENTED                (0)        /* SPI Frame Synch mode implemented? */
#define SERCOM0_GCLK_ID_CORE                     (17)       
#define SERCOM0_GCLK_ID_SLOW                     (16)       
#define SERCOM0_I2C_0_INT_SRC                    (31)       /* I2C 0 Interrupt */
#define SERCOM0_I2C_1_INT_SRC                    (32)       /* I2C 1 Interrupt */
#define SERCOM0_I2C_2_INT_SRC                    (33)       /* I2C 2 Interrupt */
#define SERCOM0_I2C_3_INT_SRC                    (34)       /* I2C 3 Interrupt */
#define SERCOM0_INSTANCE_ID                      (65)       /* Instance index for SERCOM0 */
#define SERCOM0_INT_MSB                          (6)        
#define SERCOM0_PMSB                             (3)        
#define SERCOM0_SPI                              (1)        /* SPI mode implemented? */
#define SERCOM0_SPI_ERROR_INT_SRC                (34)       /* SPI ERROR Interrupt */
#define SERCOM0_SPI_RX_INT_SRC                   (33)       /* SPI RX Interrupt */
#define SERCOM0_SPI_TX_COMPLETE_INT_SRC          (32)       /* SPI TX COMPLETE Interrupt */
#define SERCOM0_SPI_TX_READY_INT_SRC             (31)       /* SPI TX READY Interrupt */
#define SERCOM0_TWIM                             (1)        /* TWI Master mode implemented? */
#define SERCOM0_TWIS                             (1)        /* TWI Slave mode implemented? */
#define SERCOM0_TWI_HSMODE                       (1)        /* TWI HighSpeed mode implemented? */
#define SERCOM0_ULTRA_IMPLEMENTATION             (1)        /* ULTRA platform compatibility? */
#define SERCOM0_USART                            (1)        /* USART mode implemented? */
#define SERCOM0_USART_AUTOBAUD                   (1)        /* USART autobaud implemented? */
#define SERCOM0_USART_ERROR_INT_SRC              (34)       /* USART ERROR Interrupt */
#define SERCOM0_USART_IRDA                       (1)        /* USART IrDA implemented? */
#define SERCOM0_USART_ISO7816                    (1)        /* USART ISO7816 mode implemented? */
#define SERCOM0_USART_LIN_MASTER                 (1)        /* USART LIN Master mode implemented? */
#define SERCOM0_USART_RS485                      (1)        /* USART RS485 mode implemented? */
#define SERCOM0_USART_RX_INT_SRC                 (33)       /* USART RX Interrupt */
#define SERCOM0_USART_TX_COMPLETE_INT_SRC        (32)       /* USART TX COMPLETE Interrupt */
#define SERCOM0_USART_TX_READY_INT_SRC           (31)       /* USART TX READY Interrupt */

#endif /* _PIC32CMLE00_SERCOM0_INSTANCE_ */
