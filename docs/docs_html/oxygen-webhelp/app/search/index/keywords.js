define(function() {var keywords=[{w:"Worldwide",p:["p0"]},{w:"Sales",p:["p0"]},{w:"and",p:["p0"]},{w:"Service",p:["p0","p24"]},{w:"Quality",p:["p1"]},{w:"Management",p:["p1"]},{w:"System",p:["p1"]},{w:"1.8",p:["p2"]},{w:"HID",p:["p2","p6","p13","p14","p17","p21"]},{w:"Basic",p:["p2","p7","p11","p14","p17"]},{w:"Remote",p:["p2"]},{w:"Wakeup",p:["p2"]},{w:"Example",p:["p2","p6","p7","p9","p10","p11","p13","p14","p15","p17","p18","p20","p21","p22","p23","p25","p26","p27","p30"]},{w:"(hid_basic_remote_wakeup)",p:["p2"]},{w:"Microchip",p:["p3","p8","p16","p28"]},{w:"Information",p:["p3"]},{w:"Legal",p:["p4"]},{w:"Notice",p:["p4"]},{w:"Trademarks",p:["p5"]},{w:"1.9",p:["p6"]},{w:"Joystick",p:["p6"]},{w:"(hid_joystick)",p:["p6"]},{w:"1.13",p:["p7"]},{w:"MSD",p:["p7","p11","p15","p17","p18","p22","p30"]},{w:"(msd_basic)",p:["p7"]},{w:"2",p:["p8"]},{w:"MPLAB\u00AE",p:["p8"]},{w:"Harmony",p:["p8","p19"]},{w:"3",p:["p8","p12","p19"]},{w:"Release",p:["p8"]},{w:"Notes",p:["p8"]},{w:"1.18",p:["p9"]},{w:"USB",p:["p9","p19","p23"]},{w:"UART",p:["p9","p23"]},{w:"Bridge",p:["p9","p23"]},{w:"Single",p:["p9","p26"]},{w:"Channel",p:["p9","p23"]},{w:"(usb_usart_bridge_single)",p:["p9"]},{w:"1.19",p:["p10"]},{w:"Vendor",p:["p10"]},{w:"(vendor)",p:["p10"]},{w:"1.3",p:["p11"]},{w:"CDC",p:["p11","p18","p25","p26","p27","p30"]},{w:"(cdc_msd_basic)",p:["p11"]},{w:"License",p:["p12"]},{w:"1.10",p:["p13"]},{w:"Keyboard",p:["p13"]},{w:"(hid_keyboard)",p:["p13"]},{w:"1.7",p:["p14"]},{w:"(hid_basic)",p:["p14"]},{w:"1.15",p:["p15"]},{w:"SD",p:["p15","p18"]},{w:"Card",p:["p15","p18"]},{w:"(msd_sdcard)",p:["p15"]},{w:"The",p:["p16"]},{w:"Website",p:["p16"]},{w:"1.12",p:["p17"]},{w:"(hid_msd_basic)",p:["p17"]},{w:"1.4",p:["p18"]},{w:"(cdc_msd_sdcard)",p:["p18"]},{w:"1",p:["p19"]},{w:"Device",p:["p19"]},{w:"application",p:["p19"]},{w:"examples",p:["p19"]},{w:"1.16",p:["p20"]},{w:"Printer",p:["p20"]},{w:"(printer)",p:["p20"]},{w:"1.11",p:["p21"]},{w:"Mouse",p:["p21"]},{w:"(hid_mouse)",p:["p21"]},{w:"1.14",p:["p22"]},{w:"Multiple",p:["p22"]},{w:"LUN",p:["p22"]},{w:"(msd_multiple_luns)",p:["p22"]},{w:"1.17",p:["p23"]},{w:"Dual",p:["p23","p27"]},{w:"(usb_usart_bridge_dual)",p:["p23"]},{w:"Product",p:["p24"]},{w:"Change",p:["p24"]},{w:"Notification",p:["p24"]},{w:"1.5",p:["p25"]},{w:"Serial",p:["p25","p30"]},{w:"Emulator",p:["p25","p30"]},{w:"(cdc_serial_emulator)",p:["p25"]},{w:"1.2",p:["p26"]},{w:"COM",p:["p26","p27"]},{w:"Port",p:["p26","p27"]},{w:"(cdc_com_port_single)",p:["p26"]},{w:"1.1",p:["p27"]},{w:"(cdc_com_port_dual)",p:["p27"]},{w:"Devices",p:["p28"]},{w:"Code",p:["p28"]},{w:"Protection",p:["p28"]},{w:"Feature",p:["p28"]},{w:"Customer",p:["p29"]},{w:"Support",p:["p29"]},{w:"1.6",p:["p30"]},{w:"(cdc_serial_emulator_msd)",p:["p30"]},{w:"Context",p:["p31"]},{w:"Sensitive",p:["p31"]},{w:"Help",p:["p31"]}];
var ph={};
ph["p0"]=[0, 1, 2, 3];
ph["p1"]=[4, 5, 6];
ph["p2"]=[7, 8, 9, 10, 11, 12, 13];
ph["p3"]=[14, 15];
ph["p4"]=[16, 17];
ph["p5"]=[18];
ph["p6"]=[19, 8, 20, 12, 21];
ph["p7"]=[22, 23, 9, 12, 24];
ph["p8"]=[25, 14, 26, 27, 28, 29, 30];
ph["p9"]=[31, 32, 33, 34, 35, 36, 12, 37];
ph["p30"]=[96, 42, 81, 82, 23, 12, 97];
ph["p10"]=[38, 39, 12, 40];
ph["p31"]=[98, 99, 100];
ph["p12"]=[28, 44];
ph["p11"]=[41, 42, 23, 9, 12, 43];
ph["p14"]=[48, 8, 9, 12, 49];
ph["p13"]=[45, 8, 46, 12, 47];
ph["p16"]=[54, 14, 55];
ph["p15"]=[50, 23, 51, 52, 12, 53];
ph["p18"]=[58, 42, 23, 51, 52, 12, 59];
ph["p17"]=[56, 8, 23, 9, 12, 57];
ph["p19"]=[60, 27, 28, 32, 61, 62, 63];
ph["p21"]=[67, 8, 68, 12, 69];
ph["p20"]=[64, 65, 12, 66];
ph["p23"]=[74, 32, 33, 34, 75, 36, 12, 76];
ph["p22"]=[70, 23, 71, 72, 12, 73];
ph["p25"]=[80, 42, 81, 82, 12, 83];
ph["p24"]=[77, 78, 79, 3];
ph["p27"]=[88, 42, 85, 86, 75, 12, 89];
ph["p26"]=[84, 42, 85, 86, 35, 12, 87];
ph["p29"]=[94, 95];
ph["p28"]=[14, 90, 91, 92, 93];
     return {
         keywords: keywords,
         ph: ph
     }
});
