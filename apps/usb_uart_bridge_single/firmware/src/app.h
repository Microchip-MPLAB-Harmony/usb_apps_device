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
  MPLAB Harmony Application Header File

  Company:
    Microchip Technology Inc.

  File Name:
    app.h

  Summary:
    This header file provides prototypes and definitions for the application.

  Description:
    This header file provides function prototypes and data type definitions for
    the application.  Some of these are required by the system (such as the
    "APP_Initialize" and "APP_Tasks" prototypes) and some of them are only used
    internally by the application (such as the "APP_STATES" definition).  Both
    are defined here for convenience.
*******************************************************************************/

#ifndef _APP_H
#define _APP_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include "configuration.h"
#include "definitions.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

extern "C" {

#endif
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: Type Definitions
// *****************************************************************************
// *****************************************************************************
/*** Application Instance 0 Configuration ***/
#define APP_UART_RX_BUFF_SIZE                               (1024*6)

#define APP_USB_RX_BUFF_SIZE                                (2048*3)

#define APP_DMA_RX_PACKET_SIZE                              512

#define APP_DMA_TX_PACKET_SIZE                              512

#define APP_CDC_READ_PACKET_LENGTH                          64

#define APP_CDC_WRITE_PACKET_LENGTH                         512

#define APP_USART_DATA_SCAN_DELAY_MS                        100

#define APP_USART_DATA_TIMEOUT_DELAY_MS                     500

#define APP_CDC_WRITE_FAIL_ATTEMPT_LIMIT                    100

#define DMAC_CHANNEL_UART1_RX                               DMAC_CHANNEL_0

#define DMAC_CHANNEL_UART1_TX                               DMAC_CHANNEL_1
    
#define PORT_INDEX_COUNT                                    USB_DEVICE_CDC_INSTANCES_NUMBER

#define PORT1                                               0

#define PORT2                                               1   

// *****************************************************************************
// *****************************************************************************
// Section: Free RTOS Task Priorities
// *****************************************************************************
// *****************************************************************************


// *****************************************************************************
// *****************************************************************************
// Section: Configuration specific application constants
// *****************************************************************************
// *****************************************************************************
// *****************************************************************************
/* Application structure for  

  Summary:
    Group of function pointers to the application for UART Interface Functions.

  Description:
    This structure is a group of Group of function pointers to the application 
    for UART Interface Functions. 

  Remarks:
    None.
*/

typedef struct
{
    sercom_registers_t * (*addressGet)(void);
    
    void (*dmaChannelDisbale)(void); 
    
    void (*dmaChannelEnable)(void); 
    
    uint32_t (*frequencyGet)(void); 
    
    bool (*serialSetup)(USART_SERIAL_SETUP * serialSetup, uint32_t clkFrequency);
    
    USART_ERROR (*errorGet)(void);
    
    volatile uint32_t * (*DataGet) ( void );
    
    void (*RTSSet)(void);
    
    void (*RTSClear)(void);

} APP_USART_INTERFACE;
/* Application structure for  

  Summary:
    Group of function pointers to the application for Timer Counter Interface Functions.

  Description:
    This structure is a group of Group of function pointers to the application 
    for TC Interface Functions. 

  Remarks:
    None.
*/
typedef struct
{    
    uint16_t (*Timer16bitCounterGet)(void); 
    
    void (*Timer16bitCounterSet)(uint16_t); 
    
    void (*TimerStart)(void); 
    
} APP_TC_INTERFACE;

// *****************************************************************************
/* Application states

  Summary:
    Application states enumeration

  Description:
    This enumeration defines the valid application states.  These states
    determine the behavior of the application at various times.
*/

typedef enum
{
    /* Application's state machine's initial state. */
    APP_STATE_INIT=0,

    /* Application waits for device configuration */
    APP_STATE_WAIT_FOR_CONFIGURATION,

    /* Application waits for Baud rate */
    APP_STATE_WAIT_FOR_SERIAL_BAUD,

    /* This is where USB-USART bridge tasks are done */
    APP_STATE_SERIAL_BRIDGE_ACTIVE,

    /* Application Error state */
    APP_STATE_ERROR

} APP_STATES;

/******************************************************
 * Application COM Port Object
 ******************************************************/

typedef enum
{
    /* Application's state machine's initial state. */
    TRANS_STATE_UART_INIT=0,
            
    /* Application waits for Baud rate */
    TRANS_STATE_CDC_WRITE_NOT_SCHEDULED,
            
    /* Application waits for Baud rate */
    TRANS_STATE_CDC_WRITE_IN_PROGRESS,

    /* Application waits for Baud rate */
    TRANS_STATE_CDC_WRITE_COMPLETED

} UART_TRANS_STATE;

typedef enum
{
    /* Application's state machine's initial state. */
    TRANS_STATE_CDC_INIT=0,

    /* Application waits for Baud rate */
    TRANS_STATE_CDC_READ_IN_PROGRESS,

    /* Application waits for Baud rate */
    TRANS_STATE_CDC_READ_COMPLETED,

    /* Application waits for Baud rate */
    TRANS_STATE_CDC_READ_NOT_SCHEDULED

} CDC_TRANS_STATE;

typedef struct
{
    /* Set Line Coding Data */
    USB_CDC_LINE_CODING setLineCodingData;

    /* Get Line Coding Data */
    USB_CDC_LINE_CODING getLineCodingData;

    /* Control Line State */
    USB_CDC_CONTROL_LINE_STATE controlLineStateData;

    /* Read transfer handle */
    USB_DEVICE_CDC_TRANSFER_HANDLE readTransferHandle;

    /* Write transfer handle */
    USB_DEVICE_CDC_TRANSFER_HANDLE writeTransferHandle;
    
    CDC_TRANS_STATE cState;

    uint16_t breakData;

    uint8_t * cStartPtr;

    uint8_t * cEndPtr;

    uint8_t * cLimitPtr;

    uint8_t * cHeadPtr;

    uint8_t * cTailPtr;

    uint16_t writeFailCount;

    uint16_t cRxPrevByteCount;

    uint16_t cRxFilledByteCount;

    uint16_t cAvailableValidSpace;

    uint16_t cActualReadByteCount;

    uint16_t cBuffToUartWriteByteCount;

    bool cBuffToUartWriteInProgress;

    bool cBuffToUartWriteCompleted;

    bool readFailure;

    bool cCdcReadNotScheduled;

}APP_COM_PORT_OBJECT;

/******************************************************
 * Application USART Port Object
 ******************************************************/
typedef struct
{
    UART_TRANS_STATE uState;
            
    uint8_t * uStartPtr;

    uint8_t * uEndPtr;

    uint8_t * uHeadPtr;

    uint8_t * uTailPtr;

    uint16_t uRxFilledByteCount;

    uint16_t uActualReadByteCount;

    uint16_t uLastReadByteCount;

    uint16_t uDmaReadTimeoutMs;

    uint16_t uBuffToCdcWriteByteCount;

    bool uBuffToCdcWriteInProgress;

    bool uUartRxNotScheduled;

    bool uBuffToCdcDmaTransferInProgress;

    bool uCdcWriteInProgress;

}APP_UART_PORT_OBJECT;

typedef struct
{
    uint8_t Buff[APP_UART_RX_BUFF_SIZE];

} APP_UART_RX_BUFFER;

typedef struct
{
    uint8_t Buff[APP_USB_RX_BUFF_SIZE + APP_CDC_READ_PACKET_LENGTH];

} APP_CDC_RX_BUFFER;

// *****************************************************************************
/* Application Data

  Summary:
    Holds application data

  Description:
    This structure holds the application's data.

  Remarks:
    Application strings and buffers are be defined outside this structure.
 */

typedef struct
{
    uint16_t uSOFCounter[PORT_INDEX_COUNT];

    uint16_t uSOFTimeoutTick[PORT_INDEX_COUNT];

    uint16_t prevSOFValue[PORT_INDEX_COUNT];

    APP_COM_PORT_OBJECT cdcObj[PORT_INDEX_COUNT];

    APP_UART_PORT_OBJECT uartObj[PORT_INDEX_COUNT];

    USB_DEVICE_HANDLE usbDevHandle;

    /* The application's current state */
    APP_STATES state;

    bool isConfigured;

    bool baudReceived[PORT_INDEX_COUNT];

    bool startSOFCount;

} APP_DATA;

// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Routines
// *****************************************************************************
// *****************************************************************************
/* These routines are called by drivers when certain events occur.
*/

// *****************************************************************************
// *****************************************************************************
// Section: Application Initialization and State Machine Functions
// *****************************************************************************
// *****************************************************************************

/*******************************************************************************
  Function:
    void APP_Initialize ( void )

  Summary:
     MPLAB Harmony application initialization routine.

  Description:
    This function initializes the Harmony application.  It places the
    application in its initial state and prepares it to run so that its
    APP_Tasks function can be called.

  Precondition:
    All other system initialization routines should be called before calling
    this routine (in "SYS_Initialize").

  Parameters:
    None.

  Returns:
    None.

  Example:
    <code>
    APP_Initialize();
    </code>

  Remarks:
    This routine must be called from the SYS_Initialize function.
*/

void APP_Initialize ( void );


/*******************************************************************************
  Function:
    void APP_Tasks ( void )

  Summary:
    MPLAB Harmony Demo application tasks function

  Description:
    This routine is the Harmony Demo application's tasks function.  It
    defines the application's state machine and core logic.

  Precondition:
    The system and application initialization ("SYS_Initialize") should be
    called before calling this.

  Parameters:
    None.

  Returns:
    None.

  Example:
    <code>
    APP_Tasks();
    </code>

  Remarks:
    This routine must be called from SYS_Tasks() routine.
 */

void APP_Tasks( void );

// *****************************************************************************
/* USART Interface Functions.

  Summary:
    USART Interface Functions.

  Description:
    This is a pointer to USART Interface functions.

  Remarks:
    None.
*/
extern APP_USART_INTERFACE appUSARTInterface;
extern APP_TC_INTERFACE appTCInterface;
#endif /* _APP_H */

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

/*******************************************************************************
 End of File
 */

