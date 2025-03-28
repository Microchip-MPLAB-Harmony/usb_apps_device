/*******************************************************************************
  USB Device Driver Implementation of device mode operation routines

  Company:
    Microchip Technology Inc.

  File Name:
    drv_usbfs_device.c

  Summary:
    USB Device Driver Dynamic Implementation of device mode operation routines

  Description:
    The USB device driver provides a simple interface to manage the USB modules
    on Microchip microcontrollers.  This file implements the interface routines
    for the USB driver when operating in device mode.

    While building the driver from source, ALWAYS use this file in the build if
    device mode operation is required.
*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2012 released Microchip  Technology  Inc.   All  rights  reserved.

Microchip licenses to  you  the  right  to  use,  modify,  copy  and  distribute
Software only when embedded on a Microchip  microcontroller  or  digital  signal
controller  that  is  integrated  into  your  product  or  third  party  product
(pursuant to the  sublicense  terms  in  the  accompanying  license  agreement).

You should refer  to  the  license  agreement  accompanying  this  Software  for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED AS IS  WITHOUT  WARRANTY  OF  ANY  KIND,
EITHER EXPRESS  OR  IMPLIED,  INCLUDING  WITHOUT  LIMITATION,  ANY  WARRANTY  OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A  PARTICULAR  PURPOSE.
IN NO EVENT SHALL MICROCHIP OR  ITS  LICENSORS  BE  LIABLE  OR  OBLIGATED  UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION,  BREACH  OF  WARRANTY,  OR
OTHER LEGAL  EQUITABLE  THEORY  ANY  DIRECT  OR  INDIRECT  DAMAGES  OR  EXPENSES
INCLUDING BUT NOT LIMITED TO ANY  INCIDENTAL,  SPECIAL,  INDIRECT,  PUNITIVE  OR
CONSEQUENTIAL DAMAGES, LOST  PROFITS  OR  LOST  DATA,  COST  OF  PROCUREMENT  OF
SUBSTITUTE  GOODS,  TECHNOLOGY,  SERVICES,  OR  ANY  CLAIMS  BY  THIRD   PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE  THEREOF),  OR  OTHER  SIMILAR  COSTS.
*******************************************************************************/
//DOM-IGNORE-END

#include "configuration.h"
#include "driver/usb/usbfs/drv_usbfs.h"
#include "driver/usb/usbfs/src/drv_usbfs_local.h"

/*****************************************************
 * This structure is a pointer to a set of USB Driver
 * Device mode functions. This set is exported to the
 * device layer when the device layer must use the
 * PIC32MX USB Controller.
 ******************************************************/

DRV_USB_DEVICE_INTERFACE gDrvUSBFSDeviceInterface =
{
    .open = DRV_USBFS_Open,
    .close = DRV_USBFS_Close,
    .eventHandlerSet = DRV_USBFS_ClientEventCallBackSet,
    .deviceAddressSet = DRV_USBFS_DEVICE_AddressSet,
    .deviceCurrentSpeedGet = DRV_USBFS_DEVICE_CurrentSpeedGet,
    .deviceSOFNumberGet = DRV_USBFS_DEVICE_SOFNumberGet,
    .deviceAttach = DRV_USBFS_DEVICE_Attach,
    .deviceDetach = DRV_USBFS_DEVICE_Detach,
    .deviceEndpointEnable = DRV_USBFS_DEVICE_EndpointEnable,
    .deviceEndpointDisable = DRV_USBFS_DEVICE_EndpointDisable,
    .deviceEndpointStall = DRV_USBFS_DEVICE_EndpointStall,
    .deviceEndpointStallClear = DRV_USBFS_DEVICE_EndpointStallClear,
    .deviceEndpointIsEnabled = DRV_USBFS_DEVICE_EndpointIsEnabled,
    .deviceEndpointIsStalled = DRV_USBFS_DEVICE_EndpointIsStalled,
    .deviceIRPSubmit = DRV_USBFS_DEVICE_IRPSubmit,
    .deviceIRPCancel = DRV_USBFS_DEVICE_IRPCancel,
    .deviceIRPCancelAll = DRV_USBFS_DEVICE_IRPCancelAll,
    .deviceRemoteWakeupStop = DRV_USBFS_DEVICE_RemoteWakeupStop,
    .deviceRemoteWakeupStart = DRV_USBFS_DEVICE_RemoteWakeupStart,
    .deviceTestModeEnter = NULL
};

// *****************************************************************************
/* Function:
    F_DRV_USBFS_DEVICE_Initialize(DRV_USBFS_OBJ * drvObj, SYS_MODULE_INDEX index)

  Summary:
    This function is calle when the driver is intialized for device mode
    operation.

  Description:
    This function is called when the driver is intialized for device mode
    operation. The function enables USB_OTG_INT_SESSION_VALID interrupt to
    detect VBUS session valid\invalid scenario. All the other interrupts will be
    enabled after the device has been attached (DRV_USBFS_DEVICE_Attach()
    function will be called)

  Remarks:
    See drv_usbfs.h for usage information.
*/

void F_DRV_USBFS_DEVICE_Initialize
(
    DRV_USBFS_OBJ * drvObj, 
    SYS_MODULE_INDEX index
)
{
    volatile usb_registers_t * usb = ((usb_registers_t *)((uintptr_t)drvObj->usbID));
    /* Initialize device specific flags */
    drvObj->vbusIsValid = false;
    drvObj->isAttached = false;
    drvObj->isSuspended = false;

    /* Disable all interrupts */
    usb->USB_UIE = ~USB_UIE_Msk; 
    usb->USB_UEIE = ~USB_UEIE_Msk; 
    usb->USB_UOTGIE = ~USB_UOTGIE_Msk;
}

// *****************************************************************************
/* MISRA C-2012 Rule 11.3 deviate:8, and 11.6 deviate:16. Deviation record ID -  
    H3_USB_MISRAC_2012_R_11_3_DR_1, H3_USB_MISRAC_2012_R_11_6_DR_1 */

/* Function:
    void DRV_USBFS_DEVICE_AddressSet(DRV_HANDLE handle, uint8_t address)

  Summary:
    This function will set the USB module address that is obtained from the Host.

  Description:
    This function will set the USB module address  that  is  obtained  from  the
    Host in a setup transaction. The address is obtained from  the  SET_ADDRESS
    command issued by the Host. The  primary  (first)  client  of  the  driver
    uses this function to set the module's USB address after decoding the  setup
    transaction from the Host.

  Remarks:
    See drv_usbfs.h for usage information.
*/

void DRV_USBFS_DEVICE_AddressSet(DRV_HANDLE handle, uint8_t address)
{
    USB_MODULE_ID  usbID = ((DRV_USBFS_OBJ *)handle)->usbID;
    volatile usb_registers_t *usb =  (usb_registers_t * )((uintptr_t)(usbID));
    /* Check if the handle is valid */
    if((DRV_HANDLE_INVALID != handle) && (handle != (DRV_HANDLE)(NULL)))
    {
        /* Set the address */
        usb->USB_UADDR = address & USB_UADDR_DEVADDR_Msk;
    }
    else
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSBFS Driver: Driver Handle is invalid");
    }
}

// *****************************************************************************
/* Function:
    USB_SPEED DRV_USBFS_DEVICE_CurrentSpeedGet(DRV_HANDLE handle)

  Summary:
    This function returns the USB speed at which the device is operating.

  Description:
    This function returns the USB speed at which the device is operating. 

  Remarks:
    See drv_usbfs.h for usage information.
*/

USB_SPEED DRV_USBFS_DEVICE_CurrentSpeedGet(DRV_HANDLE handle)
{
    USB_SPEED speed = USB_SPEED_ERROR;

    /* Check if the handle is valid */
    if((DRV_HANDLE_INVALID != handle) && (handle != (DRV_HANDLE)(NULL)))
    {
        speed = USB_SPEED_FULL;
    }
    else
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSBFS Driver: Driver Handle is invalid");
    }
    
    /* Return the speed */
    return speed;
}

// *****************************************************************************
/* Function:
    void DRV_USBFS_DEVICE_RemoteWakeup_Start(DRV_HANDLE handle)

  Summary:
    This function causes the device to start Remote Wakeup Signalling on the
    bus.
    
  Description:
    This function causes the device to start Remote Wakeup Signalling on the
    bus. This function should be called when the device, presently placed in
    suspend mode by the Host, wants to be wakeup. Note that the device can do
    this only when the Host has enabled the device's Remote Wakeup capability.

  Remarks:
    See drv_usbfs.h for usage information.
*/

void DRV_USBFS_DEVICE_RemoteWakeupStart(DRV_HANDLE handle)
{
    USB_MODULE_ID  usbID = ((DRV_USBFS_OBJ *)handle)->usbID;
    volatile usb_registers_t *usb =  (usb_registers_t * )((uintptr_t)(usbID));
    /* Check if the handle is valid */
    if((DRV_HANDLE_INVALID != handle) && (handle != (DRV_HANDLE)(NULL)))
    {
        /* Enable Resume signalling */
        usb->USB_UCON |= USB_UCON_RESUME_Msk;
    }
    else
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSBFS Driver: Driver Handle is invalid");
    }
}

// *****************************************************************************
/* MISRA C-2012 Rule 5.1 deviated:1 Deviation record ID -  H3_USB_MISRAC_2012_R_5_1_DR_1 */
/* Function:
    void DRV_USBFS_DEVICE_RemoteWakeupStop(DRV_HANDLE handle)

  Summary:
    This function causes the device to stop the Remote Wakeup Signalling on the
    bus.
    
  Description:
    This function causes the device to stop Remote Wakeup Signalling on the bus.
    This function should be called after the DRV_USBFS_DEVICE_RemoteWakeupStart
    function was called to start the Remote Wakeup signaling on the bus.

  Remarks:
    See drv_usbfs.h for usage information.
*/

void DRV_USBFS_DEVICE_RemoteWakeupStop(DRV_HANDLE handle)
{
    USB_MODULE_ID  usbID = ((DRV_USBFS_OBJ *)handle)->usbID;
    volatile usb_registers_t *usb =  (usb_registers_t * )((uintptr_t)(usbID));
    /* Check if the handle is valid */
    if((DRV_HANDLE_INVALID != handle) && (handle != (DRV_HANDLE)(NULL)))
    {
        /* Disable Resume signalling */
        usb->USB_UCON &= ~USB_UCON_RESUME_Msk;
    }
    else
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSBFS Driver: Driver Handle is invalid");
    }
}

/* MISRAC 2012 deviation block end */
// *****************************************************************************
/* Function:
    void DRV_USBFS_DEVICE_Attach(DRV_HANDLE handle)

  Summary:
    This function will enable the attach signaling resistors on the D+ and D-
    lines thus letting the USB Host know that a device has been attached on the
    bus.

  Description:
    This function enables the pull-up resistors on the D+ or D- lines thus
    letting the USB Host know that a device has been attached on the bus . This
    function should be called when the driver client is ready  to  receive
    communication  from  the  Host (typically after all initialization is
    complete). The USB 2.0 specification requires VBUS to be detected before the
    data line pull-ups are enabled. The application must ensure the same.

  Remarks:
    See drv_usbfs.h for usage information.
*/

void DRV_USBFS_DEVICE_Attach(DRV_HANDLE handle)
{
    USB_MODULE_ID  usbID = ((DRV_USBFS_OBJ *)handle)->usbID;
    volatile usb_registers_t *usb =  (usb_registers_t * )((uintptr_t)(usbID));
    
    /* Check if the handle is valid */
    if((DRV_HANDLE_INVALID != handle) && (handle != (DRV_HANDLE)(NULL)))
    {
        /* Update the driver flag indicating attach */
        ((DRV_USBFS_OBJ *)handle)->isAttached = true;

        /* Configure the peripheral for device mode operation. This function
         * also enables the D+ pull up resistor.  */
        usb->USB_UCON &= ~(USB_UCON_USBEN_SOFEN_Msk);
        usb->USB_UCON &= ~(USB_UCON_HOSTEN_Msk );
        usb->USB_UOTGCON &= ~(USB_UOTGCON_OTGEN_Msk);
        usb->USB_UCON |= USB_UCON_USBEN_SOFEN_Msk;

        /* Enables all interrupts except RESUME. RESUMEIF will be enabled only
         * on getting SUSPEND */
        usb->USB_UIE = USB_UIE_Msk & ~USB_UIE_RESUMEIE_Msk; 
        usb->USB_UEIE = USB_UEIE_Msk; 
        usb->USB_UOTGIE = ((~USB_UOTGIE_Msk) | USB_UOTGIE_SESS_VLD_Msk | USB_UOTGIE_ACTIVITY_Msk);
    }
    else
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSBFS Driver: Driver Handle is invalid");
    }
}

// *****************************************************************************
/* Function:
      void DRV_USBFS_DEVICE_Detach(DRV_HANDLE handle)

  Summary:
    This function will disable the attach signaling resistors on the D+ and D-
    lines thus letting the USB Host know that the device has detached from the
    bus.

  Description:
    This function disables the pull-up resistors on the D+ or D- lines. This
    function should be called when the application wants to disconnect the
    device  from  the bus (typically to implement a soft detach or switch  to
    Host  mode operation).  A self-powered device should be detached from the
    bus when the VBUS is not valid.

  Remarks:
    See drv_usbfs.h for usage information.
*/

void DRV_USBFS_DEVICE_Detach(DRV_HANDLE handle)
{

    USB_MODULE_ID  usbID = ((DRV_USBFS_OBJ *)handle)->usbID;
    volatile usb_registers_t *usb =  (usb_registers_t * )((uintptr_t)(usbID));
    /* Check if the handle is valid */
    if((DRV_HANDLE_INVALID != handle) && (handle != (DRV_HANDLE)(NULL)))
    {
        /* Update the driver flag indicating detach */
        ((DRV_USBFS_OBJ *)handle)->isAttached = false;

        /* Clear all the USB interrupt flags */
        usb->USB_UIR = USB_UIR_Msk;
        
        /* Disable all the USB interrupts */
        usb->USB_UIE &= (~USB_UIE_Msk);
        
        /* Clear all USB Error Interrupt flags */
        usb->USB_UEIR = USB_UEIR_Msk;
        
        /* Disable all USB Error interrupts */
        usb->USB_UEIE &= ( ~USB_UEIE_Msk );
        
        /* Clear the interrupt flags excep Session Valid interrupt flag */
        usb->USB_UOTGIR = USB_UOTGIR_Msk & (~USB_UOTGIR_SESVDIF_Msk);
        
        /* Disable all interrupts except Session Valid Interrupt Enable */
        usb->USB_UOTGIE &= (~(USB_UOTGIE_Msk & (~USB_UOTGIE_SESS_VLD_Msk)));
        
        /* Reset the operating mode */
        usb->USB_UCON &= ~(USB_UCON_USBEN_SOFEN_Msk);
        usb->USB_UCON &= ~(USB_UCON_HOSTEN_Msk);
        usb->USB_UOTGCON &= ~(USB_UOTGCON_OTGEN_Msk);
    }
    else
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSBFS Driver: Driver Handle is invalid");
    }
}

// *****************************************************************************
/* Function:
    void F_DRV_USBFS_DEVICE_EndpointObjectEnable
    (
        DRV_USBFS_DEVICE_ENDPOINT_OBJ * endpointObject,
        uint16_t endpointSize,
        USB_TRANSFER_TYPE endpointType,
        USB_BUFFER_DATA01 dataToggle
     )

  Summary:
    This helper function populates the software endpoint object with provided
    data.

  Description:
    This helper function populates the software endpoint object with provided
    data.

  Remarks:
    This is a local function and should not be called directly by the
    application.
*/

void F_DRV_USBFS_DEVICE_EndpointObjectEnable
(
    DRV_USBFS_DEVICE_ENDPOINT_OBJ * endpointObject,
    uint16_t endpointSize,
    USB_TRANSFER_TYPE endpointType,
    USB_BUFFER_DATA01 dataToggle,
    USB_PING_PONG_STATE nextPingPong
)
{
    uint32_t endpointState;
    
    /* This is a helper function */
    endpointObject->nextDataToggle  = USB_BUFFER_DATA0;
    endpointObject->irpQueue        = NULL;
    endpointObject->maxPacketSize   = endpointSize;
    endpointObject->nextPingPong    = (USB_BUFFER_PING_PONG)nextPingPong;
    endpointObject->endpointType    = endpointType;
    endpointState = (uint32_t)endpointObject->endpointState | (uint32_t)DRV_USBFS_DEVICE_ENDPOINT_STATE_ENABLED;
    endpointObject->endpointState = (DRV_USBFS_DEVICE_ENDPOINT_STATE)endpointState ;
    
}

// *****************************************************************************
/* Function:
    USB_ERROR DRV_USBFS_DEVICE_EndpointEnable
    (
        DRV_HANDLE handle,
        USB_ENDPOINT endpointAndDirection,
        USB_TRANSFER_TYPE transferType,
        uint16_t endpointSize
    )

  Summary:
    This function enables an endpoint for the specified direction and endpoint
    size.
    
  Description:
    This function enables an endpoint for the specified direction and endpoint
    size. The function will enable the endpoint for communication in one
    direction at a time. It must be called twice if the endpoint is required to
    communicate in both the directions, with the exception of control endpoints.
    If the endpoint type is a control endpoint, the endpoint is always
    bidirectional and the function needs to be called only once.  
    
    The size of the endpoint must match the wMaxPacketSize reported in the
    endpoint descriptor for this endpoint. A transfer that is scheduled over
    this endpoint will be scheduled in wMaxPacketSize transactions. The function
    does not check if the endpoint is already in use. It is the client's
    responsibility to make sure that a endpoint is not accidentally reused.

  Remarks:
    See drv_usbfs.h for usage information.
*/

USB_ERROR DRV_USBFS_DEVICE_EndpointEnable
(
    DRV_HANDLE handle, 
    USB_ENDPOINT endpointAndDirection, 
    USB_TRANSFER_TYPE transferType,
    uint16_t endpointSize
)
{
    /* This function can be called from from the USB ISR. Because an endpoint
     * can be owned by one client only, we dont need mutex protection in this
     * function */

    int32_t direction;
    int32_t iEntry;
    bool handshake;
    uint8_t endpoint;
    DRV_USBFS_OBJ * hDriver;
    USB_MODULE_ID usbID;
    DRV_USBFS_BDT_ENTRY * pBDT;
    DRV_USBFS_DEVICE_ENDPOINT_OBJ * endpointObject;
    USB_PING_PONG_STATE nextPingPong;
    uint32_t mask = 1;
    USB_ERROR returnValue = USB_ERROR_NONE;
    volatile usb_registers_t   * usb = (usb_registers_t *)NULL;

    /* Enable the endpoint */

    endpoint = endpointAndDirection & 0xFU;
    direction = (int32_t)((endpointAndDirection & 0x80U) != 0U);
    
    if(endpoint < DRV_USBFS_ENDPOINTS_NUMBER)
    {
        if((DRV_HANDLE_INVALID != handle) && (handle != (DRV_HANDLE)(NULL)))
        {
            /* Check if the handle is valid */
            usbID = ((DRV_USBFS_OBJ *)handle)->usbID;
            usb = (usb_registers_t *)((uintptr_t)usbID);
            hDriver = (DRV_USBFS_OBJ *)handle;

            /* The BDT table has four entries per endpoint The following statement
             * points pBDT to the first endpoint specific entry */

            pBDT = hDriver->pBDT + (endpoint * 4U);

            /* Get the pointer to the endpoint object */

            endpointObject = (hDriver->endpointTable + (2U * endpoint) + 0);

            if(transferType == USB_TRANSFER_TYPE_CONTROL)
            {
                /* For a control endpoint enable both directions. Clear up the
                 * BDT entries. */

                uint32_t * pBDT32bit = (uint32_t *)pBDT;

                for(iEntry = 0; iEntry < 7; iEntry ++)
                {
                    /* A full duplex endpoint has 4 entries, 2 for each
                     * direction */

                    *(pBDT32bit + iEntry) = 0;
                }

                /* The following function enables both directions */
                usb->USB_UEP[endpoint].USB_UEPx &= ( ~ USB_UEPx_EPCONDIS_Msk );
                usb->USB_UEP[endpoint].USB_UEPx |= ( USB_UEPx_EPTXEN_Msk | USB_UEPx_EPRXEN_Msk | USB_UEPx_EPHSHK_Msk );
                /* The BDT even odd buffer descriptor entries to be used is is
                 * contained in the tx/rx endpoint next ping pong indicators.
                 * These indicators are updated when the hardware interrupts
                 * occur */

                mask = mask << endpoint ; 
                if (( hDriver->rxEndpointsNextPingPong & mask ) != 0U)
                {
                    nextPingPong = USB_PING_PONG_ODD ;
                }
                else
                {
                    nextPingPong = USB_PING_PONG_EVEN;
                }

                /* This is the RX endpoint */        
                F_DRV_USBFS_DEVICE_EndpointObjectEnable(endpointObject, endpointSize, transferType, USB_BUFFER_DATA0,nextPingPong);

                /* This is when data moves from device to host. For control end
                 * points the Data toggle always starts with DATA1. */

                endpointObject ++;

                if (( hDriver->txEndpointsNextPingPong & mask  ) != 0U)
                {
                    nextPingPong = USB_PING_PONG_ODD; 
                }
                else
                {
                    nextPingPong = USB_PING_PONG_EVEN;
                }

                /* Update the TX endpoint object */
                F_DRV_USBFS_DEVICE_EndpointObjectEnable(endpointObject, endpointSize, transferType, USB_BUFFER_DATA1,nextPingPong);
            }
            else
            {
                /* Clear up the even odd entries for this endpoint direction in
                 * the BDT.  Each entry has 2 32 bit entries */

                pBDT += (2 * direction);

                /* Clear up the even entry */
                pBDT->word[0] = 0;
                pBDT->word[1] = 0;
                pBDT ++;

                /* Clear up the odd entry */
                pBDT->word[0] = 0;
                pBDT->word[1] = 0;

                handshake = (transferType == USB_TRANSFER_TYPE_ISOCHRONOUS) ? false : true;
                usb->USB_UEP[endpoint].USB_UEPx |= (( USB_UEPx_EPRXEN_Msk >> (uint32_t) direction) | (uint32_t) handshake);
                mask = mask << endpoint ;

                /* Update the endpoint database */
                if( direction == 0)
                {
                    if (( hDriver->rxEndpointsNextPingPong & mask  ) != 0U)
                    {
                        /* This means the next ping pong entry should be ODD */
                        nextPingPong = USB_PING_PONG_ODD ;
                    }
                    else
                    {
                        /* This means the next ping entry should be even */
                        nextPingPong = USB_PING_PONG_EVEN;
                    }
                }
                else  
                {
                    if (( hDriver->txEndpointsNextPingPong & mask  ) != 0U)
                    {
                        nextPingPong = USB_PING_PONG_ODD; 
                    }
                    else
                    {
                        nextPingPong = USB_PING_PONG_EVEN;
                    }
                }

                /* Update the endpoint object */
                endpointObject += direction;
                F_DRV_USBFS_DEVICE_EndpointObjectEnable(endpointObject, endpointSize, transferType, USB_BUFFER_DATA0 ,nextPingPong);
            }
        }
        else
        {
            SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSBFS Driver: Driver Handle is invalid");
            returnValue = USB_ERROR_PARAMETER_INVALID;
        }
    }
    else
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO,"\r\nUSBFS Driver: Unsupported endpoint");
        returnValue = USB_ERROR_DEVICE_ENDPOINT_INVALID;
    }
    
    return(returnValue);
}

// *****************************************************************************
/* Function:
    USB_ERROR DRV_USBFS_DEVICE_EndpointDisable
    (
        DRV_HANDLE handle,
        USB_ENDPOINT endpointAndDirection
    )

  Summary:
    This function disables an endpoint.
    
  Description:
    This function disables an endpoint. If the endpoint type is a control
    endpoint type, both directions are disabled. For non-control endpoints, the
    function disables the specified direction only. The direction to be disabled 
    is specified by the Most Significant Bit (MSB) of the endpointAndDirection 
    parameter.

  Remarks:
    See drv_usbfs.h for usage information.
*/

USB_ERROR DRV_USBFS_DEVICE_EndpointDisable
(
    DRV_HANDLE handle, 
    USB_ENDPOINT endpointAndDirection
)
{
    /* This routine disables the specified endpoint.  It does not check if there
     * is any ongoing communication on the bus through the endpoint */

    uint8_t endpoint;
    int32_t  direction, iEntry;
    DRV_USBFS_OBJ * hDriver;
    DRV_USBFS_DEVICE_ENDPOINT_OBJ * endpointObject;
    USB_MODULE_ID usbID;
    USB_ERROR returnValue  = USB_ERROR_NONE;
    uint32_t endpointState;
    volatile usb_registers_t *usb =  (usb_registers_t*)NULL;

    /* Check if the handle is valid */
    if((DRV_HANDLE_INVALID != handle) && (handle != (DRV_HANDLE)(NULL)))
    {
        /* Get the pointer to associated endpoint object table. Note that the
         * default value of returnValue is USB_ERROR_NONE. This is the value
         * that will returned if the function excutes all the success paths. */

        hDriver = ((DRV_USBFS_OBJ *)handle);
        usbID = hDriver->usbID;
        usb = (usb_registers_t * )((uintptr_t)(usbID));
        endpointObject = hDriver->endpointTable;

        /* If the endpointAndDirection is _DRV_USBFS_DEVICE_ENDPOINT_ALL then
         * this means that the DRV_USBFS_DEVICE_EndpointDisableAll() function
         * was called */

        if(endpointAndDirection == DRV_USBFS_DEVICE_ENDPOINT_ALL)
        {
            for(iEntry = 0; iEntry < (int32_t)  DRV_USBFS_ENDPOINTS_NUMBER; iEntry ++)
            {
                usb->USB_UEP[iEntry].USB_UEPx |= USB_UEPx_EPCONDIS_Msk;
                usb->USB_UEP[iEntry].USB_UEPx &= (~( USB_UEPx_EPTXEN_Msk | USB_UEPx_EPRXEN_Msk | USB_UEPx_EPHSHK_Msk ));

                /* Update the endpoint database */
                endpointState = (uint32_t)endpointObject->endpointState  & (~((uint32_t)DRV_USBFS_DEVICE_ENDPOINT_STATE_ENABLED));
                endpointObject->endpointState  = (DRV_USBFS_DEVICE_ENDPOINT_STATE)endpointState;
                endpointObject ++;
                endpointState = (uint32_t)endpointObject->endpointState  & (~((uint32_t)DRV_USBFS_DEVICE_ENDPOINT_STATE_ENABLED));
                endpointObject->endpointState = (DRV_USBFS_DEVICE_ENDPOINT_STATE)endpointState;
                endpointObject ++;
            }
        }
        else
        {
            /* A specific endpoint and direction needs to be disabled */

            endpoint = endpointAndDirection & 0xFU;
            direction = (int32_t)((endpointAndDirection & 0x80U) != 0U);

            if(endpoint < DRV_USBFS_ENDPOINTS_NUMBER)
            {
                /* Setup the endpointObj to point to the correct endpoint object */

                endpointObject += ((2U * endpoint) + (uint8_t)direction);

                if(endpointObject->endpointType == USB_TRANSFER_TYPE_CONTROL)
                {
                    /* Disable a control endpoint and update the endpoint
                     * database. */

                    usb->USB_UEP[endpoint].USB_UEPx |= USB_UEPx_EPCONDIS_Msk;
                    usb->USB_UEP[endpoint].USB_UEPx &= (~( USB_UEPx_EPTXEN_Msk | USB_UEPx_EPRXEN_Msk | USB_UEPx_EPHSHK_Msk ));
                    endpointState = (uint32_t)endpointObject->endpointState  & (~((uint32_t)DRV_USBFS_DEVICE_ENDPOINT_STATE_ENABLED));
                    endpointObject->endpointState  = (DRV_USBFS_DEVICE_ENDPOINT_STATE)endpointState;
                    endpointObject += 1;
                    endpointState = (uint32_t)endpointObject->endpointState  & (~((uint32_t)DRV_USBFS_DEVICE_ENDPOINT_STATE_ENABLED));
                    endpointObject->endpointState  = (DRV_USBFS_DEVICE_ENDPOINT_STATE)endpointState;
                }
                else
                {
                    /* Disable a specific endpoint direction for non control
                     * endpoints */

                    usb->USB_UEP[endpoint].USB_UEPx &= (~(USB_UEPx_EPRXEN_Msk >> (uint32_t)direction));
                    endpointState =  (uint32_t)endpointObject->endpointState  & (~((uint32_t)DRV_USBFS_DEVICE_ENDPOINT_STATE_ENABLED));
                    endpointObject->endpointState  = (DRV_USBFS_DEVICE_ENDPOINT_STATE)endpointState;
                }
            }
            else
            {
                /* This means the endpoint is not valid */
                SYS_DEBUG_MESSAGE(SYS_ERROR_INFO,"\r\nUSBFS Driver: Unsupported endpoint");
                returnValue = USB_ERROR_DEVICE_ENDPOINT_INVALID;
            }
        }
    }
    else
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSBFS Driver: Driver Handle is invalid");
        returnValue = USB_ERROR_PARAMETER_INVALID;
    }

    return(returnValue);
}

// *****************************************************************************
/* Function:
    bool DRV_USBFS_DEVICE_EndpointIsEnabled
    (
        DRV_HANDLE client,
        USB_ENDPOINT endpointAndDirection
    )

  Summary:
    This function returns the enable/disable status of the specified endpoint
    and direction.
    
  Description:
    This function returns the enable/disable status of the specified endpoint
    and direction.

  Remarks:
    See drv_usbfs.h for usage information.
*/

bool DRV_USBFS_DEVICE_EndpointIsEnabled
(
    DRV_HANDLE client, 
    USB_ENDPOINT endpointAndDirection
)
{
    DRV_USBFS_OBJ * hDriver;
    DRV_USBFS_DEVICE_ENDPOINT_OBJ * endpointObj;
    bool isEnabled = false;

    uint8_t endpoint = endpointAndDirection & 0xFU;
    int32_t direction = (int32_t)((endpointAndDirection & 0x80U) != 0U);

    /* Check if the handle is valid */
    if((DRV_HANDLE_INVALID != client) && (client != (DRV_HANDLE)(NULL)))
    {
        if(endpoint < DRV_USBFS_ENDPOINTS_NUMBER)
        {
            hDriver = ((DRV_USBFS_OBJ *)client);
            endpointObj = hDriver->endpointTable + (2U * endpoint) + direction;

            /* The default value of isEnabled is false. Check the endpoint state. */
            if(((uint32_t)endpointObj->endpointState & (uint32_t)DRV_USBFS_DEVICE_ENDPOINT_STATE_ENABLED) != 0U)
            {
                isEnabled = true;
            }
        }
        else
        {
            SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSBFS Driver: Endpoint is not invalid");
        }
    }
    else
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSBFS Driver: Driver Handle is invalid");
    }

    return (isEnabled);
}

// *****************************************************************************
/* Function:
    bool DRV_USBFS_DEVICE_EndpointIsStalled
    (
        DRV_HANDLE client,
        USB_ENDPOINT endpoint
    )

  Summary:
    This function returns the stall status of the specified endpoint and
    direction.

  Description:
    This function returns the stall status of the specified endpoint and
    direction.

  Remarks:
    See drv_usbfs.h for usage information.
*/

bool DRV_USBFS_DEVICE_EndpointIsStalled
(
    DRV_HANDLE client, 
    USB_ENDPOINT endpoint
)
{
    DRV_USBFS_OBJ * hDriver;
    DRV_USBFS_DEVICE_ENDPOINT_OBJ * endpointObj;
    uint8_t endpoint_t = endpoint & 0xFU;
    int32_t direction = (int32_t)((endpoint & 0x80U) != 0U);
    bool isStalled = false;

    /* Check if the handle is valid */
    if((DRV_HANDLE_INVALID != client) && (client != (DRV_HANDLE)(NULL)))
    {
        hDriver = ((DRV_USBFS_OBJ *)client);

        if(endpoint_t < DRV_USBFS_ENDPOINTS_NUMBER)
        {
            endpointObj = hDriver->endpointTable + (2U * endpoint_t) + direction;

            if(((uint32_t)endpointObj->endpointState & (uint32_t)DRV_USBFS_DEVICE_ENDPOINT_STATE_STALLED) != 0U)
            {
                isStalled = true;
            }
        }
        else
        {
            SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSBFS Driver: Endpoint is invalid");
        }
    }
    else
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSBFS Driver: Driver Handle is invalid");
    }

    return(isStalled);
}

// *****************************************************************************

/* Function:
    void F_DRV_USBFS_DEVICE_EndpointBDTEntryArm
    (
        DRV_USBFS_BDT_ENTRY * pBDT,
        DRV_USBFS_DEVICE_ENDPOINT_OBJ * endpointObj,
        USB_DEVICE_IRP_LOCAL * irp,
        int direction
    )

  Summary:
    This function enables a Buffer Descriptor Table entry. 

  Description:
    This function enables a Buffer Descriptor Table entry. Enabling and arming
    the entry allows the endpoint to reply to the host request.

  Remarks:
    This is a local function and should not be called directly by the
    application.
*/

void F_DRV_USBFS_DEVICE_EndpointBDTEntryArm
(
    DRV_USBFS_BDT_ENTRY * pBDT, 
    DRV_USBFS_DEVICE_ENDPOINT_OBJ * endpointObj, 
    USB_DEVICE_IRP_LOCAL * irp,
    int direction
)
{
    /* pBDT is the pointer to the ping pong BDT entries for the endpoint and
     * direction  In this driver we dont check for the data toggle while
     * receiving data from the host. The assumption here is that the host is
     * correct */

    /* If the endpoint is stalled, the stall will be cleared */

    uint16_t size;
    DRV_USBFS_BDT_ENTRY * currentBDTEntry;
    uint32_t DataRead;

    currentBDTEntry = pBDT + (uint32_t) endpointObj->nextPingPong;
    
    /* Calculate the size of the transaction */
    if((int32_t)USB_DATA_DIRECTION_DEVICE_TO_HOST == direction)
    {
        /* If data is moving from device to host then enable data toggle
         * syncronization */

        currentBDTEntry->byte[0] = 0x08;

        /* Adjust buffer address for the number of bytes sent */
        currentBDTEntry->word[1] = (uint32_t) ((uint8_t *)irp->data + irp->size - irp->nPendingBytes);
        
        if(irp->nPendingBytes == 0U)  
        {
            /* This applies when we need to send a ZLP */
            size = 0;
        }
        else
        {
            /* In case this is a multi-transaction transfer, then we start with
             * endpoint size of data. */
            size = (irp->nPendingBytes > endpointObj->maxPacketSize) ? endpointObj->maxPacketSize: (uint16_t)irp->nPendingBytes;
        }

        /* Update the pending bytes only if the data direction is from device to
         * host. The pending bytes for the other direction is updated in the ISR
         * */

        irp->nPendingBytes -= size;
    }
    else
    {
        /* Data is moving from host to device */
        currentBDTEntry->byte[0] = 0x0;

        /* Adjust the buffer address for the number of bytes received so far */
        currentBDTEntry->word[1] = (uint32_t) ((uint8_t *)irp->data + irp->nPendingBytes);
        size = (uint16_t)((irp->size - irp->nPendingBytes > endpointObj->maxPacketSize) ? endpointObj->maxPacketSize : (irp->size - irp->nPendingBytes));

    }

    /* We set up the data toggle. This will be active only if DTS is active.
     * Clear the DATA0/1 and then set it according to the next data toggle to be
     * used.*/

    currentBDTEntry->byte[0] &= 0xBFU;
    currentBDTEntry->byte[0] |= ((uint8_t)endpointObj->nextDataToggle << 6);
    
    /* Set the size */
    currentBDTEntry->shortWord[1] = size;
    
    /* Set the UOWN bit */
    currentBDTEntry->byte[0] |= 0x80U;
    DataRead = (uint32_t)endpointObj->nextPingPong ^ 0x1U;
    endpointObj->nextPingPong   = (USB_BUFFER_PING_PONG)DataRead;
    DataRead = (uint32_t)endpointObj->nextDataToggle ^ 0x1U;
    endpointObj->nextDataToggle = (USB_BUFFER_DATA01)DataRead;
}

// *****************************************************************************
/* Function:
    USB_ERROR DRV_USBFS_DEVICE_IRPSubmit
    (
        DRV_HANDLE client,
        USB_ENDPOINT endpointAndDirection,
        USB_DEVICE_IRP * irp
    )

  Summary:
    This function submits an I/O Request Packet (IRP) for processing to the
    Hi-Speed USB Driver.
    
  Description:
    This function submits an I/O Request Packet (IRP) for processing to the USB
    Driver. The IRP allows a client to send and receive data from the USB Host.
    The data will be sent or received through the specified endpoint. The direction
    of the data transfer is indicated by the direction flag in the
    endpointAndDirection parameter. Submitting an IRP arms the endpoint to
    either send data to or receive data from the Host.  If an IRP is already
    being processed on the endpoint, the subsequent IRP submit operation
    will be queued. The contents of the IRP (including the application buffers)
    should not be changed until the IRP has been processed.
    
    Particular attention should be paid to the size parameter of IRP. The
    following should be noted:
    
      * The size parameter while sending data to the Host can be less than,
        greater than, equal to, or be an exact multiple of the maximum packet size
        for the endpoint. The maximum packet size for the endpoint determines
        the number of transactions required to process the IRP.
      * If the size parameter, while sending data to the Host is less than the
        maximum packet size, the transfer will complete in one transaction.
      * If the size parameter, while sending data to the Host is greater
        than the maximum packet size, the IRP will be processed in multiple
        transactions.
      * If the size parameter, while sending data to the Host is equal to or
        an exact multiple of the maximum packet size, the client can optionally
        ask the driver to send a Zero Length Packet(ZLP) by specifying the
        USB_DEVICE_IRP_FLAG_DATA_COMPLETE flag as the flag parameter.
      * The size parameter, while receiving data from the Host must be an
        exact multiple of the maximum packet size of the endpoint. If this is
        not the case, the driver will return a USB_ERROR_IRP_SIZE_INVALID
        result. If while processing the IRP, the driver receives less than
        maximum packet size or a ZLP from the Host, the driver considers the
        IRP as processed. The size parameter at this point contains the actual
        amount of data received from the Host. The IRP status is returned as
        USB_DEVICE_IRP_STATUS_COMPLETED_SHORT.
      * If a ZLP needs to be sent to Host, the IRP size should be specified
        as 0 and the flag parameter should be set as
        USB_DEVICE_IRP_FLAG_DATA_COMPLETE.
      * If the IRP size is an exact multiple of the endpoint size, the client
        can request the driver to not send a ZLP by setting the flag parameter
        to USB_DEVICE_IRP_FLAG_DATA_PENDING. This flag indicates that there is
        more data pending in this transfer.
      * Specifying a size less than the endpoint size along with the
        USB_DEVICE_IRP_FLAG_DATA_PENDING flag will cause the driver to return a
        USB_ERROR_IRP_SIZE_INVALID.
      * If the size is greater than but not a multiple of the endpoint size, and
        the flag is specified as USB_DEVICE_IRP_FLAG_DATA_PENDING, the driver
        will send multiple of endpoint size number of bytes. For example, if the
        IRP size is 130 and the endpoint size if 64, the number of bytes sent
        will 128.

  Remarks:
    See drv_usbfs.h for usage information.
*/

USB_ERROR DRV_USBFS_DEVICE_IRPSubmit
(
    DRV_HANDLE client,
    USB_ENDPOINT endpointAndDirection, 
    USB_DEVICE_IRP * irp
)
{
    uint8_t endpoint;
    bool interruptWasEnabled = false;
    int32_t direction;
    uint32_t remainders;
    DRV_USBFS_OBJ * hDriver;
    USB_DEVICE_IRP_LOCAL * irp_t = (USB_DEVICE_IRP_LOCAL *)irp;
    DRV_USBFS_BDT_ENTRY * pBDT;
    DRV_USBFS_DEVICE_ENDPOINT_OBJ * endpointObj;
    USB_ERROR returnValue = USB_ERROR_NONE;
    uint32_t IrpFlag;

    /* Check if the client handle is valid */
    if((client != DRV_HANDLE_INVALID) && (client != (DRV_HANDLE)(NULL)))
    {
        /* Make sure the IRP is available for use. */
        if(irp_t->status <= USB_DEVICE_IRP_STATUS_SETUP)
        {
            /* Check for a valid endpoint */
            endpoint = endpointAndDirection & 0xFU;
            direction = (int32_t)((endpointAndDirection & 0x80U) != 0U);

            if(endpoint < DRV_USBFS_ENDPOINTS_NUMBER)
            {
                /* Get the driver object, the module ID and the endpoint and
                 * direction specific BDT entry and the endpoint object. */

                hDriver = ((DRV_USBFS_OBJ *)client);
                pBDT = hDriver->pBDT + (endpoint * 4U) + (2U * (uint32_t)direction);
                endpointObj = hDriver->endpointTable + (2U * endpoint) + (uint32_t)direction;

                if(((uint32_t)endpointObj->endpointState & (uint32_t)DRV_USBFS_DEVICE_ENDPOINT_STATE_ENABLED) != 0U)
                {
                    /* Check the size of the IRP. If the endpoint receives data
                     * from the host, then IRP size must be multiple of
                     * maxPacketSize. If the send ZLP flag is set, then size
                     * must be multiple of endpoint size. */

                    remainders = irp_t->size % endpointObj->maxPacketSize;

                    if(remainders == 0U)
                    {
                        /* The IRP size is either 0 or a exact multiple of
                         * maxPacketSize */

                        if((int32_t)USB_DATA_DIRECTION_DEVICE_TO_HOST == direction)
                        {
                            if(((irp_t->flags & USB_DEVICE_IRP_FLAG_DATA_COMPLETE) == USB_DEVICE_IRP_FLAG_DATA_COMPLETE) && (irp_t->size != 0U))
                            {
                                /* This means a ZLP should be sent after the
                                 * data is sent. We will OR this flag as this
                                 * flag is temporary and must co-exist by the
                                 * driver client defined flag. */
                                IrpFlag = (uint32_t)irp_t->flags | (uint32_t)USB_DEVICE_IRP_FLAG_SEND_ZLP;
                                irp_t->flags = (USB_DEVICE_IRP_FLAG)IrpFlag;
                            }
                        }
                    }
                    else
                    {
                        /* Not exact multiple of maxPacketSize */
                        if((int32_t)USB_DATA_DIRECTION_HOST_TO_DEVICE == direction)
                        {
                            /* For receive IRP it needs to exact multiple of
                             * maxPacketSize.  Hence this is an error condition. */
                            returnValue = USB_ERROR_PARAMETER_INVALID;
                        }
                    }

                    if(returnValue == USB_ERROR_NONE)
                    {
                        /* So far no error. We can continue. Now we check if the
                         * interrupt context is active. If so the we dont need
                         * to get a mutex or disable interrupts. If this were
                         * being done in non interrupt context, then we would
                         * disable the interrupt. In which case we would get the
                         * mutex and then disable the interrupt. The mutex here
                         * is protecting the interrupt. */

                        if(!(hDriver->inInterruptContext))
                        {
                            if(OSAL_MUTEX_Lock(&hDriver->mutexID, OSAL_WAIT_FOREVER) == (OSAL_RESULT) OSAL_RESULT_TRUE)
                            {
                                /* Disable the interrupt as we will update the
                                 * endpoint IRP queue. We do not want a USB
                                 * interrupt to update this queue while we are
                                 * submitting an IRP. */

                                interruptWasEnabled = M_DRV_USBFS_InterruptSourceDisable(hDriver->interruptSource);
                            }
                            else
                            {
                                /* There was an error obtaining the mutex */
                                returnValue = USB_ERROR_OSAL_FUNCTION;
                            }
                        }

                        if(returnValue == USB_ERROR_NONE)
                        {
                            irp_t->next = NULL;

                            /* If the data is moving from device to host then
                             * pending bytes is data remaining to be sent to the
                             * host. If the data is moving from host to device,
                             * nPendingBytes tracks the amount of data received
                             * so far */

                            if((int32_t)USB_DATA_DIRECTION_DEVICE_TO_HOST == direction)
                            {
                                irp_t->nPendingBytes = irp_t->size;
                            }
                            else
                            {
                                irp_t->nPendingBytes = 0;
                            }

                            /* Mark the IRP status as pending */
                            irp_t->status = USB_DEVICE_IRP_STATUS_PENDING;

                            /* Get the last object in the endpoint object IRP Queue */
                            if(endpointObj->irpQueue == NULL)
                            {
                                /* Queue is empty */
                                endpointObj->irpQueue = irp_t;
                                irp_t->previous = NULL;

                                /* Because this is the first IRP in the queue
                                 * then we we must arm the endpoint entry in the
                                 * BDT. */

                                irp_t->status = USB_DEVICE_IRP_STATUS_IN_PROGRESS;
                                F_DRV_USBFS_DEVICE_EndpointBDTEntryArm(pBDT,endpointObj, irp_t, direction);
                            }
                            else
                            {
                                /* This means we should surf the linked list to
                                 * get to the last entry .  */

                                USB_DEVICE_IRP_LOCAL * iterator;
                                iterator = endpointObj->irpQueue;

                                while(iterator->next != NULL)
                                {
                                    iterator = iterator->next;
                                }

                                iterator->next = irp_t;
                                irp_t->previous = iterator;
                                irp_t->status = USB_DEVICE_IRP_STATUS_PENDING;
                            }

                            if(!(hDriver->inInterruptContext))
                            {
                                if(interruptWasEnabled)
                                {
                                    /* Enable the interrupt only if it was enabled */
                                    M_DRV_USBFS_InterruptSourceEnable(hDriver->interruptSource);
                                }

                                /* Unlock the mutex */
                                (void) OSAL_MUTEX_Unlock(&hDriver->mutexID);
                            }
                        }
                    }
                }
                else
                {
                    /* This means the endpoint is disabled */        
                    returnValue = USB_ERROR_ENDPOINT_NOT_CONFIGURED;        
                }
            }
            else
            {
                SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSBFS Driver: Endpoint is not provisioned for");
                returnValue = USB_ERROR_DEVICE_ENDPOINT_INVALID;
            }
        }
        else
        {
            /* This means that the IRP is in use */
            SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSBFS Driver: Device IRP is already in use");
            returnValue = USB_ERROR_DEVICE_IRP_IN_USE;
        }
    }
    else
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSBFS Driver: Invalid handle");
        returnValue =  USB_ERROR_PARAMETER_INVALID;
    }

    return(returnValue);
}

// *****************************************************************************
/* Function:
    void F_DRV_USBFS_DEVICE_IRPQueueFlush
    (
        DRV_USBFS_DEVICE_ENDPOINT_OBJ * endpointObject
        USB_DEVICE_IRP_STATUS status
    )

  Summary:
    This function flushes all the IRPs in the queue.

  Description:
    This function flushes all the IRPs in the queue. Function scans for all the
    IRPs on the endpoint queue and cancels them all. status indicate the abort
    status to be returned when the IRP callback is invoked.

  Remarks:
    This is a local function and should not be called directly by the
    application.
*/

void F_DRV_USBFS_DEVICE_IRPQueueFlush
(
    DRV_USBFS_DEVICE_ENDPOINT_OBJ * endpointObject,
    USB_DEVICE_IRP_STATUS status
)
{
    USB_DEVICE_IRP_LOCAL * iterator = NULL;
    
    if(endpointObject != NULL)
    {
        /* Check if any IRPs are assigned on this endpoint and abort them */

        if(endpointObject->irpQueue != NULL)
        {
            /* Scan for all the IRPs on this endpoint Cancel the IRP and
             * deallocate driver IRP objects */

            iterator = endpointObject->irpQueue;
            while(iterator != NULL)
            {
                iterator->status = status;
                if(iterator->callback != NULL)
                {
                    iterator->callback((USB_DEVICE_IRP *)iterator);
                }
                iterator = iterator->next;
            }
        }

        /* Set the head pointer to NULL */
        endpointObject->irpQueue = NULL;
    }
}

// *****************************************************************************
/* Function:
    USB_ERROR DRV_USBFS_DEVICE_IRPCancel
    (
        DRV_HANDLE client, 
        USB_DEVICE_IRP * irp
    )

  Summary:
    Dynamic implementation of DRV_USBFS_DEVICE_IRPCancel client interface
    function.

  Description:
    This is the dynamic implementation of DRV_USBFS_DEVICE_IRPCancel client
    interface function for USB device.  Function checks the validity of the
    input arguments and on success cancels  the specific IRP.  An IRP that was
    in the queue but that has been processed yet will be cancelled successfully
    and the IRP callback function will be called from this function with
    USB_DEVICE_IRP_STATUS_ABORTED status. The application can release the data
    buffer memory used by the IRP when this callback occurs.  If the IRP was in
    progress (a transaction in on the bus) when the cancel function was called,
    the IRP will be cancelled only when an ongoing or the next transaction has
    completed. The IRP callback function will then be called in an interrupt
    context. The application should not release the related data buffer unless
    the IRP callback has occurred.

  Remarks:
    See drv_usbfs.h for usage information.
*/

USB_ERROR DRV_USBFS_DEVICE_IRPCancel
(
    DRV_HANDLE client, 
    USB_DEVICE_IRP * irp
)
{
    USB_ERROR returnValue = USB_ERROR_NONE;
    DRV_USBFS_OBJ * hDriver = NULL;
    USB_DEVICE_IRP_LOCAL * irpToCancel = (USB_DEVICE_IRP_LOCAL *)irp;
    bool interruptWasEnabled = false;

    if((client != DRV_HANDLE_INVALID) && (client != (DRV_HANDLE)(NULL)))
    {
        if(irpToCancel != NULL)
        {
            /* Check the state of the IRP */

            hDriver = ((DRV_USBFS_OBJ *)client);

            if(irpToCancel->status > USB_DEVICE_IRP_STATUS_SETUP)
            {
                if(!(hDriver->inInterruptContext))
                {
                    if(OSAL_MUTEX_Lock(&hDriver->mutexID, OSAL_WAIT_FOREVER) == (OSAL_RESULT) OSAL_RESULT_TRUE)
                    {
                        /* Disable the interrupt */
                        interruptWasEnabled = M_DRV_USBFS_InterruptSourceDisable(hDriver->interruptSource);
                    }
                    else
                    {
                        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSBFS Driver: Mutex lock failed");
                        returnValue = USB_ERROR_OSAL_FUNCTION;
                    }
                }

                if(returnValue == USB_ERROR_NONE)
                {
                    /* The code will come here both when the IRP is NOT the 1st
                     * in queue as well as when it is at the HEAD. We will change
                     * the IRP status for either scenario but will give the callback
                     * only if it is NOT at the HEAD of the queue.
                     * 
                     * What it means for HEAD IRP case is it will be caught in USB
                     * ISR and will be further processed in ISR. This is done to
                     * make sure that the user cannot release the IRP buffer before
                     * ABORT callback*/

                    /* Mark the IRP status as aborted */
                    irpToCancel->status = USB_DEVICE_IRP_STATUS_ABORTED;

                    /* No data for this IRP was sent or received */
                    irpToCancel->size = 0;

                    if(irpToCancel->previous != NULL)
                    {
                        /* This means this is not the HEAD IRP in the IRP queue.
                           Can be removed from the endpoint object queue safely.*/
                        irpToCancel->previous->next = irpToCancel->next;

                        if(irpToCancel->next != NULL)
                        {
                            /* If this is not the last IRP in the queue then update
                               the previous link connection for the next IRP */
                            irpToCancel->next->previous = irpToCancel->previous;
                        }

                        irpToCancel->previous = NULL;
                        irpToCancel->next = NULL;

                        if(irpToCancel->callback != NULL)
                        {
                            irpToCancel->callback((USB_DEVICE_IRP *)irpToCancel);
                        }
                    }

                    /* Restore the interrupt state if this was changed */
                    if(!(hDriver->inInterruptContext))  
                    {
                        if(interruptWasEnabled)
                        {
                            M_DRV_USBFS_InterruptSourceEnable(hDriver->interruptSource);
                        }

                        (void) OSAL_MUTEX_Unlock(&hDriver->mutexID); 
                    }
                }
            }
            else
            {
                /* This IRP has either completed or has been aborted.*/
                SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSBFS Driver: IRP is already completed");
                returnValue = USB_ERROR_PARAMETER_INVALID;
            }
        }
        else
        {
            SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSBFS Driver: IRP is invalid");
            returnValue = USB_ERROR_PARAMETER_INVALID;
        }
    }
    else
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSBFS Driver: Driver Handle is invalid");
        returnValue = USB_ERROR_PARAMETER_INVALID;
    }

    return returnValue;
}

// *****************************************************************************
/* Function:
    USB_ERROR DRV_USBFS_DEVICE_IRPCancelAll
    (
        DRV_HANDLE client,
        USB_ENDPOINT endpointAndDirection
    )

  Summary:
    Dynamic implementation of DRV_USBFS_DEVICE_IRPCancelAll client interface
    function.

  Description:
    This is the dynamic implementation of DRV_USBFS_DEVICE_IRPCancelAll client
    interface function for USB device.  Function checks the validity of the
    input arguments and on success cancels all the IRPs on the specific endpoint
    object queue.

  Remarks:
    See drv_usbfs.h for usage information.
*/

USB_ERROR DRV_USBFS_DEVICE_IRPCancelAll
(
    DRV_HANDLE client,
    USB_ENDPOINT endpointAndDirection
)
{
    uint8_t endpoint;
    bool interruptWasEnabled = false;
    int32_t direction;
    DRV_USBFS_OBJ * hDriver;
    DRV_USBFS_BDT_ENTRY * pBDT;
    DRV_USBFS_DEVICE_ENDPOINT_OBJ * endpointObject;
    USB_ERROR returnValue = USB_ERROR_NONE;
    uint32_t nextPingPong;

    endpoint = endpointAndDirection & 0xFU;
    direction = (int32_t)((endpointAndDirection & 0x80U) != 0U);

    if(endpoint < DRV_USBFS_ENDPOINTS_NUMBER)
    {
        /* Endpoint is in range. */

        if((client != DRV_HANDLE_INVALID) && (client != (DRV_HANDLE)(NULL)))
        {
            /* Driver handle is valid. */

            hDriver = ((DRV_USBFS_OBJ *)client);

            /* Get the endpoint object */
            endpointObject = hDriver->endpointTable + (2U * endpoint) + direction;

            /* Get the BDT entry for this endpoint */
            pBDT = hDriver->pBDT + (4U * endpoint) + (2U * (uint32_t)direction);

            if(!(hDriver->inInterruptContext))
            {
                if(OSAL_MUTEX_Lock(&hDriver->mutexID, OSAL_WAIT_FOREVER) == (OSAL_RESULT) OSAL_RESULT_TRUE)
                {
                    /* Disable the interrupt */
                    interruptWasEnabled = M_DRV_USBFS_InterruptSourceDisable(hDriver->interruptSource);
                }
                else
                {
                    SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSBFS Driver: Mutex lock failed");
                    returnValue = USB_ERROR_OSAL_FUNCTION;
                }
            }

            if(returnValue == USB_ERROR_NONE)
            {
                /* If there is a IRP in progress on the endpoint, and this
                 * endpoint is being cancelled, we must revert the nextPingPong
                 * indicator to what it what it before the transaction was
                 * scheduled on the endpoint */

                if((endpointObject->irpQueue != NULL) && (endpointObject->irpQueue->status == USB_DEVICE_IRP_STATUS_IN_PROGRESS))
                {
                    nextPingPong = (uint32_t)endpointObject->nextPingPong ^ 1U;
                    endpointObject->nextPingPong = (USB_BUFFER_PING_PONG)nextPingPong;
                }
                
                pBDT->byte[0] = 0x0;
                (pBDT + 1)->byte[0] = 0x0;

                /* Flush the endpoint */
                F_DRV_USBFS_DEVICE_IRPQueueFlush(endpointObject, USB_DEVICE_IRP_STATUS_ABORTED);

                if(!(hDriver->inInterruptContext))
                {
                    if(interruptWasEnabled)
                    {
                        M_DRV_USBFS_InterruptSourceEnable(hDriver->interruptSource);
                    }

                    (void) OSAL_MUTEX_Unlock(&hDriver->mutexID);
                }
            }
        }
        else
        {
            /* Driver Handle is not valid. */
            SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSBFS Driver: Driver Handle is invalid");
            returnValue = USB_ERROR_PARAMETER_INVALID;
        }
    }
    else
    {
        /* This is not a provisioned endpoint */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO,"\r\nUSBFS Driver: Unsupported endpoint");
        returnValue = USB_ERROR_DEVICE_ENDPOINT_INVALID;
    }

    return(returnValue);
}

// *****************************************************************************
/* Function:
    USB_ERROR DRV_USBFS_DEVICE_EndpointStall
    (
        DRV_HANDLE handle,
        USB_ENDPOINT endpointAndDirection
    )

  Summary:
    This function stalls an endpoint in the specified direction.
    
  Description:
    This function stalls an endpoint in the specified direction.

  Remarks:
    See drv_usbfs.h for usage information.
*/

USB_ERROR DRV_USBFS_DEVICE_EndpointStall
(
    DRV_HANDLE handle,
    USB_ENDPOINT endpointAndDirection
)
{
    int32_t direction;
    bool interruptWasEnabled = false;
    uint8_t endpoint;
    DRV_USBFS_OBJ * hDriver;
    DRV_USBFS_BDT_ENTRY * pBDT;
    DRV_USBFS_DEVICE_ENDPOINT_OBJ * endpointObject;
    USB_ERROR returnValue = USB_ERROR_NONE;
    uint32_t endPointState;

    endpoint = endpointAndDirection & 0xFU;
    direction = (int32_t)((endpointAndDirection & 0x80U) != 0U);

    if(endpoint < DRV_USBFS_ENDPOINTS_NUMBER)
    {
        if((handle != DRV_HANDLE_INVALID) && (handle != (DRV_HANDLE)(NULL)))
        {
            hDriver = ((DRV_USBFS_OBJ *)handle);

            if(!(hDriver->inInterruptContext))
            {
                if(OSAL_MUTEX_Lock(&hDriver->mutexID, OSAL_WAIT_FOREVER) == (OSAL_RESULT) OSAL_RESULT_TRUE)
                {
                    /* Disable the interrupt */
                    interruptWasEnabled = M_DRV_USBFS_InterruptSourceDisable(hDriver->interruptSource);
                }
                else
                {
                    /* There was an error in getting the mutex */
                    SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSBFS Driver: Mutex lock failed");
                    returnValue = USB_ERROR_OSAL_FUNCTION;
                }
            }

            if(returnValue == USB_ERROR_NONE)
            {
                /* At this time the function is thread safe and is interrupt
                 * safe. */

                if(endpoint == 0U)
                {
                    /* For zero endpoint we stall both directions */

                    endpointObject = hDriver->endpointTable;
                    pBDT = hDriver->pBDT + (uint32_t)(endpointObject->nextPingPong);

                    /* This is the RX direction for EP0. Get the BDT back, stall
                     * it, flush all IRPs and then set the endpoint state */

                    pBDT->byte[0] = 0x0;
                    pBDT->byte[0] |= (USBFS_UOWN|USBFS_STALL_SET);
                    F_DRV_USBFS_DEVICE_IRPQueueFlush(endpointObject, USB_DEVICE_IRP_STATUS_ABORTED_ENDPOINT_HALT);
                    endPointState = (uint32_t)endpointObject->endpointState | (uint32_t)DRV_USBFS_DEVICE_ENDPOINT_STATE_STALLED;
                    endpointObject->endpointState = (DRV_USBFS_DEVICE_ENDPOINT_STATE)endPointState;

                    /* Now do the same for the TX direction */

                    endpointObject = hDriver->endpointTable + 1;
                    pBDT = hDriver->pBDT + 2U + (uint32_t)(endpointObject->nextPingPong);

                    /* This is the TX direction for EP0. Get the BDT back, stall
                     * it, flush all IRPs and then set the endpoint state */

                    pBDT->byte[0] = 0x0;
                    pBDT->byte[0] |= (USBFS_UOWN|USBFS_STALL_SET);
                    F_DRV_USBFS_DEVICE_IRPQueueFlush(endpointObject, USB_DEVICE_IRP_STATUS_ABORTED_ENDPOINT_HALT );
                    endPointState = (uint32_t)endpointObject->endpointState | (uint32_t)DRV_USBFS_DEVICE_ENDPOINT_STATE_STALLED;
                    endpointObject->endpointState = (DRV_USBFS_DEVICE_ENDPOINT_STATE)endPointState;
                } 
                else
                {
                    /* For non zero endpoints we stall the specified direction.
                     * Get the endpoint object. */
                    endpointObject = hDriver->endpointTable + (2U * endpoint) + direction;

                    /* Get the BDT entry for this endpoint */
                    pBDT = hDriver->pBDT + (4U * endpoint) + (2 * direction) ;

                    /* Get the endpoint BDT back. Stall the entry.  Flush the
                     * endpoint and set the object state. */
                    pBDT->byte[0] = 0x0;
                    pBDT->byte[0] |= (USBFS_UOWN|USBFS_STALL_SET);

                    pBDT = hDriver->pBDT + (4U * endpoint) + (2 * direction) + 1;

                    /* Get the endpoint BDT back. Stall the entry.  Flush the
                     * endpoint and set the object state. */
                    pBDT->byte[0] = 0x0;
                    pBDT->byte[0] |= (USBFS_UOWN|USBFS_STALL_SET);

                    F_DRV_USBFS_DEVICE_IRPQueueFlush(endpointObject, USB_DEVICE_IRP_STATUS_ABORTED_ENDPOINT_HALT);
                    endPointState = (uint32_t)endpointObject->endpointState | (uint32_t)DRV_USBFS_DEVICE_ENDPOINT_STATE_STALLED;
                    endpointObject->endpointState = (DRV_USBFS_DEVICE_ENDPOINT_STATE)endPointState;
                }

                /* Restore the interrupt enable status if this was modified. */
                if(!(hDriver->inInterruptContext))
                {
                    if(interruptWasEnabled)
                    {
                        /* Enable the interrupt */
                        M_DRV_USBFS_InterruptSourceEnable(hDriver->interruptSource);
                    }

                    (void) OSAL_MUTEX_Unlock(&hDriver->mutexID);
                }
            }
        }
        else
        {
            SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSBFS Driver: Driver Handle is invalid");
            returnValue = USB_ERROR_PARAMETER_INVALID;
        }
    }
    else
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO,"\r\nUSBFS Driver: Unsupported endpoint");
        returnValue = USB_ERROR_DEVICE_ENDPOINT_INVALID;
    }

    return(returnValue);
}

// *****************************************************************************
/* Function:
    USB_ERROR DRV_USBFS_DEVICE_EndpointStallClear
    (
        DRV_HANDLE handle,
        USB_ENDPOINT endpointAndDirection
    )

  Summary:
    This function clears the stall on an endpoint in the specified direction.
    
  Description:
    This function clears the stall on an endpoint in the specified direction.

  Remarks:
    See drv_usbfs.h for usage information.
*/

USB_ERROR DRV_USBFS_DEVICE_EndpointStallClear
(
    DRV_HANDLE handle,
    USB_ENDPOINT endpointAndDirection
)
{
    int32_t direction;
    uint8_t endpoint;
    DRV_USBFS_OBJ * hDriver;
    DRV_USBFS_BDT_ENTRY * pBDT;
    DRV_USBFS_DEVICE_ENDPOINT_OBJ * endpointObject;
    bool interruptWasEnabled = false;
    USB_MODULE_ID usbID; 
    USB_ERROR returnValue = USB_ERROR_NONE;
    uint32_t endPointState;
    volatile usb_registers_t *usb =  (usb_registers_t*)NULL;

    endpoint = endpointAndDirection & 0xFU;
    direction = (int32_t)((endpointAndDirection & 0x80U) != 0U);

    if(endpoint < DRV_USBFS_ENDPOINTS_NUMBER)
    {
        if((handle != DRV_HANDLE_INVALID) && (handle != (DRV_HANDLE)(NULL)))
        {
            hDriver = ((DRV_USBFS_OBJ *)handle);
            usbID = hDriver->usbID;
            usb = (usb_registers_t * )((uintptr_t)(usbID));

            /* Get the endpoint object */
            endpointObject = hDriver->endpointTable + (2U* endpoint) + direction;

            /* If the function is not being called from an interrupt context,
             * then capture the mutex. */
            if(!(hDriver->inInterruptContext))
            {
                if(OSAL_MUTEX_Lock(&hDriver->mutexID, OSAL_WAIT_FOREVER) == (OSAL_RESULT) OSAL_RESULT_TRUE)
                {
                    /* Disable the interrupt */
                    interruptWasEnabled = M_DRV_USBFS_InterruptSourceDisable(hDriver->interruptSource);
                }
                else
                {
                    SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSBFS Driver: Mutex lock failed");
                    returnValue = USB_ERROR_OSAL_FUNCTION;
                }
            }

            if(returnValue == USB_ERROR_NONE)
            {
                if(endpoint == 0U)
                {
                    /* Get the BDT entry for this endpoint */
                    pBDT = hDriver->pBDT + (4U * endpoint) + (2 * direction) + (uint32_t)endpointObject->nextPingPong;

                    /* Clear the stall and data toggle on the endpoint */
                    pBDT->byte[0] = 0x0;
                }
                else
                {
                    /* Get the BDT entry for this endpoint */
                    pBDT = hDriver->pBDT + (4U * endpoint) + (2 * direction);

                    /* Clear the stall and data toggle on the endpoint */
                    pBDT->byte[0] = 0x0;

                    /* Get the BDT entry for this endpoint */
                    pBDT = hDriver->pBDT + (4U * endpoint) + (2 * direction) + 1;

                    /* Clear the stall and data toggle on the endpoint */
                    pBDT->byte[0] = 0x0;

                    /* Clear Endpoint Stall status bit */
                    usb->USB_UEP[endpoint].USB_UEPx &= ~(USB_UEPx_EPSTALL_Msk);
                }

                if((endpoint == 0U) && (direction == (int32_t)USB_DATA_DIRECTION_DEVICE_TO_HOST))
                {
                    /* All endpoint 0 transmit must start with data toggle DATA1 */
                    endpointObject->nextDataToggle = USB_BUFFER_DATA1;
                }
                else
                {
                    endpointObject->nextDataToggle = USB_BUFFER_DATA0;
                }

                endPointState = (uint32_t)endpointObject->endpointState & (~(uint32_t)DRV_USBFS_DEVICE_ENDPOINT_STATE_STALLED);
                endpointObject->endpointState = (DRV_USBFS_DEVICE_ENDPOINT_STATE)endPointState;

                if(endpoint != 0U)
                {

                    /* Clear up all the IRPs on this endpoint */
                    F_DRV_USBFS_DEVICE_IRPQueueFlush(endpointObject, USB_DEVICE_IRP_STATUS_TERMINATED_BY_HOST);
                }

                /* Enable the interrupt if it was previously enabled */
                if(!(hDriver->inInterruptContext))
                {
                    if(interruptWasEnabled)
                    {
                        /* Enable the interrupt */
                        M_DRV_USBFS_InterruptSourceEnable(hDriver->interruptSource);
                    }

                    /* Release the mutex */
                    (void) OSAL_MUTEX_Unlock(&hDriver->mutexID);
                }
            }
        }
        else
        {
            SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSBFS Driver: Driver Handle is invalid");
            returnValue = USB_ERROR_PARAMETER_INVALID;
        }
    }
    else
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO,"\r\nUSBFS Driver: Unsupported endpoint");
        returnValue = USB_ERROR_DEVICE_ENDPOINT_INVALID;
    }

    return(returnValue);
}


// *****************************************************************************
/* Function:
    uint16_t DRV_USBFS_DEVICE_SOFNumberGet(DRV_HANDLE handle)

  Summary:
    This function will return the USB SOF packet number.

  Description:
    This function will return the USB SOF packet number..

  Remarks:
    See drv_usbfs.h for usage information.
*/

uint16_t DRV_USBFS_DEVICE_SOFNumberGet(DRV_HANDLE handle)
{
    uint16_t sofNumber = 0;
    USB_MODULE_ID usbID;
    volatile usb_registers_t *usb =  (usb_registers_t*)NULL;
    /* Check if the handle is valid */
    if((DRV_HANDLE_INVALID != handle) && (handle != (DRV_HANDLE)(NULL)))
    {
        /* Get the Frame count */
        usbID = ((DRV_USBFS_OBJ *)handle)->usbID;
        usb = (usb_registers_t * )((uintptr_t)(usbID));
        sofNumber = (uint16_t)((usb->USB_UFRML) | (usb->USB_UFRMH << 8));
    }
    else
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSBFS Driver: Driver Handle is invalid");
    }

    return sofNumber;
}

// *****************************************************************************
/* Function:
      void F_DRV_USBFS_DEVICE_Tasks_ISR(DRV_USBFS_OBJ * hDriver)

  Summary:
    Dynamic implementation of F_DRV_USBFS_DEVICE_Tasks_ISR ISR handler function.

  Description:
    This is the dynamic implementation of F_DRV_USBFS_DEVICE_Tasks_ISR ISR handler
    function for USB device.  Function will get called automatically due to USB
    interrupts in interrupt mode.  In polling mode this function will be
    routinely called from USB driver DRV_USBFS_Tasks() function.  This function
    performs necessary action based on the interrupt and clears the interrupt
    after that. The USB device layer callback is called with the interrupt event
    details, if callback function is registered.

  Remarks:
    This is a local function and should not be called directly by the
    application.
*/

void F_DRV_USBFS_DEVICE_Tasks_ISR(DRV_USBFS_OBJ * hDriver)
{
    bool queueWasEmpty = false;
    bool processNextIRP;
    uint8_t lastEndpoint = 0;
    int32_t iEntry;
    uint32_t errorType;
    USB_MODULE_ID usbID;
    DRV_USBFS_EVENT eventType = DRV_USBFS_EVENT_ERROR;
    USB_DEVICE_IRP_LOCAL * irp;
    DRV_USBFS_BDT_ENTRY * currentBDTEntry;
    DRV_USBFS_BDT_ENTRY * lastBDTEntry;
    DRV_USBFS_BDT_ENTRY * ep0TransmitBDTEntry;
    USB_PING_PONG_STATE lastPingPong = USB_PING_PONG_EVEN;
    USB_PING_PONG_STATE nextPingPong = USB_PING_PONG_EVEN;
    USB_BUFFER_DIRECTION lastDirection = USB_BUFFER_RX;
    DRV_USBFS_DEVICE_ENDPOINT_OBJ * lastEndpointObj;
    uint32_t  mask;
    volatile usb_registers_t *usb =  (usb_registers_t*)NULL;
    uint32_t readTemp;
    bool readData;

    usbID = hDriver->usbID;
    usb =  (usb_registers_t * )((uintptr_t)(usbID));

    /* Check is there was a change in VBUS voltage level */
    readData = (usb->USB_UOTGIR & USB_UOTGIR_SESVDIF_Msk) != 0U;
    if (((usb -> USB_UOTGIE & USB_UOTGIE_SESS_VLD_Msk) != 0U) && readData)
    {
        /* This means there was a change in the VBUS voltage detected level. We
         * can find out if the VBUS is valid */

        if ((usb->USB_UOTGSTAT & USB_UOTGSTAT_SESVD_Msk) != 0U)
        {
            /* This means we detected a valid VBUS voltage. */
            hDriver->vbusIsValid = true;
            eventType = DRV_USBFS_EVENT_DEVICE_SESSION_VALID; 
        }
        else
        {
            /* This means the VBUS is not valid anymore */
            hDriver->vbusIsValid = false;
            eventType = DRV_USBFS_EVENT_DEVICE_SESSION_INVALID;
        }

        if(hDriver->pEventCallBack != NULL)
        {
            /* Send this event to the client */
            hDriver->pEventCallBack(hDriver->hClientArg, eventType,  (void *)NULL);
        }

        /* Clear the interrupt */
        usb->USB_UOTGIR = USB_UOTGIR_SESVDIF_Msk;
    }

    /* If there is no VBUS or if the device pull up is not enabled yet, then
     * clear all the interrupt flags except VBUS session interrupt. Clear all
     * error, OTG and general interrupts. We cannot clear the session valid
     * interrupt because this may have change already by the time we have
     * reached here. After clearing the interrup we exit as we have nothing more
     * to be done in the ISR. */

    if((!(hDriver->vbusIsValid)) || (!(hDriver->isAttached)))
    {
        usb->USB_UEIR = USB_UEIR_Msk;
        usb->USB_UIR = USB_UIR_Msk;
        usb->USB_UOTGIR = USB_UOTGIR_Msk & (~USB_UOTGIR_SESVDIF_Msk);
    }
    else
    {
        /* Check if there was activity on the bus. This interrupt is enabled before
         * entering suspend mode. This interrupt must be enabled to wake up the
         * microcontroller from sleep due to USB activity. The driver wraps this
         * interrupt as resume detection. */
        readData = (usb->USB_UOTGIR & USB_UOTGIR_ACTVIF_Msk) != 0U;
        if (((usb->USB_UOTGIE & USB_UOTGIR_ACTVIF_Msk) != 0U) && readData)
        {
            /* Clear the interrupt */
            usb->USB_UOTGIR = USB_UOTGIR_ACTVIF_Msk;

            /* Disable the interrupt */
            usb->USB_UOTGIE &= (~USB_UOTGIR_ACTVIF_Msk);
            /* Device is not suspended any more */
            hDriver->isSuspended = false;

            if(hDriver->pEventCallBack != NULL)
            {
                /* Send this event to the client */
                hDriver->pEventCallBack(hDriver->hClientArg, DRV_USBFS_EVENT_RESUME_DETECT,  (void *)NULL);
            }
        }

        /* The RESUME event can only occur after the device has been suspended. */
        readData = (usb->USB_UIR & USB_UIR_RESUMEIF_Msk) != 0U;
        if (((usb->USB_UIE & USB_UIE_RESUMEIE_Msk) != 0U) && readData)
        {
            /* Device is not suspended any more */
            hDriver->isSuspended = false;

            if(hDriver->pEventCallBack != NULL)
            {
                /* Send this event to the client */
                hDriver->pEventCallBack(hDriver->hClientArg, DRV_USBFS_EVENT_RESUME_DETECT,  (void *)NULL);
            }

            /* Clear the interrupt flag and disable it. This event will be enabled
             * the next time we enter suspend mode. */
            usb->USB_UIR  = USB_UIR_RESUMEIF_Msk;
            usb->USB_UIE &= (~USB_UIE_RESUMEIE_Msk);
        }

        /* Check if RESET signalling was received */
        readData = (usb->USB_UIR  & USB_UIR_URSTIF_DETACHIF_Msk) != 0U;
        if (((usb->USB_UIE & USB_UIE_URSTIE_DETACHIE_Msk) != 0U) && readData)
        {
            /* Device is not suspended any more */
            hDriver->isSuspended = false;

            /* The host may have suspended the device before reset.
             * Clear the suspend flag and the resume flag */
            usb->USB_UIR  = USB_UIR_RESUMEIF_Msk;
            usb->USB_UIR  = USB_UIR_IDLEIF_Msk;

            /* Make sure that all BDs are returned
             * back to the application */

            for(iEntry = 0; iEntry < (int32_t)DRV_USBFS_ENDPOINTS_NUMBER; iEntry++)
            {
                currentBDTEntry = hDriver->pBDT + (4 * iEntry);
                (currentBDTEntry + 0)->word[0] = 0x0;
                (currentBDTEntry + 1)->word[0] = 0x0;
                (currentBDTEntry + 2)->word[0] = 0x0;
                (currentBDTEntry + 3)->word[0] = 0x0;
            }

            /* Reset all ping pong buffers to even */
            usb->USB_UCON |= USB_UCON_PPBRST_Msk;
            usb->USB_UCON &= ~USB_UCON_PPBRST_Msk;
            /* Because we have reset the ping pong, the rx and tx
             * ping pong indicators need to set to set to all even */
            hDriver->rxEndpointsNextPingPong = 0 ;
            hDriver->txEndpointsNextPingPong = 0 ;

            /* Reset address to default value (0) */
            usb->USB_UADDR = (0U & USB_UADDR_DEVADDR_Msk);

            if(hDriver->pEventCallBack != NULL)
            {
                /* Send this event to the client */
                hDriver->pEventCallBack(hDriver->hClientArg, DRV_USBFS_EVENT_RESET_DETECT,  (void *)NULL);
            }

            /* Clear the interrupt flag */
            usb->USB_UIR = USB_UIR_URSTIF_DETACHIF_Msk;
        }

        /* Check if the host has suspended the bus. */
        readData = (usb->USB_UIR & USB_UIR_IDLEIF_Msk) != 0U;
        if (((usb->USB_UIE & USB_UIE_IDLEIE_Msk ) != 0U) && readData)
        {
            /* Set the suspended flag */
            hDriver->isSuspended = true;
            /* The bus is IDLE and is suspended. Send the event to the client. */
            if(hDriver->pEventCallBack != NULL)
            {
                /* Send this event to the client */
                hDriver->pEventCallBack(hDriver->hClientArg, DRV_USBFS_EVENT_IDLE_DETECT,  (void *)NULL);
            }

            /* Clear the interrupt flag and disable it. This event will be enabled
             * the next time we enter suspend mode. */
            usb->USB_UIR = USB_UIR_IDLEIF_Msk;

            /* Enable the actvity interrupt */
            usb->USB_UOTGIE |= USB_UOTGIR_ACTVIF_Msk;
            
            /* Clear the resume flag */
            usb->USB_UIR = USB_UIR_RESUMEIF_Msk;
            /* Enable the resume interrupt */
            usb->USB_UIE |= USB_UIE_RESUMEIE_Msk;

            
        }

        /* Check if an SOF was received */
        readData = (usb->USB_UIR & USB_UIR_SOFIF_Msk) != 0U;
        if (((usb->USB_UIE & USB_UIE_SOFIE_Msk) != 0U ) && readData)
        {
            /* SOF received by Device or SOF threshold reached by Host no event data
             * to send. */

            if(hDriver->pEventCallBack != NULL)
            {
                /* Send this event to the client */
                hDriver->pEventCallBack(hDriver->hClientArg, DRV_USBFS_EVENT_SOF_DETECT,  (void *)NULL);
            }

            /* Clear the interrupt flag */
            usb->USB_UIR = USB_UIR_SOFIF_Msk;
        }

        /* The following event occurs when and endpoint has sent stall to the host.
         * If the stall was sent from endpoint 0, the device layer would know about
         * it. If it was sent from an non-zero endpoint, the host would send a clear
         * feature control request. This event therefore does not send any event
         * data to the client. */
        readData = (usb->USB_UIR & USB_UIR_STALLIF_Msk) != 0U;
        if (((usb->USB_UIE & USB_UIE_STALLIE_Msk) != 0U ) && readData)
        {
            uint32_t iEndpoint;
            for ( iEndpoint = 0; iEndpoint < DRV_USBFS_ENDPOINTS_NUMBER; iEndpoint++ )
            {
                if ((usb->USB_UEP[iEndpoint].USB_UEPx & USB_UEPx_EPSTALL_Msk) != 0U)
                {
                    usb->USB_UEP[iEndpoint].USB_UEPx &= ~(USB_UEPx_EPSTALL_Msk);
                }
            }

            if(hDriver->pEventCallBack != NULL)
            {
                /* Send this event to the client */
                hDriver->pEventCallBack(hDriver->hClientArg, DRV_USBFS_EVENT_STALL,  (void *)NULL);
            }

            /* Clear the interrupt flag */
            usb->USB_UIR = USB_UIR_STALLIF_Msk;
        }

        /* Check if an error has occurred */
        readData = (usb->USB_UIR & USB_UIR_UERRIF_Msk) != 0U;
        if (((usb->USB_UIE & USB_UIE_UERRIE_Msk) != 0U ) && readData)
        {
            /* Get the error type to send to the client */
            readTemp =  usb->USB_UEIR;
            errorType = (uint32_t)readTemp;

            /* Clear the base error flags and the interrupt flag */
            usb->USB_UEIR = errorType;
            usb->USB_UIR  = USB_UIR_UERRIF_Msk;

            if(hDriver->pEventCallBack != NULL)
            {
                /* Send this event to the client */
                hDriver->pEventCallBack(hDriver->hClientArg, DRV_USBFS_EVENT_ERROR,  (void *)&errorType);
            }
        }

        /* This while loop will empty the token received FIFO. This while will not
         * run forever because there are only that many tokens that can be received
         * in a period of 1 millisecond. */

        while ((usb->USB_UIR & USB_UIR_TRNIF_Msk) != 0U)
        {
            /* Get the details of the last transaction */
            lastDirection = (USB_BUFFER_DIRECTION)(((usb->USB_USTAT & USB_USTAT_DIR_Msk) != 0U) ? 1 : 0);
            lastPingPong = (USB_PING_PONG_STATE )(((usb->USB_USTAT & USB_USTAT_PPBI_Msk) != 0U) ? 1 : 0);
            lastEndpoint = (uint8_t)((usb->USB_USTAT & USB_USTAT_ENDPT_Msk) >> USB_USTAT_ENDPT_Pos);

            /* Now that the details of the last transaction have been obtained, we
             * need to clear the TOKEN interrupt immediately. This will give enough
             * time for the TRNIF flag to clear. This way we avoid situations where
             * the flag was cleared but the code still enters TRNIF was still set.
             * */

            usb->USB_UIR = USB_UIR_TRNIF_Msk;

            /* Set up the next ping pong buffer descriptor. This will tell the IRP
             * processing code which buffer descriptors to use. When the host does a
             * set configuration 0, the Device Layer will disable and enable all
             * endpoints. A set configuration 0 is not the same a bus reset in which
             * case the ping pong indicators would have been reset. So the endpoint
             * enable function will ready the soft ping pong trackers to find out
             * which ping pong to use.  */

            if ( lastPingPong == USB_PING_PONG_EVEN )
            {
                nextPingPong = USB_PING_PONG_ODD;
            }
            else
            {
                nextPingPong = USB_PING_PONG_EVEN;
            }

            mask = 1UL << lastEndpoint ;

            /* Update the next ping pong indicator for this endpoint. Each bit in
             * the rxEndpointsNextPingPong and txEndpointsNextPingPong track the
             * ping pong value for the endpoint. */

            if( lastDirection == USB_BUFFER_RX ) 
            {
                /* This is for the RX direction */
                if (nextPingPong == USB_PING_PONG_ODD )
                {
                    hDriver->rxEndpointsNextPingPong =   hDriver->rxEndpointsNextPingPong | mask ;
                }
                else
                {
                    hDriver->rxEndpointsNextPingPong =  ( hDriver->rxEndpointsNextPingPong & (~mask ) ) ;
                }
            }
            else    
            {
                /* This is for the TX direction */
                if (nextPingPong == USB_PING_PONG_ODD )
                {
                    hDriver->txEndpointsNextPingPong =   hDriver->txEndpointsNextPingPong | mask ;
                }
                else
                {
                    hDriver->txEndpointsNextPingPong =  ( hDriver->txEndpointsNextPingPong & (~mask ) ) ;
                }
            }

            /* Get the associated endpoint object */
            lastEndpointObj = hDriver->endpointTable + (lastEndpoint * 2U) + (uint32_t)lastDirection;

            /* Get the first IRP in the queue */
            irp = lastEndpointObj->irpQueue; 

            /* Get the BDT entry for this direction. currentBDTEntry points to the
             * ping pong set. lastBDTEntry points to the specific ping or pong
             * entry. */

            currentBDTEntry = hDriver->pBDT + (4U * lastEndpoint) + (2U * (uint32_t)lastDirection); 
            lastBDTEntry = currentBDTEntry + (uint32_t)lastPingPong;

            if(irp != NULL)
            {
                /* This flag lets us know if the current IRP is done and that the next
                 * IRP should be processed */

                processNextIRP = false;
                switch(lastBDTEntry->byte[0] & 0x3CU)
                {
                    case 0x34 :

                        /* This means a setup packet has been received */

                        irp->status = USB_DEVICE_IRP_STATUS_SETUP;
                        irp->size   = lastBDTEntry->word[1];

                        /* currentBDTEntry at this point will point to enpoint 0 BDT
                         * entry. We should get the transmit BDT entries and clear
                         * the stall conditions */

                        ep0TransmitBDTEntry = currentBDTEntry + 2;

                        /* ep0TranmitBDTEntry at this point should point to the EP0
                         * transmit even BDT entry. Clearing byte 0 will clear clear
                         * the stall */
                        ep0TransmitBDTEntry->byte[0] = 0;

                        /* Now get the transmit BDT odd entry and do the same */

                        ep0TransmitBDTEntry ++;
                        ep0TransmitBDTEntry->byte[0] = 0;

                        /* Reset the data toggle on the TX endpoint to DATA1 because
                         * we received a setup packet. Any packet that the device
                         * transmit on this endpoint must start with DATA1 toggle.
                         * */

                        (lastEndpointObj + (uint32_t)USB_DATA_DIRECTION_DEVICE_TO_HOST)->nextDataToggle = USB_BUFFER_DATA1;

                        usb->USB_UCON &= ~(USB_UCON_PKTDIS_TOKBUSY_Msk);
                        /* We should get the next IRP in the queue . */

                        processNextIRP = true;
                        break;

                    case 0x4:

                        /* We received an OUT token. Check if the size is less than
                         * maxPacketSize. This means the end of the transfer. If the
                         * pending size is 0 then again we end the transfer */

                        irp->nPendingBytes += lastBDTEntry->shortWord[1];

                        if(irp->status == USB_DEVICE_IRP_STATUS_ABORTED)
                        {
                            /* No need to process this aborted IRP. Enable the
                             * driver to move to the next IRP in the queue. */
                            if(irp->callback != NULL)
                            {
                                irp->callback((USB_DEVICE_IRP *)irp);
                            }
                            processNextIRP = true;
                        }

                        else if((lastBDTEntry->shortWord[1] < lastEndpointObj->maxPacketSize) || (irp->nPendingBytes >= irp->size))
                        {
                            /* We end the transfer because we either got the amount
                             * of data that we were expecting or we got the a short
                             * packet. */

                            /* If we got less data than we were expecting, then set
                             * the IRP status to short else say it is completed */

                            if(irp->nPendingBytes >= irp->size)
                            {
                                irp->status = USB_DEVICE_IRP_STATUS_COMPLETED;
                            }
                            else
                            {
                                irp->status = USB_DEVICE_IRP_STATUS_COMPLETED_SHORT;
                            }

                            /* Update the irp size with received data */
                            irp->size = irp->nPendingBytes;

                            processNextIRP = true;

                        }
                        else
                        {
                            /* We must continue this transfer */
                            F_DRV_USBFS_DEVICE_EndpointBDTEntryArm(currentBDTEntry, lastEndpointObj, irp, (int32_t)lastDirection);
                        }
                        break;

                    case 0x24:

                        /* This means that a IN token was received from the host */

                        if(irp->status == USB_DEVICE_IRP_STATUS_ABORTED)
                        {
                            /* No need to process this aborted IRP. Enable the
                             * driver to move to the next IRP in the queue. */

                            if(irp->callback != NULL)
                            {
                                irp->callback((USB_DEVICE_IRP *)irp);
                            }
                            processNextIRP = true;
                        }

                        else if(irp->nPendingBytes == 0U)
                        {
                            if((irp->flags & USB_DEVICE_IRP_FLAG_SEND_ZLP) != 0U)
                            {
                                /* This means a ZLP must be sent */
                                irp->flags &= ~USB_DEVICE_IRP_FLAG_SEND_ZLP;
                                F_DRV_USBFS_DEVICE_EndpointBDTEntryArm(currentBDTEntry, lastEndpointObj, irp, (int32_t)lastDirection);
                            }
                            else
                            {
                                irp->status = USB_DEVICE_IRP_STATUS_COMPLETED;
                                processNextIRP = true;
                            }
                        }
                        else
                        {
                            /* We must continue this transfer */
                            F_DRV_USBFS_DEVICE_EndpointBDTEntryArm(currentBDTEntry, lastEndpointObj, irp, (int32_t)lastDirection);
                        }

                        break;

                    default:
                        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "Unknown TOKEN received from host");
                        break;
                }

                /* Reset the BDT status */
                lastBDTEntry->byte[0] = 0;

                if(processNextIRP)
                {
                    /* Check the queue and get the next IRP */

                    lastEndpointObj->irpQueue = irp->next;

                    /* Check if the queue is empty. This will then allow us to track
                     * if a IRP was submitted after the  IRP callback. If so, then
                     * we should not call the
                     * F_DRV_USBFS_DEVICE_EndpointBDTEntryArm(). For an IRP added in
                     * the IRP callback, the F_DRV_USBFS_DEVICE_EndpointBDTEntryArm
                     * would have already been done in the IRP Submit function */

                    if(lastEndpointObj->irpQueue == NULL)
                    {
                        /* Queue was empty before the call back */
                        queueWasEmpty = true;
                    }

                    /* Now do the IRP callback*/

                    if(irp->callback != NULL && irp->status != USB_DEVICE_IRP_STATUS_ABORTED)
                    {
                        /* Invoke the callback */
                        irp->callback((USB_DEVICE_IRP *)irp);
                    }

                    if((lastEndpointObj->irpQueue != NULL) && (!(queueWasEmpty)))
                    {
                        /* This means we have something in the queue and this was not
                         * added in the IRP callback. We can arm the endpoint. */

                        lastEndpointObj->irpQueue->status = USB_DEVICE_IRP_STATUS_IN_PROGRESS;
                        F_DRV_USBFS_DEVICE_EndpointBDTEntryArm( currentBDTEntry, lastEndpointObj, lastEndpointObj->irpQueue, (int32_t)lastDirection);
                    }
                }
            }
            else
            {
                /* The IRP is null. This can happen if the IRP was aborted. In which
                 * case we have nothing to do. */
            }
        }
    }
}

/* MISRAC 2012 deviation block end */