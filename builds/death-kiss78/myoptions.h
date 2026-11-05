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
//  13   SPIA_MISO
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
  #define FIRMWARE "death-kiss78_es3n28s.bin" // "esp32_s3_n16r8", "ESP32-S3", "Death-Kiss78"
  #define FIRMWARE_NAME "es3n28s" // "https://death-kiss78.github.io/ESP32-Radio/myoptions/generator.html#eyJibiI6IkVTUDMyLVMzLURldktpdEMtMSBOMTZSNCAoMTZNQiBGbGFzaCA0TUIgUFNSQU0pIiwiZGQiOiJEU1BfTU9ERUwgRFNQX1NUNzc5NiIsImRuIjoiU1Q3Nzk2IChTUEkgNDgweDMyMCBURlQpIiwiYWQiOiJVU0VfRVM4MzExIiwiYW4iOiJFUzgzMTEgKFBDTSBJMlMgTW9ubyBEZWNvZGVyKSIsImNpIjpbIlRTX01PREVMIFRTX01PREVMX0ZUNjMzNiIsIlJvdGFyeSBFbmNvZGVyIiwiQnV0dG9uOiBNb2RlIFN3aXRjaCJdLCJjcCI6WyJSR0IgTEVEIiwiSVIgUmVjZWl2ZXIiLCJTRElPIENhcmQgUmVhZGVyIChTRE1NQzogRVNQMzItUzMgb25seSkiXSwiY3MiOlsiQSJdLCJjbyI6WyJURlRfUlNUIiwiQlJJR0hUTkVTU19QSU4iLCJEU1BfRElNTUlOR19FTkFCTEVEIiwiRFNQX0lOVkVSVF9RVUlSSyIsIk1VVEVfUElOIiwiRVM4MzExX0kyQ19TREEiLCJFUzgzMTFfSTJDX1NDTCIsIkVOQ19TVEVQUyIsIkVOQ19QVUxMVVAiLCJFTkNfU1dfUFVMTFVQIiwiQlROX01PREVfUFVMTFVQIiwiUkdCX0xFRF9PUkRFUiIsIklSX1RJTUVPVVQiLCJTRE1NQ19EMSIsIlNETU1DX0QyIiwiU0RNTUNfRDMiXSwiY2QiOlsiRFNQX0xPQ0FMRSIsIlRJTUVaT05FIiwiTUROU19IT1NUIiwiQ0xPQ0tfVFdFTFZFIiwiTlVNQkVSRURfUExBWUxJU1QiLCJPTkVfQ0xJQ0tfU1dJVENIIiwiU0NSRUVOX0ZMSVAiLCJTU19QTEFZSU5HIiwiU1NfTk9UUExBWUlORyIsIlNIT1dfQlVGRkVSQkFSIiwiU0hPV19WVV9NRVRFUiIsIlNNQVJUX1NUQVJUIiwiU05UUF8xIiwiU05UUF8yIiwiVE9VQ0hfRkxJUCIsIlZPTFVNRV9QQUdFIiwiV0VBVEhFUl9NRVRSSUMiLCJXRUFUSEVSX0xBVCIsIldFQVRIRVJfTE9OIiwiV0lGSV9TQ0FOX0JFU1RfUlNTSSJdLCJwIjp7IlNQSUFfU0NLIjoiMTIiLCJTUElBX01JU08iOiIxMyIsIlNQSUFfTU9TSSI6IjExIiwiVEZUX0RDIjoiNDYiLCJURlRfQ1MiOiIxMCIsIlRGVF9SU1QiOiItMSIsIkJSSUdIVE5FU1NfUElOIjoiNDUiLCJJMlNfTUNMSyI6IjQiLCJJMlNfQkNMSyI6IjUiLCJJMlNfTFJDIjoiNyIsIkkyU19ET1VUIjoiOCIsIkkyU19ESU4iOiI2IiwiTVVURV9QSU4iOiIxIiwiRVM4MzExX0kyQ19TREEiOiIxNiIsIkVTODMxMV9JMkNfU0NMIjoiMTUiLCJUU19TREEiOiIxNiIsIlRTX1NDTCI6IjE1IiwiVFNfSU5UIjoiMTciLCJUU19SU1QiOiIxOCIsIkVOQ19DTEsiOiIyIiwiRU5DX0RUIjoiMyIsIkVOQ19TVyI6IjE0IiwiQlROX01PREUiOiIwIiwiUkdCX0xFRF9QSU4iOiI0MiIsIklSX1BJTiI6IjIxIiwiU0RNTUNfQ0xLIjoiMzgiLCJTRE1NQ19DTUQiOiI0MCIsIlNETU1DX0QwIjoiMzkiLCJTRE1NQ19EMSI6IjQxIiwiU0RNTUNfRDIiOiI0OCIsIlNETU1DX0QzIjoiNDcifSwidiI6eyJNVVRFX1ZBTCI6IkhJR0giLCJFTkNfU1RFUFMiOiI0IiwiUkdCX0xFRF9PUkRFUiI6Ik5FT19HUkIiLCJEU1BfTE9DQUxFIjoicm9fUk8iLCJUSU1FWk9ORSI6IkV1cm9wZS9Sb21lIiwiRFNQX0RJTU1JTkdfRU5BQkxFRCI6InRydWUiLCJEU1BfSU5WRVJUX1FVSVJLIjoidHJ1ZSIsIlBMQVlFUl9GT1JDRV9NT05PIjoidHJ1ZSIsIkVOQ19QVUxMVVAiOiJ0cnVlIiwiRU5DX1NXX1BVTExVUCI6InRydWUiLCJCVE5fTU9ERV9QVUxMVVAiOiJ0cnVlIiwiQ0xPQ0tfVFdFTFZFIjoiZmFsc2UiLCJOVU1CRVJFRF9QTEFZTElTVCI6InRydWUiLCJPTkVfQ0xJQ0tfU1dJVENIIjoiZmFsc2UiLCJTQ1JFRU5fRkxJUCI6ImZhbHNlIiwiU1NfUExBWUlORyI6ImZhbHNlIiwiU1NfTk9UUExBWUlORyI6ImZhbHNlIiwiU0hPV19CVUZGRVJCQVIiOiJ0cnVlIiwiU0hPV19WVV9NRVRFUiI6InRydWUiLCJTTUFSVF9TVEFSVCI6ImZhbHNlIiwiVk9MVU1FX1BBR0UiOiJ0cnVlIiwiV0VBVEhFUl9NRVRSSUMiOiJ0cnVlIiwiV0lGSV9TQ0FOX0JFU1RfUlNTSSI6InRydWUiLCJGSVJNV0FSRV9OQU1FIjoiRVMzTjI4UyIsIkVTODMxMV9NQVhfSTJTIjoiMTgwIiwiSVJfVElNRU9VVCI6IjgwIiwiTUROU19IT1NUIjoiYXYzbnR1cmEiLCJTTlRQXzEiOiIwLnBvb2wubnRwLm9yZyIsIlNOVFBfMiI6InBvb2wubnRwLm9yZyIsIlRPVUNIX0ZMSVAiOiJ0cnVlIiwiV0VBVEhFUl9MQVQiOiIzNy45NDYzNSIsIldFQVRIRVJfTE9OIjoiMTUuMzY2NzEifSwieGUiOnRydWUsInhkIjoiLyogLS0tIEJhdHRlcnkgLS0tICovXG4jZGVmaW5lIEJBVFRFUllfUElOIDkgICAgICAgICAgICAgICAgICAvKiBHUElPOTogQURDIHBpbiBmb3IgYmF0dGVyeSB2b2x0YWdlICovXG4jZGVmaW5lIEJBVFRFUllfRElWSURFUl9SQVRJTyAyLjAgICAgICAvKiAxMDBrICsgMTAwayB2b2x0YWdlIGRpdmlkZXIgPSAxOjIgcmF0aW8gKi9cbiNkZWZpbmUgQkFUVEVSWV9BRENfUkVGX01WICAgIDM0MzggICAgIC8qIEVTUDMyLVMzIEFEQyByZWZlcmVuY2Ugdm9sdGFnZSAoY2FsaWJyYXRlZCBFTDEwMzU2NSAzMDAwbUFoIDExLjFXaCkgKi9cbiNkZWZpbmUgQkFUVEVSWV9VUERBVEVfSU5URVJWQUwgNjAgICAgIC8qIFVwZGF0ZSBldmVyeSA2MCBzZWNvbmRzICovXG4jZGVmaW5lIFJBRElPX0JST1dTRVJfTk9fU0VORF9DTElDS1NcblxuI2lmIGRlZmluZWQoSVJfUElOKVxuXG4gICNkZWZpbmUgSVJfQlVUVE9OX01PREUgICAgIDB4MjBERkQ1MkFcbiAgI2RlZmluZSBJUl9CVVRUT05fVVAgICAgICAgMHgyMERGMDJGRFxuICAjZGVmaW5lIElSX0JVVFRPTl9ET1dOICAgICAweDIwREY4MjdEXG4gICNkZWZpbmUgSVJfQlVUVE9OX1BSRVYgICAgIDB4MjBERkUwMUZcbiAgI2RlZmluZSBJUl9CVVRUT05fTkVYVCAgICAgMHgyMERGNjA5RlxuICAjZGVmaW5lIElSX0JVVFRPTl9QTEFZICAgICAweDIwREYyMkREXG4gICNkZWZpbmUgSVJfQlVUVE9OX1BPV0VSICAgIDB4MjBERjEwRUZcbiAgI2RlZmluZSBJUl9CVVRUT05fTVVURSAgICAgMHgyMERGM0VDMVxuICAjZGVmaW5lIElSX0JVVFRPTl9IQVNIICAgICAweDIwREZDQTM1XG4gICNkZWZpbmUgSVJfQlVUVE9OX04wICAgICAgIDB4MjBERjA4RjdcbiAgI2RlZmluZSBJUl9CVVRUT05fTjEgICAgICAgMHgyMERGODg3N1xuICAjZGVmaW5lIElSX0JVVFRPTl9OMiAgICAgICAweDIwREY0OEI3XG4gICNkZWZpbmUgSVJfQlVUVE9OX04zICAgICAgIDB4MjBERkM4MzdcbiAgI2RlZmluZSBJUl9CVVRUT05fTjQgICAgICAgMHgyMERGMjhEN1xuICAjZGVmaW5lIElSX0JVVFRPTl9ONSAgICAgICAweDIwREZBODU3XG4gICNkZWZpbmUgSVJfQlVUVE9OX042ICAgICAgIDB4MjBERjY4OTdcbiAgI2RlZmluZSBJUl9CVVRUT05fTjcgICAgICAgMHgyMERGRTgxN1xuICAjZGVmaW5lIElSX0JVVFRPTl9OOCAgICAgICAweDIwREYxOEU3XG4gICNkZWZpbmUgSVJfQlVUVE9OX045ICAgICAgIDB4MjBERjk4NjdcbiNlbmRpZiBcbiJ9"

#define ENABLE_UPDATER // enables OTA updates



/* --- SPI Bus Pins --- */
#define SPIA_SCK             12
#define SPIA_MISO            13
#define SPIA_MOSI            11

/* --- Display --- */
#define DSP_MODEL            DSP_ST7796
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
#define ENC_CLK              2
#define ENC_DT               3
#define ENC_SW               14
#define ENC_STEPS            4         /* rotary encoder steps (default 2) */
#define ENC_PULLUP           true      /* use internal pullup on rotary (default true) */
#define ENC_SW_PULLUP        true      /* use internal pullup on button (default true) */

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


#endif // myoptions_h
