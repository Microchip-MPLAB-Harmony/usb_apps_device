---
parent: Harmony 3 USB Device application examples
title: MSD Multiple LUN Example 
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# MSD Multiple LUN Example (msd_multiple_luns)
This application demonstrates data transfer between two storage media - SD card and non-volatile memory (NVM) - and a computer through USB Mass Storage Device (MSD). 


## Description

This application demonstrates the creation of a USB device with multiple logical units. The storage media, SD Card, acts as one logical unit, and the NVM acts as the second logical unit. Data transfer between a computer and the logical units (SD Card / NVM) takes place through USB MSD.

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is [usb_apps_device/apps/msd_multiple_luns](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device/apps/msd_multiple_luns).

Following table gives the details of project configurations, target device used, hardware and its IDE. Open the project using the respective IDE and build it. 

| Project Name                    | IDE    | Target Device       | Hardware / Configuration                                                   |
| ------------------------------- | ------ | ------------------- | -------------------------------------------------------------------------- |
| pic32mx470_curiosity.X          | MPLABX | PIC32MX470F512H     | [PIC32MX Curiosity Development Board](#config_13)                          |
| pic32mz_ef_curiosity_20.X        | MPLABX | PIC32MZ2048EFM144   | [Curiosity PIC32MZ EF 2.0 Development Board](#config_15)                   |

## <a name="config_title"></a> Configuring the Hardware

### <a name="config_15"></a> [Curiosity PIC32MZ EF 2.0 Development Board](https://www.microchip.com/Developmenttools/ProductDetails/DM320209)

- To run the demo, the following additional hardware is required:
    - [micro-sd Click](https://www.mikroe.com/microsd-click) board
    - micro-sd card
- Insert the micro-sd click board into the Mikro BUS 1 connector on the Curiosity PIC32MZ EF 2.0 Development Board. 
- Insert the micro-SD card into the micro-SD Card slot of the micro-sd click board. 
- Use the USB micro-B port J201 to connect the USB Device to the USB Host PC.
- LED1 indicates USB Device Configuration Set Complete event (the USB device functionality has been activated by the USB Host).

### <a name="config_13"></a> [Curiosity PIC32MX470 Development Board](https://www.microchip.com/Developmenttools/ProductDetails/dm320103)

- To run the demo, the following additional hardware is required:
    - [micro-sd Click](https://www.mikroe.com/microsd-click) board
    - micro-sd card
- Insert the micro-sd click board into the Mikro BUS 1 connector on the Curiosity PIC32MX470 Development Board. 
- Insert the micro-SD card into the micro-SD Card slot of the micro-sd click board. 
- Ensure that a jumper is placed at 4-3 on J8, to select supply from debug USB connector. 
- USB micro-B port J12 to connect the USB device to the USB Host PC.
- LED1 indicates USB Device Configuration Set Complete event (the USB device functionality has been activated by the USB Host).

## Running the Application

This demonstration uses SD card and NVM as drive storage media and shows them as two logical drives on the computer.

Connect the hardware platform to a computer through a USB cable. The device should appear as two new drives on the computer. The NVM media should appear as "Drive Name" and should have a sample “FILE.txt” file. The drive name for the SD card media depends on the micro SD card vendor. The drives can then be used to store files. The LEDs on the demonstration board will indicate the USB state of the device. Refer to the [Configuring the Hardware](#config_title) section for the selected target hardware. 

Please note that the user should ensure that the Host is not currently writing data to the media before detaching the device. On a Windows computer before removing the device click on "Safely Remove Hardware" and click on "Eject Media". 


