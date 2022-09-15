---
parent: Harmony 3 USB Device application examples
title: HID Mouse Example 
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# HID Mouse Example (hid_mouse)

This application demonstrates the ability of the MPLAB Harmony USB Device Stack to support HID based two-button mouse device. 

## Description

This demonstration application creates a USB HID based two-button mouse device. When connected, the device emulates mouse operation by moving the cursor in a circular pattern. When the button in USB device is pressed the movement of cursor is Stopped/Started again .

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is [usb_apps_device/apps/hid_mouse](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device/tree/master/apps/hid_mouse).

Following table gives the details of project configurations, target device used, hardware and its IDE. Open the project using the respective IDE and build it. 

| Project Name                    | IDE    | Target Device       | Hardware / Configuration                                                   |
| ------------------------------- | ------ | ------------------- | -------------------------------------------------------------------------- |
| pic32mz_ef_curiosity_2_0.X      | MPLABX | PIC32MZ2048EFM144   | [Curiosity PIC32MZ EF 2.0 Development Board](#config_15)                   |
| pic32mx470_curiosity.X          | MPLABX | PIC32MX470F512H     | [PIC32MX Curiosity Development Board](#config_13)                          |
| sam_e54_xpro.X                  | MPLABX | ATSAME54P20A        | [SAM E54 Xplained Pro Board](#config_3)                                    |
| sam_e54_xpro_freertos.X         | MPLABX | ATSAME54P20A        | [SAM E54 Xplained Pro Board](#config_3)                                    |
| sam_e70_xult.X                  | MPLABX | ATSAME70Q21B        | [SAM E70 Xplained Ultra Board](#config_4)                                  |
| sam_e70_xult_freertos.X         | MPLABX | ATSAME70Q21B        | [SAM E70 Xplained Ultra Board](#config_4)                                  |
| pic32cz_ca80_curiosity_ultra.X  | MPLABX | PIC32CZ8110CA80208  | [PIC32CZ Curiosity Development Board](#config_23)   

## <a name="config_title"></a> Configuring the Hardware

### <a name="config_15"></a> [Curiosity PIC32MZ EF 2.0 Development Board](https://www.microchip.com/Developmenttools/ProductDetails/DM320209)

- Use the USB micro-B port J201 to connect the USB Device to the USB Host PC.
- LED2 indicates USB Device Configuration Set Complete event (the USB device functionality has been activated by the USB Host).
- Use Switch SW1 to stop and start the circular motion of the mouse pointer.

### <a name="config_13"></a> [Curiosity PIC32MX470 Development Board](https://www.microchip.com/Developmenttools/ProductDetails/dm320103)

- Use the USB micro-B port J12 to connect the USB Device to the USB Host PC.
- LED1 indicates USB Device Configuration Set Complete event (the USB device functionality has been activated by the USB Host).
- Press the switch S1 to trigger communication from the USB Device to the USB Host.

### <a name="config_23"></a> PIC32CZ Curiosity Development Board

- Use the USB micro-B "USB DEVICE" connector (J102) to connect the USB Device to the USB Host PC.
- LED0 indicates USB Device Configuration Set Complete event (the USB device functionality has been activated by the USB Host).
- Press the switch SW0 to trigger communication from the USB Device to the USB Host.

### <a name="config_3"></a> [SAM E54 Xplained Pro Board](https://www.microchip.com/developmenttools/productdetails/atsame54-xpro)

- Use TARGET USB connector on the board to connect the USB Device to the USB Host PC.
- LED0 indicates USB Device Configuration Set Complete event (the USB device functionality has been activated by the USB Host).
- Use Switch SW1 to stop and start the circular motion of the mouse pointer.

### <a name="config_4"></a> [SAM E70 Xplained Ultra Board](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DM320113)

- Jumper J203 must be shorted between PB08 and VBUS (positions 2 and 3).
- Use TARGET USB J200 connector on the board to connect the USB Device to the USB Host PC.
- LED3 indicates USB Device Configuration Set Complete event (the USB device functionality has been activated by the USB Host).
- Use Switch SW1 to stop and start the circular motion of the mouse pointer.

## Running the Application

This demonstration uses the selected hardware platform as a USB Mouse. Open the project with appropriate IDE. Compile the project and program the target device.

The LED on the demonstration board will indicate the USB state of the device. Refer to the [Configuring the Hardware](#config_title) Section for details. 

Before connecting the board to the computer through the USB cable please be aware that the device will begin moving the mouse cursor on the computer. There are two ways to stop the device from allowing the cursor to continue to move. The first way is to disconnect the device from the computer. The second is to press the correct button on the hardware platform. Pressing the button again will cause the mouse cursor to start moving in a circle again.