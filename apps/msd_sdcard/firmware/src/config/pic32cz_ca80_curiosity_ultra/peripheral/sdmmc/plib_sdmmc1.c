/*******************************************************************************
  SDMMC1 PLIB

  Company:
    Microchip Technology Inc.

  File Name:
    plib_sdmmc1.c

  Summary:
    SDMMC1 PLIB Implementation File

  Description:
    None

*******************************************************************************/

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

#include "device.h"
#include "plib_sdmmc1.h"
#include "interrupts.h"

// *****************************************************************************
// *****************************************************************************
// Section: Include Files
// *****************************************************************************
// *****************************************************************************

#include "plib_sdmmc_common.h"

#define SDMMC1_DMA_NUM_DESCR_LINES        (1U)
#define SDMMC1_BASE_CLOCK_FREQUENCY       (100000000U)
#define SDMMC1_MAX_BLOCK_SIZE             (0x200U)

#define SDMMC1_DMA_DESC_TABLE_SIZE   (8U * 1U)
#define SDMMC1_DMA_DESC_TABLE_SIZE_CACHE_ALIGN   (SDMMC1_DMA_DESC_TABLE_SIZE + ((SDMMC1_DMA_DESC_TABLE_SIZE % CACHE_LINE_SIZE)? (CACHE_LINE_SIZE - (SDMMC1_DMA_DESC_TABLE_SIZE % CACHE_LINE_SIZE)) : 0U))

static CACHE_ALIGN SDMMC_ADMA_DESCR sdmmc1DmaDescrTable[(SDMMC1_DMA_DESC_TABLE_SIZE_CACHE_ALIGN/8U)];

volatile static SDMMC_OBJECT sdmmc1Obj;

static void SDMMC1_VariablesInit ( void )
{
    sdmmc1Obj.errorStatus = 0U;
    sdmmc1Obj.isCmdInProgress = false;
    sdmmc1Obj.isDataInProgress = false;
    sdmmc1Obj.callback = NULL;
}

static void SDMMC1_TransferModeSet ( uint32_t opcode )
{
    uint16_t transferMode = 0U;

    switch(opcode)
    {
        case SDMMC_CMD_READ_SCR:
        case SDMMC_CMD_SET_BUS_WIDTH:
        case SDMMC_CMD_READ_SINGLE_BLOCK:
            /* Read single block of data from the device. */
            transferMode = (SDMMC_TMR_DMAEN_ENABLE | SDMMC_TMR_DTDSEL_Msk);
            break;

        case SDMMC_CMD_READ_MULTI_BLOCK:
            /* Read multiple blocks of data from the device. */
            transferMode = (SDMMC_TMR_DMAEN_ENABLE | SDMMC_TMR_DTDSEL_Msk | SDMMC_TMR_MSBSEL_Msk | SDMMC_TMR_BCEN_Msk);
            break;

        case SDMMC_CMD_WRITE_SINGLE_BLOCK:
            /* Write single block of data to the device. */
            transferMode = SDMMC_TMR_DMAEN_ENABLE;
            break;

        case SDMMC_CMD_WRITE_MULTI_BLOCK:
            /* Write multiple blocks of data to the device. */
            transferMode = (SDMMC_TMR_DMAEN_ENABLE | SDMMC_TMR_MSBSEL_Msk | SDMMC_TMR_BCEN_Msk);
            break;

        default: /* Do Nothing */
            break;
    }

    SDMMC1_REGS->SDMMC_TMR = transferMode;
}

void __attribute__((used)) SDMMC1_InterruptHandler(void)
{
    uint16_t nistr = 0U;
    uint16_t eistr = 0U;
    SDMMC_XFER_STATUS xferStatus = 0;

    nistr = SDMMC1_REGS->SDMMC_NISTR;
    eistr = SDMMC1_REGS->SDMMC_EISTR;
    /* Save the error in a global variable for later use */
    sdmmc1Obj.errorStatus |= eistr;

    if ((nistr & SDMMC_NISTR_CINS_Msk) != 0U)
    {
        xferStatus |= SDMMC_XFER_STATUS_CARD_INSERTED;
    }
    if ((nistr & SDMMC_NISTR_CREM_Msk) != 0U)
    {
        xferStatus |= SDMMC_XFER_STATUS_CARD_REMOVED;
    }

    if (sdmmc1Obj.isCmdInProgress == true)
    {
        if ((nistr & (SDMMC_NISTR_CMDC_Msk | SDMMC_NISTR_TRFC_Msk | SDMMC_NISTR_ERRINT_Msk)) != 0U)
        {
            if ((nistr & SDMMC_NISTR_ERRINT_Msk) != 0U)
            {
                if ((eistr & (SDMMC_EISTR_CMDTEO_Msk | \
                                      SDMMC_EISTR_CMDCRC_Msk | \
                                      SDMMC_EISTR_CMDEND_Msk | \
                                      SDMMC_EISTR_CMDIDX_Msk)) != 0U)
                {
                    SDMMC1_ErrorReset (SDMMC_RESET_CMD);
                }
            }
            sdmmc1Obj.isCmdInProgress = false;
            xferStatus |= SDMMC_XFER_STATUS_CMD_COMPLETED;
        }
    }

    if (sdmmc1Obj.isDataInProgress == true)
    {
        if ((nistr & (SDMMC_NISTR_TRFC_Msk | SDMMC_NISTR_DMAINT_Msk | SDMMC_NISTR_ERRINT_Msk)) != 0U)
        {
            if ((nistr & SDMMC_NISTR_ERRINT_Msk) != 0U)
            {
                if ((eistr & (SDMMC_EISTR_DATTEO_Msk | \
                            SDMMC_EISTR_DATCRC_Msk | \
                            SDMMC_EISTR_DATEND_Msk)) != 0U)
                {
                    SDMMC1_ErrorReset (SDMMC_RESET_DAT);
                }
            }
            if ((nistr & SDMMC_NISTR_TRFC_Msk) != 0U)
            {
                /* Clear the data timeout error as transfer complete has higher priority */
                sdmmc1Obj.errorStatus &= ((uint16_t)~SDMMC_EISTR_DATTEO_Msk);
            }
            sdmmc1Obj.isDataInProgress = false;
            xferStatus |= SDMMC_XFER_STATUS_DATA_COMPLETED;
        }
    }

    /* Clear normal interrupt and error status bits that have been processed */
    SDMMC1_REGS->SDMMC_NISTR = nistr;
    SDMMC1_REGS->SDMMC_EISTR = eistr;

    if ((sdmmc1Obj.callback != NULL) && ((uint32_t)xferStatus > 0U))
    {
        uintptr_t context = sdmmc1Obj.context;
        sdmmc1Obj.callback(xferStatus, context);
    }
}

void SDMMC1_ErrorReset ( SDMMC_RESET_TYPE resetType )
{
    SDMMC1_REGS->SDMMC_SRR = (uint8_t)resetType;

    /* Wait until host resets the error status */
    while ((SDMMC1_REGS->SDMMC_SRR & (uint8_t)resetType) != 0U)
    {
        /* Do Nothing */
    }
}

uint16_t SDMMC1_GetError(void)
{
    return sdmmc1Obj.errorStatus;
}

uint16_t SDMMC1_CommandErrorGet(void)
{
    return (sdmmc1Obj.errorStatus & (SDMMC_EISTR_CMDTEO_Msk | SDMMC_EISTR_CMDCRC_Msk | \
                SDMMC_EISTR_CMDEND_Msk | SDMMC_EISTR_CMDIDX_Msk));
}

uint16_t SDMMC1_DataErrorGet(void)
{
    return (sdmmc1Obj.errorStatus & (SDMMC_EISTR_ADMA_Msk | SDMMC_EISTR_DATTEO_Msk | \
            SDMMC_EISTR_DATCRC_Msk | SDMMC_EISTR_DATEND_Msk));
}

void SDMMC1_BusWidthSet ( SDMMC_BUS_WIDTH busWidth )
{
    if (busWidth == SDMMC_BUS_WIDTH_4_BIT)
    {
       SDMMC1_REGS->SDMMC_HC1R |= SDMMC_HC1R_DW_4BIT;
    }
    else
    {
        SDMMC1_REGS->SDMMC_HC1R &= ((uint8_t)~SDMMC_HC1R_DW_4BIT);
    }
}

void SDMMC1_SpeedModeSet ( SDMMC_SPEED_MODE speedMode )
{
    if (speedMode == SDMMC_SPEED_MODE_HIGH)
    {
       SDMMC1_REGS->SDMMC_HC1R |= SDMMC_HC1R_HSEN_Msk;
    }
    else
    {
       SDMMC1_REGS->SDMMC_HC1R &= ((uint8_t)~SDMMC_HC1R_HSEN_Msk);
    }
}

bool SDMMC1_IsCmdLineBusy ( void )
{
    return(((SDMMC1_REGS->SDMMC_PSR & SDMMC_PSR_CMDINHC_Msk) == SDMMC_PSR_CMDINHC_Msk)? true : false);
}

bool SDMMC1_IsDatLineBusy ( void )
{
    return (((SDMMC1_REGS->SDMMC_PSR & SDMMC_PSR_CMDINHD_Msk) == SDMMC_PSR_CMDINHD_Msk)? true : false);
}

bool SDMMC1_IsCardAttached ( void )
{
    return ((SDMMC1_REGS->SDMMC_PSR & SDMMC_PSR_CARDINS_Msk) == SDMMC_PSR_CARDINS_Msk)? true : false;
}

void SDMMC1_BlockSizeSet ( uint16_t blockSize )
{
    if(blockSize == 0U)
    {
        blockSize = 1U;
    }
    else if(blockSize > SDMMC1_MAX_BLOCK_SIZE)
    {
        blockSize = SDMMC1_MAX_BLOCK_SIZE;
    }
    else
    {
      /* Do not modify the block size */
    }
    SDMMC1_REGS->SDMMC_BSR = (SDMMC_BSR_BOUNDARY_4K | SDMMC_BSR_BLOCKSIZE(blockSize));
}

void SDMMC1_BlockCountSet ( uint16_t numBlocks )
{
    SDMMC1_REGS->SDMMC_BCR = numBlocks;
}

void SDMMC1_ClockEnable ( void )
{
    /* Start the internal clock  */
    SDMMC1_REGS->SDMMC_CCR |= SDMMC_CCR_INTCLKEN_Msk;

    /* Wait for the internal clock to stabilize */
    while (((SDMMC1_REGS->SDMMC_CCR & SDMMC_CCR_INTCLKS_Msk)) == 0U)
    {
        /* Do Nothing */
    }

    /* Enable the SD Clock */
    SDMMC1_REGS->SDMMC_CCR |= SDMMC_CCR_SDCLKEN_Msk;
}

void SDMMC1_ClockDisable ( void )
{
    SDMMC1_REGS->SDMMC_CCR &= ((uint16_t)~(SDMMC_CCR_INTCLKEN_Msk | SDMMC_CCR_SDCLKEN_Msk));
}

void SDMMC1_DmaSetup (
    uint8_t* buffer,
    uint32_t numBytes,
    SDMMC_DATA_TRANSFER_DIR direction
)
{
    (void)direction;

    /* Each ADMA2 descriptor can transfer 65536 bytes (or 128 blocks) of data.
     * Block count register being a 16 bit register, maximum number of blocks is
     * limited to 65536 blocks. Hence, combined length of data that can be
     * transferred by all the descriptors is 512 bytes x 65536 blocks, assuming
     * a block size of 512 bytes.
     */

    if (numBytes <= 65536U)
    {
        sdmmc1DmaDescrTable[0].address = (uint32_t)(buffer);
        sdmmc1DmaDescrTable[0].length = (uint16_t)numBytes;
        sdmmc1DmaDescrTable[0].attribute = \
            (SDMMC_DESC_TABLE_ATTR_XFER_DATA | SDMMC_DESC_TABLE_ATTR_VALID | SDMMC_DESC_TABLE_ATTR_INTR);


        /* The last descriptor line must indicate the end of the descriptor list */
        sdmmc1DmaDescrTable[0].attribute |= (uint16_t)(SDMMC_DESC_TABLE_ATTR_END);

        /* Clean the cache associated with the modified descriptors */
        DCACHE_CLEAN_BY_ADDR(sdmmc1DmaDescrTable, (int32_t)(sizeof(SDMMC_ADMA_DESCR)));

        /* Set the starting address of the descriptor table */
        SDMMC1_REGS->SDMMC_ASAR = (uint32_t)(&sdmmc1DmaDescrTable[0]);
    }
}

bool SDMMC1_ClockSet ( uint32_t speed)
{
    uint32_t baseclk_frq = 0U;
    uint16_t divider = 0U;
    uint32_t clkmul = 0U;
    bool retval = false;

    /* Disable clock before changing it */
    if ((SDMMC1_REGS->SDMMC_CCR & SDMMC_CCR_SDCLKEN_Msk) != 0U)
    {
        while ((SDMMC1_REGS->SDMMC_PSR & (SDMMC_PSR_CMDINHC_Msk | SDMMC_PSR_CMDINHD_Msk)) != 0U)
        {
            /* Do Nothing */
        }
        SDMMC1_REGS->SDMMC_CCR &= ((uint16_t)~SDMMC_CCR_SDCLKEN_Msk);
    }

    /* Get the base clock frequency */
    baseclk_frq = (SDMMC1_REGS->SDMMC_CA0R & (SDMMC_CA0R_BASECLKF_Msk)) >> SDMMC_CA0R_BASECLKF_Pos;
    if (baseclk_frq == 0U)
    {
        baseclk_frq = SDMMC1_BASE_CLOCK_FREQUENCY/2U;
    }
    else
    {
        baseclk_frq *= 1000000U;
    }

    clkmul = (SDMMC1_REGS->SDMMC_CA1R & (SDMMC_CA1R_CLKMULT_Msk)) >> SDMMC_CA1R_CLKMULT_Pos;
    if (clkmul > 0U)
    {
        /* F_SDCLK = F_MULTCLK/(DIV+1), where F_MULTCLK = F_BASECLK x (CLKMULT+1)
            F_SDCLK = (F_BASECLK x (CLKMULT + 1))/(DIV + 1)
            For a given F_SDCLK, DIV = [(F_BASECLK x (CLKMULT + 1))/F_SDCLK] - 1
        */
        divider = (uint16_t)((baseclk_frq * (clkmul + 1U)) / speed);
        if (divider > 0U)
        {
            divider = divider - 1U;
        }
        SDMMC1_REGS->SDMMC_CCR |= SDMMC_CCR_CLKGSEL_Msk;

        if (speed > (uint32_t)SDMMC_CLOCK_FREQ_DS_25_MHZ)
        {
            /* Enable the high speed mode */
            SDMMC1_REGS->SDMMC_HC1R |= SDMMC_HC1R_HSEN_Msk;
        }
        else
        {
            /* Clear the high speed mode */
            SDMMC1_REGS->SDMMC_HC1R &= ((uint8_t)~SDMMC_HC1R_HSEN_Msk);
        }

        if (((SDMMC1_REGS->SDMMC_HC1R & SDMMC_HC1R_HSEN_Msk) != 0U) && (divider == 0U))
        {
            /* IP limitation, if high speed mode is active divider must be non zero */
            divider = 1U;
        }

        /* Set the divider */
        SDMMC1_REGS->SDMMC_CCR &= ((uint16_t)~(SDMMC_CCR_SDCLKFSEL_Msk | SDMMC_CCR_USDCLKFSEL_Msk));
        SDMMC1_REGS->SDMMC_CCR |= SDMMC_CCR_SDCLKFSEL((divider & 0xffU)) | SDMMC_CCR_USDCLKFSEL((divider >> 8U));

        /* Enable internal clock */
        SDMMC1_REGS->SDMMC_CCR |= SDMMC_CCR_INTCLKEN_Msk;

        while((SDMMC1_REGS->SDMMC_CCR & SDMMC_CCR_INTCLKS_Msk) == 0U)
        {
            /* Wait for the internal clock to stabilize */
        }

        /* Enable the SDCLK */
        SDMMC1_REGS->SDMMC_CCR |= SDMMC_CCR_SDCLKEN_Msk;

        /* return true */
        retval = true;
    }
    return retval;
}

void SDMMC1_ResponseRead (
    SDMMC_READ_RESPONSE_REG respReg,
    uint32_t* response
)
{
    switch (respReg)
    {
        case SDMMC_READ_RESP_REG_1:
            *response = SDMMC1_REGS->SDMMC_RR[1];
            break;

        case SDMMC_READ_RESP_REG_2:
            *response = SDMMC1_REGS->SDMMC_RR[2];
            break;

        case SDMMC_READ_RESP_REG_3:
            *response = SDMMC1_REGS->SDMMC_RR[3];
            break;

        case SDMMC_READ_RESP_REG_ALL:
            response[0] = SDMMC1_REGS->SDMMC_RR[0];
            response[1] = SDMMC1_REGS->SDMMC_RR[1];
            response[2] = SDMMC1_REGS->SDMMC_RR[2];
            response[3] = SDMMC1_REGS->SDMMC_RR[3];
            break;

        case SDMMC_READ_RESP_REG_0:
        default:
            *response = SDMMC1_REGS->SDMMC_RR[0];
            break;
    }
}

void SDMMC1_CommandSend (
    uint8_t opCode,
    uint32_t argument,
    uint8_t respType,
    SDMMC_DataTransferFlags transferFlags
)
{
    uint16_t cmd = 0U;
    uint16_t normalIntSigEnable = 0U;
    uint16_t flags = 0U;

    /* Clear the flags */
    sdmmc1Obj.isCmdInProgress = false;
    sdmmc1Obj.isDataInProgress = false;
    sdmmc1Obj.errorStatus = 0U;

    /* Keep the card insertion and removal interrupts enabled */
    normalIntSigEnable = (SDMMC_NISIER_CINS_Msk | SDMMC_NISIER_CREM_Msk);

    switch (respType)
    {
        case SDMMC_CMD_RESP_R1:
        case SDMMC_CMD_RESP_R5:
        case SDMMC_CMD_RESP_R6:
        case SDMMC_CMD_RESP_R7:
            flags = (SDMMC_CR_RESPTYP_48_BIT_Val | SDMMC_CR_CMDCCEN_Msk | SDMMC_CR_CMDICEN_Msk);
            break;

        case SDMMC_CMD_RESP_R3:
        case SDMMC_CMD_RESP_R4:
            flags = SDMMC_CR_RESPTYP_48_BIT_Val;
            break;

        case SDMMC_CMD_RESP_R1B:
            flags = (SDMMC_CR_RESPTYP_48_BIT_BUSY_Val | SDMMC_CR_CMDCCEN_Msk | SDMMC_CR_CMDICEN_Msk);

            /* Commands with busy response will wait for transfer complete bit */
            normalIntSigEnable |= SDMMC_NISIER_TRFC_Msk;
            break;

        case SDMMC_CMD_RESP_R2:
            flags = (SDMMC_CR_RESPTYP_136_BIT_Val | SDMMC_CR_CMDCCEN_Msk);
            break;

        default:
            flags = SDMMC_CR_RESPTYP_NONE_Val;
            break;
    }

    /* Enable command complete interrupt, for commands that do not have busy response type */
    if (respType != (uint8_t)SDMMC_CMD_RESP_R1B)
    {
        normalIntSigEnable |= SDMMC_NISIER_CMDC_Msk;
    }

    if (transferFlags.isDataPresent == true)
    {
        sdmmc1Obj.isDataInProgress = true;
        SDMMC1_TransferModeSet(opCode);
        /* Enable data transfer complete and DMA interrupt */
        normalIntSigEnable |= (SDMMC_NISIER_TRFC_Msk | SDMMC_NISIER_DMAINT_Msk);
    }
    else
    {
        SDMMC1_REGS->SDMMC_TMR = 0U;
    }

    /* Enable the needed normal interrupt signals */
    SDMMC1_REGS->SDMMC_NISIER = normalIntSigEnable;

    /* Enable all the error interrupt signals */
    SDMMC1_REGS->SDMMC_EISIER = SDMMC_EISIER_Msk;

    SDMMC1_REGS->SDMMC_ARG1R = argument;

    sdmmc1Obj.isCmdInProgress = true;

    cmd = (uint16_t)(SDMMC_CR_CMDIDX((uint16_t)opCode) | ((uint16_t)transferFlags.isDataPresent << SDMMC_CR_DPSEL_Pos) | flags);
    SDMMC1_REGS->SDMMC_CR = cmd;
}

void SDMMC1_ModuleInit( void )
{
    /* Reset module*/
    SDMMC1_REGS->SDMMC_SRR |= SDMMC_SRR_SWRSTALL_Msk;
    while((SDMMC1_REGS->SDMMC_SRR & SDMMC_SRR_SWRSTALL_Msk) == SDMMC_SRR_SWRSTALL_Msk)
    {
        /* Do Nothing */
    }

    /* Clear the normal and error interrupt status flags */
    SDMMC1_REGS->SDMMC_EISTR = SDMMC_EISTR_Msk;
    SDMMC1_REGS->SDMMC_NISTR = SDMMC_NISTR_Msk;

    /* Enable all the normal interrupt status and error status generation */
    SDMMC1_REGS->SDMMC_NISTER = SDMMC_NISTER_Msk;
    SDMMC1_REGS->SDMMC_EISTER = SDMMC_EISTER_Msk;

    /* Set timeout control register */
    SDMMC1_REGS->SDMMC_TCR = SDMMC_TCR_DTCVAL(0xEU);

    /* Enable ADMA2 (Check CA0R capability register first) */
    SDMMC1_REGS->SDMMC_HC1R |= SDMMC_HC1R_DMASEL(2U);

    /* SD Bus Voltage Select = 3.3V, SD Bus Power = On */
    SDMMC1_REGS->SDMMC_PCR = (SDMMC_PCR_SDBVSEL_3V3 | SDMMC_PCR_SDBPWR_ON);

    /* Set initial clock to 400 KHz*/
    (void) SDMMC1_ClockSet (SDMMC_CLOCK_FREQ_400_KHZ);

    /* Clear the high speed bit and set the data width to 1-bit mode */
    SDMMC1_REGS->SDMMC_HC1R &= ((uint8_t)~(SDMMC_HC1R_HSEN_Msk | SDMMC_HC1R_DW_Msk));

    /* Enable card inserted and card removed interrupt signals */
    SDMMC1_REGS->SDMMC_NISIER = (SDMMC_NISIER_CINS_Msk | SDMMC_NISIER_CREM_Msk);
}

void SDMMC1_Initialize( void )
{
    SDMMC1_VariablesInit();
    SDMMC1_ModuleInit();
}

void SDMMC1_CallbackRegister(SDMMC_CALLBACK callback, uintptr_t contextHandle)
{
    if (callback != NULL)
    {
        sdmmc1Obj.callback = callback;
        sdmmc1Obj.context = contextHandle;
    }
}