/*******************************************************************************
* Copyright (C) 2021 Microchip Technology Inc. and its subsidiaries.
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

/*******************************************************************************
  MPLAB Harmony Application Source File

  Company:
    Microchip Technology Inc.

  File Name:
    app.c

  Summary:
    This file contains the source code for the MPLAB Harmony application.

  Description:
    This file contains the source code for the MPLAB Harmony application.  It
    implements the logic of the application's state machine and it may call
    API routines of other MPLAB Harmony modules in the system, such as drivers,
    system services, and middleware.  However, it does not call any of the
    system interfaces (such as the "Initialize" and "Tasks" functions) of any of
    the modules in the system or make any assumptions about when those functions
    are called.  That is the responsibility of the configuration-specific system
    files.
 *******************************************************************************/

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include "app.h"

// *****************************************************************************
// *****************************************************************************
// Section: Global Data Definitions
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Application Data

  Summary:
    Holds application data

  Description:
    This structure holds the application's data.

  Remarks:
    This structure should be initialized by the APP_Initialize function.

    Application strings and buffers are be defined outside this structure.
*/

APP_DATA appData;

/* Pointer to SERCOM registers */
sercom_registers_t* APP_SERCOM_REGS; 
        
/* Application buffers needed to hold data from CDC and UART ports */
USB_ALIGN APP_CDC_RX_BUFFER cPort[PORT_INDEX_COUNT];
USB_ALIGN APP_UART_RX_BUFFER uPort[PORT_INDEX_COUNT];

/* Application buffers needed to hold CDC data packets */
USB_ALIGN uint8_t uReadBuffer[PORT_INDEX_COUNT][APP_CDC_READ_PACKET_LENGTH];
USB_ALIGN uint8_t uWriteBuffer[PORT_INDEX_COUNT][APP_CDC_WRITE_PACKET_LENGTH];

// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************


/*******************************************************************************
 * This is DMA Channel 0 Receive complete callback function. It is called
 * when a scheduled DMA transfer is complete.
 ******************************************************************************/
static void APP_DMAC_0_U1ReceiveCompleteCallback(DMAC_TRANSFER_EVENT event, uintptr_t contextHandle)
{
    /* De-assert the RTS pin. This is to indicate that the Bridge cannot receive
     * data on the UART side */

    appUSARTInterface.RTSClear();

    /* Clear the SOF Counter Values to avoid unnecessary time outs */
    appData.uSOFCounter[PORT1] = 0;
    appData.uSOFTimeoutTick[PORT1] = 0;
    appData.prevSOFValue[PORT1] = 0;

    /* Timer is configured to count the number of Events generated by the DMA.
     * DMA is configured to generate an Event after completion of Beat Transfer.
     * Timer COUNT value has the number of Bytes (Beats) received by the DMA.
     * After reading it, reset the COUNT value to initiate next read. */

    appData.uartObj[PORT1].uActualReadByteCount = appTCInterface.Timer16bitCounterGet();
    appTCInterface.Timer16bitCounterSet(0);

    /* Update the uRxFilledByteCount and uHeadPtr */
    appData.uartObj[PORT1].uRxFilledByteCount += appData.uartObj[PORT1].uActualReadByteCount;
    appData.uartObj[PORT1].uHeadPtr += appData.uartObj[PORT1].uActualReadByteCount;

    /* If uHeadPtr reaches end of buffer, reset it to start of buffer */
    if(appData.uartObj[PORT1].uHeadPtr >= appData.uartObj[PORT1].uEndPtr)
    {
        appData.uartObj[PORT1].uHeadPtr = appData.uartObj[PORT1].uStartPtr;
    }

    /* Check if uRxFilledByteCount has not reached maximum capacity of buffer.
     * If yes go ahead and schedule next DMA recieve.
     * Else, set the uUartRxNotScheduled bit. This will schedule a DMA receive
     * later on */

    if(appData.uartObj[PORT1].uRxFilledByteCount < APP_UART_RX_BUFF_SIZE)
    {
        /* Find the position of uHeadPtr and accordingly process it. */
        if(appData.uartObj[PORT1].uHeadPtr < appData.uartObj[PORT1].uTailPtr)
        {
            /* uHeadPtr location is before uTailPtr location.
             * This means data is available between uTailPtr to uEndPtr and
             * from uStartPtr to uHeadPtr. Vacant area is uHeadPtr to uTailPtr */

            appData.uartObj[PORT1].uActualReadByteCount = appData.uartObj[PORT1].uTailPtr - appData.uartObj[PORT1].uHeadPtr;
        }
        else
        {
            /* uHeadPtr is greater than uTailPtr location.
             * uHeadPtr cannot be equal uTailPtr due to the earlier condition.
             * This means valid data is available from uTailPtr to uHeadPtr.
             * Vacant area is uHeadPtr to uEndPtr and uStartPtr to uTailPtr.
             * We will use only uHeadPtr to uEndPtr to avoid cross-over. */

            appData.uartObj[PORT1].uActualReadByteCount = appData.uartObj[PORT1].uEndPtr - appData.uartObj[PORT1].uHeadPtr;
        }

        /* Proceed only if we have vacant space for receiving data */
        if(appData.uartObj[PORT1].uActualReadByteCount != 0)
        {
            /* Check if the vacant space is more than APP_DMA_RX_PACKET_SIZE.
             * If so, limit it to APP_DMA_RX_PACKET_SIZE. This is to avoid too
             * much time spent in receiving just one byte. Better to keep
             * receiving short packets (512) so that CDC Write can be initiated */

            if(appData.uartObj[PORT1].uActualReadByteCount > APP_DMA_RX_PACKET_SIZE)
            {
                appData.uartObj[PORT1].uActualReadByteCount = APP_DMA_RX_PACKET_SIZE;
            }
            DMAC_ChannelTransfer(DMAC_CHANNEL_UART1_RX, (const void *)appUSARTInterface.DataGet(), appData.uartObj[PORT1].uHeadPtr, appData.uartObj[PORT1].uActualReadByteCount);

            /* Set the RTS to indicate that Bridge is ready to receive data
             * from the UART side. */

            appUSARTInterface.RTSSet();
        }
        else
        {
            /* Buffer full - Set the uUartRxNotScheduled bit.
             * This will schedule a DMA receive later on */
            appData.uartObj[PORT1].uUartRxNotScheduled = true;
        }
    }
    else
    {
        /* Buffer full - Set the uUartRxNotScheduled bit.
         * This will schedule a DMA receive later on */

        appData.uartObj[PORT1].uUartRxNotScheduled = true;
    }
}

/*******************************************************************************
 * This is DMA Channel 2 Transmit complete callback function. It is called
 * when a scheduled UART Transmit DMA transfer is complete.
 ******************************************************************************/
static void APP_DMAC_1_U1TransmitCompleteCallback(DMAC_TRANSFER_EVENT event, uintptr_t contextHandle)
{
    /* Set the cBuffToUartWriteCompleted flag to indicate that DMA transfer
     * is complete. */

    appData.cdcObj[PORT1].cBuffToUartWriteCompleted = true;
}

/*******************************************************************************
 * CDC Function Driver Application Event Handler
 ******************************************************************************/

USB_DEVICE_CDC_EVENT_RESPONSE APP_USBDeviceCDCEventHandler
(
    USB_DEVICE_CDC_INDEX index ,
    USB_DEVICE_CDC_EVENT event ,
    void* pData,
    uintptr_t userData
)
{

    USB_CDC_CONTROL_LINE_STATE * controlLineStateData;
    USB_DEVICE_CDC_EVENT_DATA_READ_COMPLETE * ReadEventData;
    USB_DEVICE_CDC_EVENT_DATA_WRITE_COMPLETE * WriteEventData;
    
    uint16_t * breakData;

    if(index < PORT_INDEX_COUNT)
    {
        switch ( event )
        {
            case USB_DEVICE_CDC_EVENT_GET_LINE_CODING:

                /* This means the host wants to know the current line
                 * coding. This is a control transfer request. Use the
                 * USB_DEVICE_ControlSend() function to send the data to
                 * host.  */

                USB_DEVICE_ControlSend(appData.usbDevHandle,
                        &appData.cdcObj[index].getLineCodingData,
                        sizeof(USB_CDC_LINE_CODING));

                break;

            case USB_DEVICE_CDC_EVENT_SET_LINE_CODING:

                /* This means the host wants to set the line coding.
                 * This is a control transfer request. Use the
                 * USB_DEVICE_ControlReceive() function to receive the
                 * data from the host */

                USB_DEVICE_ControlReceive(appData.usbDevHandle,
                        &appData.cdcObj[index].setLineCodingData,
                        sizeof(USB_CDC_LINE_CODING));

                break;

            case USB_DEVICE_CDC_EVENT_SET_CONTROL_LINE_STATE:

                /* This means the host is setting the control line state.
                 * Read the control line state. We will accept this request
                 * for now. */

                controlLineStateData = (USB_CDC_CONTROL_LINE_STATE *)pData;
                appData.cdcObj[index].controlLineStateData.dtr = controlLineStateData->dtr;
                appData.cdcObj[index].controlLineStateData.carrier = controlLineStateData->carrier;

                USB_DEVICE_ControlStatus(appData.usbDevHandle, USB_DEVICE_CONTROL_STATUS_OK);

                break;

            case USB_DEVICE_CDC_EVENT_SEND_BREAK:

                /* This means that the host is requesting that a break of the
                 * specified duration be sent. Read the break duration */

                breakData = (uint16_t *)pData;
                appData.cdcObj[index].breakData = *breakData;
                USB_DEVICE_ControlStatus(appData.usbDevHandle, USB_DEVICE_CONTROL_STATUS_OK);

                break;

            case USB_DEVICE_CDC_EVENT_READ_COMPLETE:

                ReadEventData = (USB_DEVICE_CDC_EVENT_DATA_READ_COMPLETE *)pData;

                if(ReadEventData->status == USB_DEVICE_CDC_RESULT_OK)
                {
                    /* This means there was a CDC read completed and it is OK.
                     * The host has sent some data and USB has received it.
                     * Get the number of bytes and change the cState to
                     * TRANS_STATE_CDC_READ_COMPLETED. This will be processed
                     * in the APP_Tasks. */

                    appData.cdcObj[index].cActualReadByteCount = ReadEventData->length;
                    appData.cdcObj[index].cState = TRANS_STATE_CDC_READ_COMPLETED;
                }
                else if(ReadEventData->status == USB_DEVICE_CDC_RESULT_ERROR)
                {
                    appData.cdcObj[index].cState = TRANS_STATE_CDC_READ_NOT_SCHEDULED;
                    appData.cdcObj[index].cActualReadByteCount = 0;
                }
                else
                {
                    /* This means there was a CDC read failure. Set the
                     * readFailure flag for it to be processed
                     * in the APP_Tasks. */

                    appData.cdcObj[index].readFailure = true;
                }

                break;

            case USB_DEVICE_CDC_EVENT_CONTROL_TRANSFER_DATA_RECEIVED:

                /* The data stage of the last control transfer is
                 * complete. For now we accept all the data */

                /* This means Set line data was received. It has the new baud
                 * rate. Set the baudReceived flag and process it in APP_Tasks. */

                appData.baudReceived[index] = true;
                appData.state = APP_STATE_WAIT_FOR_SERIAL_BAUD;
                appData.cdcObj[index].getLineCodingData.bCharFormat = appData.cdcObj[index].setLineCodingData.bCharFormat;
                appData.cdcObj[index].getLineCodingData.bDataBits = appData.cdcObj[index].setLineCodingData.bDataBits;
                appData.cdcObj[index].getLineCodingData.bParityType = appData.cdcObj[index].setLineCodingData.bParityType;
                appData.cdcObj[index].getLineCodingData.dwDTERate = appData.cdcObj[index].setLineCodingData.dwDTERate;

                USB_DEVICE_ControlStatus(appData.usbDevHandle, USB_DEVICE_CONTROL_STATUS_OK);

                break;

            case USB_DEVICE_CDC_EVENT_CONTROL_TRANSFER_DATA_SENT:

                /* This means the GET LINE CODING function data is valid. We don't
                 * do much with this data in this demo. */

                break;

            case USB_DEVICE_CDC_EVENT_WRITE_COMPLETE:

                /* This means the data Write is complete. Device is ready to
                 * schedule next CDC Write. Change the uState so that Write
                 * will be scheduled in APP_Tasks. */

                WriteEventData = (USB_DEVICE_CDC_EVENT_DATA_WRITE_COMPLETE *) pData;
                
                if(WriteEventData->status == USB_DEVICE_CDC_RESULT_OK)
                {
                    appData.uartObj[index].uState = TRANS_STATE_CDC_WRITE_COMPLETED;
                }
                else if(WriteEventData->status == USB_DEVICE_CDC_RESULT_ERROR)
                {
                    appData.uartObj[index].uState = TRANS_STATE_CDC_WRITE_NOT_SCHEDULED;
                }
                
                break;

            default:
                break;
        }
    }

    return USB_DEVICE_CDC_EVENT_RESPONSE_NONE;
}

/*******************************************************************************
 * Application Device Layer Event Handler
 ******************************************************************************/

void APP_USBDeviceEventHandler(USB_DEVICE_EVENT event, void * pData, uintptr_t context)
{
    uint8_t configurationValue;

    switch( event )
    {
        case USB_DEVICE_EVENT_RESET:
        case USB_DEVICE_EVENT_DECONFIGURED:

            appData.isConfigured = false;

            break;

        case USB_DEVICE_EVENT_CONFIGURED:

            /*do we have access to USB, if not try again*/
            configurationValue = ((USB_DEVICE_EVENT_DATA_CONFIGURED *)pData)->configurationValue;
            if(configurationValue == 1)
            {
                USB_DEVICE_CDC_EventHandlerSet(PORT1, APP_USBDeviceCDCEventHandler, (uintptr_t)&appData);

                appData.isConfigured = true;
            }

            break;

        case USB_DEVICE_EVENT_SOF:

            /* Increment all the SOF Counters */
            if(appData.startSOFCount == true)
            {
                appData.uSOFCounter[PORT1]++;

                appData.uSOFTimeoutTick[PORT1]++;
            }

            break;

        case USB_DEVICE_EVENT_SUSPENDED:

			LED_Off();
            break;

       case USB_DEVICE_EVENT_POWER_DETECTED:

            /* VBUS has been detected. We can attach the device */
            USB_DEVICE_Attach (appData.usbDevHandle);

            break;

        case USB_DEVICE_EVENT_POWER_REMOVED:

            /* VBUS is not available. We can detach the device */
            USB_DEVICE_Detach(appData.usbDevHandle);
            appData.isConfigured = false;

            break;

        /* These events are not used in this demo */
        case USB_DEVICE_EVENT_RESUMED:
            if(appData.isConfigured == true)
            {
                LED_On();
            }
            break;

        case USB_DEVICE_EVENT_ERROR:
        default:

            break;
    }
}

// *****************************************************************************
// *****************************************************************************
// Section: Application Local Functions
// *****************************************************************************
// *****************************************************************************

/************************************************
 * Application UART Baud Rate Update Function
 ************************************************/
bool APP_SerialBaudUpdate(uint8_t rPort)
{
    USART_SERIAL_SETUP serialSetup;
    uint32_t clkFrequency;
    bool retVal = false;

    serialSetup.baudRate = appData.cdcObj[rPort].setLineCodingData.dwDTERate;
    serialSetup.stopBits = (USART_STOP) appData.cdcObj[rPort].setLineCodingData.bCharFormat;
    clkFrequency = appUSARTInterface.frequencyGet();

    switch(appData.cdcObj[rPort].setLineCodingData.bParityType)
    {
        case 0:

            serialSetup.parity = USART_PARITY_NONE;
            break;

        case 1:

            serialSetup.parity = USART_PARITY_ODD;
            break;

        case 2:

            serialSetup.parity = USART_PARITY_EVEN;
            break;

        default:

            serialSetup.parity = USART_PARITY_INVALID;
            break;
    }

    switch(appData.cdcObj[rPort].setLineCodingData.bDataBits)
    {
        case 5:

            serialSetup.dataWidth = USART_DATA_5_BIT;
            break;

        case 6:

            serialSetup.dataWidth = USART_DATA_6_BIT;
            break;

        case 7:

            serialSetup.dataWidth = USART_DATA_7_BIT;
            break;

        case 8:

            serialSetup.dataWidth = USART_DATA_8_BIT;
            break;

        case 9:

            serialSetup.dataWidth = USART_DATA_9_BIT;
            break;

        default:

            serialSetup.dataWidth = USART_DATA_INVALID;
            break;
    }

    if(rPort == PORT1)
    {
        appUSARTInterface.serialSetup(&serialSetup, clkFrequency);
        appUSARTInterface.errorGet(); 
        retVal = true;
    }
    if(serialSetup.baudRate <= 115200)
    {
        appData.uartObj[rPort].uDmaReadTimeoutMs = 150;
    }
    else if(serialSetup.baudRate <= 230400)
    {
        appData.uartObj[rPort].uDmaReadTimeoutMs = 125;
    }
    else if(serialSetup.baudRate <= 1024000)
    {
        appData.uartObj[rPort].uDmaReadTimeoutMs = 100;
    }
    else
    {
        appData.uartObj[rPort].uDmaReadTimeoutMs = APP_USART_DATA_SCAN_DELAY_MS;
    }

    return retVal;
}

/*******************************************************************************
 * This is to reset all application parameters when new baud rate is received.
 ******************************************************************************/
void resetBuffParameters(uint8_t index)
{
    if(index < PORT_INDEX_COUNT)
    {
        appData.uartObj[index].uState = TRANS_STATE_CDC_WRITE_NOT_SCHEDULED;
        appData.uartObj[index].uStartPtr = &uPort[index].Buff[0];
        appData.uartObj[index].uEndPtr = &uPort[index].Buff[APP_UART_RX_BUFF_SIZE];
        appData.uartObj[index].uHeadPtr = &uPort[index].Buff[0];
        appData.uartObj[index].uTailPtr = &uPort[index].Buff[0];
        appData.uartObj[index].uRxFilledByteCount = 0;
        appData.uartObj[index].uActualReadByteCount = 0;
        appData.uartObj[index].uLastReadByteCount = 0;
        appData.uartObj[index].uDmaReadTimeoutMs = APP_USART_DATA_SCAN_DELAY_MS;
        appData.uartObj[index].uBuffToCdcWriteByteCount = 0;
        appData.uartObj[index].uBuffToCdcWriteInProgress = false;
        appData.uartObj[index].uUartRxNotScheduled = false;
        appData.uartObj[index].uBuffToCdcDmaTransferInProgress = false;
        appData.uartObj[index].uCdcWriteInProgress = false;

        appData.cdcObj[index].cState = TRANS_STATE_CDC_INIT;
        appData.cdcObj[index].cStartPtr = &cPort[index].Buff[0];
        appData.cdcObj[index].cEndPtr = &cPort[index].Buff[APP_USB_RX_BUFF_SIZE + APP_CDC_READ_PACKET_LENGTH];
        appData.cdcObj[index].cLimitPtr = &cPort[index].Buff[APP_USB_RX_BUFF_SIZE];
        appData.cdcObj[index].cHeadPtr = &cPort[index].Buff[0];
        appData.cdcObj[index].cTailPtr = &cPort[index].Buff[0];
        appData.cdcObj[index].writeFailCount = 0;
        appData.cdcObj[index].cRxPrevByteCount = 0;
        appData.cdcObj[index].cRxFilledByteCount = 0;
        appData.cdcObj[index].cAvailableValidSpace = 0;
        appData.cdcObj[index].cActualReadByteCount = 0;
        appData.cdcObj[index].cBuffToUartWriteByteCount = 0;

        appData.cdcObj[index].cBuffToUartWriteInProgress = false;
        appData.cdcObj[index].cBuffToUartWriteCompleted = false;
        appData.cdcObj[index].readFailure = false;
        appData.cdcObj[index].cCdcReadNotScheduled = false;

        appData.uSOFCounter[index] = 0;
        appData.uSOFTimeoutTick[index] = 0;
        appData.prevSOFValue[index] = 0;
    }
}

// *****************************************************************************
// *****************************************************************************
// Section: Application Initialization and State Machine Functions
// *****************************************************************************
// *****************************************************************************

/************************************************
 * Application State Reset Function
 ************************************************/

void APP_StateReset(void)
{
    appData.cdcObj[PORT1].getLineCodingData.dwDTERate = 9600;
    appData.cdcObj[PORT1].getLineCodingData.bDataBits = 8;
    appData.cdcObj[PORT1].getLineCodingData.bParityType = 0;
    appData.cdcObj[PORT1].getLineCodingData.bCharFormat = 0;

    appTCInterface.Timer16bitCounterSet(0);

    appUSARTInterface.RTSClear();

    resetBuffParameters(PORT1);

    appData.startSOFCount = true;
}
/*******************************************************************************
  Function:
    void APP_Initialize ( void )

  Remarks:
    See prototype in app.h.
 */

void APP_Initialize ( void )
{
    /* Place the App state machine in its initial state. */
    appData.state = APP_STATE_INIT;

    /* Initialize the application object */
    appData.isConfigured = false;

    appData.usbDevHandle = USB_DEVICE_HANDLE_INVALID;

    appData.cdcObj[PORT1].readTransferHandle = USB_DEVICE_CDC_TRANSFER_HANDLE_INVALID;
    appData.cdcObj[PORT1].writeTransferHandle = USB_DEVICE_CDC_TRANSFER_HANDLE_INVALID;

    DMAC_ChannelCallbackRegister(DMAC_CHANNEL_UART1_RX, APP_DMAC_0_U1ReceiveCompleteCallback, 0);
    DMAC_ChannelCallbackRegister(DMAC_CHANNEL_UART1_TX, APP_DMAC_1_U1TransmitCompleteCallback, 0);

    /* Start the timer*/
    appTCInterface.TimerStart();
    
    APP_SERCOM_REGS = appUSARTInterface.addressGet(); 
    
}


/******************************************************************************
  Function:
    void APP_Tasks ( void )

  Remarks:
    See prototype in app.h.
 */
void APP_Tasks ( void )
{

    /* Check the application's current state. */
    switch ( appData.state )
    {
        /* Application's initial state. */
        case APP_STATE_INIT:

            LED_Off();
            
            /* Open the device layer */
            appData.usbDevHandle = USB_DEVICE_Open( USB_DEVICE_INDEX_0, DRV_IO_INTENT_READWRITE );

            if(appData.usbDevHandle != USB_DEVICE_HANDLE_INVALID)
            {
                /* Register a callback with device layer to get event notification (for end point 0) */
                USB_DEVICE_EventHandlerSet(appData.usbDevHandle, APP_USBDeviceEventHandler, 0);

                appData.state = APP_STATE_WAIT_FOR_CONFIGURATION;
            }
            else
            {
                /* The Device Layer is not ready to be opened. We should try
                 * again later. */
            }

            break;

        case APP_STATE_WAIT_FOR_CONFIGURATION:

            LED_Off();
            
            /* Check if the device was configured */
            if(appData.isConfigured == true)
            {
                APP_StateReset();

                resetBuffParameters(PORT1);
                DMAC_ChannelDisable(DMAC_CHANNEL_UART1_RX);
                DMAC_ChannelDisable(DMAC_CHANNEL_UART1_TX);

                appData.cdcObj[PORT1].cState = TRANS_STATE_CDC_READ_IN_PROGRESS;
                
                USB_DEVICE_CDC_Read(PORT1,
                        &appData.cdcObj[PORT1].readTransferHandle,
                        &uReadBuffer[PORT1][0],
                        APP_CDC_READ_PACKET_LENGTH);
                
                /* If the device is configured then lets start
                 * the application */
                appData.state = APP_STATE_WAIT_FOR_SERIAL_BAUD;
                appData.baudReceived[PORT1] = false;
            }

            break;

        case APP_STATE_WAIT_FOR_SERIAL_BAUD:

            LED_Off();

            if(appData.isConfigured == false)
            {
                appData.state = APP_STATE_WAIT_FOR_CONFIGURATION;

                break;
            }

            if(appData.baudReceived[PORT1] == true)
            {
                appUSARTInterface.RTSClear();
                resetBuffParameters(PORT1);

                DMAC_ChannelDisable(DMAC_CHANNEL_UART1_RX);
                if(APP_SerialBaudUpdate(PORT1) == true)
                {
                    appTCInterface.Timer16bitCounterSet(0);
                    DMAC_ChannelTransfer(DMAC_CHANNEL_UART1_RX, (const void *)appUSARTInterface.DataGet(), appData.uartObj[PORT1].uHeadPtr, APP_DMA_RX_PACKET_SIZE);
                    appUSARTInterface.RTSSet();
                    appData.baudReceived[PORT1] = false;

                    /* If the uart baud is configured then lets start
                     * the application */
                    appData.state = APP_STATE_SERIAL_BRIDGE_ACTIVE;
                }
            }

            break;

        case APP_STATE_SERIAL_BRIDGE_ACTIVE:

            LED_On();

            if(appData.isConfigured == false)
            {
                appData.state = APP_STATE_WAIT_FOR_CONFIGURATION;

                break;
            }

/* **************************************************************************** */
/* **************************************************************************** */
/* *************** Start of all CDC to UART related *************************** */
/* **************************************************************************** */
/* **************************************************************************** */

/* ***************** Start of PORT 1 Related Routines ************************* */

            if(appData.cdcObj[PORT1].readFailure == true)
            {
                /* Do Nothing */
            }

            if(appData.cdcObj[PORT1].cState == TRANS_STATE_CDC_READ_COMPLETED)
            {
                appData.cdcObj[PORT1].cRxFilledByteCount += appData.cdcObj[PORT1].cActualReadByteCount;
                memcpy(appData.cdcObj[PORT1].cHeadPtr, &uReadBuffer[PORT1][0], appData.cdcObj[PORT1].cActualReadByteCount);
                appData.cdcObj[PORT1].cHeadPtr += appData.cdcObj[PORT1].cActualReadByteCount;

                if(appData.cdcObj[PORT1].cHeadPtr >= appData.cdcObj[PORT1].cLimitPtr)
                {
                    appData.cdcObj[PORT1].cHeadPtr = appData.cdcObj[PORT1].cStartPtr;
                }

                if(appData.cdcObj[PORT1].cRxFilledByteCount < (appData.cdcObj[PORT1].cLimitPtr - appData.cdcObj[PORT1].cStartPtr))
                {
                    if(appData.cdcObj[PORT1].cHeadPtr < appData.cdcObj[PORT1].cTailPtr)
                    {
                        if((appData.cdcObj[PORT1].cTailPtr - appData.cdcObj[PORT1].cHeadPtr) < APP_CDC_READ_PACKET_LENGTH)
                        {
                            //Cannot schedule a Read.
                            appData.cdcObj[PORT1].cActualReadByteCount = 0;
                        }
                        else
                        {
                            appData.cdcObj[PORT1].cAvailableValidSpace = appData.cdcObj[PORT1].cTailPtr - appData.cdcObj[PORT1].cHeadPtr;
                            appData.cdcObj[PORT1].cState = TRANS_STATE_CDC_READ_NOT_SCHEDULED;
                        }
                    }
                    else if((appData.cdcObj[PORT1].cLimitPtr - appData.cdcObj[PORT1].cHeadPtr) >= APP_CDC_READ_PACKET_LENGTH)
                    {
                        appData.cdcObj[PORT1].cAvailableValidSpace = appData.cdcObj[PORT1].cLimitPtr - appData.cdcObj[PORT1].cHeadPtr;
                        appData.cdcObj[PORT1].cState = TRANS_STATE_CDC_READ_NOT_SCHEDULED;
                    }
                    else if((appData.cdcObj[PORT1].cEndPtr - appData.cdcObj[PORT1].cHeadPtr) >= APP_CDC_READ_PACKET_LENGTH)
                    {
                        appData.cdcObj[PORT1].cLimitPtr = appData.cdcObj[PORT1].cHeadPtr + APP_CDC_READ_PACKET_LENGTH;
                        appData.cdcObj[PORT1].cAvailableValidSpace = appData.cdcObj[PORT1].cLimitPtr - appData.cdcObj[PORT1].cHeadPtr;
                        appData.cdcObj[PORT1].cState = TRANS_STATE_CDC_READ_NOT_SCHEDULED;
                    }
                    else if((appData.cdcObj[PORT1].cEndPtr - appData.cdcObj[PORT1].cHeadPtr) < APP_CDC_READ_PACKET_LENGTH)
                    {
                        //Cannot schedule a Read.
                        appData.cdcObj[PORT1].cLimitPtr = appData.cdcObj[PORT1].cHeadPtr;
                        appData.cdcObj[PORT1].cHeadPtr = appData.cdcObj[PORT1].cStartPtr;
                        appData.cdcObj[PORT1].cActualReadByteCount = 0;
                    }
                    else
                    {
                        /* Do Nothing */
                    }
                }
                else
                {
                    //Cannot schedule a Read.
                    appData.cdcObj[PORT1].cActualReadByteCount = 0;
                }
                appData.cdcObj[PORT1].cActualReadByteCount = 0;
            }
            else if(appData.cdcObj[PORT1].cState == TRANS_STATE_CDC_READ_NOT_SCHEDULED)
            {
                appData.cdcObj[PORT1].cState = TRANS_STATE_CDC_READ_IN_PROGRESS;
                appData.cdcObj[PORT1].readTransferHandle = USB_DEVICE_CDC_TRANSFER_HANDLE_INVALID;
    
                if(USB_DEVICE_CDC_RESULT_OK == USB_DEVICE_CDC_Read(PORT1, &appData.cdcObj[PORT1].readTransferHandle, &uReadBuffer[PORT1][0], APP_CDC_READ_PACKET_LENGTH))
                {
                    if(appData.cdcObj[PORT1].readTransferHandle == USB_DEVICE_CDC_TRANSFER_HANDLE_INVALID)
                    {
                        appData.cdcObj[PORT1].cState = TRANS_STATE_CDC_READ_NOT_SCHEDULED;
                        /* Do Nothing */
                    }
                }
                else
                {
                    /* Do Nothing */
                }    
            }
            else if((appData.cdcObj[PORT1].cState == TRANS_STATE_CDC_INIT) || (appData.cdcObj[PORT1].cState == TRANS_STATE_CDC_READ_IN_PROGRESS))
            {
                //Do nothing
            }
            else
            {
                //Do nothing
            }

            if(appData.cdcObj[PORT1].cRxFilledByteCount != 0)
            {
                if (appData.cdcObj[PORT1].cRxFilledByteCount > (APP_USB_RX_BUFF_SIZE + APP_CDC_READ_PACKET_LENGTH))
                {
                    /* Do Nothing */
                }
                if(appData.cdcObj[PORT1].cBuffToUartWriteInProgress == false)
                {
                    if(appData.cdcObj[PORT1].cTailPtr < appData.cdcObj[PORT1].cHeadPtr)
                    {
                        appData.cdcObj[PORT1].cBuffToUartWriteByteCount = appData.cdcObj[PORT1].cHeadPtr - appData.cdcObj[PORT1].cTailPtr;
                    }
                    else
                    {
                        appData.cdcObj[PORT1].cBuffToUartWriteByteCount = appData.cdcObj[PORT1].cLimitPtr - appData.cdcObj[PORT1].cTailPtr;
                    }

                    if(appData.cdcObj[PORT1].cBuffToUartWriteByteCount > APP_DMA_TX_PACKET_SIZE)
                    {
                        appData.cdcObj[PORT1].cBuffToUartWriteByteCount = APP_DMA_TX_PACKET_SIZE;
                    }

                    appData.cdcObj[PORT1].cBuffToUartWriteInProgress = true;
                    
                    appUSARTInterface.dmaChannelDisbale(); 
                    if(true != DMAC_ChannelTransfer(DMAC_CHANNEL_UART1_TX,
                        appData.cdcObj[PORT1].cTailPtr,
                        (const void *)appUSARTInterface.DataGet(),
                        appData.cdcObj[PORT1].cBuffToUartWriteByteCount))
                    {
                        appData.cdcObj[PORT1].cBuffToUartWriteInProgress = false;
                    }
                    appUSARTInterface.dmaChannelEnable(); 
                }

                if(appData.cdcObj[PORT1].cBuffToUartWriteCompleted == true)
                {
                    appData.cdcObj[PORT1].cBuffToUartWriteCompleted = false;
                    appData.cdcObj[PORT1].cBuffToUartWriteInProgress = false;

                    appData.cdcObj[PORT1].cTailPtr += appData.cdcObj[PORT1].cBuffToUartWriteByteCount;
                    appData.cdcObj[PORT1].cRxFilledByteCount -= appData.cdcObj[PORT1].cBuffToUartWriteByteCount;
                    if(appData.cdcObj[PORT1].cTailPtr >= appData.cdcObj[PORT1].cLimitPtr)
                    {
                        appData.cdcObj[PORT1].cTailPtr = appData.cdcObj[PORT1].cStartPtr;
                    }
                }
            }
            

/* **************************************************************************** */
/* **************************************************************************** */
/* *************** End of all CDC to UART related ***************************** */
/* **************************************************************************** */
/* **************************************************************************** */


/* **************************************************************************** */
/* **************************************************************************** */
/* *************** Start of all UART to CDC related *************************** */
/* **************************************************************************** */
/* **************************************************************************** */

/* ***************** Start of PORT 1 Related Routines ************************* */

            if(appData.uSOFCounter[PORT1] != appData.prevSOFValue[PORT1])
            {
                appData.prevSOFValue[PORT1] = appData.uSOFCounter[PORT1];

                appData.uartObj[PORT1].uActualReadByteCount = appTCInterface.Timer16bitCounterGet();

                if(appData.uartObj[PORT1].uActualReadByteCount != appData.uartObj[PORT1].uLastReadByteCount)
                {
                    appData.uSOFCounter[PORT1] = 0;
                    appData.uartObj[PORT1].uLastReadByteCount = appData.uartObj[PORT1].uActualReadByteCount;
                }
            }

            if(appData.uartObj[PORT1].uUartRxNotScheduled == true)
            {
                if(appData.uartObj[PORT1].uRxFilledByteCount < APP_UART_RX_BUFF_SIZE)
                {
                    if(appData.uartObj[PORT1].uHeadPtr < appData.uartObj[PORT1].uTailPtr)
                    {
                        appData.uartObj[PORT1].uActualReadByteCount = appData.uartObj[PORT1].uTailPtr - appData.uartObj[PORT1].uHeadPtr;
                    }
                    else
                    {
                        appData.uartObj[PORT1].uActualReadByteCount = appData.uartObj[PORT1].uEndPtr - appData.uartObj[PORT1].uHeadPtr;
                    }

                    if(appData.uartObj[PORT1].uActualReadByteCount != 0)
                    {
                        if(appData.uartObj[PORT1].uActualReadByteCount > APP_DMA_RX_PACKET_SIZE)
                        {
                            appData.uartObj[PORT1].uActualReadByteCount = APP_DMA_RX_PACKET_SIZE;
                        }
                        appData.uartObj[PORT1].uUartRxNotScheduled = false;
                        
                        appUSARTInterface.dmaChannelDisbale(); 
                        
                        if(true != DMAC_ChannelTransfer(DMAC_CHANNEL_UART1_RX, (const void *)appUSARTInterface.DataGet(), appData.uartObj[PORT1].uHeadPtr, appData.uartObj[PORT1].uActualReadByteCount))
                        {
                            appData.uartObj[PORT1].uUartRxNotScheduled = true;
                        }
                        appUSARTInterface.dmaChannelEnable(); 
                        
                        appUSARTInterface.RTSSet();
                    }
                    else
                    {
                        /* Do Nothing */
                    }
                }
                else if (appData.uartObj[PORT1].uRxFilledByteCount > APP_UART_RX_BUFF_SIZE)
                {
                    /* Do Nothing */
                }
            }

            if((appData.uSOFCounter[PORT1] >= appData.uartObj[PORT1].uDmaReadTimeoutMs) || (appData.uSOFTimeoutTick[PORT1] >= APP_USART_DATA_TIMEOUT_DELAY_MS))
            {
                appData.uSOFCounter[PORT1] = 0;
                appData.uSOFTimeoutTick[PORT1] = 0;
                appData.prevSOFValue[PORT1] = 0;

                if(appTCInterface.Timer16bitCounterGet() != 0)
                {
                    appUSARTInterface.RTSClear();
                    DMAC_ChannelDisable(DMAC_CHANNEL_UART1_RX);

                    appData.uartObj[PORT1].uActualReadByteCount = appTCInterface.Timer16bitCounterGet();
                    appTCInterface.Timer16bitCounterSet(0);

                    appData.uartObj[PORT1].uRxFilledByteCount += appData.uartObj[PORT1].uActualReadByteCount;
                    appData.uartObj[PORT1].uHeadPtr += appData.uartObj[PORT1].uActualReadByteCount;

                    if(appData.uartObj[PORT1].uHeadPtr >= appData.uartObj[PORT1].uEndPtr)
                    {
                        appData.uartObj[PORT1].uHeadPtr = appData.uartObj[PORT1].uStartPtr;
                    }

                    if(appData.uartObj[PORT1].uRxFilledByteCount < APP_UART_RX_BUFF_SIZE)
                    {
                        if(appData.uartObj[PORT1].uHeadPtr < appData.uartObj[PORT1].uTailPtr)
                        {
                            appData.uartObj[PORT1].uActualReadByteCount = appData.uartObj[PORT1].uTailPtr - appData.uartObj[PORT1].uHeadPtr;
                        }
                        else
                        {
                            appData.uartObj[PORT1].uActualReadByteCount = appData.uartObj[PORT1].uEndPtr - appData.uartObj[PORT1].uHeadPtr;
                        }

                        if(appData.uartObj[PORT1].uActualReadByteCount != 0)
                        {
                            if(appData.uartObj[PORT1].uActualReadByteCount > APP_DMA_RX_PACKET_SIZE)
                            {
                                appData.uartObj[PORT1].uActualReadByteCount = APP_DMA_RX_PACKET_SIZE;
                            }
                            
                            appData.uartObj[PORT1].uUartRxNotScheduled = false;
                            
                            appUSARTInterface.dmaChannelDisbale(); 
                            
                            if(true != DMAC_ChannelTransfer(DMAC_CHANNEL_UART1_RX, (const void *)appUSARTInterface.DataGet(), appData.uartObj[PORT1].uHeadPtr, appData.uartObj[PORT1].uActualReadByteCount))
                            {
                                appData.uartObj[PORT1].uUartRxNotScheduled = true;
                            }
                            appUSARTInterface.dmaChannelEnable(); 
                            
                            appUSARTInterface.RTSSet();
                        }
                        else
                        {
                            appData.uartObj[PORT1].uUartRxNotScheduled = true;
                        }
                    }
                    else
                    {
                        appData.uartObj[PORT1].uUartRxNotScheduled = true;
                    }
                }
            }
            
            if(appData.uartObj[PORT1].uRxFilledByteCount != 0)
            {
                if (appData.uartObj[PORT1].uRxFilledByteCount > APP_UART_RX_BUFF_SIZE)
                {
                    /* Do Nothing */
                }

                if(appData.uartObj[PORT1].uState == TRANS_STATE_CDC_WRITE_NOT_SCHEDULED)
                {
                    if(appData.uartObj[PORT1].uTailPtr <= appData.uartObj[PORT1].uHeadPtr)
                    {
                        appData.uartObj[PORT1].uBuffToCdcWriteByteCount = appData.uartObj[PORT1].uHeadPtr - appData.uartObj[PORT1].uTailPtr;
                    }
                    else
                    {
                        appData.uartObj[PORT1].uBuffToCdcWriteByteCount = appData.uartObj[PORT1].uEndPtr - appData.uartObj[PORT1].uTailPtr;
                    }

                    if(appData.uartObj[PORT1].uBuffToCdcWriteByteCount > APP_CDC_WRITE_PACKET_LENGTH)
                    {
                        appData.uartObj[PORT1].uBuffToCdcWriteByteCount = APP_CDC_WRITE_PACKET_LENGTH;
                    }

                    memcpy(&uWriteBuffer[PORT1][0], appData.uartObj[PORT1].uTailPtr, appData.uartObj[PORT1].uBuffToCdcWriteByteCount);
                    appData.uartObj[PORT1].uState = TRANS_STATE_CDC_WRITE_IN_PROGRESS;
                    appData.cdcObj[PORT1].writeTransferHandle = USB_DEVICE_CDC_TRANSFER_HANDLE_INVALID;

                    if(USB_DEVICE_CDC_RESULT_OK == USB_DEVICE_CDC_Write(PORT1,
                        &appData.cdcObj[PORT1].writeTransferHandle,
                        &uWriteBuffer[PORT1][0],
                        appData.uartObj[PORT1].uBuffToCdcWriteByteCount,
                        USB_DEVICE_CDC_TRANSFER_FLAGS_DATA_COMPLETE))
                    {
                        if(appData.cdcObj[PORT1].writeTransferHandle != USB_DEVICE_CDC_TRANSFER_HANDLE_INVALID)
                        {
                            appData.cdcObj[PORT1].writeFailCount = 0;
                        }
                        else
                        {
                            appData.uartObj[PORT1].uState = TRANS_STATE_CDC_WRITE_NOT_SCHEDULED;
                            /* Do Nothing */
                        }
                    }
                    else
                    {
                        /* Do Nothing */
                    }    
                }
                if(appData.uartObj[PORT1].uState == TRANS_STATE_CDC_WRITE_COMPLETED)
                {
                    appData.uartObj[PORT1].uTailPtr += appData.uartObj[PORT1].uBuffToCdcWriteByteCount;
                    appData.uartObj[PORT1].uRxFilledByteCount -= appData.uartObj[PORT1].uBuffToCdcWriteByteCount;
                    appData.uartObj[PORT1].uState = TRANS_STATE_CDC_WRITE_NOT_SCHEDULED;

                    if(appData.uartObj[PORT1].uTailPtr >= appData.uartObj[PORT1].uEndPtr)
                    {
                        appData.uartObj[PORT1].uTailPtr = appData.uartObj[PORT1].uStartPtr;
                    }
                }

                if((appData.uartObj[PORT1].uState == TRANS_STATE_CDC_WRITE_IN_PROGRESS) ||
                   (appData.uartObj[PORT1].uState == TRANS_STATE_UART_INIT))
                {
                    //Do nothing. wait for state change.
                }
            }

/* **************************************************************************** */
/* **************************************************************************** */
/* *************** End of all UART to CDC related ***************************** */
/* **************************************************************************** */
/* **************************************************************************** */

            break;

        case APP_STATE_ERROR:

            break;

        /* The default state should never be executed. */
        default:

            /* Handle error in application's state machine. */
            break;

    }
}

/*******************************************************************************
 End of File
 */
