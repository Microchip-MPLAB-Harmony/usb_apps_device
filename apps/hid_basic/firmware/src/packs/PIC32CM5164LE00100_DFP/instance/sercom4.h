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
#ifndef _PIC32CMLE00_SERCOM4_INSTANCE_
#define _PIC32CMLE00_SERCOM4_INSTANCE_


/* ========== Instance Parameter definitions for SERCOM4 peripheral ========== */
#define SERCOM4_CLK_REDUCTION                    (1)        /* Reduce clock options to pin 1 for SPI and USART */
#define SERCOM4_DMA                              (1)        /* DMA support implemented? */
#define SERCOM4_DMAC_ID_RX                       (12)       /* Index of DMA RX trigger */
#define SERCOM4_DMAC_ID_TX                       (13)       /* Index of DMA TX trigger */
#define SERCOM4_FIFO_IMPLEMENTED                 (1)        /* FIFO Rx/Tx implemented? */
#define SERCOM4_FIFO_SIZE                        (8)        /* Rx-Tx FIFO size in bytes */
#define SERCOM4_FSYNC_IMPLEMENTED                (0)        /* SPI Frame Synch mode implemented? */
#define SERCOM4_GCLK_ID_CORE                     (21)       
#define SERCOM4_GCLK_ID_SLOW                     (16)       
#define SERCOM4_I2C_0_INT_SRC                    (47)       /* I2C 0 Interrupt */
#define SERCOM4_I2C_1_INT_SRC                    (48)       /* I2C 1 Interrupt */
#define SERCOM4_I2C_2_INT_SRC                    (49)       /* I2C 2 Interrupt */
#define SERCOM4_I2C_3_INT_SRC                    (50)       /* I2C 3 Interrupt */
#define SERCOM4_INSTANCE_ID                      (69)       /* Instance index for SERCOM4 */
#define SERCOM4_INT_MSB                          (6)        
#define SERCOM4_PMSB                             (3)        
#define SERCOM4_SPI                              (1)        /* SPI mode implemented? */
#define SERCOM4_SPI_ERROR_INT_SRC                (50)       /* SPI ERROR Interrupt */
#define SERCOM4_SPI_RX_INT_SRC                   (49)       /* SPI RX Interrupt */
#define SERCOM4_SPI_TX_COMPLETE_INT_SRC          (48)       /* SPI TX COMPLETE Interrupt */
#define SERCOM4_SPI_TX_READY_INT_SRC             (47)       /* SPI TX READY Interrupt */
#define SERCOM4_TWIM                             (1)        /* TWI Master mode implemented? */
#define SERCOM4_TWIS                             (1)        /* TWI Slave mode implemented? */
#define SERCOM4_TWI_HSMODE                       (1)        /* TWI HighSpeed mode implemented? */
#define SERCOM4_ULTRA_IMPLEMENTATION             (1)        /* ULTRA platform compatibility? */
#define SERCOM4_USART                            (1)        /* USART mode implemented? */
#define SERCOM4_USART_AUTOBAUD                   (1)        /* USART autobaud implemented? */
#define SERCOM4_USART_ERROR_INT_SRC              (50)       /* USART ERROR Interrupt */
#define SERCOM4_USART_IRDA                       (1)        /* USART IrDA implemented? */
#define SERCOM4_USART_ISO7816                    (1)        /* USART ISO7816 mode implemented? */
#define SERCOM4_USART_LIN_MASTER                 (1)        /* USART LIN Master mode implemented? */
#define SERCOM4_USART_RS485                      (1)        /* USART RS485 mode implemented? */
#define SERCOM4_USART_RX_INT_SRC                 (49)       /* USART RX Interrupt */
#define SERCOM4_USART_TX_COMPLETE_INT_SRC        (48)       /* USART TX COMPLETE Interrupt */
#define SERCOM4_USART_TX_READY_INT_SRC           (47)       /* USART TX READY Interrupt */

#endif /* _PIC32CMLE00_SERCOM4_INSTANCE_ */
