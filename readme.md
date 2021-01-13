---
title: Harmony 3 USB Device application examples
nav_order: 1
has_children: true
has_toc: false
---
[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# Harmony 3 USB Device application examples

MPLAB® Harmony 3 is an extension of the MPLAB® ecosystem for creating embedded firmware solutions for Microchip 32-bit SAM and PIC® microcontroller and microprocessor devices.  Refer to the following links for more information.

- [Microchip 32-bit MCUs](https://www.microchip.com/design-centers/32-bit)
- [Microchip 32-bit MPUs](https://www.microchip.com/design-centers/32-bit-mpus)
- [Microchip MPLAB X IDE](https://www.microchip.com/mplab/mplab-x-ide)
- [Microchip MPLAB® Harmony](https://www.microchip.com/mplab/mplab-harmony)
- [Microchip MPLAB® Harmony Pages](https://microchip-mplab-harmony.github.io/)

This repository contains the MPLAB® Harmony 3 USB Device application examples.

- [Release Notes](release_notes.md)
- [MPLAB® Harmony License](mplab_harmony_license.md)

To clone or download these applications from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

# Contents Summary

| Folder     | Description                                               |
| ---        | ---                                                       |
| apps       | Contains Harmony 3 USB Device application examples |
| docs       | Contains documentation in html format for offline viewing (to be used only after cloning this repository onto a local machine). Use [github pages](https://microchip-mplab-harmony.github.io/usb_apps_device/) of this repository for viewing it online. |

## Code Examples

The following applications are provided to demonstrate the typical or interesting usage models of USB Device capabilities.

| Name                  | Description                   |
| --------------------- | ----------------------------- |
| CDC COM Port Dual     | The application is example of a USB CDC Device that enumerates as a dual COM port on the USB host PC. The COM port can be opened using any of the terminal applications. To demonstrate communication between the two COM ports, a character typed in one of the COM port is displayed on the other and vice versa. |
| CDC COM Port Single   | The application creates a USB CDC Device that enumerates as a single COM port on the USB host PC. The COM port can be opened using any of the terminal applications. To demonstrate two-way communication, when a character is typed on the terminal window, it is echoed back by the USB device. |
| CDC MSD Basic         | The application creates a USB CDC Device that enumerates as a COM port and Flash Drive simultaneously. The COM port can be opened using any of the terminal applications and to demonstrate two-way communication, a character typed on the terminal window is echoed back by the USB device. Flash drive acts similar to any Mass Storage Class device where the NVM is used as storage media. |
| CDC MSD SD Card       | The application creates a USB CDC Device that enumerates as a COM port and Flash Drive simultaneously. The COM port can be opened using any of the terminal applications and to demonstrate two-way communication, a character typed on the terminal window is echoed back by the USB device. Flash drive acts similar to any Mass Storage Class device where the SD Card is used as storage media. |
| CDC Serial Emulator   | The application demonstrates the use of the CDC device class to implement a USB-to-Serial Converter. TThe application enumerates a COM port on the personal computer. Data received through the CDC USB interface is forwarded to a UART. Data received on the UART is forwarded to the CDC USB interface on the target board. The interface between the UART and the CDC USB Interface on the board demonstrates the USB to UART capability. |
| HID Basic             | The application creates a USB HID Device that enumerates as a custom USB HID device on the USB host PC. The device allows the USB Host utility to control the LEDs on the board and query the status of a switch. |
| HID Joystick          | The application creates a custom HID joystick. The application is only intended to demonstrate creation of Joystick HID Report descriptors and may not be a definite end solution. The end application requirements may need the report descriptor to be modified. |
| HID Keyboard          | The application creates a Generic HID keyboard. Pressing a switch on the target board emulates a keyboard key press. |
| HID Mouse             | The application creates a USB HID based two-button mouse device. When connected, the device emulates mouse operation by moving the cursor in a circular pattern. When the button in USB device is pressed the movement of cursor is Stopped/Started again. |
| HID MSD Basic         | The application creates a USB Device that combines the functionality of the hid_basic and msd_basic demonstration applications. To demonstrate HID functionality, the device allows USB Host utility to control the LEDs on the board and query the status of a switch. To demonstrate MSD functionality, application allows read / write / modify / delete data from a PC host like any normal Flash drive. |
| MSD Basic             | The application creates a USB MSD Device that enumerates as a Flash Drive on the USB host PC. The application allows read / write / modify / delete data from a PC host like any normal Flash drive. |
| MSD SD Card           | The application creates a USB MSD Device that enumerates as a Flash Drive on the USB host PC. The application allows read / write / modify / delete data from a PC host like any normal Flash drive. |
| Printer               | This demo uses PC running Windows 7 as a USB Host. The demo board programmed with the demo application, enumerates as "USB Printing Support" device when connected to the USB Host. This demo allows the user to print the text from Notepad or similar application in Windows using built in **Generic/Text Only** print driver. |
| USB UART Bridge Dual  | The application demonstrates the use of the CDC device class to implement a dual USB-UART bridge. The application enumerates two COM ports on the personal computer. Any data sent through the virtual COM ports will be seen at the respective UART port Tx pin and data sent through the UART Rx pin of the MCU will be seen at the virtual COM port. |
| Vendor                | The application creates a USB CDC Device that enumerates as a custom vendor USB device on the USB host PC. The device uses USB Device Layer Endpoint functions and demonstrates the PC host's ability to control the LEDs on the board and query the status of a switch through PC utility. |

____

[![License](https://img.shields.io/badge/license-Harmony%20license-orange.svg)](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device/blob/master/mplab_harmony_license.md)
[![Latest release](https://img.shields.io/github/release/Microchip-MPLAB-Harmony/usb_apps_device.svg)](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device/releases/latest)
[![Latest release date](https://img.shields.io/github/release-date/Microchip-MPLAB-Harmony/usb_apps_device.svg)](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device/releases/latest)
[![Commit activity](https://img.shields.io/github/commit-activity/y/Microchip-MPLAB-Harmony/usb_apps_device.svg)](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device/graphs/commit-activity)
[![Contributors](https://img.shields.io/github/contributors-anon/Microchip-MPLAB-Harmony/usb_apps_device.svg)]()

____

[![Follow us on Youtube](https://img.shields.io/badge/Youtube-Follow%20us%20on%20Youtube-red.svg)](https://www.youtube.com/user/MicrochipTechnology)
[![Follow us on LinkedIn](https://img.shields.io/badge/LinkedIn-Follow%20us%20on%20LinkedIn-blue.svg)](https://www.linkedin.com/company/microchip-technology)
[![Follow us on Facebook](https://img.shields.io/badge/Facebook-Follow%20us%20on%20Facebook-blue.svg)](https://www.facebook.com/microchiptechnology/)
[![Follow us on Twitter](https://img.shields.io/twitter/follow/MicrochipTech.svg?style=social)](https://twitter.com/MicrochipTech)

[![](https://img.shields.io/github/stars/Microchip-MPLAB-Harmony/usb_apps_device.svg?style=social)]()
[![](https://img.shields.io/github/watchers/Microchip-MPLAB-Harmony/usb_apps_device.svg?style=social)]()


