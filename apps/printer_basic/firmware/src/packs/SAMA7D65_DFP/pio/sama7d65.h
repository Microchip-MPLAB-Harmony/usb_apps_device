/*
 * Peripheral I/O description for SAMA7D65
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
#ifndef _SAMA7D65_GPIO_H_
#define _SAMA7D65_GPIO_H_

/* ========== Peripheral I/O pin numbers ========== */
#define PIN_PA0                     (    0)  /**< Pin Number for PA0 */
#define PIN_PA1                     (    1)  /**< Pin Number for PA1 */
#define PIN_PA2                     (    2)  /**< Pin Number for PA2 */
#define PIN_PA3                     (    3)  /**< Pin Number for PA3 */
#define PIN_PA4                     (    4)  /**< Pin Number for PA4 */
#define PIN_PA5                     (    5)  /**< Pin Number for PA5 */
#define PIN_PA6                     (    6)  /**< Pin Number for PA6 */
#define PIN_PA7                     (    7)  /**< Pin Number for PA7 */
#define PIN_PA8                     (    8)  /**< Pin Number for PA8 */
#define PIN_PA9                     (    9)  /**< Pin Number for PA9 */
#define PIN_PA10                    (   10)  /**< Pin Number for PA10 */
#define PIN_PA11                    (   11)  /**< Pin Number for PA11 */
#define PIN_PA12                    (   12)  /**< Pin Number for PA12 */
#define PIN_PA13                    (   13)  /**< Pin Number for PA13 */
#define PIN_PA14                    (   14)  /**< Pin Number for PA14 */
#define PIN_PA15                    (   15)  /**< Pin Number for PA15 */
#define PIN_PA16                    (   16)  /**< Pin Number for PA16 */
#define PIN_PA17                    (   17)  /**< Pin Number for PA17 */
#define PIN_PA18                    (   18)  /**< Pin Number for PA18 */
#define PIN_PA19                    (   19)  /**< Pin Number for PA19 */
#define PIN_PA20                    (   20)  /**< Pin Number for PA20 */
#define PIN_PA21                    (   21)  /**< Pin Number for PA21 */
#define PIN_PA22                    (   22)  /**< Pin Number for PA22 */
#define PIN_PA23                    (   23)  /**< Pin Number for PA23 */
#define PIN_PA24                    (   24)  /**< Pin Number for PA24 */
#define PIN_PA25                    (   25)  /**< Pin Number for PA25 */
#define PIN_PA26                    (   26)  /**< Pin Number for PA26 */
#define PIN_PA27                    (   27)  /**< Pin Number for PA27 */
#define PIN_PA28                    (   28)  /**< Pin Number for PA28 */
#define PIN_PA29                    (   29)  /**< Pin Number for PA29 */
#define PIN_PA30                    (   30)  /**< Pin Number for PA30 */
#define PIN_PA31                    (   31)  /**< Pin Number for PA31 */
#define PIN_PB0                     (   32)  /**< Pin Number for PB0 */
#define PIN_PB1                     (   33)  /**< Pin Number for PB1 */
#define PIN_PB2                     (   34)  /**< Pin Number for PB2 */
#define PIN_PB3                     (   35)  /**< Pin Number for PB3 */
#define PIN_PB4                     (   36)  /**< Pin Number for PB4 */
#define PIN_PB5                     (   37)  /**< Pin Number for PB5 */
#define PIN_PB6                     (   38)  /**< Pin Number for PB6 */
#define PIN_PB7                     (   39)  /**< Pin Number for PB7 */
#define PIN_PB8                     (   40)  /**< Pin Number for PB8 */
#define PIN_PB9                     (   41)  /**< Pin Number for PB9 */
#define PIN_PB10                    (   42)  /**< Pin Number for PB10 */
#define PIN_PB11                    (   43)  /**< Pin Number for PB11 */
#define PIN_PB12                    (   44)  /**< Pin Number for PB12 */
#define PIN_PB13                    (   45)  /**< Pin Number for PB13 */
#define PIN_PB14                    (   46)  /**< Pin Number for PB14 */
#define PIN_PB15                    (   47)  /**< Pin Number for PB15 */
#define PIN_PB16                    (   48)  /**< Pin Number for PB16 */
#define PIN_PB17                    (   49)  /**< Pin Number for PB17 */
#define PIN_PB18                    (   50)  /**< Pin Number for PB18 */
#define PIN_PB19                    (   51)  /**< Pin Number for PB19 */
#define PIN_PB20                    (   52)  /**< Pin Number for PB20 */
#define PIN_PB21                    (   53)  /**< Pin Number for PB21 */
#define PIN_PB22                    (   54)  /**< Pin Number for PB22 */
#define PIN_PB23                    (   55)  /**< Pin Number for PB23 */
#define PIN_PB24                    (   56)  /**< Pin Number for PB24 */
#define PIN_PB25                    (   57)  /**< Pin Number for PB25 */
#define PIN_PB26                    (   58)  /**< Pin Number for PB26 */
#define PIN_PB27                    (   59)  /**< Pin Number for PB27 */
#define PIN_PB28                    (   60)  /**< Pin Number for PB28 */
#define PIN_PB29                    (   61)  /**< Pin Number for PB29 */
#define PIN_PB30                    (   62)  /**< Pin Number for PB30 */
#define PIN_PB31                    (   63)  /**< Pin Number for PB31 */
#define PIN_PC0                     (   64)  /**< Pin Number for PC0 */
#define PIN_PC1                     (   65)  /**< Pin Number for PC1 */
#define PIN_PC2                     (   66)  /**< Pin Number for PC2 */
#define PIN_PC3                     (   67)  /**< Pin Number for PC3 */
#define PIN_PC4                     (   68)  /**< Pin Number for PC4 */
#define PIN_PC5                     (   69)  /**< Pin Number for PC5 */
#define PIN_PC6                     (   70)  /**< Pin Number for PC6 */
#define PIN_PC7                     (   71)  /**< Pin Number for PC7 */
#define PIN_PC8                     (   72)  /**< Pin Number for PC8 */
#define PIN_PC9                     (   73)  /**< Pin Number for PC9 */
#define PIN_PC10                    (   74)  /**< Pin Number for PC10 */
#define PIN_PC11                    (   75)  /**< Pin Number for PC11 */
#define PIN_PC12                    (   76)  /**< Pin Number for PC12 */
#define PIN_PC13                    (   77)  /**< Pin Number for PC13 */
#define PIN_PC14                    (   78)  /**< Pin Number for PC14 */
#define PIN_PC15                    (   79)  /**< Pin Number for PC15 */
#define PIN_PC16                    (   80)  /**< Pin Number for PC16 */
#define PIN_PC17                    (   81)  /**< Pin Number for PC17 */
#define PIN_PC18                    (   82)  /**< Pin Number for PC18 */
#define PIN_PC19                    (   83)  /**< Pin Number for PC19 */
#define PIN_PC20                    (   84)  /**< Pin Number for PC20 */
#define PIN_PC21                    (   85)  /**< Pin Number for PC21 */
#define PIN_PC22                    (   86)  /**< Pin Number for PC22 */
#define PIN_PC23                    (   87)  /**< Pin Number for PC23 */
#define PIN_PC24                    (   88)  /**< Pin Number for PC24 */
#define PIN_PC25                    (   89)  /**< Pin Number for PC25 */
#define PIN_PC26                    (   90)  /**< Pin Number for PC26 */
#define PIN_PC27                    (   91)  /**< Pin Number for PC27 */
#define PIN_PC28                    (   92)  /**< Pin Number for PC28 */
#define PIN_PC29                    (   93)  /**< Pin Number for PC29 */
#define PIN_PC30                    (   94)  /**< Pin Number for PC30 */
#define PIN_PC31                    (   95)  /**< Pin Number for PC31 */
#define PIN_PD0                     (   96)  /**< Pin Number for PD0 */
#define PIN_PD1                     (   97)  /**< Pin Number for PD1 */
#define PIN_PD2                     (   98)  /**< Pin Number for PD2 */
#define PIN_PD3                     (   99)  /**< Pin Number for PD3 */
#define PIN_PD4                     (  100)  /**< Pin Number for PD4 */
#define PIN_PD5                     (  101)  /**< Pin Number for PD5 */
#define PIN_PD6                     (  102)  /**< Pin Number for PD6 */
#define PIN_PD7                     (  103)  /**< Pin Number for PD7 */
#define PIN_PD8                     (  104)  /**< Pin Number for PD8 */
#define PIN_PD9                     (  105)  /**< Pin Number for PD9 */
#define PIN_PD10                    (  106)  /**< Pin Number for PD10 */
#define PIN_PD11                    (  107)  /**< Pin Number for PD11 */
#define PIN_PD12                    (  108)  /**< Pin Number for PD12 */
#define PIN_PD13                    (  109)  /**< Pin Number for PD13 */
#define PIN_PD14                    (  110)  /**< Pin Number for PD14 */
#define PIN_PD15                    (  111)  /**< Pin Number for PD15 */
#define PIN_PD16                    (  112)  /**< Pin Number for PD16 */
#define PIN_PD17                    (  113)  /**< Pin Number for PD17 */
#define PIN_PD18                    (  114)  /**< Pin Number for PD18 */
#define PIN_PD19                    (  115)  /**< Pin Number for PD19 */
#define PIN_PD20                    (  116)  /**< Pin Number for PD20 */
#define PIN_PD21                    (  117)  /**< Pin Number for PD21 */
#define PIN_PD22                    (  118)  /**< Pin Number for PD22 */
#define PIN_PD23                    (  119)  /**< Pin Number for PD23 */
#define PIN_PD24                    (  120)  /**< Pin Number for PD24 */
#define PIN_PD25                    (  121)  /**< Pin Number for PD25 */
#define PIN_PD26                    (  122)  /**< Pin Number for PD26 */
#define PIN_PD27                    (  123)  /**< Pin Number for PD27 */
#define PIN_PD28                    (  124)  /**< Pin Number for PD28 */
#define PIN_PD29                    (  125)  /**< Pin Number for PD29 */
#define PIN_PD30                    (  126)  /**< Pin Number for PD30 */
#define PIN_PD31                    (  127)  /**< Pin Number for PD31 */
#define PIN_PE0                     (  128)  /**< Pin Number for PE0 */
#define PIN_PE1                     (  129)  /**< Pin Number for PE1 */
#define PIN_PE2                     (  130)  /**< Pin Number for PE2 */
#define PIN_PE3                     (  131)  /**< Pin Number for PE3 */
#define PIN_PE4                     (  132)  /**< Pin Number for PE4 */
#define PIN_PE5                     (  133)  /**< Pin Number for PE5 */
#define PIN_PE6                     (  134)  /**< Pin Number for PE6 */
#define PIN_PE7                     (  135)  /**< Pin Number for PE7 */
#define PIN_PE8                     (  136)  /**< Pin Number for PE8 */
#define PIN_PE9                     (  137)  /**< Pin Number for PE9 */
#define PIN_PE10                    (  138)  /**< Pin Number for PE10 */
#define PIN_PE11                    (  139)  /**< Pin Number for PE11 */
#define PIN_PE12                    (  140)  /**< Pin Number for PE12 */
#define PIN_PE13                    (  141)  /**< Pin Number for PE13 */

/* ========== Peripheral I/O masks ========== */
#define PIO_PA0                     (_UINT32_(1) << 0) /**< PIO mask for PA0 */
#define PIO_PA1                     (_UINT32_(1) << 1) /**< PIO mask for PA1 */
#define PIO_PA2                     (_UINT32_(1) << 2) /**< PIO mask for PA2 */
#define PIO_PA3                     (_UINT32_(1) << 3) /**< PIO mask for PA3 */
#define PIO_PA4                     (_UINT32_(1) << 4) /**< PIO mask for PA4 */
#define PIO_PA5                     (_UINT32_(1) << 5) /**< PIO mask for PA5 */
#define PIO_PA6                     (_UINT32_(1) << 6) /**< PIO mask for PA6 */
#define PIO_PA7                     (_UINT32_(1) << 7) /**< PIO mask for PA7 */
#define PIO_PA8                     (_UINT32_(1) << 8) /**< PIO mask for PA8 */
#define PIO_PA9                     (_UINT32_(1) << 9) /**< PIO mask for PA9 */
#define PIO_PA10                    (_UINT32_(1) << 10) /**< PIO mask for PA10 */
#define PIO_PA11                    (_UINT32_(1) << 11) /**< PIO mask for PA11 */
#define PIO_PA12                    (_UINT32_(1) << 12) /**< PIO mask for PA12 */
#define PIO_PA13                    (_UINT32_(1) << 13) /**< PIO mask for PA13 */
#define PIO_PA14                    (_UINT32_(1) << 14) /**< PIO mask for PA14 */
#define PIO_PA15                    (_UINT32_(1) << 15) /**< PIO mask for PA15 */
#define PIO_PA16                    (_UINT32_(1) << 16) /**< PIO mask for PA16 */
#define PIO_PA17                    (_UINT32_(1) << 17) /**< PIO mask for PA17 */
#define PIO_PA18                    (_UINT32_(1) << 18) /**< PIO mask for PA18 */
#define PIO_PA19                    (_UINT32_(1) << 19) /**< PIO mask for PA19 */
#define PIO_PA20                    (_UINT32_(1) << 20) /**< PIO mask for PA20 */
#define PIO_PA21                    (_UINT32_(1) << 21) /**< PIO mask for PA21 */
#define PIO_PA22                    (_UINT32_(1) << 22) /**< PIO mask for PA22 */
#define PIO_PA23                    (_UINT32_(1) << 23) /**< PIO mask for PA23 */
#define PIO_PA24                    (_UINT32_(1) << 24) /**< PIO mask for PA24 */
#define PIO_PA25                    (_UINT32_(1) << 25) /**< PIO mask for PA25 */
#define PIO_PA26                    (_UINT32_(1) << 26) /**< PIO mask for PA26 */
#define PIO_PA27                    (_UINT32_(1) << 27) /**< PIO mask for PA27 */
#define PIO_PA28                    (_UINT32_(1) << 28) /**< PIO mask for PA28 */
#define PIO_PA29                    (_UINT32_(1) << 29) /**< PIO mask for PA29 */
#define PIO_PA30                    (_UINT32_(1) << 30) /**< PIO mask for PA30 */
#define PIO_PA31                    (_UINT32_(1) << 31) /**< PIO mask for PA31 */
#define PIO_PB0                     (_UINT32_(1) << 0) /**< PIO mask for PB0 */
#define PIO_PB1                     (_UINT32_(1) << 1) /**< PIO mask for PB1 */
#define PIO_PB2                     (_UINT32_(1) << 2) /**< PIO mask for PB2 */
#define PIO_PB3                     (_UINT32_(1) << 3) /**< PIO mask for PB3 */
#define PIO_PB4                     (_UINT32_(1) << 4) /**< PIO mask for PB4 */
#define PIO_PB5                     (_UINT32_(1) << 5) /**< PIO mask for PB5 */
#define PIO_PB6                     (_UINT32_(1) << 6) /**< PIO mask for PB6 */
#define PIO_PB7                     (_UINT32_(1) << 7) /**< PIO mask for PB7 */
#define PIO_PB8                     (_UINT32_(1) << 8) /**< PIO mask for PB8 */
#define PIO_PB9                     (_UINT32_(1) << 9) /**< PIO mask for PB9 */
#define PIO_PB10                    (_UINT32_(1) << 10) /**< PIO mask for PB10 */
#define PIO_PB11                    (_UINT32_(1) << 11) /**< PIO mask for PB11 */
#define PIO_PB12                    (_UINT32_(1) << 12) /**< PIO mask for PB12 */
#define PIO_PB13                    (_UINT32_(1) << 13) /**< PIO mask for PB13 */
#define PIO_PB14                    (_UINT32_(1) << 14) /**< PIO mask for PB14 */
#define PIO_PB15                    (_UINT32_(1) << 15) /**< PIO mask for PB15 */
#define PIO_PB16                    (_UINT32_(1) << 16) /**< PIO mask for PB16 */
#define PIO_PB17                    (_UINT32_(1) << 17) /**< PIO mask for PB17 */
#define PIO_PB18                    (_UINT32_(1) << 18) /**< PIO mask for PB18 */
#define PIO_PB19                    (_UINT32_(1) << 19) /**< PIO mask for PB19 */
#define PIO_PB20                    (_UINT32_(1) << 20) /**< PIO mask for PB20 */
#define PIO_PB21                    (_UINT32_(1) << 21) /**< PIO mask for PB21 */
#define PIO_PB22                    (_UINT32_(1) << 22) /**< PIO mask for PB22 */
#define PIO_PB23                    (_UINT32_(1) << 23) /**< PIO mask for PB23 */
#define PIO_PB24                    (_UINT32_(1) << 24) /**< PIO mask for PB24 */
#define PIO_PB25                    (_UINT32_(1) << 25) /**< PIO mask for PB25 */
#define PIO_PB26                    (_UINT32_(1) << 26) /**< PIO mask for PB26 */
#define PIO_PB27                    (_UINT32_(1) << 27) /**< PIO mask for PB27 */
#define PIO_PB28                    (_UINT32_(1) << 28) /**< PIO mask for PB28 */
#define PIO_PB29                    (_UINT32_(1) << 29) /**< PIO mask for PB29 */
#define PIO_PB30                    (_UINT32_(1) << 30) /**< PIO mask for PB30 */
#define PIO_PB31                    (_UINT32_(1) << 31) /**< PIO mask for PB31 */
#define PIO_PC0                     (_UINT32_(1) << 0) /**< PIO mask for PC0 */
#define PIO_PC1                     (_UINT32_(1) << 1) /**< PIO mask for PC1 */
#define PIO_PC2                     (_UINT32_(1) << 2) /**< PIO mask for PC2 */
#define PIO_PC3                     (_UINT32_(1) << 3) /**< PIO mask for PC3 */
#define PIO_PC4                     (_UINT32_(1) << 4) /**< PIO mask for PC4 */
#define PIO_PC5                     (_UINT32_(1) << 5) /**< PIO mask for PC5 */
#define PIO_PC6                     (_UINT32_(1) << 6) /**< PIO mask for PC6 */
#define PIO_PC7                     (_UINT32_(1) << 7) /**< PIO mask for PC7 */
#define PIO_PC8                     (_UINT32_(1) << 8) /**< PIO mask for PC8 */
#define PIO_PC9                     (_UINT32_(1) << 9) /**< PIO mask for PC9 */
#define PIO_PC10                    (_UINT32_(1) << 10) /**< PIO mask for PC10 */
#define PIO_PC11                    (_UINT32_(1) << 11) /**< PIO mask for PC11 */
#define PIO_PC12                    (_UINT32_(1) << 12) /**< PIO mask for PC12 */
#define PIO_PC13                    (_UINT32_(1) << 13) /**< PIO mask for PC13 */
#define PIO_PC14                    (_UINT32_(1) << 14) /**< PIO mask for PC14 */
#define PIO_PC15                    (_UINT32_(1) << 15) /**< PIO mask for PC15 */
#define PIO_PC16                    (_UINT32_(1) << 16) /**< PIO mask for PC16 */
#define PIO_PC17                    (_UINT32_(1) << 17) /**< PIO mask for PC17 */
#define PIO_PC18                    (_UINT32_(1) << 18) /**< PIO mask for PC18 */
#define PIO_PC19                    (_UINT32_(1) << 19) /**< PIO mask for PC19 */
#define PIO_PC20                    (_UINT32_(1) << 20) /**< PIO mask for PC20 */
#define PIO_PC21                    (_UINT32_(1) << 21) /**< PIO mask for PC21 */
#define PIO_PC22                    (_UINT32_(1) << 22) /**< PIO mask for PC22 */
#define PIO_PC23                    (_UINT32_(1) << 23) /**< PIO mask for PC23 */
#define PIO_PC24                    (_UINT32_(1) << 24) /**< PIO mask for PC24 */
#define PIO_PC25                    (_UINT32_(1) << 25) /**< PIO mask for PC25 */
#define PIO_PC26                    (_UINT32_(1) << 26) /**< PIO mask for PC26 */
#define PIO_PC27                    (_UINT32_(1) << 27) /**< PIO mask for PC27 */
#define PIO_PC28                    (_UINT32_(1) << 28) /**< PIO mask for PC28 */
#define PIO_PC29                    (_UINT32_(1) << 29) /**< PIO mask for PC29 */
#define PIO_PC30                    (_UINT32_(1) << 30) /**< PIO mask for PC30 */
#define PIO_PC31                    (_UINT32_(1) << 31) /**< PIO mask for PC31 */
#define PIO_PD0                     (_UINT32_(1) << 0) /**< PIO mask for PD0 */
#define PIO_PD1                     (_UINT32_(1) << 1) /**< PIO mask for PD1 */
#define PIO_PD2                     (_UINT32_(1) << 2) /**< PIO mask for PD2 */
#define PIO_PD3                     (_UINT32_(1) << 3) /**< PIO mask for PD3 */
#define PIO_PD4                     (_UINT32_(1) << 4) /**< PIO mask for PD4 */
#define PIO_PD5                     (_UINT32_(1) << 5) /**< PIO mask for PD5 */
#define PIO_PD6                     (_UINT32_(1) << 6) /**< PIO mask for PD6 */
#define PIO_PD7                     (_UINT32_(1) << 7) /**< PIO mask for PD7 */
#define PIO_PD8                     (_UINT32_(1) << 8) /**< PIO mask for PD8 */
#define PIO_PD9                     (_UINT32_(1) << 9) /**< PIO mask for PD9 */
#define PIO_PD10                    (_UINT32_(1) << 10) /**< PIO mask for PD10 */
#define PIO_PD11                    (_UINT32_(1) << 11) /**< PIO mask for PD11 */
#define PIO_PD12                    (_UINT32_(1) << 12) /**< PIO mask for PD12 */
#define PIO_PD13                    (_UINT32_(1) << 13) /**< PIO mask for PD13 */
#define PIO_PD14                    (_UINT32_(1) << 14) /**< PIO mask for PD14 */
#define PIO_PD15                    (_UINT32_(1) << 15) /**< PIO mask for PD15 */
#define PIO_PD16                    (_UINT32_(1) << 16) /**< PIO mask for PD16 */
#define PIO_PD17                    (_UINT32_(1) << 17) /**< PIO mask for PD17 */
#define PIO_PD18                    (_UINT32_(1) << 18) /**< PIO mask for PD18 */
#define PIO_PD19                    (_UINT32_(1) << 19) /**< PIO mask for PD19 */
#define PIO_PD20                    (_UINT32_(1) << 20) /**< PIO mask for PD20 */
#define PIO_PD21                    (_UINT32_(1) << 21) /**< PIO mask for PD21 */
#define PIO_PD22                    (_UINT32_(1) << 22) /**< PIO mask for PD22 */
#define PIO_PD23                    (_UINT32_(1) << 23) /**< PIO mask for PD23 */
#define PIO_PD24                    (_UINT32_(1) << 24) /**< PIO mask for PD24 */
#define PIO_PD25                    (_UINT32_(1) << 25) /**< PIO mask for PD25 */
#define PIO_PD26                    (_UINT32_(1) << 26) /**< PIO mask for PD26 */
#define PIO_PD27                    (_UINT32_(1) << 27) /**< PIO mask for PD27 */
#define PIO_PD28                    (_UINT32_(1) << 28) /**< PIO mask for PD28 */
#define PIO_PD29                    (_UINT32_(1) << 29) /**< PIO mask for PD29 */
#define PIO_PD30                    (_UINT32_(1) << 30) /**< PIO mask for PD30 */
#define PIO_PD31                    (_UINT32_(1) << 31) /**< PIO mask for PD31 */
#define PIO_PE0                     (_UINT32_(1) << 0) /**< PIO mask for PE0 */
#define PIO_PE1                     (_UINT32_(1) << 1) /**< PIO mask for PE1 */
#define PIO_PE2                     (_UINT32_(1) << 2) /**< PIO mask for PE2 */
#define PIO_PE3                     (_UINT32_(1) << 3) /**< PIO mask for PE3 */
#define PIO_PE4                     (_UINT32_(1) << 4) /**< PIO mask for PE4 */
#define PIO_PE5                     (_UINT32_(1) << 5) /**< PIO mask for PE5 */
#define PIO_PE6                     (_UINT32_(1) << 6) /**< PIO mask for PE6 */
#define PIO_PE7                     (_UINT32_(1) << 7) /**< PIO mask for PE7 */
#define PIO_PE8                     (_UINT32_(1) << 8) /**< PIO mask for PE8 */
#define PIO_PE9                     (_UINT32_(1) << 9) /**< PIO mask for PE9 */
#define PIO_PE10                    (_UINT32_(1) << 10) /**< PIO mask for PE10 */
#define PIO_PE11                    (_UINT32_(1) << 11) /**< PIO mask for PE11 */
#define PIO_PE12                    (_UINT32_(1) << 12) /**< PIO mask for PE12 */
#define PIO_PE13                    (_UINT32_(1) << 13) /**< PIO mask for PE13 */

/* ========== PIO definition for ACC peripheral ========== */
#define PIN_PC9X1_ACC_INN1                         _UINT32_(73) /**< ACC signal: ACC_INN1 on PC9 mux X1 */
#define PIO_PC9X1_ACC_INN1                         (_UINT32_(1) << 9) /**< ACC signal: ACC_INN1 */
#define PIN_PC18X1_ACC_INN2                        _UINT32_(82) /**< ACC signal: ACC_INN2 on PC18 mux X1 */
#define PIO_PC18X1_ACC_INN2                        (_UINT32_(1) << 18) /**< ACC signal: ACC_INN2 */
#define PIN_PC20X1_ACC_INN3                        _UINT32_(84) /**< ACC signal: ACC_INN3 on PC20 mux X1 */
#define PIO_PC20X1_ACC_INN3                        (_UINT32_(1) << 20) /**< ACC signal: ACC_INN3 */
#define PIN_PC17X1_ACC_INP0                        _UINT32_(81) /**< ACC signal: ACC_INP0 on PC17 mux X1 */
#define PIO_PC17X1_ACC_INP0                        (_UINT32_(1) << 17) /**< ACC signal: ACC_INP0 */
#define PIN_PC8X1_ACC_INP1                         _UINT32_(72) /**< ACC signal: ACC_INP1 on PC8 mux X1 */
#define PIO_PC8X1_ACC_INP1                         (_UINT32_(1) << 8) /**< ACC signal: ACC_INP1 */
#define PIN_PC19X1_ACC_INP2                        _UINT32_(83) /**< ACC signal: ACC_INP2 on PC19 mux X1 */
#define PIO_PC19X1_ACC_INP2                        (_UINT32_(1) << 19) /**< ACC signal: ACC_INP2 */
#define PIN_PC21X1_ACC_INP3                        _UINT32_(85) /**< ACC signal: ACC_INP3 on PC21 mux X1 */
#define PIO_PC21X1_ACC_INP3                        (_UINT32_(1) << 21) /**< ACC signal: ACC_INP3 */
/* ========== PIO definition for ADC peripheral ========== */
#define PIN_PC3X1_ADC_AD0                          _UINT32_(67) /**< ADC signal: ADC_AD0 on PC3 mux X1 */
#define PIO_PC3X1_ADC_AD0                          (_UINT32_(1) << 3) /**< ADC signal: ADC_AD0 */
#define PIN_PC4X1_ADC_AD1                          _UINT32_(68) /**< ADC signal: ADC_AD1 on PC4 mux X1 */
#define PIO_PC4X1_ADC_AD1                          (_UINT32_(1) << 4) /**< ADC signal: ADC_AD1 */
#define PIN_PC5X1_ADC_AD2                          _UINT32_(69) /**< ADC signal: ADC_AD2 on PC5 mux X1 */
#define PIO_PC5X1_ADC_AD2                          (_UINT32_(1) << 5) /**< ADC signal: ADC_AD2 */
#define PIN_PC6X1_ADC_AD3                          _UINT32_(70) /**< ADC signal: ADC_AD3 on PC6 mux X1 */
#define PIO_PC6X1_ADC_AD3                          (_UINT32_(1) << 6) /**< ADC signal: ADC_AD3 */
#define PIN_PC7X1_ADC_AD4                          _UINT32_(71) /**< ADC signal: ADC_AD4 on PC7 mux X1 */
#define PIO_PC7X1_ADC_AD4                          (_UINT32_(1) << 7) /**< ADC signal: ADC_AD4 */
#define PIN_PC10X1_ADC_AD5                         _UINT32_(74) /**< ADC signal: ADC_AD5 on PC10 mux X1 */
#define PIO_PC10X1_ADC_AD5                         (_UINT32_(1) << 10) /**< ADC signal: ADC_AD5 */
#define PIN_PC11X1_ADC_AD6                         _UINT32_(75) /**< ADC signal: ADC_AD6 on PC11 mux X1 */
#define PIO_PC11X1_ADC_AD6                         (_UINT32_(1) << 11) /**< ADC signal: ADC_AD6 */
#define PIN_PC12X1_ADC_AD7                         _UINT32_(76) /**< ADC signal: ADC_AD7 on PC12 mux X1 */
#define PIO_PC12X1_ADC_AD7                         (_UINT32_(1) << 12) /**< ADC signal: ADC_AD7 */
#define PIN_PC13X1_ADC_AD8                         _UINT32_(77) /**< ADC signal: ADC_AD8 on PC13 mux X1 */
#define PIO_PC13X1_ADC_AD8                         (_UINT32_(1) << 13) /**< ADC signal: ADC_AD8 */
#define PIN_PC14X1_ADC_AD9                         _UINT32_(78) /**< ADC signal: ADC_AD9 on PC14 mux X1 */
#define PIO_PC14X1_ADC_AD9                         (_UINT32_(1) << 14) /**< ADC signal: ADC_AD9 */
#define PIN_PC15X1_ADC_AD10                        _UINT32_(79) /**< ADC signal: ADC_AD10 on PC15 mux X1 */
#define PIO_PC15X1_ADC_AD10                        (_UINT32_(1) << 15) /**< ADC signal: ADC_AD10 */
#define PIN_PC16X1_ADC_AD11                        _UINT32_(80) /**< ADC signal: ADC_AD11 on PC16 mux X1 */
#define PIO_PC16X1_ADC_AD11                        (_UINT32_(1) << 16) /**< ADC signal: ADC_AD11 */
#define PIN_PB28X1_ADC_AD12                        _UINT32_(60) /**< ADC signal: ADC_AD12 on PB28 mux X1 */
#define PIO_PB28X1_ADC_AD12                        (_UINT32_(1) << 28) /**< ADC signal: ADC_AD12 */
#define PIN_PB29X1_ADC_AD13                        _UINT32_(61) /**< ADC signal: ADC_AD13 on PB29 mux X1 */
#define PIO_PB29X1_ADC_AD13                        (_UINT32_(1) << 29) /**< ADC signal: ADC_AD13 */
#define PIN_PB30X1_ADC_AD14                        _UINT32_(62) /**< ADC signal: ADC_AD14 on PB30 mux X1 */
#define PIO_PB30X1_ADC_AD14                        (_UINT32_(1) << 30) /**< ADC signal: ADC_AD14 */
#define PIN_PC22X1_ADC_AD15                        _UINT32_(86) /**< ADC signal: ADC_AD15 on PC22 mux X1 */
#define PIO_PC22X1_ADC_AD15                        (_UINT32_(1) << 22) /**< ADC signal: ADC_AD15 */
#define PIN_PB7C_ADC_ADTRG                         _UINT32_(39) /**< ADC signal: ADC_ADTRG on PB7 mux C */
#define MUX_PB7C_ADC_ADTRG                         _UINT32_(2)  /**< ADC signal line function value: ADC_ADTRG */
#define PIO_PB7C_ADC_ADTRG                         (_UINT32_(1) << 7) /**< ADC signal: ADC_ADTRG */
#define PIN_PB21D_ADC_ADTRG                        _UINT32_(53) /**< ADC signal: ADC_ADTRG on PB21 mux D */
#define MUX_PB21D_ADC_ADTRG                        _UINT32_(3)  /**< ADC signal line function value: ADC_ADTRG */
#define PIO_PB21D_ADC_ADTRG                        (_UINT32_(1) << 21) /**< ADC signal: ADC_ADTRG */
/* ========== PIO definition for EBI peripheral ========== */
#define PIN_PC21E_EBI_A0                           _UINT32_(85) /**< EBI signal: EBI_A0 on PC21 mux E */
#define MUX_PC21E_EBI_A0                           _UINT32_(4)  /**< EBI signal line function value: EBI_A0 */
#define PIO_PC21E_EBI_A0                           (_UINT32_(1) << 21) /**< EBI signal: EBI_A0 */
#define PIN_PC20E_EBI_A1                           _UINT32_(84) /**< EBI signal: EBI_A1 on PC20 mux E */
#define MUX_PC20E_EBI_A1                           _UINT32_(4)  /**< EBI signal line function value: EBI_A1 */
#define PIO_PC20E_EBI_A1                           (_UINT32_(1) << 20) /**< EBI signal: EBI_A1 */
#define PIN_PC19E_EBI_A2                           _UINT32_(83) /**< EBI signal: EBI_A2 on PC19 mux E */
#define MUX_PC19E_EBI_A2                           _UINT32_(4)  /**< EBI signal line function value: EBI_A2 */
#define PIO_PC19E_EBI_A2                           (_UINT32_(1) << 19) /**< EBI signal: EBI_A2 */
#define PIN_PC18E_EBI_A3                           _UINT32_(82) /**< EBI signal: EBI_A3 on PC18 mux E */
#define MUX_PC18E_EBI_A3                           _UINT32_(4)  /**< EBI signal line function value: EBI_A3 */
#define PIO_PC18E_EBI_A3                           (_UINT32_(1) << 18) /**< EBI signal: EBI_A3 */
#define PIN_PC17E_EBI_A4                           _UINT32_(81) /**< EBI signal: EBI_A4 on PC17 mux E */
#define MUX_PC17E_EBI_A4                           _UINT32_(4)  /**< EBI signal line function value: EBI_A4 */
#define PIO_PC17E_EBI_A4                           (_UINT32_(1) << 17) /**< EBI signal: EBI_A4 */
#define PIN_PC16E_EBI_A5                           _UINT32_(80) /**< EBI signal: EBI_A5 on PC16 mux E */
#define MUX_PC16E_EBI_A5                           _UINT32_(4)  /**< EBI signal line function value: EBI_A5 */
#define PIO_PC16E_EBI_A5                           (_UINT32_(1) << 16) /**< EBI signal: EBI_A5 */
#define PIN_PC15E_EBI_A6                           _UINT32_(79) /**< EBI signal: EBI_A6 on PC15 mux E */
#define MUX_PC15E_EBI_A6                           _UINT32_(4)  /**< EBI signal line function value: EBI_A6 */
#define PIO_PC15E_EBI_A6                           (_UINT32_(1) << 15) /**< EBI signal: EBI_A6 */
#define PIN_PC14E_EBI_A7                           _UINT32_(78) /**< EBI signal: EBI_A7 on PC14 mux E */
#define MUX_PC14E_EBI_A7                           _UINT32_(4)  /**< EBI signal line function value: EBI_A7 */
#define PIO_PC14E_EBI_A7                           (_UINT32_(1) << 14) /**< EBI signal: EBI_A7 */
#define PIN_PC13E_EBI_A8                           _UINT32_(77) /**< EBI signal: EBI_A8 on PC13 mux E */
#define MUX_PC13E_EBI_A8                           _UINT32_(4)  /**< EBI signal line function value: EBI_A8 */
#define PIO_PC13E_EBI_A8                           (_UINT32_(1) << 13) /**< EBI signal: EBI_A8 */
#define PIN_PC12E_EBI_A9                           _UINT32_(76) /**< EBI signal: EBI_A9 on PC12 mux E */
#define MUX_PC12E_EBI_A9                           _UINT32_(4)  /**< EBI signal line function value: EBI_A9 */
#define PIO_PC12E_EBI_A9                           (_UINT32_(1) << 12) /**< EBI signal: EBI_A9 */
#define PIN_PC3E_EBI_A10                           _UINT32_(67) /**< EBI signal: EBI_A10 on PC3 mux E */
#define MUX_PC3E_EBI_A10                           _UINT32_(4)  /**< EBI signal line function value: EBI_A10 */
#define PIO_PC3E_EBI_A10                           (_UINT32_(1) << 3) /**< EBI signal: EBI_A10 */
#define PIN_PC2E_EBI_A11                           _UINT32_(66) /**< EBI signal: EBI_A11 on PC2 mux E */
#define MUX_PC2E_EBI_A11                           _UINT32_(4)  /**< EBI signal line function value: EBI_A11 */
#define PIO_PC2E_EBI_A11                           (_UINT32_(1) << 2) /**< EBI signal: EBI_A11 */
#define PIN_PC26E_EBI_A12                          _UINT32_(90) /**< EBI signal: EBI_A12 on PC26 mux E */
#define MUX_PC26E_EBI_A12                          _UINT32_(4)  /**< EBI signal line function value: EBI_A12 */
#define PIO_PC26E_EBI_A12                          (_UINT32_(1) << 26) /**< EBI signal: EBI_A12 */
#define PIN_PA1C_EBI_A21                           _UINT32_(1)  /**< EBI signal: EBI_A21 on PA1 mux C */
#define MUX_PA1C_EBI_A21                           _UINT32_(2)  /**< EBI signal line function value: EBI_A21 */
#define PIO_PA1C_EBI_A21                           (_UINT32_(1) << 1) /**< EBI signal: EBI_A21 */
#define PIN_PA2C_EBI_A22                           _UINT32_(2)  /**< EBI signal: EBI_A22 on PA2 mux C */
#define MUX_PA2C_EBI_A22                           _UINT32_(2)  /**< EBI signal line function value: EBI_A22 */
#define PIO_PA2C_EBI_A22                           (_UINT32_(1) << 2) /**< EBI signal: EBI_A22 */
#define PIN_PA3C_EBI_D0                            _UINT32_(3)  /**< EBI signal: EBI_D0 on PA3 mux C */
#define MUX_PA3C_EBI_D0                            _UINT32_(2)  /**< EBI signal line function value: EBI_D0 */
#define PIO_PA3C_EBI_D0                            (_UINT32_(1) << 3) /**< EBI signal: EBI_D0 */
#define PIN_PC4E_EBI_D0                            _UINT32_(68) /**< EBI signal: EBI_D0 on PC4 mux E */
#define MUX_PC4E_EBI_D0                            _UINT32_(4)  /**< EBI signal line function value: EBI_D0 */
#define PIO_PC4E_EBI_D0                            (_UINT32_(1) << 4) /**< EBI signal: EBI_D0 */
#define PIN_PA4C_EBI_D1                            _UINT32_(4)  /**< EBI signal: EBI_D1 on PA4 mux C */
#define MUX_PA4C_EBI_D1                            _UINT32_(2)  /**< EBI signal line function value: EBI_D1 */
#define PIO_PA4C_EBI_D1                            (_UINT32_(1) << 4) /**< EBI signal: EBI_D1 */
#define PIN_PC5E_EBI_D1                            _UINT32_(69) /**< EBI signal: EBI_D1 on PC5 mux E */
#define MUX_PC5E_EBI_D1                            _UINT32_(4)  /**< EBI signal line function value: EBI_D1 */
#define PIO_PC5E_EBI_D1                            (_UINT32_(1) << 5) /**< EBI signal: EBI_D1 */
#define PIN_PA9C_EBI_D2                            _UINT32_(9)  /**< EBI signal: EBI_D2 on PA9 mux C */
#define MUX_PA9C_EBI_D2                            _UINT32_(2)  /**< EBI signal line function value: EBI_D2 */
#define PIO_PA9C_EBI_D2                            (_UINT32_(1) << 9) /**< EBI signal: EBI_D2 */
#define PIN_PC10E_EBI_D2                           _UINT32_(74) /**< EBI signal: EBI_D2 on PC10 mux E */
#define MUX_PC10E_EBI_D2                           _UINT32_(4)  /**< EBI signal line function value: EBI_D2 */
#define PIO_PC10E_EBI_D2                           (_UINT32_(1) << 10) /**< EBI signal: EBI_D2 */
#define PIN_PA10C_EBI_D3                           _UINT32_(10) /**< EBI signal: EBI_D3 on PA10 mux C */
#define MUX_PA10C_EBI_D3                           _UINT32_(2)  /**< EBI signal line function value: EBI_D3 */
#define PIO_PA10C_EBI_D3                           (_UINT32_(1) << 10) /**< EBI signal: EBI_D3 */
#define PIN_PC11E_EBI_D3                           _UINT32_(75) /**< EBI signal: EBI_D3 on PC11 mux E */
#define MUX_PC11E_EBI_D3                           _UINT32_(4)  /**< EBI signal line function value: EBI_D3 */
#define PIO_PC11E_EBI_D3                           (_UINT32_(1) << 11) /**< EBI signal: EBI_D3 */
#define PIN_PA5C_EBI_D4                            _UINT32_(5)  /**< EBI signal: EBI_D4 on PA5 mux C */
#define MUX_PA5C_EBI_D4                            _UINT32_(2)  /**< EBI signal line function value: EBI_D4 */
#define PIO_PA5C_EBI_D4                            (_UINT32_(1) << 5) /**< EBI signal: EBI_D4 */
#define PIN_PC6E_EBI_D4                            _UINT32_(70) /**< EBI signal: EBI_D4 on PC6 mux E */
#define MUX_PC6E_EBI_D4                            _UINT32_(4)  /**< EBI signal line function value: EBI_D4 */
#define PIO_PC6E_EBI_D4                            (_UINT32_(1) << 6) /**< EBI signal: EBI_D4 */
#define PIN_PA6C_EBI_D5                            _UINT32_(6)  /**< EBI signal: EBI_D5 on PA6 mux C */
#define MUX_PA6C_EBI_D5                            _UINT32_(2)  /**< EBI signal line function value: EBI_D5 */
#define PIO_PA6C_EBI_D5                            (_UINT32_(1) << 6) /**< EBI signal: EBI_D5 */
#define PIN_PC7E_EBI_D5                            _UINT32_(71) /**< EBI signal: EBI_D5 on PC7 mux E */
#define MUX_PC7E_EBI_D5                            _UINT32_(4)  /**< EBI signal line function value: EBI_D5 */
#define PIO_PC7E_EBI_D5                            (_UINT32_(1) << 7) /**< EBI signal: EBI_D5 */
#define PIN_PA7C_EBI_D6                            _UINT32_(7)  /**< EBI signal: EBI_D6 on PA7 mux C */
#define MUX_PA7C_EBI_D6                            _UINT32_(2)  /**< EBI signal line function value: EBI_D6 */
#define PIO_PA7C_EBI_D6                            (_UINT32_(1) << 7) /**< EBI signal: EBI_D6 */
#define PIN_PC8E_EBI_D6                            _UINT32_(72) /**< EBI signal: EBI_D6 on PC8 mux E */
#define MUX_PC8E_EBI_D6                            _UINT32_(4)  /**< EBI signal line function value: EBI_D6 */
#define PIO_PC8E_EBI_D6                            (_UINT32_(1) << 8) /**< EBI signal: EBI_D6 */
#define PIN_PA8C_EBI_D7                            _UINT32_(8)  /**< EBI signal: EBI_D7 on PA8 mux C */
#define MUX_PA8C_EBI_D7                            _UINT32_(2)  /**< EBI signal line function value: EBI_D7 */
#define PIO_PA8C_EBI_D7                            (_UINT32_(1) << 8) /**< EBI signal: EBI_D7 */
#define PIN_PC9E_EBI_D7                            _UINT32_(73) /**< EBI signal: EBI_D7 on PC9 mux E */
#define MUX_PC9E_EBI_D7                            _UINT32_(4)  /**< EBI signal line function value: EBI_D7 */
#define PIO_PC9E_EBI_D7                            (_UINT32_(1) << 9) /**< EBI signal: EBI_D7 */
#define PIN_PC27E_EBI_D8                           _UINT32_(91) /**< EBI signal: EBI_D8 on PC27 mux E */
#define MUX_PC27E_EBI_D8                           _UINT32_(4)  /**< EBI signal line function value: EBI_D8 */
#define PIO_PC27E_EBI_D8                           (_UINT32_(1) << 27) /**< EBI signal: EBI_D8 */
#define PIN_PC28E_EBI_D9                           _UINT32_(92) /**< EBI signal: EBI_D9 on PC28 mux E */
#define MUX_PC28E_EBI_D9                           _UINT32_(4)  /**< EBI signal line function value: EBI_D9 */
#define PIO_PC28E_EBI_D9                           (_UINT32_(1) << 28) /**< EBI signal: EBI_D9 */
#define PIN_PC29E_EBI_D10                          _UINT32_(93) /**< EBI signal: EBI_D10 on PC29 mux E */
#define MUX_PC29E_EBI_D10                          _UINT32_(4)  /**< EBI signal line function value: EBI_D10 */
#define PIO_PC29E_EBI_D10                          (_UINT32_(1) << 29) /**< EBI signal: EBI_D10 */
#define PIN_PC30E_EBI_D11                          _UINT32_(94) /**< EBI signal: EBI_D11 on PC30 mux E */
#define MUX_PC30E_EBI_D11                          _UINT32_(4)  /**< EBI signal line function value: EBI_D11 */
#define PIO_PC30E_EBI_D11                          (_UINT32_(1) << 30) /**< EBI signal: EBI_D11 */
#define PIN_PC31E_EBI_D12                          _UINT32_(95) /**< EBI signal: EBI_D12 on PC31 mux E */
#define MUX_PC31E_EBI_D12                          _UINT32_(4)  /**< EBI signal line function value: EBI_D12 */
#define PIO_PC31E_EBI_D12                          (_UINT32_(1) << 31) /**< EBI signal: EBI_D12 */
#define PIN_PD0E_EBI_D13                           _UINT32_(96) /**< EBI signal: EBI_D13 on PD0 mux E */
#define MUX_PD0E_EBI_D13                           _UINT32_(4)  /**< EBI signal line function value: EBI_D13 */
#define PIO_PD0E_EBI_D13                           (_UINT32_(1) << 0) /**< EBI signal: EBI_D13 */
#define PIN_PB29E_EBI_D14                          _UINT32_(61) /**< EBI signal: EBI_D14 on PB29 mux E */
#define MUX_PB29E_EBI_D14                          _UINT32_(4)  /**< EBI signal line function value: EBI_D14 */
#define PIO_PB29E_EBI_D14                          (_UINT32_(1) << 29) /**< EBI signal: EBI_D14 */
#define PIN_PB28E_EBI_D15                          _UINT32_(60) /**< EBI signal: EBI_D15 on PB28 mux E */
#define MUX_PB28E_EBI_D15                          _UINT32_(4)  /**< EBI signal line function value: EBI_D15 */
#define PIO_PB28E_EBI_D15                          (_UINT32_(1) << 28) /**< EBI signal: EBI_D15 */
#define PIN_PA1C_EBI_NANDALE                       _UINT32_(1)  /**< EBI signal: EBI_NANDALE on PA1 mux C */
#define MUX_PA1C_EBI_NANDALE                       _UINT32_(2)  /**< EBI signal line function value: EBI_NANDALE */
#define PIO_PA1C_EBI_NANDALE                       (_UINT32_(1) << 1) /**< EBI signal: EBI_NANDALE */
#define PIN_PA2C_EBI_NANDCLE                       _UINT32_(2)  /**< EBI signal: EBI_NANDCLE on PA2 mux C */
#define MUX_PA2C_EBI_NANDCLE                       _UINT32_(2)  /**< EBI signal line function value: EBI_NANDCLE */
#define PIO_PA2C_EBI_NANDCLE                       (_UINT32_(1) << 2) /**< EBI signal: EBI_NANDCLE */
#define PIN_PA13C_EBI_NANDCS0                      _UINT32_(13) /**< EBI signal: EBI_NANDCS0 on PA13 mux C */
#define MUX_PA13C_EBI_NANDCS0                      _UINT32_(2)  /**< EBI signal line function value: EBI_NANDCS0 */
#define PIO_PA13C_EBI_NANDCS0                      (_UINT32_(1) << 13) /**< EBI signal: EBI_NANDCS0 */
#define PIN_PB30E_EBI_NANDCS1                      _UINT32_(62) /**< EBI signal: EBI_NANDCS1 on PB30 mux E */
#define MUX_PB30E_EBI_NANDCS1                      _UINT32_(4)  /**< EBI signal line function value: EBI_NANDCS1 */
#define PIO_PB30E_EBI_NANDCS1                      (_UINT32_(1) << 30) /**< EBI signal: EBI_NANDCS1 */
#define PIN_PA12C_EBI_NANDOE                       _UINT32_(12) /**< EBI signal: EBI_NANDOE on PA12 mux C */
#define MUX_PA12C_EBI_NANDOE                       _UINT32_(2)  /**< EBI signal line function value: EBI_NANDOE */
#define PIO_PA12C_EBI_NANDOE                       (_UINT32_(1) << 12) /**< EBI signal: EBI_NANDOE */
#define PIN_PA11C_EBI_NANDRDY                      _UINT32_(11) /**< EBI signal: EBI_NANDRDY on PA11 mux C */
#define MUX_PA11C_EBI_NANDRDY                      _UINT32_(2)  /**< EBI signal line function value: EBI_NANDRDY */
#define PIO_PA11C_EBI_NANDRDY                      (_UINT32_(1) << 11) /**< EBI signal: EBI_NANDRDY */
#define PIN_PA0C_EBI_NANDWE                        _UINT32_(0)  /**< EBI signal: EBI_NANDWE on PA0 mux C */
#define MUX_PA0C_EBI_NANDWE                        _UINT32_(2)  /**< EBI signal line function value: EBI_NANDWE */
#define PIO_PA0C_EBI_NANDWE                        (_UINT32_(1) << 0) /**< EBI signal: EBI_NANDWE */
#define PIN_PB31E_EBI_NANDWE                       _UINT32_(63) /**< EBI signal: EBI_NANDWE on PB31 mux E */
#define MUX_PB31E_EBI_NANDWE                       _UINT32_(4)  /**< EBI signal line function value: EBI_NANDWE */
#define PIO_PB31E_EBI_NANDWE                       (_UINT32_(1) << 31) /**< EBI signal: EBI_NANDWE */
#define PIN_PC21E_EBI_NBS0                         _UINT32_(85) /**< EBI signal: EBI_NBS0 on PC21 mux E */
#define MUX_PC21E_EBI_NBS0                         _UINT32_(4)  /**< EBI signal line function value: EBI_NBS0 */
#define PIO_PC21E_EBI_NBS0                         (_UINT32_(1) << 21) /**< EBI signal: EBI_NBS0 */
#define PIN_PC0E_EBI_NBS1                          _UINT32_(64) /**< EBI signal: EBI_NBS1 on PC0 mux E */
#define MUX_PC0E_EBI_NBS1                          _UINT32_(4)  /**< EBI signal line function value: EBI_NBS1 */
#define PIO_PC0E_EBI_NBS1                          (_UINT32_(1) << 0) /**< EBI signal: EBI_NBS1 */
#define PIN_PA13C_EBI_NCS0                         _UINT32_(13) /**< EBI signal: EBI_NCS0 on PA13 mux C */
#define MUX_PA13C_EBI_NCS0                         _UINT32_(2)  /**< EBI signal line function value: EBI_NCS0 */
#define PIO_PA13C_EBI_NCS0                         (_UINT32_(1) << 13) /**< EBI signal: EBI_NCS0 */
#define PIN_PB30E_EBI_NCS1                         _UINT32_(62) /**< EBI signal: EBI_NCS1 on PB30 mux E */
#define MUX_PB30E_EBI_NCS1                         _UINT32_(4)  /**< EBI signal line function value: EBI_NCS1 */
#define PIO_PB30E_EBI_NCS1                         (_UINT32_(1) << 30) /**< EBI signal: EBI_NCS1 */
#define PIN_PA12C_EBI_NRD                          _UINT32_(12) /**< EBI signal: EBI_NRD on PA12 mux C */
#define MUX_PA12C_EBI_NRD                          _UINT32_(2)  /**< EBI signal line function value: EBI_NRD */
#define PIO_PA12C_EBI_NRD                          (_UINT32_(1) << 12) /**< EBI signal: EBI_NRD */
#define PIN_PC22E_EBI_NWAIT                        _UINT32_(86) /**< EBI signal: EBI_NWAIT on PC22 mux E */
#define MUX_PC22E_EBI_NWAIT                        _UINT32_(4)  /**< EBI signal line function value: EBI_NWAIT */
#define PIO_PC22E_EBI_NWAIT                        (_UINT32_(1) << 22) /**< EBI signal: EBI_NWAIT */
#define PIN_PA0C_EBI_NWE                           _UINT32_(0)  /**< EBI signal: EBI_NWE on PA0 mux C */
#define MUX_PA0C_EBI_NWE                           _UINT32_(2)  /**< EBI signal line function value: EBI_NWE */
#define PIO_PA0C_EBI_NWE                           (_UINT32_(1) << 0) /**< EBI signal: EBI_NWE */
#define PIN_PB31E_EBI_NWE                          _UINT32_(63) /**< EBI signal: EBI_NWE on PB31 mux E */
#define MUX_PB31E_EBI_NWE                          _UINT32_(4)  /**< EBI signal line function value: EBI_NWE */
#define PIO_PB31E_EBI_NWE                          (_UINT32_(1) << 31) /**< EBI signal: EBI_NWE */
#define PIN_PA0C_EBI_NWR0                          _UINT32_(0)  /**< EBI signal: EBI_NWR0 on PA0 mux C */
#define MUX_PA0C_EBI_NWR0                          _UINT32_(2)  /**< EBI signal line function value: EBI_NWR0 */
#define PIO_PA0C_EBI_NWR0                          (_UINT32_(1) << 0) /**< EBI signal: EBI_NWR0 */
#define PIN_PB31E_EBI_NWR0                         _UINT32_(63) /**< EBI signal: EBI_NWR0 on PB31 mux E */
#define MUX_PB31E_EBI_NWR0                         _UINT32_(4)  /**< EBI signal line function value: EBI_NWR0 */
#define PIO_PB31E_EBI_NWR0                         (_UINT32_(1) << 31) /**< EBI signal: EBI_NWR0 */
#define PIN_PC0E_EBI_NWR1                          _UINT32_(64) /**< EBI signal: EBI_NWR1 on PC0 mux E */
#define MUX_PC0E_EBI_NWR1                          _UINT32_(4)  /**< EBI signal line function value: EBI_NWR1 */
#define PIO_PC0E_EBI_NWR1                          (_UINT32_(1) << 0) /**< EBI signal: EBI_NWR1 */
#define PIN_PC1E_EBI_SMCK                          _UINT32_(65) /**< EBI signal: EBI_SMCK on PC1 mux E */
#define MUX_PC1E_EBI_SMCK                          _UINT32_(4)  /**< EBI signal line function value: EBI_SMCK */
#define PIO_PC1E_EBI_SMCK                          (_UINT32_(1) << 1) /**< EBI signal: EBI_SMCK */
/* ========== PIO definition for EIC peripheral ========== */
#define PIN_PA12E_EIC_EXT_IRQ0                     _UINT32_(12) /**< EIC signal: EIC_EXT_IRQ0 on PA12 mux E */
#define MUX_PA12E_EIC_EXT_IRQ0                     _UINT32_(4)  /**< EIC signal line function value: EIC_EXT_IRQ0 */
#define PIO_PA12E_EIC_EXT_IRQ0                     (_UINT32_(1) << 12) /**< EIC signal: EIC_EXT_IRQ0 */
#define PIN_PB21E_EIC_EXT_IRQ0                     _UINT32_(53) /**< EIC signal: EIC_EXT_IRQ0 on PB21 mux E */
#define MUX_PB21E_EIC_EXT_IRQ0                     _UINT32_(4)  /**< EIC signal line function value: EIC_EXT_IRQ0 */
#define PIO_PB21E_EIC_EXT_IRQ0                     (_UINT32_(1) << 21) /**< EIC signal: EIC_EXT_IRQ0 */
#define PIN_PC2A_EIC_EXT_IRQ0                      _UINT32_(66) /**< EIC signal: EIC_EXT_IRQ0 on PC2 mux A */
#define MUX_PC2A_EIC_EXT_IRQ0                      _UINT32_(0)  /**< EIC signal line function value: EIC_EXT_IRQ0 */
#define PIO_PC2A_EIC_EXT_IRQ0                      (_UINT32_(1) << 2) /**< EIC signal: EIC_EXT_IRQ0 */
#define PIN_PA16E_EIC_EXT_IRQ1                     _UINT32_(16) /**< EIC signal: EIC_EXT_IRQ1 on PA16 mux E */
#define MUX_PA16E_EIC_EXT_IRQ1                     _UINT32_(4)  /**< EIC signal line function value: EIC_EXT_IRQ1 */
#define PIO_PA16E_EIC_EXT_IRQ1                     (_UINT32_(1) << 16) /**< EIC signal: EIC_EXT_IRQ1 */
#define PIN_PB19B_EIC_EXT_IRQ1                     _UINT32_(51) /**< EIC signal: EIC_EXT_IRQ1 on PB19 mux B */
#define MUX_PB19B_EIC_EXT_IRQ1                     _UINT32_(1)  /**< EIC signal line function value: EIC_EXT_IRQ1 */
#define PIO_PB19B_EIC_EXT_IRQ1                     (_UINT32_(1) << 19) /**< EIC signal: EIC_EXT_IRQ1 */
#define PIN_PD3E_EIC_EXT_IRQ1                      _UINT32_(99) /**< EIC signal: EIC_EXT_IRQ1 on PD3 mux E */
#define MUX_PD3E_EIC_EXT_IRQ1                      _UINT32_(4)  /**< EIC signal line function value: EIC_EXT_IRQ1 */
#define PIO_PD3E_EIC_EXT_IRQ1                      (_UINT32_(1) << 3) /**< EIC signal: EIC_EXT_IRQ1 */
/* ========== PIO definition for FLEXCOM0 peripheral ========== */
#define PIN_PA12B_FLEXCOM0_IO0                     _UINT32_(12) /**< FLEXCOM0 signal: FLEXCOM0_IO0 on PA12 mux B */
#define MUX_PA12B_FLEXCOM0_IO0                     _UINT32_(1)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO0 */
#define PIO_PA12B_FLEXCOM0_IO0                     (_UINT32_(1) << 12) /**< FLEXCOM0 signal: FLEXCOM0_IO0 */
#define PIN_PC7D_FLEXCOM0_IO0                      _UINT32_(71) /**< FLEXCOM0 signal: FLEXCOM0_IO0 on PC7 mux D */
#define MUX_PC7D_FLEXCOM0_IO0                      _UINT32_(3)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO0 */
#define PIO_PC7D_FLEXCOM0_IO0                      (_UINT32_(1) << 7) /**< FLEXCOM0 signal: FLEXCOM0_IO0 */
#define PIN_PA13B_FLEXCOM0_IO1                     _UINT32_(13) /**< FLEXCOM0 signal: FLEXCOM0_IO1 on PA13 mux B */
#define MUX_PA13B_FLEXCOM0_IO1                     _UINT32_(1)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO1 */
#define PIO_PA13B_FLEXCOM0_IO1                     (_UINT32_(1) << 13) /**< FLEXCOM0 signal: FLEXCOM0_IO1 */
#define PIN_PC6D_FLEXCOM0_IO1                      _UINT32_(70) /**< FLEXCOM0 signal: FLEXCOM0_IO1 on PC6 mux D */
#define MUX_PC6D_FLEXCOM0_IO1                      _UINT32_(3)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO1 */
#define PIO_PC6D_FLEXCOM0_IO1                      (_UINT32_(1) << 6) /**< FLEXCOM0 signal: FLEXCOM0_IO1 */
#define PIN_PA9B_FLEXCOM0_IO2                      _UINT32_(9)  /**< FLEXCOM0 signal: FLEXCOM0_IO2 on PA9 mux B */
#define MUX_PA9B_FLEXCOM0_IO2                      _UINT32_(1)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO2 */
#define PIO_PA9B_FLEXCOM0_IO2                      (_UINT32_(1) << 9) /**< FLEXCOM0 signal: FLEXCOM0_IO2 */
#define PIN_PC5D_FLEXCOM0_IO2                      _UINT32_(69) /**< FLEXCOM0 signal: FLEXCOM0_IO2 on PC5 mux D */
#define MUX_PC5D_FLEXCOM0_IO2                      _UINT32_(3)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO2 */
#define PIO_PC5D_FLEXCOM0_IO2                      (_UINT32_(1) << 5) /**< FLEXCOM0 signal: FLEXCOM0_IO2 */
#define PIN_PA10B_FLEXCOM0_IO3                     _UINT32_(10) /**< FLEXCOM0 signal: FLEXCOM0_IO3 on PA10 mux B */
#define MUX_PA10B_FLEXCOM0_IO3                     _UINT32_(1)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO3 */
#define PIO_PA10B_FLEXCOM0_IO3                     (_UINT32_(1) << 10) /**< FLEXCOM0 signal: FLEXCOM0_IO3 */
#define PIN_PC4D_FLEXCOM0_IO3                      _UINT32_(68) /**< FLEXCOM0 signal: FLEXCOM0_IO3 on PC4 mux D */
#define MUX_PC4D_FLEXCOM0_IO3                      _UINT32_(3)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO3 */
#define PIO_PC4D_FLEXCOM0_IO3                      (_UINT32_(1) << 4) /**< FLEXCOM0 signal: FLEXCOM0_IO3 */
#define PIN_PA11B_FLEXCOM0_IO4                     _UINT32_(11) /**< FLEXCOM0 signal: FLEXCOM0_IO4 on PA11 mux B */
#define MUX_PA11B_FLEXCOM0_IO4                     _UINT32_(1)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO4 */
#define PIO_PA11B_FLEXCOM0_IO4                     (_UINT32_(1) << 11) /**< FLEXCOM0 signal: FLEXCOM0_IO4 */
#define PIN_PC3D_FLEXCOM0_IO4                      _UINT32_(67) /**< FLEXCOM0 signal: FLEXCOM0_IO4 on PC3 mux D */
#define MUX_PC3D_FLEXCOM0_IO4                      _UINT32_(3)  /**< FLEXCOM0 signal line function value: FLEXCOM0_IO4 */
#define PIO_PC3D_FLEXCOM0_IO4                      (_UINT32_(1) << 3) /**< FLEXCOM0 signal: FLEXCOM0_IO4 */
/* ========== PIO definition for FLEXCOM1 peripheral ========== */
#define PIN_PB28C_FLEXCOM1_IO0                     _UINT32_(60) /**< FLEXCOM1 signal: FLEXCOM1_IO0 on PB28 mux C */
#define MUX_PB28C_FLEXCOM1_IO0                     _UINT32_(2)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO0 */
#define PIO_PB28C_FLEXCOM1_IO0                     (_UINT32_(1) << 28) /**< FLEXCOM1 signal: FLEXCOM1_IO0 */
#define PIN_PC14C_FLEXCOM1_IO0                     _UINT32_(78) /**< FLEXCOM1 signal: FLEXCOM1_IO0 on PC14 mux C */
#define MUX_PC14C_FLEXCOM1_IO0                     _UINT32_(2)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO0 */
#define PIO_PC14C_FLEXCOM1_IO0                     (_UINT32_(1) << 14) /**< FLEXCOM1 signal: FLEXCOM1_IO0 */
#define PIN_PD7B_FLEXCOM1_IO0                      _UINT32_(103) /**< FLEXCOM1 signal: FLEXCOM1_IO0 on PD7 mux B */
#define MUX_PD7B_FLEXCOM1_IO0                      _UINT32_(1)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO0 */
#define PIO_PD7B_FLEXCOM1_IO0                      (_UINT32_(1) << 7) /**< FLEXCOM1 signal: FLEXCOM1_IO0 */
#define PIN_PB29C_FLEXCOM1_IO1                     _UINT32_(61) /**< FLEXCOM1 signal: FLEXCOM1_IO1 on PB29 mux C */
#define MUX_PB29C_FLEXCOM1_IO1                     _UINT32_(2)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO1 */
#define PIO_PB29C_FLEXCOM1_IO1                     (_UINT32_(1) << 29) /**< FLEXCOM1 signal: FLEXCOM1_IO1 */
#define PIN_PC15C_FLEXCOM1_IO1                     _UINT32_(79) /**< FLEXCOM1 signal: FLEXCOM1_IO1 on PC15 mux C */
#define MUX_PC15C_FLEXCOM1_IO1                     _UINT32_(2)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO1 */
#define PIO_PC15C_FLEXCOM1_IO1                     (_UINT32_(1) << 15) /**< FLEXCOM1 signal: FLEXCOM1_IO1 */
#define PIN_PD6B_FLEXCOM1_IO1                      _UINT32_(102) /**< FLEXCOM1 signal: FLEXCOM1_IO1 on PD6 mux B */
#define MUX_PD6B_FLEXCOM1_IO1                      _UINT32_(1)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO1 */
#define PIO_PD6B_FLEXCOM1_IO1                      (_UINT32_(1) << 6) /**< FLEXCOM1 signal: FLEXCOM1_IO1 */
#define PIN_PB30C_FLEXCOM1_IO2                     _UINT32_(62) /**< FLEXCOM1 signal: FLEXCOM1_IO2 on PB30 mux C */
#define MUX_PB30C_FLEXCOM1_IO2                     _UINT32_(2)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO2 */
#define PIO_PB30C_FLEXCOM1_IO2                     (_UINT32_(1) << 30) /**< FLEXCOM1 signal: FLEXCOM1_IO2 */
#define PIN_PC16C_FLEXCOM1_IO2                     _UINT32_(80) /**< FLEXCOM1 signal: FLEXCOM1_IO2 on PC16 mux C */
#define MUX_PC16C_FLEXCOM1_IO2                     _UINT32_(2)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO2 */
#define PIO_PC16C_FLEXCOM1_IO2                     (_UINT32_(1) << 16) /**< FLEXCOM1 signal: FLEXCOM1_IO2 */
#define PIN_PD4B_FLEXCOM1_IO2                      _UINT32_(100) /**< FLEXCOM1 signal: FLEXCOM1_IO2 on PD4 mux B */
#define MUX_PD4B_FLEXCOM1_IO2                      _UINT32_(1)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO2 */
#define PIO_PD4B_FLEXCOM1_IO2                      (_UINT32_(1) << 4) /**< FLEXCOM1 signal: FLEXCOM1_IO2 */
#define PIN_PB31C_FLEXCOM1_IO3                     _UINT32_(63) /**< FLEXCOM1 signal: FLEXCOM1_IO3 on PB31 mux C */
#define MUX_PB31C_FLEXCOM1_IO3                     _UINT32_(2)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO3 */
#define PIO_PB31C_FLEXCOM1_IO3                     (_UINT32_(1) << 31) /**< FLEXCOM1 signal: FLEXCOM1_IO3 */
#define PIN_PC17C_FLEXCOM1_IO3                     _UINT32_(81) /**< FLEXCOM1 signal: FLEXCOM1_IO3 on PC17 mux C */
#define MUX_PC17C_FLEXCOM1_IO3                     _UINT32_(2)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO3 */
#define PIO_PC17C_FLEXCOM1_IO3                     (_UINT32_(1) << 17) /**< FLEXCOM1 signal: FLEXCOM1_IO3 */
#define PIN_PD5B_FLEXCOM1_IO3                      _UINT32_(101) /**< FLEXCOM1 signal: FLEXCOM1_IO3 on PD5 mux B */
#define MUX_PD5B_FLEXCOM1_IO3                      _UINT32_(1)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO3 */
#define PIO_PD5B_FLEXCOM1_IO3                      (_UINT32_(1) << 5) /**< FLEXCOM1 signal: FLEXCOM1_IO3 */
#define PIN_PC18C_FLEXCOM1_IO4                     _UINT32_(82) /**< FLEXCOM1 signal: FLEXCOM1_IO4 on PC18 mux C */
#define MUX_PC18C_FLEXCOM1_IO4                     _UINT32_(2)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO4 */
#define PIO_PC18C_FLEXCOM1_IO4                     (_UINT32_(1) << 18) /**< FLEXCOM1 signal: FLEXCOM1_IO4 */
#define PIN_PD3B_FLEXCOM1_IO4                      _UINT32_(99) /**< FLEXCOM1 signal: FLEXCOM1_IO4 on PD3 mux B */
#define MUX_PD3B_FLEXCOM1_IO4                      _UINT32_(1)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO4 */
#define PIO_PD3B_FLEXCOM1_IO4                      (_UINT32_(1) << 3) /**< FLEXCOM1 signal: FLEXCOM1_IO4 */
#define PIN_PD1B_FLEXCOM1_IO5                      _UINT32_(97) /**< FLEXCOM1 signal: FLEXCOM1_IO5 on PD1 mux B */
#define MUX_PD1B_FLEXCOM1_IO5                      _UINT32_(1)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO5 */
#define PIO_PD1B_FLEXCOM1_IO5                      (_UINT32_(1) << 1) /**< FLEXCOM1 signal: FLEXCOM1_IO5 */
#define PIN_PD2B_FLEXCOM1_IO6                      _UINT32_(98) /**< FLEXCOM1 signal: FLEXCOM1_IO6 on PD2 mux B */
#define MUX_PD2B_FLEXCOM1_IO6                      _UINT32_(1)  /**< FLEXCOM1 signal line function value: FLEXCOM1_IO6 */
#define PIO_PD2B_FLEXCOM1_IO6                      (_UINT32_(1) << 2) /**< FLEXCOM1 signal: FLEXCOM1_IO6 */
/* ========== PIO definition for FLEXCOM2 peripheral ========== */
#define PIN_PA5B_FLEXCOM2_IO0                      _UINT32_(5)  /**< FLEXCOM2 signal: FLEXCOM2_IO0 on PA5 mux B */
#define MUX_PA5B_FLEXCOM2_IO0                      _UINT32_(1)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO0 */
#define PIO_PA5B_FLEXCOM2_IO0                      (_UINT32_(1) << 5) /**< FLEXCOM2 signal: FLEXCOM2_IO0 */
#define PIN_PB9D_FLEXCOM2_IO0                      _UINT32_(41) /**< FLEXCOM2 signal: FLEXCOM2_IO0 on PB9 mux D */
#define MUX_PB9D_FLEXCOM2_IO0                      _UINT32_(3)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO0 */
#define PIO_PB9D_FLEXCOM2_IO0                      (_UINT32_(1) << 9) /**< FLEXCOM2 signal: FLEXCOM2_IO0 */
#define PIN_PB15G_FLEXCOM2_IO0                     _UINT32_(47) /**< FLEXCOM2 signal: FLEXCOM2_IO0 on PB15 mux G */
#define MUX_PB15G_FLEXCOM2_IO0                     _UINT32_(6)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO0 */
#define PIO_PB15G_FLEXCOM2_IO0                     (_UINT32_(1) << 15) /**< FLEXCOM2 signal: FLEXCOM2_IO0 */
#define PIN_PE8B_FLEXCOM2_IO0                      _UINT32_(136) /**< FLEXCOM2 signal: FLEXCOM2_IO0 on PE8 mux B */
#define MUX_PE8B_FLEXCOM2_IO0                      _UINT32_(1)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO0 */
#define PIO_PE8B_FLEXCOM2_IO0                      (_UINT32_(1) << 8) /**< FLEXCOM2 signal: FLEXCOM2_IO0 */
#define PIN_PA6B_FLEXCOM2_IO1                      _UINT32_(6)  /**< FLEXCOM2 signal: FLEXCOM2_IO1 on PA6 mux B */
#define MUX_PA6B_FLEXCOM2_IO1                      _UINT32_(1)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO1 */
#define PIO_PA6B_FLEXCOM2_IO1                      (_UINT32_(1) << 6) /**< FLEXCOM2 signal: FLEXCOM2_IO1 */
#define PIN_PB8D_FLEXCOM2_IO1                      _UINT32_(40) /**< FLEXCOM2 signal: FLEXCOM2_IO1 on PB8 mux D */
#define MUX_PB8D_FLEXCOM2_IO1                      _UINT32_(3)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO1 */
#define PIO_PB8D_FLEXCOM2_IO1                      (_UINT32_(1) << 8) /**< FLEXCOM2 signal: FLEXCOM2_IO1 */
#define PIN_PB14G_FLEXCOM2_IO1                     _UINT32_(46) /**< FLEXCOM2 signal: FLEXCOM2_IO1 on PB14 mux G */
#define MUX_PB14G_FLEXCOM2_IO1                     _UINT32_(6)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO1 */
#define PIO_PB14G_FLEXCOM2_IO1                     (_UINT32_(1) << 14) /**< FLEXCOM2 signal: FLEXCOM2_IO1 */
#define PIN_PE9B_FLEXCOM2_IO1                      _UINT32_(137) /**< FLEXCOM2 signal: FLEXCOM2_IO1 on PE9 mux B */
#define MUX_PE9B_FLEXCOM2_IO1                      _UINT32_(1)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO1 */
#define PIO_PE9B_FLEXCOM2_IO1                      (_UINT32_(1) << 9) /**< FLEXCOM2 signal: FLEXCOM2_IO1 */
#define PIN_PA7B_FLEXCOM2_IO2                      _UINT32_(7)  /**< FLEXCOM2 signal: FLEXCOM2_IO2 on PA7 mux B */
#define MUX_PA7B_FLEXCOM2_IO2                      _UINT32_(1)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO2 */
#define PIO_PA7B_FLEXCOM2_IO2                      (_UINT32_(1) << 7) /**< FLEXCOM2 signal: FLEXCOM2_IO2 */
#define PIN_PB13D_FLEXCOM2_IO2                     _UINT32_(45) /**< FLEXCOM2 signal: FLEXCOM2_IO2 on PB13 mux D */
#define MUX_PB13D_FLEXCOM2_IO2                     _UINT32_(3)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO2 */
#define PIO_PB13D_FLEXCOM2_IO2                     (_UINT32_(1) << 13) /**< FLEXCOM2 signal: FLEXCOM2_IO2 */
#define PIN_PE4B_FLEXCOM2_IO2                      _UINT32_(132) /**< FLEXCOM2 signal: FLEXCOM2_IO2 on PE4 mux B */
#define MUX_PE4B_FLEXCOM2_IO2                      _UINT32_(1)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO2 */
#define PIO_PE4B_FLEXCOM2_IO2                      (_UINT32_(1) << 4) /**< FLEXCOM2 signal: FLEXCOM2_IO2 */
#define PIN_PA8B_FLEXCOM2_IO3                      _UINT32_(8)  /**< FLEXCOM2 signal: FLEXCOM2_IO3 on PA8 mux B */
#define MUX_PA8B_FLEXCOM2_IO3                      _UINT32_(1)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO3 */
#define PIO_PA8B_FLEXCOM2_IO3                      (_UINT32_(1) << 8) /**< FLEXCOM2 signal: FLEXCOM2_IO3 */
#define PIN_PB12D_FLEXCOM2_IO3                     _UINT32_(44) /**< FLEXCOM2 signal: FLEXCOM2_IO3 on PB12 mux D */
#define MUX_PB12D_FLEXCOM2_IO3                     _UINT32_(3)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO3 */
#define PIO_PB12D_FLEXCOM2_IO3                     (_UINT32_(1) << 12) /**< FLEXCOM2 signal: FLEXCOM2_IO3 */
#define PIN_PE5B_FLEXCOM2_IO3                      _UINT32_(133) /**< FLEXCOM2 signal: FLEXCOM2_IO3 on PE5 mux B */
#define MUX_PE5B_FLEXCOM2_IO3                      _UINT32_(1)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO3 */
#define PIO_PE5B_FLEXCOM2_IO3                      (_UINT32_(1) << 5) /**< FLEXCOM2 signal: FLEXCOM2_IO3 */
#define PIN_PB10D_FLEXCOM2_IO4                     _UINT32_(42) /**< FLEXCOM2 signal: FLEXCOM2_IO4 on PB10 mux D */
#define MUX_PB10D_FLEXCOM2_IO4                     _UINT32_(3)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO4 */
#define PIO_PB10D_FLEXCOM2_IO4                     (_UINT32_(1) << 10) /**< FLEXCOM2 signal: FLEXCOM2_IO4 */
#define PIN_PE6B_FLEXCOM2_IO4                      _UINT32_(134) /**< FLEXCOM2 signal: FLEXCOM2_IO4 on PE6 mux B */
#define MUX_PE6B_FLEXCOM2_IO4                      _UINT32_(1)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO4 */
#define PIO_PE6B_FLEXCOM2_IO4                      (_UINT32_(1) << 6) /**< FLEXCOM2 signal: FLEXCOM2_IO4 */
#define PIN_PB11D_FLEXCOM2_IO5                     _UINT32_(43) /**< FLEXCOM2 signal: FLEXCOM2_IO5 on PB11 mux D */
#define MUX_PB11D_FLEXCOM2_IO5                     _UINT32_(3)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO5 */
#define PIO_PB11D_FLEXCOM2_IO5                     (_UINT32_(1) << 11) /**< FLEXCOM2 signal: FLEXCOM2_IO5 */
#define PIN_PE7B_FLEXCOM2_IO5                      _UINT32_(135) /**< FLEXCOM2 signal: FLEXCOM2_IO5 on PE7 mux B */
#define MUX_PE7B_FLEXCOM2_IO5                      _UINT32_(1)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO5 */
#define PIO_PE7B_FLEXCOM2_IO5                      (_UINT32_(1) << 7) /**< FLEXCOM2 signal: FLEXCOM2_IO5 */
#define PIN_PE10B_FLEXCOM2_IO6                     _UINT32_(138) /**< FLEXCOM2 signal: FLEXCOM2_IO6 on PE10 mux B */
#define MUX_PE10B_FLEXCOM2_IO6                     _UINT32_(1)  /**< FLEXCOM2 signal line function value: FLEXCOM2_IO6 */
#define PIO_PE10B_FLEXCOM2_IO6                     (_UINT32_(1) << 10) /**< FLEXCOM2 signal: FLEXCOM2_IO6 */
/* ========== PIO definition for FLEXCOM3 peripheral ========== */
#define PIN_PA0B_FLEXCOM3_IO0                      _UINT32_(0)  /**< FLEXCOM3 signal: FLEXCOM3_IO0 on PA0 mux B */
#define MUX_PA0B_FLEXCOM3_IO0                      _UINT32_(1)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO0 */
#define PIO_PA0B_FLEXCOM3_IO0                      (_UINT32_(1) << 0) /**< FLEXCOM3 signal: FLEXCOM3_IO0 */
#define PIN_PA14C_FLEXCOM3_IO0                     _UINT32_(14) /**< FLEXCOM3 signal: FLEXCOM3_IO0 on PA14 mux C */
#define MUX_PA14C_FLEXCOM3_IO0                     _UINT32_(2)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO0 */
#define PIO_PA14C_FLEXCOM3_IO0                     (_UINT32_(1) << 14) /**< FLEXCOM3 signal: FLEXCOM3_IO0 */
#define PIN_PA24B_FLEXCOM3_IO0                     _UINT32_(24) /**< FLEXCOM3 signal: FLEXCOM3_IO0 on PA24 mux B */
#define MUX_PA24B_FLEXCOM3_IO0                     _UINT32_(1)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO0 */
#define PIO_PA24B_FLEXCOM3_IO0                     (_UINT32_(1) << 24) /**< FLEXCOM3 signal: FLEXCOM3_IO0 */
#define PIN_PD1D_FLEXCOM3_IO0                      _UINT32_(97) /**< FLEXCOM3 signal: FLEXCOM3_IO0 on PD1 mux D */
#define MUX_PD1D_FLEXCOM3_IO0                      _UINT32_(3)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO0 */
#define PIO_PD1D_FLEXCOM3_IO0                      (_UINT32_(1) << 1) /**< FLEXCOM3 signal: FLEXCOM3_IO0 */
#define PIN_PA1B_FLEXCOM3_IO1                      _UINT32_(1)  /**< FLEXCOM3 signal: FLEXCOM3_IO1 on PA1 mux B */
#define MUX_PA1B_FLEXCOM3_IO1                      _UINT32_(1)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO1 */
#define PIO_PA1B_FLEXCOM3_IO1                      (_UINT32_(1) << 1) /**< FLEXCOM3 signal: FLEXCOM3_IO1 */
#define PIN_PA15C_FLEXCOM3_IO1                     _UINT32_(15) /**< FLEXCOM3 signal: FLEXCOM3_IO1 on PA15 mux C */
#define MUX_PA15C_FLEXCOM3_IO1                     _UINT32_(2)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO1 */
#define PIO_PA15C_FLEXCOM3_IO1                     (_UINT32_(1) << 15) /**< FLEXCOM3 signal: FLEXCOM3_IO1 */
#define PIN_PA23B_FLEXCOM3_IO1                     _UINT32_(23) /**< FLEXCOM3 signal: FLEXCOM3_IO1 on PA23 mux B */
#define MUX_PA23B_FLEXCOM3_IO1                     _UINT32_(1)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO1 */
#define PIO_PA23B_FLEXCOM3_IO1                     (_UINT32_(1) << 23) /**< FLEXCOM3 signal: FLEXCOM3_IO1 */
#define PIN_PD2D_FLEXCOM3_IO1                      _UINT32_(98) /**< FLEXCOM3 signal: FLEXCOM3_IO1 on PD2 mux D */
#define MUX_PD2D_FLEXCOM3_IO1                      _UINT32_(3)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO1 */
#define PIO_PD2D_FLEXCOM3_IO1                      (_UINT32_(1) << 2) /**< FLEXCOM3 signal: FLEXCOM3_IO1 */
#define PIN_PA2B_FLEXCOM3_IO2                      _UINT32_(2)  /**< FLEXCOM3 signal: FLEXCOM3_IO2 on PA2 mux B */
#define MUX_PA2B_FLEXCOM3_IO2                      _UINT32_(1)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO2 */
#define PIO_PA2B_FLEXCOM3_IO2                      (_UINT32_(1) << 2) /**< FLEXCOM3 signal: FLEXCOM3_IO2 */
#define PIN_PA22B_FLEXCOM3_IO2                     _UINT32_(22) /**< FLEXCOM3 signal: FLEXCOM3_IO2 on PA22 mux B */
#define MUX_PA22B_FLEXCOM3_IO2                     _UINT32_(1)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO2 */
#define PIO_PA22B_FLEXCOM3_IO2                     (_UINT32_(1) << 22) /**< FLEXCOM3 signal: FLEXCOM3_IO2 */
#define PIN_PD3D_FLEXCOM3_IO2                      _UINT32_(99) /**< FLEXCOM3 signal: FLEXCOM3_IO2 on PD3 mux D */
#define MUX_PD3D_FLEXCOM3_IO2                      _UINT32_(3)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO2 */
#define PIO_PD3D_FLEXCOM3_IO2                      (_UINT32_(1) << 3) /**< FLEXCOM3 signal: FLEXCOM3_IO2 */
#define PIN_PA3B_FLEXCOM3_IO3                      _UINT32_(3)  /**< FLEXCOM3 signal: FLEXCOM3_IO3 on PA3 mux B */
#define MUX_PA3B_FLEXCOM3_IO3                      _UINT32_(1)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO3 */
#define PIO_PA3B_FLEXCOM3_IO3                      (_UINT32_(1) << 3) /**< FLEXCOM3 signal: FLEXCOM3_IO3 */
#define PIN_PA21B_FLEXCOM3_IO3                     _UINT32_(21) /**< FLEXCOM3 signal: FLEXCOM3_IO3 on PA21 mux B */
#define MUX_PA21B_FLEXCOM3_IO3                     _UINT32_(1)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO3 */
#define PIO_PA21B_FLEXCOM3_IO3                     (_UINT32_(1) << 21) /**< FLEXCOM3 signal: FLEXCOM3_IO3 */
#define PIN_PD12E_FLEXCOM3_IO3                     _UINT32_(108) /**< FLEXCOM3 signal: FLEXCOM3_IO3 on PD12 mux E */
#define MUX_PD12E_FLEXCOM3_IO3                     _UINT32_(4)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO3 */
#define PIO_PD12E_FLEXCOM3_IO3                     (_UINT32_(1) << 12) /**< FLEXCOM3 signal: FLEXCOM3_IO3 */
#define PIN_PA4B_FLEXCOM3_IO4                      _UINT32_(4)  /**< FLEXCOM3 signal: FLEXCOM3_IO4 on PA4 mux B */
#define MUX_PA4B_FLEXCOM3_IO4                      _UINT32_(1)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO4 */
#define PIO_PA4B_FLEXCOM3_IO4                      (_UINT32_(1) << 4) /**< FLEXCOM3 signal: FLEXCOM3_IO4 */
#define PIN_PA20B_FLEXCOM3_IO4                     _UINT32_(20) /**< FLEXCOM3 signal: FLEXCOM3_IO4 on PA20 mux B */
#define MUX_PA20B_FLEXCOM3_IO4                     _UINT32_(1)  /**< FLEXCOM3 signal line function value: FLEXCOM3_IO4 */
#define PIO_PA20B_FLEXCOM3_IO4                     (_UINT32_(1) << 20) /**< FLEXCOM3 signal: FLEXCOM3_IO4 */
/* ========== PIO definition for FLEXCOM4 peripheral ========== */
#define PIN_PA18A_FLEXCOM4_IO0                     _UINT32_(18) /**< FLEXCOM4 signal: FLEXCOM4_IO0 on PA18 mux A */
#define MUX_PA18A_FLEXCOM4_IO0                     _UINT32_(0)  /**< FLEXCOM4 signal line function value: FLEXCOM4_IO0 */
#define PIO_PA18A_FLEXCOM4_IO0                     (_UINT32_(1) << 18) /**< FLEXCOM4 signal: FLEXCOM4_IO0 */
#define PIN_PA17A_FLEXCOM4_IO1                     _UINT32_(17) /**< FLEXCOM4 signal: FLEXCOM4_IO1 on PA17 mux A */
#define MUX_PA17A_FLEXCOM4_IO1                     _UINT32_(0)  /**< FLEXCOM4 signal line function value: FLEXCOM4_IO1 */
#define PIO_PA17A_FLEXCOM4_IO1                     (_UINT32_(1) << 17) /**< FLEXCOM4 signal: FLEXCOM4_IO1 */
#define PIN_PA16A_FLEXCOM4_IO2                     _UINT32_(16) /**< FLEXCOM4 signal: FLEXCOM4_IO2 on PA16 mux A */
#define MUX_PA16A_FLEXCOM4_IO2                     _UINT32_(0)  /**< FLEXCOM4 signal line function value: FLEXCOM4_IO2 */
#define PIO_PA16A_FLEXCOM4_IO2                     (_UINT32_(1) << 16) /**< FLEXCOM4 signal: FLEXCOM4_IO2 */
#define PIN_PA15A_FLEXCOM4_IO3                     _UINT32_(15) /**< FLEXCOM4 signal: FLEXCOM4_IO3 on PA15 mux A */
#define MUX_PA15A_FLEXCOM4_IO3                     _UINT32_(0)  /**< FLEXCOM4 signal line function value: FLEXCOM4_IO3 */
#define PIO_PA15A_FLEXCOM4_IO3                     (_UINT32_(1) << 15) /**< FLEXCOM4 signal: FLEXCOM4_IO3 */
#define PIN_PA14A_FLEXCOM4_IO4                     _UINT32_(14) /**< FLEXCOM4 signal: FLEXCOM4_IO4 on PA14 mux A */
#define MUX_PA14A_FLEXCOM4_IO4                     _UINT32_(0)  /**< FLEXCOM4 signal line function value: FLEXCOM4_IO4 */
#define PIO_PA14A_FLEXCOM4_IO4                     (_UINT32_(1) << 14) /**< FLEXCOM4 signal: FLEXCOM4_IO4 */
#define PIN_PA19C_FLEXCOM4_IO5                     _UINT32_(19) /**< FLEXCOM4 signal: FLEXCOM4_IO5 on PA19 mux C */
#define MUX_PA19C_FLEXCOM4_IO5                     _UINT32_(2)  /**< FLEXCOM4 signal line function value: FLEXCOM4_IO5 */
#define PIO_PA19C_FLEXCOM4_IO5                     (_UINT32_(1) << 19) /**< FLEXCOM4 signal: FLEXCOM4_IO5 */
#define PIN_PA20C_FLEXCOM4_IO6                     _UINT32_(20) /**< FLEXCOM4 signal: FLEXCOM4_IO6 on PA20 mux C */
#define MUX_PA20C_FLEXCOM4_IO6                     _UINT32_(2)  /**< FLEXCOM4 signal line function value: FLEXCOM4_IO6 */
#define PIO_PA20C_FLEXCOM4_IO6                     (_UINT32_(1) << 20) /**< FLEXCOM4 signal: FLEXCOM4_IO6 */
/* ========== PIO definition for FLEXCOM5 peripheral ========== */
#define PIN_PD16B_FLEXCOM5_IO0                     _UINT32_(112) /**< FLEXCOM5 signal: FLEXCOM5_IO0 on PD16 mux B */
#define MUX_PD16B_FLEXCOM5_IO0                     _UINT32_(1)  /**< FLEXCOM5 signal line function value: FLEXCOM5_IO0 */
#define PIO_PD16B_FLEXCOM5_IO0                     (_UINT32_(1) << 16) /**< FLEXCOM5 signal: FLEXCOM5_IO0 */
#define PIN_PE3B_FLEXCOM5_IO0                      _UINT32_(131) /**< FLEXCOM5 signal: FLEXCOM5_IO0 on PE3 mux B */
#define MUX_PE3B_FLEXCOM5_IO0                      _UINT32_(1)  /**< FLEXCOM5 signal line function value: FLEXCOM5_IO0 */
#define PIO_PE3B_FLEXCOM5_IO0                      (_UINT32_(1) << 3) /**< FLEXCOM5 signal: FLEXCOM5_IO0 */
#define PIN_PD17B_FLEXCOM5_IO1                     _UINT32_(113) /**< FLEXCOM5 signal: FLEXCOM5_IO1 on PD17 mux B */
#define MUX_PD17B_FLEXCOM5_IO1                     _UINT32_(1)  /**< FLEXCOM5 signal line function value: FLEXCOM5_IO1 */
#define PIO_PD17B_FLEXCOM5_IO1                     (_UINT32_(1) << 17) /**< FLEXCOM5 signal: FLEXCOM5_IO1 */
#define PIN_PE2B_FLEXCOM5_IO1                      _UINT32_(130) /**< FLEXCOM5 signal: FLEXCOM5_IO1 on PE2 mux B */
#define MUX_PE2B_FLEXCOM5_IO1                      _UINT32_(1)  /**< FLEXCOM5 signal line function value: FLEXCOM5_IO1 */
#define PIO_PE2B_FLEXCOM5_IO1                      (_UINT32_(1) << 2) /**< FLEXCOM5 signal: FLEXCOM5_IO1 */
#define PIN_PD14B_FLEXCOM5_IO2                     _UINT32_(110) /**< FLEXCOM5 signal: FLEXCOM5_IO2 on PD14 mux B */
#define MUX_PD14B_FLEXCOM5_IO2                     _UINT32_(1)  /**< FLEXCOM5 signal line function value: FLEXCOM5_IO2 */
#define PIO_PD14B_FLEXCOM5_IO2                     (_UINT32_(1) << 14) /**< FLEXCOM5 signal: FLEXCOM5_IO2 */
#define PIN_PE0B_FLEXCOM5_IO2                      _UINT32_(128) /**< FLEXCOM5 signal: FLEXCOM5_IO2 on PE0 mux B */
#define MUX_PE0B_FLEXCOM5_IO2                      _UINT32_(1)  /**< FLEXCOM5 signal line function value: FLEXCOM5_IO2 */
#define PIO_PE0B_FLEXCOM5_IO2                      (_UINT32_(1) << 0) /**< FLEXCOM5 signal: FLEXCOM5_IO2 */
#define PIN_PD15B_FLEXCOM5_IO3                     _UINT32_(111) /**< FLEXCOM5 signal: FLEXCOM5_IO3 on PD15 mux B */
#define MUX_PD15B_FLEXCOM5_IO3                     _UINT32_(1)  /**< FLEXCOM5 signal line function value: FLEXCOM5_IO3 */
#define PIO_PD15B_FLEXCOM5_IO3                     (_UINT32_(1) << 15) /**< FLEXCOM5 signal: FLEXCOM5_IO3 */
#define PIN_PE1B_FLEXCOM5_IO3                      _UINT32_(129) /**< FLEXCOM5 signal: FLEXCOM5_IO3 on PE1 mux B */
#define MUX_PE1B_FLEXCOM5_IO3                      _UINT32_(1)  /**< FLEXCOM5 signal line function value: FLEXCOM5_IO3 */
#define PIO_PE1B_FLEXCOM5_IO3                      (_UINT32_(1) << 1) /**< FLEXCOM5 signal: FLEXCOM5_IO3 */
#define PIN_PD13B_FLEXCOM5_IO4                     _UINT32_(109) /**< FLEXCOM5 signal: FLEXCOM5_IO4 on PD13 mux B */
#define MUX_PD13B_FLEXCOM5_IO4                     _UINT32_(1)  /**< FLEXCOM5 signal line function value: FLEXCOM5_IO4 */
#define PIO_PD13B_FLEXCOM5_IO4                     (_UINT32_(1) << 13) /**< FLEXCOM5 signal: FLEXCOM5_IO4 */
#define PIN_PD31B_FLEXCOM5_IO4                     _UINT32_(127) /**< FLEXCOM5 signal: FLEXCOM5_IO4 on PD31 mux B */
#define MUX_PD31B_FLEXCOM5_IO4                     _UINT32_(1)  /**< FLEXCOM5 signal line function value: FLEXCOM5_IO4 */
#define PIO_PD31B_FLEXCOM5_IO4                     (_UINT32_(1) << 31) /**< FLEXCOM5 signal: FLEXCOM5_IO4 */
/* ========== PIO definition for FLEXCOM6 peripheral ========== */
#define PIN_PA28B_FLEXCOM6_IO0                     _UINT32_(28) /**< FLEXCOM6 signal: FLEXCOM6_IO0 on PA28 mux B */
#define MUX_PA28B_FLEXCOM6_IO0                     _UINT32_(1)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO0 */
#define PIO_PA28B_FLEXCOM6_IO0                     (_UINT32_(1) << 28) /**< FLEXCOM6 signal: FLEXCOM6_IO0 */
#define PIN_PB24B_FLEXCOM6_IO0                     _UINT32_(56) /**< FLEXCOM6 signal: FLEXCOM6_IO0 on PB24 mux B */
#define MUX_PB24B_FLEXCOM6_IO0                     _UINT32_(1)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO0 */
#define PIO_PB24B_FLEXCOM6_IO0                     (_UINT32_(1) << 24) /**< FLEXCOM6 signal: FLEXCOM6_IO0 */
#define PIN_PD18B_FLEXCOM6_IO0                     _UINT32_(114) /**< FLEXCOM6 signal: FLEXCOM6_IO0 on PD18 mux B */
#define MUX_PD18B_FLEXCOM6_IO0                     _UINT32_(1)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO0 */
#define PIO_PD18B_FLEXCOM6_IO0                     (_UINT32_(1) << 18) /**< FLEXCOM6 signal: FLEXCOM6_IO0 */
#define PIN_PD24B_FLEXCOM6_IO0                     _UINT32_(120) /**< FLEXCOM6 signal: FLEXCOM6_IO0 on PD24 mux B */
#define MUX_PD24B_FLEXCOM6_IO0                     _UINT32_(1)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO0 */
#define PIO_PD24B_FLEXCOM6_IO0                     (_UINT32_(1) << 24) /**< FLEXCOM6 signal: FLEXCOM6_IO0 */
#define PIN_PA29B_FLEXCOM6_IO1                     _UINT32_(29) /**< FLEXCOM6 signal: FLEXCOM6_IO1 on PA29 mux B */
#define MUX_PA29B_FLEXCOM6_IO1                     _UINT32_(1)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO1 */
#define PIO_PA29B_FLEXCOM6_IO1                     (_UINT32_(1) << 29) /**< FLEXCOM6 signal: FLEXCOM6_IO1 */
#define PIN_PB25B_FLEXCOM6_IO1                     _UINT32_(57) /**< FLEXCOM6 signal: FLEXCOM6_IO1 on PB25 mux B */
#define MUX_PB25B_FLEXCOM6_IO1                     _UINT32_(1)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO1 */
#define PIO_PB25B_FLEXCOM6_IO1                     (_UINT32_(1) << 25) /**< FLEXCOM6 signal: FLEXCOM6_IO1 */
#define PIN_PD19B_FLEXCOM6_IO1                     _UINT32_(115) /**< FLEXCOM6 signal: FLEXCOM6_IO1 on PD19 mux B */
#define MUX_PD19B_FLEXCOM6_IO1                     _UINT32_(1)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO1 */
#define PIO_PD19B_FLEXCOM6_IO1                     (_UINT32_(1) << 19) /**< FLEXCOM6 signal: FLEXCOM6_IO1 */
#define PIN_PD25B_FLEXCOM6_IO1                     _UINT32_(121) /**< FLEXCOM6 signal: FLEXCOM6_IO1 on PD25 mux B */
#define MUX_PD25B_FLEXCOM6_IO1                     _UINT32_(1)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO1 */
#define PIO_PD25B_FLEXCOM6_IO1                     (_UINT32_(1) << 25) /**< FLEXCOM6 signal: FLEXCOM6_IO1 */
#define PIN_PA25B_FLEXCOM6_IO2                     _UINT32_(25) /**< FLEXCOM6 signal: FLEXCOM6_IO2 on PA25 mux B */
#define MUX_PA25B_FLEXCOM6_IO2                     _UINT32_(1)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO2 */
#define PIO_PA25B_FLEXCOM6_IO2                     (_UINT32_(1) << 25) /**< FLEXCOM6 signal: FLEXCOM6_IO2 */
#define PIN_PB23B_FLEXCOM6_IO2                     _UINT32_(55) /**< FLEXCOM6 signal: FLEXCOM6_IO2 on PB23 mux B */
#define MUX_PB23B_FLEXCOM6_IO2                     _UINT32_(1)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO2 */
#define PIO_PB23B_FLEXCOM6_IO2                     (_UINT32_(1) << 23) /**< FLEXCOM6 signal: FLEXCOM6_IO2 */
#define PIN_PD20B_FLEXCOM6_IO2                     _UINT32_(116) /**< FLEXCOM6 signal: FLEXCOM6_IO2 on PD20 mux B */
#define MUX_PD20B_FLEXCOM6_IO2                     _UINT32_(1)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO2 */
#define PIO_PD20B_FLEXCOM6_IO2                     (_UINT32_(1) << 20) /**< FLEXCOM6 signal: FLEXCOM6_IO2 */
#define PIN_PD21B_FLEXCOM6_IO2                     _UINT32_(117) /**< FLEXCOM6 signal: FLEXCOM6_IO2 on PD21 mux B */
#define MUX_PD21B_FLEXCOM6_IO2                     _UINT32_(1)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO2 */
#define PIO_PD21B_FLEXCOM6_IO2                     (_UINT32_(1) << 21) /**< FLEXCOM6 signal: FLEXCOM6_IO2 */
#define PIN_PA26B_FLEXCOM6_IO3                     _UINT32_(26) /**< FLEXCOM6 signal: FLEXCOM6_IO3 on PA26 mux B */
#define MUX_PA26B_FLEXCOM6_IO3                     _UINT32_(1)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO3 */
#define PIO_PA26B_FLEXCOM6_IO3                     (_UINT32_(1) << 26) /**< FLEXCOM6 signal: FLEXCOM6_IO3 */
#define PIN_PB22B_FLEXCOM6_IO3                     _UINT32_(54) /**< FLEXCOM6 signal: FLEXCOM6_IO3 on PB22 mux B */
#define MUX_PB22B_FLEXCOM6_IO3                     _UINT32_(1)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO3 */
#define PIO_PB22B_FLEXCOM6_IO3                     (_UINT32_(1) << 22) /**< FLEXCOM6 signal: FLEXCOM6_IO3 */
#define PIN_PD22B_FLEXCOM6_IO3                     _UINT32_(118) /**< FLEXCOM6 signal: FLEXCOM6_IO3 on PD22 mux B */
#define MUX_PD22B_FLEXCOM6_IO3                     _UINT32_(1)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO3 */
#define PIO_PD22B_FLEXCOM6_IO3                     (_UINT32_(1) << 22) /**< FLEXCOM6 signal: FLEXCOM6_IO3 */
#define PIN_PA27B_FLEXCOM6_IO4                     _UINT32_(27) /**< FLEXCOM6 signal: FLEXCOM6_IO4 on PA27 mux B */
#define MUX_PA27B_FLEXCOM6_IO4                     _UINT32_(1)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO4 */
#define PIO_PA27B_FLEXCOM6_IO4                     (_UINT32_(1) << 27) /**< FLEXCOM6 signal: FLEXCOM6_IO4 */
#define PIN_PB21B_FLEXCOM6_IO4                     _UINT32_(53) /**< FLEXCOM6 signal: FLEXCOM6_IO4 on PB21 mux B */
#define MUX_PB21B_FLEXCOM6_IO4                     _UINT32_(1)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO4 */
#define PIO_PB21B_FLEXCOM6_IO4                     (_UINT32_(1) << 21) /**< FLEXCOM6 signal: FLEXCOM6_IO4 */
#define PIN_PD23B_FLEXCOM6_IO4                     _UINT32_(119) /**< FLEXCOM6 signal: FLEXCOM6_IO4 on PD23 mux B */
#define MUX_PD23B_FLEXCOM6_IO4                     _UINT32_(1)  /**< FLEXCOM6 signal line function value: FLEXCOM6_IO4 */
#define PIO_PD23B_FLEXCOM6_IO4                     (_UINT32_(1) << 23) /**< FLEXCOM6 signal: FLEXCOM6_IO4 */
/* ========== PIO definition for FLEXCOM7 peripheral ========== */
#define PIN_PD5D_FLEXCOM7_IO0                      _UINT32_(101) /**< FLEXCOM7 signal: FLEXCOM7_IO0 on PD5 mux D */
#define MUX_PD5D_FLEXCOM7_IO0                      _UINT32_(3)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO0 */
#define PIO_PD5D_FLEXCOM7_IO0                      (_UINT32_(1) << 5) /**< FLEXCOM7 signal: FLEXCOM7_IO0 */
#define PIN_PD8B_FLEXCOM7_IO0                      _UINT32_(104) /**< FLEXCOM7 signal: FLEXCOM7_IO0 on PD8 mux B */
#define MUX_PD8B_FLEXCOM7_IO0                      _UINT32_(1)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO0 */
#define PIO_PD8B_FLEXCOM7_IO0                      (_UINT32_(1) << 8) /**< FLEXCOM7 signal: FLEXCOM7_IO0 */
#define PIN_PD27B_FLEXCOM7_IO0                     _UINT32_(123) /**< FLEXCOM7 signal: FLEXCOM7_IO0 on PD27 mux B */
#define MUX_PD27B_FLEXCOM7_IO0                     _UINT32_(1)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO0 */
#define PIO_PD27B_FLEXCOM7_IO0                     (_UINT32_(1) << 27) /**< FLEXCOM7 signal: FLEXCOM7_IO0 */
#define PIN_PD4D_FLEXCOM7_IO1                      _UINT32_(100) /**< FLEXCOM7 signal: FLEXCOM7_IO1 on PD4 mux D */
#define MUX_PD4D_FLEXCOM7_IO1                      _UINT32_(3)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO1 */
#define PIO_PD4D_FLEXCOM7_IO1                      (_UINT32_(1) << 4) /**< FLEXCOM7 signal: FLEXCOM7_IO1 */
#define PIN_PD9B_FLEXCOM7_IO1                      _UINT32_(105) /**< FLEXCOM7 signal: FLEXCOM7_IO1 on PD9 mux B */
#define MUX_PD9B_FLEXCOM7_IO1                      _UINT32_(1)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO1 */
#define PIO_PD9B_FLEXCOM7_IO1                      (_UINT32_(1) << 9) /**< FLEXCOM7 signal: FLEXCOM7_IO1 */
#define PIN_PD28B_FLEXCOM7_IO1                     _UINT32_(124) /**< FLEXCOM7 signal: FLEXCOM7_IO1 on PD28 mux B */
#define MUX_PD28B_FLEXCOM7_IO1                     _UINT32_(1)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO1 */
#define PIO_PD28B_FLEXCOM7_IO1                     (_UINT32_(1) << 28) /**< FLEXCOM7 signal: FLEXCOM7_IO1 */
#define PIN_PD6D_FLEXCOM7_IO2                      _UINT32_(102) /**< FLEXCOM7 signal: FLEXCOM7_IO2 on PD6 mux D */
#define MUX_PD6D_FLEXCOM7_IO2                      _UINT32_(3)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO2 */
#define PIO_PD6D_FLEXCOM7_IO2                      (_UINT32_(1) << 6) /**< FLEXCOM7 signal: FLEXCOM7_IO2 */
#define PIN_PD10B_FLEXCOM7_IO2                     _UINT32_(106) /**< FLEXCOM7 signal: FLEXCOM7_IO2 on PD10 mux B */
#define MUX_PD10B_FLEXCOM7_IO2                     _UINT32_(1)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO2 */
#define PIO_PD10B_FLEXCOM7_IO2                     (_UINT32_(1) << 10) /**< FLEXCOM7 signal: FLEXCOM7_IO2 */
#define PIN_PD29B_FLEXCOM7_IO2                     _UINT32_(125) /**< FLEXCOM7 signal: FLEXCOM7_IO2 on PD29 mux B */
#define MUX_PD29B_FLEXCOM7_IO2                     _UINT32_(1)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO2 */
#define PIO_PD29B_FLEXCOM7_IO2                     (_UINT32_(1) << 29) /**< FLEXCOM7 signal: FLEXCOM7_IO2 */
#define PIN_PD7D_FLEXCOM7_IO3                      _UINT32_(103) /**< FLEXCOM7 signal: FLEXCOM7_IO3 on PD7 mux D */
#define MUX_PD7D_FLEXCOM7_IO3                      _UINT32_(3)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO3 */
#define PIO_PD7D_FLEXCOM7_IO3                      (_UINT32_(1) << 7) /**< FLEXCOM7 signal: FLEXCOM7_IO3 */
#define PIN_PD11B_FLEXCOM7_IO3                     _UINT32_(107) /**< FLEXCOM7 signal: FLEXCOM7_IO3 on PD11 mux B */
#define MUX_PD11B_FLEXCOM7_IO3                     _UINT32_(1)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO3 */
#define PIO_PD11B_FLEXCOM7_IO3                     (_UINT32_(1) << 11) /**< FLEXCOM7 signal: FLEXCOM7_IO3 */
#define PIN_PD30B_FLEXCOM7_IO3                     _UINT32_(126) /**< FLEXCOM7 signal: FLEXCOM7_IO3 on PD30 mux B */
#define MUX_PD30B_FLEXCOM7_IO3                     _UINT32_(1)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO3 */
#define PIO_PD30B_FLEXCOM7_IO3                     (_UINT32_(1) << 30) /**< FLEXCOM7 signal: FLEXCOM7_IO3 */
#define PIN_PD12B_FLEXCOM7_IO4                     _UINT32_(108) /**< FLEXCOM7 signal: FLEXCOM7_IO4 on PD12 mux B */
#define MUX_PD12B_FLEXCOM7_IO4                     _UINT32_(1)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO4 */
#define PIO_PD12B_FLEXCOM7_IO4                     (_UINT32_(1) << 12) /**< FLEXCOM7 signal: FLEXCOM7_IO4 */
#define PIN_PD26B_FLEXCOM7_IO4                     _UINT32_(122) /**< FLEXCOM7 signal: FLEXCOM7_IO4 on PD26 mux B */
#define MUX_PD26B_FLEXCOM7_IO4                     _UINT32_(1)  /**< FLEXCOM7 signal line function value: FLEXCOM7_IO4 */
#define PIO_PD26B_FLEXCOM7_IO4                     (_UINT32_(1) << 26) /**< FLEXCOM7 signal: FLEXCOM7_IO4 */
/* ========== PIO definition for FLEXCOM8 peripheral ========== */
#define PIN_PA30B_FLEXCOM8_IO0                     _UINT32_(30) /**< FLEXCOM8 signal: FLEXCOM8_IO0 on PA30 mux B */
#define MUX_PA30B_FLEXCOM8_IO0                     _UINT32_(1)  /**< FLEXCOM8 signal line function value: FLEXCOM8_IO0 */
#define PIO_PA30B_FLEXCOM8_IO0                     (_UINT32_(1) << 30) /**< FLEXCOM8 signal: FLEXCOM8_IO0 */
#define PIN_PB26B_FLEXCOM8_IO0                     _UINT32_(58) /**< FLEXCOM8 signal: FLEXCOM8_IO0 on PB26 mux B */
#define MUX_PB26B_FLEXCOM8_IO0                     _UINT32_(1)  /**< FLEXCOM8 signal line function value: FLEXCOM8_IO0 */
#define PIO_PB26B_FLEXCOM8_IO0                     (_UINT32_(1) << 26) /**< FLEXCOM8 signal: FLEXCOM8_IO0 */
#define PIN_PC27B_FLEXCOM8_IO0                     _UINT32_(91) /**< FLEXCOM8 signal: FLEXCOM8_IO0 on PC27 mux B */
#define MUX_PC27B_FLEXCOM8_IO0                     _UINT32_(1)  /**< FLEXCOM8 signal line function value: FLEXCOM8_IO0 */
#define PIO_PC27B_FLEXCOM8_IO0                     (_UINT32_(1) << 27) /**< FLEXCOM8 signal: FLEXCOM8_IO0 */
#define PIN_PA31B_FLEXCOM8_IO1                     _UINT32_(31) /**< FLEXCOM8 signal: FLEXCOM8_IO1 on PA31 mux B */
#define MUX_PA31B_FLEXCOM8_IO1                     _UINT32_(1)  /**< FLEXCOM8 signal line function value: FLEXCOM8_IO1 */
#define PIO_PA31B_FLEXCOM8_IO1                     (_UINT32_(1) << 31) /**< FLEXCOM8 signal: FLEXCOM8_IO1 */
#define PIN_PB27B_FLEXCOM8_IO1                     _UINT32_(59) /**< FLEXCOM8 signal: FLEXCOM8_IO1 on PB27 mux B */
#define MUX_PB27B_FLEXCOM8_IO1                     _UINT32_(1)  /**< FLEXCOM8 signal line function value: FLEXCOM8_IO1 */
#define PIO_PB27B_FLEXCOM8_IO1                     (_UINT32_(1) << 27) /**< FLEXCOM8 signal: FLEXCOM8_IO1 */
#define PIN_PC28B_FLEXCOM8_IO1                     _UINT32_(92) /**< FLEXCOM8 signal: FLEXCOM8_IO1 on PC28 mux B */
#define MUX_PC28B_FLEXCOM8_IO1                     _UINT32_(1)  /**< FLEXCOM8 signal line function value: FLEXCOM8_IO1 */
#define PIO_PC28B_FLEXCOM8_IO1                     (_UINT32_(1) << 28) /**< FLEXCOM8 signal: FLEXCOM8_IO1 */
#define PIN_PB1B_FLEXCOM8_IO2                      _UINT32_(33) /**< FLEXCOM8 signal: FLEXCOM8_IO2 on PB1 mux B */
#define MUX_PB1B_FLEXCOM8_IO2                      _UINT32_(1)  /**< FLEXCOM8 signal line function value: FLEXCOM8_IO2 */
#define PIO_PB1B_FLEXCOM8_IO2                      (_UINT32_(1) << 1) /**< FLEXCOM8 signal: FLEXCOM8_IO2 */
#define PIN_PC29B_FLEXCOM8_IO2                     _UINT32_(93) /**< FLEXCOM8 signal: FLEXCOM8_IO2 on PC29 mux B */
#define MUX_PC29B_FLEXCOM8_IO2                     _UINT32_(1)  /**< FLEXCOM8 signal line function value: FLEXCOM8_IO2 */
#define PIO_PC29B_FLEXCOM8_IO2                     (_UINT32_(1) << 29) /**< FLEXCOM8 signal: FLEXCOM8_IO2 */
#define PIN_PB0B_FLEXCOM8_IO3                      _UINT32_(32) /**< FLEXCOM8 signal: FLEXCOM8_IO3 on PB0 mux B */
#define MUX_PB0B_FLEXCOM8_IO3                      _UINT32_(1)  /**< FLEXCOM8 signal line function value: FLEXCOM8_IO3 */
#define PIO_PB0B_FLEXCOM8_IO3                      (_UINT32_(1) << 0) /**< FLEXCOM8 signal: FLEXCOM8_IO3 */
#define PIN_PC30B_FLEXCOM8_IO3                     _UINT32_(94) /**< FLEXCOM8 signal: FLEXCOM8_IO3 on PC30 mux B */
#define MUX_PC30B_FLEXCOM8_IO3                     _UINT32_(1)  /**< FLEXCOM8 signal line function value: FLEXCOM8_IO3 */
#define PIO_PC30B_FLEXCOM8_IO3                     (_UINT32_(1) << 30) /**< FLEXCOM8 signal: FLEXCOM8_IO3 */
#define PIN_PB2B_FLEXCOM8_IO4                      _UINT32_(34) /**< FLEXCOM8 signal: FLEXCOM8_IO4 on PB2 mux B */
#define MUX_PB2B_FLEXCOM8_IO4                      _UINT32_(1)  /**< FLEXCOM8 signal line function value: FLEXCOM8_IO4 */
#define PIO_PB2B_FLEXCOM8_IO4                      (_UINT32_(1) << 2) /**< FLEXCOM8 signal: FLEXCOM8_IO4 */
#define PIN_PC31B_FLEXCOM8_IO4                     _UINT32_(95) /**< FLEXCOM8 signal: FLEXCOM8_IO4 on PC31 mux B */
#define MUX_PC31B_FLEXCOM8_IO4                     _UINT32_(1)  /**< FLEXCOM8 signal line function value: FLEXCOM8_IO4 */
#define PIO_PC31B_FLEXCOM8_IO4                     (_UINT32_(1) << 31) /**< FLEXCOM8 signal: FLEXCOM8_IO4 */
/* ========== PIO definition for FLEXCOM9 peripheral ========== */
#define PIN_PC3C_FLEXCOM9_IO0                      _UINT32_(67) /**< FLEXCOM9 signal: FLEXCOM9_IO0 on PC3 mux C */
#define MUX_PC3C_FLEXCOM9_IO0                      _UINT32_(2)  /**< FLEXCOM9 signal line function value: FLEXCOM9_IO0 */
#define PIO_PC3C_FLEXCOM9_IO0                      (_UINT32_(1) << 3) /**< FLEXCOM9 signal: FLEXCOM9_IO0 */
#define PIN_PC8D_FLEXCOM9_IO0                      _UINT32_(72) /**< FLEXCOM9 signal: FLEXCOM9_IO0 on PC8 mux D */
#define MUX_PC8D_FLEXCOM9_IO0                      _UINT32_(3)  /**< FLEXCOM9 signal line function value: FLEXCOM9_IO0 */
#define PIO_PC8D_FLEXCOM9_IO0                      (_UINT32_(1) << 8) /**< FLEXCOM9 signal: FLEXCOM9_IO0 */
#define PIN_PC4C_FLEXCOM9_IO1                      _UINT32_(68) /**< FLEXCOM9 signal: FLEXCOM9_IO1 on PC4 mux C */
#define MUX_PC4C_FLEXCOM9_IO1                      _UINT32_(2)  /**< FLEXCOM9 signal line function value: FLEXCOM9_IO1 */
#define PIO_PC4C_FLEXCOM9_IO1                      (_UINT32_(1) << 4) /**< FLEXCOM9 signal: FLEXCOM9_IO1 */
#define PIN_PC9D_FLEXCOM9_IO1                      _UINT32_(73) /**< FLEXCOM9 signal: FLEXCOM9_IO1 on PC9 mux D */
#define MUX_PC9D_FLEXCOM9_IO1                      _UINT32_(3)  /**< FLEXCOM9 signal line function value: FLEXCOM9_IO1 */
#define PIO_PC9D_FLEXCOM9_IO1                      (_UINT32_(1) << 9) /**< FLEXCOM9 signal: FLEXCOM9_IO1 */
#define PIN_PC1C_FLEXCOM9_IO2                      _UINT32_(65) /**< FLEXCOM9 signal: FLEXCOM9_IO2 on PC1 mux C */
#define MUX_PC1C_FLEXCOM9_IO2                      _UINT32_(2)  /**< FLEXCOM9 signal line function value: FLEXCOM9_IO2 */
#define PIO_PC1C_FLEXCOM9_IO2                      (_UINT32_(1) << 1) /**< FLEXCOM9 signal: FLEXCOM9_IO2 */
#define PIN_PC10D_FLEXCOM9_IO2                     _UINT32_(74) /**< FLEXCOM9 signal: FLEXCOM9_IO2 on PC10 mux D */
#define MUX_PC10D_FLEXCOM9_IO2                     _UINT32_(3)  /**< FLEXCOM9 signal line function value: FLEXCOM9_IO2 */
#define PIO_PC10D_FLEXCOM9_IO2                     (_UINT32_(1) << 10) /**< FLEXCOM9 signal: FLEXCOM9_IO2 */
#define PIN_PC2C_FLEXCOM9_IO3                      _UINT32_(66) /**< FLEXCOM9 signal: FLEXCOM9_IO3 on PC2 mux C */
#define MUX_PC2C_FLEXCOM9_IO3                      _UINT32_(2)  /**< FLEXCOM9 signal line function value: FLEXCOM9_IO3 */
#define PIO_PC2C_FLEXCOM9_IO3                      (_UINT32_(1) << 2) /**< FLEXCOM9 signal: FLEXCOM9_IO3 */
#define PIN_PC11D_FLEXCOM9_IO3                     _UINT32_(75) /**< FLEXCOM9 signal: FLEXCOM9_IO3 on PC11 mux D */
#define MUX_PC11D_FLEXCOM9_IO3                     _UINT32_(3)  /**< FLEXCOM9 signal line function value: FLEXCOM9_IO3 */
#define PIO_PC11D_FLEXCOM9_IO3                     (_UINT32_(1) << 11) /**< FLEXCOM9 signal: FLEXCOM9_IO3 */
#define PIN_PC0C_FLEXCOM9_IO4                      _UINT32_(64) /**< FLEXCOM9 signal: FLEXCOM9_IO4 on PC0 mux C */
#define MUX_PC0C_FLEXCOM9_IO4                      _UINT32_(2)  /**< FLEXCOM9 signal line function value: FLEXCOM9_IO4 */
#define PIO_PC0C_FLEXCOM9_IO4                      (_UINT32_(1) << 0) /**< FLEXCOM9 signal: FLEXCOM9_IO4 */
#define PIN_PC12D_FLEXCOM9_IO4                     _UINT32_(76) /**< FLEXCOM9 signal: FLEXCOM9_IO4 on PC12 mux D */
#define MUX_PC12D_FLEXCOM9_IO4                     _UINT32_(3)  /**< FLEXCOM9 signal line function value: FLEXCOM9_IO4 */
#define PIO_PC12D_FLEXCOM9_IO4                     (_UINT32_(1) << 12) /**< FLEXCOM9 signal: FLEXCOM9_IO4 */
/* ========== PIO definition for FLEXCOM10 peripheral ========== */
#define PIN_PB6B_FLEXCOM10_IO0                     _UINT32_(38) /**< FLEXCOM10 signal: FLEXCOM10_IO0 on PB6 mux B */
#define MUX_PB6B_FLEXCOM10_IO0                     _UINT32_(1)  /**< FLEXCOM10 signal line function value: FLEXCOM10_IO0 */
#define PIO_PB6B_FLEXCOM10_IO0                     (_UINT32_(1) << 6) /**< FLEXCOM10 signal: FLEXCOM10_IO0 */
#define PIN_PB20D_FLEXCOM10_IO0                    _UINT32_(52) /**< FLEXCOM10 signal: FLEXCOM10_IO0 on PB20 mux D */
#define MUX_PB20D_FLEXCOM10_IO0                    _UINT32_(3)  /**< FLEXCOM10 signal line function value: FLEXCOM10_IO0 */
#define PIO_PB20D_FLEXCOM10_IO0                    (_UINT32_(1) << 20) /**< FLEXCOM10 signal: FLEXCOM10_IO0 */
#define PIN_PB7B_FLEXCOM10_IO1                     _UINT32_(39) /**< FLEXCOM10 signal: FLEXCOM10_IO1 on PB7 mux B */
#define MUX_PB7B_FLEXCOM10_IO1                     _UINT32_(1)  /**< FLEXCOM10 signal line function value: FLEXCOM10_IO1 */
#define PIO_PB7B_FLEXCOM10_IO1                     (_UINT32_(1) << 7) /**< FLEXCOM10 signal: FLEXCOM10_IO1 */
#define PIN_PB19D_FLEXCOM10_IO1                    _UINT32_(51) /**< FLEXCOM10 signal: FLEXCOM10_IO1 on PB19 mux D */
#define MUX_PB19D_FLEXCOM10_IO1                    _UINT32_(3)  /**< FLEXCOM10 signal line function value: FLEXCOM10_IO1 */
#define PIO_PB19D_FLEXCOM10_IO1                    (_UINT32_(1) << 19) /**< FLEXCOM10 signal: FLEXCOM10_IO1 */
#define PIN_PB3B_FLEXCOM10_IO2                     _UINT32_(35) /**< FLEXCOM10 signal: FLEXCOM10_IO2 on PB3 mux B */
#define MUX_PB3B_FLEXCOM10_IO2                     _UINT32_(1)  /**< FLEXCOM10 signal line function value: FLEXCOM10_IO2 */
#define PIO_PB3B_FLEXCOM10_IO2                     (_UINT32_(1) << 3) /**< FLEXCOM10 signal: FLEXCOM10_IO2 */
#define PIN_PB18D_FLEXCOM10_IO2                    _UINT32_(50) /**< FLEXCOM10 signal: FLEXCOM10_IO2 on PB18 mux D */
#define MUX_PB18D_FLEXCOM10_IO2                    _UINT32_(3)  /**< FLEXCOM10 signal line function value: FLEXCOM10_IO2 */
#define PIO_PB18D_FLEXCOM10_IO2                    (_UINT32_(1) << 18) /**< FLEXCOM10 signal: FLEXCOM10_IO2 */
#define PIN_PB4B_FLEXCOM10_IO3                     _UINT32_(36) /**< FLEXCOM10 signal: FLEXCOM10_IO3 on PB4 mux B */
#define MUX_PB4B_FLEXCOM10_IO3                     _UINT32_(1)  /**< FLEXCOM10 signal line function value: FLEXCOM10_IO3 */
#define PIO_PB4B_FLEXCOM10_IO3                     (_UINT32_(1) << 4) /**< FLEXCOM10 signal: FLEXCOM10_IO3 */
#define PIN_PB17D_FLEXCOM10_IO3                    _UINT32_(49) /**< FLEXCOM10 signal: FLEXCOM10_IO3 on PB17 mux D */
#define MUX_PB17D_FLEXCOM10_IO3                    _UINT32_(3)  /**< FLEXCOM10 signal line function value: FLEXCOM10_IO3 */
#define PIO_PB17D_FLEXCOM10_IO3                    (_UINT32_(1) << 17) /**< FLEXCOM10 signal: FLEXCOM10_IO3 */
#define PIN_PB5B_FLEXCOM10_IO4                     _UINT32_(37) /**< FLEXCOM10 signal: FLEXCOM10_IO4 on PB5 mux B */
#define MUX_PB5B_FLEXCOM10_IO4                     _UINT32_(1)  /**< FLEXCOM10 signal line function value: FLEXCOM10_IO4 */
#define PIO_PB5B_FLEXCOM10_IO4                     (_UINT32_(1) << 5) /**< FLEXCOM10 signal: FLEXCOM10_IO4 */
#define PIN_PB16D_FLEXCOM10_IO4                    _UINT32_(48) /**< FLEXCOM10 signal: FLEXCOM10_IO4 on PB16 mux D */
#define MUX_PB16D_FLEXCOM10_IO4                    _UINT32_(3)  /**< FLEXCOM10 signal line function value: FLEXCOM10_IO4 */
#define PIO_PB16D_FLEXCOM10_IO4                    (_UINT32_(1) << 16) /**< FLEXCOM10 signal: FLEXCOM10_IO4 */
#define PIN_PB14D_FLEXCOM10_IO5                    _UINT32_(46) /**< FLEXCOM10 signal: FLEXCOM10_IO5 on PB14 mux D */
#define MUX_PB14D_FLEXCOM10_IO5                    _UINT32_(3)  /**< FLEXCOM10 signal line function value: FLEXCOM10_IO5 */
#define PIO_PB14D_FLEXCOM10_IO5                    (_UINT32_(1) << 14) /**< FLEXCOM10 signal: FLEXCOM10_IO5 */
#define PIN_PB15D_FLEXCOM10_IO6                    _UINT32_(47) /**< FLEXCOM10 signal: FLEXCOM10_IO6 on PB15 mux D */
#define MUX_PB15D_FLEXCOM10_IO6                    _UINT32_(3)  /**< FLEXCOM10 signal line function value: FLEXCOM10_IO6 */
#define PIO_PB15D_FLEXCOM10_IO6                    (_UINT32_(1) << 15) /**< FLEXCOM10 signal: FLEXCOM10_IO6 */
/* ========== PIO definition for GMAC0 peripheral ========== */
#define PIN_PA28A_GMAC0_G0_CRSDV                   _UINT32_(28) /**< GMAC0 signal: GMAC0_G0_CRSDV on PA28 mux A */
#define MUX_PA28A_GMAC0_G0_CRSDV                   _UINT32_(0)  /**< GMAC0 signal line function value: GMAC0_G0_CRSDV */
#define PIO_PA28A_GMAC0_G0_CRSDV                   (_UINT32_(1) << 28) /**< GMAC0 signal: GMAC0_G0_CRSDV */
#define PIN_PA31A_GMAC0_G0_MDC                     _UINT32_(31) /**< GMAC0 signal: GMAC0_G0_MDC on PA31 mux A */
#define MUX_PA31A_GMAC0_G0_MDC                     _UINT32_(0)  /**< GMAC0 signal line function value: GMAC0_G0_MDC */
#define PIO_PA31A_GMAC0_G0_MDC                     (_UINT32_(1) << 31) /**< GMAC0 signal: GMAC0_G0_MDC */
#define PIN_PB0A_GMAC0_G0_MDIO                     _UINT32_(32) /**< GMAC0 signal: GMAC0_G0_MDIO on PB0 mux A */
#define MUX_PB0A_GMAC0_G0_MDIO                     _UINT32_(0)  /**< GMAC0 signal line function value: GMAC0_G0_MDIO */
#define PIO_PB0A_GMAC0_G0_MDIO                     (_UINT32_(1) << 0) /**< GMAC0 signal: GMAC0_G0_MDIO */
#define PIN_PB1A_GMAC0_G0_REFCK                    _UINT32_(33) /**< GMAC0 signal: GMAC0_G0_REFCK on PB1 mux A */
#define MUX_PB1A_GMAC0_G0_REFCK                    _UINT32_(0)  /**< GMAC0 signal line function value: GMAC0_G0_REFCK */
#define PIO_PB1A_GMAC0_G0_REFCK                    (_UINT32_(1) << 1) /**< GMAC0 signal: GMAC0_G0_REFCK */
#define PIN_PA29A_GMAC0_G0_RX0                     _UINT32_(29) /**< GMAC0 signal: GMAC0_G0_RX0 on PA29 mux A */
#define MUX_PA29A_GMAC0_G0_RX0                     _UINT32_(0)  /**< GMAC0 signal line function value: GMAC0_G0_RX0 */
#define PIO_PA29A_GMAC0_G0_RX0                     (_UINT32_(1) << 29) /**< GMAC0 signal: GMAC0_G0_RX0 */
#define PIN_PA30A_GMAC0_G0_RX1                     _UINT32_(30) /**< GMAC0 signal: GMAC0_G0_RX1 on PA30 mux A */
#define MUX_PA30A_GMAC0_G0_RX1                     _UINT32_(0)  /**< GMAC0 signal line function value: GMAC0_G0_RX1 */
#define PIO_PA30A_GMAC0_G0_RX1                     (_UINT32_(1) << 30) /**< GMAC0 signal: GMAC0_G0_RX1 */
#define PIN_PB2A_GMAC0_G0_RX2                      _UINT32_(34) /**< GMAC0 signal: GMAC0_G0_RX2 on PB2 mux A */
#define MUX_PB2A_GMAC0_G0_RX2                      _UINT32_(0)  /**< GMAC0 signal line function value: GMAC0_G0_RX2 */
#define PIO_PB2A_GMAC0_G0_RX2                      (_UINT32_(1) << 2) /**< GMAC0 signal: GMAC0_G0_RX2 */
#define PIN_PB6A_GMAC0_G0_RX3                      _UINT32_(38) /**< GMAC0 signal: GMAC0_G0_RX3 on PB6 mux A */
#define MUX_PB6A_GMAC0_G0_RX3                      _UINT32_(0)  /**< GMAC0 signal line function value: GMAC0_G0_RX3 */
#define PIO_PB6A_GMAC0_G0_RX3                      (_UINT32_(1) << 6) /**< GMAC0 signal: GMAC0_G0_RX3 */
#define PIN_PB3A_GMAC0_G0_RXCK                     _UINT32_(35) /**< GMAC0 signal: GMAC0_G0_RXCK on PB3 mux A */
#define MUX_PB3A_GMAC0_G0_RXCK                     _UINT32_(0)  /**< GMAC0 signal line function value: GMAC0_G0_RXCK */
#define PIO_PB3A_GMAC0_G0_RXCK                     (_UINT32_(1) << 3) /**< GMAC0 signal: GMAC0_G0_RXCK */
#define PIN_PA28A_GMAC0_G0_RXCTL                   _UINT32_(28) /**< GMAC0 signal: GMAC0_G0_RXCTL on PA28 mux A */
#define MUX_PA28A_GMAC0_G0_RXCTL                   _UINT32_(0)  /**< GMAC0 signal line function value: GMAC0_G0_RXCTL */
#define PIO_PA28A_GMAC0_G0_RXCTL                   (_UINT32_(1) << 28) /**< GMAC0 signal: GMAC0_G0_RXCTL */
#define PIN_PB2C_GMAC0_G0_RXER                     _UINT32_(34) /**< GMAC0 signal: GMAC0_G0_RXER on PB2 mux C */
#define MUX_PB2C_GMAC0_G0_RXER                     _UINT32_(2)  /**< GMAC0 signal line function value: GMAC0_G0_RXER */
#define PIO_PB2C_GMAC0_G0_RXER                     (_UINT32_(1) << 2) /**< GMAC0 signal: GMAC0_G0_RXER */
#define PIN_PB7A_GMAC0_G0_TSUCOMP                  _UINT32_(39) /**< GMAC0 signal: GMAC0_G0_TSUCOMP on PB7 mux A */
#define MUX_PB7A_GMAC0_G0_TSUCOMP                  _UINT32_(0)  /**< GMAC0 signal line function value: GMAC0_G0_TSUCOMP */
#define PIO_PB7A_GMAC0_G0_TSUCOMP                  (_UINT32_(1) << 7) /**< GMAC0 signal: GMAC0_G0_TSUCOMP */
#define PIN_PA26A_GMAC0_G0_TX0                     _UINT32_(26) /**< GMAC0 signal: GMAC0_G0_TX0 on PA26 mux A */
#define MUX_PA26A_GMAC0_G0_TX0                     _UINT32_(0)  /**< GMAC0 signal line function value: GMAC0_G0_TX0 */
#define PIO_PA26A_GMAC0_G0_TX0                     (_UINT32_(1) << 26) /**< GMAC0 signal: GMAC0_G0_TX0 */
#define PIN_PA27A_GMAC0_G0_TX1                     _UINT32_(27) /**< GMAC0 signal: GMAC0_G0_TX1 on PA27 mux A */
#define MUX_PA27A_GMAC0_G0_TX1                     _UINT32_(0)  /**< GMAC0 signal line function value: GMAC0_G0_TX1 */
#define PIO_PA27A_GMAC0_G0_TX1                     (_UINT32_(1) << 27) /**< GMAC0 signal: GMAC0_G0_TX1 */
#define PIN_PB4A_GMAC0_G0_TX2                      _UINT32_(36) /**< GMAC0 signal: GMAC0_G0_TX2 on PB4 mux A */
#define MUX_PB4A_GMAC0_G0_TX2                      _UINT32_(0)  /**< GMAC0 signal line function value: GMAC0_G0_TX2 */
#define PIO_PB4A_GMAC0_G0_TX2                      (_UINT32_(1) << 4) /**< GMAC0 signal: GMAC0_G0_TX2 */
#define PIN_PB5A_GMAC0_G0_TX3                      _UINT32_(37) /**< GMAC0 signal: GMAC0_G0_TX3 on PB5 mux A */
#define MUX_PB5A_GMAC0_G0_TX3                      _UINT32_(0)  /**< GMAC0 signal line function value: GMAC0_G0_TX3 */
#define PIO_PB5A_GMAC0_G0_TX3                      (_UINT32_(1) << 5) /**< GMAC0 signal: GMAC0_G0_TX3 */
#define PIN_PB1A_GMAC0_G0_TXCK                     _UINT32_(33) /**< GMAC0 signal: GMAC0_G0_TXCK on PB1 mux A */
#define MUX_PB1A_GMAC0_G0_TXCK                     _UINT32_(0)  /**< GMAC0 signal line function value: GMAC0_G0_TXCK */
#define PIO_PB1A_GMAC0_G0_TXCK                     (_UINT32_(1) << 1) /**< GMAC0 signal: GMAC0_G0_TXCK */
#define PIN_PA25A_GMAC0_G0_TXCTL                   _UINT32_(25) /**< GMAC0 signal: GMAC0_G0_TXCTL on PA25 mux A */
#define MUX_PA25A_GMAC0_G0_TXCTL                   _UINT32_(0)  /**< GMAC0 signal line function value: GMAC0_G0_TXCTL */
#define PIO_PA25A_GMAC0_G0_TXCTL                   (_UINT32_(1) << 25) /**< GMAC0 signal: GMAC0_G0_TXCTL */
#define PIN_PA25A_GMAC0_G0_TXEN                    _UINT32_(25) /**< GMAC0 signal: GMAC0_G0_TXEN on PA25 mux A */
#define MUX_PA25A_GMAC0_G0_TXEN                    _UINT32_(0)  /**< GMAC0 signal line function value: GMAC0_G0_TXEN */
#define PIO_PA25A_GMAC0_G0_TXEN                    (_UINT32_(1) << 25) /**< GMAC0 signal: GMAC0_G0_TXEN */
/* ========== PIO definition for GMAC1 peripheral ========== */
#define PIN_PD24A_GMAC1_G1_CRSDV                   _UINT32_(120) /**< GMAC1 signal: GMAC1_G1_CRSDV on PD24 mux A */
#define MUX_PD24A_GMAC1_G1_CRSDV                   _UINT32_(0)  /**< GMAC1 signal line function value: GMAC1_G1_CRSDV */
#define PIO_PD24A_GMAC1_G1_CRSDV                   (_UINT32_(1) << 24) /**< GMAC1 signal: GMAC1_G1_CRSDV */
#define PIN_PD25A_GMAC1_G1_MDC                     _UINT32_(121) /**< GMAC1 signal: GMAC1_G1_MDC on PD25 mux A */
#define MUX_PD25A_GMAC1_G1_MDC                     _UINT32_(0)  /**< GMAC1 signal line function value: GMAC1_G1_MDC */
#define PIO_PD25A_GMAC1_G1_MDC                     (_UINT32_(1) << 25) /**< GMAC1 signal: GMAC1_G1_MDC */
#define PIN_PD26A_GMAC1_G1_MDIO                    _UINT32_(122) /**< GMAC1 signal: GMAC1_G1_MDIO on PD26 mux A */
#define MUX_PD26A_GMAC1_G1_MDIO                    _UINT32_(0)  /**< GMAC1 signal line function value: GMAC1_G1_MDIO */
#define PIO_PD26A_GMAC1_G1_MDIO                    (_UINT32_(1) << 26) /**< GMAC1 signal: GMAC1_G1_MDIO */
#define PIN_PD29A_GMAC1_G1_REFCK                   _UINT32_(125) /**< GMAC1 signal: GMAC1_G1_REFCK on PD29 mux A */
#define MUX_PD29A_GMAC1_G1_REFCK                   _UINT32_(0)  /**< GMAC1 signal line function value: GMAC1_G1_REFCK */
#define PIO_PD29A_GMAC1_G1_REFCK                   (_UINT32_(1) << 29) /**< GMAC1 signal: GMAC1_G1_REFCK */
#define PIN_PD27A_GMAC1_G1_RX0                     _UINT32_(123) /**< GMAC1 signal: GMAC1_G1_RX0 on PD27 mux A */
#define MUX_PD27A_GMAC1_G1_RX0                     _UINT32_(0)  /**< GMAC1 signal line function value: GMAC1_G1_RX0 */
#define PIO_PD27A_GMAC1_G1_RX0                     (_UINT32_(1) << 27) /**< GMAC1 signal: GMAC1_G1_RX0 */
#define PIN_PD28A_GMAC1_G1_RX1                     _UINT32_(124) /**< GMAC1 signal: GMAC1_G1_RX1 on PD28 mux A */
#define MUX_PD28A_GMAC1_G1_RX1                     _UINT32_(0)  /**< GMAC1 signal line function value: GMAC1_G1_RX1 */
#define PIO_PD28A_GMAC1_G1_RX1                     (_UINT32_(1) << 28) /**< GMAC1 signal: GMAC1_G1_RX1 */
#define PIN_PD30A_GMAC1_G1_RX2                     _UINT32_(126) /**< GMAC1 signal: GMAC1_G1_RX2 on PD30 mux A */
#define MUX_PD30A_GMAC1_G1_RX2                     _UINT32_(0)  /**< GMAC1 signal line function value: GMAC1_G1_RX2 */
#define PIO_PD30A_GMAC1_G1_RX2                     (_UINT32_(1) << 30) /**< GMAC1 signal: GMAC1_G1_RX2 */
#define PIN_PD31A_GMAC1_G1_RX3                     _UINT32_(127) /**< GMAC1 signal: GMAC1_G1_RX3 on PD31 mux A */
#define MUX_PD31A_GMAC1_G1_RX3                     _UINT32_(0)  /**< GMAC1 signal line function value: GMAC1_G1_RX3 */
#define PIO_PD31A_GMAC1_G1_RX3                     (_UINT32_(1) << 31) /**< GMAC1 signal: GMAC1_G1_RX3 */
#define PIN_PE2A_GMAC1_G1_RXCK                     _UINT32_(130) /**< GMAC1 signal: GMAC1_G1_RXCK on PE2 mux A */
#define MUX_PE2A_GMAC1_G1_RXCK                     _UINT32_(0)  /**< GMAC1 signal line function value: GMAC1_G1_RXCK */
#define PIO_PE2A_GMAC1_G1_RXCK                     (_UINT32_(1) << 2) /**< GMAC1 signal: GMAC1_G1_RXCK */
#define PIN_PD24A_GMAC1_G1_RXCTL                   _UINT32_(120) /**< GMAC1 signal: GMAC1_G1_RXCTL on PD24 mux A */
#define MUX_PD24A_GMAC1_G1_RXCTL                   _UINT32_(0)  /**< GMAC1 signal line function value: GMAC1_G1_RXCTL */
#define PIO_PD24A_GMAC1_G1_RXCTL                   (_UINT32_(1) << 24) /**< GMAC1 signal: GMAC1_G1_RXCTL */
#define PIN_PD30E_GMAC1_G1_RXER                    _UINT32_(126) /**< GMAC1 signal: GMAC1_G1_RXER on PD30 mux E */
#define MUX_PD30E_GMAC1_G1_RXER                    _UINT32_(4)  /**< GMAC1 signal line function value: GMAC1_G1_RXER */
#define PIO_PD30E_GMAC1_G1_RXER                    (_UINT32_(1) << 30) /**< GMAC1 signal: GMAC1_G1_RXER */
#define PIN_PE3A_GMAC1_G1_TSUCOMP                  _UINT32_(131) /**< GMAC1 signal: GMAC1_G1_TSUCOMP on PE3 mux A */
#define MUX_PE3A_GMAC1_G1_TSUCOMP                  _UINT32_(0)  /**< GMAC1 signal line function value: GMAC1_G1_TSUCOMP */
#define PIO_PE3A_GMAC1_G1_TSUCOMP                  (_UINT32_(1) << 3) /**< GMAC1 signal: GMAC1_G1_TSUCOMP */
#define PIN_PD22A_GMAC1_G1_TX0                     _UINT32_(118) /**< GMAC1 signal: GMAC1_G1_TX0 on PD22 mux A */
#define MUX_PD22A_GMAC1_G1_TX0                     _UINT32_(0)  /**< GMAC1 signal line function value: GMAC1_G1_TX0 */
#define PIO_PD22A_GMAC1_G1_TX0                     (_UINT32_(1) << 22) /**< GMAC1 signal: GMAC1_G1_TX0 */
#define PIN_PD23A_GMAC1_G1_TX1                     _UINT32_(119) /**< GMAC1 signal: GMAC1_G1_TX1 on PD23 mux A */
#define MUX_PD23A_GMAC1_G1_TX1                     _UINT32_(0)  /**< GMAC1 signal line function value: GMAC1_G1_TX1 */
#define PIO_PD23A_GMAC1_G1_TX1                     (_UINT32_(1) << 23) /**< GMAC1 signal: GMAC1_G1_TX1 */
#define PIN_PE0A_GMAC1_G1_TX2                      _UINT32_(128) /**< GMAC1 signal: GMAC1_G1_TX2 on PE0 mux A */
#define MUX_PE0A_GMAC1_G1_TX2                      _UINT32_(0)  /**< GMAC1 signal line function value: GMAC1_G1_TX2 */
#define PIO_PE0A_GMAC1_G1_TX2                      (_UINT32_(1) << 0) /**< GMAC1 signal: GMAC1_G1_TX2 */
#define PIN_PE1A_GMAC1_G1_TX3                      _UINT32_(129) /**< GMAC1 signal: GMAC1_G1_TX3 on PE1 mux A */
#define MUX_PE1A_GMAC1_G1_TX3                      _UINT32_(0)  /**< GMAC1 signal line function value: GMAC1_G1_TX3 */
#define PIO_PE1A_GMAC1_G1_TX3                      (_UINT32_(1) << 1) /**< GMAC1 signal: GMAC1_G1_TX3 */
#define PIN_PD29A_GMAC1_G1_TXCK                    _UINT32_(125) /**< GMAC1 signal: GMAC1_G1_TXCK on PD29 mux A */
#define MUX_PD29A_GMAC1_G1_TXCK                    _UINT32_(0)  /**< GMAC1 signal line function value: GMAC1_G1_TXCK */
#define PIO_PD29A_GMAC1_G1_TXCK                    (_UINT32_(1) << 29) /**< GMAC1 signal: GMAC1_G1_TXCK */
#define PIN_PD21A_GMAC1_G1_TXCTL                   _UINT32_(117) /**< GMAC1 signal: GMAC1_G1_TXCTL on PD21 mux A */
#define MUX_PD21A_GMAC1_G1_TXCTL                   _UINT32_(0)  /**< GMAC1 signal line function value: GMAC1_G1_TXCTL */
#define PIO_PD21A_GMAC1_G1_TXCTL                   (_UINT32_(1) << 21) /**< GMAC1 signal: GMAC1_G1_TXCTL */
#define PIN_PD21A_GMAC1_G1_TXEN                    _UINT32_(117) /**< GMAC1 signal: GMAC1_G1_TXEN on PD21 mux A */
#define MUX_PD21A_GMAC1_G1_TXEN                    _UINT32_(0)  /**< GMAC1 signal line function value: GMAC1_G1_TXEN */
#define PIO_PD21A_GMAC1_G1_TXEN                    (_UINT32_(1) << 21) /**< GMAC1 signal: GMAC1_G1_TXEN */
/* ========== PIO definition for I2SMCC0 peripheral ========== */
#define PIN_PB14C_I2SMCC0_CK                       _UINT32_(46) /**< I2SMCC0 signal: I2SMCC0_CK on PB14 mux C */
#define MUX_PB14C_I2SMCC0_CK                       _UINT32_(2)  /**< I2SMCC0 signal line function value: I2SMCC0_CK */
#define PIO_PB14C_I2SMCC0_CK                       (_UINT32_(1) << 14) /**< I2SMCC0 signal: I2SMCC0_CK */
#define PIN_PC21A_I2SMCC0_CK                       _UINT32_(85) /**< I2SMCC0 signal: I2SMCC0_CK on PC21 mux A */
#define MUX_PC21A_I2SMCC0_CK                       _UINT32_(0)  /**< I2SMCC0 signal line function value: I2SMCC0_CK */
#define PIO_PC21A_I2SMCC0_CK                       (_UINT32_(1) << 21) /**< I2SMCC0 signal: I2SMCC0_CK */
#define PIN_PE8E_I2SMCC0_CK                        _UINT32_(136) /**< I2SMCC0 signal: I2SMCC0_CK on PE8 mux E */
#define MUX_PE8E_I2SMCC0_CK                        _UINT32_(4)  /**< I2SMCC0 signal line function value: I2SMCC0_CK */
#define PIO_PE8E_I2SMCC0_CK                        (_UINT32_(1) << 8) /**< I2SMCC0 signal: I2SMCC0_CK */
#define PIN_PB16C_I2SMCC0_DIN0                     _UINT32_(48) /**< I2SMCC0 signal: I2SMCC0_DIN0 on PB16 mux C */
#define MUX_PB16C_I2SMCC0_DIN0                     _UINT32_(2)  /**< I2SMCC0 signal line function value: I2SMCC0_DIN0 */
#define PIO_PB16C_I2SMCC0_DIN0                     (_UINT32_(1) << 16) /**< I2SMCC0 signal: I2SMCC0_DIN0 */
#define PIN_PC18A_I2SMCC0_DIN0                     _UINT32_(82) /**< I2SMCC0 signal: I2SMCC0_DIN0 on PC18 mux A */
#define MUX_PC18A_I2SMCC0_DIN0                     _UINT32_(0)  /**< I2SMCC0 signal line function value: I2SMCC0_DIN0 */
#define PIO_PC18A_I2SMCC0_DIN0                     (_UINT32_(1) << 18) /**< I2SMCC0 signal: I2SMCC0_DIN0 */
#define PIN_PE12E_I2SMCC0_DIN0                     _UINT32_(140) /**< I2SMCC0 signal: I2SMCC0_DIN0 on PE12 mux E */
#define MUX_PE12E_I2SMCC0_DIN0                     _UINT32_(4)  /**< I2SMCC0 signal line function value: I2SMCC0_DIN0 */
#define PIO_PE12E_I2SMCC0_DIN0                     (_UINT32_(1) << 12) /**< I2SMCC0 signal: I2SMCC0_DIN0 */
#define PIN_PC8A_I2SMCC0_DIN1                      _UINT32_(72) /**< I2SMCC0 signal: I2SMCC0_DIN1 on PC8 mux A */
#define MUX_PC8A_I2SMCC0_DIN1                      _UINT32_(0)  /**< I2SMCC0 signal line function value: I2SMCC0_DIN1 */
#define PIO_PC8A_I2SMCC0_DIN1                      (_UINT32_(1) << 8) /**< I2SMCC0 signal: I2SMCC0_DIN1 */
#define PIN_PE4E_I2SMCC0_DIN1                      _UINT32_(132) /**< I2SMCC0 signal: I2SMCC0_DIN1 on PE4 mux E */
#define MUX_PE4E_I2SMCC0_DIN1                      _UINT32_(4)  /**< I2SMCC0 signal line function value: I2SMCC0_DIN1 */
#define PIO_PE4E_I2SMCC0_DIN1                      (_UINT32_(1) << 4) /**< I2SMCC0 signal: I2SMCC0_DIN1 */
#define PIN_PC9A_I2SMCC0_DIN2                      _UINT32_(73) /**< I2SMCC0 signal: I2SMCC0_DIN2 on PC9 mux A */
#define MUX_PC9A_I2SMCC0_DIN2                      _UINT32_(0)  /**< I2SMCC0 signal line function value: I2SMCC0_DIN2 */
#define PIO_PC9A_I2SMCC0_DIN2                      (_UINT32_(1) << 9) /**< I2SMCC0 signal: I2SMCC0_DIN2 */
#define PIN_PE5E_I2SMCC0_DIN2                      _UINT32_(133) /**< I2SMCC0 signal: I2SMCC0_DIN2 on PE5 mux E */
#define MUX_PE5E_I2SMCC0_DIN2                      _UINT32_(4)  /**< I2SMCC0 signal line function value: I2SMCC0_DIN2 */
#define PIO_PE5E_I2SMCC0_DIN2                      (_UINT32_(1) << 5) /**< I2SMCC0 signal: I2SMCC0_DIN2 */
#define PIN_PC10A_I2SMCC0_DIN3                     _UINT32_(74) /**< I2SMCC0 signal: I2SMCC0_DIN3 on PC10 mux A */
#define MUX_PC10A_I2SMCC0_DIN3                     _UINT32_(0)  /**< I2SMCC0 signal line function value: I2SMCC0_DIN3 */
#define PIO_PC10A_I2SMCC0_DIN3                     (_UINT32_(1) << 10) /**< I2SMCC0 signal: I2SMCC0_DIN3 */
#define PIN_PE6E_I2SMCC0_DIN3                      _UINT32_(134) /**< I2SMCC0 signal: I2SMCC0_DIN3 on PE6 mux E */
#define MUX_PE6E_I2SMCC0_DIN3                      _UINT32_(4)  /**< I2SMCC0 signal line function value: I2SMCC0_DIN3 */
#define PIO_PE6E_I2SMCC0_DIN3                      (_UINT32_(1) << 6) /**< I2SMCC0 signal: I2SMCC0_DIN3 */
#define PIN_PB17C_I2SMCC0_DOUT0                    _UINT32_(49) /**< I2SMCC0 signal: I2SMCC0_DOUT0 on PB17 mux C */
#define MUX_PB17C_I2SMCC0_DOUT0                    _UINT32_(2)  /**< I2SMCC0 signal line function value: I2SMCC0_DOUT0 */
#define PIO_PB17C_I2SMCC0_DOUT0                    (_UINT32_(1) << 17) /**< I2SMCC0 signal: I2SMCC0_DOUT0 */
#define PIN_PC20A_I2SMCC0_DOUT0                    _UINT32_(84) /**< I2SMCC0 signal: I2SMCC0_DOUT0 on PC20 mux A */
#define MUX_PC20A_I2SMCC0_DOUT0                    _UINT32_(0)  /**< I2SMCC0 signal line function value: I2SMCC0_DOUT0 */
#define PIO_PC20A_I2SMCC0_DOUT0                    (_UINT32_(1) << 20) /**< I2SMCC0 signal: I2SMCC0_DOUT0 */
#define PIN_PE13E_I2SMCC0_DOUT0                    _UINT32_(141) /**< I2SMCC0 signal: I2SMCC0_DOUT0 on PE13 mux E */
#define MUX_PE13E_I2SMCC0_DOUT0                    _UINT32_(4)  /**< I2SMCC0 signal line function value: I2SMCC0_DOUT0 */
#define PIO_PE13E_I2SMCC0_DOUT0                    (_UINT32_(1) << 13) /**< I2SMCC0 signal: I2SMCC0_DOUT0 */
#define PIN_PC11A_I2SMCC0_DOUT1                    _UINT32_(75) /**< I2SMCC0 signal: I2SMCC0_DOUT1 on PC11 mux A */
#define MUX_PC11A_I2SMCC0_DOUT1                    _UINT32_(0)  /**< I2SMCC0 signal line function value: I2SMCC0_DOUT1 */
#define PIO_PC11A_I2SMCC0_DOUT1                    (_UINT32_(1) << 11) /**< I2SMCC0 signal: I2SMCC0_DOUT1 */
#define PIN_PE7E_I2SMCC0_DOUT1                     _UINT32_(135) /**< I2SMCC0 signal: I2SMCC0_DOUT1 on PE7 mux E */
#define MUX_PE7E_I2SMCC0_DOUT1                     _UINT32_(4)  /**< I2SMCC0 signal line function value: I2SMCC0_DOUT1 */
#define PIO_PE7E_I2SMCC0_DOUT1                     (_UINT32_(1) << 7) /**< I2SMCC0 signal: I2SMCC0_DOUT1 */
#define PIN_PC12A_I2SMCC0_DOUT2                    _UINT32_(76) /**< I2SMCC0 signal: I2SMCC0_DOUT2 on PC12 mux A */
#define MUX_PC12A_I2SMCC0_DOUT2                    _UINT32_(0)  /**< I2SMCC0 signal line function value: I2SMCC0_DOUT2 */
#define PIO_PC12A_I2SMCC0_DOUT2                    (_UINT32_(1) << 12) /**< I2SMCC0 signal: I2SMCC0_DOUT2 */
#define PIN_PE10E_I2SMCC0_DOUT2                    _UINT32_(138) /**< I2SMCC0 signal: I2SMCC0_DOUT2 on PE10 mux E */
#define MUX_PE10E_I2SMCC0_DOUT2                    _UINT32_(4)  /**< I2SMCC0 signal line function value: I2SMCC0_DOUT2 */
#define PIO_PE10E_I2SMCC0_DOUT2                    (_UINT32_(1) << 10) /**< I2SMCC0 signal: I2SMCC0_DOUT2 */
#define PIN_PC13A_I2SMCC0_DOUT3                    _UINT32_(77) /**< I2SMCC0 signal: I2SMCC0_DOUT3 on PC13 mux A */
#define MUX_PC13A_I2SMCC0_DOUT3                    _UINT32_(0)  /**< I2SMCC0 signal line function value: I2SMCC0_DOUT3 */
#define PIO_PC13A_I2SMCC0_DOUT3                    (_UINT32_(1) << 13) /**< I2SMCC0 signal: I2SMCC0_DOUT3 */
#define PIN_PE11E_I2SMCC0_DOUT3                    _UINT32_(139) /**< I2SMCC0 signal: I2SMCC0_DOUT3 on PE11 mux E */
#define MUX_PE11E_I2SMCC0_DOUT3                    _UINT32_(4)  /**< I2SMCC0 signal line function value: I2SMCC0_DOUT3 */
#define PIO_PE11E_I2SMCC0_DOUT3                    (_UINT32_(1) << 11) /**< I2SMCC0 signal: I2SMCC0_DOUT3 */
#define PIN_PB18C_I2SMCC0_MCK                      _UINT32_(50) /**< I2SMCC0 signal: I2SMCC0_MCK on PB18 mux C */
#define MUX_PB18C_I2SMCC0_MCK                      _UINT32_(2)  /**< I2SMCC0 signal line function value: I2SMCC0_MCK */
#define PIO_PB18C_I2SMCC0_MCK                      (_UINT32_(1) << 18) /**< I2SMCC0 signal: I2SMCC0_MCK */
#define PIN_PB29B_I2SMCC0_MCK                      _UINT32_(61) /**< I2SMCC0 signal: I2SMCC0_MCK on PB29 mux B */
#define MUX_PB29B_I2SMCC0_MCK                      _UINT32_(1)  /**< I2SMCC0 signal line function value: I2SMCC0_MCK */
#define PIO_PB29B_I2SMCC0_MCK                      (_UINT32_(1) << 29) /**< I2SMCC0 signal: I2SMCC0_MCK */
#define PIN_PB15C_I2SMCC0_WS                       _UINT32_(47) /**< I2SMCC0 signal: I2SMCC0_WS on PB15 mux C */
#define MUX_PB15C_I2SMCC0_WS                       _UINT32_(2)  /**< I2SMCC0 signal line function value: I2SMCC0_WS */
#define PIO_PB15C_I2SMCC0_WS                       (_UINT32_(1) << 15) /**< I2SMCC0 signal: I2SMCC0_WS */
#define PIN_PC19A_I2SMCC0_WS                       _UINT32_(83) /**< I2SMCC0 signal: I2SMCC0_WS on PC19 mux A */
#define MUX_PC19A_I2SMCC0_WS                       _UINT32_(0)  /**< I2SMCC0 signal line function value: I2SMCC0_WS */
#define PIO_PC19A_I2SMCC0_WS                       (_UINT32_(1) << 19) /**< I2SMCC0 signal: I2SMCC0_WS */
#define PIN_PE9E_I2SMCC0_WS                        _UINT32_(137) /**< I2SMCC0 signal: I2SMCC0_WS on PE9 mux E */
#define MUX_PE9E_I2SMCC0_WS                        _UINT32_(4)  /**< I2SMCC0 signal line function value: I2SMCC0_WS */
#define PIO_PE9E_I2SMCC0_WS                        (_UINT32_(1) << 9) /**< I2SMCC0 signal: I2SMCC0_WS */
/* ========== PIO definition for I2SMCC1 peripheral ========== */
#define PIN_PC16A_I2SMCC1_CK                       _UINT32_(80) /**< I2SMCC1 signal: I2SMCC1_CK on PC16 mux A */
#define MUX_PC16A_I2SMCC1_CK                       _UINT32_(0)  /**< I2SMCC1 signal line function value: I2SMCC1_CK */
#define PIO_PC16A_I2SMCC1_CK                       (_UINT32_(1) << 16) /**< I2SMCC1 signal: I2SMCC1_CK */
#define PIN_PE2C_I2SMCC1_CK                        _UINT32_(130) /**< I2SMCC1 signal: I2SMCC1_CK on PE2 mux C */
#define MUX_PE2C_I2SMCC1_CK                        _UINT32_(2)  /**< I2SMCC1 signal line function value: I2SMCC1_CK */
#define PIO_PE2C_I2SMCC1_CK                        (_UINT32_(1) << 2) /**< I2SMCC1 signal: I2SMCC1_CK */
#define PIN_PC14A_I2SMCC1_DIN0                     _UINT32_(78) /**< I2SMCC1 signal: I2SMCC1_DIN0 on PC14 mux A */
#define MUX_PC14A_I2SMCC1_DIN0                     _UINT32_(0)  /**< I2SMCC1 signal line function value: I2SMCC1_DIN0 */
#define PIO_PC14A_I2SMCC1_DIN0                     (_UINT32_(1) << 14) /**< I2SMCC1 signal: I2SMCC1_DIN0 */
#define PIN_PE0C_I2SMCC1_DIN0                      _UINT32_(128) /**< I2SMCC1 signal: I2SMCC1_DIN0 on PE0 mux C */
#define MUX_PE0C_I2SMCC1_DIN0                      _UINT32_(2)  /**< I2SMCC1 signal line function value: I2SMCC1_DIN0 */
#define PIO_PE0C_I2SMCC1_DIN0                      (_UINT32_(1) << 0) /**< I2SMCC1 signal: I2SMCC1_DIN0 */
#define PIN_PB31B_I2SMCC1_DIN1                     _UINT32_(63) /**< I2SMCC1 signal: I2SMCC1_DIN1 on PB31 mux B */
#define MUX_PB31B_I2SMCC1_DIN1                     _UINT32_(1)  /**< I2SMCC1 signal line function value: I2SMCC1_DIN1 */
#define PIO_PB31B_I2SMCC1_DIN1                     (_UINT32_(1) << 31) /**< I2SMCC1 signal: I2SMCC1_DIN1 */
#define PIN_PD28D_I2SMCC1_DIN1                     _UINT32_(124) /**< I2SMCC1 signal: I2SMCC1_DIN1 on PD28 mux D */
#define MUX_PD28D_I2SMCC1_DIN1                     _UINT32_(3)  /**< I2SMCC1 signal line function value: I2SMCC1_DIN1 */
#define PIO_PD28D_I2SMCC1_DIN1                     (_UINT32_(1) << 28) /**< I2SMCC1 signal: I2SMCC1_DIN1 */
#define PIN_PC0B_I2SMCC1_DIN2                      _UINT32_(64) /**< I2SMCC1 signal: I2SMCC1_DIN2 on PC0 mux B */
#define MUX_PC0B_I2SMCC1_DIN2                      _UINT32_(1)  /**< I2SMCC1 signal line function value: I2SMCC1_DIN2 */
#define PIO_PC0B_I2SMCC1_DIN2                      (_UINT32_(1) << 0) /**< I2SMCC1 signal: I2SMCC1_DIN2 */
#define PIN_PD26D_I2SMCC1_DIN2                     _UINT32_(122) /**< I2SMCC1 signal: I2SMCC1_DIN2 on PD26 mux D */
#define MUX_PD26D_I2SMCC1_DIN2                     _UINT32_(3)  /**< I2SMCC1 signal line function value: I2SMCC1_DIN2 */
#define PIO_PD26D_I2SMCC1_DIN2                     (_UINT32_(1) << 26) /**< I2SMCC1 signal: I2SMCC1_DIN2 */
#define PIN_PC5B_I2SMCC1_DIN3                      _UINT32_(69) /**< I2SMCC1 signal: I2SMCC1_DIN3 on PC5 mux B */
#define MUX_PC5B_I2SMCC1_DIN3                      _UINT32_(1)  /**< I2SMCC1 signal line function value: I2SMCC1_DIN3 */
#define PIO_PC5B_I2SMCC1_DIN3                      (_UINT32_(1) << 5) /**< I2SMCC1 signal: I2SMCC1_DIN3 */
#define PIN_PD27D_I2SMCC1_DIN3                     _UINT32_(123) /**< I2SMCC1 signal: I2SMCC1_DIN3 on PD27 mux D */
#define MUX_PD27D_I2SMCC1_DIN3                     _UINT32_(3)  /**< I2SMCC1 signal line function value: I2SMCC1_DIN3 */
#define PIO_PD27D_I2SMCC1_DIN3                     (_UINT32_(1) << 27) /**< I2SMCC1 signal: I2SMCC1_DIN3 */
#define PIN_PC17A_I2SMCC1_DOUT0                    _UINT32_(81) /**< I2SMCC1 signal: I2SMCC1_DOUT0 on PC17 mux A */
#define MUX_PC17A_I2SMCC1_DOUT0                    _UINT32_(0)  /**< I2SMCC1 signal line function value: I2SMCC1_DOUT0 */
#define PIO_PC17A_I2SMCC1_DOUT0                    (_UINT32_(1) << 17) /**< I2SMCC1 signal: I2SMCC1_DOUT0 */
#define PIN_PE3C_I2SMCC1_DOUT0                     _UINT32_(131) /**< I2SMCC1 signal: I2SMCC1_DOUT0 on PE3 mux C */
#define MUX_PE3C_I2SMCC1_DOUT0                     _UINT32_(2)  /**< I2SMCC1 signal line function value: I2SMCC1_DOUT0 */
#define PIO_PE3C_I2SMCC1_DOUT0                     (_UINT32_(1) << 3) /**< I2SMCC1 signal: I2SMCC1_DOUT0 */
#define PIN_PC8C_I2SMCC1_DOUT1                     _UINT32_(72) /**< I2SMCC1 signal: I2SMCC1_DOUT1 on PC8 mux C */
#define MUX_PC8C_I2SMCC1_DOUT1                     _UINT32_(2)  /**< I2SMCC1 signal line function value: I2SMCC1_DOUT1 */
#define PIO_PC8C_I2SMCC1_DOUT1                     (_UINT32_(1) << 8) /**< I2SMCC1 signal: I2SMCC1_DOUT1 */
#define PIN_PD30C_I2SMCC1_DOUT1                    _UINT32_(126) /**< I2SMCC1 signal: I2SMCC1_DOUT1 on PD30 mux C */
#define MUX_PD30C_I2SMCC1_DOUT1                    _UINT32_(2)  /**< I2SMCC1 signal line function value: I2SMCC1_DOUT1 */
#define PIO_PD30C_I2SMCC1_DOUT1                    (_UINT32_(1) << 30) /**< I2SMCC1 signal: I2SMCC1_DOUT1 */
#define PIN_PC9C_I2SMCC1_DOUT2                     _UINT32_(73) /**< I2SMCC1 signal: I2SMCC1_DOUT2 on PC9 mux C */
#define MUX_PC9C_I2SMCC1_DOUT2                     _UINT32_(2)  /**< I2SMCC1 signal line function value: I2SMCC1_DOUT2 */
#define PIO_PC9C_I2SMCC1_DOUT2                     (_UINT32_(1) << 9) /**< I2SMCC1 signal: I2SMCC1_DOUT2 */
#define PIN_PD31C_I2SMCC1_DOUT2                    _UINT32_(127) /**< I2SMCC1 signal: I2SMCC1_DOUT2 on PD31 mux C */
#define MUX_PD31C_I2SMCC1_DOUT2                    _UINT32_(2)  /**< I2SMCC1 signal line function value: I2SMCC1_DOUT2 */
#define PIO_PD31C_I2SMCC1_DOUT2                    (_UINT32_(1) << 31) /**< I2SMCC1 signal: I2SMCC1_DOUT2 */
#define PIN_PC10C_I2SMCC1_DOUT3                    _UINT32_(74) /**< I2SMCC1 signal: I2SMCC1_DOUT3 on PC10 mux C */
#define MUX_PC10C_I2SMCC1_DOUT3                    _UINT32_(2)  /**< I2SMCC1 signal line function value: I2SMCC1_DOUT3 */
#define PIO_PC10C_I2SMCC1_DOUT3                    (_UINT32_(1) << 10) /**< I2SMCC1 signal: I2SMCC1_DOUT3 */
#define PIN_PD29C_I2SMCC1_DOUT3                    _UINT32_(125) /**< I2SMCC1 signal: I2SMCC1_DOUT3 on PD29 mux C */
#define MUX_PD29C_I2SMCC1_DOUT3                    _UINT32_(2)  /**< I2SMCC1 signal line function value: I2SMCC1_DOUT3 */
#define PIO_PD29C_I2SMCC1_DOUT3                    (_UINT32_(1) << 29) /**< I2SMCC1 signal: I2SMCC1_DOUT3 */
#define PIN_PB30B_I2SMCC1_MCK                      _UINT32_(62) /**< I2SMCC1 signal: I2SMCC1_MCK on PB30 mux B */
#define MUX_PB30B_I2SMCC1_MCK                      _UINT32_(1)  /**< I2SMCC1 signal line function value: I2SMCC1_MCK */
#define PIO_PB30B_I2SMCC1_MCK                      (_UINT32_(1) << 30) /**< I2SMCC1 signal: I2SMCC1_MCK */
#define PIN_PD20C_I2SMCC1_MCK                      _UINT32_(116) /**< I2SMCC1 signal: I2SMCC1_MCK on PD20 mux C */
#define MUX_PD20C_I2SMCC1_MCK                      _UINT32_(2)  /**< I2SMCC1 signal line function value: I2SMCC1_MCK */
#define PIO_PD20C_I2SMCC1_MCK                      (_UINT32_(1) << 20) /**< I2SMCC1 signal: I2SMCC1_MCK */
#define PIN_PC15A_I2SMCC1_WS                       _UINT32_(79) /**< I2SMCC1 signal: I2SMCC1_WS on PC15 mux A */
#define MUX_PC15A_I2SMCC1_WS                       _UINT32_(0)  /**< I2SMCC1 signal line function value: I2SMCC1_WS */
#define PIO_PC15A_I2SMCC1_WS                       (_UINT32_(1) << 15) /**< I2SMCC1 signal: I2SMCC1_WS */
#define PIN_PE1C_I2SMCC1_WS                        _UINT32_(129) /**< I2SMCC1 signal: I2SMCC1_WS on PE1 mux C */
#define MUX_PE1C_I2SMCC1_WS                        _UINT32_(2)  /**< I2SMCC1 signal line function value: I2SMCC1_WS */
#define PIO_PE1C_I2SMCC1_WS                        (_UINT32_(1) << 1) /**< I2SMCC1 signal: I2SMCC1_WS */
/* ========== PIO definition for I3CC peripheral ========== */
#define PIN_PC6A_I3CC_SCL                          _UINT32_(70) /**< I3CC signal: I3CC_SCL on PC6 mux A */
#define MUX_PC6A_I3CC_SCL                          _UINT32_(0)  /**< I3CC signal line function value: I3CC_SCL */
#define PIO_PC6A_I3CC_SCL                          (_UINT32_(1) << 6) /**< I3CC signal: I3CC_SCL */
#define PIN_PC7A_I3CC_SDA                          _UINT32_(71) /**< I3CC signal: I3CC_SDA on PC7 mux A */
#define MUX_PC7A_I3CC_SDA                          _UINT32_(0)  /**< I3CC signal line function value: I3CC_SDA */
#define PIO_PC7A_I3CC_SDA                          (_UINT32_(1) << 7) /**< I3CC signal: I3CC_SDA */
#define PIN_PC5A_I3CC_SDASPUE                      _UINT32_(69) /**< I3CC signal: I3CC_SDASPUE on PC5 mux A */
#define MUX_PC5A_I3CC_SDASPUE                      _UINT32_(0)  /**< I3CC signal line function value: I3CC_SDASPUE */
#define PIO_PC5A_I3CC_SDASPUE                      (_UINT32_(1) << 5) /**< I3CC signal: I3CC_SDASPUE */
/* ========== PIO definition for LCDC peripheral ========== */
#define PIN_PE4A_LCDC_DAT0                         _UINT32_(132) /**< LCDC signal: LCDC_DAT0 on PE4 mux A */
#define MUX_PE4A_LCDC_DAT0                         _UINT32_(0)  /**< LCDC signal line function value: LCDC_DAT0 */
#define PIO_PE4A_LCDC_DAT0                         (_UINT32_(1) << 4) /**< LCDC signal: LCDC_DAT0 */
#define PIN_PE5A_LCDC_DAT1                         _UINT32_(133) /**< LCDC signal: LCDC_DAT1 on PE5 mux A */
#define MUX_PE5A_LCDC_DAT1                         _UINT32_(0)  /**< LCDC signal line function value: LCDC_DAT1 */
#define PIO_PE5A_LCDC_DAT1                         (_UINT32_(1) << 5) /**< LCDC signal: LCDC_DAT1 */
#define PIN_PE6A_LCDC_DAT2                         _UINT32_(134) /**< LCDC signal: LCDC_DAT2 on PE6 mux A */
#define MUX_PE6A_LCDC_DAT2                         _UINT32_(0)  /**< LCDC signal line function value: LCDC_DAT2 */
#define PIO_PE6A_LCDC_DAT2                         (_UINT32_(1) << 6) /**< LCDC signal: LCDC_DAT2 */
#define PIN_PE7A_LCDC_DAT3                         _UINT32_(135) /**< LCDC signal: LCDC_DAT3 on PE7 mux A */
#define MUX_PE7A_LCDC_DAT3                         _UINT32_(0)  /**< LCDC signal line function value: LCDC_DAT3 */
#define PIO_PE7A_LCDC_DAT3                         (_UINT32_(1) << 7) /**< LCDC signal: LCDC_DAT3 */
#define PIN_PE8A_LCDC_DAT4                         _UINT32_(136) /**< LCDC signal: LCDC_DAT4 on PE8 mux A */
#define MUX_PE8A_LCDC_DAT4                         _UINT32_(0)  /**< LCDC signal line function value: LCDC_DAT4 */
#define PIO_PE8A_LCDC_DAT4                         (_UINT32_(1) << 8) /**< LCDC signal: LCDC_DAT4 */
#define PIN_PE9A_LCDC_DAT5                         _UINT32_(137) /**< LCDC signal: LCDC_DAT5 on PE9 mux A */
#define MUX_PE9A_LCDC_DAT5                         _UINT32_(0)  /**< LCDC signal line function value: LCDC_DAT5 */
#define PIO_PE9A_LCDC_DAT5                         (_UINT32_(1) << 9) /**< LCDC signal: LCDC_DAT5 */
#define PIN_PE10A_LCDC_DAT6                        _UINT32_(138) /**< LCDC signal: LCDC_DAT6 on PE10 mux A */
#define MUX_PE10A_LCDC_DAT6                        _UINT32_(0)  /**< LCDC signal line function value: LCDC_DAT6 */
#define PIO_PE10A_LCDC_DAT6                        (_UINT32_(1) << 10) /**< LCDC signal: LCDC_DAT6 */
#define PIN_PE11A_LCDC_DAT7                        _UINT32_(139) /**< LCDC signal: LCDC_DAT7 on PE11 mux A */
#define MUX_PE11A_LCDC_DAT7                        _UINT32_(0)  /**< LCDC signal line function value: LCDC_DAT7 */
#define PIO_PE11A_LCDC_DAT7                        (_UINT32_(1) << 11) /**< LCDC signal: LCDC_DAT7 */
#define PIN_PE12A_LCDC_DEN                         _UINT32_(140) /**< LCDC signal: LCDC_DEN on PE12 mux A */
#define MUX_PE12A_LCDC_DEN                         _UINT32_(0)  /**< LCDC signal line function value: LCDC_DEN */
#define PIO_PE12A_LCDC_DEN                         (_UINT32_(1) << 12) /**< LCDC signal: LCDC_DEN */
#define PIN_PD7A_LCDC_DISP                         _UINT32_(103) /**< LCDC signal: LCDC_DISP on PD7 mux A */
#define MUX_PD7A_LCDC_DISP                         _UINT32_(0)  /**< LCDC signal line function value: LCDC_DISP */
#define PIO_PD7A_LCDC_DISP                         (_UINT32_(1) << 7) /**< LCDC signal: LCDC_DISP */
#define PIN_PD1C_LCDC_HSYNC                        _UINT32_(97) /**< LCDC signal: LCDC_HSYNC on PD1 mux C */
#define MUX_PD1C_LCDC_HSYNC                        _UINT32_(2)  /**< LCDC signal line function value: LCDC_HSYNC */
#define PIO_PD1C_LCDC_HSYNC                        (_UINT32_(1) << 1) /**< LCDC signal: LCDC_HSYNC */
#define PIN_PD4A_LCDC_HSYNC                        _UINT32_(100) /**< LCDC signal: LCDC_HSYNC on PD4 mux A */
#define MUX_PD4A_LCDC_HSYNC                        _UINT32_(0)  /**< LCDC signal line function value: LCDC_HSYNC */
#define PIO_PD4A_LCDC_HSYNC                        (_UINT32_(1) << 4) /**< LCDC signal: LCDC_HSYNC */
#define PIN_PE13A_LCDC_PCK                         _UINT32_(141) /**< LCDC signal: LCDC_PCK on PE13 mux A */
#define MUX_PE13A_LCDC_PCK                         _UINT32_(0)  /**< LCDC signal line function value: LCDC_PCK */
#define PIO_PE13A_LCDC_PCK                         (_UINT32_(1) << 13) /**< LCDC signal: LCDC_PCK */
#define PIN_PD6A_LCDC_PWM                          _UINT32_(102) /**< LCDC signal: LCDC_PWM on PD6 mux A */
#define MUX_PD6A_LCDC_PWM                          _UINT32_(0)  /**< LCDC signal line function value: LCDC_PWM */
#define PIO_PD6A_LCDC_PWM                          (_UINT32_(1) << 6) /**< LCDC signal: LCDC_PWM */
#define PIN_PD2C_LCDC_VSYNC                        _UINT32_(98) /**< LCDC signal: LCDC_VSYNC on PD2 mux C */
#define MUX_PD2C_LCDC_VSYNC                        _UINT32_(2)  /**< LCDC signal line function value: LCDC_VSYNC */
#define PIO_PD2C_LCDC_VSYNC                        (_UINT32_(1) << 2) /**< LCDC signal: LCDC_VSYNC */
#define PIN_PD5A_LCDC_VSYNC                        _UINT32_(101) /**< LCDC signal: LCDC_VSYNC on PD5 mux A */
#define MUX_PD5A_LCDC_VSYNC                        _UINT32_(0)  /**< LCDC signal line function value: LCDC_VSYNC */
#define PIO_PD5A_LCDC_VSYNC                        (_UINT32_(1) << 5) /**< LCDC signal: LCDC_VSYNC */
/* ========== PIO definition for LVDSC peripheral ========== */
#define PIN_PE4X1_LVDSC_LVDS_A0M                   _UINT32_(132) /**< LVDSC signal: LVDSC_LVDS_A0M on PE4 mux X1 */
#define PIO_PE4X1_LVDSC_LVDS_A0M                   (_UINT32_(1) << 4) /**< LVDSC signal: LVDSC_LVDS_A0M */
#define PIN_PE5X1_LVDSC_LVDS_A0P                   _UINT32_(133) /**< LVDSC signal: LVDSC_LVDS_A0P on PE5 mux X1 */
#define PIO_PE5X1_LVDSC_LVDS_A0P                   (_UINT32_(1) << 5) /**< LVDSC signal: LVDSC_LVDS_A0P */
#define PIN_PE6X1_LVDSC_LVDS_A1M                   _UINT32_(134) /**< LVDSC signal: LVDSC_LVDS_A1M on PE6 mux X1 */
#define PIO_PE6X1_LVDSC_LVDS_A1M                   (_UINT32_(1) << 6) /**< LVDSC signal: LVDSC_LVDS_A1M */
#define PIN_PE7X1_LVDSC_LVDS_A1P                   _UINT32_(135) /**< LVDSC signal: LVDSC_LVDS_A1P on PE7 mux X1 */
#define PIO_PE7X1_LVDSC_LVDS_A1P                   (_UINT32_(1) << 7) /**< LVDSC signal: LVDSC_LVDS_A1P */
#define PIN_PE8X1_LVDSC_LVDS_A2M                   _UINT32_(136) /**< LVDSC signal: LVDSC_LVDS_A2M on PE8 mux X1 */
#define PIO_PE8X1_LVDSC_LVDS_A2M                   (_UINT32_(1) << 8) /**< LVDSC signal: LVDSC_LVDS_A2M */
#define PIN_PE9X1_LVDSC_LVDS_A2P                   _UINT32_(137) /**< LVDSC signal: LVDSC_LVDS_A2P on PE9 mux X1 */
#define PIO_PE9X1_LVDSC_LVDS_A2P                   (_UINT32_(1) << 9) /**< LVDSC signal: LVDSC_LVDS_A2P */
#define PIN_PE10X1_LVDSC_LVDS_A3M                  _UINT32_(138) /**< LVDSC signal: LVDSC_LVDS_A3M on PE10 mux X1 */
#define PIO_PE10X1_LVDSC_LVDS_A3M                  (_UINT32_(1) << 10) /**< LVDSC signal: LVDSC_LVDS_A3M */
#define PIN_PE11X1_LVDSC_LVDS_A3P                  _UINT32_(139) /**< LVDSC signal: LVDSC_LVDS_A3P on PE11 mux X1 */
#define PIO_PE11X1_LVDSC_LVDS_A3P                  (_UINT32_(1) << 11) /**< LVDSC signal: LVDSC_LVDS_A3P */
#define PIN_PE12X1_LVDSC_LVDS_CLK1M                _UINT32_(140) /**< LVDSC signal: LVDSC_LVDS_CLK1M on PE12 mux X1 */
#define PIO_PE12X1_LVDSC_LVDS_CLK1M                (_UINT32_(1) << 12) /**< LVDSC signal: LVDSC_LVDS_CLK1M */
#define PIN_PE13X1_LVDSC_LVDS_CLK1P                _UINT32_(141) /**< LVDSC signal: LVDSC_LVDS_CLK1P on PE13 mux X1 */
#define PIO_PE13X1_LVDSC_LVDS_CLK1P                (_UINT32_(1) << 13) /**< LVDSC signal: LVDSC_LVDS_CLK1P */
/* ========== PIO definition for MCAN0 peripheral ========== */
#define PIN_PD9A_MCAN0_CANRX0                      _UINT32_(105) /**< MCAN0 signal: MCAN0_CANRX0 on PD9 mux A */
#define MUX_PD9A_MCAN0_CANRX0                      _UINT32_(0)  /**< MCAN0 signal line function value: MCAN0_CANRX0 */
#define PIO_PD9A_MCAN0_CANRX0                      (_UINT32_(1) << 9) /**< MCAN0 signal: MCAN0_CANRX0 */
#define PIN_PD8A_MCAN0_CANTX0                      _UINT32_(104) /**< MCAN0 signal: MCAN0_CANTX0 on PD8 mux A */
#define MUX_PD8A_MCAN0_CANTX0                      _UINT32_(0)  /**< MCAN0 signal line function value: MCAN0_CANTX0 */
#define PIO_PD8A_MCAN0_CANTX0                      (_UINT32_(1) << 8) /**< MCAN0 signal: MCAN0_CANTX0 */
/* ========== PIO definition for MCAN1 peripheral ========== */
#define PIN_PD11A_MCAN1_CANRX1                     _UINT32_(107) /**< MCAN1 signal: MCAN1_CANRX1 on PD11 mux A */
#define MUX_PD11A_MCAN1_CANRX1                     _UINT32_(0)  /**< MCAN1 signal line function value: MCAN1_CANRX1 */
#define PIO_PD11A_MCAN1_CANRX1                     (_UINT32_(1) << 11) /**< MCAN1 signal: MCAN1_CANRX1 */
#define PIN_PD19C_MCAN1_CANRX1                     _UINT32_(115) /**< MCAN1 signal: MCAN1_CANRX1 on PD19 mux C */
#define MUX_PD19C_MCAN1_CANRX1                     _UINT32_(2)  /**< MCAN1 signal line function value: MCAN1_CANRX1 */
#define PIO_PD19C_MCAN1_CANRX1                     (_UINT32_(1) << 19) /**< MCAN1 signal: MCAN1_CANRX1 */
#define PIN_PD10A_MCAN1_CANTX1                     _UINT32_(106) /**< MCAN1 signal: MCAN1_CANTX1 on PD10 mux A */
#define MUX_PD10A_MCAN1_CANTX1                     _UINT32_(0)  /**< MCAN1 signal line function value: MCAN1_CANTX1 */
#define PIO_PD10A_MCAN1_CANTX1                     (_UINT32_(1) << 10) /**< MCAN1 signal: MCAN1_CANTX1 */
#define PIN_PD18C_MCAN1_CANTX1                     _UINT32_(114) /**< MCAN1 signal: MCAN1_CANTX1 on PD18 mux C */
#define MUX_PD18C_MCAN1_CANTX1                     _UINT32_(2)  /**< MCAN1 signal line function value: MCAN1_CANTX1 */
#define PIO_PD18C_MCAN1_CANTX1                     (_UINT32_(1) << 18) /**< MCAN1 signal: MCAN1_CANTX1 */
/* ========== PIO definition for MCAN2 peripheral ========== */
#define PIN_PD13A_MCAN2_CANRX2                     _UINT32_(109) /**< MCAN2 signal: MCAN2_CANRX2 on PD13 mux A */
#define MUX_PD13A_MCAN2_CANRX2                     _UINT32_(0)  /**< MCAN2 signal line function value: MCAN2_CANRX2 */
#define PIO_PD13A_MCAN2_CANRX2                     (_UINT32_(1) << 13) /**< MCAN2 signal: MCAN2_CANRX2 */
#define PIN_PD12A_MCAN2_CANTX2                     _UINT32_(108) /**< MCAN2 signal: MCAN2_CANTX2 on PD12 mux A */
#define MUX_PD12A_MCAN2_CANTX2                     _UINT32_(0)  /**< MCAN2 signal line function value: MCAN2_CANTX2 */
#define PIO_PD12A_MCAN2_CANTX2                     (_UINT32_(1) << 12) /**< MCAN2 signal: MCAN2_CANTX2 */
/* ========== PIO definition for MCAN3 peripheral ========== */
#define PIN_PD15A_MCAN3_CANRX3                     _UINT32_(111) /**< MCAN3 signal: MCAN3_CANRX3 on PD15 mux A */
#define MUX_PD15A_MCAN3_CANRX3                     _UINT32_(0)  /**< MCAN3 signal line function value: MCAN3_CANRX3 */
#define PIO_PD15A_MCAN3_CANRX3                     (_UINT32_(1) << 15) /**< MCAN3 signal: MCAN3_CANRX3 */
#define PIN_PD14A_MCAN3_CANTX3                     _UINT32_(110) /**< MCAN3 signal: MCAN3_CANTX3 on PD14 mux A */
#define MUX_PD14A_MCAN3_CANTX3                     _UINT32_(0)  /**< MCAN3 signal line function value: MCAN3_CANTX3 */
#define PIO_PD14A_MCAN3_CANTX3                     (_UINT32_(1) << 14) /**< MCAN3 signal: MCAN3_CANTX3 */
/* ========== PIO definition for MCAN4 peripheral ========== */
#define PIN_PD17A_MCAN4_CANRX4                     _UINT32_(113) /**< MCAN4 signal: MCAN4_CANRX4 on PD17 mux A */
#define MUX_PD17A_MCAN4_CANRX4                     _UINT32_(0)  /**< MCAN4 signal line function value: MCAN4_CANRX4 */
#define PIO_PD17A_MCAN4_CANRX4                     (_UINT32_(1) << 17) /**< MCAN4 signal: MCAN4_CANRX4 */
#define PIN_PD16A_MCAN4_CANTX4                     _UINT32_(112) /**< MCAN4 signal: MCAN4_CANTX4 on PD16 mux A */
#define MUX_PD16A_MCAN4_CANTX4                     _UINT32_(0)  /**< MCAN4 signal line function value: MCAN4_CANTX4 */
#define PIO_PD16A_MCAN4_CANTX4                     (_UINT32_(1) << 16) /**< MCAN4 signal: MCAN4_CANTX4 */
/* ========== PIO definition for PDMC0 peripheral ========== */
#define PIN_PA23C_PDMC0_CLK                        _UINT32_(23) /**< PDMC0 signal: PDMC0_CLK on PA23 mux C */
#define MUX_PA23C_PDMC0_CLK                        _UINT32_(2)  /**< PDMC0 signal line function value: PDMC0_CLK */
#define PIO_PA23C_PDMC0_CLK                        (_UINT32_(1) << 23) /**< PDMC0 signal: PDMC0_CLK */
#define PIN_PC9B_PDMC0_CLK                         _UINT32_(73) /**< PDMC0 signal: PDMC0_CLK on PC9 mux B */
#define MUX_PC9B_PDMC0_CLK                         _UINT32_(1)  /**< PDMC0 signal line function value: PDMC0_CLK */
#define PIO_PC9B_PDMC0_CLK                         (_UINT32_(1) << 9) /**< PDMC0 signal: PDMC0_CLK */
#define PIN_PD25E_PDMC0_CLK                        _UINT32_(121) /**< PDMC0 signal: PDMC0_CLK on PD25 mux E */
#define MUX_PD25E_PDMC0_CLK                        _UINT32_(4)  /**< PDMC0 signal line function value: PDMC0_CLK */
#define PIO_PD25E_PDMC0_CLK                        (_UINT32_(1) << 25) /**< PDMC0 signal: PDMC0_CLK */
#define PIN_PE2D_PDMC0_CLK                         _UINT32_(130) /**< PDMC0 signal: PDMC0_CLK on PE2 mux D */
#define MUX_PE2D_PDMC0_CLK                         _UINT32_(3)  /**< PDMC0 signal line function value: PDMC0_CLK */
#define PIO_PE2D_PDMC0_CLK                         (_UINT32_(1) << 2) /**< PDMC0 signal: PDMC0_CLK */
#define PIN_PA24C_PDMC0_DS0                        _UINT32_(24) /**< PDMC0 signal: PDMC0_DS0 on PA24 mux C */
#define MUX_PA24C_PDMC0_DS0                        _UINT32_(2)  /**< PDMC0 signal line function value: PDMC0_DS0 */
#define PIO_PA24C_PDMC0_DS0                        (_UINT32_(1) << 24) /**< PDMC0 signal: PDMC0_DS0 */
#define PIN_PC10B_PDMC0_DS0                        _UINT32_(74) /**< PDMC0 signal: PDMC0_DS0 on PC10 mux B */
#define MUX_PC10B_PDMC0_DS0                        _UINT32_(1)  /**< PDMC0 signal line function value: PDMC0_DS0 */
#define PIO_PC10B_PDMC0_DS0                        (_UINT32_(1) << 10) /**< PDMC0 signal: PDMC0_DS0 */
#define PIN_PD26E_PDMC0_DS0                        _UINT32_(122) /**< PDMC0 signal: PDMC0_DS0 on PD26 mux E */
#define MUX_PD26E_PDMC0_DS0                        _UINT32_(4)  /**< PDMC0 signal line function value: PDMC0_DS0 */
#define PIO_PD26E_PDMC0_DS0                        (_UINT32_(1) << 26) /**< PDMC0 signal: PDMC0_DS0 */
#define PIN_PE3D_PDMC0_DS0                         _UINT32_(131) /**< PDMC0 signal: PDMC0_DS0 on PE3 mux D */
#define MUX_PE3D_PDMC0_DS0                         _UINT32_(3)  /**< PDMC0 signal line function value: PDMC0_DS0 */
#define PIO_PE3D_PDMC0_DS0                         (_UINT32_(1) << 3) /**< PDMC0 signal: PDMC0_DS0 */
#define PIN_PA22C_PDMC0_DS1                        _UINT32_(22) /**< PDMC0 signal: PDMC0_DS1 on PA22 mux C */
#define MUX_PA22C_PDMC0_DS1                        _UINT32_(2)  /**< PDMC0 signal line function value: PDMC0_DS1 */
#define PIO_PA22C_PDMC0_DS1                        (_UINT32_(1) << 22) /**< PDMC0 signal: PDMC0_DS1 */
#define PIN_PC8B_PDMC0_DS1                         _UINT32_(72) /**< PDMC0 signal: PDMC0_DS1 on PC8 mux B */
#define MUX_PC8B_PDMC0_DS1                         _UINT32_(1)  /**< PDMC0 signal line function value: PDMC0_DS1 */
#define PIO_PC8B_PDMC0_DS1                         (_UINT32_(1) << 8) /**< PDMC0 signal: PDMC0_DS1 */
#define PIN_PD24E_PDMC0_DS1                        _UINT32_(120) /**< PDMC0 signal: PDMC0_DS1 on PD24 mux E */
#define MUX_PD24E_PDMC0_DS1                        _UINT32_(4)  /**< PDMC0 signal line function value: PDMC0_DS1 */
#define PIO_PD24E_PDMC0_DS1                        (_UINT32_(1) << 24) /**< PDMC0 signal: PDMC0_DS1 */
#define PIN_PE1D_PDMC0_DS1                         _UINT32_(129) /**< PDMC0 signal: PDMC0_DS1 on PE1 mux D */
#define MUX_PE1D_PDMC0_DS1                         _UINT32_(3)  /**< PDMC0 signal line function value: PDMC0_DS1 */
#define PIO_PE1D_PDMC0_DS1                         (_UINT32_(1) << 1) /**< PDMC0 signal: PDMC0_DS1 */
/* ========== PIO definition for PDMC1 peripheral ========== */
#define PIN_PC12B_PDMC1_CLK                        _UINT32_(76) /**< PDMC1 signal: PDMC1_CLK on PC12 mux B */
#define MUX_PC12B_PDMC1_CLK                        _UINT32_(1)  /**< PDMC1 signal line function value: PDMC1_CLK */
#define PIO_PC12B_PDMC1_CLK                        (_UINT32_(1) << 12) /**< PDMC1 signal: PDMC1_CLK */
#define PIN_PC16B_PDMC1_CLK                        _UINT32_(80) /**< PDMC1 signal: PDMC1_CLK on PC16 mux B */
#define MUX_PC16B_PDMC1_CLK                        _UINT32_(1)  /**< PDMC1 signal line function value: PDMC1_CLK */
#define PIO_PC16B_PDMC1_CLK                        (_UINT32_(1) << 16) /**< PDMC1 signal: PDMC1_CLK */
#define PIN_PE0D_PDMC1_CLK                         _UINT32_(128) /**< PDMC1 signal: PDMC1_CLK on PE0 mux D */
#define MUX_PE0D_PDMC1_CLK                         _UINT32_(3)  /**< PDMC1 signal line function value: PDMC1_CLK */
#define PIO_PE0D_PDMC1_CLK                         (_UINT32_(1) << 0) /**< PDMC1 signal: PDMC1_CLK */
#define PIN_PC11B_PDMC1_DS0                        _UINT32_(75) /**< PDMC1 signal: PDMC1_DS0 on PC11 mux B */
#define MUX_PC11B_PDMC1_DS0                        _UINT32_(1)  /**< PDMC1 signal line function value: PDMC1_DS0 */
#define PIO_PC11B_PDMC1_DS0                        (_UINT32_(1) << 11) /**< PDMC1 signal: PDMC1_DS0 */
#define PIN_PC17B_PDMC1_DS0                        _UINT32_(81) /**< PDMC1 signal: PDMC1_DS0 on PC17 mux B */
#define MUX_PC17B_PDMC1_DS0                        _UINT32_(1)  /**< PDMC1 signal line function value: PDMC1_DS0 */
#define PIO_PC17B_PDMC1_DS0                        (_UINT32_(1) << 17) /**< PDMC1 signal: PDMC1_DS0 */
#define PIN_PD31D_PDMC1_DS0                        _UINT32_(127) /**< PDMC1 signal: PDMC1_DS0 on PD31 mux D */
#define MUX_PD31D_PDMC1_DS0                        _UINT32_(3)  /**< PDMC1 signal line function value: PDMC1_DS0 */
#define PIO_PD31D_PDMC1_DS0                        (_UINT32_(1) << 31) /**< PDMC1 signal: PDMC1_DS0 */
#define PIN_PC13B_PDMC1_DS1                        _UINT32_(77) /**< PDMC1 signal: PDMC1_DS1 on PC13 mux B */
#define MUX_PC13B_PDMC1_DS1                        _UINT32_(1)  /**< PDMC1 signal line function value: PDMC1_DS1 */
#define PIO_PC13B_PDMC1_DS1                        (_UINT32_(1) << 13) /**< PDMC1 signal: PDMC1_DS1 */
#define PIN_PC15B_PDMC1_DS1                        _UINT32_(79) /**< PDMC1 signal: PDMC1_DS1 on PC15 mux B */
#define MUX_PC15B_PDMC1_DS1                        _UINT32_(1)  /**< PDMC1 signal line function value: PDMC1_DS1 */
#define PIO_PC15B_PDMC1_DS1                        (_UINT32_(1) << 15) /**< PDMC1 signal: PDMC1_DS1 */
#define PIN_PD30D_PDMC1_DS1                        _UINT32_(126) /**< PDMC1 signal: PDMC1_DS1 on PD30 mux D */
#define MUX_PD30D_PDMC1_DS1                        _UINT32_(3)  /**< PDMC1 signal line function value: PDMC1_DS1 */
#define PIO_PD30D_PDMC1_DS1                        (_UINT32_(1) << 30) /**< PDMC1 signal: PDMC1_DS1 */
/* ========== PIO definition for PMC peripheral ========== */
#define PIN_PA12D_PMC_PCK0                         _UINT32_(12) /**< PMC signal: PMC_PCK0 on PA12 mux D */
#define MUX_PA12D_PMC_PCK0                         _UINT32_(3)  /**< PMC signal line function value: PMC_PCK0 */
#define PIO_PA12D_PMC_PCK0                         (_UINT32_(1) << 12) /**< PMC signal: PMC_PCK0 */
#define PIN_PC31C_PMC_PCK0                         _UINT32_(95) /**< PMC signal: PMC_PCK0 on PC31 mux C */
#define MUX_PC31C_PMC_PCK0                         _UINT32_(2)  /**< PMC signal line function value: PMC_PCK0 */
#define PIO_PC31C_PMC_PCK0                         (_UINT32_(1) << 31) /**< PMC signal: PMC_PCK0 */
#define PIN_PA13D_PMC_PCK1                         _UINT32_(13) /**< PMC signal: PMC_PCK1 on PA13 mux D */
#define MUX_PA13D_PMC_PCK1                         _UINT32_(3)  /**< PMC signal line function value: PMC_PCK1 */
#define PIO_PA13D_PMC_PCK1                         (_UINT32_(1) << 13) /**< PMC signal: PMC_PCK1 */
#define PIN_PD0C_PMC_PCK1                          _UINT32_(96) /**< PMC signal: PMC_PCK1 on PD0 mux C */
#define MUX_PD0C_PMC_PCK1                          _UINT32_(2)  /**< PMC signal line function value: PMC_PCK1 */
#define PIO_PD0C_PMC_PCK1                          (_UINT32_(1) << 0) /**< PMC signal: PMC_PCK1 */
#define PIN_PA16D_PMC_PCK2                         _UINT32_(16) /**< PMC signal: PMC_PCK2 on PA16 mux D */
#define MUX_PA16D_PMC_PCK2                         _UINT32_(3)  /**< PMC signal line function value: PMC_PCK2 */
#define PIO_PA16D_PMC_PCK2                         (_UINT32_(1) << 16) /**< PMC signal: PMC_PCK2 */
#define PIN_PD12D_PMC_PCK2                         _UINT32_(108) /**< PMC signal: PMC_PCK2 on PD12 mux D */
#define MUX_PD12D_PMC_PCK2                         _UINT32_(3)  /**< PMC signal line function value: PMC_PCK2 */
#define PIO_PD12D_PMC_PCK2                         (_UINT32_(1) << 12) /**< PMC signal: PMC_PCK2 */
#define PIN_PD19D_PMC_PCK2                         _UINT32_(115) /**< PMC signal: PMC_PCK2 on PD19 mux D */
#define MUX_PD19D_PMC_PCK2                         _UINT32_(3)  /**< PMC signal line function value: PMC_PCK2 */
#define PIO_PD19D_PMC_PCK2                         (_UINT32_(1) << 19) /**< PMC signal: PMC_PCK2 */
#define PIN_PB8B_PMC_PCK3                          _UINT32_(40) /**< PMC signal: PMC_PCK3 on PB8 mux B */
#define MUX_PB8B_PMC_PCK3                          _UINT32_(1)  /**< PMC signal line function value: PMC_PCK3 */
#define PIO_PB8B_PMC_PCK3                          (_UINT32_(1) << 8) /**< PMC signal: PMC_PCK3 */
#define PIN_PD13D_PMC_PCK3                         _UINT32_(109) /**< PMC signal: PMC_PCK3 on PD13 mux D */
#define MUX_PD13D_PMC_PCK3                         _UINT32_(3)  /**< PMC signal line function value: PMC_PCK3 */
#define PIO_PD13D_PMC_PCK3                         (_UINT32_(1) << 13) /**< PMC signal: PMC_PCK3 */
#define PIN_PD20D_PMC_PCK3                         _UINT32_(116) /**< PMC signal: PMC_PCK3 on PD20 mux D */
#define MUX_PD20D_PMC_PCK3                         _UINT32_(3)  /**< PMC signal line function value: PMC_PCK3 */
#define PIO_PD20D_PMC_PCK3                         (_UINT32_(1) << 20) /**< PMC signal: PMC_PCK3 */
#define PIN_PE12B_PMC_PCK3                         _UINT32_(140) /**< PMC signal: PMC_PCK3 on PE12 mux B */
#define MUX_PE12B_PMC_PCK3                         _UINT32_(1)  /**< PMC signal line function value: PMC_PCK3 */
#define PIO_PE12B_PMC_PCK3                         (_UINT32_(1) << 12) /**< PMC signal: PMC_PCK3 */
#define PIN_PB19C_PMC_PCK4                         _UINT32_(51) /**< PMC signal: PMC_PCK4 on PB19 mux C */
#define MUX_PB19C_PMC_PCK4                         _UINT32_(2)  /**< PMC signal line function value: PMC_PCK4 */
#define PIO_PB19C_PMC_PCK4                         (_UINT32_(1) << 19) /**< PMC signal: PMC_PCK4 */
#define PIN_PD18D_PMC_PCK4                         _UINT32_(114) /**< PMC signal: PMC_PCK4 on PD18 mux D */
#define MUX_PD18D_PMC_PCK4                         _UINT32_(3)  /**< PMC signal line function value: PMC_PCK4 */
#define PIO_PD18D_PMC_PCK4                         (_UINT32_(1) << 18) /**< PMC signal: PMC_PCK4 */
#define PIN_PE13B_PMC_PCK4                         _UINT32_(141) /**< PMC signal: PMC_PCK4 on PE13 mux B */
#define MUX_PE13B_PMC_PCK4                         _UINT32_(1)  /**< PMC signal line function value: PMC_PCK4 */
#define PIO_PE13B_PMC_PCK4                         (_UINT32_(1) << 13) /**< PMC signal: PMC_PCK4 */
#define PIN_PC1A_PMC_PCK5                          _UINT32_(65) /**< PMC signal: PMC_PCK5 on PC1 mux A */
#define MUX_PC1A_PMC_PCK5                          _UINT32_(0)  /**< PMC signal line function value: PMC_PCK5 */
#define PIO_PC1A_PMC_PCK5                          (_UINT32_(1) << 1) /**< PMC signal: PMC_PCK5 */
#define PIN_PC0A_PMC_PCK6                          _UINT32_(64) /**< PMC signal: PMC_PCK6 on PC0 mux A */
#define MUX_PC0A_PMC_PCK6                          _UINT32_(0)  /**< PMC signal line function value: PMC_PCK6 */
#define PIO_PC0A_PMC_PCK6                          (_UINT32_(1) << 0) /**< PMC signal: PMC_PCK6 */
#define PIN_PC19B_PMC_PCK6                         _UINT32_(83) /**< PMC signal: PMC_PCK6 on PC19 mux B */
#define MUX_PC19B_PMC_PCK6                         _UINT32_(1)  /**< PMC signal line function value: PMC_PCK6 */
#define PIO_PC19B_PMC_PCK6                         (_UINT32_(1) << 19) /**< PMC signal: PMC_PCK6 */
#define PIN_PB31A_PMC_PCK7                         _UINT32_(63) /**< PMC signal: PMC_PCK7 on PB31 mux A */
#define MUX_PB31A_PMC_PCK7                         _UINT32_(0)  /**< PMC signal line function value: PMC_PCK7 */
#define PIO_PB31A_PMC_PCK7                         (_UINT32_(1) << 31) /**< PMC signal: PMC_PCK7 */
#define PIN_PC21B_PMC_PCK7                         _UINT32_(85) /**< PMC signal: PMC_PCK7 on PC21 mux B */
#define MUX_PC21B_PMC_PCK7                         _UINT32_(1)  /**< PMC signal line function value: PMC_PCK7 */
#define PIO_PC21B_PMC_PCK7                         (_UINT32_(1) << 21) /**< PMC signal: PMC_PCK7 */
/* ========== PIO definition for PWM peripheral ========== */
#define PIN_PB9E_PWM_PWMEXTRG0                     _UINT32_(41) /**< PWM signal: PWM_PWMEXTRG0 on PB9 mux E */
#define MUX_PB9E_PWM_PWMEXTRG0                     _UINT32_(4)  /**< PWM signal line function value: PWM_PWMEXTRG0 */
#define PIO_PB9E_PWM_PWMEXTRG0                     (_UINT32_(1) << 9) /**< PWM signal: PWM_PWMEXTRG0 */
#define PIN_PE12C_PWM_PWMEXTRG0                    _UINT32_(140) /**< PWM signal: PWM_PWMEXTRG0 on PE12 mux C */
#define MUX_PE12C_PWM_PWMEXTRG0                    _UINT32_(2)  /**< PWM signal line function value: PWM_PWMEXTRG0 */
#define PIO_PE12C_PWM_PWMEXTRG0                    (_UINT32_(1) << 12) /**< PWM signal: PWM_PWMEXTRG0 */
#define PIN_PB10E_PWM_PWMEXTRG1                    _UINT32_(42) /**< PWM signal: PWM_PWMEXTRG1 on PB10 mux E */
#define MUX_PB10E_PWM_PWMEXTRG1                    _UINT32_(4)  /**< PWM signal line function value: PWM_PWMEXTRG1 */
#define PIO_PB10E_PWM_PWMEXTRG1                    (_UINT32_(1) << 10) /**< PWM signal: PWM_PWMEXTRG1 */
#define PIN_PE13C_PWM_PWMEXTRG1                    _UINT32_(141) /**< PWM signal: PWM_PWMEXTRG1 on PE13 mux C */
#define MUX_PE13C_PWM_PWMEXTRG1                    _UINT32_(2)  /**< PWM signal line function value: PWM_PWMEXTRG1 */
#define PIO_PE13C_PWM_PWMEXTRG1                    (_UINT32_(1) << 13) /**< PWM signal: PWM_PWMEXTRG1 */
#define PIN_PB13E_PWM_PWMFI0                       _UINT32_(45) /**< PWM signal: PWM_PWMFI0 on PB13 mux E */
#define MUX_PB13E_PWM_PWMFI0                       _UINT32_(4)  /**< PWM signal line function value: PWM_PWMFI0 */
#define PIO_PB13E_PWM_PWMFI0                       (_UINT32_(1) << 13) /**< PWM signal: PWM_PWMFI0 */
#define PIN_PB12E_PWM_PWMFI1                       _UINT32_(44) /**< PWM signal: PWM_PWMFI1 on PB12 mux E */
#define MUX_PB12E_PWM_PWMFI1                       _UINT32_(4)  /**< PWM signal line function value: PWM_PWMFI1 */
#define PIO_PB12E_PWM_PWMFI1                       (_UINT32_(1) << 12) /**< PWM signal: PWM_PWMFI1 */
#define PIN_PA20D_PWM_PWMH0                        _UINT32_(20) /**< PWM signal: PWM_PWMH0 on PA20 mux D */
#define MUX_PA20D_PWM_PWMH0                        _UINT32_(3)  /**< PWM signal line function value: PWM_PWMH0 */
#define PIO_PA20D_PWM_PWMH0                        (_UINT32_(1) << 20) /**< PWM signal: PWM_PWMH0 */
#define PIN_PB16E_PWM_PWMH0                        _UINT32_(48) /**< PWM signal: PWM_PWMH0 on PB16 mux E */
#define MUX_PB16E_PWM_PWMH0                        _UINT32_(4)  /**< PWM signal line function value: PWM_PWMH0 */
#define PIO_PB16E_PWM_PWMH0                        (_UINT32_(1) << 16) /**< PWM signal: PWM_PWMH0 */
#define PIN_PE5C_PWM_PWMH0                         _UINT32_(133) /**< PWM signal: PWM_PWMH0 on PE5 mux C */
#define MUX_PE5C_PWM_PWMH0                         _UINT32_(2)  /**< PWM signal line function value: PWM_PWMH0 */
#define PIO_PE5C_PWM_PWMH0                         (_UINT32_(1) << 5) /**< PWM signal: PWM_PWMH0 */
#define PIN_PA22D_PWM_PWMH1                        _UINT32_(22) /**< PWM signal: PWM_PWMH1 on PA22 mux D */
#define MUX_PA22D_PWM_PWMH1                        _UINT32_(3)  /**< PWM signal line function value: PWM_PWMH1 */
#define PIO_PA22D_PWM_PWMH1                        (_UINT32_(1) << 22) /**< PWM signal: PWM_PWMH1 */
#define PIN_PB18E_PWM_PWMH1                        _UINT32_(50) /**< PWM signal: PWM_PWMH1 on PB18 mux E */
#define MUX_PB18E_PWM_PWMH1                        _UINT32_(4)  /**< PWM signal line function value: PWM_PWMH1 */
#define PIO_PB18E_PWM_PWMH1                        (_UINT32_(1) << 18) /**< PWM signal: PWM_PWMH1 */
#define PIN_PE7C_PWM_PWMH1                         _UINT32_(135) /**< PWM signal: PWM_PWMH1 on PE7 mux C */
#define MUX_PE7C_PWM_PWMH1                         _UINT32_(2)  /**< PWM signal line function value: PWM_PWMH1 */
#define PIO_PE7C_PWM_PWMH1                         (_UINT32_(1) << 7) /**< PWM signal: PWM_PWMH1 */
#define PIN_PA24D_PWM_PWMH2                        _UINT32_(24) /**< PWM signal: PWM_PWMH2 on PA24 mux D */
#define MUX_PA24D_PWM_PWMH2                        _UINT32_(3)  /**< PWM signal line function value: PWM_PWMH2 */
#define PIO_PA24D_PWM_PWMH2                        (_UINT32_(1) << 24) /**< PWM signal: PWM_PWMH2 */
#define PIN_PB20E_PWM_PWMH2                        _UINT32_(52) /**< PWM signal: PWM_PWMH2 on PB20 mux E */
#define MUX_PB20E_PWM_PWMH2                        _UINT32_(4)  /**< PWM signal line function value: PWM_PWMH2 */
#define PIO_PB20E_PWM_PWMH2                        (_UINT32_(1) << 20) /**< PWM signal: PWM_PWMH2 */
#define PIN_PE9C_PWM_PWMH2                         _UINT32_(137) /**< PWM signal: PWM_PWMH2 on PE9 mux C */
#define MUX_PE9C_PWM_PWMH2                         _UINT32_(2)  /**< PWM signal line function value: PWM_PWMH2 */
#define PIO_PE9C_PWM_PWMH2                         (_UINT32_(1) << 9) /**< PWM signal: PWM_PWMH2 */
#define PIN_PB14E_PWM_PWMH3                        _UINT32_(46) /**< PWM signal: PWM_PWMH3 on PB14 mux E */
#define MUX_PB14E_PWM_PWMH3                        _UINT32_(4)  /**< PWM signal line function value: PWM_PWMH3 */
#define PIO_PB14E_PWM_PWMH3                        (_UINT32_(1) << 14) /**< PWM signal: PWM_PWMH3 */
#define PIN_PE11C_PWM_PWMH3                        _UINT32_(139) /**< PWM signal: PWM_PWMH3 on PE11 mux C */
#define MUX_PE11C_PWM_PWMH3                        _UINT32_(2)  /**< PWM signal line function value: PWM_PWMH3 */
#define PIO_PE11C_PWM_PWMH3                        (_UINT32_(1) << 11) /**< PWM signal: PWM_PWMH3 */
#define PIN_PA19D_PWM_PWML0                        _UINT32_(19) /**< PWM signal: PWM_PWML0 on PA19 mux D */
#define MUX_PA19D_PWM_PWML0                        _UINT32_(3)  /**< PWM signal line function value: PWM_PWML0 */
#define PIO_PA19D_PWM_PWML0                        (_UINT32_(1) << 19) /**< PWM signal: PWM_PWML0 */
#define PIN_PB15E_PWM_PWML0                        _UINT32_(47) /**< PWM signal: PWM_PWML0 on PB15 mux E */
#define MUX_PB15E_PWM_PWML0                        _UINT32_(4)  /**< PWM signal line function value: PWM_PWML0 */
#define PIO_PB15E_PWM_PWML0                        (_UINT32_(1) << 15) /**< PWM signal: PWM_PWML0 */
#define PIN_PE4C_PWM_PWML0                         _UINT32_(132) /**< PWM signal: PWM_PWML0 on PE4 mux C */
#define MUX_PE4C_PWM_PWML0                         _UINT32_(2)  /**< PWM signal line function value: PWM_PWML0 */
#define PIO_PE4C_PWM_PWML0                         (_UINT32_(1) << 4) /**< PWM signal: PWM_PWML0 */
#define PIN_PA21D_PWM_PWML1                        _UINT32_(21) /**< PWM signal: PWM_PWML1 on PA21 mux D */
#define MUX_PA21D_PWM_PWML1                        _UINT32_(3)  /**< PWM signal line function value: PWM_PWML1 */
#define PIO_PA21D_PWM_PWML1                        (_UINT32_(1) << 21) /**< PWM signal: PWM_PWML1 */
#define PIN_PB17E_PWM_PWML1                        _UINT32_(49) /**< PWM signal: PWM_PWML1 on PB17 mux E */
#define MUX_PB17E_PWM_PWML1                        _UINT32_(4)  /**< PWM signal line function value: PWM_PWML1 */
#define PIO_PB17E_PWM_PWML1                        (_UINT32_(1) << 17) /**< PWM signal: PWM_PWML1 */
#define PIN_PE6C_PWM_PWML1                         _UINT32_(134) /**< PWM signal: PWM_PWML1 on PE6 mux C */
#define MUX_PE6C_PWM_PWML1                         _UINT32_(2)  /**< PWM signal line function value: PWM_PWML1 */
#define PIO_PE6C_PWM_PWML1                         (_UINT32_(1) << 6) /**< PWM signal: PWM_PWML1 */
#define PIN_PA23D_PWM_PWML2                        _UINT32_(23) /**< PWM signal: PWM_PWML2 on PA23 mux D */
#define MUX_PA23D_PWM_PWML2                        _UINT32_(3)  /**< PWM signal line function value: PWM_PWML2 */
#define PIO_PA23D_PWM_PWML2                        (_UINT32_(1) << 23) /**< PWM signal: PWM_PWML2 */
#define PIN_PB19E_PWM_PWML2                        _UINT32_(51) /**< PWM signal: PWM_PWML2 on PB19 mux E */
#define MUX_PB19E_PWM_PWML2                        _UINT32_(4)  /**< PWM signal line function value: PWM_PWML2 */
#define PIO_PB19E_PWM_PWML2                        (_UINT32_(1) << 19) /**< PWM signal: PWM_PWML2 */
#define PIN_PE8C_PWM_PWML2                         _UINT32_(136) /**< PWM signal: PWM_PWML2 on PE8 mux C */
#define MUX_PE8C_PWM_PWML2                         _UINT32_(2)  /**< PWM signal line function value: PWM_PWML2 */
#define PIO_PE8C_PWM_PWML2                         (_UINT32_(1) << 8) /**< PWM signal: PWM_PWML2 */
#define PIN_PB11E_PWM_PWML3                        _UINT32_(43) /**< PWM signal: PWM_PWML3 on PB11 mux E */
#define MUX_PB11E_PWM_PWML3                        _UINT32_(4)  /**< PWM signal line function value: PWM_PWML3 */
#define PIO_PB11E_PWM_PWML3                        (_UINT32_(1) << 11) /**< PWM signal: PWM_PWML3 */
#define PIN_PE10C_PWM_PWML3                        _UINT32_(138) /**< PWM signal: PWM_PWML3 on PE10 mux C */
#define MUX_PE10C_PWM_PWML3                        _UINT32_(2)  /**< PWM signal line function value: PWM_PWML3 */
#define PIO_PE10C_PWM_PWML3                        (_UINT32_(1) << 10) /**< PWM signal: PWM_PWML3 */
/* ========== PIO definition for QSPI0 peripheral ========== */
#define PIN_PB12A_QSPI0_CS                         _UINT32_(44) /**< QSPI0 signal: QSPI0_CS on PB12 mux A */
#define MUX_PB12A_QSPI0_CS                         _UINT32_(0)  /**< QSPI0 signal line function value: QSPI0_CS */
#define PIO_PB12A_QSPI0_CS                         (_UINT32_(1) << 12) /**< QSPI0 signal: QSPI0_CS */
#define PIN_PB19A_QSPI0_DQS                        _UINT32_(51) /**< QSPI0 signal: QSPI0_DQS on PB19 mux A */
#define MUX_PB19A_QSPI0_DQS                        _UINT32_(0)  /**< QSPI0 signal line function value: QSPI0_DQS */
#define PIO_PB19A_QSPI0_DQS                        (_UINT32_(1) << 19) /**< QSPI0 signal: QSPI0_DQS */
#define PIN_PB20A_QSPI0_INT                        _UINT32_(52) /**< QSPI0 signal: QSPI0_INT on PB20 mux A */
#define MUX_PB20A_QSPI0_INT                        _UINT32_(0)  /**< QSPI0 signal line function value: QSPI0_INT */
#define PIO_PB20A_QSPI0_INT                        (_UINT32_(1) << 20) /**< QSPI0 signal: QSPI0_INT */
#define PIN_PB11A_QSPI0_IO0                        _UINT32_(43) /**< QSPI0 signal: QSPI0_IO0 on PB11 mux A */
#define MUX_PB11A_QSPI0_IO0                        _UINT32_(0)  /**< QSPI0 signal line function value: QSPI0_IO0 */
#define PIO_PB11A_QSPI0_IO0                        (_UINT32_(1) << 11) /**< QSPI0 signal: QSPI0_IO0 */
#define PIN_PB10A_QSPI0_IO1                        _UINT32_(42) /**< QSPI0 signal: QSPI0_IO1 on PB10 mux A */
#define MUX_PB10A_QSPI0_IO1                        _UINT32_(0)  /**< QSPI0 signal line function value: QSPI0_IO1 */
#define PIO_PB10A_QSPI0_IO1                        (_UINT32_(1) << 10) /**< QSPI0 signal: QSPI0_IO1 */
#define PIN_PB9A_QSPI0_IO2                         _UINT32_(41) /**< QSPI0 signal: QSPI0_IO2 on PB9 mux A */
#define MUX_PB9A_QSPI0_IO2                         _UINT32_(0)  /**< QSPI0 signal line function value: QSPI0_IO2 */
#define PIO_PB9A_QSPI0_IO2                         (_UINT32_(1) << 9) /**< QSPI0 signal: QSPI0_IO2 */
#define PIN_PB8A_QSPI0_IO3                         _UINT32_(40) /**< QSPI0 signal: QSPI0_IO3 on PB8 mux A */
#define MUX_PB8A_QSPI0_IO3                         _UINT32_(0)  /**< QSPI0 signal line function value: QSPI0_IO3 */
#define PIO_PB8A_QSPI0_IO3                         (_UINT32_(1) << 8) /**< QSPI0 signal: QSPI0_IO3 */
#define PIN_PB15A_QSPI0_IO4                        _UINT32_(47) /**< QSPI0 signal: QSPI0_IO4 on PB15 mux A */
#define MUX_PB15A_QSPI0_IO4                        _UINT32_(0)  /**< QSPI0 signal line function value: QSPI0_IO4 */
#define PIO_PB15A_QSPI0_IO4                        (_UINT32_(1) << 15) /**< QSPI0 signal: QSPI0_IO4 */
#define PIN_PB16A_QSPI0_IO5                        _UINT32_(48) /**< QSPI0 signal: QSPI0_IO5 on PB16 mux A */
#define MUX_PB16A_QSPI0_IO5                        _UINT32_(0)  /**< QSPI0 signal line function value: QSPI0_IO5 */
#define PIO_PB16A_QSPI0_IO5                        (_UINT32_(1) << 16) /**< QSPI0 signal: QSPI0_IO5 */
#define PIN_PB17A_QSPI0_IO6                        _UINT32_(49) /**< QSPI0 signal: QSPI0_IO6 on PB17 mux A */
#define MUX_PB17A_QSPI0_IO6                        _UINT32_(0)  /**< QSPI0 signal line function value: QSPI0_IO6 */
#define PIO_PB17A_QSPI0_IO6                        (_UINT32_(1) << 17) /**< QSPI0 signal: QSPI0_IO6 */
#define PIN_PB18A_QSPI0_IO7                        _UINT32_(50) /**< QSPI0 signal: QSPI0_IO7 on PB18 mux A */
#define MUX_PB18A_QSPI0_IO7                        _UINT32_(0)  /**< QSPI0 signal line function value: QSPI0_IO7 */
#define PIO_PB18A_QSPI0_IO7                        (_UINT32_(1) << 18) /**< QSPI0 signal: QSPI0_IO7 */
#define PIN_PB13A_QSPI0_SCK                        _UINT32_(45) /**< QSPI0 signal: QSPI0_SCK on PB13 mux A */
#define MUX_PB13A_QSPI0_SCK                        _UINT32_(0)  /**< QSPI0 signal line function value: QSPI0_SCK */
#define PIO_PB13A_QSPI0_SCK                        (_UINT32_(1) << 13) /**< QSPI0 signal: QSPI0_SCK */
#define PIN_PB14A_QSPI0_SCKN                       _UINT32_(46) /**< QSPI0 signal: QSPI0_SCKN on PB14 mux A */
#define MUX_PB14A_QSPI0_SCKN                       _UINT32_(0)  /**< QSPI0 signal line function value: QSPI0_SCKN */
#define PIO_PB14A_QSPI0_SCKN                       (_UINT32_(1) << 14) /**< QSPI0 signal: QSPI0_SCKN */
/* ========== PIO definition for QSPI1 peripheral ========== */
#define PIN_PB20B_QSPI1_CS                         _UINT32_(52) /**< QSPI1 signal: QSPI1_CS on PB20 mux B */
#define MUX_PB20B_QSPI1_CS                         _UINT32_(1)  /**< QSPI1 signal line function value: QSPI1_CS */
#define PIO_PB20B_QSPI1_CS                         (_UINT32_(1) << 20) /**< QSPI1 signal: QSPI1_CS */
#define PIN_PB15B_QSPI1_IO0                        _UINT32_(47) /**< QSPI1 signal: QSPI1_IO0 on PB15 mux B */
#define MUX_PB15B_QSPI1_IO0                        _UINT32_(1)  /**< QSPI1 signal line function value: QSPI1_IO0 */
#define PIO_PB15B_QSPI1_IO0                        (_UINT32_(1) << 15) /**< QSPI1 signal: QSPI1_IO0 */
#define PIN_PB16B_QSPI1_IO1                        _UINT32_(48) /**< QSPI1 signal: QSPI1_IO1 on PB16 mux B */
#define MUX_PB16B_QSPI1_IO1                        _UINT32_(1)  /**< QSPI1 signal line function value: QSPI1_IO1 */
#define PIO_PB16B_QSPI1_IO1                        (_UINT32_(1) << 16) /**< QSPI1 signal: QSPI1_IO1 */
#define PIN_PB17B_QSPI1_IO2                        _UINT32_(49) /**< QSPI1 signal: QSPI1_IO2 on PB17 mux B */
#define MUX_PB17B_QSPI1_IO2                        _UINT32_(1)  /**< QSPI1 signal line function value: QSPI1_IO2 */
#define PIO_PB17B_QSPI1_IO2                        (_UINT32_(1) << 17) /**< QSPI1 signal: QSPI1_IO2 */
#define PIN_PB18B_QSPI1_IO3                        _UINT32_(50) /**< QSPI1 signal: QSPI1_IO3 on PB18 mux B */
#define MUX_PB18B_QSPI1_IO3                        _UINT32_(1)  /**< QSPI1 signal line function value: QSPI1_IO3 */
#define PIO_PB18B_QSPI1_IO3                        (_UINT32_(1) << 18) /**< QSPI1 signal: QSPI1_IO3 */
#define PIN_PB14B_QSPI1_SCK                        _UINT32_(46) /**< QSPI1 signal: QSPI1_SCK on PB14 mux B */
#define MUX_PB14B_QSPI1_SCK                        _UINT32_(1)  /**< QSPI1 signal line function value: QSPI1_SCK */
#define PIO_PB14B_QSPI1_SCK                        (_UINT32_(1) << 14) /**< QSPI1 signal: QSPI1_SCK */
/* ========== PIO definition for SDMMC0 peripheral ========== */
#define PIN_PA15B_SDMMC0_1V8SEL                    _UINT32_(15) /**< SDMMC0 signal: SDMMC0_1V8SEL on PA15 mux B */
#define MUX_PA15B_SDMMC0_1V8SEL                    _UINT32_(1)  /**< SDMMC0 signal line function value: SDMMC0_1V8SEL */
#define PIO_PA15B_SDMMC0_1V8SEL                    (_UINT32_(1) << 15) /**< SDMMC0 signal: SDMMC0_1V8SEL */
#define PIN_PA16B_SDMMC0_CD                        _UINT32_(16) /**< SDMMC0 signal: SDMMC0_CD on PA16 mux B */
#define MUX_PA16B_SDMMC0_CD                        _UINT32_(1)  /**< SDMMC0 signal line function value: SDMMC0_CD */
#define PIO_PA16B_SDMMC0_CD                        (_UINT32_(1) << 16) /**< SDMMC0 signal: SDMMC0_CD */
#define PIN_PA0A_SDMMC0_CK                         _UINT32_(0)  /**< SDMMC0 signal: SDMMC0_CK on PA0 mux A */
#define MUX_PA0A_SDMMC0_CK                         _UINT32_(0)  /**< SDMMC0 signal line function value: SDMMC0_CK */
#define PIO_PA0A_SDMMC0_CK                         (_UINT32_(1) << 0) /**< SDMMC0 signal: SDMMC0_CK */
#define PIN_PA1A_SDMMC0_CMD                        _UINT32_(1)  /**< SDMMC0 signal: SDMMC0_CMD on PA1 mux A */
#define MUX_PA1A_SDMMC0_CMD                        _UINT32_(0)  /**< SDMMC0 signal line function value: SDMMC0_CMD */
#define PIO_PA1A_SDMMC0_CMD                        (_UINT32_(1) << 1) /**< SDMMC0 signal: SDMMC0_CMD */
#define PIN_PA3A_SDMMC0_DAT0                       _UINT32_(3)  /**< SDMMC0 signal: SDMMC0_DAT0 on PA3 mux A */
#define MUX_PA3A_SDMMC0_DAT0                       _UINT32_(0)  /**< SDMMC0 signal line function value: SDMMC0_DAT0 */
#define PIO_PA3A_SDMMC0_DAT0                       (_UINT32_(1) << 3) /**< SDMMC0 signal: SDMMC0_DAT0 */
#define PIN_PA4A_SDMMC0_DAT1                       _UINT32_(4)  /**< SDMMC0 signal: SDMMC0_DAT1 on PA4 mux A */
#define MUX_PA4A_SDMMC0_DAT1                       _UINT32_(0)  /**< SDMMC0 signal line function value: SDMMC0_DAT1 */
#define PIO_PA4A_SDMMC0_DAT1                       (_UINT32_(1) << 4) /**< SDMMC0 signal: SDMMC0_DAT1 */
#define PIN_PA9A_SDMMC0_DAT2                       _UINT32_(9)  /**< SDMMC0 signal: SDMMC0_DAT2 on PA9 mux A */
#define MUX_PA9A_SDMMC0_DAT2                       _UINT32_(0)  /**< SDMMC0 signal line function value: SDMMC0_DAT2 */
#define PIO_PA9A_SDMMC0_DAT2                       (_UINT32_(1) << 9) /**< SDMMC0 signal: SDMMC0_DAT2 */
#define PIN_PA10A_SDMMC0_DAT3                      _UINT32_(10) /**< SDMMC0 signal: SDMMC0_DAT3 on PA10 mux A */
#define MUX_PA10A_SDMMC0_DAT3                      _UINT32_(0)  /**< SDMMC0 signal line function value: SDMMC0_DAT3 */
#define PIO_PA10A_SDMMC0_DAT3                      (_UINT32_(1) << 10) /**< SDMMC0 signal: SDMMC0_DAT3 */
#define PIN_PA5A_SDMMC0_DAT4                       _UINT32_(5)  /**< SDMMC0 signal: SDMMC0_DAT4 on PA5 mux A */
#define MUX_PA5A_SDMMC0_DAT4                       _UINT32_(0)  /**< SDMMC0 signal line function value: SDMMC0_DAT4 */
#define PIO_PA5A_SDMMC0_DAT4                       (_UINT32_(1) << 5) /**< SDMMC0 signal: SDMMC0_DAT4 */
#define PIN_PA6A_SDMMC0_DAT5                       _UINT32_(6)  /**< SDMMC0 signal: SDMMC0_DAT5 on PA6 mux A */
#define MUX_PA6A_SDMMC0_DAT5                       _UINT32_(0)  /**< SDMMC0 signal line function value: SDMMC0_DAT5 */
#define PIO_PA6A_SDMMC0_DAT5                       (_UINT32_(1) << 6) /**< SDMMC0 signal: SDMMC0_DAT5 */
#define PIN_PA7A_SDMMC0_DAT6                       _UINT32_(7)  /**< SDMMC0 signal: SDMMC0_DAT6 on PA7 mux A */
#define MUX_PA7A_SDMMC0_DAT6                       _UINT32_(0)  /**< SDMMC0 signal line function value: SDMMC0_DAT6 */
#define PIO_PA7A_SDMMC0_DAT6                       (_UINT32_(1) << 7) /**< SDMMC0 signal: SDMMC0_DAT6 */
#define PIN_PA8A_SDMMC0_DAT7                       _UINT32_(8)  /**< SDMMC0 signal: SDMMC0_DAT7 on PA8 mux A */
#define MUX_PA8A_SDMMC0_DAT7                       _UINT32_(0)  /**< SDMMC0 signal line function value: SDMMC0_DAT7 */
#define PIO_PA8A_SDMMC0_DAT7                       (_UINT32_(1) << 8) /**< SDMMC0 signal: SDMMC0_DAT7 */
#define PIN_PA11A_SDMMC0_DS                        _UINT32_(11) /**< SDMMC0 signal: SDMMC0_DS on PA11 mux A */
#define MUX_PA11A_SDMMC0_DS                        _UINT32_(0)  /**< SDMMC0 signal line function value: SDMMC0_DS */
#define PIO_PA11A_SDMMC0_DS                        (_UINT32_(1) << 11) /**< SDMMC0 signal: SDMMC0_DS */
#define PIN_PA2A_SDMMC0_RSTN                       _UINT32_(2)  /**< SDMMC0 signal: SDMMC0_RSTN on PA2 mux A */
#define MUX_PA2A_SDMMC0_RSTN                       _UINT32_(0)  /**< SDMMC0 signal line function value: SDMMC0_RSTN */
#define PIO_PA2A_SDMMC0_RSTN                       (_UINT32_(1) << 2) /**< SDMMC0 signal: SDMMC0_RSTN */
#define PIN_PA14B_SDMMC0_WP                        _UINT32_(14) /**< SDMMC0 signal: SDMMC0_WP on PA14 mux B */
#define MUX_PA14B_SDMMC0_WP                        _UINT32_(1)  /**< SDMMC0 signal line function value: SDMMC0_WP */
#define PIO_PA14B_SDMMC0_WP                        (_UINT32_(1) << 14) /**< SDMMC0 signal: SDMMC0_WP */
/* ========== PIO definition for SDMMC1 peripheral ========== */
#define PIN_PB30A_SDMMC1_1V8SEL                    _UINT32_(62) /**< SDMMC1 signal: SDMMC1_1V8SEL on PB30 mux A */
#define MUX_PB30A_SDMMC1_1V8SEL                    _UINT32_(0)  /**< SDMMC1 signal line function value: SDMMC1_1V8SEL */
#define PIO_PB30A_SDMMC1_1V8SEL                    (_UINT32_(1) << 30) /**< SDMMC1 signal: SDMMC1_1V8SEL */
#define PIN_PB29A_SDMMC1_CD                        _UINT32_(61) /**< SDMMC1 signal: SDMMC1_CD on PB29 mux A */
#define MUX_PB29A_SDMMC1_CD                        _UINT32_(0)  /**< SDMMC1 signal line function value: SDMMC1_CD */
#define PIO_PB29A_SDMMC1_CD                        (_UINT32_(1) << 29) /**< SDMMC1 signal: SDMMC1_CD */
#define PIN_PB23A_SDMMC1_CK                        _UINT32_(55) /**< SDMMC1 signal: SDMMC1_CK on PB23 mux A */
#define MUX_PB23A_SDMMC1_CK                        _UINT32_(0)  /**< SDMMC1 signal line function value: SDMMC1_CK */
#define PIO_PB23A_SDMMC1_CK                        (_UINT32_(1) << 23) /**< SDMMC1 signal: SDMMC1_CK */
#define PIN_PB22A_SDMMC1_CMD                       _UINT32_(54) /**< SDMMC1 signal: SDMMC1_CMD on PB22 mux A */
#define MUX_PB22A_SDMMC1_CMD                       _UINT32_(0)  /**< SDMMC1 signal line function value: SDMMC1_CMD */
#define PIO_PB22A_SDMMC1_CMD                       (_UINT32_(1) << 22) /**< SDMMC1 signal: SDMMC1_CMD */
#define PIN_PB24A_SDMMC1_DAT0                      _UINT32_(56) /**< SDMMC1 signal: SDMMC1_DAT0 on PB24 mux A */
#define MUX_PB24A_SDMMC1_DAT0                      _UINT32_(0)  /**< SDMMC1 signal line function value: SDMMC1_DAT0 */
#define PIO_PB24A_SDMMC1_DAT0                      (_UINT32_(1) << 24) /**< SDMMC1 signal: SDMMC1_DAT0 */
#define PIN_PB25A_SDMMC1_DAT1                      _UINT32_(57) /**< SDMMC1 signal: SDMMC1_DAT1 on PB25 mux A */
#define MUX_PB25A_SDMMC1_DAT1                      _UINT32_(0)  /**< SDMMC1 signal line function value: SDMMC1_DAT1 */
#define PIO_PB25A_SDMMC1_DAT1                      (_UINT32_(1) << 25) /**< SDMMC1 signal: SDMMC1_DAT1 */
#define PIN_PB26A_SDMMC1_DAT2                      _UINT32_(58) /**< SDMMC1 signal: SDMMC1_DAT2 on PB26 mux A */
#define MUX_PB26A_SDMMC1_DAT2                      _UINT32_(0)  /**< SDMMC1 signal line function value: SDMMC1_DAT2 */
#define PIO_PB26A_SDMMC1_DAT2                      (_UINT32_(1) << 26) /**< SDMMC1 signal: SDMMC1_DAT2 */
#define PIN_PB27A_SDMMC1_DAT3                      _UINT32_(59) /**< SDMMC1 signal: SDMMC1_DAT3 on PB27 mux A */
#define MUX_PB27A_SDMMC1_DAT3                      _UINT32_(0)  /**< SDMMC1 signal line function value: SDMMC1_DAT3 */
#define PIO_PB27A_SDMMC1_DAT3                      (_UINT32_(1) << 27) /**< SDMMC1 signal: SDMMC1_DAT3 */
#define PIN_PB21A_SDMMC1_RSTN                      _UINT32_(53) /**< SDMMC1 signal: SDMMC1_RSTN on PB21 mux A */
#define MUX_PB21A_SDMMC1_RSTN                      _UINT32_(0)  /**< SDMMC1 signal line function value: SDMMC1_RSTN */
#define PIO_PB21A_SDMMC1_RSTN                      (_UINT32_(1) << 21) /**< SDMMC1 signal: SDMMC1_RSTN */
#define PIN_PB28A_SDMMC1_WP                        _UINT32_(60) /**< SDMMC1 signal: SDMMC1_WP on PB28 mux A */
#define MUX_PB28A_SDMMC1_WP                        _UINT32_(0)  /**< SDMMC1 signal line function value: SDMMC1_WP */
#define PIO_PB28A_SDMMC1_WP                        (_UINT32_(1) << 28) /**< SDMMC1 signal: SDMMC1_WP */
/* ========== PIO definition for SDMMC2 peripheral ========== */
#define PIN_PD3A_SDMMC2_1V8SEL                     _UINT32_(99) /**< SDMMC2 signal: SDMMC2_1V8SEL on PD3 mux A */
#define MUX_PD3A_SDMMC2_1V8SEL                     _UINT32_(0)  /**< SDMMC2 signal line function value: SDMMC2_1V8SEL */
#define PIO_PD3A_SDMMC2_1V8SEL                     (_UINT32_(1) << 3) /**< SDMMC2 signal: SDMMC2_1V8SEL */
#define PIN_PD2A_SDMMC2_CD                         _UINT32_(98) /**< SDMMC2 signal: SDMMC2_CD on PD2 mux A */
#define MUX_PD2A_SDMMC2_CD                         _UINT32_(0)  /**< SDMMC2 signal line function value: SDMMC2_CD */
#define PIO_PD2A_SDMMC2_CD                         (_UINT32_(1) << 2) /**< SDMMC2 signal: SDMMC2_CD */
#define PIN_PC28A_SDMMC2_CK                        _UINT32_(92) /**< SDMMC2 signal: SDMMC2_CK on PC28 mux A */
#define MUX_PC28A_SDMMC2_CK                        _UINT32_(0)  /**< SDMMC2 signal line function value: SDMMC2_CK */
#define PIO_PC28A_SDMMC2_CK                        (_UINT32_(1) << 28) /**< SDMMC2 signal: SDMMC2_CK */
#define PIN_PC27A_SDMMC2_CMD                       _UINT32_(91) /**< SDMMC2 signal: SDMMC2_CMD on PC27 mux A */
#define MUX_PC27A_SDMMC2_CMD                       _UINT32_(0)  /**< SDMMC2 signal line function value: SDMMC2_CMD */
#define PIO_PC27A_SDMMC2_CMD                       (_UINT32_(1) << 27) /**< SDMMC2 signal: SDMMC2_CMD */
#define PIN_PC29A_SDMMC2_DAT0                      _UINT32_(93) /**< SDMMC2 signal: SDMMC2_DAT0 on PC29 mux A */
#define MUX_PC29A_SDMMC2_DAT0                      _UINT32_(0)  /**< SDMMC2 signal line function value: SDMMC2_DAT0 */
#define PIO_PC29A_SDMMC2_DAT0                      (_UINT32_(1) << 29) /**< SDMMC2 signal: SDMMC2_DAT0 */
#define PIN_PC30A_SDMMC2_DAT1                      _UINT32_(94) /**< SDMMC2 signal: SDMMC2_DAT1 on PC30 mux A */
#define MUX_PC30A_SDMMC2_DAT1                      _UINT32_(0)  /**< SDMMC2 signal line function value: SDMMC2_DAT1 */
#define PIO_PC30A_SDMMC2_DAT1                      (_UINT32_(1) << 30) /**< SDMMC2 signal: SDMMC2_DAT1 */
#define PIN_PC31A_SDMMC2_DAT2                      _UINT32_(95) /**< SDMMC2 signal: SDMMC2_DAT2 on PC31 mux A */
#define MUX_PC31A_SDMMC2_DAT2                      _UINT32_(0)  /**< SDMMC2 signal line function value: SDMMC2_DAT2 */
#define PIO_PC31A_SDMMC2_DAT2                      (_UINT32_(1) << 31) /**< SDMMC2 signal: SDMMC2_DAT2 */
#define PIN_PD0A_SDMMC2_DAT3                       _UINT32_(96) /**< SDMMC2 signal: SDMMC2_DAT3 on PD0 mux A */
#define MUX_PD0A_SDMMC2_DAT3                       _UINT32_(0)  /**< SDMMC2 signal line function value: SDMMC2_DAT3 */
#define PIO_PD0A_SDMMC2_DAT3                       (_UINT32_(1) << 0) /**< SDMMC2 signal: SDMMC2_DAT3 */
#define PIN_PD1A_SDMMC2_WP                         _UINT32_(97) /**< SDMMC2 signal: SDMMC2_WP on PD1 mux A */
#define MUX_PD1A_SDMMC2_WP                         _UINT32_(0)  /**< SDMMC2 signal line function value: SDMMC2_WP */
#define PIO_PD1A_SDMMC2_WP                         (_UINT32_(1) << 1) /**< SDMMC2 signal: SDMMC2_WP */
/* ========== PIO definition for SPDIFRX peripheral ========== */
#define PIN_PC3A_SPDIFRX_SPDIF_RX                  _UINT32_(67) /**< SPDIFRX signal: SPDIFRX_SPDIF_RX on PC3 mux A */
#define MUX_PC3A_SPDIFRX_SPDIF_RX                  _UINT32_(0)  /**< SPDIFRX signal line function value: SPDIFRX_SPDIF_RX */
#define PIO_PC3A_SPDIFRX_SPDIF_RX                  (_UINT32_(1) << 3) /**< SPDIFRX signal: SPDIFRX_SPDIF_RX */
#define PIN_PC14B_SPDIFRX_SPDIF_RX                 _UINT32_(78) /**< SPDIFRX signal: SPDIFRX_SPDIF_RX on PC14 mux B */
#define MUX_PC14B_SPDIFRX_SPDIF_RX                 _UINT32_(1)  /**< SPDIFRX signal line function value: SPDIFRX_SPDIF_RX */
#define PIO_PC14B_SPDIFRX_SPDIF_RX                 (_UINT32_(1) << 14) /**< SPDIFRX signal: SPDIFRX_SPDIF_RX */
#define PIN_PD27C_SPDIFRX_SPDIF_RX                 _UINT32_(123) /**< SPDIFRX signal: SPDIFRX_SPDIF_RX on PD27 mux C */
#define MUX_PD27C_SPDIFRX_SPDIF_RX                 _UINT32_(2)  /**< SPDIFRX signal line function value: SPDIFRX_SPDIF_RX */
#define PIO_PD27C_SPDIFRX_SPDIF_RX                 (_UINT32_(1) << 27) /**< SPDIFRX signal: SPDIFRX_SPDIF_RX */
/* ========== PIO definition for SPDIFTX peripheral ========== */
#define PIN_PC4A_SPDIFTX_SPDIF_TX                  _UINT32_(68) /**< SPDIFTX signal: SPDIFTX_SPDIF_TX on PC4 mux A */
#define MUX_PC4A_SPDIFTX_SPDIF_TX                  _UINT32_(0)  /**< SPDIFTX signal line function value: SPDIFTX_SPDIF_TX */
#define PIO_PC4A_SPDIFTX_SPDIF_TX                  (_UINT32_(1) << 4) /**< SPDIFTX signal: SPDIFTX_SPDIF_TX */
#define PIN_PC18B_SPDIFTX_SPDIF_TX                 _UINT32_(82) /**< SPDIFTX signal: SPDIFTX_SPDIF_TX on PC18 mux B */
#define MUX_PC18B_SPDIFTX_SPDIF_TX                 _UINT32_(1)  /**< SPDIFTX signal line function value: SPDIFTX_SPDIF_TX */
#define PIO_PC18B_SPDIFTX_SPDIF_TX                 (_UINT32_(1) << 18) /**< SPDIFTX signal: SPDIFTX_SPDIF_TX */
#define PIN_PD28C_SPDIFTX_SPDIF_TX                 _UINT32_(124) /**< SPDIFTX signal: SPDIFTX_SPDIF_TX on PD28 mux C */
#define MUX_PD28C_SPDIFTX_SPDIF_TX                 _UINT32_(2)  /**< SPDIFTX signal line function value: SPDIFTX_SPDIF_TX */
#define PIO_PD28C_SPDIFTX_SPDIF_TX                 (_UINT32_(1) << 28) /**< SPDIFTX signal: SPDIFTX_SPDIF_TX */
/* ========== PIO definition for SSC0 peripheral ========== */
#define PIN_PA22A_SSC0_RD0                         _UINT32_(22) /**< SSC0 signal: SSC0_RD0 on PA22 mux A */
#define MUX_PA22A_SSC0_RD0                         _UINT32_(0)  /**< SSC0 signal line function value: SSC0_RD0 */
#define PIO_PA22A_SSC0_RD0                         (_UINT32_(1) << 22) /**< SSC0 signal: SSC0_RD0 */
#define PIN_PB6D_SSC0_RD0                          _UINT32_(38) /**< SSC0 signal: SSC0_RD0 on PB6 mux D */
#define MUX_PB6D_SSC0_RD0                          _UINT32_(3)  /**< SSC0 signal line function value: SSC0_RD0 */
#define PIO_PB6D_SSC0_RD0                          (_UINT32_(1) << 6) /**< SSC0 signal: SSC0_RD0 */
#define PIN_PA24A_SSC0_RF0                         _UINT32_(24) /**< SSC0 signal: SSC0_RF0 on PA24 mux A */
#define MUX_PA24A_SSC0_RF0                         _UINT32_(0)  /**< SSC0 signal line function value: SSC0_RF0 */
#define PIO_PA24A_SSC0_RF0                         (_UINT32_(1) << 24) /**< SSC0 signal: SSC0_RF0 */
#define PIN_PB7D_SSC0_RF0                          _UINT32_(39) /**< SSC0 signal: SSC0_RF0 on PB7 mux D */
#define MUX_PB7D_SSC0_RF0                          _UINT32_(3)  /**< SSC0 signal line function value: SSC0_RF0 */
#define PIO_PB7D_SSC0_RF0                          (_UINT32_(1) << 7) /**< SSC0 signal: SSC0_RF0 */
#define PIN_PA23A_SSC0_RK0                         _UINT32_(23) /**< SSC0 signal: SSC0_RK0 on PA23 mux A */
#define MUX_PA23A_SSC0_RK0                         _UINT32_(0)  /**< SSC0 signal line function value: SSC0_RK0 */
#define PIO_PA23A_SSC0_RK0                         (_UINT32_(1) << 23) /**< SSC0 signal: SSC0_RK0 */
#define PIN_PB2D_SSC0_RK0                          _UINT32_(34) /**< SSC0 signal: SSC0_RK0 on PB2 mux D */
#define MUX_PB2D_SSC0_RK0                          _UINT32_(3)  /**< SSC0 signal line function value: SSC0_RK0 */
#define PIO_PB2D_SSC0_RK0                          (_UINT32_(1) << 2) /**< SSC0 signal: SSC0_RK0 */
#define PIN_PA20A_SSC0_TD0                         _UINT32_(20) /**< SSC0 signal: SSC0_TD0 on PA20 mux A */
#define MUX_PA20A_SSC0_TD0                         _UINT32_(0)  /**< SSC0 signal line function value: SSC0_TD0 */
#define PIO_PA20A_SSC0_TD0                         (_UINT32_(1) << 20) /**< SSC0 signal: SSC0_TD0 */
#define PIN_PB5D_SSC0_TD0                          _UINT32_(37) /**< SSC0 signal: SSC0_TD0 on PB5 mux D */
#define MUX_PB5D_SSC0_TD0                          _UINT32_(3)  /**< SSC0 signal line function value: SSC0_TD0 */
#define PIO_PB5D_SSC0_TD0                          (_UINT32_(1) << 5) /**< SSC0 signal: SSC0_TD0 */
#define PIN_PA21A_SSC0_TF0                         _UINT32_(21) /**< SSC0 signal: SSC0_TF0 on PA21 mux A */
#define MUX_PA21A_SSC0_TF0                         _UINT32_(0)  /**< SSC0 signal line function value: SSC0_TF0 */
#define PIO_PA21A_SSC0_TF0                         (_UINT32_(1) << 21) /**< SSC0 signal: SSC0_TF0 */
#define PIN_PB4D_SSC0_TF0                          _UINT32_(36) /**< SSC0 signal: SSC0_TF0 on PB4 mux D */
#define MUX_PB4D_SSC0_TF0                          _UINT32_(3)  /**< SSC0 signal line function value: SSC0_TF0 */
#define PIO_PB4D_SSC0_TF0                          (_UINT32_(1) << 4) /**< SSC0 signal: SSC0_TF0 */
#define PIN_PA19A_SSC0_TK0                         _UINT32_(19) /**< SSC0 signal: SSC0_TK0 on PA19 mux A */
#define MUX_PA19A_SSC0_TK0                         _UINT32_(0)  /**< SSC0 signal line function value: SSC0_TK0 */
#define PIO_PA19A_SSC0_TK0                         (_UINT32_(1) << 19) /**< SSC0 signal: SSC0_TK0 */
#define PIN_PB3D_SSC0_TK0                          _UINT32_(35) /**< SSC0 signal: SSC0_TK0 on PB3 mux D */
#define MUX_PB3D_SSC0_TK0                          _UINT32_(3)  /**< SSC0 signal line function value: SSC0_TK0 */
#define PIO_PB3D_SSC0_TK0                          (_UINT32_(1) << 3) /**< SSC0 signal: SSC0_TK0 */
/* ========== PIO definition for SSC1 peripheral ========== */
#define PIN_PC30D_SSC1_RD1                         _UINT32_(94) /**< SSC1 signal: SSC1_RD1 on PC30 mux D */
#define MUX_PC30D_SSC1_RD1                         _UINT32_(3)  /**< SSC1 signal line function value: SSC1_RD1 */
#define PIO_PC30D_SSC1_RD1                         (_UINT32_(1) << 30) /**< SSC1 signal: SSC1_RD1 */
#define PIN_PD24C_SSC1_RD1                         _UINT32_(120) /**< SSC1 signal: SSC1_RD1 on PD24 mux C */
#define MUX_PD24C_SSC1_RD1                         _UINT32_(2)  /**< SSC1 signal line function value: SSC1_RD1 */
#define PIO_PD24C_SSC1_RD1                         (_UINT32_(1) << 24) /**< SSC1 signal: SSC1_RD1 */
#define PIN_PD0D_SSC1_RF1                          _UINT32_(96) /**< SSC1 signal: SSC1_RF1 on PD0 mux D */
#define MUX_PD0D_SSC1_RF1                          _UINT32_(3)  /**< SSC1 signal line function value: SSC1_RF1 */
#define PIO_PD0D_SSC1_RF1                          (_UINT32_(1) << 0) /**< SSC1 signal: SSC1_RF1 */
#define PIN_PD26C_SSC1_RF1                         _UINT32_(122) /**< SSC1 signal: SSC1_RF1 on PD26 mux C */
#define MUX_PD26C_SSC1_RF1                         _UINT32_(2)  /**< SSC1 signal line function value: SSC1_RF1 */
#define PIO_PD26C_SSC1_RF1                         (_UINT32_(1) << 26) /**< SSC1 signal: SSC1_RF1 */
#define PIN_PC31D_SSC1_RK1                         _UINT32_(95) /**< SSC1 signal: SSC1_RK1 on PC31 mux D */
#define MUX_PC31D_SSC1_RK1                         _UINT32_(3)  /**< SSC1 signal line function value: SSC1_RK1 */
#define PIO_PC31D_SSC1_RK1                         (_UINT32_(1) << 31) /**< SSC1 signal: SSC1_RK1 */
#define PIN_PD25C_SSC1_RK1                         _UINT32_(121) /**< SSC1 signal: SSC1_RK1 on PD25 mux C */
#define MUX_PD25C_SSC1_RK1                         _UINT32_(2)  /**< SSC1 signal line function value: SSC1_RK1 */
#define PIO_PD25C_SSC1_RK1                         (_UINT32_(1) << 25) /**< SSC1 signal: SSC1_RK1 */
#define PIN_PC27D_SSC1_TD1                         _UINT32_(91) /**< SSC1 signal: SSC1_TD1 on PC27 mux D */
#define MUX_PC27D_SSC1_TD1                         _UINT32_(3)  /**< SSC1 signal line function value: SSC1_TD1 */
#define PIO_PC27D_SSC1_TD1                         (_UINT32_(1) << 27) /**< SSC1 signal: SSC1_TD1 */
#define PIN_PD23C_SSC1_TD1                         _UINT32_(119) /**< SSC1 signal: SSC1_TD1 on PD23 mux C */
#define MUX_PD23C_SSC1_TD1                         _UINT32_(2)  /**< SSC1 signal line function value: SSC1_TD1 */
#define PIO_PD23C_SSC1_TD1                         (_UINT32_(1) << 23) /**< SSC1 signal: SSC1_TD1 */
#define PIN_PC28D_SSC1_TF1                         _UINT32_(92) /**< SSC1 signal: SSC1_TF1 on PC28 mux D */
#define MUX_PC28D_SSC1_TF1                         _UINT32_(3)  /**< SSC1 signal line function value: SSC1_TF1 */
#define PIO_PC28D_SSC1_TF1                         (_UINT32_(1) << 28) /**< SSC1 signal: SSC1_TF1 */
#define PIN_PD22C_SSC1_TF1                         _UINT32_(118) /**< SSC1 signal: SSC1_TF1 on PD22 mux C */
#define MUX_PD22C_SSC1_TF1                         _UINT32_(2)  /**< SSC1 signal line function value: SSC1_TF1 */
#define PIO_PD22C_SSC1_TF1                         (_UINT32_(1) << 22) /**< SSC1 signal: SSC1_TF1 */
#define PIN_PC29D_SSC1_TK1                         _UINT32_(93) /**< SSC1 signal: SSC1_TK1 on PC29 mux D */
#define MUX_PC29D_SSC1_TK1                         _UINT32_(3)  /**< SSC1 signal line function value: SSC1_TK1 */
#define PIO_PC29D_SSC1_TK1                         (_UINT32_(1) << 29) /**< SSC1 signal: SSC1_TK1 */
#define PIN_PD21C_SSC1_TK1                         _UINT32_(117) /**< SSC1 signal: SSC1_TK1 on PD21 mux C */
#define MUX_PD21C_SSC1_TK1                         _UINT32_(2)  /**< SSC1 signal line function value: SSC1_TK1 */
#define PIO_PD21C_SSC1_TK1                         (_UINT32_(1) << 21) /**< SSC1 signal: SSC1_TK1 */
/* ========== PIO definition for TC0 peripheral ========== */
#define PIN_PC29F_TC0_TCLK0                        _UINT32_(93) /**< TC0 signal: TC0_TCLK0 on PC29 mux F */
#define MUX_PC29F_TC0_TCLK0                        _UINT32_(5)  /**< TC0 signal line function value: TC0_TCLK0 */
#define PIO_PC29F_TC0_TCLK0                        (_UINT32_(1) << 29) /**< TC0 signal: TC0_TCLK0 */
#define PIN_PD5C_TC0_TCLK0                         _UINT32_(101) /**< TC0 signal: TC0_TCLK0 on PD5 mux C */
#define MUX_PD5C_TC0_TCLK0                         _UINT32_(2)  /**< TC0 signal line function value: TC0_TCLK0 */
#define PIO_PD5C_TC0_TCLK0                         (_UINT32_(1) << 5) /**< TC0 signal: TC0_TCLK0 */
#define PIN_PB31D_TC0_TCLK1                        _UINT32_(63) /**< TC0 signal: TC0_TCLK1 on PB31 mux D */
#define MUX_PB31D_TC0_TCLK1                        _UINT32_(3)  /**< TC0 signal line function value: TC0_TCLK1 */
#define PIO_PB31D_TC0_TCLK1                        (_UINT32_(1) << 31) /**< TC0 signal: TC0_TCLK1 */
#define PIN_PC17D_TC0_TCLK1                        _UINT32_(81) /**< TC0 signal: TC0_TCLK1 on PC17 mux D */
#define MUX_PC17D_TC0_TCLK1                        _UINT32_(3)  /**< TC0 signal line function value: TC0_TCLK1 */
#define PIO_PC17D_TC0_TCLK1                        (_UINT32_(1) << 17) /**< TC0 signal: TC0_TCLK1 */
#define PIN_PD11C_TC0_TCLK1                        _UINT32_(107) /**< TC0 signal: TC0_TCLK1 on PD11 mux C */
#define MUX_PD11C_TC0_TCLK1                        _UINT32_(2)  /**< TC0 signal line function value: TC0_TCLK1 */
#define PIO_PD11C_TC0_TCLK1                        (_UINT32_(1) << 11) /**< TC0 signal: TC0_TCLK1 */
#define PIN_PB22C_TC0_TCLK2                        _UINT32_(54) /**< TC0 signal: TC0_TCLK2 on PB22 mux C */
#define MUX_PB22C_TC0_TCLK2                        _UINT32_(2)  /**< TC0 signal line function value: TC0_TCLK2 */
#define PIO_PB22C_TC0_TCLK2                        (_UINT32_(1) << 22) /**< TC0 signal: TC0_TCLK2 */
#define PIN_PB26C_TC0_TCLK2                        _UINT32_(58) /**< TC0 signal: TC0_TCLK2 on PB26 mux C */
#define MUX_PB26C_TC0_TCLK2                        _UINT32_(2)  /**< TC0 signal line function value: TC0_TCLK2 */
#define PIO_PB26C_TC0_TCLK2                        (_UINT32_(1) << 26) /**< TC0 signal: TC0_TCLK2 */
#define PIN_PD15C_TC0_TCLK2                        _UINT32_(111) /**< TC0 signal: TC0_TCLK2 on PD15 mux C */
#define MUX_PD15C_TC0_TCLK2                        _UINT32_(2)  /**< TC0 signal line function value: TC0_TCLK2 */
#define PIO_PD15C_TC0_TCLK2                        (_UINT32_(1) << 15) /**< TC0 signal: TC0_TCLK2 */
#define PIN_PC30F_TC0_TIOA0                        _UINT32_(94) /**< TC0 signal: TC0_TIOA0 on PC30 mux F */
#define MUX_PC30F_TC0_TIOA0                        _UINT32_(5)  /**< TC0 signal line function value: TC0_TIOA0 */
#define PIO_PC30F_TC0_TIOA0                        (_UINT32_(1) << 30) /**< TC0 signal: TC0_TIOA0 */
#define PIN_PD3C_TC0_TIOA0                         _UINT32_(99) /**< TC0 signal: TC0_TIOA0 on PD3 mux C */
#define MUX_PD3C_TC0_TIOA0                         _UINT32_(2)  /**< TC0 signal line function value: TC0_TIOA0 */
#define PIO_PD3C_TC0_TIOA0                         (_UINT32_(1) << 3) /**< TC0 signal: TC0_TIOA0 */
#define PIN_PB30D_TC0_TIOA1                        _UINT32_(62) /**< TC0 signal: TC0_TIOA1 on PB30 mux D */
#define MUX_PB30D_TC0_TIOA1                        _UINT32_(3)  /**< TC0 signal line function value: TC0_TIOA1 */
#define PIO_PB30D_TC0_TIOA1                        (_UINT32_(1) << 30) /**< TC0 signal: TC0_TIOA1 */
#define PIN_PC16D_TC0_TIOA1                        _UINT32_(80) /**< TC0 signal: TC0_TIOA1 on PC16 mux D */
#define MUX_PC16D_TC0_TIOA1                        _UINT32_(3)  /**< TC0 signal line function value: TC0_TIOA1 */
#define PIO_PC16D_TC0_TIOA1                        (_UINT32_(1) << 16) /**< TC0 signal: TC0_TIOA1 */
#define PIN_PD10C_TC0_TIOA1                        _UINT32_(106) /**< TC0 signal: TC0_TIOA1 on PD10 mux C */
#define MUX_PD10C_TC0_TIOA1                        _UINT32_(2)  /**< TC0 signal line function value: TC0_TIOA1 */
#define PIO_PD10C_TC0_TIOA1                        (_UINT32_(1) << 10) /**< TC0 signal: TC0_TIOA1 */
#define PIN_PB23C_TC0_TIOA2                        _UINT32_(55) /**< TC0 signal: TC0_TIOA2 on PB23 mux C */
#define MUX_PB23C_TC0_TIOA2                        _UINT32_(2)  /**< TC0 signal line function value: TC0_TIOA2 */
#define PIO_PB23C_TC0_TIOA2                        (_UINT32_(1) << 23) /**< TC0 signal: TC0_TIOA2 */
#define PIN_PB27C_TC0_TIOA2                        _UINT32_(59) /**< TC0 signal: TC0_TIOA2 on PB27 mux C */
#define MUX_PB27C_TC0_TIOA2                        _UINT32_(2)  /**< TC0 signal line function value: TC0_TIOA2 */
#define PIO_PB27C_TC0_TIOA2                        (_UINT32_(1) << 27) /**< TC0 signal: TC0_TIOA2 */
#define PIN_PD13C_TC0_TIOA2                        _UINT32_(109) /**< TC0 signal: TC0_TIOA2 on PD13 mux C */
#define MUX_PD13C_TC0_TIOA2                        _UINT32_(2)  /**< TC0 signal line function value: TC0_TIOA2 */
#define PIO_PD13C_TC0_TIOA2                        (_UINT32_(1) << 13) /**< TC0 signal: TC0_TIOA2 */
#define PIN_PC31F_TC0_TIOB0                        _UINT32_(95) /**< TC0 signal: TC0_TIOB0 on PC31 mux F */
#define MUX_PC31F_TC0_TIOB0                        _UINT32_(5)  /**< TC0 signal line function value: TC0_TIOB0 */
#define PIO_PC31F_TC0_TIOB0                        (_UINT32_(1) << 31) /**< TC0 signal: TC0_TIOB0 */
#define PIN_PD4C_TC0_TIOB0                         _UINT32_(100) /**< TC0 signal: TC0_TIOB0 on PD4 mux C */
#define MUX_PD4C_TC0_TIOB0                         _UINT32_(2)  /**< TC0 signal line function value: TC0_TIOB0 */
#define PIO_PD4C_TC0_TIOB0                         (_UINT32_(1) << 4) /**< TC0 signal: TC0_TIOB0 */
#define PIN_PC0D_TC0_TIOB1                         _UINT32_(64) /**< TC0 signal: TC0_TIOB1 on PC0 mux D */
#define MUX_PC0D_TC0_TIOB1                         _UINT32_(3)  /**< TC0 signal line function value: TC0_TIOB1 */
#define PIO_PC0D_TC0_TIOB1                         (_UINT32_(1) << 0) /**< TC0 signal: TC0_TIOB1 */
#define PIN_PC18D_TC0_TIOB1                        _UINT32_(82) /**< TC0 signal: TC0_TIOB1 on PC18 mux D */
#define MUX_PC18D_TC0_TIOB1                        _UINT32_(3)  /**< TC0 signal line function value: TC0_TIOB1 */
#define PIO_PC18D_TC0_TIOB1                        (_UINT32_(1) << 18) /**< TC0 signal: TC0_TIOB1 */
#define PIN_PD12C_TC0_TIOB1                        _UINT32_(108) /**< TC0 signal: TC0_TIOB1 on PD12 mux C */
#define MUX_PD12C_TC0_TIOB1                        _UINT32_(2)  /**< TC0 signal line function value: TC0_TIOB1 */
#define PIO_PD12C_TC0_TIOB1                        (_UINT32_(1) << 12) /**< TC0 signal: TC0_TIOB1 */
#define PIN_PB21C_TC0_TIOB2                        _UINT32_(53) /**< TC0 signal: TC0_TIOB2 on PB21 mux C */
#define MUX_PB21C_TC0_TIOB2                        _UINT32_(2)  /**< TC0 signal line function value: TC0_TIOB2 */
#define PIO_PB21C_TC0_TIOB2                        (_UINT32_(1) << 21) /**< TC0 signal: TC0_TIOB2 */
#define PIN_PB25C_TC0_TIOB2                        _UINT32_(57) /**< TC0 signal: TC0_TIOB2 on PB25 mux C */
#define MUX_PB25C_TC0_TIOB2                        _UINT32_(2)  /**< TC0 signal line function value: TC0_TIOB2 */
#define PIO_PB25C_TC0_TIOB2                        (_UINT32_(1) << 25) /**< TC0 signal: TC0_TIOB2 */
#define PIN_PD14C_TC0_TIOB2                        _UINT32_(110) /**< TC0 signal: TC0_TIOB2 on PD14 mux C */
#define MUX_PD14C_TC0_TIOB2                        _UINT32_(2)  /**< TC0 signal line function value: TC0_TIOB2 */
#define PIO_PD14C_TC0_TIOB2                        (_UINT32_(1) << 14) /**< TC0 signal: TC0_TIOB2 */
/* ========== PIO definition for TC1 peripheral ========== */
#define PIN_PA13F_TC1_TCLK3                        _UINT32_(13) /**< TC1 signal: TC1_TCLK3 on PA13 mux F */
#define MUX_PA13F_TC1_TCLK3                        _UINT32_(5)  /**< TC1 signal line function value: TC1_TCLK3 */
#define PIO_PA13F_TC1_TCLK3                        (_UINT32_(1) << 13) /**< TC1 signal: TC1_TCLK3 */
#define PIN_PB13F_TC1_TCLK3                        _UINT32_(45) /**< TC1 signal: TC1_TCLK3 on PB13 mux F */
#define MUX_PB13F_TC1_TCLK3                        _UINT32_(5)  /**< TC1 signal line function value: TC1_TCLK3 */
#define PIO_PB13F_TC1_TCLK3                        (_UINT32_(1) << 13) /**< TC1 signal: TC1_TCLK3 */
#define PIN_PE6D_TC1_TCLK3                         _UINT32_(134) /**< TC1 signal: TC1_TCLK3 on PE6 mux D */
#define MUX_PE6D_TC1_TCLK3                         _UINT32_(3)  /**< TC1 signal line function value: TC1_TCLK3 */
#define PIO_PE6D_TC1_TCLK3                         (_UINT32_(1) << 6) /**< TC1 signal: TC1_TCLK3 */
#define PIN_PA5F_TC1_TCLK4                         _UINT32_(5)  /**< TC1 signal: TC1_TCLK4 on PA5 mux F */
#define MUX_PA5F_TC1_TCLK4                         _UINT32_(5)  /**< TC1 signal line function value: TC1_TCLK4 */
#define PIO_PA5F_TC1_TCLK4                         (_UINT32_(1) << 5) /**< TC1 signal: TC1_TCLK4 */
#define PIN_PB15F_TC1_TCLK4                        _UINT32_(47) /**< TC1 signal: TC1_TCLK4 on PB15 mux F */
#define MUX_PB15F_TC1_TCLK4                        _UINT32_(5)  /**< TC1 signal line function value: TC1_TCLK4 */
#define PIO_PB15F_TC1_TCLK4                        (_UINT32_(1) << 15) /**< TC1 signal: TC1_TCLK4 */
#define PIN_PE9D_TC1_TCLK4                         _UINT32_(137) /**< TC1 signal: TC1_TCLK4 on PE9 mux D */
#define MUX_PE9D_TC1_TCLK4                         _UINT32_(3)  /**< TC1 signal line function value: TC1_TCLK4 */
#define PIO_PE9D_TC1_TCLK4                         (_UINT32_(1) << 9) /**< TC1 signal: TC1_TCLK4 */
#define PIN_PA10F_TC1_TCLK5                        _UINT32_(10) /**< TC1 signal: TC1_TCLK5 on PA10 mux F */
#define MUX_PA10F_TC1_TCLK5                        _UINT32_(5)  /**< TC1 signal line function value: TC1_TCLK5 */
#define PIO_PA10F_TC1_TCLK5                        (_UINT32_(1) << 10) /**< TC1 signal: TC1_TCLK5 */
#define PIN_PB20F_TC1_TCLK5                        _UINT32_(52) /**< TC1 signal: TC1_TCLK5 on PB20 mux F */
#define MUX_PB20F_TC1_TCLK5                        _UINT32_(5)  /**< TC1 signal line function value: TC1_TCLK5 */
#define PIO_PB20F_TC1_TCLK5                        (_UINT32_(1) << 20) /**< TC1 signal: TC1_TCLK5 */
#define PIN_PE12D_TC1_TCLK5                        _UINT32_(140) /**< TC1 signal: TC1_TCLK5 on PE12 mux D */
#define MUX_PE12D_TC1_TCLK5                        _UINT32_(3)  /**< TC1 signal line function value: TC1_TCLK5 */
#define PIO_PE12D_TC1_TCLK5                        (_UINT32_(1) << 12) /**< TC1 signal: TC1_TCLK5 */
#define PIN_PA12F_TC1_TIOA3                        _UINT32_(12) /**< TC1 signal: TC1_TIOA3 on PA12 mux F */
#define MUX_PA12F_TC1_TIOA3                        _UINT32_(5)  /**< TC1 signal line function value: TC1_TIOA3 */
#define PIO_PA12F_TC1_TIOA3                        (_UINT32_(1) << 12) /**< TC1 signal: TC1_TIOA3 */
#define PIN_PB12F_TC1_TIOA3                        _UINT32_(44) /**< TC1 signal: TC1_TIOA3 on PB12 mux F */
#define MUX_PB12F_TC1_TIOA3                        _UINT32_(5)  /**< TC1 signal line function value: TC1_TIOA3 */
#define PIO_PB12F_TC1_TIOA3                        (_UINT32_(1) << 12) /**< TC1 signal: TC1_TIOA3 */
#define PIN_PE4D_TC1_TIOA3                         _UINT32_(132) /**< TC1 signal: TC1_TIOA3 on PE4 mux D */
#define MUX_PE4D_TC1_TIOA3                         _UINT32_(3)  /**< TC1 signal line function value: TC1_TIOA3 */
#define PIO_PE4D_TC1_TIOA3                         (_UINT32_(1) << 4) /**< TC1 signal: TC1_TIOA3 */
#define PIN_PA7F_TC1_TIOA4                         _UINT32_(7)  /**< TC1 signal: TC1_TIOA4 on PA7 mux F */
#define MUX_PA7F_TC1_TIOA4                         _UINT32_(5)  /**< TC1 signal line function value: TC1_TIOA4 */
#define PIO_PA7F_TC1_TIOA4                         (_UINT32_(1) << 7) /**< TC1 signal: TC1_TIOA4 */
#define PIN_PB17F_TC1_TIOA4                        _UINT32_(49) /**< TC1 signal: TC1_TIOA4 on PB17 mux F */
#define MUX_PB17F_TC1_TIOA4                        _UINT32_(5)  /**< TC1 signal line function value: TC1_TIOA4 */
#define PIO_PB17F_TC1_TIOA4                        (_UINT32_(1) << 17) /**< TC1 signal: TC1_TIOA4 */
#define PIN_PE7D_TC1_TIOA4                         _UINT32_(135) /**< TC1 signal: TC1_TIOA4 on PE7 mux D */
#define MUX_PE7D_TC1_TIOA4                         _UINT32_(3)  /**< TC1 signal line function value: TC1_TIOA4 */
#define PIO_PE7D_TC1_TIOA4                         (_UINT32_(1) << 7) /**< TC1 signal: TC1_TIOA4 */
#define PIN_PA8F_TC1_TIOA5                         _UINT32_(8)  /**< TC1 signal: TC1_TIOA5 on PA8 mux F */
#define MUX_PA8F_TC1_TIOA5                         _UINT32_(5)  /**< TC1 signal line function value: TC1_TIOA5 */
#define PIO_PA8F_TC1_TIOA5                         (_UINT32_(1) << 8) /**< TC1 signal: TC1_TIOA5 */
#define PIN_PB18F_TC1_TIOA5                        _UINT32_(50) /**< TC1 signal: TC1_TIOA5 on PB18 mux F */
#define MUX_PB18F_TC1_TIOA5                        _UINT32_(5)  /**< TC1 signal line function value: TC1_TIOA5 */
#define PIO_PB18F_TC1_TIOA5                        (_UINT32_(1) << 18) /**< TC1 signal: TC1_TIOA5 */
#define PIN_PE10D_TC1_TIOA5                        _UINT32_(138) /**< TC1 signal: TC1_TIOA5 on PE10 mux D */
#define MUX_PE10D_TC1_TIOA5                        _UINT32_(3)  /**< TC1 signal line function value: TC1_TIOA5 */
#define PIO_PE10D_TC1_TIOA5                        (_UINT32_(1) << 10) /**< TC1 signal: TC1_TIOA5 */
#define PIN_PA11F_TC1_TIOB3                        _UINT32_(11) /**< TC1 signal: TC1_TIOB3 on PA11 mux F */
#define MUX_PA11F_TC1_TIOB3                        _UINT32_(5)  /**< TC1 signal line function value: TC1_TIOB3 */
#define PIO_PA11F_TC1_TIOB3                        (_UINT32_(1) << 11) /**< TC1 signal: TC1_TIOB3 */
#define PIN_PB11F_TC1_TIOB3                        _UINT32_(43) /**< TC1 signal: TC1_TIOB3 on PB11 mux F */
#define MUX_PB11F_TC1_TIOB3                        _UINT32_(5)  /**< TC1 signal line function value: TC1_TIOB3 */
#define PIO_PB11F_TC1_TIOB3                        (_UINT32_(1) << 11) /**< TC1 signal: TC1_TIOB3 */
#define PIN_PE5D_TC1_TIOB3                         _UINT32_(133) /**< TC1 signal: TC1_TIOB3 on PE5 mux D */
#define MUX_PE5D_TC1_TIOB3                         _UINT32_(3)  /**< TC1 signal line function value: TC1_TIOB3 */
#define PIO_PE5D_TC1_TIOB3                         (_UINT32_(1) << 5) /**< TC1 signal: TC1_TIOB3 */
#define PIN_PA6F_TC1_TIOB4                         _UINT32_(6)  /**< TC1 signal: TC1_TIOB4 on PA6 mux F */
#define MUX_PA6F_TC1_TIOB4                         _UINT32_(5)  /**< TC1 signal line function value: TC1_TIOB4 */
#define PIO_PA6F_TC1_TIOB4                         (_UINT32_(1) << 6) /**< TC1 signal: TC1_TIOB4 */
#define PIN_PB16F_TC1_TIOB4                        _UINT32_(48) /**< TC1 signal: TC1_TIOB4 on PB16 mux F */
#define MUX_PB16F_TC1_TIOB4                        _UINT32_(5)  /**< TC1 signal line function value: TC1_TIOB4 */
#define PIO_PB16F_TC1_TIOB4                        (_UINT32_(1) << 16) /**< TC1 signal: TC1_TIOB4 */
#define PIN_PE8D_TC1_TIOB4                         _UINT32_(136) /**< TC1 signal: TC1_TIOB4 on PE8 mux D */
#define MUX_PE8D_TC1_TIOB4                         _UINT32_(3)  /**< TC1 signal line function value: TC1_TIOB4 */
#define PIO_PE8D_TC1_TIOB4                         (_UINT32_(1) << 8) /**< TC1 signal: TC1_TIOB4 */
#define PIN_PA9F_TC1_TIOB5                         _UINT32_(9)  /**< TC1 signal: TC1_TIOB5 on PA9 mux F */
#define MUX_PA9F_TC1_TIOB5                         _UINT32_(5)  /**< TC1 signal line function value: TC1_TIOB5 */
#define PIO_PA9F_TC1_TIOB5                         (_UINT32_(1) << 9) /**< TC1 signal: TC1_TIOB5 */
#define PIN_PB19F_TC1_TIOB5                        _UINT32_(51) /**< TC1 signal: TC1_TIOB5 on PB19 mux F */
#define MUX_PB19F_TC1_TIOB5                        _UINT32_(5)  /**< TC1 signal line function value: TC1_TIOB5 */
#define PIO_PB19F_TC1_TIOB5                        (_UINT32_(1) << 19) /**< TC1 signal: TC1_TIOB5 */
#define PIN_PE11D_TC1_TIOB5                        _UINT32_(139) /**< TC1 signal: TC1_TIOB5 on PE11 mux D */
#define MUX_PE11D_TC1_TIOB5                        _UINT32_(3)  /**< TC1 signal line function value: TC1_TIOB5 */
#define PIO_PE11D_TC1_TIOB5                        (_UINT32_(1) << 11) /**< TC1 signal: TC1_TIOB5 */
/* ========== PIO definition for TCPCA peripheral ========== */
#define PIN_PB31X1_TCPCA_HHSA_CC1                  _UINT32_(63) /**< TCPCA signal: TCPCA_HHSA_CC1 on PB31 mux X1 */
#define PIO_PB31X1_TCPCA_HHSA_CC1                  (_UINT32_(1) << 31) /**< TCPCA signal: TCPCA_HHSA_CC1 */
#define PIN_PC0X1_TCPCA_HHSA_CC2                   _UINT32_(64) /**< TCPCA signal: TCPCA_HHSA_CC2 on PC0 mux X1 */
#define PIO_PC0X1_TCPCA_HHSA_CC2                   (_UINT32_(1) << 0) /**< TCPCA signal: TCPCA_HHSA_CC2 */
/* ========== PIO definition for TCPCB peripheral ========== */
#define PIN_PC1X1_TCPCB_HHSB_CC1                   _UINT32_(65) /**< TCPCB signal: TCPCB_HHSB_CC1 on PC1 mux X1 */
#define PIO_PC1X1_TCPCB_HHSB_CC1                   (_UINT32_(1) << 1) /**< TCPCB signal: TCPCB_HHSB_CC1 */
#define PIN_PC2X1_TCPCB_HHSB_CC2                   _UINT32_(66) /**< TCPCB signal: TCPCB_HHSB_CC2 on PC2 mux X1 */
#define PIO_PC2X1_TCPCB_HHSB_CC2                   (_UINT32_(1) << 2) /**< TCPCB signal: TCPCB_HHSB_CC2 */

#endif /* _SAMA7D65_GPIO_H_ */

