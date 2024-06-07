/*******************************************************************************
* Copyright (C) 2024 Microchip Technology Inc. and its subsidiaries.
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


#include <stdbool.h>
#include "device.h"
#include "plib_clk.h"

#define PLL_ID_CPUPLL           0U
#define PLL_ID_SYSPLL           1U
#define PLL_ID_DDRPLL           2U
#define PLL_ID_GPUPLL           3U
#define PLL_ID_BAUDPLL          4U
#define PLL_ID_AUDIOPLL         5U
#define PLL_ID_ETHPLL           6U
#define PLL_ID_LVDSPLL          7U
#define PLL_ID_USBPLL           8U
#define PLL_UPDT_STUPTIM_VAL    0x3FU
#define PLL_ACR_RECOMMENDED     0x00070010U

#define APB9_BASE 0xE8800000U
#define TIMESTAMP_OFFSET 0x43000U
#define PSELCTRL_REGS ((pselctrl_registers_t*)(APB9_BASE + TIMESTAMP_OFFSET))

#define CNTCR_EN_Pos            0U
#define CNTCR_EN_Msk            (1U << CNTCR_EN_Pos)

#define SYSTEM_COUNTER_FREQUENCY 24000000U

typedef struct pmc_pll_cfg {
    uint32_t mul;
    uint32_t divpll;
    bool eniopllck;
    uint32_t divio;
    uint32_t count;
    uint32_t fracr;
    uint32_t acr;
    bool ss;
    uint32_t step;
    uint32_t nstep;
}pmc_pll_cfg_t;


typedef struct
{
    __IO   uint32_t CNTCR;
    __O    uint32_t CNTSR;
    __IO   uint32_t CNTCVL;
    __IO   uint32_t CNTCVU;
    __I    uint8_t  Reserved[0x14];
    __IO   uint32_t CNTFID0;
}pselctrl_registers_t;



/*********************************************************************************
Generate Software delay (in multiples of microsecond units)
*********************************************************************************/
static void swDelayUs(uint32_t delay)
{
    uint32_t i, count;
    /* delay * (CPU_FREQ/1000000) / 6 */
    count = delay *  (800000000U/1000000U)/6U;
    for (i = 0; i < count; i++)
    {
        /* 6 CPU cycles per iteration */
        __NOP();
    }
}

/*********************************************************************************
Initialize USBPLL
*********************************************************************************/
static void initUSBPLLCLK(void)
{
    /* STEP 1: PMC_PLL_UPDT to target USBPLL, startup time of 150us and update disabled */
    PMC_REGS->PMC_PLL_UPDT = PMC_PLL_UPDT_STUPTIM(0x6U) |\
                             PMC_PLL_UPDT_UPDATE(0x0U) |\
                             PMC_PLL_UPDT_ID(PLL_ID_USBPLL);

    /* STEP 2: Set the Analog controls to the values recommended by data sheet */
    PMC_REGS->PMC_PLL_ACR = PMC_PLL_ACR_LOOP_FILTER(0x1BU) |\
                            PMC_PLL_ACR_LOCK_THR(0x4U) |\
                            PMC_PLL_ACR_CONTROL(0x10U);

    /* STEP 3: Set loop paramaters for the fractional PLL */
    PMC_REGS->PMC_PLL_CTRL1 = PMC_PLL_CTRL1_MUL(39U) |\
                              PMC_PLL_CTRL1_FRACR(0U);

    /* STEP 4: Enable UTMI Bandgap */
    PMC_REGS->PMC_PLL_ACR |= PMC_PLL_ACR_UTMIBG_Msk;

    /* STEP 5: Wait 10 us */
    swDelayUs(10);

    /* STEP 6: Enable UTMI Internal Regulator */
    PMC_REGS->PMC_PLL_ACR |= PMC_PLL_ACR_UTMIVR_Msk;

    /* STEP 7: Wait 10 us */
    swDelayUs(10);

    /* STEP 8: Update the PLL controls */
    PMC_REGS->PMC_PLL_UPDT |= PMC_PLL_UPDT_UPDATE_Msk;

    /* STEP 9: Enable USBPLL, lock and PMC clock from USBPLL */
    PMC_REGS->PMC_PLL_CTRL0 = PMC_PLL_CTRL0_ENLOCK_Msk |\
                              PMC_PLL_CTRL0_ENPLL_Msk |\
                              PMC_PLL_CTRL0_ENPLLCK_Msk;

    /* STEP 10: Wait for the lock bit to rise by polling the PMC_PLL_ISR0 */
    uint32_t pll_lock_mask = 1UL << PLL_ID_USBPLL;
    while ((PMC_REGS->PMC_PLL_ISR0 & pll_lock_mask) != pll_lock_mask)
    {
        /* Wait for PLL lock to rise */
    }
}
/*********************************************************************************
Initialize Programmable clocks
*********************************************************************************/
static void initProgrammableClocks(void)
{
    PMC_REGS->PMC_SCDR = PMC_SCDR_PCK_Msk;
    PMC_REGS->PMC_PCK[0] = PMC_PCK_CSS_USBPLL |\
                                PMC_PCK_PRES(0UL);
    PMC_REGS->PMC_SCER |= PMC_SCDR_PCK0_Msk;
    while ((PMC_REGS->PMC_SR & PMC_SR_PCKRDY0_Msk) != PMC_SR_PCKRDY0_Msk)
    {
        /* Wait for PCKRDY */
    }
}

/*********************************************************************************
Initialize Peripheral clocks
*********************************************************************************/
static void initPeripheralClocks(void)
{
    const uint8_t EOL_MARKER = ((uint8_t)ID_PERIPH_MAX + 1U);
    struct {
        uint8_t id;
        uint8_t clken;
        uint8_t gclken;
        uint8_t css;
        uint8_t divs;
    } periphList[] =
    {
        {ID_PIOA, 1U, 0U, 0U, 0U},
        {ID_UDPHSA, 1U, 0U, 0U, 0U},
        {EOL_MARKER, 0U, 0U, 0U, 0U}//end of list marker
    };

    uint32_t count = sizeof(periphList)/sizeof(periphList[0]);
    for (uint32_t i = 0U; i < count; i++)
    {
        if (periphList[i].id == EOL_MARKER)
        {
            break;
        }

        PMC_REGS->PMC_PCR = PMC_PCR_CMD_Msk |\
                            PMC_PCR_GCLKEN(periphList[i].gclken) |\
                            PMC_PCR_EN(periphList[i].clken) |\
                            PMC_PCR_GCLKDIV(periphList[i].divs) |\
                            PMC_PCR_GCLKCSS(periphList[i].css) |\
                            PMC_PCR_PID(periphList[i].id);
    }

}

/*********************************************************************************
Initialize USB OHCI clocks
*********************************************************************************/
static void initUSBClk ( void )
{
    /* Configure USB OHCI clock source and divider */
    PMC_REGS->PMC_USB = PMC_USB_USBDIV(9U) | PMC_USB_USBS_USBPLL;

    /* Enable UHP48M and UHP12M OHCI clocks */
    PMC_REGS->PMC_SCER |= PMC_SCER_UHP_Msk;
}

/*********************************************************************************
Initialize system counter
*********************************************************************************/
static void initSystemCounter(void)
{
    /* Turn on GCLK 28 if it is not enabled already  */
    if ((PMC_REGS->PMC_GCSR0 & PMC_GCSR0_GPID28_Msk) == 0U)
    {
        PMC_REGS->PMC_PCR = PMC_PCR_CMD_Msk |\
                            PMC_PCR_GCLKEN(1U) |\
                            PMC_PCR_EN(0U) |\
                            PMC_PCR_GCLKDIV(0U) |\
                            PMC_PCR_GCLKCSS_MAINCK |\
                            PMC_PCR_PID(28U);
        while((PMC_REGS->PMC_GCSR0 & PMC_GCSR0_GPID28_Msk) == 0U)
        {
            /* Wait for GCLK 28 to enabled */
        }
    }

    /* Set timestamp count frequency */
    PSELCTRL_REGS->CNTFID0 = SYSTEM_COUNTER_FREQUENCY;

    /* Enable counter */
    PSELCTRL_REGS->CNTCR |= CNTCR_EN_Msk;

}

/*********************************************************************************
Clock Initialize
*********************************************************************************/
void CLK_Initialize( void )
{
    /* Set main crystal frequency for UTMI PLL */
    PMC_REGS->PMC_XTALF = PMC_XTALF_XTALF_F24M;
    SFRBU_REGS->SFRBU_PSWBU = SFRBU_PSWBU_CTRL_SOFT | SFRBU_PSWBU_PSWKEY_PASSWD;


    /* Initialize USBPLL clock generator */
    initUSBPLLCLK();
    /* Initialize Programmable clock */
    initProgrammableClocks();

    /* Initialize Peripheral clock */
    initPeripheralClocks();

    /* Initialize USB Clock */
    initUSBClk();

    /* Initialize system counter (timestamp generator) */
    initSystemCounter();
}

