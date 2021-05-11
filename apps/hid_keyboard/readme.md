---
parent: Harmony 3 USB Device application examples
title: HID Keyboard Example 
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# HID Keyboard Example (hid_keyboard)

This application demonstrates the ability of the MPLAB Harmony USB Device Stack to support Generic HID keyboard. 

## Description

This demonstration application creates a Generic HID keyboard. Pressing a switch on the target board emulates a keyboard key press.

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is [usb_apps_device/apps/hid_keyboard](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device/apps/hid_keyboard).

Following table gives the details of project configurations, target device used, hardware and its IDE. Open the project using the respective IDE and build it. 

| Project Name                    | IDE    | Target Device       | Hardware / Configuration                                                   |
| ------------------------------- | ------ | ------------------- | -------------------------------------------------------------------------- |
| pic32mz_ef_curiosity_2_0.X      | MPLABX | PIC32MZ2048EFM144   | [Curiosity PIC32MZ EF 2.0 Development Board](#config_15)                   |
| sam_e70_xult.X                  | MPLABX | ATSAME70Q21B        | [SAM E70 Xplained Ultra Board](#config_4)                                  |
| sam_e70_xult_freertos.X         | MPLABX | ATSAME70Q21B        | [SAM E70 Xplained Ultra Board](#config_4)                                  |

## <a name="config_title"></a> Configuring the Hardware

### <a name="config_15"></a> [Curiosity PIC32MZ EF 2.0 Development Board](https://www.microchip.com/Developmenttools/ProductDetails/DM320209)

- Use the USB micro-B port J201 to connect the USB Device to the USB Host PC.
- LED1 indicates USB Device Configuration Set Complete event (the USB device functionality has been activated by the USB Host).
- Press Switch SW1 to exercise the keyboard key press function.

### <a name="config_4"></a> [SAM E70 Xplained Ultra Board](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DM320113)

- Jumper J203 must be shorted between PB08 and VBUS (positions 2 and 3).
- Use TARGET USB J200 connector on the board to connect the USB Device to the USB Host PC.
- LED3 indicates USB Device Configuration Set Complete event (the USB device functionality has been activated by the USB Host). LED3 also indicates status of Caps Lock on the PC.
- Press Switch SW1 to exercise the keyboard key press function.

## Running the Application

This demonstration uses the selected hardware platform as a USB keyboard. Open the project with appropriate IDE. Compile the project and program the target device.

The LEDs on the demonstration board will indicate the USB state of the device, as described in the [Configuring the Hardware](#config_title) section. 

Before pressing the button, select a window in which it is safe to type text freely. Pressing the button on the demonstration board will cause the device to print a character on the screen. LED on the board will also indicate the current CapsLock key status.

**Note:** If the Caps lock status on the PC is OFF when the device was attached the LED will turn ON and immediately turn off. 
