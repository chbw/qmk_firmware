
# ha_ck61

This is for a Motospeed CK61 stripped of it's original controller and rewired to a BluePill (generic Chinese STM32F103C8T6).

The software is based on the handwired/bluepill from [FPazos](https://github.com/fpazos), which in turn is based on the [KC64 of Xydane](https://github.com/Xydane/qmk_firmware).

Keyboard Maintainer: [chbw](https://github.com/chbw)
Hardware Supported: Motospeed CK61 wired to Bluepill STM32F103C8T6
Hardware Availability: Everywhere

Make example for this keyboard (after setting up your build environment):

    make handwired/ha_ck61:default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

Read everything before using it.

## Introduction

First of all thanks to [FPazos](https://github.com/fpazos) and [Xydane](https://github.com/Xydane) at [GeekHack](https://geekhack.org/) for their bluepill firmware, without them you couldn't be reading this.

## Resistor fix

If you want to use the Bluepill USB port, it's very likely that you need to solder a 1.8 kΩ between PA12 and 3.3V. That depends on the PC's motherboard but I needed, more info [here](https://wiki.stm32duino.com/index.php?title=Blue_Pill).

## No bootloader

Neither FPazos, Xydane nor I used the bootloader. I just used a cheap ST-LINK compatible programmer.
