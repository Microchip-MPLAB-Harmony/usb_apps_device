# HID Mouse Example \(hid\_mouse\)

This application demonstrates the ability of the MPLAB Harmony USB Device Stack to support<br /> HID based two-button mouse device.

## **Description**

This demonstration application creates a USB HID based two-button mouse device. When<br /> connected, the device emulates mouse operation by moving the cursor in a circular pattern.<br /> When the button in USB device is pressed the movement of cursor is Stopped/Started again<br /> .

## **Downloading and building the application**

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device) and then click **Clone** button to<br /> clone this repository or download as zip file. This content can also be downloaded using<br /> content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is [usb\_apps\_device/apps/hid\_mouse](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device/tree/master/apps/hid_mouse).

Following table gives the details of project configurations, target device used,<br /> hardware and its IDE. Open the project using the respective IDE and build it.

|Project Name|IDE|Target Device|Hardware / Configuration|
|------------|---|-------------|------------------------|
|pic32mz\_ef\_curiosity\_2\_0.X|MPLABX|PIC32MZ2048EFM144|Curiosity PIC32MZ EF 2.0 Development Board|
|pic32mx470\_curiosity.X|MPLABX|PIC32MX470F512H|PIC32MX Curiosity Development Board|
|sam\_e54\_xpro.X|MPLABX|ATSAME54P20A|SAM E54 Xplained Pro Board|
|sam\_e54\_xpro\_freertos.X|MPLABX|ATSAME54P20A|SAM E54 Xplained Pro Board|
|sam\_e70\_xult.X|MPLABX|ATSAME70Q21B|SAM E70 Xplained Ultra Board|
|sam\_e70\_xult\_freertos.X|MPLABX|ATSAME70Q21B|SAM E70 Xplained Ultra Board|
|pic32cz\_ca80\_curiosity\_ultra.X|MPLABX|PIC32CZ8110CA80208|PIC32CZ CA80 Curiosity Ultra development board|
|sam\_9x75\_eb.X|MPLABX|SAM9X75|SAM9X75-DDR3-EB Evaluation Board|

## **Configuring the Hardware**

**[Curiosity PIC32MZ EF 2.0 Development Board](https://www.microchip.com/Developmenttools/ProductDetails/DM320209)**

-   Use the USB micro-B port J201 to connect the USB Device to the USB Host PC.
-   LED1 indicates USB Device Configuration Set Complete event \(the USB device functionality has been activated by the USB Host\).
-   Use Switch SW1 to stop and start the circular motion of the mouse pointer.

**[Curiosity PIC32MX470 Development Board](https://www.microchip.com/Developmenttools/ProductDetails/dm320103)**

-   Use the USB micro-B port J12 to connect the USB Device to the USB Host PC.
-   LED1 indicates USB Device Configuration Set Complete event \(the USB device functionality has been activated by the USB Host\).
-   Press the switch S1 to trigger communication from the USB Device to the USB Host.

**[PIC32CZ CA80 Curiosity Ultra development board](https://www.microchip.com/en-us/development-tool/ea61x20a)**

-   Use the USB micro-B "USB DEVICE" connector \(J102\) to connect the USB Device to the USB Host PC.
-   LED1 indicates USB Device Configuration Set Complete event \(the USB device functionality has been activated by the USB Host\).
-   Press the switch SW0 to trigger communication from the USB Device to the USB Host.

**[SAM E54 Xplained Pro Board](https://www.microchip.com/developmenttools/productdetails/atsame54-xpro)**

-   Use TARGET USB connector on the board to connect the USB Device to the USB Host PC.
-   LED0 indicates USB Device Configuration Set Complete event \(the USB device functionality has been activated by the USB Host\).
-   Use the Switch SW0 to stop and start the circular motion of the mouse pointer.

**[SAM E70 Xplained Ultra Board](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DM320113)**

-   Jumper J203 must be shorted between PB08 and VBUS \(positions 2 and 3\).
-   Use TARGET USB J200 connector on the board to connect the USB Device to the USB Host PC.
-   LED3 indicates USB Device Configuration Set Complete event \(the USB device functionality has been activated by the USB Host\).
-   Use Switch SW400 to stop and start the circular motion of the mouse pointer.

**[SAM9X75-DDR3-EB Evaluation Board](https://www.microchip.com/en-us/development-tool/EA14J50A)**

-   Powered the board with an external power supply \(or use the micro AB<br /> connector\).

-   Setup the SD card \(Note: exFAT formatted SD Cards are not supported\)

    -   Download harmony MPU bootstrap loader from this [location](https://github.com/Microchip-MPLAB-Harmony/usb_apps_device/tree/master/deps/at91bootstrap_sam_9x7_binaries/boot.bin).
    -   Copy the downloaded boot loader binary \(boot.bin\) and generated application binary \(harmony.bin\) into the SD card.
    -   Insert the SD card into the SDMMC connector \(SDMMC0\) on the board.
    -   Reset the board by pressing the Push Button RESET, then START.
-   Connect the USB Micro-AB Connector on the board to the computer using a micro<br /> USB cable.

-   LED near VDDCORE inscription on the board indicates USB Device Configuration<br /> Set Complete event \(The USB device functionality has been activated by the USB<br /> Host\).

-   Press the switch USER to stop and start the circular motion of the mouse<br /> pointer.

    ![](GUID-8F485B5C-0DFC-47B7-A493-8B8AA7796BD8-low.png)


## **Running the Application**

This demonstration uses the selected hardware platform as a USB Mouse. Open the<br /> project with appropriate IDE. Compile the project and program the target device.

The LED on the demonstration board will indicate the USB state of the device.<br /> Refer to the Configuring the Hardware Section for details.

Before connecting the board to the computer through the USB cable please be aware<br /> that the device will begin moving the mouse cursor on the computer. There are two ways to<br /> stop the device from allowing the cursor to continue to move. The first way is to disconnect<br /> the device from the computer. The second is to press the correct button on the hardware<br /> platform. Pressing the button again will cause the mouse cursor to start moving in a circle<br /> again.

**Parent topic:**[Harmony 3 USB Device application examples](GUID-90055758-897E-445A-8A8B-CE4EBF3930A7.md)

