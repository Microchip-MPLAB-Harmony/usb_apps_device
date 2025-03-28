/*******************************************************************************
  System Configuration Header

  File Name:
    configuration.h

  Summary:
    Build-time configuration header for the system defined by this project.

  Description:
    An MPLAB Project may have multiple configurations.  This file defines the
    build-time options for a single configuration.

  Remarks:
    This configuration header must not define any prototypes or data
    definitions (or include any files that do).  It only provides macro
    definitions for build-time configuration options

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

#ifndef CONFIGURATION_H
#define CONFIGURATION_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************
/*  This section Includes other configuration headers necessary to completely
    define this configuration.
*/

#include "user.h"
#include "device.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

extern "C" {

#endif
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: System Configuration
// *****************************************************************************
// *****************************************************************************



// *****************************************************************************
// *****************************************************************************
// Section: System Service Configuration
// *****************************************************************************
// *****************************************************************************


// *****************************************************************************
// *****************************************************************************
// Section: Driver Configuration
// *****************************************************************************
// *****************************************************************************
/* USART Driver Instance 0 Configuration Options */
#define DRV_USART_INDEX_0                  0
#define DRV_USART_CLIENTS_NUMBER_IDX0      1
#define DRV_USART_QUEUE_SIZE_IDX0          5

/* USART Driver Global Configuration Options */
#define DRV_USART_INSTANCES_NUMBER         1


// *****************************************************************************
// *****************************************************************************
// Section: Middleware & Other Library Configuration
// *****************************************************************************
// *****************************************************************************
/*** USB Driver Configuration ***/

/* Maximum USB driver instances */
#define DRV_USBHS_INSTANCES_NUMBER                        1U

/* Interrupt mode enabled */
#define DRV_USBHS_INTERRUPT_MODE                          true


/* Enables Device Support */
#define DRV_USBHS_DEVICE_SUPPORT                          true

/* Disable Host Support */
#define DRV_USBHS_HOST_SUPPORT                            false




#define DRV_USBHS_ENDPOINTS_NUMBER                        2U

/* Alignment for buffers that are submitted to USB Driver*/ 
#define USB_ALIGN  CACHE_ALIGN  __ALIGNED(16)


/* Maximum instances of Printer function driver */
#define USB_DEVICE_PRINTER_INSTANCES_NUMBER          1U 

/* Printer Transfer Queue Size for both read and
   write. Applicable to all instances of the
   function driver */
#define USB_DEVICE_PRINTER_QUEUE_DEPTH_COMBINED                 2U

/* MISRA C-2012 Rule 5.4 deviated:1, Deviation record ID -  H3_USB_MISRAC_2012_R_5_4_DR_1 */

/* Length of the Device ID string including length in the first two bytes */
#define USB_DEVICE_PRINTER_DEVICE_ID_STRING_LENGTH    81U


/* Device ID string including length in the first two bytes */
#define USB_DEVICE_PRINTER_DEVICE_ID_STRING  {0,81,'M','F','G',':','M','i','c','r','o','c','h','i','p',';','M','D','L',':','G','e','n','e','r','i','c',';','C','M','D',':','E','P','S','O','N',';','C','L','S',':','P','R','I','N','T','E','R',';','D','E','S',':','G','e','n','e','r','i','c','T','e','x','t','O','n','l','y','P','r','i','n','t','e','r','D','e','m','o',';'},


#define USB_DEVICE_INSTANCES_NUMBER                         1U

/* EP0 size in bytes */
#define USB_DEVICE_EP0_BUFFER_SIZE                          64U

/* The USB Device Layer will not initialize the USB Driver */
#define USB_DEVICE_DRIVER_INITIALIZE_EXPLICIT

/* Enable SOF Events */
#define USB_DEVICE_SOF_EVENT_ENABLE




// *****************************************************************************
// *****************************************************************************
// Section: Application Configuration
// *****************************************************************************
// *****************************************************************************


//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // CONFIGURATION_H
/*******************************************************************************
 End of File
*/
