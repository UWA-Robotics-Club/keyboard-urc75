# urc75

A keyboard for the make your own keyboard workshop.

* Keyboard Maintainer: [prash](https://github.com/Quarterpie3141)
* Hardware Supported: prototype-rev4, prototype-rev3, ver1.0 , controllers supported: rp2040, rp2350
* Hardware Availability: depends on workshop

Make example for this keyboard (after setting up your build environment):

    make urc75:default

Flashing example for this keyboard:

    just drag and drop the uf2 file into the RP2 boot drive

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: ~~Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard~~ Bootmagic is disabled 
* **Physical reset button**: hold down the button on the pcb labeled BTSL, while holding it down press the button labeled RST, or plug the board in
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available - Depends on you own layout

## Customizing
* **To customize layout**: edit the `keymaps/default/keymap.c` file
* **To customize RGB effects**: edit the `info.json` and `config.h` file
* **To customize the OLED Animation**: edit the `urc75.c` file