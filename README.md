# NRF52840 MicroMod for PlatformIO

This repository contains the files needed to add the sparkfun MicroMod NRF52 to the PlatformIO IDE using the Adafruit NRF52 core instead of the Arduino Nano 33 BLE core that sparkfun specifies in their guide.
Using the adafruit core gives the micromod access to the BluefruitNRF52 library which has many more examples and easy to use API compared to the Nano 33 libraries.

## Adding the NRF52 MicroMod to PlatformIO
1. Add "SF_MM_nRF52840_PB" folder to -> .platformio/packages/framework-arduinoadafruitnrf52/variants
2. Add "sparkfun_micromod_nrf52840.json" file to -> .platformio/platforms/nordicnrf52/boards
3. Copy text from "boards.txt" file and paste the text into the bottom of the -> .platformio/packages/framework-arduinoadafruitnrf52/boards.txt file.

## Uploading the MicroMod Adafruit Bootloader to the Board
1. Go to https://github.com/adafruit/Adafruit_nRF52_Bootloader
2. Under the latest release, click on the file to download (you may have to click on the link that says "show all assets" first) : update-sparkfun_nrf52840_micromod_bootloader-0.x.x_nosd.uf2
3. On your micromod board, double click the reset button and you should see a drive appear on your computer
4. drag the uf2 file to the drive. Once you do that, the drive will automatically eject itself, meaning the bootloader has now been updated.

![Image of the NRF52840 Micromod from SparkFun](https://cdn.sparkfun.com/assets/parts/1/5/9/2/1/16984-SparkFun_MicroMod_nRF52840_Processor-04.jpg)

