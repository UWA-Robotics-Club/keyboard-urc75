# urc75

![urc75](imgur.com image replace me!)

A keyboard for the make your own keyboard workshop.

* Keyboard Maintainer: [prash](https://github.com/Quarterpie3141)
* Hardware Supported: The URC75 pcb rev3 and rev4 , controllers supported: rp2040, rp2350
* Hardware Availability: hehe

Make example for this keyboard (after setting up your build environment):

    make urc75:default

Flashing example for this keyboard:

    make urc75:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: ~~Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard~~ Bootmagic is disabled 
* **Physical reset button**: hold down the button on the pcb labeled BTSL, while holding it down press the button labeled RST, or plug the board in
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available - Depends on you own layout
