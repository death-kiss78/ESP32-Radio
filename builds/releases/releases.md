## Pre-built Firmwares & WebUI Assets

You do not need to download any of these files if you use use the [ehRadio Flasher](https://trip5.github.io/ehRadio/flasher.html).

But you can click the binary name to see how that firmware is configured... skip down to [Boards](#boards).

eh Device Scanner app can be used to connect to the WebUI easily - get the app [here](https://trip5.github.io/eh-Device-Scanner/).

### Flashing Notes
  - You can download .bin files and flash to your ESP with `esptool`
  - you will need a firmware file appropriate to your build (see below)
  - depending on your board, choose the appropriate `board_*_bootloader.bin` and `board_*_partitions.bin`
  - for most ESP32s, use:
    - `esptool --chip esp32 --port com14 --baud 460800 write_flash -z 0x1000 esp32_bootloader.bin 0x8000 esp32_partitions.bin 0x10000 [firmware.bin]`
  - for ESP32-S3s (like the ESP32-S3-N16R8) use:
    - `esptool --chip esp32s3 --port com8 --baud 460800 write_flash -z 0x0000 esp32_s3_n16r8_bootloader.bin 0x8000 esp32_s3_n16r8_partitions.bin 0x10000 [firmware.bin]`
  - to install the WebUI files in the same pass, append the filesystem image at the end:
    - `esptool --chip esp32s3 --port com8 --baud 460800 write_flash -z 0x0000 esp32_s3_n16r8_bootloader.bin 0x8000 esp32_s3_n16r8_partitions.bin 0x10000 [firmware.bin] 0xC90000 esp32_s3_n16r8_filesystem.bin`
    - without it, a freshly flashed radio formats its storage on first boot (3 to 5 minutes on 16MB, up to 8 on 32MB) and then downloads the WebUI once it joins Wi-Fi
    - with it, the radio boots with the pages already in place: no format, no download, works offline afterwards
    - it replaces `wifi.csv`, the saved stations and the playlists, so treat it as a fresh install, not an update
  - the filesystem offset comes from the board's partition table, not from the image:
    - 8MB flash: `0x670000`, 1.5MB
    - 16MB flash (the ESP32-S3-N16R8): `0xC90000`, 3.38MB
    - 32MB flash: `0x1910000`, 6.75MB
    - 4MB flash without OTA: `0x340000`, 768KB

### Shared Binaries (Bootloader/Partitions/Filesystem)
  - `esp32_s3_n16r8_bootloader.bin` / `esp32_s3_n16r8_partitions.bin`
  - `esp32_s3_n16r8_filesystem.bin` - the pre-packed WebUI filesystem; the offset for each layout is listed in above
  - more will be added as contributors add their boards

### Upload_Files.zip
  - this is an easy-to-download file that contains all of the LittleFS files
  - you can use this to upload necessary WebUI files instead of allowing automatic download
    - extract all files
    - connect to the `ehRadio` AP and upload all of the files in the `data` folder
    - you may also edit `wifi.csv` and the `playlist.csv` files and upload those as well

### Web Assets
  - all other files are needed for the WebUI functionality
  - they are available here to allow automatic downloading to LittleFS during first installs or after an OTA update

## Boards
  - each of the pre-built board binaries have pre-set hardware configurations, they cannot be changed
  - to view pin usage, click the firmware's link below

### No Display Firmware
  - [`no_display_test.bin`](https://death-kiss78.github.io/myRadio/boards.html?board=no_display)

### Death-Kiss78 Firmware
  - [`death-kiss78_es3c28s.bin`](https://death-kiss78.github.io/myRadio/boards.html?board=es3c28s)
### Add Yours
  - you can either fork my `ehradio` repo and edit these files or request a build be added
    - use [the generator](https://trip5.github.io/ehRadio/myoptions/generator.html) and copy the link and include it in your request
