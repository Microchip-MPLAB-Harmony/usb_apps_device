---
parent: Harmony 3 USB Device application examples
title: CDC COM Port Dual Example 
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# CDC COM Port Dual Example (cdc_com_port_dual)

This application demonstrates the ability of the MPLAB Harmony USB Device Stack to support multiple instances of the same device class. It creates a USB CDC Device that enumerates as two serial ports on the USB Host PC. 

## Description

This application is example of a USB CDC Device that enumerates as a dual COM port on the USB host PC. The COM port can be opened using any of the terminal applications. To demonstrate communication between the two COM ports, a character typed in one of the COM port is displayed on the other and vice versa.

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is [usb_apps_device/apps/cdc_com_port_dual](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device/apps/cdc_com_port_dual).

Following table gives the details of project configurations, target device used, hardware and its IDE. Open the project using the respective IDE and build it. 

| Project Name                    | IDE    | Target Device       | Hardware / Configuration                                                   |
| ------------------------------- | ------ | ------------------- | -------------------------------------------------------------------------- |
| sam_d11_xpro.X                  | MPLABX | ATSAMD11D14A        | [SAM D11 Xplained Pro board](#config_1)                                    |
| sam_d21_xpro.X                  | MPLABX | ATSAMD21J18A        | [SAM D21 Xplained Pro board](#config_2)                                    |
| sam_e54_xpro.X                  | MPLABX | ATSAME54P20A        | [SAM E54 Xplained Pro board](#config_3)                                    |
| sam_e54_xpro_freertos.X         | MPLABX | ATSAME54P20A        | [SAM E54 Xplained Pro board](#config_3)                                    |
| sam_e70_xult.X                  | MPLABX | ATSAME70Q21B        | [SAM E70 Xplained Ultra board](#config_4)                                  |
| sam_e70_xult_freertos.X         | MPLABX | ATSAME70Q21B        | [SAM E70 Xplained Ultra board](#config_4)                                  |
| sam_v71_xult.X                  | MPLABX | ATSAMV71Q21B        | [SAM V71 Xplained Ultra board](config_5)                                   |
| sam_v71_xult_freertos.X         | MPLABX | ATSAMV71Q21B        | [SAM V71 Xplained Ultra board](config_5)                                   |
| pic32mz_ef_curiosity_2_0.X         | MPLABX | PIC32MZ2048EFM144        | [Curiosity PIC32MZ EF 2.0 Development Board](config_6)                                   |

## <a name="config_title"></a> Configuring the Hardware

### <a name="config_1"></a> [SAM D11 Xplained Pro board](https://www.microchip.com/developmenttools/ProductDetails/atsamd11-xpro)

- Use TARGET USB connector on the board to connect the USB Device to the USB Host PC.
- LED0 indicates USB Device Configuration Set Complete event (the USB device functionality has been activated by the USB Host).

### <a name="config_2"></a> [SAM D21 Xplained Pro board](https://www.microchip.com/developmenttools/ProductDetails/atsamd21-xpro)

- Use TARGET USB connector on the board to connect the USB Device to the USB Host PC.
- LED0 indicates USB Device Configuration Set Complete event (the USB device functionality has been activated by the USB Host).

### <a name="config_3"></a> [SAM E54 Xplained Pro board](https://www.microchip.com/developmenttools/productdetails/atsame54-xpro)

- Use TARGET USB connector on the board to connect the USB Device to the USB Host PC.
- LED0 indicates USB Device Configuration Set Complete event (the USB device functionality has been activated by the USB Host).

### <a name="config_4"></a> [SAM E70 Xplained Ultra board](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DM320113)

- Jumper J203 must be shorted between PB08 and VBUS (positions 2 and 3).
- Use TARGET USB J200 connector on the board to connect the USB Device to the USB Host PC.
- LED3 indicates USB Device Configuration Set Complete event (the USB device functionality has been activated by the USB Host).

### <a name="config_5"></a> [SAM V71 Xplained Ultra board](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/ATSAMV71-XULT)

- Jumper titled "USB VBUS" must be shorted between PC09 and VBUS (positions 2 and 3)
- Use TARGET USB connector on the board to connect the USB Device to the USB Host PC.
- LED0 indicates USB Device Configuration Set Complete event (the USB device functionality has been activated by the USB Host).

### <a name="config_6"></a> [Curiosity PIC32MZ EF 2.0 Development Board](https://www.microchip.com/developmenttools/ProductDetails/DM320209)

- Use the USB micro-B port J201 to connect the USB Device to the USB Host PC.
- LED1 indicates USB Device Configuration Set Complete event (the USB device functionality has been activated by the USB Host).

## Running the Application

This demonstration creates a USB device that enumerates as two serial (COM) ports on the host. Do the following to run this demonstration:

1. Open the project with appropriate IDE. Compile the project and program the target device.
1. Attach the device to the host. If the host is a personal computer and this is the first time you have plugged this device into the computer you may be prompted for a .inf file.

    ![Found New Hardware Wizard](images/cdc_com_port_dual_figure_1.png)

1. Select the "Install from a list or specific location (Advanced)" option. Navigate to the driver path available in the repo - *..\usb_apps_device\apps\cdc_com_port_dual\inf*.

    ![Install Driver Path](images/cdc_com_port_dual_figure_2.png)

    **Note:** To specifically select the driver, open the *Device Manager* and expand the Ports (COM & LPT) tab, and right click on *Update Driver Software*.

    ![Update Driver Software](images/cdc_com_port_dual_figure_3.png)

    Verify that the enumerated USB device is seen as a virtual USB serial comport in *Device Manager*.
    
    ![Device Manager](images/cdc_com_port_dual_figure_4.png)

    **NOTE:** The LEDs on the demonstration board will indicate the USB state of the device. Refer to the [Configuring the Hardware](#config_title) section for the selected target hardware. 

1. Once the device is successfully installed and visible on the *Device Manager*, open two instances of terminal program, such as HyperTerminal and select the appropriate COM port. Set the serial port settings as follows:
    - Baud : 9600
    - Data : 8 Bits
    - Parity : None
    - Stop : 1 Bit
    - Flow Control : None

    **Note:** The baud rate can be different from 9600 but the chosen value has to be the same on both the instances of terminal program.

    ![Teraterm New Connection](images/cdc_com_port_dual_figure_5.png)

1. To run the demonstration, turn on local echo on both the terminals. If the terminal application is Tera Term, navigate to Setup->Terminal to turn on local echo. Type a character or string in one terminal window. The same character or string shall appear on the second terminal window and vice versa. The following screen shot shows two instances of Tera Term.

    ![Teraterm Dual Port](images/cdc_com_port_dual_figure_6.png)

    **Note:** Some terminal programs, like HyperTerminal, require users to click the disconnect button before removing the device from the computer. Failing to do so may result in having to close and open the program again to reconnect to the device.