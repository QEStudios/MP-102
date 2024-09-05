# MP-102 Macropad

The MP-102 Macropad features 10 MX-compatible keys and 2 rotary encoders with optional buttons. It uses a Raspberry Pi Pico (RP2040) or compatible microcontroller as the brains. It can be constructed by anyone as long as you have a 3D printer.

## Ordering parts

The MP-102 was designed to be built on a budget of around $35 Australian Dollars. Thus, parts were aquired from less reliable places than where you might normally buy them. I've linked the relevant places here as well as in the `Layout and BOM.xlsx` file, but all of the parts are generic and can be bought from wherever you find easiest (or cheapest).
I ordered the Hot Melt Inserts from the link provided quite a while before I started this project, so I didn't personally factor this cost into the price of my own build of the MP-102.

[All prices in Australian Dollars]
| Item                       | Price | Link                                                  |
|----------------------------|-------|-------------------------------------------------------|
| 5pcs Rotary Encoder        | $5.27 | https://www.aliexpress.com/item/1005003070250718.html |
| 10pcs Keycaps              | $4.17 | https://www.aliexpress.com/item/1005005825113345.html |
| 10pcs Key Switches         | $4.61 | https://www.aliexpress.com/item/1005006376024657.html |
| Raspberry Pi Pico          | $4.32 | https://www.aliexpress.com/item/1005006293406528.html |
| 10pcs Hotswap Sockets      | $2.65 | https://www.aliexpress.com/item/1005006737039916.html |
| M2 OD3.5 Holt Melt Inserts | $5.93 | https://www.aliexpress.com/item/1005006465779940.html |
| USB C Cable                | $2.39 | https://www.aliexpress.com/item/1005006065386047.html |
| PCB                        | $5.20 | https://jlcpcb.com/                                   |


## Build Instructions

### 3D Prints

All 3D model files can be found in the `3D Models` folder in this repository.
You might want to first print out `USB C Test Piece.stl` and make sure that your USB cable fits through the hole, as this is the size of the opening to the USB C port on the Pico.
There are two different files for the knobs, one with 0.1mm tolerences and one with 0.2mm tolerences. I recommend printing both and choosing the one which fits better for you. You can also use the horizontal expansion setting in your slicer to fine-tune this to your liking.
All files (excluding `USC C Test Piece.stl`) need to be printed only once, apart from the knob file (either `Knob 0.1mm Clearance.stl` or `Knob 0.2mm Clearance.stl`), which you need to print 2 of.
The top part of the case should slide onto the bottom part of the case. You'll need to insert the hot melt inserts into the two holes on the underside of the top part of the case. 

### PCB

The PCB was designed in KiCad, and the project files for the PCB can be found in the `PCB` folder in this repository.
The gerber files have been included in the `PCB/gerbers` folder, but your mileage may vary when using them. I recommend re-generating the gerbers yourself, just to be safe.
I ordered the PCBs

### Flashing the Pico

1. Install QMK by following [this guide](https://docs.qmk.fm/newbs_getting_started).
2. Copy the `QMK Definition` folder into your QMK `keyboards` directory, and rename the `QMK Definition` folder to `mp102`.
3. Run `qmk flash -kb mp102 -km default` in the QMK MSYS terminal. When it says it's waiting for the device, plug the Pico into your computer while holding the BOOT button down. QMK should flash the Pico with the correct firmware.

### Assembly

1. Solder all the components onto the PCB. Make sure that the Pico is soldered onto the **underside** of the PCB.
2. Click the keyswitches into the plate. The top 2 rows should be oriented facing upwards (with the pins on the bottom), and the lower row of 2 switches should be oriented facing downwards (with the pins on the top). If you're using keycaps that let you customise their legends, now is a good time to do that.


# TODO: finish documentation