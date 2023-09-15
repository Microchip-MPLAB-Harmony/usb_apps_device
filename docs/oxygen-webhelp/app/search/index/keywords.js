define(function() {var keywords=[{w:"1.8",p:["p0"]},{w:"HID",p:["p0","p1","p8","p9","p11","p15"]},{w:"Basic",p:["p0","p2","p6","p9","p11"]},{w:"Remote",p:["p0"]},{w:"Wakeup",p:["p0"]},{w:"Example",p:["p0","p1","p2","p4","p5","p6","p8","p9","p10","p11","p12","p14","p15","p16","p17","p18","p19","p20","p21"]},{w:"(hid_basic_remote_wakeup)",p:["p0"]},{w:"1.9",p:["p1"]},{w:"Joystick",p:["p1"]},{w:"(hid_joystick)",p:["p1"]},{w:"1.13",p:["p2"]},{w:"MSD",p:["p2","p6","p10","p11","p12","p16","p21"]},{w:"(msd_basic)",p:["p2"]},{w:"2",p:["p3"]},{w:"Microchip",p:["p3"]},{w:"MPLAB\u00AE",p:["p3"]},{w:"Harmony",p:["p3","p13"]},{w:"3",p:["p3","p7","p13"]},{w:"Release",p:["p3"]},{w:"Notes",p:["p3"]},{w:"1.18",p:["p4"]},{w:"USB",p:["p4","p13","p17"]},{w:"UART",p:["p4","p17"]},{w:"Bridge",p:["p4","p17"]},{w:"Single",p:["p4","p19"]},{w:"Channel",p:["p4","p17"]},{w:"(usb_usart_bridge_single)",p:["p4"]},{w:"1.19",p:["p5"]},{w:"Vendor",p:["p5"]},{w:"(vendor)",p:["p5"]},{w:"1.3",p:["p6"]},{w:"CDC",p:["p6","p12","p18","p19","p20","p21"]},{w:"(cdc_msd_basic)",p:["p6"]},{w:"License",p:["p7"]},{w:"1.10",p:["p8"]},{w:"Keyboard",p:["p8"]},{w:"(hid_keyboard)",p:["p8"]},{w:"1.7",p:["p9"]},{w:"(hid_basic)",p:["p9"]},{w:"1.15",p:["p10"]},{w:"SD",p:["p10","p12"]},{w:"Card",p:["p10","p12"]},{w:"(msd_sdcard)",p:["p10"]},{w:"1.12",p:["p11"]},{w:"(hid_msd_basic)",p:["p11"]},{w:"1.4",p:["p12"]},{w:"(cdc_msd_sdcard)",p:["p12"]},{w:"1",p:["p13"]},{w:"Device",p:["p13"]},{w:"application",p:["p13"]},{w:"examples",p:["p13"]},{w:"1.16",p:["p14"]},{w:"Printer",p:["p14"]},{w:"(printer)",p:["p14"]},{w:"1.11",p:["p15"]},{w:"Mouse",p:["p15"]},{w:"(hid_mouse)",p:["p15"]},{w:"1.14",p:["p16"]},{w:"Multiple",p:["p16"]},{w:"LUN",p:["p16"]},{w:"(msd_multiple_luns)",p:["p16"]},{w:"1.17",p:["p17"]},{w:"Dual",p:["p17","p20"]},{w:"(usb_usart_bridge_dual)",p:["p17"]},{w:"1.5",p:["p18"]},{w:"Serial",p:["p18","p21"]},{w:"Emulator",p:["p18","p21"]},{w:"(cdc_serial_emulator)",p:["p18"]},{w:"1.2",p:["p19"]},{w:"COM",p:["p19","p20"]},{w:"Port",p:["p19","p20"]},{w:"(cdc_com_port_single)",p:["p19"]},{w:"1.1",p:["p20"]},{w:"(cdc_com_port_dual)",p:["p20"]},{w:"1.6",p:["p21"]},{w:"(cdc_serial_emulator_msd)",p:["p21"]},{w:"Context",p:["p22"]},{w:"Sensitive",p:["p22"]},{w:"Help",p:["p22"]}];
var ph={};
ph["p0"]=[0, 1, 2, 3, 4, 5, 6];
ph["p1"]=[7, 1, 8, 5, 9];
ph["p2"]=[10, 11, 2, 5, 12];
ph["p3"]=[13, 14, 15, 16, 17, 18, 19];
ph["p4"]=[20, 21, 22, 23, 24, 25, 5, 26];
ph["p5"]=[27, 28, 5, 29];
ph["p6"]=[30, 31, 11, 2, 5, 32];
ph["p7"]=[17, 33];
ph["p8"]=[34, 1, 35, 5, 36];
ph["p9"]=[37, 1, 2, 5, 38];
ph["p10"]=[39, 11, 40, 41, 5, 42];
ph["p21"]=[74, 31, 65, 66, 11, 5, 75];
ph["p20"]=[72, 31, 69, 70, 62, 5, 73];
ph["p12"]=[45, 31, 11, 40, 41, 5, 46];
ph["p11"]=[43, 1, 11, 2, 5, 44];
ph["p22"]=[76, 77, 78];
ph["p14"]=[51, 52, 5, 53];
ph["p13"]=[47, 16, 17, 21, 48, 49, 50];
ph["p16"]=[57, 11, 58, 59, 5, 60];
ph["p15"]=[54, 1, 55, 5, 56];
ph["p18"]=[64, 31, 65, 66, 5, 67];
ph["p17"]=[61, 21, 22, 23, 62, 25, 5, 63];
ph["p19"]=[68, 31, 69, 70, 24, 5, 71];
     return {
         keywords: keywords,
         ph: ph
     }
});
