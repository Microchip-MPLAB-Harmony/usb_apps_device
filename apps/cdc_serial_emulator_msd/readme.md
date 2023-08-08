---
parent: Harmony 3 USB Device application examples
title: CDC Serial Emulator MSD Example 
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# CDC Serial Emulator MSD Example (cdc_serial_emulator_msd)

This demonstration application creates a USB composite device that combines the functionality of the cdc_serial_emulator and msd_basic demonstration applications.

## Description

This application demonstrates a USB composite device with CDC and MSD functions. The CDC function implements a USB-to-Serial Converter. The MSD function driver implements a USB Mass Storage Device with NVM as storage media.


## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is **apps\cdc_serial_emulator_msd**.

Following table gives the details of project configurations, target device used, hardware and its IDE. Open the project using the respective IDE and build it. 

| Project Name            | IDE    | Target Device   | Hardware / Configuration                       |
| ----------------------- | ------ | --------------- | ---------------------------------------------- |
| pic32mz_ef_curiosity_2_0.X        | MPLABX | PIC32MZ2048EFM144   | [Curiosity PIC32MZ EF 2.0 Development Board](#config_15)                   |
| pic32cz_ca80_curiosity_ultra.X     | MPLABX | PIC32CZ8110CA80208  | [PIC32CZ Curiosity Development
 Board](#config_23)                  |

## <a name="config_title"></a> Configuring the Hardware

### <a name="config_15"></a> [Curiosity PIC32MZ EF 2.0 Development Board](https://www.microchip.com/Developmenttools/ProductDetails/DM320209)

- Use the USB micro-B port J201 to connect the USB Device to the USB Host PC.
- LED1 indicates USB Device Configuration Set Complete event (the USB device functionality has been activated by the USB Host).
- The CDC USB (UART to USB) interface on this board is served by the DEBUG_USB connector J700. Connecting this to the PC will create a COM port on the PC Host.


### <a name="config_23"></a> [PIC32CZ CA80 Curiosity Ultra development board](https://www.microchip.com/en-us/development-tool/ea61x20a)

- Use the USB micro-B port J102 to connect the USB Device to the USB Host PC.
- LED0 indicates USB Device Configuration Set Complete event (the USB device functionality has been activated by the USB Host).
- The CDC USB (UART to USB) interface on this board is served by the DEBUG_USB connector J200. Connecting this to the PC will create a COM port on the PC Host.

## Running the Application

This demonstration functions as a composite USB Device that combines the features of the devices created by the [cdc_serial_emulator](..\..\apps\cdc_serial_emulator\readme.md) and the [msd_basic](..\..\apps\msd_basic\readme.md) demonstration applications. Refer to Running the Demonstration section of the cdc_serial_emulator demonstration and Running the Demonstration section of the msd_basic demonstration for details on exercising the CDC and MSD functions, respectively. 

The LEDs on the demonstration board will indicate the USB state of the device, as described in the USB Device State and LED Indication Table in the Device section.

