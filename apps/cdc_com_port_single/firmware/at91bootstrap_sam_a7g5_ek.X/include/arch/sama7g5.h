/* ----------------------------------------------------------------------------
 *         Microchip Technology AT91Bootstrap project
 * ----------------------------------------------------------------------------
 * Copyright (c) 2018, Microchip Technology Inc. and its subsidiaries
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * - Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the disclaimer below.
 *
 * Microchip's name may not be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * DISCLAIMER: THIS SOFTWARE IS PROVIDED BY MICROCHIP "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * DISCLAIMED. IN NO EVENT SHALL MICROCHIP BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __SAMA7G5_H__
#define __SAMA7G5_H__

/*
 * Peripheral identifiers/interrupts.
 */
#define AT91C_ID_PIOA		11	/* Parallel I/O Controller A */
#define AT91C_ID_PIOB		12	/* Parallel I/O Controller B */
#define AT91C_ID_PIOC		13	/* Parallel I/O Controller C */
#define AT91C_ID_PIOD		14	/* Parallel I/O Controller D */
#define AT91C_ID_PIOE		15	/* Parallel I/O Controller E */

#define AT91C_ID_FLEXCOM0	38
#define AT91C_ID_FLEXCOM1	39
#define AT91C_ID_FLEXCOM2	40
#define AT91C_ID_FLEXCOM3	41
#define AT91C_ID_FLEXCOM4	42
#define AT91C_ID_FLEXCOM5	43
#define AT91C_ID_FLEXCOM6	44
#define AT91C_ID_FLEXCOM7	45
#define AT91C_ID_FLEXCOM8	46
#define AT91C_ID_FLEXCOM9	47
#define AT91C_ID_FLEXCOM10	48
#define AT91C_ID_FLEXCOM11	49

#define AT91C_ID_SDMMC0		80
#define AT91C_ID_SDMMC1		81

#define AT91C_ID_PIT64B0	70
#define AT91C_ID_PIT64B		AT91C_ID_PIT64B0

/*
 * User Peripherals physical base addresses.
 */
#define AT91C_BASE_PIOA		0xe0014000
#define AT91C_BASE_PIOB		(AT91C_BASE_PIOA + 0x40)
#define AT91C_BASE_PIOC		(AT91C_BASE_PIOB + 0x40)
#define AT91C_BASE_PIOD		(AT91C_BASE_PIOC + 0x40)
#define AT91C_BASE_PIOE		(AT91C_BASE_PIOD + 0x40)

#define AT91C_BASE_PMC		0xe0018000

#define AT91C_BASE_WDT		0xe001c000
#define AT91C_BASE_RSTC		0xe001d000
#define AT91C_BASE_WDTS		0xe001d180
#define AT91C_BASE_SCKCR	0xe001d050

#define AT91C_BASE_SDMMC0	0xe1204000
#define AT91C_BASE_SDMMC1	0xe1208000

#define AT91C_BASE_PIT64B0	0xe1800000

#define AT91C_BASE_FLEXCOM0	0xe1818000
#define AT91C_BASE_FLEXCOM1	0xe181c000
#define AT91C_BASE_FLEXCOM2	0xe1820000
#define AT91C_BASE_FLEXCOM3	0xe1824000
#define AT91C_BASE_FLEXCOM4	0xe2018000
#define AT91C_BASE_FLEXCOM5	0xe201C000
#define AT91C_BASE_FLEXCOM6	0xe2020000
#define AT91C_BASE_FLEXCOM7	0xe2024000
#define AT91C_BASE_FLEXCOM8	0xe2818000
#define AT91C_BASE_FLEXCOM9	0xe281C000
#define AT91C_BASE_FLEXCOM10	0xe2820000
#define AT91C_BASE_FLEXCOM11	0xe2824000

#define AT91C_BASE_TZC400	0xe3000000

#define AT91C_BASE_UMCTL2	0xe3800000
#define AT91C_BASE_UMCTL2_MP	0xe38003f8
#define AT91C_BASE_PUBL		0xe3804000

#define AT91C_NUM_FLEXCOM	12
#define AT91C_NUM_PIO		5

#define AT91C_BASE_PIT64BC	AT91C_BASE_PIT64B0
#define AT91C_BASE_DDRCS	0x60000000
#endif /* #ifndef __SAMA7G5_H__ */
