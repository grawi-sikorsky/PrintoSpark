/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * PRINTO SPARK SHIELD
 */

#ifndef __SAM3X8E__
  #error "Oops!  Make sure you have 'Arduino Due' selected from the 'Tools -> Boards' menu."
#endif

#define BOARD_NAME "PRINTO SPARK!"

//
// Servos
//
#define SERVO0_PIN          5
#define SERVO1_PIN          6
#define SERVO2_PIN         13
#define SERVO3_PIN         -1

//
// Limit Switches
//
#define X_MIN_PIN           2
#ifndef X_MAX_PIN
#define X_MAX_PIN           3
#endif
#define Y_MIN_PIN          14
#define Y_MAX_PIN          15
#define Z_MIN_PIN          18
#define Z_MAX_PIN          19

//
// Steppers
//
#define X_STEP_PIN         56//54
#define X_DIR_PIN          57//55
#define X_ENABLE_PIN       38

#define Y_STEP_PIN         60
#define Y_DIR_PIN          66//61
#define Y_ENABLE_PIN       58

#define Z_STEP_PIN         30
#define Z_DIR_PIN          32
#define Z_ENABLE_PIN       34

#define E0_STEP_PIN        26//56
#define E0_DIR_PIN         28//57
#define E0_ENABLE_PIN      16//38

//#define SPARK_P1_OFF_PIN   25
#define PS_ON_PIN          25
#define SPARK_P2_VBAT_PIN  61
#define SPARK_P3_J4_PIN    29
#define SPARK_GATE_OUT_PIN 54
#define SPARK_GATE_END_PIN 55

//#define E1_STEP_PIN        36
//#define E1_DIR_PIN         34
//#define E1_ENABLE_PIN      30

//#define E2_STEP_PIN        24 // E2 STP
//#define E2_DIR_PIN         23 // E2 DIR
//#define E2_ENABLE_PIN      49 // E2 ENA

//
// Temperature Sensors
//
#define TEMP_0_PIN         13   // Analog Input
#define TEMP_1_PIN         -1   // Analog Input
#define TEMP_BED_PIN       14   // Analog Input

// SPI for Max6675 or Max31855 Thermocouple
#if DISABLED(SDSUPPORT)
  #define MAX6675_SS        -1
#else
  #define MAX6675_SS        -1
#endif

//
// Heaters / Fans
//
#define HEATER_0_PIN        11 // HOTEND0 MOSFET
#define HEATER_1_PIN        -1 // HOTEND1 MOSFET
#define HEATER_BED_PIN      8 // BED MOSFET

#define FAN_PIN            10 // FAN1 header on board - PRINT FAN
#define FAN1_PIN           -1 // FAN2 header on board - CONTROLLER FAN
#define FAN2_PIN           -1 // FAN3 header on board - EXTRUDER0 FAN

//
// Misc. Functions
//
//#define SDSS                52
//#define SS_PIN				51
//#define SD_DETECT_PIN		49 // po zdefiniowaniu kicha? hmmm

/*
#define BTN_EN1 35
#define BTN_EN2 37
#define BTN_ENC 39
*/
//#define BTN_EN1 60
//#define BTN_EN2 63
//#define BTN_ENC 65

#define ULTIPANEL

//
// LCD / Controller
//
#if ENABLED(ULTRA_LCD)
  //#define LCD_PINS_RS       42
  //#define LCD_PINS_ENABLE   43
  //#define LCD_PINS_D4       44
  //#define LCD_PINS_D5       45
  //#define LCD_PINS_D6       46
  //#define LCD_PINS_D7       47

  #if ENABLED(PRINTO_OLED_CONTROLER)
	  //DLA OLED CONTROLER
	#define ULTIPANEL
	#define NEWPANEL
	#define BTN_EN1 35
	#define BTN_EN2 37
	#define BTN_ENC 39
	#define BEEPER_PIN 41
	#define KILL_PIN 14
  #endif

  #if ENABLED(REPRAP_DISCOUNT_SMART_CONTROLLER)
    #define BEEPER_PIN      41

    #define BTN_EN1         50
    #define BTN_EN2         52
    #define BTN_ENC         48

    #define SDSS             4
    #define SD_DETECT_PIN   14

  // RADDS LCD panel
  #elif ENABLED(RADDS_DISPLAY)
    #define BEEPER_PIN      41

    #define BTN_EN1         50
    #define BTN_EN2         52
    #define BTN_ENC         48

    #define BTN_BACK        71

    #undef SDSS
    #define SDSS             4
    #define SD_DETECT_PIN   14

  #elif ENABLED(SSD1306_OLED_I2C_CONTROLLER)
    #define BTN_EN1         50
    #define BTN_EN2         52
    #define BTN_ENC         48
    #define BEEPER_PIN      41
    #define LCD_SDSS         4
    #define SD_DETECT_PIN   14

  #elif ENABLED(SPARK_FULL_GRAPHICS)
    #define LCD_PINS_D4     29
    #define LCD_PINS_ENABLE 27
    #define LCD_PINS_RS     25

    #define BTN_EN1         35
    #define BTN_EN2         33
    #define BTN_ENC         37

    #define BEEPER_PIN      -1
  #endif // SPARK_FULL_GRAPHICS
#endif // ULTRA_LCD
