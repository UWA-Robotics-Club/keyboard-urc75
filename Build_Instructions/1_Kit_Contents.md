

## Build your own Keyboard - URC 75

# 1. Kit Contents 

This section will show and describe all parts that come in the URC 75 kit and all of the additional tools you will require to assemble it 

![Kit_Laid_out](/Build_Instructions/Build_img/Kit%20Laid%20Out.JPG)

### Your URC 75 Kit will come containing the following items:

| Image     | Item     |
| ------------- | ------------- |
| ![Kit_Laid_out](/Build_Instructions/Build_img/TopCase.png )  | 1x Resin 3D Printed Top  |
| ![Kit_Laid_out](/Build_Instructions/Build_img/BottomCase.png )  | 1x Resin 3d Printed Bottom Case  |
| ![Kit_Laid_out](/Build_Instructions/Build_img/MainBoard.png )  | 1x Custom URC75 main circuitboard  |
| ![Kit_Laid_out](/Build_Instructions/Build_img/KeyCapSet.png )  | 1x White Pudding style Keycaps Set  |
| ![Kit_Laid_out](/Build_Instructions/Build_img/OLEDDisplay.png )  | 1x OLED Display  |
| ![Kit_Laid_out](/Build_Instructions/Build_img/StabSet.png )  | 1x Stabilisers set ( 1x 6.25u , 3x 1.5u, Rubber gaskets, screws)  |
| ![Kit_Laid_out](/Build_Instructions/Build_img/Sockets.png )  | 84x Hotswap Sockets  |
| ![Kit_Laid_out](/Build_Instructions/Build_img/Switches.png)  | 84x Linear Keyswitches  |
| ![Kit_Laid_out](/Build_Instructions/Build_img/Diodes.png)  |  84x Through hole Diodes |
| ![Kit_Laid_out](/Build_Instructions/Build_img/M2x22%20x2pcs.png)  |  2x 22mm M2 Socket Head Screws |
| ![Kit_Laid_out](/Build_Instructions/Build_img/M2x20%20x2pcs.png)  |  2x 20mm M2 Socket Head Screws |
| ![Kit_Laid_out](/Build_Instructions/Build_img/M2x18%20x7pcs.png)  |  7x 18mm M2 Socket Head Screws |
| ![Kit_Laid_out](/Build_Instructions/Build_img/M2x8mm%20x%2011pcs.png)  |  11x 8mm M2 Socket Head Screws |
| ![Kit_Laid_out](/Build_Instructions/Build_img/M2%20Inserts%20x33pcs.png)  |  33x M2 Heat Set inserts |
| ![Kit_Laid_out](/Build_Instructions/Build_img/M2%20Standoffs.png)  |  4x M2 Stand offs |
| ![Kit_Laid_out]()  |  1x Acryllic Window |
| ![Kit_Laid_out](/Build_Instructions/Build_img/PaperBagPackaging.png)  |  1x Paper Bag Packaging |

 

### In addition to the URC75 kit you will need:
- Soldering Iron 
- Solder 
- M2 Allen key / driver
- Masking Tape
- Side Cutters
- **USB C Cable**



# Testing LEDs

We will download the URC75 Firmware and flash it to the board in order to test that all the presoldered LEDs function correctly before continuing

[First download the URC75 Firmwarehere](/Firmware/urc75/urc75_FIRMWARE.uf2) 

Unwrap the main circuit board and hold down the "BOOTSEL" button bear the USB C Port

Then, while holding down the "BOOTSEL" button,  plug in your Main circuit board into your computer using a known good USB C cable

The circuit board should show on your computer as a USB drive called "RP2040"

Copy the urc75_FIRMWARE.uf2 file to the this USB drive, it should self eject and reboot the circuitboard. 

The board should come to life and all LEDs on the front of the board should be lit in a rainbow pattern. 

Look over all the LEDs and ensure they are all lit, as it is easier to fix at this point rather than tearing down the whole board once it is complete. 

# [Go to Section 2]() 
