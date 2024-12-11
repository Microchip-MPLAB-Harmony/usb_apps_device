/*******************************************************************************
* Copyright (C) 2019 Microchip Technology Inc. and its subsidiaries.
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

#include "device.h"
#include "plib_clk.h"

#define PLL_ID_PLLA     0U
#define PLL_ID_UPLL     1U


/*********************************************************************************
Generate Software delay (in multiples of microsecond units)
*********************************************************************************/
static void swDelayUs(uint32_t delay)
{
    uint32_t i, count;
    /* delay * (CPU_FREQ/1000000) / 6 */
    count = delay *  (600000000U/1000000U)/6U;
    for (i = 0; i < count; i++)
    {
        /* 6 CPU cycles per iteration */
        __NOP();
    }
}

/*********************************************************************************
Initialize UPLL
*********************************************************************************/
static void initUPLLCLK(void)
{
    /* STEP 1: PMC_PLL_UPDT to target UPLL, startup time of 150us and update disabled */
    PMC_REGS->PMC_PLL_UPDT = PMC_PLL_UPDT_STUPTIM(0x6U) |\
                             PMC_PLL_UPDT_UPDATE(0x0U) |\
                             PMC_PLL_UPDT_ID(PLL_ID_UPLL);

    /* STEP 2: Set the Analog controls to the values recommended by data sheet */
    PMC_REGS->PMC_PLL_ACR = PMC_PLL_ACR_LOOP_FILTER(0x12U) |\
                            PMC_PLL_ACR_LOCK_THR(0x4U) |\
                            PMC_PLL_ACR_CONTROL(0x810U);

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

    /* STEP 9: Enable UPLL, lock and PMC clock from UPLL */
    PMC_REGS->PMC_PLL_CTRL0 = PMC_PLL_CTRL0_ENLOCK_Msk |\
                              PMC_PLL_CTRL0_ENPLL_Msk |\
                              PMC_PLL_CTRL0_ENPLLCK_Msk;

    /* STEP 10: Wait for the lock bit to rise by polling the PMC_PLL_ISR0 */
    while ((PMC_REGS->PMC_PLL_ISR0 & PMC_PLL_ISR0_LOCKU_Msk) != PMC_PLL_ISR0_LOCKU_Msk)
    {
        /* Wait for PLL lock to rise */
    }
}

/*********************************************************************************
Initialize Programmable clocks
*********************************************************************************/
static void initProgrammableClk(void)
{
    PMC_REGS->PMC_SCDR |= PMC_SCDR_PCK0_Msk | PMC_SCDR_PCK1_Msk;
}

/*********************************************************************************
Initialize Peripheral clocks
*********************************************************************************/
static void initPeriphClk(void)
{
    const uint8_t EOL_MARKER = ((uint8_t)ID_PERIPH_MAX + 1U);
    struct {
        uint8_t id;
        uint8_t clken;
        uint8_t gclken;
        uint8_t css;
        uint8_t divv;
    } periphList[] =
    {
        { ID_PIOA, 1, 0, 0, 0},
        { ID_PIOB, 1, 0, 0, 0},
        { ID_PIOC, 1, 0, 0, 0},
        { ID_UDPHS, 1, 0, 0, 0},
        { ID_PIOD, 1, 0, 0, 0},
        { EOL_MARKER, 0, 0, 0, 0}//end of list marker
    };

    uint32_t count = sizeof(periphList)/sizeof(periphList[0]);
    for (uint32_t i = 0; i < count; i++)
    {
        if (periphList[i].id == EOL_MARKER)
        {
            break;
        }

        PMC_REGS->PMC_PCR = PMC_PCR_CMD_Msk |\
                            PMC_PCR_GCLKEN((uint32_t)periphList[i].gclken) |\
                            PMC_PCR_EN((uint32_t)periphList[i].clken) |\
                            PMC_PCR_GCLKDIV((uint32_t)periphList[i].divv) |\
                            PMC_PCR_GCLKCSS((uint32_t)periphList[i].css) |\
                            PMC_PCR_PID((uint32_t)periphList[i].id);
    }

}


/*********************************************************************************
Clock Initialize
*********************************************************************************/
void CLK_Initialize( void )
{

    /* Initialize UPLLA clock generator */
    initUPLLCLK();

    /* Initialize Programmable clock */
    initProgrammableClk();

    /* Initialize Peripheral clock */
    initPeriphClk();
}
