/*******************************************************************************
   PLIB MMU

  Company:
    Microchip Technology Inc.

  File Name:
    plib_mmu.c

  Summary:
    MMU implementation.

  Description:
    The MMU PLIB provies a simple interface to enable the MMU and caches.
*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/
// DOM-IGNORE-END

#include "device.h"

/* TTB descriptor type for Section descriptor */
#define TTB_TYPE_SECT              (2 << 0)

/* TTB Section Descriptor: Buffered/Non-Buffered (B) */
#define TTB_SECT_WRITE_THROUGH     (0 << 2)
#define TTB_SECT_WRITE_BACK        (1 << 2)

/* TTB Section Descriptor: Cacheable/Non-Cacheable (C) */
#define TTB_SECT_NON_CACHEABLE     (0 << 3)
#define TTB_SECT_CACHEABLE         (1 << 3)

#define TTB_SECT_STRONGLY_ORDERED  (TTB_SECT_NON_CACHEABLE | TTB_SECT_WRITE_THROUGH)
#define TTB_SECT_SHAREABLE_DEVICE  (TTB_SECT_NON_CACHEABLE | TTB_SECT_WRITE_BACK)
#define TTB_SECT_CACHEABLE_WT      (TTB_SECT_CACHEABLE | TTB_SECT_WRITE_THROUGH)
#define TTB_SECT_CACHEABLE_WB      (TTB_SECT_CACHEABLE | TTB_SECT_WRITE_BACK)

/* TTB Section Descriptor: Domain */
#define TTB_SECT_DOMAIN(x)         (((x) & 15) << 5)

/* TTB Section Descriptor: Execute/Execute-Never (XN) */
#define TTB_SECT_EXEC              (0 << 4)
#define TTB_SECT_EXEC_NEVER        (1 << 4)

/* TTB Section Descriptor: Access Privilege (AP) */
#define TTB_SECT_AP_PRIV_ONLY      ((0 << 15) | (1 << 10))
#define TTB_SECT_AP_NO_USER_WRITE  ((0 << 15) | (2 << 10))
#define TTB_SECT_AP_FULL_ACCESS    ((0 << 15) | (3 << 10))
#define TTB_SECT_AP_PRIV_READ_ONLY ((1 << 15) | (1 << 10))
#define TTB_SECT_AP_READ_ONLY      ((1 << 15) | (2 << 10))

/* TTB Section Descriptor: Section Base Address */
#define TTB_SECT_ADDR(x)           ((x) & 0xFFF00000)

#define L1_DATA_CACHE_BYTES            32U
#define L1_DATA_CACHE_WAYS         4U
#define L1_DATA_CACHE_SETS         256U
#define L1_DATA_CACHE_SETWAY(set, way) (((set) << 5) | ((way) << 30))

__ALIGNED(16384) static uint32_t tlb[4096];

// *****************************************************************************
/* Function:
     void mmu_configure(void *tlb)

  Summary:
    Configure MMU by setting TTRB0 address.

*/
static void mmu_configure(void *p_tlb)
{
    /* Translation Table Base Register 0 */
    __set_TTBR0((uint32_t)p_tlb);

    /* Domain Access Register */
    /* only domain 15: access are not checked */
    __set_DACR(0xC0000000);

    __DSB();
    __ISB();
}


void icache_InvalidateAll(void)
{
    L1C_InvalidateICacheAll();
}

void icache_Enable(void)
{
    uint32_t sctlr = __get_SCTLR();
    if ((sctlr & SCTLR_I_Msk) == 0)
    {
        L1C_InvalidateICacheAll();
        __set_SCTLR(sctlr | SCTLR_I_Msk);
    }
}

void icache_Disable(void)
{
    uint32_t sctlr = __get_SCTLR();
    if (sctlr & SCTLR_I_Msk)
    {
        __set_SCTLR(sctlr & ~SCTLR_I_Msk);
        L1C_InvalidateICacheAll();
    }
}

void dcache_InvalidateAll(void)
{
    L1C_InvalidateDCacheAll();
}

void dcache_CleanAll(void)
{
    L1C_CleanDCacheAll();
}

void dcache_CleanInvalidateAll(void)
{
    L1C_CleanInvalidateDCacheAll();
}

void dcache_InvalidateByAddr (uint32_t *addr, uint32_t size)
{
    uint32_t mva = (uint32_t)addr & ~(L1_DATA_CACHE_BYTES - 1);

    for ( ; mva < ((uint32_t)addr + size); mva += L1_DATA_CACHE_BYTES)
    {
        __set_DCIMVAC(mva);
        __DMB();
    }
    __DSB();
}

void dcache_CleanByAddr (uint32_t *addr, uint32_t size)
{
    uint32_t mva = (uint32_t)addr & ~(L1_DATA_CACHE_BYTES - 1);

    for ( ; mva < ((uint32_t)addr + size); mva += L1_DATA_CACHE_BYTES)
    {
        __set_DCCMVAC(mva);
        __DMB();
    }
    __DSB();
}

void dcache_CleanInvalidateByAddr (uint32_t *addr, uint32_t size)
{
    uint32_t mva = (uint32_t)addr & ~(L1_DATA_CACHE_BYTES - 1);

    for ( ; mva < ((uint32_t)addr + size); mva += L1_DATA_CACHE_BYTES)
    {
        __set_DCCIMVAC((uint32_t)mva);
        __DMB();
    }
    __DSB();
}

void dcache_Enable(void)
{
    uint32_t sctlr = __get_SCTLR();
    if ((sctlr & SCTLR_C_Msk) == 0)
    {
        L1C_InvalidateDCacheAll();
        __set_SCTLR(sctlr | SCTLR_C_Msk);
    }
}

void dcache_Disable(void)
{
    uint32_t sctlr = __get_SCTLR();
    if (sctlr & SCTLR_C_Msk)
    {
        L1C_CleanDCacheAll();
        __set_SCTLR(sctlr & ~SCTLR_C_Msk);
        L1C_InvalidateDCacheAll();
    }
}


// *****************************************************************************
/* Function:
    void MMU_Initialize(void);

  Summary:
    Initialize and enable MMU.

  Description:
    Initialize the MMU with a flat address map (e.g. physical and virtual
    addresses are the same) and enable MMU and caches.

  Precondition:
    None.

  Parameters:
    None.

  Returns:
    None.
*/
void MMU_Initialize(void)
{
    uint32_t addr;

    /* Reset table entries */
    for (addr = 0; addr < 4096; addr++)
        tlb[addr] = 0;


    /* 0x00000000: IROM */
    tlb[0x000] = TTB_SECT_ADDR(0x00000000)
                  |  TTB_SECT_AP_READ_ONLY
                  | TTB_SECT_DOMAIN(0xF)
                  | TTB_SECT_EXEC
                  | TTB_SECT_CACHEABLE_WB
                  | TTB_TYPE_SECT; 

    /* 0x00100000: NFC RAM */
    tlb[0x001] = TTB_SECT_ADDR(0x00100000)
                  |  TTB_SECT_AP_FULL_ACCESS
                  | TTB_SECT_DOMAIN(0xF)
                  | TTB_SECT_EXEC
                  | TTB_SECT_SHAREABLE_DEVICE
                  | TTB_TYPE_SECT; 

    /* 0x00200000: SRAM */
    tlb[0x002] = TTB_SECT_ADDR(0x00200000)
                  |  TTB_SECT_AP_FULL_ACCESS
                  | TTB_SECT_DOMAIN(0xF)
                  | TTB_SECT_EXEC
                  | TTB_SECT_CACHEABLE_WB
                  | TTB_TYPE_SECT; 

    /* 0x00300000: UDPHS RAM */
    tlb[0x003] = TTB_SECT_ADDR(0x00300000)
                  |  TTB_SECT_AP_FULL_ACCESS
                  | TTB_SECT_DOMAIN(0xF)
                  | TTB_SECT_EXEC_NEVER
                  | TTB_SECT_SHAREABLE_DEVICE
                  | TTB_TYPE_SECT; 

    /* 0x00400000: UHPHS OHCI */
    tlb[0x004] = TTB_SECT_ADDR(0x00400000)
                  |  TTB_SECT_AP_FULL_ACCESS
                  | TTB_SECT_DOMAIN(0xF)
                  | TTB_SECT_EXEC_NEVER
                  | TTB_SECT_SHAREABLE_DEVICE
                  | TTB_TYPE_SECT; 

    /* 0x00500000: UHPHS EHCI */
    tlb[0x005] = TTB_SECT_ADDR(0x00500000)
                  |  TTB_SECT_AP_FULL_ACCESS
                  | TTB_SECT_DOMAIN(0xF)
                  | TTB_SECT_EXEC_NEVER
                  | TTB_SECT_SHAREABLE_DEVICE
                  | TTB_TYPE_SECT; 

    /* 0x00600000: AXIMX */
    tlb[0x006] = TTB_SECT_ADDR(0x00600000)
                  |  TTB_SECT_AP_FULL_ACCESS
                  | TTB_SECT_DOMAIN(0xF)
                  | TTB_SECT_EXEC_NEVER
                  | TTB_SECT_SHAREABLE_DEVICE
                  | TTB_TYPE_SECT; 

    /* 0x00700000: DAP */
    tlb[0x007] = TTB_SECT_ADDR(0x00700000)
                  |  TTB_SECT_AP_FULL_ACCESS
                  | TTB_SECT_DOMAIN(0xF)
                  | TTB_SECT_EXEC_NEVER
                  | TTB_SECT_SHAREABLE_DEVICE
                  | TTB_TYPE_SECT; 

    /* 0x00800000: PTCMEM */
    tlb[0x008] = TTB_SECT_ADDR(0x00800000)
                  |  TTB_SECT_AP_FULL_ACCESS
                  | TTB_SECT_DOMAIN(0xF)
                  | TTB_SECT_EXEC_NEVER
                  | TTB_SECT_SHAREABLE_DEVICE
                  | TTB_TYPE_SECT; 

    /* 0x00A00000: L2CC */
    for (addr = 0x00A; addr < 0x00C; addr++)
    {
        tlb[addr] = TTB_SECT_ADDR(addr << 20U)
                    | TTB_SECT_AP_FULL_ACCESS
                    | TTB_SECT_DOMAIN(0xF)
                    | TTB_SECT_EXEC_NEVER
                    | TTB_SECT_SHAREABLE_DEVICE
                    | TTB_TYPE_SECT;
    }

    /* 0x10000000: EBI CS0 */
    for (addr = 0x100; addr < 0x200; addr++)
    {
        tlb[addr] = TTB_SECT_ADDR(addr << 20U)
                    | TTB_SECT_AP_FULL_ACCESS
                    | TTB_SECT_DOMAIN(0xF)
                    | TTB_SECT_EXEC_NEVER
                    | TTB_SECT_STRONGLY_ORDERED
                    | TTB_TYPE_SECT;
    }

    /* 0x40000000: DDR AES CS */
    for (addr = 0x400; addr < 0x600; addr++)
    {
        tlb[addr] = TTB_SECT_ADDR(addr << 20U)
                    | TTB_SECT_AP_FULL_ACCESS
                    | TTB_SECT_DOMAIN(0xF)
                    | TTB_SECT_EXEC
                    | TTB_SECT_CACHEABLE_WB
                    | TTB_TYPE_SECT;
    }

    /* 0x60000000: EBI CS1 */
    for (addr = 0x600; addr < 0x700; addr++)
    {
        tlb[addr] = TTB_SECT_ADDR(addr << 20U)
                    | TTB_SECT_AP_FULL_ACCESS
                    | TTB_SECT_DOMAIN(0xF)
                    | TTB_SECT_EXEC_NEVER
                    | TTB_SECT_STRONGLY_ORDERED
                    | TTB_TYPE_SECT;
    }

    /* 0x70000000: EBI CS2 */
    for (addr = 0x700; addr < 0x800; addr++)
    {
        tlb[addr] = TTB_SECT_ADDR(addr << 20U)
                    | TTB_SECT_AP_FULL_ACCESS
                    | TTB_SECT_DOMAIN(0xF)
                    | TTB_SECT_EXEC_NEVER
                    | TTB_SECT_STRONGLY_ORDERED
                    | TTB_TYPE_SECT;
    }

    /* 0x80000000: EBI CS3 */
    for (addr = 0x800; addr < 0x900; addr++)
    {
        tlb[addr] = TTB_SECT_ADDR(addr << 20U)
                    | TTB_SECT_AP_FULL_ACCESS
                    | TTB_SECT_DOMAIN(0xF)
                    | TTB_SECT_EXEC_NEVER
                    | TTB_SECT_STRONGLY_ORDERED
                    | TTB_TYPE_SECT;
    }

    /* 0x90000000: QSPI AES0 */
    for (addr = 0x900; addr < 0x980; addr++)
    {
        tlb[addr] = TTB_SECT_ADDR(addr << 20U)
                    | TTB_SECT_AP_FULL_ACCESS
                    | TTB_SECT_DOMAIN(0xF)
                    | TTB_SECT_EXEC
                    | TTB_SECT_STRONGLY_ORDERED
                    | TTB_TYPE_SECT;
    }

    /* 0x98000000: QSPI AES1 */
    for (addr = 0x980; addr < 0xA00; addr++)
    {
        tlb[addr] = TTB_SECT_ADDR(addr << 20U)
                    | TTB_SECT_AP_FULL_ACCESS
                    | TTB_SECT_DOMAIN(0xF)
                    | TTB_SECT_EXEC
                    | TTB_SECT_STRONGLY_ORDERED
                    | TTB_TYPE_SECT;
    }

    /* 0xA0000000: SDMMC0 */
    tlb[0xA00] = TTB_SECT_ADDR(0xA0000000)
                  |  TTB_SECT_AP_FULL_ACCESS
                  | TTB_SECT_DOMAIN(0xF)
                  | TTB_SECT_EXEC_NEVER
                  | TTB_SECT_STRONGLY_ORDERED
                  | TTB_TYPE_SECT; 

    /* 0xB0000000: SDMMC1 */
    tlb[0xB00] = TTB_SECT_ADDR(0xB0000000)
                  |  TTB_SECT_AP_FULL_ACCESS
                  | TTB_SECT_DOMAIN(0xF)
                  | TTB_SECT_EXEC_NEVER
                  | TTB_SECT_STRONGLY_ORDERED
                  | TTB_TYPE_SECT; 

    /* 0xC0000000: NFC */
    for (addr = 0xC00; addr < 0xD00; addr++)
    {
        tlb[addr] = TTB_SECT_ADDR(addr << 20U)
                    | TTB_SECT_AP_FULL_ACCESS
                    | TTB_SECT_DOMAIN(0xF)
                    | TTB_SECT_EXEC_NEVER
                    | TTB_SECT_STRONGLY_ORDERED
                    | TTB_TYPE_SECT;
    }

    /* 0xD0000000: QSPI0MEM */
    for (addr = 0xD00; addr < 0xD80; addr++)
    {
        tlb[addr] = TTB_SECT_ADDR(addr << 20U)
                    | TTB_SECT_AP_FULL_ACCESS
                    | TTB_SECT_DOMAIN(0xF)
                    | TTB_SECT_EXEC
                    | TTB_SECT_STRONGLY_ORDERED
                    | TTB_TYPE_SECT;
    }

    /* 0xD8000000: QSPI1MEM */
    for (addr = 0xD80; addr < 0xE00; addr++)
    {
        tlb[addr] = TTB_SECT_ADDR(addr << 20U)
                    | TTB_SECT_AP_FULL_ACCESS
                    | TTB_SECT_DOMAIN(0xF)
                    | TTB_SECT_EXEC
                    | TTB_SECT_STRONGLY_ORDERED
                    | TTB_TYPE_SECT;
    }

    /* 0xF0000000: PERIPHERALS 0 */
    tlb[0xF00] = TTB_SECT_ADDR(0xF0000000)
                  |  TTB_SECT_AP_FULL_ACCESS
                  | TTB_SECT_DOMAIN(0xF)
                  | TTB_SECT_EXEC_NEVER
                  | TTB_SECT_STRONGLY_ORDERED
                  | TTB_TYPE_SECT; 

    /* 0xF8000000: PERIPHERALS 1 */
    tlb[0xF80] = TTB_SECT_ADDR(0xF8000000)
                  |  TTB_SECT_AP_FULL_ACCESS
                  | TTB_SECT_DOMAIN(0xF)
                  | TTB_SECT_EXEC_NEVER
                  | TTB_SECT_STRONGLY_ORDERED
                  | TTB_TYPE_SECT; 

    /* 0xFC000000: PERIPHERALS 2 */
    tlb[0xFC0] = TTB_SECT_ADDR(0xFC000000)
                  |  TTB_SECT_AP_FULL_ACCESS
                  | TTB_SECT_DOMAIN(0xF)
                  | TTB_SECT_EXEC_NEVER
                  | TTB_SECT_STRONGLY_ORDERED
                  | TTB_TYPE_SECT; 

    /* 0x20000000: DDR Chip Select */
    /* (16MB strongly ordered) */
    for (addr = 0x200; addr < 0x210; addr++)
        tlb[addr] = TTB_SECT_ADDR(addr << 20)
                      | TTB_SECT_AP_FULL_ACCESS
                      | TTB_SECT_DOMAIN(0xf)
                      | TTB_SECT_EXEC
                      | TTB_SECT_STRONGLY_ORDERED
                      | TTB_TYPE_SECT;

    /*Remainder of the DRAM is configured as cacheable */          
    for (addr = 0x210; addr < 0x400; addr++)
        tlb[addr] = TTB_SECT_ADDR(addr << 20)
                      | TTB_SECT_AP_FULL_ACCESS
                      | TTB_SECT_DOMAIN(0xf)
                      | TTB_SECT_EXEC
                      | TTB_SECT_CACHEABLE_WB
                      | TTB_TYPE_SECT;

    /* Enable MMU, I-Cache and D-Cache */
    mmu_configure(tlb);
    icache_Enable();
    MMU_Enable();
    dcache_Enable();

}
