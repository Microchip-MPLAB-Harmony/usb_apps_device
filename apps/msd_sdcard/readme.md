---
parent: Harmony 3 USB Device application examples
title: MSD SD Card Example 
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# MSD SD Card Example (msd_sdcard)

This application demonstrates the ability of the MPLAB Harmony USB Device Stack to support USB Mass Storage Device. The application uses SD Card as storage media. 

## Description

This application creates a USB MSD Device that enumerates as a Flash Drive on the USB host PC. The application allows read / write / modify / delete data from a PC host like any normal Flash drive.

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is [usb_apps_device/apps/msd_sdcard](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device/apps/msd_sdcard).

Following table gives the details of project configurations, target device used, hardware and its IDE. Open the project using the respective IDE and build it. 

| Project Name                    | IDE    | Target Device       | Hardware / Configuration                                                   |
| ------------------------------- | ------ | ------------------- | -------------------------------------------------------------------------- |
| sam_9x60_ek_iar.IAR             | IAR    | SAM9X60             | [SAM9X60-EK Evaluation Board](#config_9)                                   |
| sam_e70_xult.X                  | MPLABX | ATSAME70Q21B        | [SAM E70 Xplained Ultra Board](#config_4)                                  |

## <a name="config_title"></a> Configuring the Hardware

### <a name="config_9"></a> [SAM9X60-EK Evaluation Board](https://www.microchip.com/developmenttools/ProductDetails/DT100126)

- Setup the SD card
    - Download harmony MPU bootstrap loader from this [location](https://github.com/Microchip-MPLAB-Harmony/at91bootstrap/blob/sam9x60ek/boot.bin)
    - Copy the downloaded boot loader binary (boot.bin) and generated application binary (harmony.bin)into the SD card
    - Insert the SD card into the SDMMC connector J4 on the board
- Connect the USB port J22 on board to the computer using a micro USB cable (to enable debug com port)
- Jumpers J20, J21 and J13 must be open.
- Jumper J2 and J3 must be shorted.
- Use USB Micro B connector (J7) on the board to connect the USB Device to the USB Host PC.
- LED D1 indicates USB Device Configuration Set Complete event (the USB device functionality has been activated by the USB Host).

    ![SAM9X60-EK Evaluation Board](images/sam9x60_evk.png)

    **Note:** Reset push button on SAM9X60 EK is labeled as SW3

### <a name="config_4"></a> [SAM E70 Xplained Ultra Board](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DM320113)

- Jumper J203 must be shorted between PB08 and VBUS (positions 2 and 3).
- Use TARGET USB J200 connector on the board to connect the USB Device to the USB Host PC.
- LED3 indicates USB Device Configuration Set Complete event (the USB device functionality has been activated by the USB Host).

## Running the Application

This demonstration uses the selected hardware platform as a logical drive on the computer using the internal Flash of the device as the drive storage media. 

Connect the hardware platform to a computer through a USB cable. The device should appear as a new drive on the computer named "Drive Name". The drive can used to store files. The LEDs on the demonstration board will indicate the USB state of the device. Refer to the [Configuring the Hardware](#config_title) section for the selected target hardware. 

**Note:** The user should ensure that the Host is not currently writing data to the media before detaching the device. On a Windows computer before removing the device click on "Safely Remove Hardware" and click on "Eject Media". 
