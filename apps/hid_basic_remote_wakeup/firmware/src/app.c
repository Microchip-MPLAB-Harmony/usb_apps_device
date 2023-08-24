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

// DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013-2014 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
 *******************************************************************************/
// DOM-IGNORE-END


// *****************************************************************************
// *****************************************************************************
// Section: Included Files 
// *****************************************************************************
// *****************************************************************************

#include "definitions.h"
#include "string.h"
#include "app.h"

// *****************************************************************************
// *****************************************************************************
// Section: Global Data Definitions
// *****************************************************************************
// *****************************************************************************

/* Receive data buffer */
uint8_t receiveDataBuffer[64] CACHE_ALIGN;

/* Transmit data buffer */
uint8_t  transmitDataBuffer[64] CACHE_ALIGN;

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

// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************

USB_DEVICE_HID_EVENT_RESPONSE APP_USBDeviceHIDEventHandler
(
    USB_DEVICE_HID_INDEX iHID,
    USB_DEVICE_HID_EVENT event,
    void * eventData,
    uintptr_t userData
)
{
    USB_DEVICE_HID_EVENT_DATA_REPORT_SENT * reportSent;
    USB_DEVICE_HID_EVENT_DATA_REPORT_RECEIVED * reportReceived;

    /* Check type of event */
    switch (event)
    {
        case USB_DEVICE_HID_EVENT_REPORT_SENT:

            /* The eventData parameter will be USB_DEVICE_HID_EVENT_REPORT_SENT
             * pointer type containing details about the report that was
             * sent. */
            reportSent = (USB_DEVICE_HID_EVENT_DATA_REPORT_SENT *) eventData;
            if(reportSent->handle == appData.txTransferHandle )
            {
                // Transfer progressed.
                appData.hidDataTransmitted = true;
            }
            
            break;

        case USB_DEVICE_HID_EVENT_REPORT_RECEIVED:

            /* The eventData parameter will be USB_DEVICE_HID_EVENT_REPORT_RECEIVED
             * pointer type containing details about the report that was
             * received. */

            reportReceived = (USB_DEVICE_HID_EVENT_DATA_REPORT_RECEIVED *) eventData;
            if(reportReceived->handle == appData.rxTransferHandle )
            {
                // Transfer progressed.
                appData.hidDataReceived = true;
            }
          
            break;

        case USB_DEVICE_HID_EVENT_SET_IDLE:

            /* For now we just accept this request as is. We acknowledge
             * this request using the USB_DEVICE_HID_ControlStatus()
             * function with a USB_DEVICE_CONTROL_STATUS_OK flag */

            USB_DEVICE_ControlStatus(appData.usbDevHandle, USB_DEVICE_CONTROL_STATUS_OK);

            /* Save Idle rate received from Host */
            appData.idleRate = ((USB_DEVICE_HID_EVENT_DATA_SET_IDLE*)eventData)->duration;
            
            break;

        case USB_DEVICE_HID_EVENT_GET_IDLE:

            /* Host is requesting for Idle rate. Now send the Idle rate */
            USB_DEVICE_ControlSend(appData.usbDevHandle, & (appData.idleRate),1);

            /* On successfully received Idle rate, the Host would acknowledge 
             * back with a Zero Length packet. The HID function driver returns 
             * an event USB_DEVICE_HID_EVENT_CONTROL_TRANSFER_DATA_SENT to the 
             * application upon receiving this Zero Length packet from Host.
             * USB_DEVICE_HID_EVENT_CONTROL_TRANSFER_DATA_SENT event indicates 
             * this control transfer event is complete */

            break;
        default:
            // Nothing to do.
            break;
    }
    return USB_DEVICE_HID_EVENT_RESPONSE_NONE;
}

void APP_USBDeviceEventHandler(USB_DEVICE_EVENT event, void * eventData, uintptr_t context)
{
    switch(event)
    {
        case USB_DEVICE_EVENT_RESET:
        case USB_DEVICE_EVENT_DECONFIGURED:

            /* Host has de configured the device or a bus reset has happened.
             * Device layer is going to de-initialize all function drivers.
             * Hence close handles to all function drivers (Only if they are
             * opened previously. */

            LED_Off();

            /* Clear the flag indicating device is not configured. */
            appData.deviceConfigured = false;
            appData.state = APP_STATE_WAIT_FOR_CONFIGURATION;
            break;

        case USB_DEVICE_EVENT_CONFIGURED:

            LED_On(); 
            /* Set the flag indicating device is configured. */
            appData.deviceConfigured = true;

            /* Save the other details for later use. */
            appData.configurationValue = ((USB_DEVICE_EVENT_DATA_CONFIGURED*)eventData)->configurationValue;

            /* Register application HID event handler. */
            USB_DEVICE_HID_EventHandlerSet(USB_DEVICE_HID_INDEX_0, APP_USBDeviceHIDEventHandler, (uintptr_t)&appData);

            break;

        case USB_DEVICE_EVENT_SUSPENDED:

            LED_Off();
            /* Device is suspended. */ 
            appData.IsSuspended = true;
            break;

        case USB_DEVICE_EVENT_POWER_DETECTED:

            /* VBUS was detected. We can attach the device */
            USB_DEVICE_Attach (appData.usbDevHandle);
            
            /* Device is attached. */
            appData.IsAttached = true;   
            break;

        case USB_DEVICE_EVENT_POWER_REMOVED:
            
            LED_Off(); 
            
            /* VBUS is not available. We have to detach the device. */
            USB_DEVICE_Detach(appData.usbDevHandle);
            
            /* Device is detached. */
            appData.IsAttached = false;   
            break;

        case USB_DEVICE_EVENT_RESUMED:
            if(appData.deviceConfigured == true)
            {
                LED_On();
            }
            /* Device is resumed. */
            appData.IsSuspended = false;
            appData.remoteWakeUpInProgress = false; 
            break;

        case USB_DEVICE_EVENT_ERROR:
            
            /* Received an error condition. Update the flag. */
            appData.IsErrorState = true;
            break;
            
        default:
            break;
    }
}

void APP_Timer_Callback ( uintptr_t context )
{
    appData.tmrExpired = true;
}

// *****************************************************************************
// *****************************************************************************
// Section: Application Local Functions
// *****************************************************************************
// *****************************************************************************

/* TODO:  Add any necessary local functions.
*/


// *****************************************************************************
// *****************************************************************************
// Section: Application Initialization and State Machine Functions
// *****************************************************************************
// *****************************************************************************

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
    
    /* Initialize all the application variables. */
    appData.tmrExpired = false;
    appData.IsAttached = false; 
    appData.IsSuspended = false;  
    appData.remoteWakeUpInProgress = false; 
    appData.usbDevHandle = USB_DEVICE_HANDLE_INVALID;
    appData.deviceConfigured = false;
    appData.txTransferHandle = USB_DEVICE_HID_TRANSFER_HANDLE_INVALID;
    appData.rxTransferHandle = USB_DEVICE_HID_TRANSFER_HANDLE_INVALID;
    appData.hidDataReceived = false;
    appData.hidDataTransmitted = true;  
    appData.receiveDataBuffer = &receiveDataBuffer[0];
    appData.transmitDataBuffer = &transmitDataBuffer[0];  
    
    LED_Off();
}


/******************************************************************************
  Function:
    void APP_Tasks ( void )

  Remarks:
    See prototype in app.h.
 */

void APP_Tasks (void )
{
    /* If we have received error condition, change the state accordingly. */
    if(appData.IsErrorState == true)
    {
        appData.state = APP_STATE_ERROR;
    }
    
    switch(appData.state)
    {
        case APP_STATE_INIT:
            
            /* Open the device layer */
            appData.usbDevHandle = USB_DEVICE_Open( USB_DEVICE_INDEX_0, DRV_IO_INTENT_READWRITE );

            if(appData.usbDevHandle != USB_DEVICE_HANDLE_INVALID)
            {
                /* Register a callback with device layer to get event notification (for end point 0) */
                USB_DEVICE_EventHandlerSet(appData.usbDevHandle, APP_USBDeviceEventHandler, 0);
                /* Application start message. */
                SYS_CONSOLE_MESSAGE("\n\r*** USB Device Remote Wakeup Demonstration ***\r\n");
                appData.state = APP_STATE_WAIT_FOR_CONFIGURATION;
            }
            else
            {
                /* The Device Layer is not ready to be opened. We should try
                 * again later. */
            }

            break;

        case APP_STATE_WAIT_FOR_CONFIGURATION:

            /* Check if the configuration is successful. */
            if(appData.deviceConfigured == true)
            {
                SYS_CONSOLE_MESSAGE("\n\rDevice Configured\r\n");
                /* USB Device is ready to run the main task */
                appData.hidDataReceived = false;
                appData.hidDataTransmitted = true;
                appData.state = APP_STATE_HID_TASK;

                /* Place a new read request. */
                USB_DEVICE_HID_ReportReceive (USB_DEVICE_HID_INDEX_0,
                        &appData.rxTransferHandle, appData.receiveDataBuffer, 64);
            }
            break;

        case APP_STATE_HID_TASK:

            if(appData.deviceConfigured == false)
            {
                /* USB Device is not configured */
                appData.state = APP_STATE_WAIT_FOR_CONFIGURATION;
            }
            else if( appData.hidDataReceived == true )
            {
                /* Look at the data the host sent, to see what kind of 
                 * application specific command it sent. */
                switch(appData.receiveDataBuffer[0])
                {
                    case 0x80:

                        /* Toggle on board LED. */
                        LED_Toggle();

                        /* Clear the HID data received status. */
                        appData.hidDataReceived = false;

                        /* Place a new read request. */
                        USB_DEVICE_HID_ReportReceive (USB_DEVICE_HID_INDEX_0,
                                &appData.rxTransferHandle, appData.receiveDataBuffer, 64 );

                        break;

                    case 0x81:

                        if(appData.hidDataTransmitted)
                        {
                            /* Echo back to the host PC the command we are fulfilling in
                             * the first byte.  In this case, the Get Push-button State
                             * command. */

                            appData.transmitDataBuffer[0] = 0x81;

                            /* Get the current status of Switch and send it back to Host. */
                            if( SWITCH_Get() == SWITCH_STATE_PRESSED )
                            {
                                appData.transmitDataBuffer[1] = 0x00;
                            }
                            else
                            {
                                appData.transmitDataBuffer[1] = 0x01;
                            }

                            /* Clear the HID data transmit status. */
                            appData.hidDataTransmitted = false;

                            /* Prepare the USB module to send the data packet to the host */
                            USB_DEVICE_HID_ReportSend (USB_DEVICE_HID_INDEX_0,
                                    &appData.txTransferHandle, appData.transmitDataBuffer, 64 );

                            /* Clear the HID data received status. */
                            appData.hidDataReceived = false;

                            /* Place a new read request. */
                            USB_DEVICE_HID_ReportReceive (USB_DEVICE_HID_INDEX_0,
                                    &appData.rxTransferHandle, appData.receiveDataBuffer, 64 );
                        }
                        break;

                    default:

                        /* Clear the HID data received status. */
                        appData.hidDataReceived = false;

                        /* Place a new read request. */
                        USB_DEVICE_HID_ReportReceive (USB_DEVICE_HID_INDEX_0,
                                &appData.rxTransferHandle, appData.receiveDataBuffer, 64 );
                        break;
                }
            }
            else if (appData.IsSuspended == true)
            {
                /* USB Device is suspended. */
                appData.state = APP_STATE_USB_SUSPENDED;
                
                SYS_CONSOLE_MESSAGE("USB Device Suspended\r\n");
            }
            break;

        case APP_STATE_USB_SUSPENDED:
                        
            /* USB Device is suspended. This could be due to two reason:
             * The UI on PC host is not active, so PC host suspends the device.
             * If so, Remote wake up will not be enabled.
             * The PC is put to Sleep and hence it suspends the device.
             * In this case Remote Wake up is enabled. Check this and display
             * appropriate message. */
            if(USB_DEVICE_RemoteWakeupStatusGet(appData.usbDevHandle) == USB_DEVICE_REMOTE_WAKEUP_ENABLED)
            {
                SYS_CONSOLE_MESSAGE("USB host in Sleep mode - Remote wakeup enabled. Press Button to wakeup Host.\r\n");  
            }
            else
            {
                /* There are also chances that the USB Device is not allowed to
                 * Remote wake up the PC Host. This can be changed in the PC
                 * Sleep settings in order to do a remote wake up from USB Device */
                SYS_CONSOLE_MESSAGE("USB host Suspend device or Remote wakeup is not enabled\r\n");  
            }
            
            /* Device goes to Standby Sleep mode in either of the cases */
            SYS_CONSOLE_MESSAGE("MCU on Standby Sleep mode\r\n");
            
            /* Reset the timer status flag */
            appData.tmrExpired = false;
            
            /* Start the timer for 5ms. This is to ensure Remote wakeup is 
             * initiated after 5ms of suspend time - as per spec */
            appData.tmrHandle = SYS_TIME_CallbackRegisterMS(APP_Timer_Callback, 0, USB_SUSPEND_DURATION_5MS, SYS_TIME_SINGLE);
            
            /* Change the Application State */
            appData.state = APP_STATE_MCU_ON_STANDBY;  
            
            break;

        case APP_STATE_MCU_ON_STANDBY:
            
            /* Ensure that the SYS Console has transmitted all the bytes in queue */
            if( SYS_CONSOLE_HandleGet(SYS_CONSOLE_INDEX_0) != SYS_CONSOLE_HANDLE_INVALID )
            {
                while(SYS_CONSOLE_WriteCountGet(SYS_CONSOLE_HandleGet(SYS_CONSOLE_INDEX_0)) != 0);            
            }

            /* Disable the system interrupt before going to Standby Mode */
            appData.interruptStatus = NVIC_INT_Disable();

            /* Disable SERCOM interrupts */
            DISABLE_SERCOM_INTERRUPT();

            SYSTICK_TimerInterruptDisable();            

            /* We must ensure that no wake up interrupt is coming before entering in standby */
            if(appData.IsSuspended == false)
            {
                /* USB activity is seen on the bus */
                SYS_CONSOLE_MESSAGE("USB Device Resumed\r\n");

                /* Restore the system interrupt state when exiting the Standby Mode */
                NVIC_INT_Restore(appData.interruptStatus);

                SYSTICK_TimerInterruptEnable();            

                /* Enable SERCOM interrupts */
                ENABLE_SERCOM_INTERRUPT();

                /* Go back to executing Main HID tasks */
                appData.state = APP_STATE_HID_TASK;
            }
            else
            {
                /* Enter Standby Mode */
                PM_StandbyModeEnter();

                /* Restore the system interrupt state when exiting the Standby Mode */
                NVIC_INT_Restore(appData.interruptStatus);

                SYSTICK_TimerInterruptEnable();            

                /* Enable SERCOM interrupts */
                ENABLE_SERCOM_INTERRUPT();

                /* There could be only two wakeup sources. USB activity by Host
                 * or User Switch Press */
                if(appData.IsSuspended == false)
                {
                    /* USB activity is seen on the bus */
                    SYS_CONSOLE_MESSAGE("USB Device Resumed\r\n");

                    /* Go back to executing Main HID tasks */
                    appData.state = APP_STATE_HID_TASK;                 
                }
                else if(( SWITCH_Get() == SWITCH_STATE_PRESSED ) && (appData.tmrExpired == true) && (appData.remoteWakeUpInProgress == false))
                {
                    /* User has pressed the Switch. This is to wake up the USB Host */
                    if(USB_DEVICE_RemoteWakeupStatusGet(appData.usbDevHandle) == USB_DEVICE_REMOTE_WAKEUP_ENABLED)
                    {
                        /* PC host has enabled Remote Wakeup by USB Device, so, 
                         * initiate a Remote Wakeup Start and go back to Standby 
                         * Sleep Mode and wait for PC host to drive USB device 
                         * resume. */
                        USB_DEVICE_RemoteWakeupStart(appData.usbDevHandle);
                        appData.remoteWakeUpInProgress = true; 

                        SYS_CONSOLE_MESSAGE("Remote Wakeup Start Sent\r\n");  
                    }
                    else
                    {
                        /* PC host has not enabled Remote Wakeup by USB Device. 
                         * This has to be changed by modifying the sleep settings 
                         * of PC host. Just display the message and go to Standby
                         * Sleep mode. */
                        SYS_CONSOLE_MESSAGE("Remote wakeup not enabled by PC host. Check PC Sleep mode settings\r\n");  
                    }
                }
                else if (appData.IsAttached == false)
                {
                    /* This means USB device is detached from the bus. */
                    SYS_CONSOLE_MESSAGE("USB Device detached\r\n");

                    /* Update the configuration flag. */
                    appData.deviceConfigured = false;

                    /* Device is detached. Change the Application State */
                    appData.state = APP_STATE_WAIT_FOR_CONFIGURATION;  
                }
            }                    
            break;            
            
        case APP_STATE_ERROR:
            /* Do Nothing */
            break;
            
        default:
            break;
    }
}
 

/*******************************************************************************
 End of File
 */

