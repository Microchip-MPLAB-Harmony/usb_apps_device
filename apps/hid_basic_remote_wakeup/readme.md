---
parent: Harmony 3 USB Device application examples
title: HID Basic Remote Wakeup Example 
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# HID Basic Remote Wakeup Example (hid_basic_remote_wakeup)

This application demonstrates the ability of the MPLAB® Harmony USB Device Stack to support the Remote Wakeup feature using a custom HID device class example. 

## Description

This application creates a USB HID Device that enumerates as a custom USB HID device on the USB host PC. The device allows the USB Host utility to control the LEDs on the board and query the status of a switch. This example demonstrates suspend/resume initiated by PC host and Remote Wakeup initiated by HID Device using a PC-based utility. The application will put the device to Standby sleep mode when it receives a suspend from PC host. The Push-button is used as wakeup source when the device goes to Standby sleep mode.

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using the MPLAB® Harmony Content Manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is [usb_apps_device/apps/hid_basic_remote_wakeup](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device/tree/master/apps/hid_basic_remote_wakeup).

Following table gives the details of project configurations, target device used, hardware and its IDE. Open the project using the respective IDE and build it. 

| Project Name                    | IDE    | Target Device       | Hardware / Configuration                                                   |
| ------------------------------- | ------ | ------------------- | -------------------------------------------------------------------------- |
| sam_e54_xpro.X                  | MPLABX | ATSAME54P20A        | [SAM E54 Xplained Pro Board](#config_3)                                    |
| sam_l21_xpro.X                  | MPLABX | ATSAML21J18B        | [SAML21 Xplained Pro Board](#config_7)                                    |


## <a name="config_title"></a> Configuring the Hardware

### <a name="config_3"></a> [SAME54 Xplained Pro Board](https://www.microchip.com/developmenttools/productdetails/atsame54-xpro)

- Use TARGET USB connector on the board to connect the USB Device to the USB Host PC.
- LED0 indicates USB Device Configuration Set Complete event (the USB device functionality has been activated by the USB Host).
- Press the switch SW0 to trigger communication from the USB Device to the USB Host.
- When the device is in Standby sleep, SW0 acts as wakeup source and brings the device to active mode. The device sends Remote wakeup to PC host and then goes back to Standby sleep mode to let the PC host drive the resume.
- To measure current consumed by the device in different Sleep modes, refer to Section **Current Measurement Header** in [SAME54 Xplained Pro Hardware User Guide](https://ww1.microchip.com/downloads/en/DeviceDoc/70005321A.pdf). Refer to **Virtual COM Port** section to know more on using EDBG to send runtime messages.

### <a name="config_7"></a> [SAML21 Xplained Pro Board](https://www.microchip.com/developmenttools/ProductDetails/PartNO/ATSAML21-XPRO-B)

- Use TARGET USB connector on the board to connect the USB Device to the USB Host PC.
- LED0 indicates USB Device Configuration Set Complete event (the USB device functionality has been activated by the USB Host).
- Press the switch SW0 to trigger communication from the USB Device to the USB Host.
- When the device is in Standby sleep, SW0 acts as wakeup source and brings the device to active mode. The device sends Remote wakeup to PC host and then goes back to Standby sleep mode to let the PC host drive the resume.

## Running the Application

### Application State Messages using EDBG
Runtime messages are sent through UART, which is received by EDBG and sent to PC terminal as USB CDC data. Follow the below steps to see the runtime messages.
1. When the debug USB port is connected to the PC, it should be visible as a virtual COM port.
1. Open up a terminal program, such as HyperTerminal and select the appropriate COM port. Set the serial port settings as follows:
    - Baud : 115200
    - Data : 8 Bits
    - Parity : None
    - Stop : 1 Bit
    - Flow Control : None

    ![COM port settings](images/hid_basic_remote_wakeup_1.png)

1. When the programming is complete and the application starts running, the title message will be seen. 
1. Connect the Upstream USB port to the PC and when the enumeration is successful, ***Device Configured*** message is seen. Since this is a HID device, PC host will suspend the device, unless an application is accessing it. The terminal window would now look like this.

    ![Starting Message](images/hid_basic_remote_wakeup_2.png)

### HID Basic operation
The HID Basic operation is same as *hid_basic* demo. Refer to local documentation from [usb_apps_device/apps/hid_basic](..\..\apps\hid_basic\readme.md). The documentation is also available in the github path [usb_apps_device/apps/hid_basic](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device/apps/hid_basic).

### Remote Wakeup, Suspend and Resume operation
1. To demonstrate the Remote wakeup capabilities along with the debug messages, the Upstream ports of target USB and debug USB should be connected to two different PC Hosts. This is shown below.

    ![COM port settings](images/hid_basic_remote_wakeup_3.png)

1. When the PC utility is connected to the USB device, ***USB Device Resumed*** message is seen. Closing the application would *suspend* the USB device and the respective message will be seen.
1. The suspend due to closure of PC utility will not enable the Remote Wakeup of USB device. Hence the message ***USB host Suspend device or Remote wakeup is not enabled*** would be seen. The device will be put to Standby Sleep mode. 
1. A resume from PC host can wake up the device and continue with HID operation. This is when ***USB Device Resumed*** message is shown.
1. Put the PC host connected to Target USB port to sleep to test Remote wakeup. If the device is allowed to wake up PC host, then the Remote Wakeup will be enabled in the USB device by PC host before suspending the bus. This is shown through ***USB host in Sleep mode - Remote wakeup enabled. Press Button to wakeup Host.*** message.
1. If the message ***USB host Suspend device or Remote wakeup is not enabled*** is seen when PC host is put to sleep, it means the USB device is not allowed to do Remote Wakeup. Go to the power settings of the USB device in PC host and enable Remote wakeup feature. This can be done in a Windows machine through device manager or command prompt. Below are the commands and their usage.
   - **powercfg -devicequery wake_from_any** - Displays all devices that are connected to the PC.
   - **powercfg -devicequery wake_armed** - Devices that can wake up PC from its sleep state.
   - **powercfg -deviceenablewake** - To enable Remote wakeup privilege for any of the connected Devices
        - eg:-  powercfg -deviceenablewake "HID-compliant vendor-defined device (002)"
   - **powercfg -devicedisablewake** - To disable Remote wakeup privilege for any of the connected Devices.
1. If the Remote Wakeup is enabled and the device is put to sleep, press the switch to initiate a **Remote Wakeup**. The PC host will respond back with a resume and device will continue with its HID operation. The screenshot showing suspend, resume and remote wakeup operations are shown below.

    ![COM port settings](images/hid_basic_remote_wakeup_4.png)