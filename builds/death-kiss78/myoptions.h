#ifndef myoptions_h
#define myoptions_h

/*        ************************************************************************      */
/*        *        This file must be in the root folder of the sketch !!!        *      */
/*        ************************************************************************      */
/*        . . .  CHECK options.h for full options, examples, and overrides   . . .      */

// ESP32-S3 ES3C28P (ESP32-S3-N16R8)
// Display: ILI9341 (SPI 320x240 TFT)
// Audio Decoder: ES8311 (PCM I2S Mono Decoder)
// SPI Bus A: ILI9341 (SPI 320x240 TFT)
//
//  Pin  Function
//  ---  --------
//  -1   TFT_RST
//  0    BTN_MODE
//  1    MUTE_PIN
//  2    IR_PIN
//  4    I2S_MCLK
//  5    I2S_BCLK
//  6    I2S_DIN
//  7    I2S_LRC
//  8    I2S_DOUT
//  10   TFT_CS
//  11   SPIA_MOSI
//  12   SPIA_SCK
//  13   SPIA_MISO
//  15   ES8311_I2C_SCL + TS_SCL
//  16   ES8311_I2C_SDA + TS_SDA
//  17   TS_INT
//  18   TS_RST
//  38   SDMMC_CLK
//  39   SDMMC_D0
//  40   SDMMC_CMD
//  41   SDMMC_D1
//  42   RGB_LED_PIN
//  45   BRIGHTNESS_PIN
//  46   TFT_DC
//  47   SDMMC_D3
//  48   SDMMC_D2


/* --- Firmware File & Board --- */
#define FIRMWARE "death_kiss78_es3c28p.bin" // "esp32_s3_n16r8", "ESP32-S3", "death_kiss78"
#define FIRMWARE_NAME "es3c28p" // "https://trip5.github.io/ehRadio/myoptions/generator.html#eyJibiI6IkVTUDMyLVMzIEVTM0MyOFAgKEVTUDMyLVMzLU4xNlI4KSIsImRkIjoiRFNQX01PREVMIERTUF9JTEk5MzQxIiwiZG4iOiJJTEk5MzQxIChTUEkgMzIweDI0MCBURlQpIiwiYWQiOiJVU0VfRVM4MzExIiwiYW4iOiJFUzgzMTEgKFBDTSBJMlMgTW9ubyBEZWNvZGVyKSIsImNpIjpbIlRTX01PREVMIFRTX01PREVMX0ZUNjMzNiIsIkJ1dHRvbjogTW9kZSBTd2l0Y2giXSwiY3AiOlsiRGlzcGxheSBGb250IiwiQ2xvY2sgRm9udCIsIlJHQiBMRUQiLCJJUiBSZWNlaXZlciIsIlNESU8gQ2FyZCBSZWFkZXIgKFNETU1DOiBFU1AzMi1TMyBvbmx5KSJdLCJjcyI6WyJBIl0sImNvIjpbIlRGVF9SU1QiLCJCUklHSFRORVNTX1BJTiIsIkRTUF9ESU1NSU5HX0VOQUJMRUQiLCJEU1BfSU5WRVJUX1FVSVJLIiwiTVVURV9QSU4iLCJFUzgzMTFfSTJDX1NEQSIsIkVTODMxMV9JMkNfU0NMIiwiRElTUExBWUZPTlQiLCJDTE9DS0ZPTlQiLCJJUl9USU1FT1VUIiwiU0RfQ0FSRF9ERVRFQ1RfUElOIiwiU0RNTUNfRDEiLCJTRE1NQ19EMiIsIlNETU1DX0QzIiwiU0RfQ0FSRF9ERVRFQ1RfUElOIiwiU0RNTUNfRlJFUSJdLCJjZCI6WyJEU1BfTE9DQUxFIiwiVElNRVpPTkUiLCJOVU1CRVJFRF9QTEFZTElTVCIsIlNDUkVFTl9GTElQIiwiU1NfUExBWUlORyIsIlNTX05PVFBMQVlJTkciLCJTSE9XX0JVRkZFUkJBUiIsIlNIT1dfVlVfTUVURVIiLCJTTUFSVF9TVEFSVCIsIlNOVFBfMSIsIlNOVFBfMiIsIlRPVUNIX0ZMSVAiLCJXRUFUSEVSX01FVFJJQyIsIldFQVRIRVJfTEFUIiwiV0VBVEhFUl9MT04iLCJXSUZJX1NDQU5fQkVTVF9SU1NJIl0sInAiOnsiU1BJQV9TQ0siOiIxMiIsIlNQSUFfTUlTTyI6IjEzIiwiU1BJQV9NT1NJIjoiMTEiLCJURlRfREMiOiI0NiIsIlRGVF9DUyI6IjEwIiwiVEZUX1JTVCI6Ii0xIiwiQlJJR0hUTkVTU19QSU4iOiI0NSIsIkkyU19NQ0xLIjoiNCIsIkkyU19CQ0xLIjoiNSIsIkkyU19MUkMiOiI3IiwiSTJTX0RPVVQiOiI4IiwiSTJTX0RJTiI6IjYiLCJNVVRFX1BJTiI6IjEiLCJFUzgzMTFfSTJDX1NEQSI6IjE2IiwiRVM4MzExX0kyQ19TQ0wiOiIxNSIsIlRTX1NEQSI6IjE2IiwiVFNfU0NMIjoiMTUiLCJUU19JTlQiOiIxNyIsIlRTX1JTVCI6IjE4IiwiQlROX01PREUiOiIwIiwiUkdCX0xFRF9QSU4iOiI0MiIsIklSX1BJTiI6IjIiLCJTRE1NQ19DTEsiOiIzOCIsIlNETU1DX0NNRCI6IjQwIiwiU0RNTUNfRDAiOiIzOSIsIlNETU1DX0QxIjoiNDEiLCJTRE1NQ19EMiI6IjQ4IiwiU0RNTUNfRDMiOiI0NyJ9LCJ2Ijp7Ik1VVEVfVkFMIjoiSElHSCIsIkRJU1BMQVlGT05UIjoiTUFUUklYQ0hVTktZIiwiQ0xPQ0tGT05UIjoiQ0hVTktZNiIsIkRTUF9MT0NBTEUiOiJyb19STyIsIlRJTUVaT05FIjoiRXVyb3BlL1JvbWUiLCJEU1BfRElNTUlOR19FTkFCTEVEIjoidHJ1ZSIsIkRTUF9JTlZFUlRfUVVJUksiOiJ0cnVlIiwiUExBWUVSX0ZPUkNFX01PTk8iOiJ0cnVlIiwiTlVNQkVSRURfUExBWUxJU1QiOiJmYWxzZSIsIlNDUkVFTl9GTElQIjoidHJ1ZSIsIlNTX1BMQVlJTkciOiJ0cnVlIiwiU1NfTk9UUExBWUlORyI6InRydWUiLCJTSE9XX0JVRkZFUkJBUiI6InRydWUiLCJTSE9XX1ZVX01FVEVSIjoidHJ1ZSIsIlNNQVJUX1NUQVJUIjoiZmFsc2UiLCJXRUFUSEVSX01FVFJJQyI6InRydWUiLCJXSUZJX1NDQU5fQkVTVF9SU1NJIjoidHJ1ZSIsIkZJUk1XQVJFX05BTUUiOiJlczNjMjhwIiwiRVM4MzExX01BWF9JMlMiOiIxODAiLCJJUl9USU1FT1VUIjoiODAiLCJTRF9DQVJEX0RFVEVDVF9QSU4iOiIyNTUiLCJTRE1NQ19GUkVRIjoiMCIsIlNOVFBfMSI6InRpbWUud2luZG93cy5jb20iLCJTTlRQXzIiOiIiLCJUT1VDSF9GTElQIjoidHJ1ZSIsIldFQVRIRVJfTEFUIjoiMzcuOTQ2MzUiLCJXRUFUSEVSX0xPTiI6IjE1LjM2NjcxIn0sInhlIjp0cnVlLCJ4ZCI6Ii8qIC0tLSBCYXR0ZXJ5IC0tLSAqL1xuI2RlZmluZSBCQVRURVJZX1BJTiA5ICAgICAgICAgICAgICAgICAgLyogR1BJTzk6IEFEQyBwaW4gZm9yIGJhdHRlcnkgdm9sdGFnZSAqL1xuI2RlZmluZSBCQVRURVJZX0RJVklERVJfUkFUSU8gMi4wICAgICAgLyogMTAwayArIDEwMGsgdm9sdGFnZSBkaXZpZGVyID0gMToyIHJhdGlvICovXG4jZGVmaW5lIEJBVFRFUllfQURDX1JFRl9NViAgICAzNDM4ICAgICAvKiBFU1AzMi1TMyBBREMgcmVmZXJlbmNlIHZvbHRhZ2UgKGNhbGlicmF0ZWQgRUwxMDM1NjUgMzAwMG1BaCAxMS4xV2gpICovXG4jZGVmaW5lIEJBVFRFUllfVVBEQVRFX0lOVEVSVkFMIDYwICAgICAvKiBVcGRhdGUgZXZlcnkgNjAgc2Vjb25kcyAqL1xuXG4ifQ%3D%3D"
//#define ENABLE_UPDATER // enables OTA updates

/* --- SPI Bus Pins --- */
#define SPIA_SCK             12
#define SPIA_MISO            13
#define SPIA_MOSI            11

/* --- Display --- */
#define DSP_MODEL            DSP_ILI9341
#define TFT_DC               46
#define TFT_RST              -1        /* pin RST is attached to (-1 = EN pin) */
#define BRIGHTNESS_PIN       45        /* pin that controls brightness / backlight (255 = unused) */
#define DSP_DIMMING_ENABLED  true      /* enable screen dimming (depends on brightness pin) */
#define DSP_INVERT_QUIRK     true      /* fixes display inversion quirk (very common) */
#define TFT_CS               10        /* pin CS is attached to (255 = tied to GND) */

/* --- Audio Decoder --- */
#define I2S_MCLK             4
#define I2S_BCLK             5
#define I2S_LRC              7
#define I2S_DOUT             8
#define I2S_DIN              6
#define MUTE_PIN             1         /* pin MUTE is attached to (255 for unused) */
#define ES8311_I2C_SDA       16        /* may fix volume control on boot */
#define ES8311_I2C_SCL       15        /* may fix volume control on boot */
#define USE_ES8311
#define MUTE_VAL             HIGH      /* enables turning off audio amplifier */
#define ES8311_MAX_I2S       180       /* maximum I2S value to allow when mapping to ES8311 codec (0..254) */
#define PLAYER_FORCE_MONO    true      /* forces VU meter to mono mode */

/* --- Inputs --- */
#define TS_MODEL             TS_MODEL_FT6336
#define TS_SDA               16
#define TS_SCL               15
#define TS_INT               17
#define TS_RST               18
#define BTN_MODE             0

/* --- Peripherals and Build Options --- */
#define DISPLAYFONT          MATRIXCHUNKY /* MATRIXCHUNKY (default), MATRIXLIGHT, X11 */
#define CLOCKFONT            CHUNKY6   /* CHUNKY6 (OLED default), CHUNKY6_PX (TFT default), YO_MONO (7-segment/display font), LED (new 7-segment) */
#define RGB_LED_PIN          42
#define IR_PIN               2
#define IR_TIMEOUT           80        /* kTimeout, see IRremoteESP8266 documentation */
#define SDMMC_CLK            38
#define SDMMC_CMD            40
#define SDMMC_D0             39
#define SDMMC_D1             41
#define SDMMC_D2             48
#define SDMMC_D3             47
#define SD_CARD_DETECT_PIN   255       /* Pin DETECT is attached to (255 for unused) */
#define SDMMC_FREQ           0         /* maximum SD clock in kHz (0 = driver default 40MHz highest speed; lower this if problems) */

/* --- User Defaults --- */
#define DSP_LOCALE           "ro_RO"
#define TIMEZONE_NAME        "Europe/Rome"
#define TIMEZONE_POSIX       "CET-1CEST,M3.5.0,M10.5.0/3"
#define NUMBERED_PLAYLIST    true
#define SCREEN_FLIP          true
#define SS_PLAYING           true
#define SS_NOTPLAYING        true
#define SHOW_BUFFERBAR       true
#define SHOW_VU_METER        true
#define SMART_START          false
#define SNTP_1               "time.windows.com"
#define SNTP_2               ""
#define TOUCH_FLIP           "true"
#define WEATHER_METRIC       true
#define WEATHER_LAT          "37.94635" /* latitude */
#define WEATHER_LON          "15.36671" /* longitude */
#define WIFI_SCAN_BEST_RSSI  true

/* --- Extra defines --- */
/* --- Battery --- */
#define BATTERY_PIN 9                  /* GPIO9: ADC pin for battery voltage */
#define BATTERY_DIVIDER_RATIO 2.0      /* 100k + 100k voltage divider = 1:2 ratio */
#define BATTERY_ADC_REF_MV    3438     /* ESP32-S3 ADC reference voltage (calibrated EL103565 3000mAh 11.1Wh) */
#define BATTERY_UPDATE_INTERVAL 60     /* Update every 60 seconds */


#endif // myoptions_h
