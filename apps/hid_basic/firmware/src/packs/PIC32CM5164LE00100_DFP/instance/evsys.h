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
#ifndef _PIC32CMLE00_EVSYS_INSTANCE_
#define _PIC32CMLE00_EVSYS_INSTANCE_


/* ========== Instance Parameter definitions for EVSYS peripheral ========== */
#define EVSYS_ASYNCHRONOUS_CHANNELS              (0x00000F00) /* Mask of Only Asynchronous Channels */
#define EVSYS_CHANNELS                           (12)       /* Total Number of Channels */
#define EVSYS_CHANNELS_BITS                      (4)        /* Number of bits to select Channel */
#define EVSYS_GCLK_ID_0                          (8)        /* Index of Generic Clock 0 */
#define EVSYS_GCLK_ID_1                          (9)        /* Index of Generic Clock 1 */
#define EVSYS_GCLK_ID_2                          (10)       /* Index of Generic Clock 2 */
#define EVSYS_GCLK_ID_3                          (11)       /* Index of Generic Clock 3 */
#define EVSYS_GCLK_ID_4                          (12)       /* Index of Generic Clock 4 */
#define EVSYS_GCLK_ID_5                          (13)       /* Index of Generic Clock 5 */
#define EVSYS_GCLK_ID_6                          (14)       /* Index of Generic Clock 6 */
#define EVSYS_GCLK_ID_7                          (15)       /* Index of Generic Clock 7 */
#define EVSYS_GENERATORS                         (91)       /* Total Number of Event Generators */
#define EVSYS_GENERATORS_BITS                    (7)        /* Number of bits to select Event Generator */
#define EVSYS_INSTANCE_ID                        (64)       /* Instance index for EVSYS */
#define EVSYS_SECURE_IMPLEMENTED                 (1)        /* Security Configuration implemented? */
#define EVSYS_SYNCH_NUM                          (8)        /* Number of Synchronous Channels */
#define EVSYS_SYNCH_NUM_BITS                     (3)        /* Number of bits to select Synchronous Channels */
#define EVSYS_USERS                              (52)       /* Total Number of Event Users */
#define EVSYS_USERS_BITS                         (6)        /* Number of bits to select Event User */
#define EVSYS_USERS_GROUPS                       (2)        /* Number of 32-user Groups */
#define EVSYS_USER_CHN_BITS                      (4)        /* Number of bits to select Channel in USER register */

#endif /* _PIC32CMLE00_EVSYS_INSTANCE_ */
