---
parent: Harmony 3 USB Device application examples
title: CDC MSD SD Card Example 
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# CDC MSD SD Card Example (cdc_msd_sdcard)

This application demonstrates the ability of the MPLAB Harmony USB Device Stack to support composite USB Device. 

## Description

This application creates a USB CDC Device that enumerates as a COM port and Flash Drive simultaneously. The COM port can be opened using any of the terminal applications. To demonstrate two-way communication, a character typed on the terminal window is echoed back by the USB device. Flash drive acts similar to any Mass Storage Class device where the SD Card is used as storage media.

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is [usb_apps_device/apps/cdc_msd_sdcard](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device/apps/cdc_msd_sdcard).

Following table gives the details of project configurations, target device used, hardware and its IDE. Open the project using the respective IDE and build it. 

| Project Name                    | IDE    | Target Device       | Hardware / Configuration                                                   |
| ------------------------------- | ------ | ------------------- | -------------------------------------------------------------------------- |
| sam_9x60_ek_iar.IAR             | IAR    | SAM9X60             | [SAM9X60-EK Evaluation Board](#config_9)                                   |

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
- Press the switch SW1 to trigger communication from the USB Device to the USB Host.

    ![SAM9X60-EK Evaluation Board](images/sam9x60_evk.png)

    **Note: Reset push button on SAM9X60 EK is labeled as SW3**

## Running the Application

This demonstration application creates a composite USB Device that works simultaneously as a CDC and as a MSD device. This application combines the functionality of the cdc_com_port_single and msd_sdcard demonstration applications into one device. 

Open the project with appropriate IDE. Compile the project and program the target device.

### Running the CDC Device

The CDC Device application is same as *cdc_com_port_single* demo. Refer to local documentation from [usb_apps_device/apps/cdc_com_port_single](..\..\apps\cdc_com_port_single\readme.md). The documentation is also available in the github path [usb_apps_device/apps/cdc_com_port_single](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device/apps/cdc_com_port_single).


### Running the MSD SD Card Device

The MSD Basic Device application is same as *msd_sdcard* demo. Refer to local documentation from [usb_apps_device/apps/msd_sdcard](..\..\apps\msd_sdcard\readme.md). The documentation is also available in the github path [usb_apps_device/apps/msd_sdcard](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device/apps/msd_sdcard).