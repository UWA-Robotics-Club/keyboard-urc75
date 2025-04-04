## Build your own Keyboard - URC 75

# 5. Testing the Solder Joints

In this section, we will show you how to test all your connections and ensure that your board is working correctly

# Loading the Firmware 

![image](/Build_Instructions/5_Testing_Solder_Joints_img/Flash%20the%20Firmware%20to%20Test%20the%20LEDS/1.JPG)
  Find a USB C Cable to connect your Board to your computer <br/>

### NOTE: this kit DOES NOT include a USB C Cable 

![image](/Build_Instructions/5_Testing_Solder_Joints_img/Flash%20the%20Firmware%20to%20Test%20the%20LEDS/3.JPG)
  Plug your USB Cable into your computer. 
  
  HOLD THE "BOOTSEL" Button down while plugging the board into your computer <br/>

### NOTE: if you do not hold down the BOOTSEL button the following will not work.

![image](/Build_Instructions/5_Testing_Solder_Joints_img/Flash%20the%20Firmware%20to%20Test%20the%20LEDS/4.JPG)
  Your Board should show up on your computer as USB Drive called RPI-RP2 <br/>

## [Download the firmware from our repo here](/Firmware/urc75/urc75_FIRMWARE.uf2)

The firmware you downloaded should be a .uf2 filetype. 

![image](/Build_Instructions/5_Testing_Solder_Joints_img/Flash%20the%20Firmware%20to%20Test%20the%20LEDS/5.JPG)
  Copy the Firmware to your board by transferring the .uf2 file to the USB Drive called RPI-RP2 <br/>



![image](/Build_Instructions/5_Testing_Solder_Joints_img/Flash%20the%20Firmware%20to%20Test%20the%20LEDS/7.JPG)
  ### NOTE: The Board should SELF - EJECT <br/>

![image](/Build_Instructions/5_Testing_Solder_Joints_img/Flash%20the%20Firmware%20to%20Test%20the%20LEDS/8.JPG)
 Your Board should Light Up as shown here!  <br/>

# Testing all the keys
In this section we will short all of the keys to ensure that both the sockets and the diodes which you soldered are working correctly for every key

![image](/Build_Instructions/5_Testing_Solder_Joints_img/Flash%20the%20Firmware%20to%20Test%20the%20LEDS/9.JPG)
Go to a Keyboard testing site such as the [one hosted by QMK Firmware](https://config.qmk.fm/#/test)  <br/>

![image](/Build_Instructions/5_Testing_Solder_Joints_img/Flash%20the%20Firmware%20to%20Test%20the%20LEDS/10.JPG)
 The testing site should look like this   <br/>

![image](/Build_Instructions/5_Testing_Solder_Joints_img/Flash%20the%20Firmware%20to%20Test%20the%20LEDS/11.JPG)
 Turn your board over and use something conductive to bridge the solderjoints on the socket for each key. Your kit comes with a paperclip , which is perfect for this, else you can use tweezers, solder or something else.   
 
 Doing this "simulates" a key stroke from a switch, and the electrical current passes through both the Diode and the socket. If there is any problems with the solder joints on those components, it will not register a keystroke to the computer.
   <br/>

![image](/Build_Instructions/5_Testing_Solder_Joints_img/Flash%20the%20Firmware%20to%20Test%20the%20LEDS/12.JPG)
After touching the solder joints for a key, it should show as green on the testing site   <br/>

![image](/Build_Instructions/5_Testing_Solder_Joints_img/Flash%20the%20Firmware%20to%20Test%20the%20LEDS/13.JPG)
If any keys display as RED, this is ok, it means that the key has been detected by the computer but that there is some chatter on that signal. 

This could just be because we are shorting the signalwire with a paperclip, but if it is a genuine problem, then you can reflow the solder joints on the Diode (top of the board) and the switch socket <br/>

When you have tested all the solder joints, your display should have the following keys be lit up is either green or red: 
![image](/Build_Instructions/5_Testing_Solder_Joints_img/Flash%20the%20Firmware%20to%20Test%20the%20LEDS/CorrectKeys.png)

You should notice that there are some keys on the Right side of the board (when looking from the front) which do not do anything when they are pressed, this is because we have mapped these keys to MEDIA functions by default. 

In the below image the mapping should be: 
Red = DELETE, GREEN = Volume Up, BLUE = Volume Down, Orange = Next song, Purple = Play/Pause

![image](/Build_Instructions/5_Testing_Solder_Joints_img/Flash%20the%20Firmware%20to%20Test%20the%20LEDS/Media%20Keys.JPG)

In order to test these keys, you may need to open a music app like Spotify to test the "Next song" and "Play/pause " functions. If the song is successfully changed, and the play pause functionality is seen, then the electrical connections to these switches are successful.

# Well Done ! You have tested all your solder joints for your keyboard! 

Next you will Assemble the Case!

# [Go to next Section](/Build_Instructions/6_Heatset_and_Case_Assembly.md)
