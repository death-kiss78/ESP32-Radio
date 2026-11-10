#ifndef myoptions_h
#define myoptions_h

/*        ************************************************************************      */
/*        *        This file must be in the root folder of the sketch !!!        *      */
/*        ************************************************************************      */
/*        . . .  CHECK options.h for full options, examples, and overrides   . . .      */

// ESP32-S3 ES3C28S (ESP32-S3-N16R8)(4.0)
// Display: ST7796 (SPI 480x320 TFT)
// Audio Decoder: ES8311 (PCM I2S Mono Decoder)
// SPI Bus A: ST7796 (SPI 480x320 TFT)
//
//  Pin  Function
//  ---  --------
//  -1   TFT_RST
//  0    BTN_MODE
//  1    MUTE_PIN
//  2    ENC_CLK
//  3    ENC_DT
//  4    I2S_MCLK
//  5    I2S_BCLK
//  6    I2S_DIN
//  7    I2S_LRC
//  8    I2S_DOUT
//  10   TFT_CS
//  11   SPIA_MOSI
//  12   SPIA_SCK
//  14   ENC_SW
//  15   ES8311_I2C_SCL + TS_SCL
//  16   ES8311_I2C_SDA + TS_SDA
//  17   TS_INT
//  18   TS_RST
//  21   IR_PIN
//  38   SDMMC_CLK
//  39   SDMMC_D0
//  40   SDMMC_CMD
//  41   SDMMC_D1
//  42   RGB_LED_PIN
//  45   BRIGHTNESS_PIN
//  46   TFT_DC
//  47   SDMMC_D3
//  48   SDMMC_D2


/* --- Firmware File --- */
  #define FIRMWARE "death-kiss78_es3c28s.bin" // "esp32_s3_n16r8", "ESP32-S3", "Death-Kiss78"
  #define FIRMWARE_NAME "es3c28s" // "https://death-kiss78.github.io/ESP32-Radio/myoptions/generator.html#eyJibiI6IkVTUDMyLVMzIEVTM0MyOFMgKEVTUDMyLVMzLU4xNlI4KSg0LjApIiwiZGQiOiJEU1BfTU9ERUwgRFNQX1NUNzc5NiIsImRuIjoiU1Q3Nzk2IChTUEkgNDgweDMyMCBURlQpIiwiYWQiOiJVU0VfRVM4MzExIiwiYW4iOiJFUzgzMTEgKFBDTSBJMlMgTW9ubyBEZWNvZGVyKSIsImNpIjpbIlRTX01PREVMIFRTX01PREVMX0ZUNjMzNiIsIlJvdGFyeSBFbmNvZGVyIiwiQnV0dG9uOiBNb2RlIFN3aXRjaCJdLCJjcCI6WyJSR0IgTEVEIiwiSVIgUmVjZWl2ZXIiLCJTRElPIENhcmQgUmVhZGVyIChTRE1NQzogRVNQMzItUzMgb25seSkiXSwiY3MiOlsiQSJdLCJjbyI6WyJURlRfUlNUIiwiQlJJR0hUTkVTU19QSU4iLCJEU1BfRElNTUlOR19FTkFCTEVEIiwiRFNQX0lOVkVSVF9RVUlSSyIsIkJJR19CT09UX0xPR08iLCJNVVRFX1BJTiIsIkVTODMxMV9JMkNfU0RBIiwiRVM4MzExX0kyQ19TQ0wiLCJFTkNfU1RFUFMiLCJFTkNfUFVMTFVQIiwiRU5DX1NXX1BVTExVUCIsIkJUTl9NT0RFX1BVTExVUCIsIlJHQl9MRURfT1JERVIiLCJJUl9USU1FT1VUIiwiU0RNTUNfRDEiLCJTRE1NQ19EMiIsIlNETU1DX0QzIl0sImNkIjpbIkRTUF9MT0NBTEUiLCJUSU1FWk9ORSIsIk1ETlNfSE9TVCIsIkNMT0NLX1RXRUxWRSIsIk5VTUJFUkVEX1BMQVlMSVNUIiwiT05FX0NMSUNLX1NXSVRDSCIsIlNDUkVFTl9GTElQIiwiU1NfUExBWUlORyIsIlNTX05PVFBMQVlJTkciLCJTSE9XX0JVRkZFUkJBUiIsIlNIT1dfVlVfTUVURVIiLCJTTUFSVF9TVEFSVCIsIlNOVFBfMSIsIlNOVFBfMiIsIlRPVUNIX0ZMSVAiLCJWT0xVTUVfUEFHRSIsIldFQVRIRVJfTUVUUklDIiwiV0VBVEhFUl9MQVQiLCJXRUFUSEVSX0xPTiIsIldJRklfU0NBTl9CRVNUX1JTU0kiXSwicCI6eyJTUElBX1NDSyI6IjEyIiwiU1BJQV9NSVNPIjoiMjU1IiwiU1BJQV9NT1NJIjoiMTEiLCJURlRfREMiOiI0NiIsIlRGVF9DUyI6IjEwIiwiVEZUX1JTVCI6Ii0xIiwiQlJJR0hUTkVTU19QSU4iOiI0NSIsIkkyU19NQ0xLIjoiNCIsIkkyU19CQ0xLIjoiNSIsIkkyU19MUkMiOiI3IiwiSTJTX0RPVVQiOiI4IiwiSTJTX0RJTiI6IjYiLCJNVVRFX1BJTiI6IjEiLCJFUzgzMTFfSTJDX1NEQSI6IjE2IiwiRVM4MzExX0kyQ19TQ0wiOiIxNSIsIlRTX1NEQSI6IjE2IiwiVFNfU0NMIjoiMTUiLCJUU19JTlQiOiIxNyIsIlRTX1JTVCI6IjE4IiwiRU5DX0NMSyI6IjIiLCJFTkNfRFQiOiIzIiwiRU5DX1NXIjoiMTQiLCJCVE5fTU9ERSI6IjAiLCJSR0JfTEVEX1BJTiI6IjQyIiwiSVJfUElOIjoiMjEiLCJTRE1NQ19DTEsiOiIzOCIsIlNETU1DX0NNRCI6IjQwIiwiU0RNTUNfRDAiOiIzOSIsIlNETU1DX0QxIjoiNDEiLCJTRE1NQ19EMiI6IjQ4IiwiU0RNTUNfRDMiOiI0NyJ9LCJ2Ijp7Ik1VVEVfVkFMIjoiSElHSCIsIkVOQ19TVEVQUyI6IjQiLCJSR0JfTEVEX09SREVSIjoiTkVPX0dSQiIsIkRTUF9MT0NBTEUiOiJyb19STyIsIlRJTUVaT05FIjoiRXVyb3BlL1JvbWUiLCJEU1BfRElNTUlOR19FTkFCTEVEIjoidHJ1ZSIsIkRTUF9JTlZFUlRfUVVJUksiOiJ0cnVlIiwiQklHX0JPT1RfTE9HTyI6InRydWUiLCJQTEFZRVJfRk9SQ0VfTU9OTyI6InRydWUiLCJFTkNfUFVMTFVQIjoidHJ1ZSIsIkVOQ19TV19QVUxMVVAiOiJ0cnVlIiwiQlROX01PREVfUFVMTFVQIjoidHJ1ZSIsIkNMT0NLX1RXRUxWRSI6ImZhbHNlIiwiTlVNQkVSRURfUExBWUxJU1QiOiJ0cnVlIiwiT05FX0NMSUNLX1NXSVRDSCI6ImZhbHNlIiwiU0NSRUVOX0ZMSVAiOiJmYWxzZSIsIlNTX1BMQVlJTkciOiJmYWxzZSIsIlNTX05PVFBMQVlJTkciOiJmYWxzZSIsIlNIT1dfQlVGRkVSQkFSIjoidHJ1ZSIsIlNIT1dfVlVfTUVURVIiOiJ0cnVlIiwiU01BUlRfU1RBUlQiOiJmYWxzZSIsIlZPTFVNRV9QQUdFIjoidHJ1ZSIsIldFQVRIRVJfTUVUUklDIjoidHJ1ZSIsIldJRklfU0NBTl9CRVNUX1JTU0kiOiJ0cnVlIiwiRklSTVdBUkVfTkFNRSI6IkVTM0MyOFMiLCJFUzgzMTFfTUFYX0kyUyI6IjE4MCIsIklSX1RJTUVPVVQiOiI4MCIsIk1ETlNfSE9TVCI6ImF2M250dXJhIiwiU05UUF8xIjoiMC5wb29sLm50cC5vcmciLCJTTlRQXzIiOiJwb29sLm50cC5vcmciLCJUT1VDSF9GTElQIjoidHJ1ZSIsIldFQVRIRVJfTEFUIjoiMzcuOTQ2MzUiLCJXRUFUSEVSX0xPTiI6IjE1LjM2NjcxIn0sInhlIjp0cnVlLCJ4ZCI6Ii8qIC0tLSBCYXR0ZXJ5IC0tLSAqL1xuI2RlZmluZSBCQVRURVJZX1BJTiA5ICAgICAgICAgICAgICAgICAgLyogR1BJTzk6IEFEQyBwaW4gZm9yIGJhdHRlcnkgdm9sdGFnZSAqL1xuI2RlZmluZSBCQVRURVJZX0RJVklERVJfUkFUSU8gMi4wICAgICAgLyogMTAwayArIDEwMGsgdm9sdGFnZSBkaXZpZGVyID0gMToyIHJhdGlvICovXG4jZGVmaW5lIEJBVFRFUllfQURDX1JFRl9NViAgICAzNDM4ICAgICAvKiBFU1AzMi1TMyBBREMgcmVmZXJlbmNlIHZvbHRhZ2UgKGNhbGlicmF0ZWQgRUwxMDM1NjUgMzAwMG1BaCAxMS4xV2gpICovXG4jZGVmaW5lIEJBVFRFUllfVVBEQVRFX0lOVEVSVkFMIDYwICAgICAvKiBVcGRhdGUgZXZlcnkgNjAgc2Vjb25kcyAqL1xuI2RlZmluZSBSQURJT19CUk9XU0VSX05PX1NFTkRfQ0xJQ0tTXG5cbiNpZiBkZWZpbmVkKElSX1BJTilcblxuICAjZGVmaW5lIElSX0JVVFRPTl9NT0RFICAgICAweDIwREZENTJBXG4gICNkZWZpbmUgSVJfQlVUVE9OX1VQICAgICAgIDB4MjBERjAyRkRcbiAgI2RlZmluZSBJUl9CVVRUT05fRE9XTiAgICAgMHgyMERGODI3RFxuICAjZGVmaW5lIElSX0JVVFRPTl9QUkVWICAgICAweDIwREZFMDFGXG4gICNkZWZpbmUgSVJfQlVUVE9OX05FWFQgICAgIDB4MjBERjYwOUZcbiAgI2RlZmluZSBJUl9CVVRUT05fUExBWSAgICAgMHgyMERGMjJERFxuICAjZGVmaW5lIElSX0JVVFRPTl9QT1dFUiAgICAweDIwREYxMEVGXG4gICNkZWZpbmUgSVJfQlVUVE9OX01VVEUgICAgIDB4MjBERjNFQzFcbiAgI2RlZmluZSBJUl9CVVRUT05fSEFTSCAgICAgMHgyMERGQ0EzNVxuICAjZGVmaW5lIElSX0JVVFRPTl9OMCAgICAgICAweDIwREYwOEY3XG4gICNkZWZpbmUgSVJfQlVUVE9OX04xICAgICAgIDB4MjBERjg4NzdcbiAgI2RlZmluZSBJUl9CVVRUT05fTjIgICAgICAgMHgyMERGNDhCN1xuICAjZGVmaW5lIElSX0JVVFRPTl9OMyAgICAgICAweDIwREZDODM3XG4gICNkZWZpbmUgSVJfQlVUVE9OX040ICAgICAgIDB4MjBERjI4RDdcbiAgI2RlZmluZSBJUl9CVVRUT05fTjUgICAgICAgMHgyMERGQTg1N1xuICAjZGVmaW5lIElSX0JVVFRPTl9ONiAgICAgICAweDIwREY2ODk3XG4gICNkZWZpbmUgSVJfQlVUVE9OX043ICAgICAgIDB4MjBERkU4MTdcbiAgI2RlZmluZSBJUl9CVVRUT05fTjggICAgICAgMHgyMERGMThFN1xuICAjZGVmaW5lIElSX0JVVFRPTl9OOSAgICAgICAweDIwREY5ODY3XG4jZW5kaWYgXG4ifQ%3D%3D"

#define ALL_DEBUG_LOGS
#define ENABLE_UPDATER // enables OTA updates

/* --- SPI Bus Pins --- */
#define SPIA_SCK             12
#define SPIA_MISO            255
#define SPIA_MOSI            11

/* --- Display --- */
#define DSP_MODEL            DSP_ST7796
#define TFT_DC               46
#define TFT_RST              -1        /* pin RST is attached to (-1 = EN pin) */
#define BRIGHTNESS_PIN       45        /* pin that controls brightness / backlight (255 = unused) */
#define DSP_DIMMING_ENABLED  true      /* enable screen dimming (depends on brightness pin) */
#define DSP_INVERT_QUIRK     true      /* fixes display inversion quirk (very common) */
#define BIG_BOOT_LOGO        true      /* set to false to save space */
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
#define ENC_CLK              2
#define ENC_DT               3
#define ENC_SW               14
#define ENC_STEPS            4         /* rotary encoder steps (default 2) */
#define ENC_PULLUP           true      /* use internal pullup on rotary (default true) */
#define ENC_SW_PULLUP        true      /* use internal pullup on button (default true) */
#define BTN_MODE             0
#define BTN_MODE_PULLUP      true      /* use internal pullup on button (default true) */

/* --- Peripherals and Build Options --- */
#define RGB_LED_PIN          42
#define RGB_LED_ORDER        NEO_GRB   /* type of pixel (usually NEO_GRB) see https://learn.adafruit.com/adafruit-neopixel-uberguide/arduino-library-use */
#define IR_PIN               21
#define IR_TIMEOUT           80        /* kTimeout, see IRremoteESP8266 documentation */
#define SDMMC_CLK            38
#define SDMMC_CMD            40
#define SDMMC_D0             39
#define SDMMC_D1             41
#define SDMMC_D2             48
#define SDMMC_D3             47

/* --- User Defaults --- */
#define DSP_LOCALE           "ro_RO"
#define TIMEZONE_NAME        "Europe/Rome"
#define TIMEZONE_POSIX       "CET-1CEST,M3.5.0,M10.5.0/3"
#define MDNS_HOST            "av3ntura" /* Hostname without the .local suffix. If left blank, the firmware uses the chip ID. */
#define CLOCK_TWELVE         false
#define NUMBERED_PLAYLIST    true
#define ONE_CLICK_SWITCH     false
#define SCREEN_FLIP          false
#define SS_PLAYING           false
#define SS_NOTPLAYING        false
#define SHOW_BUFFERBAR       true
#define SHOW_VU_METER        true
#define SMART_START          false
#define SNTP_1               "0.pool.ntp.org"
#define SNTP_2               "pool.ntp.org"
#define TOUCH_FLIP           "true"
#define VOLUME_PAGE          true
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
#define RADIO_BROWSER_NO_SEND_CLICKS

#if defined(IR_PIN)

  #define IR_BUTTON_MODE     0x20DFD52A
  #define IR_BUTTON_UP       0x20DF02FD
  #define IR_BUTTON_DOWN     0x20DF827D
  #define IR_BUTTON_PREV     0x20DFE01F
  #define IR_BUTTON_NEXT     0x20DF609F
  #define IR_BUTTON_PLAY     0x20DF22DD
  #define IR_BUTTON_POWER    0x20DF10EF
  #define IR_BUTTON_MUTE     0x20DF3EC1
  #define IR_BUTTON_HASH     0x20DFCA35
  #define IR_BUTTON_N0       0x20DF08F7
  #define IR_BUTTON_N1       0x20DF8877
  #define IR_BUTTON_N2       0x20DF48B7
  #define IR_BUTTON_N3       0x20DFC837
  #define IR_BUTTON_N4       0x20DF28D7
  #define IR_BUTTON_N5       0x20DFA857
  #define IR_BUTTON_N6       0x20DF6897
  #define IR_BUTTON_N7       0x20DFE817
  #define IR_BUTTON_N8       0x20DF18E7
  #define IR_BUTTON_N9       0x20DF9867
#endif 


    #define ESPFILEUPDATER_VERBOSE true // This enables ESPFileUpdater's debug log in serial.  Only add if you really want to watch serial log for what may be causing fetch errors.
    #define CHECKUPDATEURL_TIME "1 hour"

#endif // myoptions_h
