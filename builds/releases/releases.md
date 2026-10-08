## Pre-built Firmwares & WebUI Assets
  You can download the firmware and flash yourself or you can use my [Web Installer](https://trip5.github.io/ehRadio/firmware.html).
### Notes
  - You can download .bin files and flash to your ESP with `esptool`
  - you will need a firmware file appropriate to your build (see below)
  - depending on your board, choose the appropriate `board_*_bootloader.bin` and `board_*_partitions.bin`
  - for most ESP32s, use:
    - `esptool --chip esp32 --port com14 --baud 460800 write_flash -z 0x1000 esp32_bootloader.bin 0x8000 esp32_partitions.bin 0x10000 [firmware.bin]`
  - for ESP32-S3s (like the ESP32-S3-N16R8) use:
    - `esptool --chip esp32s3 --port com8 --baud 460800 write_flash -z 0x0000 esp32_s3_n16r8_bootloader.bin 0x8000 esp32_s3_n16r8_partitions.bin 0x10000 [firmware.bin]`
## Boards
  - each of the pre-built board binaries have pre-set hardware configurations, they cannot be changed
  - to view pin usage, click the firmware's link below
### Shared Binaries (Bootloader/Partitions)
  - `esp32_s3_n16r8_bootloader.bin` / `esp32_s3_n16r8_partitions.bin`
  - more will be added as contributors add their boards

### eh Device Scanner app can be used to connect to the WebUI easily - get the app [here](https://trip5.github.io/eh-Device-Scanner/)


### death_kiss78 Firmware
  - [`death_kiss78_es3c28p.bin`](https://trip5.github.io/ehRadio/myoptions/generator.html#eyJibiI6IkVTUDMyLVMzIEVTM0MyOFAgKEVTUDMyLVMzLU4xNlI4KSIsImRkIjoiRFNQX01PREVMIERTUF9JTEk5MzQxIiwiZG4iOiJJTEk5MzQxIChTUEkgMzIweDI0MCBURlQpIiwiYWQiOiJVU0VfRVM4MzExIiwiYW4iOiJFUzgzMTEgKFBDTSBJMlMgTW9ubyBEZWNvZGVyKSIsImNpIjpbIlRTX01PREVMIFRTX01PREVMX0ZUNjMzNiIsIkJ1dHRvbjogTW9kZSBTd2l0Y2giXSwiY3AiOlsiRGlzcGxheSBGb250IiwiQ2xvY2sgRm9udCIsIlJHQiBMRUQiLCJJUiBSZWNlaXZlciIsIlNESU8gQ2FyZCBSZWFkZXIgKFNETU1DOiBFU1AzMi1TMyBvbmx5KSJdLCJjcyI6WyJBIl0sImNvIjpbIlRGVF9SU1QiLCJCUklHSFRORVNTX1BJTiIsIkRTUF9ESU1NSU5HX0VOQUJMRUQiLCJEU1BfSU5WRVJUX1FVSVJLIiwiTVVURV9QSU4iLCJFUzgzMTFfSTJDX1NEQSIsIkVTODMxMV9JMkNfU0NMIiwiRElTUExBWUZPTlQiLCJDTE9DS0ZPTlQiLCJJUl9USU1FT1VUIiwiU0RfQ0FSRF9ERVRFQ1RfUElOIiwiU0RNTUNfRDEiLCJTRE1NQ19EMiIsIlNETU1DX0QzIiwiU0RfQ0FSRF9ERVRFQ1RfUElOIiwiU0RNTUNfRlJFUSJdLCJjZCI6WyJEU1BfTE9DQUxFIiwiVElNRVpPTkUiLCJOVU1CRVJFRF9QTEFZTElTVCIsIlNDUkVFTl9GTElQIiwiU1NfUExBWUlORyIsIlNTX05PVFBMQVlJTkciLCJTSE9XX0JVRkZFUkJBUiIsIlNIT1dfVlVfTUVURVIiLCJTTUFSVF9TVEFSVCIsIlNOVFBfMSIsIlNOVFBfMiIsIlRPVUNIX0ZMSVAiLCJXRUFUSEVSX01FVFJJQyIsIldFQVRIRVJfTEFUIiwiV0VBVEhFUl9MT04iLCJXSUZJX1NDQU5fQkVTVF9SU1NJIl0sInAiOnsiU1BJQV9TQ0siOiIxMiIsIlNQSUFfTUlTTyI6IjEzIiwiU1BJQV9NT1NJIjoiMTEiLCJURlRfREMiOiI0NiIsIlRGVF9DUyI6IjEwIiwiVEZUX1JTVCI6Ii0xIiwiQlJJR0hUTkVTU19QSU4iOiI0NSIsIkkyU19NQ0xLIjoiNCIsIkkyU19CQ0xLIjoiNSIsIkkyU19MUkMiOiI3IiwiSTJTX0RPVVQiOiI4IiwiSTJTX0RJTiI6IjYiLCJNVVRFX1BJTiI6IjEiLCJFUzgzMTFfSTJDX1NEQSI6IjE2IiwiRVM4MzExX0kyQ19TQ0wiOiIxNSIsIlRTX1NEQSI6IjE2IiwiVFNfU0NMIjoiMTUiLCJUU19JTlQiOiIxNyIsIlRTX1JTVCI6IjE4IiwiQlROX01PREUiOiIwIiwiUkdCX0xFRF9QSU4iOiI0MiIsIklSX1BJTiI6IjIiLCJTRE1NQ19DTEsiOiIzOCIsIlNETU1DX0NNRCI6IjQwIiwiU0RNTUNfRDAiOiIzOSIsIlNETU1DX0QxIjoiNDEiLCJTRE1NQ19EMiI6IjQ4IiwiU0RNTUNfRDMiOiI0NyJ9LCJ2Ijp7Ik1VVEVfVkFMIjoiSElHSCIsIkRJU1BMQVlGT05UIjoiTUFUUklYQ0hVTktZIiwiQ0xPQ0tGT05UIjoiQ0hVTktZNiIsIkRTUF9MT0NBTEUiOiJyb19STyIsIlRJTUVaT05FIjoiRXVyb3BlL1JvbWUiLCJEU1BfRElNTUlOR19FTkFCTEVEIjoidHJ1ZSIsIkRTUF9JTlZFUlRfUVVJUksiOiJ0cnVlIiwiUExBWUVSX0ZPUkNFX01PTk8iOiJ0cnVlIiwiTlVNQkVSRURfUExBWUxJU1QiOiJmYWxzZSIsIlNDUkVFTl9GTElQIjoidHJ1ZSIsIlNTX1BMQVlJTkciOiJ0cnVlIiwiU1NfTk9UUExBWUlORyI6InRydWUiLCJTSE9XX0JVRkZFUkJBUiI6InRydWUiLCJTSE9XX1ZVX01FVEVSIjoidHJ1ZSIsIlNNQVJUX1NUQVJUIjoiZmFsc2UiLCJXRUFUSEVSX01FVFJJQyI6InRydWUiLCJXSUZJX1NDQU5fQkVTVF9SU1NJIjoidHJ1ZSIsIkZJUk1XQVJFX05BTUUiOiJlczNjMjhwIiwiRVM4MzExX01BWF9JMlMiOiIxODAiLCJJUl9USU1FT1VUIjoiODAiLCJTRF9DQVJEX0RFVEVDVF9QSU4iOiIyNTUiLCJTRE1NQ19GUkVRIjoiMCIsIlNOVFBfMSI6InRpbWUud2luZG93cy5jb20iLCJTTlRQXzIiOiIiLCJUT1VDSF9GTElQIjoidHJ1ZSIsIldFQVRIRVJfTEFUIjoiMzcuOTQ2MzUiLCJXRUFUSEVSX0xPTiI6IjE1LjM2NjcxIn0sInhlIjp0cnVlLCJ4ZCI6Ii8qIC0tLSBCYXR0ZXJ5IC0tLSAqL1xuI2RlZmluZSBCQVRURVJZX1BJTiA5ICAgICAgICAgICAgICAgICAgLyogR1BJTzk6IEFEQyBwaW4gZm9yIGJhdHRlcnkgdm9sdGFnZSAqL1xuI2RlZmluZSBCQVRURVJZX0RJVklERVJfUkFUSU8gMi4wICAgICAgLyogMTAwayArIDEwMGsgdm9sdGFnZSBkaXZpZGVyID0gMToyIHJhdGlvICovXG4jZGVmaW5lIEJBVFRFUllfQURDX1JFRl9NViAgICAzNDM4ICAgICAvKiBFU1AzMi1TMyBBREMgcmVmZXJlbmNlIHZvbHRhZ2UgKGNhbGlicmF0ZWQgRUwxMDM1NjUgMzAwMG1BaCAxMS4xV2gpICovXG4jZGVmaW5lIEJBVFRFUllfVVBEQVRFX0lOVEVSVkFMIDYwICAgICAvKiBVcGRhdGUgZXZlcnkgNjAgc2Vjb25kcyAqL1xuXG4ifQ%3D%3D)
### Add Yours
  - you can either fork my `ehradio` repo and edit these files or request a build be added
    - use [the generator](https://trip5.github.io/ehRadio/myoptions/generator.html) and copy the link and include it in your request
### Upload_Files.zip
  - this is an easy-to-download file that contains all of the LittleFS files
  - you can use this to upload necessary WebUI files instead of allowing automatic download
  - connect to the `ehRadio` AP and upload all of the files in the `data` folder
  - you may also edit `wifi.csv` and the `playlist.csv` files
### Web Assets
  - all other files are needed for the WebUI functionality
  - they are available here to allow automatic downloading to LittleFS
  - it is NOT necessary to download them - the radio will download them automatically after network connection is established

