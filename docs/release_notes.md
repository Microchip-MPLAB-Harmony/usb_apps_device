---
title: Release notes
nav_order: 99
---

![Microchip logo](https://raw.githubusercontent.com/wiki/Microchip-MPLAB-Harmony/Microchip-MPLAB-Harmony.github.io/images/microchip_logo.png)
![Harmony logo small](https://raw.githubusercontent.com/wiki/Microchip-MPLAB-Harmony/Microchip-MPLAB-Harmony.github.io/images/microchip_mplab_harmony_logo_small.png)

# Microchip MPLAB® Harmony 3 Release Notes

## Harmony 3 USB Device application examples v3.1.1
### Bug fixes
-   [MPLAB® Discover portal](https://mplab-discover.microchip.com/) metadata for all demonstration application configurations have been updated. 

### New Features and Enhancements

- None

### Known Issues

- None 

### Development Tools

- Same as v3.1.0 

## Harmony 3 USB Device application examples v3.1.0

### Development kit and demo application support

Following table provides number of USB Device examples available for different development kits.

| Development Kits  | MPLABx applications | IAR applications |
| ----------------- | ------------------- | ---------------- |
| [Curiosity PIC32MZ EF 2.0 Development Board](https://www.microchip.com/Developmenttools/ProductDetails/DM320209)                      | 15  | 0 |
| [Curiosity PIC32MX470 Development Board](https://www.microchip.com/Developmenttools/ProductDetails/dm320103)                             | 14  | 0 |
| [PIC32MK General Purpose (GP) Development Board](https://www.microchip.com/developmenttools/ProductDetails/dm320106)                  | 2  | 0 |
| [PIC32MZ Embedded Graphics with Stacked DRAM (DA) Starter Kit](https://www.microchip.com/DevelopmentTools/ProductDetails/DM320010-C)  | 1  | 0 |
| [PIC32MZ Embedded Connectivity with FPU (EF) Starter Kit](https://www.microchip.com/Developmenttools/ProductDetails/DM320007)         | 8  | 0 |
| [Curiosity PIC32MZ W1 Development Board](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DM320104)                   | 1  | 0 |
| [SAMD11 Xplained Pro Board](https://www.microchip.com/developmenttools/ProductDetails/atsamd11-xpro)                                 | 4  | 1 |
| [SAMD21 Xplained Pro Board](https://www.microchip.com/developmenttools/ProductDetails/atsamd21-xpro)                                 | 9  | 1 |
| [SAMDA1 Xplained Pro Board](https://www.microchip.com/developmenttools/ProductDetails/PartNO/ATSAMDA1-XPRO)                          | 1  | 0 |
| [SAME54 Xplained Pro Board](https://www.microchip.com/developmenttools/productdetails/atsame54-xpro)                                 | 16 | 1 |
| [SAME70 Xplained Ultra board](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DM320113)                                 | 19 | 1 |
| [SAMG55 Xplained Pro Board](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/ATSAMG55-XPRO)                           | 3  | 0 |
| [SAML21 Xplained Pro Board](https://www.microchip.com/developmenttools/ProductDetails/PartNO/ATSAML21-XPRO-B)                        | 1  | 0 |
| [SAML22 Xplained Pro Board](https://www.microchip.com/developmenttools/ProductDetails/PartNO/ATSAML22-XPRO-B)                        | 1  | 0 |
| [SAMV71 Xplained Ultra board](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/ATSAMV71-XULT)                        | 3  | 0 |
| [SAM9X60-EK Evaluation Board](https://www.microchip.com/developmenttools/ProductDetails/DT100126)                                     | 7  | 5 |
| [SAMA5D2 Xplained Ultra Board](https://www.microchip.com/Developmenttools/ProductDetails/ATSAMA5D2C-XULT)                            | 5  | 3 |
| [SAMA5D27 SOM1 Kit1](https://www.microchip.com/developmenttools/ProductDetails/atsama5d27-som1-ek1)                            | 5  | 0 |
| [ATSAMA5D27-WLSOM1 Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DM320117)                            | 5  | 0 |



### New Features
- The following USB Device demonstration applications are added. 
    - HID Basic Remote Wakeup Example (hid_basic_remote_wakeup)
    - USB-UART Bridge Single Channel Example (usb_uart_bridge_single)
    - MSD Multiple LUN Example (msd_multiple_luns)
    - CDC Serial Emulator MSD Example (cdc_serial_emulator_msd)
- MPLAB® X IDE USB Device demonstration application configurations has been added for following development boards.
    - [Curiosity PIC32MZ EF 2.0 Development Board](https://www.microchip.com/Developmenttools/ProductDetails/DM320209)
    - [Curiosity PIC32MX470 Development Board](https://www.microchip.com/Developmenttools/ProductDetails/dm320103)
    - [SAM9X60-EK Evaluation Board](https://www.microchip.com/developmenttools/ProductDetails/DT100126)  
    - [SAMA5D2 Xplained Ultra Board](https://www.microchip.com/Developmenttools/ProductDetails/ATSAMA5D2C-XULT) 
    - [SAMA5D27 SOM1 Kit1](https://www.microchip.com/developmenttools/ProductDetails/atsama5d27-som1-ek1)
    - [ATSAMA5D27-WLSOM1 Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DM320117)


### Bug fixes
- USB Device applications are updated to switch off the LED when the USB is suspended.  
- Resolved switch debounce issue with USB device applications.

### Known Issues
- None 


### Development Tools

-    [MPLAB® X IDE v5.50](https://www.microchip.com/mplab/mplab-x-ide)
-    [MPLAB® XC32 C/C++ Compiler v3.00](https://www.microchip.com/mplab/compilers)
-    [IAR Embedded Workbench® for ARM® v8.5](https://www.iar.com/iar-embedded-workbench/#!?architecture=Arm)
-   MPLAB® X IDE plug-ins:- MPLAB® Harmony 3 Launcher v3.6.4 or above

## Harmony 3 USB Device application examples v3.0.1

### New Features

- None

### Bug fixes
-   Updated MPLAB® Harmony 3 framework relative path for all MPLABX projects. 
-   Removed the compiler switch -Winline for all MPLABX projects. 
-   USB buffers are word-aligned for ATSAMD21/D11 demos. 
-   Resolved array out of the bound issue with CDC FreeRTOS application. 

### Known Issues

- None

### Development Tools

-    [MPLAB® X IDE v5.45](https://www.microchip.com/mplab/mplab-x-ide)
-    [MPLAB® XC32 C/C++ Compiler v3.00](https://www.microchip.com/mplab/compilers)
-    [IAR Embedded Workbench® for ARM® v8.5](https://www.iar.com/iar-embedded-workbench/#!?architecture=Arm)
-   MPLAB® X IDE plug-ins:- MPLAB® Harmony 3 Launcher v3.6.4 or above


## Harmony 3 USB Device application examples v3.0.0

- Applications migrated from the USB repository to this new application repository for USB Device examples.

### Development kit and demo application support

Following table provides number of USB Device examples available for different development kits.

| Development Kits  | MPLABx applications | IAR applications |
| ----------------- | ------------------- | ---------------- |
| [PIC32MK General Purpose (GP) Development Board](https://www.microchip.com/developmenttools/ProductDetails/dm320106)                  | 2  | 0 |
| [PIC32MX Curiosity Development Board](https://www.microchip.com/Developmenttools/ProductDetails/dm320103)                             | 2  | 0 |
| [PIC32MZ Embedded Graphics with Stacked DRAM (DA) Starter Kit](https://www.microchip.com/DevelopmentTools/ProductDetails/DM320010-C)  | 1  | 0 |
| [Curiosity PIC32MZ EF 2.0 Development Board](https://www.microchip.com/Developmenttools/ProductDetails/DM320209)                      | 1  | 0 |
| [PIC32MZ Embedded Connectivity with FPU (EF) Starter Kit](https://www.microchip.com/Developmenttools/ProductDetails/DM320007)         | 8  | 0 |
| [Curiosity PIC32MZ W1 Development Board](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DM320104)                   | 1  | 0 |
| [SAM9X60-EK Evaluation Board](https://www.microchip.com/developmenttools/ProductDetails/DT100126)                                     | 0  | 4 |
| [SAM A5D2 Xplained Ultra Board](https://www.microchip.com/Developmenttools/ProductDetails/ATSAMA5D2C-XULT)                            | 0  | 3 |
| [SAM D11 Xplained Pro Board](https://www.microchip.com/developmenttools/ProductDetails/atsamd11-xpro)                                 | 4  | 1 |
| [SAM D21 Xplained Pro Board](https://www.microchip.com/developmenttools/ProductDetails/atsamd21-xpro)                                 | 9  | 1 |
| [SAM DA1 Xplained Pro Board](https://www.microchip.com/developmenttools/ProductDetails/PartNO/ATSAMDA1-XPRO)                          | 1  | 0 |
| [SAM E54 Xplained Pro Board](https://www.microchip.com/developmenttools/productdetails/atsame54-xpro)                                 | 14 | 1 |
| [SAM E70 Xplained Ultra Board](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DM320113)                             | 19 | 1 |
| [SAMG55 Xplained Pro Board](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/ATSAMG55-XPRO)                           | 3  | 0 |
| [SAM L21 Xplained Pro Board](https://www.microchip.com/developmenttools/ProductDetails/PartNO/ATSAML21-XPRO-B)                        | 1  | 0 |
| [SAM L22 Xplained Pro Board](https://www.microchip.com/developmenttools/ProductDetails/PartNO/ATSAML22-XPRO-B)                        | 1  | 0 |
| [SAM V71 Xplained Ultra board](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/ATSAMV71-XULT)                        | 3  | 0 |

### New Features

New features added in this release are as follows:

- Applications migrated from the USB repository to this new application repository for USB Device examples.

### Known Issues

The current known issues are as follows:

- None

### Development Tools

- [MPLAB® X IDE v5.45](https://www.microchip.com/mplab/mplab-x-ide)
- MPLAB® X IDE plug-ins:
  - MPLAB® Harmony Configurator (MHC) v3.6.0
- [MPLAB® XC32 C/C++ Compiler v2.50](https://www.microchip.com/mplab/compilers)
- [KEIL MDK v5.30 or above](https://www2.keil.com/mdk5)
- [IAR Embedded workbench for ARM v8.50 or above](https://www.iar.com/iar-embedded-workbench/#!?architecture=Arm)
