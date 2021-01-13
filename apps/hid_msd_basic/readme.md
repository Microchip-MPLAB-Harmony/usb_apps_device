---
parent: Harmony 3 USB Device application examples
title: HID MSD Basic Example 
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# HID MSD Basic Example (hid_msd_basic)

This application demonstrates the ability of the MPLAB Harmony USB Device Stack to support USB composite device.

## Description

This demonstration application creates a USB Device that combines the functionality of the hid_basic and msd_basic demonstration applications. 
- To demonstrate HID functionality, the device allows USB Host utility to control the LEDs on the board and query the status of a switch. 
- To demonstrate MSD functionality, application allows read / write / modify / delete data from a PC host like any normal Flash drive.

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is [usb_apps_device/apps/hid_msd_basic](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device/apps/hid_msd_basic).

Following table gives the details of project configurations, target device used, hardware and its IDE. Open the project using the respective IDE and build it. 

| Project Name                    | IDE    | Target Device       | Hardware / Configuration                                                   |
| ------------------------------- | ------ | ------------------- | -------------------------------------------------------------------------- |
| sam_d21_xpro.X                  | MPLABX | ATSAMD21J18A        | [SAM D21 Xplained Pro Board](#config_2)                                    |
| sam_e70_xult.X                  | MPLABX | ATSAME70Q21B        | [SAM E70 Xplained Ultra Board](#config_4)                                  |

## <a name="config_title"></a> Configuring the Hardware


### <a name="config_2"></a> [SAM D21 Xplained Pro Board](https://www.microchip.com/developmenttools/ProductDetails/atsamd21-xpro)

- Use TARGET USB connector on the board to connect the USB Device to the USB Host PC.
- LED0 indicates USB Device Configuration Set Complete event (the USB device functionality has been activated by the USB Host).
- Pressing the LED Toggle button on the USB Host PC Utility toggles LED0.
- The USB Host PC utility monitors the switch SW0 switch press on the board.

### <a name="config_4"></a> [SAM E70 Xplained Ultra Board](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DM320113)

- Jumper J203 must be shorted between PB08 and VBUS (positions 2 and 3).
- Use TARGET USB J200 connector on the board to connect the USB Device to the USB Host PC.
- LED3 indicates USB Device Configuration Set Complete event (the USB device functionality has been activated by the USB Host).Pressing the LED Toggle button on the USB Host PC Utility toggles LED3.
- The USB Host PC utility monitors SW1 switch press on the board.


## Running the HID Application

This demonstration uses the selected hardware platform as a USB Composite device handling both HID class device and MSD class device. In HID functionality, the device allows USB Host utility to control the LEDs on the board and query the status of a switch. In MSD functionality, application allows read / write / modify / delete data from a PC host like any normal Flash drive.

Open the project with appropriate IDE. Compile the project and program the target device.

### Running the HID Device

The HID Device application is same as *hid_basic* demo. Refer to local documentation from [usb_apps_device/apps/hid_basic](..\..\apps\hid_basic\readme.md). The documentation is also available in the github path [usb_apps_device/apps/hid_basic](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device/apps/hid_basic).

**Note:** The PC application needed for controlling the HID function should be used from [usb_apps_device/apps/hid_msd_basic\bin\GenericHIDSimpleDemo_Composite_HID+MSD_Demo_only_PID_0x0054.exe](..\..\apps\hid_msd_basic\bin\GenericHIDSimpleDemo_Composite_HID+MSD_Demo_only_PID_0x0054.exe). To launch the application, double click the executable *GenericHIDSimpleDemo_Composite_HID+MSD_Demo_only_PID_0x0054.exe*.

### Running the MSD Basic Device

The MSD Basic Device application is same as *msd_basic* demo. Refer to local documentation from [usb_apps_device/apps/msd_basic](..\..\apps\msd_basic\readme.md). The documentation is also available in the github path [usb_apps_device/apps/msd_basic](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device/apps/msd_basic).
