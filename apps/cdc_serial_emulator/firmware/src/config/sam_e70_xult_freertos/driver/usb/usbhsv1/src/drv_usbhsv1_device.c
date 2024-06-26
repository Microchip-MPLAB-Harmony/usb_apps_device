/*******************************************************************************
  USB Device Driver Implementation of device mode operation routines

  Company:
    Microchip Technology Inc.

  File Name:
    drv_usbhsv1_device.c

  Summary:
    USB Device Driver Dynamic Implementation of device mode operation routines

  Description:
    The USB device driver provides a simple interface to manage the USB
    modules on Microchip microcontrollers.  This file Implements the
    interface routines for the USB driver when operating in device mode.

    While building the driver from source, ALWAYS use this file in the build if
    device mode operation is required.
 *******************************************************************************/

//DOM-IGNORE-BEGIN
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
//DOM-IGNORE-END


#include "driver/usb/usbhsv1/src/drv_usbhsv1_local.h"
#include "driver/usb/usbhsv1/drv_usbhsv1.h"

/* Array of endpoint objects. Two objects per endpoint */
static DRV_USBHSV1_DEVICE_ENDPOINT_OBJ gDrvUSBControlEndpoints[DRV_USBHSV1_INSTANCES_NUMBER] [2];

/* Array of endpoint objects. Two objects per endpoint */
static DRV_USBHSV1_DEVICE_ENDPOINT_OBJ gDrvUSBNonControlEndpoints[DRV_USBHSV1_INSTANCES_NUMBER] [DRV_USBHSV1_ENDPOINTS_NUMBER - 1];

/* Array of device speeds. To map the speed as per bit values */

static const USB_SPEED gDrvUSBHSV1DeviceSpeedMap[4] =
{
    USB_SPEED_FULL,
    USB_SPEED_HIGH,
    USB_SPEED_LOW,
    USB_SPEED_ERROR

};

/* Array of endpoint types. To map the types as per bit values */

static const USB_TRANSFER_TYPE gDrvUSBHSV1DeviceTransferTypeMap[4] =
{
    (USB_TRANSFER_TYPE)USBHS_DEVEPTCFG_EPTYPE_CTRL_Val,
    (USB_TRANSFER_TYPE)USBHS_DEVEPTCFG_EPTYPE_ISO_Val,
    (USB_TRANSFER_TYPE)USBHS_DEVEPTCFG_EPTYPE_BLK_Val,
    (USB_TRANSFER_TYPE)USBHS_DEVEPTCFG_EPTYPE_INTRPT_Val

};

/******************************************************************************
 * This structure is a pointer to a set of USB Driver Device mode functions.
 * This set is exported to the device layer when the device layer must use the
 * USB Controller.
 *****************************************************************************/

DRV_USB_DEVICE_INTERFACE gDrvUSBHSV1DeviceInterface =
{
    .open = DRV_USBHSV1_Open,
    .close = DRV_USBHSV1_Close,
    .eventHandlerSet = DRV_USBHSV1_ClientEventCallBackSet,
    .deviceAddressSet = DRV_USBHSV1_DEVICE_AddressSet,
    .deviceCurrentSpeedGet = DRV_USBHSV1_DEVICE_CurrentSpeedGet,
    .deviceSOFNumberGet = DRV_USBHSV1_DEVICE_SOFNumberGet,
    .deviceAttach = DRV_USBHSV1_DEVICE_Attach,
    .deviceDetach = DRV_USBHSV1_DEVICE_Detach,
    .deviceEndpointEnable = DRV_USBHSV1_DEVICE_EndpointEnable,
    .deviceEndpointDisable = DRV_USBHSV1_DEVICE_EndpointDisable,
    .deviceEndpointStall = DRV_USBHSV1_DEVICE_EndpointStall,
    .deviceEndpointStallClear = DRV_USBHSV1_DEVICE_EndpointStallClear,
    .deviceEndpointIsEnabled = DRV_USBHSV1_DEVICE_EndpointIsEnabled,
    .deviceEndpointIsStalled = DRV_USBHSV1_DEVICE_EndpointIsStalled,
    .deviceIRPSubmit = DRV_USBHSV1_DEVICE_IRPSubmit,
    .deviceIRPCancelAll = DRV_USBHSV1_DEVICE_IRPCancelAll,
    .deviceRemoteWakeupStop = DRV_USBHSV1_DEVICE_RemoteWakeupStop,
    .deviceRemoteWakeupStart = DRV_USBHSV1_DEVICE_RemoteWakeupStart,
    .deviceTestModeEnter = DRV_USBHSV1_DEVICE_TestModeEnter

};


// *****************************************************************************

/* Function:
    void F_DRV_USBHSV1_DEVICE_Initialize
    (
        DRV_USBHSV1_OBJ * drvObj,
        SYS_MODULE_INDEX index
    )

  Summary:
    Dynamic implementation of F_DRV_USBHSV1_DEVICE_Initialize client
    interface function.

  Description:
    This is the dynamic implementation of F_DRV_USBHSV1_DEVICE_Initialize
    client interface initialization function for USB device.
    Function checks the input handle validity and on success initializes the
    driver object. It also freezes the clock, disables all DMA and Endpoint
    interrupts. The endpoint objects are updated with respective pointers

  Remarks:
    See drv_usbhsv1.h for usage information.
 */

void F_DRV_USBHSV1_DEVICE_Initialize
(
    DRV_USBHSV1_OBJ * drvObj,
    SYS_MODULE_INDEX index
)

{

    usbhs_registers_t * usbID;      /* USB instance pointer */
    uint8_t count;                  /* Loop Counter */

    /* Get the USB H/W instance pointer */
    usbID = drvObj->usbID;

    /* Point the objects for control endpoint. It is a bidirectional
     * endpoint, so only one object is needed */

    drvObj->deviceEndpointObj[0] = &gDrvUSBControlEndpoints[index][0];

    /* Point the objects for non control endpoints.
     * They are unidirectional endpoints, so multidimensional
     * array with one object per endpoint direction */

    for(count = 1; count < DRV_USBHSV1_ENDPOINTS_NUMBER ; count++)
    {
        drvObj->deviceEndpointObj[count] = &gDrvUSBNonControlEndpoints[index][count - 1U];
    }

    /* Freeze USB clock */
    usbID->USBHS_CTRL |= USBHS_CTRL_FRZCLK_Msk;

    /* Disable all DMA interrupts */
    usbID->USBHS_DEVIDR = USBHS_DEVIDR_DMA_1_Msk | USBHS_DEVIDR_DMA_2_Msk | USBHS_DEVIDR_DMA_3_Msk | \
                          USBHS_DEVIDR_DMA_4_Msk | USBHS_DEVIDR_DMA_5_Msk | USBHS_DEVIDR_DMA_6_Msk | USBHS_DEVIDR_DMA_7_Msk;

    /* Disable all endpoint interrupts */
    usbID->USBHS_DEVIDR = USBHS_DEVIDR_PEP_0_Msk | USBHS_DEVIDR_PEP_1_Msk | USBHS_DEVIDR_PEP_2_Msk |
                          USBHS_DEVIDR_PEP_3_Msk | USBHS_DEVIDR_PEP_4_Msk | USBHS_DEVIDR_PEP_5_Msk |
                          USBHS_DEVIDR_PEP_6_Msk | USBHS_DEVIDR_PEP_7_Msk | USBHS_DEVIDR_PEP_8_Msk | USBHS_DEVIDR_PEP_9_Msk;

    /* In device mode endpoint 0 FIFO size is always 64.
     * So any FIFO allocation should start from 64. The
     * actual value stored in this variable is 64/8 */

    drvObj->consumedFIFOSize = 8;

}/* end of F_DRV_USBHSV1_DEVICE_Initialize() */

// *****************************************************************************

/* Function:
      void DRV_USBHSV1_DEVICE_AddressSet(DRV_HANDLE handle, uint8_t address)

  Summary:
    Dynamic implementation of DRV_USBHSV1_DEVICE_AddressSet client interface
    function.

  Description:
    This is the dynamic implementation of DRV_USBHSV1_DEVICE_AddressSet
    client interface initialization function for USB device. Function checks
    the input handle validity and on success updates the Device General Control
    Register USBHS_DEVCTRL.UADD with the address value and enables the address.

  Remarks:
    See drv_usbhsv1.h for usage information.
 */

void DRV_USBHSV1_DEVICE_AddressSet
(
    DRV_HANDLE handle,
    uint8_t address
)

{

    usbhs_registers_t * usbID;          /* USB instance pointer */
    DRV_USBHSV1_OBJ * hDriver;          /* USB driver object pointer */
    uint32_t regUSBHS_DEVCTRL;

    /* Check if the handle is invalid, if so return without any action */
    if(DRV_HANDLE_INVALID == handle)
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Driver Handle is invalid in DRV_USBHSV1_DEVICE_AddressSet().");
    }
    else
    {
        /* Set the device address */
        hDriver = (DRV_USBHSV1_OBJ *) handle;
        usbID = hDriver->usbID;

        /* Disable the device address */
        regUSBHS_DEVCTRL = usbID->USBHS_DEVCTRL;

        regUSBHS_DEVCTRL &= ~USBHS_DEVCTRL_ADDEN_Msk;

        regUSBHS_DEVCTRL &= ~(USBHS_DEVCTRL_UADD_Msk & ((0UL) << USBHS_DEVCTRL_UADD_Pos));

        /* Clear existing address and address enable bit */
        usbID->USBHS_DEVCTRL = regUSBHS_DEVCTRL;

        /* Copy new address to UADD */
        regUSBHS_DEVCTRL |= (USBHS_DEVCTRL_UADD_Msk & (((uint32_t)address) << USBHS_DEVCTRL_UADD_Pos));

        usbID->USBHS_DEVCTRL = regUSBHS_DEVCTRL;

        /* Enable the new address */
        usbID->USBHS_DEVCTRL |= USBHS_DEVCTRL_ADDEN_Msk;
    }


}/* end of DRV_USBHSV1_DEVICE_AddressSet() */

// *****************************************************************************

/* Function:
      USB_SPEED DRV_USBHSV1_DEVICE_CurrentSpeedGet(DRV_HANDLE handle)

  Summary:
    Dynamic implementation of DRV_USBHSV1_DEVICE_CurrentSpeedGet client
    interface function.

  Description:
    This is the dynamic implementation of DRV_USBHSV1_DEVICE_CurrentSpeedGet
    client interface initialization function for USB device.
    Function checks the input handle validity and on success returns value to
    indicate HIGH/FULL speed operation.

  Remarks:
    See drv_usbhsv1.h for usage information.
 */

USB_SPEED DRV_USBHSV1_DEVICE_CurrentSpeedGet
(
    DRV_HANDLE handle
)

{

    DRV_USBHSV1_OBJ * hDriver;              /* USB driver object pointer */
    USB_SPEED retVal = USB_SPEED_ERROR;     /* Return value */

    /* Check if the handle is invalid, if so return without any action */
    if(DRV_HANDLE_INVALID == handle)
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Driver Handle is invalid in DRV_USBHSV1_DEVICE_CurrentSpeedGet().");
    }
    else
    {
        hDriver = (DRV_USBHSV1_OBJ *) handle;

        /* The current speed in contained in the
         * device speed member of the driver object */
         retVal = hDriver->deviceSpeed;
    }

    return (retVal);

}/* end of DRV_USBHSV1_DEVICE_CurrentSpeedGet() */

// *****************************************************************************
/* MISRA C-2012 Rule 5.1 deviated:4 Deviation record ID -  H3_USB_MISRAC_2012_R_5_1_DR_1 */
/* Function:
      void DRV_USBHSV1_DEVICE_RemoteWakeupStart(DRV_HANDLE handle)

  Summary:
    Dynamic implementation of DRV_USBHSV1_DEVICE_RemoteWakeupStart client
    interface function.

  Description:
    This is dynamic implementation of DRV_USBHSV1_DEVICE_RemoteWakeupStart
    client interface function for USB device.

  Remarks:
    See drv_usbhsv1.h for usage information.
 */

void DRV_USBHSV1_DEVICE_RemoteWakeupStart(DRV_HANDLE handle)
{

    if(DRV_HANDLE_INVALID == handle)
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Driver Handle is invalid in DRV_USBHSV1_DEVICE_RemoteWakeupStart().");
    }
    else
    {
        /* This is not yet implemented. Do nothing as of now */
    }

}/* end of DRV_USBHSV1_DEVICE_RemoteWakeupStart() */

// *****************************************************************************

/* Function:
      void DRV_USBHSV1_DEVICE_RemoteWakeupStop(DRV_HANDLE handle)

  Summary:
    Dynamic implementation of DRV_USBHSV1_DEVICE_RemoteWakeupStop client
    interface function.

  Description:
    This is dynamic implementation of DRV_USBHSV1_DEVICE_RemoteWakeupStop
    client interface function for USB device.

  Remarks:
    See drv_usbhsv1.h for usage information.
 */

void DRV_USBHSV1_DEVICE_RemoteWakeupStop(DRV_HANDLE handle)
{
    if(DRV_HANDLE_INVALID == handle)
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Driver Handle is invalid in DRV_USBHSV1_DEVICE_RemoteWakeupStop().");
    }
    else
    {
        /* This is not yet implemented. Do nothing as of now */
    }

}/* end of DRV_USBHSV1_DEVICE_RemoteWakeupStop() */

// *****************************************************************************
/* MISRA C-2012 Rule 10.4 False Positive:8 Deviation record ID -  H3_USB_MISRAC_2012_R_10_4_DR_1 */

/* Function:
      void DRV_USBHSV1_DEVICE_Attach(DRV_HANDLE handle)

  Summary:
    Dynamic implementation of DRV_USBHSV1_DEVICE_Attach client
    interface function.

  Description:
    This is the dynamic implementation of DRV_USBHSV1_DEVICE_Attach
    client interface function for USB device.
    This function checks if the handle passed is valid and if so, performs the
    device attach operation. EOR, SUSP, WAKEUP, & SOF interrupts are enabled and
    EOR, WAKEUP, & SOF interrupts are cleared.

  Remarks:
    See drv_usbhsv1.h for usage information.
 */

void DRV_USBHSV1_DEVICE_Attach
(
    DRV_HANDLE handle
)

{

    usbhs_registers_t * usbID;                  /* USB instance pointer */
    DRV_USBHSV1_OBJ * hDriver;                  /* USB driver object pointer */
    USB_ERROR retVal = USB_ERROR_NONE;
    bool interruptWasEnabled = false;       /* To track interrupt state */

    /* Check if the handle is invalid, if so return without any action */
    if(DRV_HANDLE_INVALID == handle)
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Driver Handle is invalid in DRV_USBHSV1_DEVICE_Attach().");
    }
    else
    {
        hDriver = (DRV_USBHSV1_OBJ *) handle;
        usbID = hDriver->usbID;
        
        if(false == hDriver->isInInterruptContext)
        {
            if(OSAL_MUTEX_Lock((OSAL_MUTEX_HANDLE_TYPE *)&hDriver->mutexID, OSAL_WAIT_FOREVER) == OSAL_RESULT_TRUE)
            {
                interruptWasEnabled = SYS_INT_SourceDisable(hDriver->interruptSource);                
            }
            else
            {
                SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Mutex lock failed in DRV_USBHSV1_DEVICE_Detach()");
                retVal = USB_ERROR_OSAL_FUNCTION;
            }
        }
        if(retVal == USB_ERROR_NONE)
        {
            /* Enable the USB hardware */
            usbID->USBHS_CTRL |= USBHS_CTRL_USBE_Msk;
            
            /* Unfreeze USB clock */
            usbID->USBHS_CTRL &= ~USBHS_CTRL_FRZCLK_Msk;

            /* Wait to unfreeze clock */
            while(USBHS_SR_CLKUSABLE_Msk != (usbID->USBHS_SR & USBHS_SR_CLKUSABLE_Msk))
            {
                /* Do Nothing */
            }

            /* Attach the device */
            usbID->USBHS_DEVCTRL &= ~USBHS_DEVCTRL_DETACH_Msk;

            /* Enable the End Of Reset, Suspend, SOF & Wakeup interrupts */
            usbID->USBHS_DEVIER = (USBHS_DEVIER_EORSTES_Msk | USBHS_DEVIER_SUSPES_Msk | USBHS_DEVIER_SOFES_Msk | USBHS_DEVIER_WAKEUPES_Msk);

            /* Clear the End Of Reset, SOF & Wakeup interrupts */
            usbID->USBHS_DEVICR = (USBHS_DEVICR_EORSTC_Msk | USBHS_DEVICR_SOFC_Msk | USBHS_DEVICR_WAKEUPC_Msk);

            /* Manually set the Suspend Interrupt */
            usbID->USBHS_DEVIFR |= USBHS_DEVIFR_SUSPS_Msk;

            /* Ack the Wakeup Interrupt */
            usbID->USBHS_DEVICR = USBHS_DEVICR_WAKEUPC_Msk;

            /* Freeze USB clock */
            usbID->USBHS_CTRL |= USBHS_CTRL_FRZCLK_Msk;
        }
        if(false == hDriver->isInInterruptContext)
        {
            if(true == interruptWasEnabled)
            {
                /* IF the interrupt was enabled when entering the routine
                 * re-enable it now */
                SYS_INT_SourceEnable(hDriver->interruptSource);

                /* Unlock the mutex */
                (void) OSAL_MUTEX_Unlock((OSAL_MUTEX_HANDLE_TYPE *)&hDriver->mutexID);
            }
        }
    }

}/* end of DRV_USBHSV1_DEVICE_Attach() */

// *****************************************************************************

/* Function:
      void DRV_USBHSV1_DEVICE_Detach(DRV_HANDLE handle)

  Summary:
    Dynamic implementation of DRV_USBHSV1_DEVICE_Detach client
    interface function.

  Description:
    This is the dynamic implementation of DRV_USBHSV1_DEVICE_Detach
    client interface function for USB device.
    This function checks if the passed handle is valid and if so, performs a
    device detach operation.

  Remarks:
    See drv_usbhsv1.h for usage information.
 */

void DRV_USBHSV1_DEVICE_Detach(DRV_HANDLE handle)
{

    usbhs_registers_t * usbID;                  /* USB instance pointer */
    DRV_USBHSV1_OBJ * hDriver;                  /* USB driver object pointer */
    USB_ERROR retVal = USB_ERROR_NONE;
    uint32_t regUSBHS_DEVCTRL;
    bool interruptWasEnabled = false;       /* To track interrupt state */


    /* Check if the handle is invalid, if so return without any action */
    if(DRV_HANDLE_INVALID == handle)
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Driver Handle is invalid in DRV_USBHSV1_DEVICE_Detach().");
    }
    else if(true == ((DRV_USBHSV1_OBJ *) handle)->inUse)
    {
        hDriver = (DRV_USBHSV1_OBJ *) handle;
        usbID = hDriver->usbID;

        /* Disable All Endpoints */ 
        (void) DRV_USBHSV1_DEVICE_EndpointDisable((DRV_HANDLE)hDriver, DRV_USB_DEVICE_ENDPOINT_ALL);
        
        if(false == hDriver->isInInterruptContext)
        {
            if(OSAL_MUTEX_Lock((OSAL_MUTEX_HANDLE_TYPE *)&hDriver->mutexID, OSAL_WAIT_FOREVER) == OSAL_RESULT_TRUE)
            {
                /* Disable  the USB Interrupt as this is not called inside ISR */
                interruptWasEnabled = SYS_INT_SourceDisable(hDriver->interruptSource);                
            }
            else
            {
                /* There was an error in getting the mutex */
                SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Mutex lock failed in DRV_USBHSV1_DEVICE_Detach()");
                retVal = USB_ERROR_OSAL_FUNCTION;
            }
        }
        if(retVal == USB_ERROR_NONE)
        {
            /* Update the driver flag indicating detach */
            hDriver->isAttached = false;
          
            /* Unfreeze USB clock */
            usbID->USBHS_CTRL &= ~USBHS_CTRL_FRZCLK_Msk;

            /* Wait to unfreeze clock */
            while(USBHS_SR_CLKUSABLE_Msk != (usbID->USBHS_SR & USBHS_SR_CLKUSABLE_Msk))
            {
                /* Do Nothing */
            }
        
            /* Clear all the pending interrupts */
            usbID->USBHS_DEVICR = USBHS_DEVICR_Msk;
            
            /* Disable all interrupts */
            usbID->USBHS_DEVIDR = USBHS_DEVIDR_Msk;
            
            /* Detach the device */
            usbID->USBHS_DEVCTRL |= USBHS_DEVCTRL_DETACH_Msk;

            /* Disable the device address */
            regUSBHS_DEVCTRL = usbID->USBHS_DEVCTRL;

            regUSBHS_DEVCTRL &= ~USBHS_DEVCTRL_ADDEN_Msk;

            regUSBHS_DEVCTRL &= ~(USBHS_DEVCTRL_UADD_Msk & ((0UL) << USBHS_DEVCTRL_UADD_Pos));

            /* Clear existing address and address enable bit */
            usbID->USBHS_DEVCTRL = regUSBHS_DEVCTRL;
            
            /* Freeze USB clock */
            usbID->USBHS_CTRL |= USBHS_CTRL_FRZCLK_Msk;
            
            /* Disable the USB hardware */
            usbID->USBHS_CTRL &= ~USBHS_CTRL_USBE_Msk;
            
            if(false == hDriver->isInInterruptContext)
            {
                if(true == interruptWasEnabled)
                {
                    /* IF the interrupt was enabled when entering the routine
                     * re-enable it now */
                    SYS_INT_SourceEnable(hDriver->interruptSource);

                    /* Unlock the mutex */
                    (void) OSAL_MUTEX_Unlock((OSAL_MUTEX_HANDLE_TYPE *)&hDriver->mutexID);
                }
            }
        }
    }
    else
    {
        /* Do Nothing */
    }
}/* end of DRV_USBHSV1_DEVICE_Detach() */

// *****************************************************************************

/* Function:
      uint16_t DRV_USBHSV1_DEVICE_SOFNumberGet(DRV_HANDLE client)

  Summary:
    Dynamic implementation of DRV_USBHSV1_DEVICE_SOFNumberGet client
    interface function.

  Description:
    This is the dynamic implementation of DRV_USBHSV1_DEVICE_SOFNumberGet
    client interface function for USB device.
    Function checks the validity of the input arguments and on success returns
    the Frame count value.

  Remarks:
    See drv_usbhsv1.h for usage information.
 */

uint16_t DRV_USBHSV1_DEVICE_SOFNumberGet(DRV_HANDLE handle)
{
    if(DRV_HANDLE_INVALID == handle)
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Invalid Handle in DRV_USBHSV1_DEVICE_SOFNumberGet().");
    }

    return (0);

}/* end of DRV_USBHSV1_DEVICE_SOFNumberGet() */

// *****************************************************************************
/* MISRA C-2012 Rule 11.3 deviated:31 Deviation record ID -  H3_USB_MISRAC_2012_R_11_3_DR_1 */
/* Function:
    void F_DRV_USBHSV1_DEVICE_IRPQueueFlush
    (
        DRV_USBHSV1_DEVICE_ENDPOINT_OBJ * endpointObj,
        USB_DEVICE_IRP_STATUS status
    )

  Summary:
    Dynamic implementation of F_DRV_USBHSV1_DEVICE_IRPQueueFlush function.

  Description:
    This is the dynamic implementation of F_DRV_USBHSV1_DEVICE_IRPQueueFlush
    function for USB device.
    Function scans for all the IRPs on the endpoint queue and cancels them all.

  Remarks:
    This is a local function and should not be called directly by the
    application.
 */

void F_DRV_USBHSV1_DEVICE_IRPQueueFlush
(
    DRV_USBHSV1_DEVICE_ENDPOINT_OBJ * endpointObj,
    USB_DEVICE_IRP_STATUS status
)

{

    USB_DEVICE_IRP_LOCAL * iterator;                  /* Local IRP object for iterations */

    /* Check if any IRPs are assigned on this endpoint and
     * abort them */

    if(endpointObj->irpQueue != NULL)
    {
        /* Cancel the IRP and deallocate driver IRP
         * objects */

        iterator = endpointObj->irpQueue;

        while (iterator != NULL)
        {
            iterator->status = status;
            if(iterator->callback != NULL)
            {
                iterator->callback((USB_DEVICE_IRP *) iterator);
            }
            iterator = iterator->next;
        }
    }

    /* Set the head pointer to NULL */
    endpointObj->irpQueue = NULL;

}/* end of F_DRV_USBHSV1_DEVICE_IRPQueueFlush() */

// *****************************************************************************

/* Function:
    void F_DRV_USBHSV1_DEVICE_EndpointObjectEnable
    (
        DRV_USBHSV1_DEVICE_ENDPOINT_OBJ * endpointObj,
        uint16_t endpointSize,
        USB_TRANSFER_TYPE endpointType,
        USB_DATA_DIRECTION endpointDirection
    )

  Summary:
    Dynamic implementation of F_DRV_USBHSV1_DEVICE_EndpointObjectEnable
    function.

  Description:
    This is the dynamic implementation of
    F_DRV_USBHSV1_DEVICE_EndpointObjectEnable function for USB device.
    Function populates the endpoint object data structure and sets it to
    enabled state.

  Remarks:
    This is a local function and should not be called directly by the
    application.
 */

void F_DRV_USBHSV1_DEVICE_EndpointObjectEnable
(
    DRV_USBHSV1_DEVICE_ENDPOINT_OBJ * endpointObj,
    uint16_t endpointSize,
    USB_TRANSFER_TYPE endpointType,
    USB_DATA_DIRECTION endpointDirection
)

{
    /* This is a helper function */

    endpointObj->irpQueue = NULL;
    endpointObj->maxPacketSize = endpointSize;
    endpointObj->endpointType = endpointType;
    endpointObj->endpointState = DRV_USBHSV1_DEVICE_ENDPOINT_STATE_ENABLED;
    endpointObj->endpointDirection = endpointDirection;

}/* end of F_DRV_USBHSV1_DEVICE_EndpointObjectEnable() */

// *****************************************************************************

/* Function:
    USB_ERROR DRV_USBHSV1_DEVICE_EndpointEnable
    (
        DRV_HANDLE handle,
        USB_ENDPOINT endpointAndDirection,
        USB_TRANSFER_TYPE endpointType,
        uint16_t endpointSize
    )

  Summary:
    Dynamic implementation of DRV_USBHSV1_DEVICE_EndpointEnable client
    interface function.

  Description:
    This is the dynamic implementation of DRV_USBHSV1_DEVICE_EndpointEnable
    client interface function for USB device.
    Function enables the specified endpoint.

  Remarks:
    See drv_usbhsv1.h for usage information.
 */

USB_ERROR DRV_USBHSV1_DEVICE_EndpointEnable
(
    DRV_HANDLE handle,
    USB_ENDPOINT endpointAndDirection,
    USB_TRANSFER_TYPE endpointType,
    uint16_t endpointSize
)

{

    usbhs_registers_t * usbID;                  /* USB instance pointer */
    DRV_USBHSV1_OBJ * hDriver;                  /* USB driver object pointer */
    uint8_t direction;                          /* Endpoint Direction */
    uint8_t endpoint;                           /* Endpoint Number */
    uint8_t fifoSize = 0;                       /* FIFO size */
    uint16_t defaultEndpointSize = 8;           /* Default size of Endpoint */
    USB_ERROR retVal = USB_ERROR_NONE;          /* Return value */

    /* Endpoint object pointer */
    DRV_USBHSV1_DEVICE_ENDPOINT_OBJ * endpointObj;

    /* Extract the Endpoint number and its direction */
    endpoint = endpointAndDirection & 0xFU;
    direction = (uint8_t)((endpointAndDirection & 0x80U) != 0U);

    if(endpoint >= DRV_USBHSV1_ENDPOINTS_NUMBER)
    {
        /* Endpoint number is invalid, return with appropriate error message */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Unsupported endpoint in DRV_USBHSV1_DEVICE_EndpointEnable().");

        retVal = USB_ERROR_DEVICE_ENDPOINT_INVALID;
    }
    else if(endpointSize < 8U || endpointSize > 1024U)
    {
        /* Endpoint size is invalid, return with appropriate error message */
        retVal = USB_ERROR_HOST_ENDPOINT_INVALID;
    }
    else if(DRV_HANDLE_INVALID == handle)
    {
        /* The handle is invalid, return with appropriate error message */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Driver Handle is invalid in DRV_USBHSV1_DEVICE_EndpointEnable().");

        retVal = USB_ERROR_PARAMETER_INVALID;
    }
    else
    {
        /* Handle and Endpoint formation are valid, Enable endpoint */

        hDriver = (DRV_USBHSV1_OBJ *) handle;
        usbID = hDriver->usbID;

        /* Find upper 2 power number of endpointSize */
        while (defaultEndpointSize < endpointSize)
        {
            fifoSize++;
            defaultEndpointSize <<= 1;
        }

        /* Get the endpoint object */
        endpointObj = hDriver->deviceEndpointObj[endpoint];

        if(endpoint == 0U)
        {
            /* There are two endpoint objects for a control endpoint.
             * Enable the first endpoint object */

            F_DRV_USBHSV1_DEVICE_EndpointObjectEnable
            (
                endpointObj, endpointSize, endpointType, USB_DATA_DIRECTION_HOST_TO_DEVICE
            );

            endpointObj++;

             /* Enable the second endpoint object */

            F_DRV_USBHSV1_DEVICE_EndpointObjectEnable
            (
                endpointObj, endpointSize, endpointType, USB_DATA_DIRECTION_DEVICE_TO_HOST
            );

            /* Enable the control endpoint - Endpoint 0 */
            usbID->USBHS_DEVEPT |= USBHS_DEVEPT_EPEN0_Msk;

            /* Configure the Endpoint 0 configuration register */
            usbID->USBHS_DEVEPTCFG[0] =
            (
                USBHS_DEVEPTCFG_EPSIZE(fifoSize) |
                USBHS_DEVEPTCFG_EPTYPE(USB_TRANSFER_TYPE_CONTROL) |
                USBHS_DEVEPTCFG_EPBK(USBHS_DEVEPTCFG_EPBK_1_BANK) |
                USBHS_DEVEPTCFG_ALLOC_Msk
            );

            usbID->USBHS_DEVEPTIER[0] = USBHS_DEVEPTIER_RSTDTS_Msk;

            usbID->USBHS_DEVEPTIDR[0] = USBHS_DEVEPTIDR_STALLRQC_Msk;


            if(USBHS_DEVEPTISR_CFGOK_Msk == (usbID->USBHS_DEVEPTISR[0] & USBHS_DEVEPTISR_CFGOK_Msk))
            {
                /* Endpoint configuration is successful */
                usbID->USBHS_DEVEPTIER[0] = USBHS_DEVEPTIER_RXSTPES_Msk | USBHS_DEVEPTIER_RXOUTES_Msk;

                /* Enable Endpoint 0 Interrupts */
                usbID->USBHS_DEVIER = USBHS_DEVIER_PEP_0_Msk;
            }
            else
            {
                /* Endpoint configuration is not successful */
                retVal = USB_ERROR_ENDPOINT_NOT_CONFIGURED;
            }
        }
        else
        {
            /* Enable the non-zero endpoint object */

            F_DRV_USBHSV1_DEVICE_EndpointObjectEnable(endpointObj, endpointSize, endpointType, (USB_DATA_DIRECTION)direction);

            /* Enable the endpoint */
            usbID->USBHS_DEVEPT |= ((0x01UL << endpoint) << USBHS_DEVEPT_EPEN0_Pos);

            /* Set up the maxpacket size, fifo start address fifosize
             * and enable the interrupt. CLear the data toggle. */

            usbID->USBHS_DEVEPTCFG[endpoint] =
            (
                USBHS_DEVEPTCFG_EPSIZE(fifoSize) |
                USBHS_DEVEPTCFG_EPTYPE(gDrvUSBHSV1DeviceTransferTypeMap[endpointType]) |
                USBHS_DEVEPTCFG_EPBK(USBHS_DEVEPTCFG_EPBK_1_BANK) |
                USBHS_DEVEPTCFG_ALLOC_Msk |
                ((direction & 0x01UL) << USBHS_DEVEPTCFG_EPDIR_Pos)
            );

            if (endpointType == USB_TRANSFER_TYPE_ISOCHRONOUS)
            {
                usbID->USBHS_DEVEPTCFG[endpoint] |= USBHS_DEVEPTCFG_NBTRANS(1); 
            }
            usbID->USBHS_DEVEPTIER[endpoint] = USBHS_DEVEPTIER_RSTDTS_Msk;

            usbID->USBHS_DEVEPTIDR[endpoint] = USBHS_DEVEPTIDR_STALLRQC_Msk;

            if(USBHS_DEVEPTISR_CFGOK_Msk == (usbID->USBHS_DEVEPTISR[endpoint] & USBHS_DEVEPTISR_CFGOK_Msk))
            {
                /* Endpoint configuration is successful.
                 * Enable Endpoint Interrupts */

                if(direction == (uint8_t)USB_DATA_DIRECTION_HOST_TO_DEVICE)
                {
                    usbID->USBHS_DEVEPTIER[endpoint] = USBHS_DEVEPTIER_RXOUTES_Msk;
                }

                usbID->USBHS_DEVIER = ((0x01UL << endpoint) << USBHS_DEVIER_PEP_0_Pos);
            }
            else
            {
                /* Endpoint configuration is not successful */
                retVal = USB_ERROR_ENDPOINT_NOT_CONFIGURED;
            }
        }
    }

    return (retVal);

}/* end of DRV_USBHSV1_DEVICE_EndpointEnable() */

// *****************************************************************************

/* Function:
    USB_ERROR DRV_USBHSV1_DEVICE_EndpointDisable
    (
        DRV_HANDLE handle,
        USB_ENDPOINT endpointAndDirection
    )

  Summary:
    Dynamic implementation of DRV_USBHSV1_DEVICE_EndpointDisable client
    interface function.

  Description:
    This is dynamic implementation of DRV_USBHSV1_DEVICE_EndpointDisable
    client interface function for USB device.
    Function disables the specified endpoint.

  Remarks:
    See drv_usbhsv1.h for usage information.
 */

USB_ERROR DRV_USBHSV1_DEVICE_EndpointDisable
(
    DRV_HANDLE handle,
    USB_ENDPOINT endpointAndDirection
)

{
    /* This routine disables the specified endpoint.
     * It does not check if there is any ongoing
     * communication on the bus through the endpoint
     */

    usbhs_registers_t * usbID;                  /* USB instance pointer */
    DRV_USBHSV1_OBJ * hDriver;                  /* USB driver object pointer */
    uint8_t endpoint;                           /* Endpoint Number */
    uint8_t count;                              /* Loop Counter */
    bool interruptWasEnabled = false;           /* To track interrupt state */
    USB_ERROR retVal = USB_ERROR_NONE;          /* Return value */

    /* Endpoint object pointer */
    DRV_USBHSV1_DEVICE_ENDPOINT_OBJ * endpointObj;
    uint32_t tempendobj;      


    endpoint = endpointAndDirection & 0xFU;

    if(
        (endpointAndDirection != (uint8_t)DRV_USBHSV1_DEVICE_ENDPOINT_ALL) &&
        (endpoint >= (uint8_t)DRV_USBHSV1_ENDPOINTS_NUMBER)
        )
    {
        /* The endpoint number must be either
         * _DRV_USBHSV1_DEVICE_ENDPOINT_ALL or a valid endpoint */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Unsupported endpoint in DRV_USBHSV1_DEVICE_EndpointDisable().");

        retVal = USB_ERROR_DEVICE_ENDPOINT_INVALID;
    }
    else if(DRV_HANDLE_INVALID == handle)
    {
        /* The handle is invalid, return with appropriate error message */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Driver Handle is invalid in DRV_USBHSV1_DEVICE_EndpointDisable().");

        retVal = USB_ERROR_PARAMETER_INVALID;
    }
    else
    {
        /* Handle and Endpoint formation are valid, Enable endpoint */

        /* Get the driver object handle pointer and USB HW instance*/

        hDriver = (DRV_USBHSV1_OBJ *) handle;
        usbID = hDriver->usbID;

        if(false == hDriver->isInInterruptContext)
        {
            if(OSAL_MUTEX_Lock((OSAL_MUTEX_HANDLE_TYPE *)&hDriver->mutexID, OSAL_WAIT_FOREVER) == OSAL_RESULT_TRUE)
            {
                /* Disable  the USB Interrupt as this is not called inside ISR */
                interruptWasEnabled = SYS_INT_SourceDisable(hDriver->interruptSource);                
            }
            else
            {
                /* There was an error in getting the mutex */
                SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Mutex lock failed in DRV_USBHSV1_DEVICE_EndpointDisable()");
                retVal = USB_ERROR_OSAL_FUNCTION;
            }
        }
        if(retVal == USB_ERROR_NONE)
        {

            /* If the endpointAndDirection is _DRV_USBHSV1_DEVICE_ENDPOINT_ALL
             * then this means that the DRV_USBHSV1_DEVICE_EndpointDisableAll()
             * function was called */

            if(endpointAndDirection == DRV_USBHSV1_DEVICE_ENDPOINT_ALL)
            {
                /* Disable all endpoints */

                usbID->USBHS_DEVEPT &= ~(0x3FFUL << USBHS_DEVEPT_EPEN0_Pos);

                endpointObj = hDriver->deviceEndpointObj[0];
                
                
                tempendobj = ~((uint32_t)DRV_USBHSV1_DEVICE_ENDPOINT_STATE_ENABLED) & (uint32_t)endpointObj->endpointState;
                endpointObj->endpointState = (DRV_USBHSV1_DEVICE_ENDPOINT_STATE)tempendobj;

                endpointObj++;

                tempendobj = ~((uint32_t)DRV_USBHSV1_DEVICE_ENDPOINT_STATE_ENABLED) & (uint32_t)endpointObj->endpointState;
                endpointObj->endpointState = (DRV_USBHSV1_DEVICE_ENDPOINT_STATE)tempendobj;

                endpointObj = hDriver->deviceEndpointObj[1];

                for(count = 1; count < DRV_USBHSV1_ENDPOINTS_NUMBER ; count++)
                {
                    tempendobj = ~((uint32_t)DRV_USBHSV1_DEVICE_ENDPOINT_STATE_ENABLED) & (uint32_t)endpointObj->endpointState;
                    endpointObj->endpointState = (DRV_USBHSV1_DEVICE_ENDPOINT_STATE)tempendobj;

                    endpointObj++;
                }
            }
            else
            {
                if(endpoint == 0U)
                {
                    /* Disable a control endpoint and update the
                     * endpoint database. */

                    endpointObj = hDriver->deviceEndpointObj[0];

                    tempendobj = ~((uint32_t)DRV_USBHSV1_DEVICE_ENDPOINT_STATE_ENABLED) & (uint32_t)endpointObj->endpointState;
                    endpointObj->endpointState = (DRV_USBHSV1_DEVICE_ENDPOINT_STATE)tempendobj;

                    endpointObj++;
                    tempendobj = ~((uint32_t)DRV_USBHSV1_DEVICE_ENDPOINT_STATE_ENABLED) & (uint32_t)endpointObj->endpointState;
                    endpointObj->endpointState = (DRV_USBHSV1_DEVICE_ENDPOINT_STATE)tempendobj;

                    /* Disable the Control Endpoint */
                    usbID->USBHS_DEVEPT &= ~USBHS_DEVEPT_EPEN0_Msk;
                }
                else
                {
                    /* Disable a specific endpoint direction for non
                     * control endpoints. */
                    endpointObj = hDriver->deviceEndpointObj[endpoint];
                    tempendobj = ~((uint32_t)DRV_USBHSV1_DEVICE_ENDPOINT_STATE_ENABLED) & (uint32_t)endpointObj->endpointState;
                    endpointObj->endpointState = (DRV_USBHSV1_DEVICE_ENDPOINT_STATE)tempendobj;

                    /* Disable the respective Endpoint  */
                    usbID->USBHS_DEVEPT &= ~((0x01UL << endpoint) << USBHS_DEVEPT_EPEN0_Pos);
                }
            }
            
            if(false == hDriver->isInInterruptContext)
            {
                if(true == interruptWasEnabled)
                {
                    /* IF the interrupt was enabled when entering the routine
                     * re-enable it now */
                    SYS_INT_SourceEnable(hDriver->interruptSource);

                    /* Unlock the mutex */
                    (void) OSAL_MUTEX_Unlock((OSAL_MUTEX_HANDLE_TYPE *)&hDriver->mutexID);
                }
            }
        }        
    }
    return (retVal);
}/* end of DRV_USBHSV1_DEVICE_EndpointDisable() */

// *****************************************************************************

/* Function:
    bool DRV_USBHSV1_DEVICE_EndpointIsEnabled
    (
        DRV_HANDLE handle,
        USB_ENDPOINT endpointAndDirection
    )

  Summary:
    Dynamic implementation of DRV_USBHSV1_DEVICE_EndpointIsEnabled client
    interface function.

  Description:
    This is the dynamic implementation of
    DRV_USBHSV1_DEVICE_EndpointIsEnabled client interface function for
    USB device.
    Function returns the state of specified endpoint(true\false) signifying
    whether the endpoint is enabled or not.

  Remarks:
    See drv_usbhsv1.h for usage information.
 */

bool DRV_USBHSV1_DEVICE_EndpointIsEnabled
(
    DRV_HANDLE handle,
    USB_ENDPOINT endpointAndDirection
)

{

    DRV_USBHSV1_OBJ * hDriver;                  /* USB driver object pointer */
    uint8_t endpoint;                           /* Endpoint Number */
    bool retVal = true;                         /* Return value */

    /* Endpoint object pointer */
    DRV_USBHSV1_DEVICE_ENDPOINT_OBJ * endpointObj;


    /* Extract the Endpoint number */
    endpoint = endpointAndDirection & 0xFU;

    if(endpoint >= DRV_USBHSV1_ENDPOINTS_NUMBER)
    {
        /* Endpoint number is invalid, return with appropriate error message */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Unsupported endpoint in DRV_USBHSV1_DEVICE_EndpointIsEnabled().");

        retVal = false;
    }
    else if(DRV_HANDLE_INVALID == handle)
    {
        /* The handle is invalid, return with appropriate error message */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Driver Handle is invalid in DRV_USBHSV1_DEVICE_EndpointIsEnabled().");

        retVal = (bool)USB_ERROR_PARAMETER_INVALID;
    }
    else
    {
        hDriver = (DRV_USBHSV1_OBJ *) handle;
        endpointObj = hDriver->deviceEndpointObj[endpoint];

        if(((uint32_t)endpointObj->endpointState & (uint32_t)DRV_USBHSV1_DEVICE_ENDPOINT_STATE_ENABLED) == 0U)
        {
            retVal = false;
        }
        else
        {
            /* return true */
        }
    }

    return (retVal);

}/* end of DRV_USBHSV1_DEVICE_EndpointIsEnabled() */


// *****************************************************************************

/* Function:
      USB_ERROR DRV_USBHSV1_DEVICE_EndpointStall
      (
        DRV_HANDLE client,
        USB_ENDPOINT endpointAndDirection
      )

  Summary:
    Dynamic implementation of DRV_USBHSV1_DEVICE_EndpointStall client
    interface function.

  Description:
    This is the dynamic implementation of DRV_USBHSV1_DEVICE_EndpointStall
    client interface function for USB device.
    Function sets the STALL state of the specified endpoint.

  Remarks:
    See drv_usbhsv1.h for usage information.
 */

USB_ERROR DRV_USBHSV1_DEVICE_EndpointStall
(
    DRV_HANDLE handle,
    USB_ENDPOINT endpointAndDirection
)

{

    usbhs_registers_t * usbID;                  /* USB instance pointer */
    DRV_USBHSV1_OBJ * hDriver;                  /* USB driver object pointer */
    uint8_t endpoint;                           /* Endpoint Number */
    bool interruptWasEnabled = false;           /* To track interrupt state */
    USB_ERROR retVal = USB_ERROR_NONE;          /* Return value */
    uint32_t tempendobj;

    /* Endpoint object pointer */
    DRV_USBHSV1_DEVICE_ENDPOINT_OBJ * endpointObj;

    /* Extract the Endpoint number and its direction */
    endpoint = endpointAndDirection & 0xFU;

    if(endpoint >= DRV_USBHSV1_ENDPOINTS_NUMBER)
    {
        /* Endpoint number is invalid, return with appropriate error message */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Unsupported endpoint in DRV_USBHSV1_DEVICE_EndpointStall().");

        retVal = USB_ERROR_DEVICE_ENDPOINT_INVALID;
    }
    else if(DRV_HANDLE_INVALID == handle)
    {
        /* The handle is invalid, return with appropriate error message */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Driver Handle is invalid in DRV_USBHSV1_DEVICE_EndpointStall().");

        retVal = USB_ERROR_PARAMETER_INVALID;
    }
    else
    {
        /* Handle and Endpoint formation are valid, Stall the endpoint */

        hDriver = (DRV_USBHSV1_OBJ *) handle;
        usbID = hDriver->usbID;

        /* Get the endpoint object */
        endpointObj = hDriver->deviceEndpointObj[endpoint];

        if(false == hDriver->isInInterruptContext)
        {
            if(OSAL_MUTEX_Lock((OSAL_MUTEX_HANDLE_TYPE *)&hDriver->mutexID, OSAL_WAIT_FOREVER) == OSAL_RESULT_TRUE)
            {
                /* Disable  the USB Interrupt as this is not called inside ISR */
                interruptWasEnabled = SYS_INT_SourceDisable(hDriver->interruptSource);                
            }
            else
            {
                /* There was an error in getting the mutex */
                SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Mutex lock failed in DRV_USBHSV1_DEVICE_EndpointStall()");
                retVal = USB_ERROR_OSAL_FUNCTION;
            }
        }
        if(retVal == USB_ERROR_NONE)
        {
            /* Stall the endpoint 0 */
            usbID->USBHS_DEVEPTIER[endpoint] = USBHS_DEVEPTIER_STALLRQS_Msk;

            if(endpoint == 0U)
            {

                /* While stalling endpoint 0 we stall both directions */
                tempendobj = (uint32_t)DRV_USBHSV1_DEVICE_ENDPOINT_STATE_STALLED | (uint32_t)endpointObj->endpointState;
                endpointObj->endpointState = (DRV_USBHSV1_DEVICE_ENDPOINT_STATE)tempendobj;

                F_DRV_USBHSV1_DEVICE_IRPQueueFlush(endpointObj, USB_DEVICE_IRP_STATUS_ABORTED_ENDPOINT_HALT);

                endpointObj++;
                tempendobj = (uint32_t)DRV_USBHSV1_DEVICE_ENDPOINT_STATE_STALLED | (uint32_t)endpointObj->endpointState;
                endpointObj->endpointState = (DRV_USBHSV1_DEVICE_ENDPOINT_STATE)tempendobj;

                F_DRV_USBHSV1_DEVICE_IRPQueueFlush(endpointObj, USB_DEVICE_IRP_STATUS_ABORTED_ENDPOINT_HALT);
            }
            else
            {
                /* Stalling a non zero endpoint object */
                tempendobj = (uint32_t)DRV_USBHSV1_DEVICE_ENDPOINT_STATE_STALLED | (uint32_t)endpointObj->endpointState;
                endpointObj->endpointState = (DRV_USBHSV1_DEVICE_ENDPOINT_STATE)tempendobj;

                F_DRV_USBHSV1_DEVICE_IRPQueueFlush(endpointObj, USB_DEVICE_IRP_STATUS_ABORTED_ENDPOINT_HALT);
            }
            
            if(false == hDriver->isInInterruptContext)
            {
                if(true == interruptWasEnabled)
                {
                    /* IF the interrupt was enabled when entering the routine
                     * re-enable it now */
                    SYS_INT_SourceEnable(hDriver->interruptSource);

                    /* Unlock the mutex */
                    (void) OSAL_MUTEX_Unlock((OSAL_MUTEX_HANDLE_TYPE *)&hDriver->mutexID);
                }
            }
        }
    }

    return (retVal);
}/* end of DRV_USBHSV1_DEVICE_EndpointStall() */

// *****************************************************************************

/* Function:
      USB_ERROR DRV_USBHSV1_DEVICE_EndpointStallClear
      (
        DRV_HANDLE client,
        USB_ENDPOINT endpointAndDirection
      )

  Summary:
    Dynamic implementation of DRV_USBHSV1_DEVICE_EndpointStallClear client
    interface function.

  Description:
    This is the dynamic implementation of
    DRV_USBHSV1_DEVICE_EndpointStallClear client interface function for
    USB device.
    Function clears the STALL state of the specified endpoint and resets the
    data toggle value.

  Remarks:
    See drv_usbhsv1.h for usage information.
 */

USB_ERROR DRV_USBHSV1_DEVICE_EndpointStallClear
(
    DRV_HANDLE handle,
    USB_ENDPOINT endpointAndDirection
)

{

    usbhs_registers_t * usbID;                  /* USB instance pointer */
    DRV_USBHSV1_OBJ * hDriver;                  /* USB driver object pointer */
    uint8_t endpoint;                           /* Endpoint Number */
    bool interruptWasEnabled = false;           /* To track interrupt state */
    USB_ERROR retVal = USB_ERROR_NONE;          /* Return value */
    uint32_t tempendobj;

    /* Endpoint object pointer */
    DRV_USBHSV1_DEVICE_ENDPOINT_OBJ * endpointObj;

    endpoint = endpointAndDirection & 0xFU;

    if(endpoint >= DRV_USBHSV1_ENDPOINTS_NUMBER)
    {
        /* Endpoint number is invalid, return with appropriate error message */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Unsupported endpoint in DRV_USBHSV1_DEVICE_EndpointStallClear().");

        retVal = USB_ERROR_DEVICE_ENDPOINT_INVALID;
    }
    else if(DRV_HANDLE_INVALID == handle)
    {
        /* The handle is invalid, return with appropriate error message */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Driver Handle is invalid in DRV_USBHSV1_DEVICE_EndpointStallClear().");

        retVal = USB_ERROR_PARAMETER_INVALID;
    }
    else
    {
        /* Handle and Endpoint formation are valid, clear the Stall */

        hDriver = (DRV_USBHSV1_OBJ *) handle;
        usbID = hDriver->usbID;

        /* Get the endpoint object */
        endpointObj = hDriver->deviceEndpointObj[endpoint];

        /* Clear the stall request for the endpoint */
        usbID->USBHS_DEVEPTIDR[endpoint] = USBHS_DEVEPTIDR_STALLRQC_Msk;

        usbID->USBHS_DEVEPTIER[endpoint] = USBHS_HSTPIPIER_RSTDTS_Msk;

        if(false == hDriver->isInInterruptContext)
        {
            if(OSAL_MUTEX_Lock((OSAL_MUTEX_HANDLE_TYPE *)&hDriver->mutexID, OSAL_WAIT_FOREVER) == OSAL_RESULT_TRUE)
            {
                /* Disable  the USB Interrupt as this is not called inside ISR */
                interruptWasEnabled = SYS_INT_SourceDisable(hDriver->interruptSource);                
            }
            else
            {
                /* There was an error in getting the mutex */
                SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Mutex lock failed in DRV_USBHSV1_DEVICE_EndpointStallClear()");
                retVal = USB_ERROR_OSAL_FUNCTION;
            }
        }
        if(retVal == USB_ERROR_NONE)
        {
            if(endpoint == 0U)
            {
                /* Update the endpoint object with stall Clear for endpoint 0 */
                tempendobj = ~((uint32_t)DRV_USBHSV1_DEVICE_ENDPOINT_STATE_STALLED) & (uint32_t)endpointObj->endpointState;
                endpointObj->endpointState = (DRV_USBHSV1_DEVICE_ENDPOINT_STATE)tempendobj;

                F_DRV_USBHSV1_DEVICE_IRPQueueFlush(endpointObj, USB_DEVICE_IRP_STATUS_TERMINATED_BY_HOST);

                endpointObj++;

                tempendobj = ~((uint32_t)DRV_USBHSV1_DEVICE_ENDPOINT_STATE_STALLED) & (uint32_t)endpointObj->endpointState;
                endpointObj->endpointState = (DRV_USBHSV1_DEVICE_ENDPOINT_STATE)tempendobj;

                F_DRV_USBHSV1_DEVICE_IRPQueueFlush(endpointObj, USB_DEVICE_IRP_STATUS_TERMINATED_BY_HOST);

            }
            else
            {

                /* Update the objects with stall Clear for non-zero endpoint */
                tempendobj = ~((uint32_t)DRV_USBHSV1_DEVICE_ENDPOINT_STATE_STALLED) & (uint32_t)endpointObj->endpointState;
                endpointObj->endpointState = (DRV_USBHSV1_DEVICE_ENDPOINT_STATE)tempendobj;

                F_DRV_USBHSV1_DEVICE_IRPQueueFlush(endpointObj, USB_DEVICE_IRP_STATUS_TERMINATED_BY_HOST);
            }

            if(false == hDriver->isInInterruptContext)
            {
                if(true == interruptWasEnabled)
                {
                    /* IF the interrupt was enabled when entering the routine
                     * re-enable it now */
                    SYS_INT_SourceEnable(hDriver->interruptSource);

                    /* Unlock the mutex */
                    (void) OSAL_MUTEX_Unlock((OSAL_MUTEX_HANDLE_TYPE *)&hDriver->mutexID);
                }
            }
        }
    }

    return (retVal);
}/* end of DRV_USBHSV1_DEVICE_EndpointStallClear() */


/* MISRAC 2012 deviation block end */
// *****************************************************************************

/* Function:
    bool DRV_USBHSV1_DEVICE_EndpointIsStalled(DRV_HANDLE client,
                                        USB_ENDPOINT endpointAndDirection)

  Summary:
    Dynamic implementation of DRV_USBHSV1_DEVICE_EndpointIsStalled client
    interface function.

  Description:
    This is the dynamic implementation of
    DRV_USBHSV1_DEVICE_EndpointIsStalled client interface function for
    USB device.
    Function returns the state of specified endpoint(true\false) signifying
    whether the endpoint is STALLed or not.

  Remarks:
    See drv_usbhsv1.h for usage information.
 */

bool DRV_USBHSV1_DEVICE_EndpointIsStalled
(
    DRV_HANDLE handle,
    USB_ENDPOINT endpointAndDirection
)

{
    /* Return the state of the endpoint */

    DRV_USBHSV1_OBJ * hDriver;                  /* USB driver object pointer */
    uint8_t endpoint;                           /* Endpoint Number */
    bool retVal = true;                         /* Return value */

    /* Endpoint object pointer */
    DRV_USBHSV1_DEVICE_ENDPOINT_OBJ * endpointObj;

    if(DRV_HANDLE_INVALID == handle)
    {
        /* The handle is invalid, return with appropriate error message */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Driver Handle is invalid in DRV_USBHSV1_DEVICE_EndpointIsStalled().");

        retVal = false;
    }
    else
    {
        endpoint = endpointAndDirection & 0xFU;
        hDriver = (DRV_USBHSV1_OBJ *) handle;

        endpointObj = hDriver->deviceEndpointObj[endpoint];

        if(((uint32_t)endpointObj->endpointState & (uint32_t)DRV_USBHSV1_DEVICE_ENDPOINT_STATE_STALLED) == 0U)
        {
            retVal = false;
        }
        else
        {
            /* return true */
        }
    }

    return (retVal);

}/* end of DRV_USBHSV1_DEVICE_EndpointIsStalled() */

// *****************************************************************************

/* Function:
    USB_ERROR DRV_USBHSV1_DEVICE_IRPSubmit
    (
        DRV_HANDLE handle,
        USB_ENDPOINT endpointAndDirection,
        USB_DEVICE_IRP * inputIRP
    )

  Summary:
    Dynamic implementation of DRV_USBHSV1_DEVICE_IRPSubmit client interface
    function.

  Description:
    This is the dynamic implementation of DRV_USBHSV1_DEVICE_IRPSubmit
    client interface function for USB device.
    Function checks the validity of the input arguments and on success adds the
    IRP to endpoint object queue linked list.

  Remarks:
    See drv_usbhsv1.h for usage information.
 */
USB_ERROR DRV_USBHSV1_DEVICE_IRPSubmit
(
    DRV_HANDLE handle,
    USB_ENDPOINT endpointAndDirection,
    USB_DEVICE_IRP * inputIRP
)
{

    usbhs_registers_t * usbID;                  /* USB instance pointer */
    DRV_USBHSV1_OBJ * hDriver;                  /* USB driver object pointer */
    USB_DEVICE_IRP_LOCAL * irp;                 /* Pointer to irp data structure */
    uint8_t direction;                      /* Endpoint Direction */
    uint8_t endpoint;                       /* Endpoint Number */
    uint16_t count;                         /* Loop Counter */
    uint8_t * ptr;                          /* pointer variable for local use */
    uint8_t * data;                         /* pointer to irp data array */
    uint16_t byteCount = 0;                 /* To hold received byte count */
    bool interruptWasEnabled = false;       /* To track interrupt state */
    USB_ERROR retVal = USB_ERROR_NONE;      /* Return value */

    /* Direction of Endpoint 0 Data Stage */
    uint16_t endpoint0DataStageDirection;

    /* Size of Endpoint 0 Data Stage */
    uint16_t endpoint0DataStageSize;

    /* Endpoint object pointer */
    DRV_USBHSV1_DEVICE_ENDPOINT_OBJ * endpointObj; 
   

    /* Get the endpoint number and direction */
    endpoint = endpointAndDirection & 0xFU;
    direction = (uint8_t)((endpointAndDirection & 0x80U) != 0U);
    irp = (USB_DEVICE_IRP_LOCAL *) inputIRP;

    /* Check for a valid client */
    if(DRV_HANDLE_INVALID == handle)
    {
        /* The handle is invalid, return with appropriate error message */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Invalid handle in DRV_USBHSV1_DEVICE_IRPSubmit().");

        retVal = USB_ERROR_PARAMETER_INVALID;
    }
    else if(irp->status > USB_DEVICE_IRP_STATUS_SETUP)
    {
        /* This means that the IRP is in use */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Device IRP is already in use in DRV_USBHSV1_DEVICE_IRPSubmit().");

        retVal = USB_ERROR_DEVICE_IRP_IN_USE;
    }
    else if(endpoint >= DRV_USBHSV1_ENDPOINTS_NUMBER)
    {
        /* Endpoint number is invalid, return with appropriate error message */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Endpoint is not provisioned for in DRV_USBHSV1_DEVICE_IRPSubmit().");

        retVal = USB_ERROR_DEVICE_ENDPOINT_INVALID;
    }
    else
    {
        /* Get the driver object, the module ID and the endpoint and direction
         * specific BDT entry and the endpoint object. */

        hDriver = (DRV_USBHSV1_OBJ *) handle;
        usbID = hDriver->usbID;
        endpointObj = hDriver->deviceEndpointObj[endpoint];

        if(endpoint == 0U)
        {
            endpointObj += direction;
        }

        if(((uint32_t)endpointObj->endpointState & (uint32_t)DRV_USBHSV1_DEVICE_ENDPOINT_STATE_ENABLED) == 0U)
        {
            /* This means the endpoint is not enabled */
            retVal = USB_ERROR_ENDPOINT_NOT_CONFIGURED;
        }
        else
        {
            /* Check the size of the IRP. If the endpoint receives data from
             * the host, then IRP size must be multiple of maxPacketSize. If
             * the send ZLP flag is set, then size must be multiple of
             * endpoint size. */

            if((irp->size % endpointObj->maxPacketSize) == 0U)
            {
                /* The IRP size is either 0 or a exact multiple of maxPacketSize */

                if((uint8_t)USB_DATA_DIRECTION_DEVICE_TO_HOST == direction)
                {
                    /* If the IRP size is an exact multiple of endpoint size and
                     * size is not 0 and if data complete flag is set,
                     * then we must send a ZLP */
                    if(((irp->flags & USB_DEVICE_IRP_FLAG_DATA_COMPLETE) == USB_DEVICE_IRP_FLAG_DATA_COMPLETE) && (irp->size != 0U))
                    {
                        /* This means a ZLP should be sent after the data is sent */                       
                        irp->flags |= (uint32_t)M_USB_DEVICE_IRP_FLAG_SEND_ZLP;
                    }
                }
            }
            else
            {
                /* Not exact multiple of maxPacketSize */
                if((uint8_t)USB_DATA_DIRECTION_HOST_TO_DEVICE == direction)
                {
                    /* For receive IRP it needs to exact multiple of maxPacketSize.
                     * Hence this is an error condition. */
                    retVal = USB_ERROR_PARAMETER_INVALID;
                }
            }

            /* Now we check if the interrupt context is active. If so the we dont need
             * to get a mutex or disable interrupts.  If this were being done in non
             * interrupt context, we, then we would disable the interrupt. In which case
             * we would get the mutex and then disable the interrupt */

            if(false == hDriver->isInInterruptContext)
            {
                if(OSAL_MUTEX_Lock((OSAL_MUTEX_HANDLE_TYPE *)&hDriver->mutexID, OSAL_WAIT_FOREVER) == OSAL_RESULT_TRUE)
                {
                    /* Disable  the USB Interrupt as this is not called inside ISR */
                    interruptWasEnabled = SYS_INT_SourceDisable(hDriver->interruptSource);                
                }
                else
                {
                    /* There was an error in getting the mutex */
                    SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Mutex lock failed in DRV_USBHSV1_DEVICE_IRPSubmit()");
                    retVal = USB_ERROR_OSAL_FUNCTION;
                }
            }
            if(retVal == USB_ERROR_NONE)
            {
        
                irp->next = NULL;

                /* Mark the IRP status as pending */
                irp->status = USB_DEVICE_IRP_STATUS_PENDING;

                /* If the data is moving from device to host then pending bytes is data
                 * remaining to be sent to the host. If the data is moving from host to
                 * device, nPendingBytes tracks the amount of data received so far */

                if((uint8_t)USB_DATA_DIRECTION_DEVICE_TO_HOST == direction)
                {
                    irp->nPendingBytes = irp->size;
                }
                else
                {
                    irp->nPendingBytes = 0;
                }

                /* Get the last object in the endpoint object IRP Queue */
                if(endpointObj->irpQueue == NULL)
                {
                    /* Queue is empty */
                    endpointObj->irpQueue = irp;
                    irp->previous = NULL;

                    /* Because this is the first IRP in the queue then we we must arm the
                     * endpoint entry in the BDT. */

                    irp->status = USB_DEVICE_IRP_STATUS_IN_PROGRESS;

                    if(endpoint == 0U)
                    {
                        if(direction == (uint8_t)USB_DATA_DIRECTION_HOST_TO_DEVICE)
                        {
                            switch(hDriver->endpoint0State)
                            {
                                case DRV_USBHSV1_DEVICE_EP0_STATE_EXPECTING_SETUP_FROM_HOST:

                                    /* This is the default initialization value of Endpoint
                                     * 0.  In this state EPO is waiting for the setup packet
                                     * from the host. The IRP is already added to the queue.
                                     * When the host send the Setup packet, this IRP will be
                                     * processed in the interrupt. This means we dont have
                                     * to do anything in this state. */
                                    break;

                                case DRV_USBHSV1_DEVICE_EP0_STATE_WAITING_FOR_SETUP_IRP_FROM_CLIENT:
                                    /* In this state, the driver has received the Setup
                                     * packet from the host, but was waiting for an IRP from
                                     * the client. The driver now has the IRP. We can unload
                                     * the setup packet into the IRP */

                                    /* Get 8-bit access to endpoint 0 FIFO from USB RAM address
                                     * and copy the data into the IRP data buffer */

                                    ptr = (uint8_t *) & ((volatile uint8_t (*)[0x8000])USBHSV1_RAM_ADDR)[0];

                                    data = (uint8_t *)irp->data;

                                    SCB_InvalidateDCache_by_Addr((uint32_t *) ptr, 8);

                                    for(count = 0; count < 8U; count++)
                                    {
                                        *((uint8_t *)(data + count)) = *ptr++;
                                    }

                                    irp->nPendingBytes += count;

                                    /* Clear the Setup Interrupt flag and also re-enable the
                                     * setup interrupt. */

                                    usbID->USBHS_DEVEPTICR[0] = USBHS_DEVEPTICR_RXSTPIC_Msk;
                                    usbID->USBHS_DEVEPTIER[0] = USBHS_DEVEPTIER_RXSTPES_Msk;

                                    /* Analyze the setup packet. We need to check if the
                                     * control transfer contains a data stage and if so,
                                     * what is its direction. */

                                    endpoint0DataStageSize = *((unsigned short int *) (data + 6));
                                    endpoint0DataStageDirection = (uint16_t)((data[0] & 0x80U) != 0U);

                                    if(endpoint0DataStageSize == 0U)
                                    {
                                        /* This means there is no data stage. We wait for
                                         * the client to submit the status IRP. */
                                        hDriver->endpoint0State = DRV_USBHSV1_DEVICE_EP0_STATE_WAITING_FOR_TX_STATUS_IRP_FROM_CLIENT;
                                    }
                                    else
                                    {
                                        /* This means there is a data stage. Analyze the
                                         * direction. */

                                        if(endpoint0DataStageDirection == (uint16_t)USB_DATA_DIRECTION_DEVICE_TO_HOST)
                                        {
                                            /* If data is moving from device to host, then
                                             * we wait for the client to submit an transmit
                                             * IRP */

                                            hDriver->endpoint0State = DRV_USBHSV1_DEVICE_EP0_STATE_WAITING_FOR_TX_DATA_IRP_FROM_CLIENT;
                                        }
                                        else
                                        {
                                            /* Data is moving from host to device. We wait
                                             * for the host to send the data. */
                                            hDriver->endpoint0State = DRV_USBHSV1_DEVICE_EP0_STATE_EXPECTING_RX_DATA_STAGE_FROM_HOST;
                                        }
                                    }

                                    /* Update the IRP queue so that the client can submit an
                                     * IRP in the IRP callback. */
                                    endpointObj->irpQueue = irp->next;

                                    irp->status = USB_DEVICE_IRP_STATUS_COMPLETED;

                                    /* IRP callback */
                                    if(irp->callback != NULL)
                                    {
                                        irp->callback((USB_DEVICE_IRP *)irp);
                                    }

                                    break;

                                case DRV_USBHSV1_DEVICE_EP0_STATE_EXPECTING_RX_DATA_STAGE_FROM_HOST:
                                case DRV_USBHSV1_DEVICE_EP0_STATE_WAITING_FOR_RX_STATUS_COMPLETE:

                                    /* In both of these states, an IRP has been submitted,
                                     * and the driver is now waiting for data from the host.
                                     * When the data arrives, the IRPs will be processed in
                                     * the interrupts. */

                                    break;

                                case DRV_USBHSV1_DEVICE_EP0_STATE_WAITING_FOR_RX_DATA_IRP_FROM_CLIENT:

                                    /* In this state, the host sent a data stage packet, an
                                        * interrupt occurred but there was no RX data stage
                                        * IRP. The RX IRP is now being submitted. We should
                                        * unload the fifo. */

                                    byteCount = (uint16_t)((usbID->USBHS_DEVEPTISR[0] & USBHS_DEVEPTISR_BYCT_Msk) >> USBHS_DEVEPTISR_BYCT_Pos);

                                    data = (uint8_t *) irp->data;

                                    /* Get 8-bit access to endpoint 0 FIFO from USB RAM address */
                                    ptr = (uint8_t *) & ((volatile uint8_t (*)[0x8000])USBHSV1_RAM_ADDR)[0];

                                    data = (uint8_t *)&data[irp->nPendingBytes];

                                    if((irp->nPendingBytes + byteCount) > irp->size)
                                    {
                                        /* This is not acceptable as it may corrupt the ram location */
                                        byteCount = (uint16_t)(irp->size - irp->nPendingBytes);
                                        (void) byteCount;
                                    }
                                    else
                                    {

                                        SCB_InvalidateDCache_by_Addr((uint32_t *) ptr, (int32_t)byteCount);

                                        for(count = 0; count < byteCount; count++)
                                        {
                                            *((uint8_t *)(data + count)) = *ptr++;
                                        }

                                        /* Update the pending byte count */
                                        irp->nPendingBytes += byteCount;

                                        if(irp->nPendingBytes >= irp->size)
                                        {
                                            /* This means we have received all the data that
                                             * we were supposed to receive */
                                            irp->status = USB_DEVICE_IRP_STATUS_COMPLETED;

                                            /* Change endpoint state to waiting to the
                                             * status stage */
                                            hDriver->endpoint0State = DRV_USBHSV1_DEVICE_EP0_STATE_WAITING_FOR_TX_STATUS_COMPLETE;

                                            /* Clear and re-enable the interrupt */
                                            usbID->USBHS_DEVEPTICR[0] = USBHS_DEVEPTICR_RXOUTIC_Msk;

                                            usbID->USBHS_DEVEPTIER[0] = USBHS_DEVEPTIER_RXOUTES_Msk;

                                            /* Update the queue, update irp-size to indicate
                                             * how much data was received from the host. */
                                            irp->size = irp->nPendingBytes;

                                            endpointObj->irpQueue = irp->next;

                                            if(irp->callback != NULL)
                                            {
                                                irp->callback((USB_DEVICE_IRP *)irp);
                                            }
                                        }
                                        else
                                        {
                                            //Chk state alone is different - others same as top.
                                            if(byteCount < endpointObj->maxPacketSize)
                                            {
                                                /* This means we received a short packet. We
                                                 * should end the transfer. */
                                                irp->status = USB_DEVICE_IRP_STATUS_COMPLETED_SHORT;

                                                /* The data stage is complete. We now wait
                                                 * for the status stage. */
                                                hDriver->endpoint0State = DRV_USBHSV1_DEVICE_EP0_STATE_WAITING_FOR_TX_STATUS_COMPLETE;

                                                /* Clear and enable the interrupt. */
                                                usbID->USBHS_DEVEPTICR[0] = USBHS_DEVEPTICR_RXOUTIC_Msk;

                                                usbID->USBHS_DEVEPTIER[0] = USBHS_DEVEPTIER_RXOUTES_Msk;

                                                irp->size = irp->nPendingBytes;

                                                endpointObj->irpQueue = irp->next;

                                                if(irp->callback != NULL)
                                                {
                                                    irp->callback((USB_DEVICE_IRP *)irp);
                                                }
                                            }
                                            else
                                            {
                                                usbID->USBHS_DEVEPTICR[0] = USBHS_DEVEPTICR_RXOUTIC_Msk;

                                                usbID->USBHS_DEVEPTIER[0] = USBHS_DEVEPTIER_RXOUTES_Msk;
                                            }

                                        }
                                    }
                                    break;

                                case DRV_USBHSV1_DEVICE_EP0_STATE_WAITING_FOR_RX_STATUS_IRP_FROM_CLIENT:

                                    /* This means the host has already sent an RX status
                                     * stage but there was not IRP to receive this. We have
                                     * the IRP now. We change the EP0 state to waiting for
                                     * the next setup from the host. */

                                    hDriver->endpoint0State = DRV_USBHSV1_DEVICE_EP0_STATE_EXPECTING_SETUP_FROM_HOST;

                                    irp->status = USB_DEVICE_IRP_STATUS_COMPLETED;

                                    usbID->USBHS_DEVEPTICR[0] = USBHS_DEVEPTICR_RXOUTIC_Msk;

                                    usbID->USBHS_DEVEPTIER[0] = USBHS_DEVEPTIER_RXOUTES_Msk;

                                    endpointObj->irpQueue = irp->next;

                                    if(irp->callback != NULL)
                                    {
                                        irp->callback((USB_DEVICE_IRP *)irp);
                                    }

                                    break;

                                default:
                                    /* Do Nothing */
                                    break;
                            }
                        }
                        else
                        {
                            /* This means data is moving device to host. */
                            switch(hDriver->endpoint0State)
                            {
                                case DRV_USBHSV1_DEVICE_EP0_STATE_WAITING_FOR_TX_DATA_IRP_FROM_CLIENT:

                                    /* Driver is waiting for an IRP from the client and has
                                     * received it. Determine the transaction size. */

                                    if(irp->nPendingBytes < endpointObj->maxPacketSize)
                                    {
                                        /* This is the last transaction in the transfer. */
                                        byteCount = (uint16_t)irp->nPendingBytes;
                                    }
                                    else
                                    {
                                        /* This is first or a continuing transaction in the
                                         * transfer and the transaction size must be
                                         * maxPacketSize */

                                        byteCount = endpointObj->maxPacketSize;
                                    }

                                    /* Copy data to the FIFO */
                                    ptr = (uint8_t *) & ((volatile uint8_t (*)[0x8000])USBHSV1_RAM_ADDR)[0];

                                    data = (uint8_t *)irp->data;

                                    for(count = 0; count < byteCount; count++)
                                    {
                                        *ptr++ = *((uint8_t *)(data + count));
                                    }

                                    ptr = (uint8_t *) & ((volatile uint8_t (*)[0x8000])USBHSV1_RAM_ADDR)[0];

                                    SCB_CleanDCache_by_Addr((uint32_t *) ptr, (int32_t)byteCount);

                                    irp->nPendingBytes -= byteCount;

                                    hDriver->endpoint0State = DRV_USBHSV1_DEVICE_EP0_STATE_TX_DATA_STAGE_IN_PROGRESS;

                                    /* Clear the flag and enable the interrupt. The rest of
                                     * the IRP should really get processed in the ISR.
                                     * */
                                    usbID->USBHS_DEVEPTICR[0] = USBHS_DEVEPTICR_TXINIC_Msk;

                                    usbID->USBHS_DEVEPTIDR[0] = USBHS_DEVEPTIDR_FIFOCONC_Msk;

                                    usbID->USBHS_DEVEPTIER[0] = USBHS_DEVEPTIER_TXINES_Msk;

                                    break;

                                case DRV_USBHSV1_DEVICE_EP0_STATE_WAITING_FOR_TX_STATUS_IRP_FROM_CLIENT:

                                    /* This means the driver is expecting the client to
                                     * submit a TX status stage IRP. */
                                    hDriver->endpoint0State = DRV_USBHSV1_DEVICE_EP0_STATE_WAITING_FOR_TX_STATUS_COMPLETE;

                                    usbID->USBHS_DEVEPTICR[0] = USBHS_DEVEPTICR_TXINIC_Msk;

                                    usbID->USBHS_DEVEPTIER[0] = USBHS_DEVEPTIER_TXINES_Msk;

                                    break;

                                default:
                                    /* Do Nothing */
                                    break;

                            }
                        }
                    }
                    else
                    {
                        /* Non zero endpoint irp */

                        if(direction == (uint8_t)USB_DATA_DIRECTION_DEVICE_TO_HOST)
                        {
                            usbID->USBHS_DEVEPTICR[endpoint] = USBHS_DEVEPTICR_TXINIC_Msk;

                            /* Sending from Device to Host */
                            if(irp->nPendingBytes < endpointObj->maxPacketSize)
                            {
                                byteCount = (uint16_t)irp->nPendingBytes;
                            }
                            else
                            {
                                byteCount = endpointObj->maxPacketSize;
                            }

                            /* Copy data to the FIFO */
                            ptr = (uint8_t *) & ((volatile uint8_t (*)[0x8000])USBHSV1_RAM_ADDR)[endpoint];

                            data = (uint8_t *)irp->data;

                            for(count = 0; count < byteCount; count++)
                            {
                                *ptr++ = *((uint8_t *)(data + count));
                            }

                            ptr = (uint8_t *) & ((volatile uint8_t (*)[0x8000])USBHSV1_RAM_ADDR)[endpoint];

                            SCB_CleanDCache_by_Addr((uint32_t *) ptr, (int32_t)byteCount);

                            irp->nPendingBytes -= byteCount;

                            /* Enable the TXINI interrupt and clear the interrupt flag
                             * to initiate a Tx the packet */

                            usbID->USBHS_DEVEPTIDR[endpoint] = USBHS_DEVEPTIDR_FIFOCONC_Msk;

                            usbID->USBHS_DEVEPTIER[endpoint] = USBHS_DEVEPTIER_TXINES_Msk;

                            /* The rest of the IRP processing takes place in ISR */
                        }
                        else
                        {
                            /* direction is Host to Device */
                            if(USBHS_DEVEPTISR_RXOUTI_Msk == (USBHS_DEVEPTISR_RXOUTI_Msk & usbID->USBHS_DEVEPTISR[endpoint]))
                            {
                                /* Data is already available in the FIFO */
                                byteCount = (uint16_t)( (usbID->USBHS_DEVEPTISR[endpoint] & USBHS_DEVEPTISR_BYCT_Msk) >> USBHS_DEVEPTISR_BYCT_Pos);

                                /* Get FIFO Address */
                                ptr = (uint8_t *) & ((volatile uint8_t (*)[0x8000])USBHSV1_RAM_ADDR)[endpoint];

                                if((irp->nPendingBytes + byteCount) > irp->size)
                                {
                                    /* This is not acceptable as it may corrupt the ram location */
                                    byteCount = (uint16_t)(irp->size - irp->nPendingBytes);
                                }

                                data = (uint8_t *)irp->data;

                                SCB_InvalidateDCache_by_Addr((uint32_t *) ptr, (int32_t)byteCount);

                                for(count = 0; count < byteCount; count++)
                                {
                                    *((uint8_t *)(data + count)) = *ptr++;
                                }

                                /* Update the pending byte count */
                                irp->nPendingBytes += byteCount;

                                if((irp->nPendingBytes >= irp->size) || (byteCount < endpointObj->maxPacketSize))
                                {
                                    if(byteCount < endpointObj->maxPacketSize)
                                    {
                                        /* This means we have received a short packet */
                                        irp->status = USB_DEVICE_IRP_STATUS_COMPLETED_SHORT;
                                    }
                                    else
                                    {
                                        /* This means we have received all the data that
                                        * we were supposed to receive */
                                        irp->status = USB_DEVICE_IRP_STATUS_COMPLETED;
                                    }
                                    /* Update the queue, update irp-size to indicate
                                        * how much data was received from the host. */
                                    irp->size = irp->nPendingBytes;

                                    endpointObj->irpQueue = irp->next;

                                    if(irp->callback != NULL)
                                    {
                                        irp->callback((USB_DEVICE_IRP *)irp);
                                    }
                                }
                                /* Clear and re-enable the interrupt */
                                usbID->USBHS_DEVEPTICR[endpoint] = USBHS_DEVEPTICR_RXOUTIC_Msk;

                                usbID->USBHS_DEVEPTIER[endpoint] = USBHS_DEVEPTIER_RXOUTES_Msk;

                                usbID->USBHS_DEVEPTIDR[endpoint] = USBHS_DEVEPTIDR_FIFOCONC_Msk;
                            }
                            else
                            {
                                /* Host has not sent any data and IRP is already added
                                 * to the queue. IRP will be processed in the ISR */
                            }
                        }/* End of non zero RX IRP submit */
                    }/* End of non zero IRP submit */
                }
                else
                {
                    /* This means we should surf the linked list to get to the last entry . */

                    USB_DEVICE_IRP_LOCAL * iterator;
                    iterator = endpointObj->irpQueue;
                    while (iterator->next != NULL)
                    {
                        iterator = iterator->next;
                    }
                    iterator->next = irp;
                    irp->previous = iterator;
                    irp->status = USB_DEVICE_IRP_STATUS_PENDING;
                }

                if(false == hDriver->isInInterruptContext)
                {
                    if(true == interruptWasEnabled)
                    {
                        /* IF the interrupt was enabled when entering the routine
                         * re-enable it now */
                        SYS_INT_SourceEnable(hDriver->interruptSource);

                        /* Unlock the mutex */
                        (void) OSAL_MUTEX_Unlock((OSAL_MUTEX_HANDLE_TYPE *)&hDriver->mutexID);
                    }
                }
            }
        }
    }

    return (retVal);

}/* end of DRV_USBHSV1_DEVICE_IRPSubmit() */

// *****************************************************************************

/* Function:
    USB_ERROR DRV_USBHSV1_DEVICE_IRPCancelAll
    (
        DRV_HANDLE handle,
        USB_ENDPOINT endpointAndDirection
    )

  Summary:
    Dynamic implementation of DRV_USBHSV1_DEVICE_IRPCancelAll client
    interface function.

  Description:
    This is the dynamic implementation of DRV_USBHSV1_DEVICE_IRPCancelAll
    client interface function for USB device.
    Function checks the validity of the input arguments and on success cancels
    all the IRPs on the specific endpoint object queue.

  Remarks:
    See drv_usbhsv1.h for usage information.
 */

USB_ERROR DRV_USBHSV1_DEVICE_IRPCancelAll
(
    DRV_HANDLE handle,
    USB_ENDPOINT endpointAndDirection
)

{

    DRV_USBHSV1_OBJ * hDriver;              /* USB driver object pointer */
    USB_ERROR retVal = USB_ERROR_NONE;      /* Return value */
    bool interruptWasEnabled = false;       /* To track interrupt state */
    uint8_t endpoint;                       /* Endpoint Number */

    /* Endpoint object pointer */
    DRV_USBHSV1_DEVICE_ENDPOINT_OBJ * endpointObj;


    /* Get the endpoint number and direction */
    endpoint = endpointAndDirection & 0xFU;

    if(DRV_HANDLE_INVALID == handle)
    {
        /* The handle is invalid, return with appropriate error message */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Driver Handle is invalid in DRV_USBHSV1_DEVICE_IRPCancelAll().");

        retVal = USB_ERROR_PARAMETER_INVALID;
    }
    else if(endpoint >= DRV_USBHSV1_ENDPOINTS_NUMBER)
    {
        /* Endpoint number is invalid, return with appropriate error message */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Unsupported endpoint in DRV_USBHSV1_DEVICE_IRPCancelAll().");

        retVal = USB_ERROR_DEVICE_ENDPOINT_INVALID;
    }
    else
    {

        hDriver = (DRV_USBHSV1_OBJ*) handle;

        /* Get the endpoint object */
        endpointObj = hDriver->deviceEndpointObj[endpoint];

        if(false == hDriver->isInInterruptContext)
        {
            if(OSAL_MUTEX_Lock((OSAL_MUTEX_HANDLE_TYPE *)&hDriver->mutexID, OSAL_WAIT_FOREVER) == OSAL_RESULT_TRUE)
            {
                /* Disable  the USB Interrupt as this is not called inside ISR */
                interruptWasEnabled = SYS_INT_SourceDisable(hDriver->interruptSource);                
            }
            else
            {
                /* There was an error in getting the mutex */
                SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Mutex lock failed in DRV_USBHSV1_DEVICE_IRPCancelAll()");
                retVal = USB_ERROR_OSAL_FUNCTION;
            }
        }
        if(retVal == USB_ERROR_NONE)
        {    

            /* Flush the endpoint */
            F_DRV_USBHSV1_DEVICE_IRPQueueFlush
            (
                endpointObj,
                USB_DEVICE_IRP_STATUS_ABORTED
            );
            
            if(false == hDriver->isInInterruptContext)
            {
                if(true == interruptWasEnabled)
                {
                    /* IF the interrupt was enabled when entering the routine
                     * re-enable it now */
                    SYS_INT_SourceEnable(hDriver->interruptSource);

                    /* Unlock the mutex */
                    (void) OSAL_MUTEX_Unlock((OSAL_MUTEX_HANDLE_TYPE *)&hDriver->mutexID);
                }
            }
        }
    }

    return (retVal);

}/* end of DRV_USBHSV1_DEVICE_IRPCancelAll() */

// *****************************************************************************

/* Function:
    USB_ERROR DRV_USBHSV1_DEVICE_IRPCancel
    (
        DRV_HANDLE client,
        USB_DEVICE_IRP * irp
    )

  Summary:
    Dynamic implementation of DRV_USBHSV1_DEVICE_IRPCancel client interface
    function.

  Description:
    This is the dynamic implementation of DRV_USBHSV1_DEVICE_IRPCancel
    client interface function for USB device.  Function checks the validity of
    the input arguments and on success cancels  the specific IRP.
    An IRP that was in the queue but that has been processed yet will be
    canceled successfully and the IRP callback function will be called from
    this function with USB_DEVICE_IRP_STATUS_ABORTED status. The application
    can release the data buffer memory used by the IRP when this callback
    occurs. If the IRP was in progress (a transaction in on the bus) when the
    cancel function was called, the IRP will be canceled only when an ongoing
    or the next transaction has completed. The IRP callback function will then
    be called in an interrupt context. The application should not release the
    related data buffer unless the IRP callback has occurred.

  Remarks:
    See drv_usbhsv1.h for usage information.
 */

USB_ERROR DRV_USBHSV1_DEVICE_IRPCancel
(
    DRV_HANDLE client,
    USB_DEVICE_IRP * irp
)

{

    DRV_USBHSV1_OBJ * hDriver;          /* USB driver object pointer */
    USB_DEVICE_IRP_LOCAL * irpToCancel;     /* Pointer to irp data structure */
    bool interruptWasEnabled = false;       /* To track interrupt state */
    USB_ERROR retVal = USB_ERROR_NONE;      /* Return value */


    irpToCancel = (USB_DEVICE_IRP_LOCAL *) irp;

    /* Check if the handle is valid */
    if(DRV_HANDLE_INVALID == client)
    {
        /* The handle is invalid, return with appropriate error message */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Driver Handle is invalid in DRV_USBHSV1_DEVICE_IRPCancel().");

        retVal = USB_ERROR_PARAMETER_INVALID;
    }
    else if(irpToCancel == NULL)
    {
        /* IRP is NULL, send appropriate error message */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: IRP is invalid in DRV_USBHSV1_DEVICE_IRPCancel().");

        retVal = USB_ERROR_PARAMETER_INVALID;
    }
    else
    {
        hDriver = ((DRV_USBHSV1_OBJ *) client);

        if(false == hDriver->isInInterruptContext)
        {
            if(OSAL_MUTEX_Lock((OSAL_MUTEX_HANDLE_TYPE *)&hDriver->mutexID, OSAL_WAIT_FOREVER) == OSAL_RESULT_TRUE)
            {
                /* Disable  the USB Interrupt as this is not called inside ISR */
                interruptWasEnabled = SYS_INT_SourceDisable(hDriver->interruptSource);                
            }
            else
            {
                /* There was an error in getting the mutex */
                SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Mutex lock failed in DRV_USBHSV1_DEVICE_IRPCancel()");
                retVal = USB_ERROR_OSAL_FUNCTION;
            }
        }
        
        if(retVal == USB_ERROR_NONE)
        {
            if(irpToCancel->status <= USB_DEVICE_IRP_STATUS_COMPLETED_SHORT)
            {
                /* This IRP has either completed or has been aborted.*/
                retVal = USB_ERROR_PARAMETER_INVALID;
            }
            else
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
                        irpToCancel->callback((USB_DEVICE_IRP *) irpToCancel);
                    }
                }
            }
            
            if(false == hDriver->isInInterruptContext)
            {
                if(true == interruptWasEnabled)
                {
                    /* IF the interrupt was enabled when entering the routine
                     * re-enable it now */
                    SYS_INT_SourceEnable(hDriver->interruptSource);

                    /* Unlock the mutex */
                    (void) OSAL_MUTEX_Unlock((OSAL_MUTEX_HANDLE_TYPE *)&hDriver->mutexID);
                }
            }
        }
    }

    return (retVal);

}/* End of DRV_USBHSV1_DEVICE_IRPCancel() */

/* MISRAC 2012 deviation block end */
// *****************************************************************************
/* Function:
      void F_DRV_USBHSV1_DEVICE_Tasks_ISR(DRV_USBHSV1_OBJ * hDriver)

  Summary:
    Dynamic implementation of F_DRV_USBHSV1_DEVICE_Tasks_ISR ISR handler
    function.

  Description:
    This is the dynamic implementation of F_DRV_USBHSV1_DEVICE_Tasks_ISR ISR
    handler function for USB device.
    Function will get called automatically due to USB interrupts in interrupt
    mode.
    In polling mode this function will be routinely called from USB driver
    DRV_USBHSV1_Tasks() function.
    This function performs necessary action based on the interrupt and clears
    the interrupt after that. The USB device layer callback is called with the
    interrupt event details, if callback function is registered.

  Remarks:
    This is a local function and should not be called directly by the
    application.
 */

void F_DRV_USBHSV1_DEVICE_Tasks_ISR(DRV_USBHSV1_OBJ * hDriver)
{
    DRV_USBHSV1_DEVICE_ENDPOINT_OBJ * endpointObjReceive;
    DRV_USBHSV1_DEVICE_ENDPOINT_OBJ * endpointObjTransmit;
    DRV_USBHSV1_DEVICE_ENDPOINT_OBJ * endpointObjNonZero;
    usbhs_registers_t * usbID;
    USB_DEVICE_IRP_LOCAL * irp;
    uint16_t endpoint0DataStageSize;
    uint8_t endpointIndex;
    unsigned int endpoint0DataStageDirection;
    uint8_t *ptr;
    uint16_t count;
    uint8_t * data;
    uint32_t offset;
    uint32_t ep0Status = 0;
    uint32_t ep0MaskStatus = 0;
    uint32_t byteCount = 0;
    uint32_t epNonZeroStatus = 0;
    uint32_t epNonZeroMaskStatus = 0;
    uint32_t tempendobj;

    if(!hDriver->isOpened)
    {
        /* We need a valid client */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Driver does not have a client in F_DRV_USBHSV1_DEVICE_Tasks_ISR().");
    }
    else if(hDriver->pEventCallBack == NULL)
    {
        /* We need a valid event handler */
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Driver needs a event handler in F_DRV_USBHSV1_DEVICE_Tasks_ISR().");
    }
    else
    {
        /* Do Nothing */
    }

    usbID = hDriver->usbID;

    /* Check for SOF Interrupt Enable and SOF Interrupt Flag */
    if((USBHS_DEVISR_SOF_Msk == (USBHS_DEVISR_SOF_Msk & usbID->USBHS_DEVISR)) && (USBHS_DEVIMR_SOFE_Msk == (USBHS_DEVIMR_SOFE_Msk & usbID->USBHS_DEVIMR)))
    {
        /* This means that there was a SOF. */
        usbID->USBHS_DEVICR = USBHS_DEVICR_SOFC_Msk;

        hDriver->pEventCallBack(hDriver->hClientArg, DRV_USBHSV1_EVENT_SOF_DETECT, NULL);

    }

    /* Check for MSOF Interrupt Enable and MSOF Interrupt Flag */
    if((USBHS_DEVISR_MSOF_Msk == (USBHS_DEVISR_MSOF_Msk & usbID->USBHS_DEVISR)) && (USBHS_DEVIMR_MSOFE_Msk == (USBHS_DEVIMR_MSOFE_Msk & usbID->USBHS_DEVIMR)))
    {
        /* Just acknowledge and Do nothing */
        usbID->USBHS_DEVICR = USBHS_DEVICR_MSOFC_Msk;

    }

    /* Check for Suspend Interrupt Enable and Suspend Interrupt Flag */
    if((USBHS_DEVISR_SUSP_Msk == (USBHS_DEVISR_SUSP_Msk & usbID->USBHS_DEVISR)) && (USBHS_DEVIMR_SUSPE_Msk == (USBHS_DEVIMR_SUSPE_Msk & usbID->USBHS_DEVIMR)))
    {
        /* This means that the bus was SUSPENDED. */
        hDriver->pEventCallBack(hDriver->hClientArg, DRV_USBHSV1_EVENT_IDLE_DETECT, NULL);

        /* Unfreeze USB clock */
        usbID->USBHS_CTRL &= ~USBHS_CTRL_FRZCLK_Msk;

         /* Wait to unfreeze clock */
        while(USBHS_SR_CLKUSABLE_Msk != (usbID->USBHS_SR & USBHS_SR_CLKUSABLE_Msk))
        {
            /* Do Nothing */
        }
        
        /* Acknowledge the suspend interrupt */
        usbID->USBHS_DEVICR = USBHS_DEVICR_SUSPC_Msk;
        
        /* Disable Suspend Interrupt */
        usbID->USBHS_DEVIDR = USBHS_DEVIDR_SUSPEC_Msk;

        /* Enable Wakeup Interrupt */
        usbID->USBHS_DEVIER = USBHS_DEVIER_WAKEUPES_Msk;

        /* Freeze USB clock */
        usbID->USBHS_CTRL |= USBHS_CTRL_FRZCLK_Msk;

    }

    /* Check for Wakeup Interrupt Enable and Wakeup Interrupt Flag */
    if((USBHS_DEVISR_WAKEUP_Msk == (USBHS_DEVISR_WAKEUP_Msk & usbID->USBHS_DEVISR)) && (USBHS_DEVIMR_WAKEUPE_Msk == (USBHS_DEVIMR_WAKEUPE_Msk & usbID->USBHS_DEVIMR)))
    {
        
        /* This means that the bus was Resumed. */
        hDriver->pEventCallBack(hDriver->hClientArg, DRV_USBHSV1_EVENT_RESUME_DETECT, NULL);

        /* Unfreeze USB clock */
        usbID->USBHS_CTRL &= ~USBHS_CTRL_FRZCLK_Msk;
        
        /* Wait to unfreeze clock */
        while(USBHS_SR_CLKUSABLE_Msk != (usbID->USBHS_SR & USBHS_SR_CLKUSABLE_Msk))
        {
            /* Do Nothing */
        }

        /* Acknowledge the Wakeup interrupt */
        usbID->USBHS_DEVICR = USBHS_DEVICR_WAKEUPC_Msk;

        /* Disable Wakeup Interrupt */
        usbID->USBHS_DEVIDR = USBHS_DEVIDR_WAKEUPEC_Msk;

        /* Enable Suspend Interrupt */
        usbID->USBHS_DEVIER = USBHS_DEVIER_SUSPES_Msk;

    }

    /* Check for End Of Reset Interrupt Enable and End Of Reset Interrupt Flag */
    if((USBHS_DEVISR_EORST_Msk == (USBHS_DEVISR_EORST_Msk & usbID->USBHS_DEVISR)) && (USBHS_DEVIMR_EORSTE_Msk == (USBHS_DEVIMR_EORSTE_Msk & usbID->USBHS_DEVIMR)))
    {
        /* Unfreeze USB clock */
        usbID->USBHS_CTRL &= ~USBHS_CTRL_FRZCLK_Msk;
        
        /* Wait to unfreeze clock */
        while(USBHS_SR_CLKUSABLE_Msk != (usbID->USBHS_SR & USBHS_SR_CLKUSABLE_Msk))
        {
            /* Do Nothing */
        }
        
        /* This means that RESET signaling was detected
         * on the bus. This means the packet that we should
         * get on the bus for EP0 should be a setup packet */

        hDriver->endpoint0State = DRV_USBHSV1_DEVICE_EP0_STATE_EXPECTING_SETUP_FROM_HOST;

        hDriver->deviceSpeed = gDrvUSBHSV1DeviceSpeedMap[(USBHS_SR_SPEED_Msk & usbID->USBHS_SR) >> USBHS_SR_SPEED_Pos];

        hDriver->pEventCallBack(hDriver->hClientArg, DRV_USBHSV1_EVENT_RESET_DETECT, NULL);

        /* Acknowledge the End of Resume interrupt */
        usbID->USBHS_DEVICR = USBHS_DEVICR_EORSTC_Msk;

        /* Acknowledge the Wakeup interrupt */
        usbID->USBHS_DEVICR = USBHS_DEVICR_WAKEUPC_Msk;

        /* Acknowledge the suspend interrupt */
        usbID->USBHS_DEVICR = USBHS_DEVICR_SUSPC_Msk;

        /* Enable Suspend Interrupt */
        usbID->USBHS_DEVIER = USBHS_DEVIER_SUSPES_Msk;

        /* Unfreeze USB clock */
        usbID->USBHS_CTRL &= ~USBHS_CTRL_FRZCLK_Msk;

    }

    if(USBHS_DEVISR_PEP_0_Msk == (USBHS_DEVISR_PEP_0_Msk & usbID->USBHS_DEVISR))
    {
        /* This means this is EP0 interrupt. Read the endpoint 0 status
         * register. */
        ep0Status = usbID->USBHS_DEVEPTISR[0] & USBHS_DEVEPTISR0_Msk;
        ep0MaskStatus = usbID->USBHS_DEVEPTIMR[0] & USBHS_DEVEPTIMR0_Msk;

        /* Get the pointer to the endpoint 0 object */
        endpointObjReceive = hDriver->deviceEndpointObj[0];
        endpointObjTransmit = endpointObjReceive + 1;

        if(USBHS_DEVEPTISR_STALLEDI_Msk == (ep0Status & USBHS_DEVEPTISR_STALLEDI_Msk))
        {
            /* This means the endpoint stall was sent. We can clear the
             * the stall condition on the endpoint */

            /* Clear the stall request for the endpoint */
            usbID->USBHS_DEVEPTIDR[0] = USBHS_DEVEPTIDR_STALLRQC_Msk;
            
            tempendobj = ~((uint32_t)DRV_USBHSV1_DEVICE_ENDPOINT_STATE_STALLED) & (uint32_t)endpointObjReceive->endpointState;
            endpointObjReceive->endpointState = (DRV_USBHSV1_DEVICE_ENDPOINT_STATE)tempendobj;
            tempendobj = ~((uint32_t)DRV_USBHSV1_DEVICE_ENDPOINT_STATE_STALLED) & (uint32_t)endpointObjTransmit->endpointState;
            endpointObjTransmit->endpointState = (DRV_USBHSV1_DEVICE_ENDPOINT_STATE)tempendobj;
        }

        if((USBHS_DEVEPTIMR_RXSTPE_Msk == (USBHS_DEVEPTIMR_RXSTPE_Msk & ep0MaskStatus)) && (USBHS_DEVEPTISR_RXSTPI_Msk == (USBHS_DEVEPTISR_RXSTPI_Msk & ep0Status)))
        {
            /* This means we have received a setup packet. Let's clear the
             * stall condition on the endpoint. */
            tempendobj = ~((uint32_t)DRV_USBHSV1_DEVICE_ENDPOINT_STATE_STALLED) & (uint32_t)endpointObjReceive->endpointState;
            endpointObjReceive->endpointState = (DRV_USBHSV1_DEVICE_ENDPOINT_STATE)tempendobj;
            tempendobj = ~((uint32_t)DRV_USBHSV1_DEVICE_ENDPOINT_STATE_STALLED) & (uint32_t)endpointObjTransmit->endpointState;
            endpointObjTransmit->endpointState = (DRV_USBHSV1_DEVICE_ENDPOINT_STATE)tempendobj;

            irp = endpointObjReceive->irpQueue;

            if(irp != NULL)
            {

                /* Get 8-bit access to endpoint 0 FIFO from USB RAM address */
                ptr = (uint8_t *) & ((volatile uint8_t (*)[0x8000])USBHSV1_RAM_ADDR)[0];

                data = (uint8_t *)irp->data;

                SCB_InvalidateDCache_by_Addr((uint32_t *) ptr, 8);

                for(count = 0; count < 8U; count++)
                {
                    *((uint8_t *)(data + count)) = *ptr++;
                }

                usbID->USBHS_DEVEPTICR[0] = USBHS_DEVEPTICR_RXSTPIC_Msk;

                endpoint0DataStageSize = *((unsigned short int *) (data + 6));
                endpoint0DataStageDirection = (uint32_t)((data[0] & 0x80U) != 0U);

                /* Indicate that this is a setup IRP */
                irp->status = USB_DEVICE_IRP_STATUS_SETUP;
                irp->size = 8;

                if(endpoint0DataStageSize == 0U)
                {
                    hDriver->endpoint0State = DRV_USBHSV1_DEVICE_EP0_STATE_WAITING_FOR_TX_STATUS_IRP_FROM_CLIENT;
                }
                else
                {
                    if(endpoint0DataStageDirection == (uint32_t)USB_DATA_DIRECTION_DEVICE_TO_HOST)
                    {
                        hDriver->endpoint0State = DRV_USBHSV1_DEVICE_EP0_STATE_WAITING_FOR_TX_DATA_IRP_FROM_CLIENT;
                    }
                    else
                    {
                        hDriver->endpoint0State = DRV_USBHSV1_DEVICE_EP0_STATE_EXPECTING_RX_DATA_STAGE_FROM_HOST;
                    }
                }

                endpointObjReceive->irpQueue = irp->next;

                if(irp->callback != NULL)
                {
                    irp->callback((USB_DEVICE_IRP *)irp);
                }

            }
            else
            {
                hDriver->endpoint0State = DRV_USBHSV1_DEVICE_EP0_STATE_WAITING_FOR_SETUP_IRP_FROM_CLIENT;

                usbID->USBHS_DEVEPTIDR[0] = USBHS_DEVEPTIDR_RXSTPEC_Msk;
            }
        }
        if((USBHS_DEVEPTIMR_TXINE_Msk == (USBHS_DEVEPTIMR_TXINE_Msk & ep0MaskStatus)) && (USBHS_DEVEPTISR_TXINI_Msk == (USBHS_DEVEPTISR_TXINI_Msk & ep0Status)))
        {
            irp = endpointObjTransmit->irpQueue;

            data = (uint8_t *) irp->data;

            if(hDriver->endpoint0State == DRV_USBHSV1_DEVICE_EP0_STATE_WAITING_FOR_TX_STATUS_COMPLETE)
            {

                irp->status = USB_DEVICE_IRP_STATUS_COMPLETED;

                hDriver->endpoint0State = DRV_USBHSV1_DEVICE_EP0_STATE_EXPECTING_SETUP_FROM_HOST;

                endpointObjTransmit->irpQueue = irp->next;

                irp->size = 0;

                if(irp->callback != NULL)
                {
                    irp->callback((USB_DEVICE_IRP *)irp);
                }

                usbID->USBHS_DEVEPTIDR[0] = USBHS_DEVEPTIDR_TXINEC_Msk;
            }
            else
            {
                if(irp->nPendingBytes == 0U)
                {
                    if((irp->flags & (uint32_t)M_USB_DEVICE_IRP_FLAG_SEND_ZLP) != 0U)
                    {
                        irp->flags &= ~((uint32_t)M_USB_DEVICE_IRP_FLAG_SEND_ZLP);

                        usbID->USBHS_DEVEPTICR[0] = USBHS_DEVEPTICR_TXINIC_Msk;

                        usbID->USBHS_DEVEPTIER[0] = USBHS_DEVEPTIER_TXINES_Msk;
                    }
                    else
                    {
                        if(((irp->flags & USB_DEVICE_IRP_FLAG_DATA_PENDING) == USB_DEVICE_IRP_FLAG_DATA_PENDING) && (irp->next != NULL))
                        {
                            irp->flags &= ~USB_DEVICE_IRP_FLAG_DATA_PENDING;

                            irp->status = USB_DEVICE_IRP_STATUS_COMPLETED;

                            irp = irp->next;

                            endpointObjTransmit->irpQueue = irp;

                            irp->status = USB_DEVICE_IRP_STATUS_IN_PROGRESS;

                            if(irp->nPendingBytes <= endpointObjTransmit->maxPacketSize)
                            {
                                byteCount = irp->nPendingBytes;
                            }
                            else
                            {
                                byteCount = endpointObjTransmit->maxPacketSize;
                            }

                            data = (uint8_t *) irp->data;

                            offset = irp->size - irp->nPendingBytes;

                            ptr = (uint8_t *) & ((volatile uint8_t (*)[0x8000])USBHSV1_RAM_ADDR)[0];

                            data = (uint8_t *)&data[offset];

                            for(count = 0; count < byteCount; count++)
                            {
                                *ptr++ = *((uint8_t *)(data + count));
                            }

                            ptr = (uint8_t *) & ((volatile uint8_t (*)[0x8000])USBHSV1_RAM_ADDR)[0];

                            SCB_CleanDCache_by_Addr((uint32_t *) ptr, (int32_t)byteCount);

                            irp->nPendingBytes -= byteCount;

                            usbID->USBHS_DEVEPTICR[0] = USBHS_DEVEPTICR_TXINIC_Msk;

                            usbID->USBHS_DEVEPTIER[0] = USBHS_DEVEPTIER_TXINES_Msk;
                        }
                        else
                        {
                            hDriver->endpoint0State = DRV_USBHSV1_DEVICE_EP0_STATE_WAITING_FOR_RX_STATUS_COMPLETE;

                            irp->status = USB_DEVICE_IRP_STATUS_COMPLETED;

                            endpointObjTransmit->irpQueue = irp->next;

                            if(irp->callback != NULL)
                            {
                                irp->callback((USB_DEVICE_IRP *)irp);
                            }

                            usbID->USBHS_DEVEPTIDR[0] = USBHS_DEVEPTIDR_TXINEC_Msk;

                        }
                    }
                }
                else
                {
                    if(irp->nPendingBytes <= endpointObjTransmit->maxPacketSize)
                    {
                        byteCount = irp->nPendingBytes;
                    }
                    else
                    {
                        byteCount = endpointObjTransmit->maxPacketSize;
                    }

                    offset = irp->size - irp->nPendingBytes;

                    ptr = (uint8_t *) & ((volatile uint8_t (*)[0x8000])USBHSV1_RAM_ADDR)[0];

                    data = (uint8_t *)&data[offset];

                    for(count = 0; count < byteCount; count++)
                    {
                        *ptr++ = *((uint8_t *)(data + count));
                    }

                    ptr = (uint8_t *) & ((volatile uint8_t (*)[0x8000])USBHSV1_RAM_ADDR)[0];

                    SCB_CleanDCache_by_Addr((uint32_t *) ptr, (int32_t)byteCount);

                    irp->nPendingBytes -= byteCount;

                    usbID->USBHS_DEVEPTICR[0] = USBHS_DEVEPTICR_TXINIC_Msk;

                    usbID->USBHS_DEVEPTIER[0] = USBHS_DEVEPTIER_TXINES_Msk;

                }
            }
        }
        if((USBHS_DEVEPTIMR_RXOUTE_Msk == (USBHS_DEVEPTIMR_RXOUTE_Msk & ep0MaskStatus)) && (USBHS_DEVEPTISR_RXOUTI_Msk == (USBHS_DEVEPTISR_RXOUTI_Msk & ep0Status)))
        {
            /* This means we have received data from the host in the
             * data stage of the control transfer */
            irp = endpointObjReceive->irpQueue;

            if(hDriver->endpoint0State == DRV_USBHSV1_DEVICE_EP0_STATE_WAITING_FOR_RX_STATUS_COMPLETE)
            {
                if(irp != NULL)
                {
                    irp->status = USB_DEVICE_IRP_STATUS_COMPLETED;

                    hDriver->endpoint0State = DRV_USBHSV1_DEVICE_EP0_STATE_EXPECTING_SETUP_FROM_HOST;

                    usbID->USBHS_DEVEPTICR[0] = USBHS_DEVEPTICR_RXOUTIC_Msk;

                    endpointObjReceive->irpQueue = irp->next;

                    irp->size = 0;

                    if(irp->callback != NULL)
                    {
                        irp->callback((USB_DEVICE_IRP *)irp);
                    }
                }
                else
                {
                    hDriver->endpoint0State = DRV_USBHSV1_DEVICE_EP0_STATE_WAITING_FOR_RX_STATUS_IRP_FROM_CLIENT;

                    usbID->USBHS_DEVEPTIDR[0] = USBHS_DEVEPTIDR_RXOUTEC_Msk;

                }
            }
            else
            {
                if(irp == NULL)
                {
                    hDriver->endpoint0State = DRV_USBHSV1_DEVICE_EP0_STATE_WAITING_FOR_RX_DATA_IRP_FROM_CLIENT;

                    usbID->USBHS_DEVEPTIDR[0] = USBHS_DEVEPTIDR_RXOUTEC_Msk;
                }
                else
                {
                    byteCount = (usbID->USBHS_DEVEPTISR[0] & USBHS_DEVEPTISR_BYCT_Msk) >> USBHS_DEVEPTISR_BYCT_Pos;

                    data = (uint8_t *) irp->data;

                    /* Get 8-bit access to endpoint 0 FIFO from USB RAM address */
                    ptr = (uint8_t *) & ((volatile uint8_t (*)[0x8000])USBHSV1_RAM_ADDR)[0];

                    data = (uint8_t *)&data[irp->nPendingBytes];

                    if((irp->nPendingBytes + byteCount) > irp->size)
                    {
                        /* This is not acceptable as it may corrupt the ram location */
                        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: corrupt the memory location in F_DRV_USBHSV1_DEVICE_Tasks_ISR().");
                       
                    }
                    else
                    {

                        SCB_InvalidateDCache_by_Addr((uint32_t *) ptr, (int32_t)byteCount);

                        for(count = 0; count < byteCount; count++)
                        {
                            *((uint8_t *)(data + count)) = *ptr++;
                        }

                        irp->nPendingBytes += byteCount;

                        if((irp->nPendingBytes < irp->size) && (byteCount >= endpointObjReceive->maxPacketSize))
                        {
                            usbID->USBHS_DEVEPTICR[0] = USBHS_DEVEPTICR_RXOUTIC_Msk;
                        }
                        else
                        {
                            if(irp->nPendingBytes >= irp->size)
                            {
                                irp->status = USB_DEVICE_IRP_STATUS_COMPLETED;
                            }
                            else
                            {
                                /* Short Packet */
                                irp->status = USB_DEVICE_IRP_STATUS_COMPLETED_SHORT;
                            }

                            hDriver->endpoint0State = DRV_USBHSV1_DEVICE_EP0_STATE_WAITING_FOR_TX_DATA_IRP_FROM_CLIENT;

                            usbID->USBHS_DEVEPTICR[0] = USBHS_DEVEPTICR_RXOUTIC_Msk;

                            endpointObjReceive->irpQueue = irp->next;

                            irp->size = irp->nPendingBytes;

                            if(irp->callback != NULL)
                            {
                                irp->callback((USB_DEVICE_IRP *)irp);
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        for(endpointIndex = 1; endpointIndex < DRV_USBHSV1_ENDPOINTS_NUMBER; endpointIndex++)
        {
            /* This means this is non-EP0 interrupt. Read the endpoint status
             * register. */

            if((usbID->USBHS_DEVISR & ((0x01UL << endpointIndex) << USBHS_DEVISR_PEP_0_Pos)) == 0U)
            {
                continue;
            }

            epNonZeroStatus = usbID->USBHS_DEVEPTISR[endpointIndex] & USBHS_DEVEPTISRn_Msk;
            epNonZeroMaskStatus = usbID->USBHS_DEVEPTIMR[endpointIndex] & USBHS_DEVEPTIMRn_Msk;

            /* Get the pointer to the endpoint object */
            endpointObjNonZero = hDriver->deviceEndpointObj[endpointIndex];

            if((USBHS_DEVEPTIMR_RXOUTE_Msk == (USBHS_DEVEPTIMR_RXOUTE_Msk & epNonZeroMaskStatus)) && (USBHS_DEVEPTISR_RXOUTI_Msk == (USBHS_DEVEPTISR_RXOUTI_Msk & epNonZeroStatus)))
            {
                /* This means we have received RXOUTI interrupt */
                /* This means we have received data from the host */

                if(endpointObjNonZero->irpQueue == NULL)
                {
                    /* Clear the interrupt */
                    usbID->USBHS_DEVEPTIDR[endpointIndex] = USBHS_DEVEPTIDR_RXOUTEC_Msk;
                }
                else
                {
                    irp = endpointObjNonZero->irpQueue;

                    byteCount = (usbID->USBHS_DEVEPTISR[endpointIndex] & USBHS_DEVEPTISR_BYCT_Msk) >> USBHS_DEVEPTISR_BYCT_Pos;

                    data = (uint8_t *) irp->data;

                    /* Get 8-bit access to endpoint 0 FIFO from USB RAM address */
                    ptr = (uint8_t *) & ((volatile uint8_t (*)[0x8000])USBHSV1_RAM_ADDR)[endpointIndex];

                    data = (uint8_t *)&data[irp->nPendingBytes];

                    if((irp->nPendingBytes + byteCount) > irp->size)
                    {
                        byteCount = irp->size - irp->nPendingBytes;
                    }

                    SCB_InvalidateDCache_by_Addr((uint32_t *) ptr, (int32_t)byteCount);

                    for(count = 0; count < byteCount; count++)
                    {
                        *((uint8_t *)(data + count)) = *ptr++;
                    }

                    irp->nPendingBytes += byteCount;

                    if((irp->nPendingBytes < irp->size) && (byteCount >= endpointObjNonZero->maxPacketSize))
                    {
                        usbID->USBHS_DEVEPTICR[endpointIndex] = USBHS_DEVEPTICR_RXOUTIC_Msk;
                        usbID->USBHS_DEVEPTIDR[endpointIndex] = USBHS_DEVEPTIDR_FIFOCONC_Msk;
                    }
                    else
                    {
                        if(irp->nPendingBytes >= irp->size)
                        {
                            irp->status = USB_DEVICE_IRP_STATUS_COMPLETED;
                        }
                        else
                        {
                            /* Short Packet */
                            irp->status = USB_DEVICE_IRP_STATUS_COMPLETED_SHORT;

                            usbID->USBHS_DEVEPTICR[endpointIndex] = USBHS_DEVEPTICR_SHORTPACKETC_Msk;
                        }

                        endpointObjNonZero->irpQueue = irp->next;

                        irp->size = irp->nPendingBytes;

                        if(irp->callback != NULL)
                        {
                            irp->callback((USB_DEVICE_IRP *)irp);
                        }

                        usbID->USBHS_DEVEPTICR[endpointIndex] = USBHS_DEVEPTICR_RXOUTIC_Msk;

                        usbID->USBHS_DEVEPTIDR[endpointIndex] = USBHS_DEVEPTIDR_FIFOCONC_Msk;
                    }
                }
            }
            if((USBHS_DEVEPTIMR_TXINE_Msk == (USBHS_DEVEPTIMR_TXINE_Msk & epNonZeroMaskStatus)) && (USBHS_DEVEPTISR_TXINI_Msk == (USBHS_DEVEPTISR_TXINI_Msk & epNonZeroStatus)))
            {

                if(endpointObjNonZero->irpQueue != NULL)
                {

                    irp = endpointObjNonZero->irpQueue;

                    if((irp->nPendingBytes == 0U) && ((irp->flags & (uint32_t)M_USB_DEVICE_IRP_FLAG_SEND_ZLP) != 0U))
                    {
                        irp->flags &= ~((uint32_t)M_USB_DEVICE_IRP_FLAG_SEND_ZLP);

                        usbID->USBHS_DEVEPTICR[endpointIndex] = USBHS_DEVEPTICR_TXINIC_Msk;

                        usbID->USBHS_DEVEPTIER[endpointIndex] = USBHS_DEVEPTIER_TXINES_Msk;
                        usbID->USBHS_DEVEPTIDR[endpointIndex] = USBHS_DEVEPTIDR_FIFOCONC_Msk;
                    }
                    else if (irp->nPendingBytes != 0U)
                    {

                        if(irp->nPendingBytes >= endpointObjNonZero->maxPacketSize)
                        {
                            byteCount = endpointObjNonZero->maxPacketSize;
                        }
                        else
                        {
                            byteCount = irp->nPendingBytes;
                        }

                        data = (uint8_t *) irp->data;

                        offset = irp->size - irp->nPendingBytes;

                        ptr = (uint8_t *) & ((volatile uint8_t (*)[0x8000])USBHSV1_RAM_ADDR)[endpointIndex];

                        data = (uint8_t *)&data[offset];

                        for(count = 0; count < byteCount; count++)
                        {
                            *ptr++ = *((uint8_t *)(data + count));
                        }

                        ptr = (uint8_t *) & ((volatile uint8_t (*)[0x8000])USBHSV1_RAM_ADDR)[endpointIndex];

                        SCB_CleanDCache_by_Addr((uint32_t *) ptr, (int32_t)byteCount);

                        irp->nPendingBytes -= byteCount;

                        usbID->USBHS_DEVEPTICR[endpointIndex] = USBHS_DEVEPTICR_TXINIC_Msk;

                        usbID->USBHS_DEVEPTIDR[endpointIndex] = USBHS_DEVEPTIDR_FIFOCONC_Msk;

                        usbID->USBHS_DEVEPTIER[endpointIndex] = USBHS_DEVEPTIER_TXINES_Msk;
                    }
                    else
                    {
                        if((irp->flags & (uint32_t)M_USB_DEVICE_IRP_FLAG_SEND_ZLP) == 0U)
                        {
                            irp->status = USB_DEVICE_IRP_STATUS_COMPLETED;

                            endpointObjNonZero->irpQueue = irp->next;

                            if(irp->callback != NULL)
                            {
                                irp->callback((USB_DEVICE_IRP *)irp);
                            }

                            if(endpointObjNonZero->irpQueue == NULL)
                            {
                                usbID->USBHS_DEVEPTICR[endpointIndex] = USBHS_DEVEPTICR_TXINIC_Msk;
                                usbID->USBHS_DEVEPTIDR[endpointIndex] = USBHS_DEVEPTIDR_TXINEC_Msk;
                            }
                            else
                            {
                                irp = endpointObjNonZero->irpQueue;

                                if(irp->nPendingBytes >= endpointObjNonZero->maxPacketSize)
                                {
                                    byteCount = irp->nPendingBytes;
                                }
                                else
                                {
                                    byteCount = endpointObjNonZero->maxPacketSize;
                                }

                                data = (uint8_t *) irp->data;

                                offset = irp->size - irp->nPendingBytes;

                                ptr = (uint8_t *) & ((volatile uint8_t (*)[0x8000])USBHSV1_RAM_ADDR)[endpointIndex];

                                data = (uint8_t *)&data[offset];

                                for(count = 0; count < byteCount; count++)
                                {
                                    *ptr++ = *((uint8_t *)(data + count));
                                }

                                ptr = (uint8_t *) & ((volatile uint8_t (*)[0x8000])USBHSV1_RAM_ADDR)[endpointIndex];

                                SCB_CleanDCache_by_Addr((uint32_t *) ptr, (int32_t)byteCount);

                                irp->nPendingBytes -= byteCount;

                                usbID->USBHS_DEVEPTICR[endpointIndex] = USBHS_DEVEPTICR_TXINIC_Msk;

                                usbID->USBHS_DEVEPTIDR[endpointIndex] = USBHS_DEVEPTIDR_FIFOCONC_Msk;

                                usbID->USBHS_DEVEPTIER[endpointIndex] = USBHS_DEVEPTIER_TXINES_Msk;

                            }
                        }
                    }
                }
            }
        }
    }
}

// *****************************************************************************

/* Function:
      USB_ERROR DRV_USBHSV1_DEVICE_TestModeEnter
      (
          DRV_HANDLE handle,
          USB_TEST_MODE_SELECTORS testMode
      )

  Summary:
    Dynamic implementation of DRV_USBHSV1_DEVICE_TestModeEnter client interface
    function.

  Description:
    This is the dynamic implementation of DRV_USBHSV1_DEVICE_TestModeEnter client
    interface function for USB device. Function set the test mode requested.
    Only 1 test mode can remain set at any given point of time.

  Remarks:
    See drv_usb.h for usage information.
 */

USB_ERROR DRV_USBHSV1_DEVICE_TestModeEnter
(
    DRV_HANDLE handle,
    USB_TEST_MODE_SELECTORS testMode
)

{
    DRV_USBHSV1_OBJ * hDriver;
    usbhs_registers_t * usbID;
    uint32_t regUSBHS_DEVCTRL;
    uint8_t * ptr;
    uint16_t count;
    USB_ERROR retVal = USB_ERROR_NONE;

    uint8_t testModeData[53] =
    {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA,
        0xAA, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE,
        0xEE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xBF, 0xDF,
        0xEF, 0xF7, 0xFB, 0xFD, 0xFC, 0x7E, 0xBF, 0xDF,
        0xEF, 0xF7, 0xFB, 0xFD, 0x7E
    };

    if((handle == DRV_HANDLE_INVALID))
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Driver Handle is invalid in DRV_USBHSV1_DEVICE_TestModeEnter().");
        retVal = USB_ERROR_PARAMETER_INVALID;
    }
    else
    {

        hDriver = (DRV_USBHSV1_OBJ *) handle;

        usbID = hDriver->usbID;

        if(USB_TEST_MODE_SELCTOR_TEST_PACKET == testMode)
        {
            (void) DRV_USBHSV1_DEVICE_EndpointDisable((DRV_HANDLE )hDriver, 0);

            regUSBHS_DEVCTRL = usbID->USBHS_DEVCTRL;

            regUSBHS_DEVCTRL &= USBHS_DEVCTRL_SPDCONF_Msk;

            regUSBHS_DEVCTRL |= (USBHS_DEVCTRL_SPDCONF(2) | USBHS_DEVCTRL_TSTPCKT_Msk);

            usbID->USBHS_DEVCTRL = regUSBHS_DEVCTRL;

            /* Enable the control endpoint - Endpoint 0 */
            usbID->USBHS_DEVEPT |= USBHS_DEVEPT_EPEN0_Msk;

            /* Configure the Endpoint 0 configuration register */
            usbID->USBHS_DEVEPTCFG[0] =
            (
                USBHS_DEVEPTCFG_EPSIZE(3) |
                USBHS_DEVEPTCFG_EPDIR(USBHS_DEVEPTCFG_EPDIR_IN_Val) |
                USBHS_DEVEPTCFG_EPTYPE(USB_TRANSFER_TYPE_BULK) |
                USBHS_DEVEPTCFG_EPBK(USBHS_DEVEPTCFG_EPBK_1_BANK) |
                USBHS_DEVEPTCFG_ALLOC_Msk
            );

            usbID->USBHS_DEVEPTIER[0] = USBHS_DEVEPTIER_RSTDTS_Msk;

            usbID->USBHS_DEVEPTIDR[0] = USBHS_DEVEPTIDR_STALLRQC_Msk;


            if(USBHS_DEVEPTISR_CFGOK_Msk == (usbID->USBHS_DEVEPTISR[0] & USBHS_DEVEPTISR_CFGOK_Msk))
            {
                /* Endpoint configuration is successful */
                usbID->USBHS_DEVEPTIER[0] = USBHS_DEVEPTIER_RXSTPES_Msk | USBHS_DEVEPTIER_RXOUTES_Msk;
            }

            ptr = (uint8_t *) & ((volatile uint8_t (*)[0x8000])USBHSV1_RAM_ADDR)[0];

            for(count = 0; count < 53U; count++)
            {
                *ptr++ = testModeData[count];
            }

            ptr = (uint8_t *) & ((volatile uint8_t (*)[0x8000])USBHSV1_RAM_ADDR)[0];

            SCB_CleanDCache_by_Addr((uint32_t *) ptr, 53);

            usbID->USBHS_DEVEPTICR[0] = USBHS_DEVEPTICR_TXINIC_Msk;

            usbID->USBHS_DEVEPTIDR[0] = USBHS_DEVEPTIDR_FIFOCONC_Msk;

            usbID->USBHS_DEVEPTIER[0] = USBHS_DEVEPTIER_TXINES_Msk;

            retVal = USB_ERROR_NONE;

        }
    }

    return (retVal);

}/* end of DRV_USBHSV1_DEVICE_TestModeEnter() */

/* MISRAC 2012 deviation block end */
// *****************************************************************************

/* Function:
      USB_ERROR DRV_USBHSV1_DEVICE_TestModeExit
      (
          DRV_HANDLE handle,
          USB_TEST_MODE_SELECTORS testMode
      )

  Summary:
    Dynamic implementation of DRV_USBHSV1_DEVICE_TestModeExit client interface
    function.

  Description:
    This is the dynamic implementation of DRV_USBHSV1_DEVICE_TestModeExit client
    interface function for USB device. Function clears the test mode set.

  Remarks:
    See drv_usb.h for usage information.
 */

USB_ERROR DRV_USBHSV1_DEVICE_TestModeExit
(
    DRV_HANDLE handle,
    USB_TEST_MODE_SELECTORS testMode
)

{
    DRV_USBHSV1_OBJ * hDriver;
    usbhs_registers_t * usbID;
    USB_ERROR retVal = USB_ERROR_NONE;


    if((handle == DRV_HANDLE_INVALID))
    {
        SYS_DEBUG_MESSAGE(SYS_ERROR_INFO, "\r\nUSB USBHSV1 Device Driver: Driver Handle is invalid in DRV_USBHSV1_DEVICE_TestModeExit().");
        retVal = USB_ERROR_PARAMETER_INVALID;
    }
    else
    {
        hDriver = (DRV_USBHSV1_OBJ *) handle;
        usbID = hDriver->usbID;

        usbID = usbID;
        {
            retVal = USB_ERROR_PARAMETER_INVALID;
        }
    }
    /* Success */
    return (retVal);

}/* end of DRV_USBHSV1_DEVICE_TestModeExit() */
