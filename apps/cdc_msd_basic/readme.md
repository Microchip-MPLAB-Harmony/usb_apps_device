---
parent: Harmony 3 USB Device application examples
title: CDC MSD Basic Example 
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# CDC MSD Basic Example (cdc_msd_basic)

This application demonstrates the ability of the MPLAB Harmony USB Device Stack to support Composite USB Device. 

## Description

This application creates a USB CDC Device that enumerates as a COM port and Flash Drive simultaneously. The COM port can be opened using any of the terminal applications and to demonstrate two-way communication, a character typed on the terminal window is echoed back by the USB device. Flash drive acts similar to any Mass Storage Class device where the NVM is used as storage media.

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is [usb_apps_device/apps/cdc_msd_basic](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device/tree/master/apps/cdc_msd_basic).

Following table gives the details of project configurations, target device used, hardware and its IDE. Open the project using the respective IDE and build it. 

| Project Name                    | IDE    | Target Device       | Hardware / Configuration                                                   |
| ------------------------------- | ------ | ------------------- | -------------------------------------------------------------------------- |
| sam_e70_xult.X                  | MPLABX | ATSAME70Q21B        | [SAME70 Xplained Ultra Board](#config_4)                                  |
| pic32mx470_curiosity.X          | MPLABX | PIC32MX470F512H     | [PIC32MX Curiosity Development Board](#config_13)                          |
| pic32mz_ef_curiosity_2_0.X        | MPLABX | PIC32MZ2048EFM144   | [Curiosity PIC32MZ EF 2.0 Development Board](#config_15)                   |
| sam_e54_xpro.X                  | MPLABX | ATSAME54P20A        | [SAME54 Xplained Pro Board](#config_3)                                    |

## <a name="config_title"></a> Configuring the Hardware

### <a name="config_4"></a> [SAME70 Xplained Ultra Board](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DM320113)

- Jumper J203 must be shorted between PB08 and VBUS (positions 2 and 3).
- Use TARGET USB J200 connector on the board to connect the USB Device to the USB Host PC.
- LED3 indicates USB Device Configuration Set Complete event (the USB device functionality has been activated by the USB Host).
- Press the switch SW1 to trigger communication from the USB Device to the USB Host.

### <a name="config_13"></a> [Curiosity PIC32MX470 Development Board](https://www.microchip.com/Developmenttools/ProductDetails/dm320103)

- Use the USB micro-B port J12 to connect the USB Device to the USB Host PC.
- LED1 indicates USB Device Configuration Set Complete event (the USB device functionality has been activated by the USB Host).
- Press the switch S1 to trigger communication from the USB Device to the USB Host.

### <a name="config_15"></a> [Curiosity PIC32MZ EF 2.0 Development Board](https://www.microchip.com/Developmenttools/ProductDetails/DM320209)

- Use the USB micro-B port J201 to connect the USB Device to the USB Host PC.
- LED1 indicates USB Device Configuration Set Complete event (the USB device functionality has been activated by the USB Host).
- Press the switch SW1 to trigger communication from the USB Device to the USB Host.

### <a name="config_3"></a> [SAME54 Xplained Pro Board](https://www.microchip.com/developmenttools/productdetails/atsame54-xpro)

- Use TARGET USB connector on the board to connect the USB Device to the USB Host PC.
- LED0 indicates USB Device Configuration Set Complete event (the USB device functionality has been activated by the USB Host).
- Press the switch SW0 to trigger communication from the USB Device to the USB Host.

## Running the Application

This demonstration application creates a composite USB Device that works simultaneously as a CDC and as a MSD device. This application combines the functionality of the cdc_com_port_single and msd_basic demonstration applications into one device. 

Open the project with appropriate IDE. Compile the project and program the target device.

### Running the CDC Device

The CDC Device application is same as *cdc_com_port_single* demo. Refer to local documentation from [usb_apps_device/apps/cdc_com_port_single](..\..\apps\cdc_com_port_single\readme.md). The documentation is also available in the github path [usb_apps_device/apps/cdc_com_port_single](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device/tree/master/apps/cdc_com_port_single).

### Running the MSD Basic Device

The MSD Basic Device application is same as *msd_basic* demo. Refer to local documentation from [usb_apps_device/apps/msd_basic](..\..\apps\msd_basic\readme.md). The documentation is also available in the github path [usb_apps_device/apps/msd_basic](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device/tree/master/apps/msd_basic).