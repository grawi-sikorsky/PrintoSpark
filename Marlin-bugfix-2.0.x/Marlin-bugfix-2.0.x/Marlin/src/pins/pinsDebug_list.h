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
 * but WITHOUT ANY WARRANTY without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

// Please update this list when adding new pins to Marlin.
// The order doesn't matter.
// Following this pattern is a must.
// If the new pin name is over 28 characters long then pinsDebug.h will need to be modified.

// Pin list updated from 25 JUL 2017 Re-ARM branch   - max length of pin name is 24

#line 31 // set __LINE__ to a known value for both passes

#if defined(EXT_AUX_A0) &&  EXT_AUX_A0 >= 0 &&  EXT_AUX_A0 < NUM_ANALOG_INPUTS
  REPORT_NAME_ANALOG(EXT_AUX_A0, __LINE__ )
#endif
#if defined(EXT_AUX_A1) &&  EXT_AUX_A1 >= 0 &&  EXT_AUX_A1 < NUM_ANALOG_INPUTS
  REPORT_NAME_ANALOG(EXT_AUX_A1, __LINE__ )
#endif
#if defined(EXT_AUX_A2) &&  EXT_AUX_A2 >= 0 &&  EXT_AUX_A2 < NUM_ANALOG_INPUTS
  REPORT_NAME_ANALOG(EXT_AUX_A2, __LINE__ )
#endif
#if defined(EXT_AUX_A3) &&  EXT_AUX_A3 >= 0 &&  EXT_AUX_A3 < NUM_ANALOG_INPUTS
  REPORT_NAME_ANALOG(EXT_AUX_A3, __LINE__ )
#endif
#if defined(EXT_AUX_A4) &&  EXT_AUX_A4 >= 0 &&  EXT_AUX_A4 < NUM_ANALOG_INPUTS
  REPORT_NAME_ANALOG(EXT_AUX_A4, __LINE__ )
#endif
#if PIN_EXISTS(FILWIDTH) &&  FILWIDTH_PIN < NUM_ANALOG_INPUTS
  REPORT_NAME_ANALOG(FILWIDTH_PIN, __LINE__ )
#endif
#if PIN_EXISTS(MAIN_VOLTAGE_MEASURE) &&  MAIN_VOLTAGE_MEASURE_PIN < NUM_ANALOG_INPUTS
  REPORT_NAME_ANALOG(MAIN_VOLTAGE_MEASURE_PIN, __LINE__ )
#endif
#if !defined(ARDUINO_ARCH_SAM)  //TC1 & TC2 are macros in the SAM tool chain
  #if defined(TC1) &&  TC1 >= 0 &&  TC1 < NUM_ANALOG_INPUTS
    REPORT_NAME_ANALOG(TC1, __LINE__ )
  #endif
  #if defined(TC2) &&  TC2 >= 0 &&  TC2 < NUM_ANALOG_INPUTS
    REPORT_NAME_ANALOG(TC2, __LINE__ )
  #endif
#endif
#if PIN_EXISTS(TEMP_0) &&  TEMP_0_PIN < NUM_ANALOG_INPUTS
  REPORT_NAME_ANALOG(TEMP_0_PIN, __LINE__ )
#endif
#if PIN_EXISTS(TEMP_1) &&  TEMP_1_PIN < NUM_ANALOG_INPUTS
  REPORT_NAME_ANALOG(TEMP_1_PIN, __LINE__ )
#endif
#if PIN_EXISTS(TEMP_2) &&  TEMP_2_PIN < NUM_ANALOG_INPUTS
  REPORT_NAME_ANALOG(TEMP_2_PIN, __LINE__ )
#endif
#if PIN_EXISTS(TEMP_3) &&  TEMP_3_PIN < NUM_ANALOG_INPUTS
  REPORT_NAME_ANALOG(TEMP_3_PIN, __LINE__ )
#endif
#if PIN_EXISTS(TEMP_4) &&  TEMP_4_PIN < NUM_ANALOG_INPUTS
  REPORT_NAME_ANALOG(TEMP_4_PIN, __LINE__ )
#endif
#if PIN_EXISTS(TEMP_BED) &&  TEMP_BED_PIN < NUM_ANALOG_INPUTS
  REPORT_NAME_ANALOG(TEMP_BED_PIN, __LINE__ )
#endif
#if PIN_EXISTS(TEMP_CHAMBER) &&  TEMP_CHAMBER_PIN < NUM_ANALOG_INPUTS
  REPORT_NAME_ANALOG(TEMP_CHAMBER_PIN, __LINE__ )
#endif
#if PIN_EXISTS(TEMP_X) &&  TEMP_X_PIN < NUM_ANALOG_INPUTS
  REPORT_NAME_ANALOG(TEMP_X_PIN, __LINE__ )
#endif
#if defined(__FD) &&  __FD >= 0
  REPORT_NAME_DIGITAL(__FD, __LINE__ )
#endif
#if defined(__FS) &&  __FS >= 0
  REPORT_NAME_DIGITAL(__FS, __LINE__ )
#endif
#if defined(__GD) &&  __GD >= 0
  REPORT_NAME_DIGITAL(__GD, __LINE__ )
#endif
#if defined(__GS) &&  __GS >= 0
  REPORT_NAME_DIGITAL(__GS, __LINE__ )
#endif
#if PIN_EXISTS(ADC_KEYPAD)
  REPORT_NAME_DIGITAL(ADC_KEYPAD_PIN, __LINE__ )
#endif
#if PIN_EXISTS(ALARM)
  REPORT_NAME_DIGITAL(ALARM_PIN, __LINE__ )
#endif
#if PIN_EXISTS(BEEPER)
  REPORT_NAME_DIGITAL(BEEPER_PIN, __LINE__ )
#endif
#if defined(BTN_BACK) &&  BTN_BACK >= 0
  REPORT_NAME_DIGITAL(BTN_BACK, __LINE__ )
#endif
#if defined(BTN_CENTER) &&  BTN_CENTER >= 0
  REPORT_NAME_DIGITAL(BTN_CENTER, __LINE__ )
#endif
#if defined(BTN_DOWN) &&  BTN_DOWN >= 0
  REPORT_NAME_DIGITAL(BTN_DOWN, __LINE__ )
#endif
#if defined(BTN_DWN) &&  BTN_DWN >= 0
  REPORT_NAME_DIGITAL(BTN_DWN, __LINE__ )
#endif
#if defined(BTN_EN1) &&  BTN_EN1 >= 0
  REPORT_NAME_DIGITAL(BTN_EN1, __LINE__ )
#endif
#if defined(BTN_EN2) &&  BTN_EN2 >= 0
  REPORT_NAME_DIGITAL(BTN_EN2, __LINE__ )
#endif
#if defined(BTN_ENC) &&  BTN_ENC >= 0
  REPORT_NAME_DIGITAL(BTN_ENC, __LINE__ )
#endif
#if defined(BTN_HOME) &&  BTN_HOME >= 0
  REPORT_NAME_DIGITAL(BTN_HOME, __LINE__ )
#endif
#if defined(BTN_LEFT) &&  BTN_LEFT >= 0
  REPORT_NAME_DIGITAL(BTN_LEFT, __LINE__ )
#endif
#if defined(BTN_LFT) &&  BTN_LFT >= 0
  REPORT_NAME_DIGITAL(BTN_LFT, __LINE__ )
#endif
#if defined(BTN_RIGHT) &&  BTN_RIGHT >= 0
  REPORT_NAME_DIGITAL(BTN_RIGHT, __LINE__ )
#endif
#if defined(BTN_RT) &&  BTN_RT >= 0
  REPORT_NAME_DIGITAL(BTN_RT, __LINE__ )
#endif
#if defined(BTN_UP) &&  BTN_UP >= 0
  REPORT_NAME_DIGITAL(BTN_UP, __LINE__ )
#endif
#if PIN_EXISTS(CASE_LIGHT)
  REPORT_NAME_DIGITAL(CASE_LIGHT_PIN, __LINE__ )
#endif
#if PIN_EXISTS(CONTROLLER_FAN)
  REPORT_NAME_DIGITAL(CONTROLLER_FAN_PIN, __LINE__ )
#endif
#if PIN_EXISTS(CUTOFF_RESET)
  REPORT_NAME_DIGITAL(CUTOFF_RESET_PIN, __LINE__ )
#endif
#if PIN_EXISTS(CUTOFF_TEST)
  REPORT_NAME_DIGITAL(CUTOFF_TEST_PIN, __LINE__ )
#endif
#if defined(D57) &&  D57 >= 0
  REPORT_NAME_DIGITAL(D57, __LINE__ )
#endif
#if defined(D58) &&  D58 >= 0
  REPORT_NAME_DIGITAL(D58, __LINE__ )
#endif
#if PIN_EXISTS(DAC_DISABLE)
  REPORT_NAME_DIGITAL(DAC_DISABLE_PIN, __LINE__ )
#endif
#if defined(DAC0_SYNC) &&  DAC0_SYNC >= 0
  REPORT_NAME_DIGITAL(DAC0_SYNC, __LINE__ )
#endif
#if defined(DAC1_SYNC) &&  DAC1_SYNC >= 0
  REPORT_NAME_DIGITAL(DAC1_SYNC, __LINE__ )
#endif
#if PIN_EXISTS(DEBUG)
  REPORT_NAME_DIGITAL(DEBUG_PIN, __LINE__ )
#endif
#if defined(DIGIPOTS_I2C_SCL) &&  DIGIPOTS_I2C_SCL >= 0
  REPORT_NAME_DIGITAL(DIGIPOTS_I2C_SCL, __LINE__ )
#endif
#if defined(DIGIPOTS_I2C_SDA_E0) &&  DIGIPOTS_I2C_SDA_E0 >= 0
  REPORT_NAME_DIGITAL(DIGIPOTS_I2C_SDA_E0, __LINE__ )
#endif
#if defined(DIGIPOTS_I2C_SDA_E1) &&  DIGIPOTS_I2C_SDA_E1 >= 0
  REPORT_NAME_DIGITAL(DIGIPOTS_I2C_SDA_E1, __LINE__ )
#endif
#if defined(DIGIPOTS_I2C_SDA_X) &&  DIGIPOTS_I2C_SDA_X >= 0
  REPORT_NAME_DIGITAL(DIGIPOTS_I2C_SDA_X, __LINE__ )
#endif
#if defined(DIGIPOTS_I2C_SDA_Y) &&  DIGIPOTS_I2C_SDA_Y >= 0
  REPORT_NAME_DIGITAL(DIGIPOTS_I2C_SDA_Y, __LINE__ )
#endif
#if defined(DIGIPOTS_I2C_SDA_Z) &&  DIGIPOTS_I2C_SDA_Z >= 0
  REPORT_NAME_DIGITAL(DIGIPOTS_I2C_SDA_Z, __LINE__ )
#endif
#if PIN_EXISTS(DIGIPOTSS)
  REPORT_NAME_DIGITAL(DIGIPOTSS_PIN, __LINE__ )
#endif
#if defined(DOGLCD_A0) &&  DOGLCD_A0 >= 0
  REPORT_NAME_DIGITAL(DOGLCD_A0, __LINE__ )
#endif
#if defined(DOGLCD_CS) &&  DOGLCD_CS >= 0
  REPORT_NAME_DIGITAL(DOGLCD_CS, __LINE__ )
#endif
#if defined(DOGLCD_MOSI) &&  DOGLCD_MOSI >= 0
  REPORT_NAME_DIGITAL(DOGLCD_MOSI, __LINE__ )
#endif
#if defined(DOGLCD_SCK) &&  DOGLCD_SCK >= 0
  REPORT_NAME_DIGITAL(DOGLCD_SCK, __LINE__ )
#endif
#if PIN_EXISTS(E_MUX0)
  REPORT_NAME_DIGITAL(E_MUX0_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E_MUX1)
  REPORT_NAME_DIGITAL(E_MUX1_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E_MUX2)
  REPORT_NAME_DIGITAL(E_MUX2_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E_STOP)
  REPORT_NAME_DIGITAL(E_STOP_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E0_ATT)
  REPORT_NAME_DIGITAL(E0_ATT_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E0_CS)
  REPORT_NAME_DIGITAL(E0_CS_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E0_DIR)
  REPORT_NAME_DIGITAL(E0_DIR_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E0_ENABLE)
  REPORT_NAME_DIGITAL(E0_ENABLE_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E0_MS1)
  REPORT_NAME_DIGITAL(E0_MS1_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E0_MS2)
  REPORT_NAME_DIGITAL(E0_MS2_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E0_STEP)
  REPORT_NAME_DIGITAL(E0_STEP_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E1_CS)
  REPORT_NAME_DIGITAL(E1_CS_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E1_DIR)
  REPORT_NAME_DIGITAL(E1_DIR_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E1_ENABLE)
  REPORT_NAME_DIGITAL(E1_ENABLE_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E1_MS1)
  REPORT_NAME_DIGITAL(E1_MS1_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E1_MS2)
  REPORT_NAME_DIGITAL(E1_MS2_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E1_STEP)
  REPORT_NAME_DIGITAL(E1_STEP_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E2_CS)
  REPORT_NAME_DIGITAL(E2_CS_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E2_DIR)
  REPORT_NAME_DIGITAL(E2_DIR_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E2_ENABLE)
  REPORT_NAME_DIGITAL(E2_ENABLE_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E2_STEP)
  REPORT_NAME_DIGITAL(E2_STEP_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E3_CS)
  REPORT_NAME_DIGITAL(E3_CS_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E3_DIR)
  REPORT_NAME_DIGITAL(E3_DIR_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E3_ENABLE)
  REPORT_NAME_DIGITAL(E3_ENABLE_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E3_MS1)
  REPORT_NAME_DIGITAL(E3_MS1_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E3_MS2)
  REPORT_NAME_DIGITAL(E3_MS2_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E3_MS3)
  REPORT_NAME_DIGITAL(E3_MS3_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E3_STEP)
  REPORT_NAME_DIGITAL(E3_STEP_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E4_CS)
  REPORT_NAME_DIGITAL(E4_CS_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E4_DIR)
  REPORT_NAME_DIGITAL(E4_DIR_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E4_ENABLE)
  REPORT_NAME_DIGITAL(E4_ENABLE_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E4_MS1)
  REPORT_NAME_DIGITAL(E4_MS1_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E4_MS2)
  REPORT_NAME_DIGITAL(E4_MS2_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E4_MS3)
  REPORT_NAME_DIGITAL(E4_MS3_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E4_STEP)
  REPORT_NAME_DIGITAL(E4_STEP_PIN, __LINE__ )
#endif
#if defined(ENET_CRS) &&  ENET_CRS >= 0
  REPORT_NAME_DIGITAL(ENET_CRS, __LINE__ )
#endif
#if defined(ENET_MDIO) &&  ENET_MDIO >= 0
  REPORT_NAME_DIGITAL(ENET_MDIO, __LINE__ )
#endif
#if defined(ENET_MOC) &&  ENET_MOC >= 0
  REPORT_NAME_DIGITAL(ENET_MOC, __LINE__ )
#endif
#if defined(ENET_RX_ER) &&  ENET_RX_ER >= 0
  REPORT_NAME_DIGITAL(ENET_RX_ER, __LINE__ )
#endif
#if defined(ENET_RXD0) &&  ENET_RXD0 >= 0
  REPORT_NAME_DIGITAL(ENET_RXD0, __LINE__ )
#endif
#if defined(ENET_RXD1) &&  ENET_RXD1 >= 0
  REPORT_NAME_DIGITAL(ENET_RXD1, __LINE__ )
#endif
#if defined(ENET_TX_EN) &&  ENET_TX_EN >= 0
  REPORT_NAME_DIGITAL(ENET_TX_EN, __LINE__ )
#endif
#if defined(ENET_TXD0) &&  ENET_TXD0 >= 0
  REPORT_NAME_DIGITAL(ENET_TXD0, __LINE__ )
#endif
#if defined(ENET_TXD1) &&  ENET_TXD1 >= 0
  REPORT_NAME_DIGITAL(ENET_TXD1, __LINE__ )
#endif
#if PIN_EXISTS(EXP_VOLTAGE_LEVEL)
  REPORT_NAME_DIGITAL(EXP_VOLTAGE_LEVEL_PIN, __LINE__ )
#endif
#if defined(EXT_AUX_A0_IO) &&  EXT_AUX_A0_IO >= 0
  REPORT_NAME_DIGITAL(EXT_AUX_A0_IO, __LINE__ )
#endif
#if defined(EXT_AUX_A1_IO) &&  EXT_AUX_A1_IO >= 0
  REPORT_NAME_DIGITAL(EXT_AUX_A1_IO, __LINE__ )
#endif
#if defined(EXT_AUX_A2_IO) &&  EXT_AUX_A2_IO >= 0
  REPORT_NAME_DIGITAL(EXT_AUX_A2_IO, __LINE__ )
#endif
#if defined(EXT_AUX_A3_IO) &&  EXT_AUX_A3_IO >= 0
  REPORT_NAME_DIGITAL(EXT_AUX_A3_IO, __LINE__ )
#endif
#if defined(EXT_AUX_A4_IO) &&  EXT_AUX_A4_IO >= 0
  REPORT_NAME_DIGITAL(EXT_AUX_A4_IO, __LINE__ )
#endif
#if defined(EXT_AUX_PWM_D24) &&  EXT_AUX_PWM_D24 >= 0
  REPORT_NAME_DIGITAL(EXT_AUX_PWM_D24, __LINE__ )
#endif
#if defined(EXT_AUX_RX1_D2) &&  EXT_AUX_RX1_D2 >= 0
  REPORT_NAME_DIGITAL(EXT_AUX_RX1_D2, __LINE__ )
#endif
#if defined(EXT_AUX_SCL_D0) &&  EXT_AUX_SCL_D0 >= 0
  REPORT_NAME_DIGITAL(EXT_AUX_SCL_D0, __LINE__ )
#endif
#if defined(EXT_AUX_SDA_D1) &&  EXT_AUX_SDA_D1 >= 0
  REPORT_NAME_DIGITAL(EXT_AUX_SDA_D1, __LINE__ )
#endif
#if defined(EXT_AUX_TX1_D3) &&  EXT_AUX_TX1_D3 >= 0
  REPORT_NAME_DIGITAL(EXT_AUX_TX1_D3, __LINE__ )
#endif
#if PIN_EXISTS(FAN)
  REPORT_NAME_DIGITAL(FAN_PIN, __LINE__ )
#endif
#if PIN_EXISTS(FAN1)
  REPORT_NAME_DIGITAL(FAN1_PIN, __LINE__ )
#endif
#if PIN_EXISTS(FAN2)
  REPORT_NAME_DIGITAL(FAN2_PIN, __LINE__ )
#endif
#if PIN_EXISTS(FAN3)
  REPORT_NAME_DIGITAL(FAN3_PIN, __LINE__ )
#endif
#if PIN_EXISTS(FIL_RUNOUT)
  REPORT_NAME_DIGITAL(FIL_RUNOUT_PIN, __LINE__ )
#endif
#if defined(GEN7_VERSION) &&  GEN7_VERSION >= 0
  REPORT_NAME_DIGITAL(GEN7_VERSION, __LINE__ )
#endif
#if PIN_EXISTS(HEATER_0)
  REPORT_NAME_DIGITAL(HEATER_0_PIN, __LINE__ )
#endif
#if PIN_EXISTS(HEATER_1)
  REPORT_NAME_DIGITAL(HEATER_1_PIN, __LINE__ )
#endif
#if PIN_EXISTS(HEATER_2)
  REPORT_NAME_DIGITAL(HEATER_2_PIN, __LINE__ )
#endif
#if PIN_EXISTS(HEATER_3)
  REPORT_NAME_DIGITAL(HEATER_3_PIN, __LINE__ )
#endif
#if PIN_EXISTS(HEATER_4)
  REPORT_NAME_DIGITAL(HEATER_4_PIN, __LINE__ )
#endif
#if PIN_EXISTS(HEATER_5)
  REPORT_NAME_DIGITAL(HEATER_5_PIN, __LINE__ )
#endif
#if PIN_EXISTS(HEATER_6)
  REPORT_NAME_DIGITAL(HEATER_6_PIN, __LINE__ )
#endif
#if PIN_EXISTS(HEATER_7)
  REPORT_NAME_DIGITAL(HEATER_7_PIN, __LINE__ )
#endif
#if PIN_EXISTS(HEATER_BED)
  REPORT_NAME_DIGITAL(HEATER_BED_PIN, __LINE__ )
#endif
#if PIN_EXISTS(HOME)
  REPORT_NAME_DIGITAL(HOME_PIN, __LINE__ )
#endif
#if PIN_EXISTS(I2C_SCL)
  REPORT_NAME_DIGITAL(I2C_SCL_PIN, __LINE__ )
#endif
#if PIN_EXISTS(I2C_SDA)
  REPORT_NAME_DIGITAL(I2C_SDA_PIN, __LINE__ )
#endif
#if PIN_EXISTS(KILL)
  REPORT_NAME_DIGITAL(KILL_PIN, __LINE__ )
#endif
#if PIN_EXISTS(LCD_BACKLIGHT)
  REPORT_NAME_DIGITAL(LCD_BACKLIGHT_PIN, __LINE__ )
#endif
#if defined(LCD_PINS_D4) &&  LCD_PINS_D4 >= 0
  REPORT_NAME_DIGITAL(LCD_PINS_D4, __LINE__ )
#endif
#if defined(LCD_PINS_D5) &&  LCD_PINS_D5 >= 0
  REPORT_NAME_DIGITAL(LCD_PINS_D5, __LINE__ )
#endif
#if defined(LCD_PINS_D6) &&  LCD_PINS_D6 >= 0
  REPORT_NAME_DIGITAL(LCD_PINS_D6, __LINE__ )
#endif
#if defined(LCD_PINS_D7) &&  LCD_PINS_D7 >= 0
  REPORT_NAME_DIGITAL(LCD_PINS_D7, __LINE__ )
#endif
#if defined(LCD_PINS_ENABLE) &&  LCD_PINS_ENABLE >= 0
  REPORT_NAME_DIGITAL(LCD_PINS_ENABLE, __LINE__ )
#endif
#if defined(LCD_PINS_RS) &&  LCD_PINS_RS >= 0
  REPORT_NAME_DIGITAL(LCD_PINS_RS, __LINE__ )
#endif
#if defined(LCD_SDSS) &&  LCD_SDSS >= 0
  REPORT_NAME_DIGITAL(LCD_SDSS, __LINE__ )
#endif
#if PIN_EXISTS(LED_GREEN)
  REPORT_NAME_DIGITAL(LED_GREEN_PIN, __LINE__ )
#endif
#if PIN_EXISTS(LED)
  REPORT_NAME_DIGITAL(LED_PIN, __LINE__ )
#endif
#if PIN_EXISTS(LED_RED)
  REPORT_NAME_DIGITAL(LED_RED_PIN, __LINE__ )
#endif
#if PIN_EXISTS(MAX)
  REPORT_NAME_DIGITAL(MAX_PIN, __LINE__ )
#endif
#if PIN_EXISTS(MAX6675_DO)
  REPORT_NAME_DIGITAL(MAX6675_DO_PIN, __LINE__ )
#endif
#if PIN_EXISTS(MAX6675_SCK)
  REPORT_NAME_DIGITAL(MAX6675_SCK_PIN, __LINE__ )
#endif
#if defined(MAX6675_SS) &&  MAX6675_SS >= 0
  REPORT_NAME_DIGITAL(MAX6675_SS, __LINE__ )
#endif
// #if defined(MISO) &&  MISO >= 0
//   REPORT_NAME_DIGITAL(MISO, __LINE__ )
// #endif
#if PIN_EXISTS(MISO)
  REPORT_NAME_DIGITAL(MISO_PIN, __LINE__ )
#endif
// #if defined(MOSI) &&  MOSI >= 0
//   REPORT_NAME_DIGITAL(MOSI, __LINE__ )
// #endif
#if PIN_EXISTS(MOSI)
  REPORT_NAME_DIGITAL(MOSI_PIN, __LINE__ )
#endif
#if PIN_EXISTS(MOTOR_CURRENT_PWM_E)
  REPORT_NAME_DIGITAL(MOTOR_CURRENT_PWM_E_PIN, __LINE__ )
#endif
#if PIN_EXISTS(MOTOR_CURRENT_PWM_XY)
  REPORT_NAME_DIGITAL(MOTOR_CURRENT_PWM_XY_PIN, __LINE__ )
#endif
#if PIN_EXISTS(MOTOR_CURRENT_PWM_Z)
  REPORT_NAME_DIGITAL(MOTOR_CURRENT_PWM_Z_PIN, __LINE__ )
#endif
#if PIN_EXISTS(MOTOR_FAULT)
  REPORT_NAME_DIGITAL(MOTOR_FAULT_PIN, __LINE__ )
#endif
#if PIN_EXISTS(NUM_DIGITAL)
  REPORT_NAME_DIGITAL(NUM_DIGITAL_PINS, __LINE__ )
#endif
#if PIN_EXISTS(ORIG_E0_AUTO_FAN)
  REPORT_NAME_DIGITAL(ORIG_E0_AUTO_FAN_PIN, __LINE__ )
#endif
#if PIN_EXISTS(ORIG_E1_AUTO_FAN)
  REPORT_NAME_DIGITAL(ORIG_E1_AUTO_FAN_PIN, __LINE__ )
#endif
#if PIN_EXISTS(ORIG_E2_AUTO_FAN)
  REPORT_NAME_DIGITAL(ORIG_E2_AUTO_FAN_PIN, __LINE__ )
#endif
#if PIN_EXISTS(ORIG_E3_AUTO_FAN)
  REPORT_NAME_DIGITAL(ORIG_E3_AUTO_FAN_PIN, __LINE__ )
#endif
#if PIN_EXISTS(PHOTOGRAPH)
  REPORT_NAME_DIGITAL(PHOTOGRAPH_PIN, __LINE__ )
#endif
#if PIN_EXISTS(PS_ON)
  REPORT_NAME_DIGITAL(PS_ON_PIN, __LINE__ )
#endif
#if PIN_EXISTS(PWM_1)
  REPORT_NAME_DIGITAL(PWM_1_PIN, __LINE__ )
#endif
#if PIN_EXISTS(PWM_2)
  REPORT_NAME_DIGITAL(PWM_2_PIN, __LINE__ )
#endif
#if defined(REF_CLK) &&  REF_CLK >= 0
  REPORT_NAME_DIGITAL(REF_CLK, __LINE__ )
#endif
#if PIN_EXISTS(RX_ENABLE)
  REPORT_NAME_DIGITAL(RX_ENABLE_PIN, __LINE__ )
#endif
#if PIN_EXISTS(SAFETY_TRIGGERED)
  REPORT_NAME_DIGITAL(SAFETY_TRIGGERED_PIN, __LINE__ )
#endif
// #if defined(SCK) &&  SCK >= 0
//   REPORT_NAME_DIGITAL(SCK, __LINE__ )
// #endif
#if PIN_EXISTS(SCK)
  REPORT_NAME_DIGITAL(SCK_PIN, __LINE__ )
#endif
#if PIN_EXISTS(SD_DETECT)
  REPORT_NAME_DIGITAL(SD_DETECT_PIN, __LINE__ )
#endif
#if defined(SDPOWER) &&  SDPOWER >= 0
  REPORT_NAME_DIGITAL(SDPOWER, __LINE__ )
#endif
#if defined(SDSS) &&  SDSS >= 0
  REPORT_NAME_DIGITAL(SDSS, __LINE__ )
#endif
#if defined(SERVO0) &&  SERVO0 >= 0
  REPORT_NAME_DIGITAL(SERVO0, __LINE__ )
#endif
#if PIN_EXISTS(SERVO0)
  REPORT_NAME_DIGITAL(SERVO0_PIN, __LINE__ )
#endif
#if PIN_EXISTS(SERVO1)
  REPORT_NAME_DIGITAL(SERVO1_PIN, __LINE__ )
#endif
#if PIN_EXISTS(SERVO2)
  REPORT_NAME_DIGITAL(SERVO2_PIN, __LINE__ )
#endif
#if PIN_EXISTS(SERVO3)
  REPORT_NAME_DIGITAL(SERVO3_PIN, __LINE__ )
#endif
#if defined(SHIFT_CLK) &&  SHIFT_CLK >= 0
  REPORT_NAME_DIGITAL(SHIFT_CLK, __LINE__ )
#endif
#if defined(SHIFT_EN) &&  SHIFT_EN >= 0
  REPORT_NAME_DIGITAL(SHIFT_EN, __LINE__ )
#endif
#if defined(SHIFT_LD) &&  SHIFT_LD >= 0
  REPORT_NAME_DIGITAL(SHIFT_LD, __LINE__ )
#endif
#if defined(SHIFT_OUT) &&  SHIFT_OUT >= 0
  REPORT_NAME_DIGITAL(SHIFT_OUT, __LINE__ )
#endif
#if PIN_EXISTS(SLEEP_WAKE)
  REPORT_NAME_DIGITAL(SLEEP_WAKE_PIN, __LINE__ )
#endif
#if PIN_EXISTS(SOL1)
  REPORT_NAME_DIGITAL(SOL1_PIN, __LINE__ )
#endif
#if PIN_EXISTS(SOL2)
  REPORT_NAME_DIGITAL(SOL2_PIN, __LINE__ )
#endif
#if defined(SPARE_IO) &&  SPARE_IO >= 0
  REPORT_NAME_DIGITAL(SPARE_IO, __LINE__ )
#endif
#if defined(SPI_CHAN_DAC) &&  SPI_CHAN_DAC >= 0
  REPORT_NAME_DIGITAL(SPI_CHAN_DAC, __LINE__ )
#endif
#if defined(SPI_CHAN_EEPROM1) &&  SPI_CHAN_EEPROM1 >= 0
  REPORT_NAME_DIGITAL(SPI_CHAN_EEPROM1, __LINE__ )
#endif
#if defined(SPI_EEPROM) &&  SPI_EEPROM >= 0
  REPORT_NAME_DIGITAL(SPI_EEPROM, __LINE__ )
#endif
#if defined(SPI_EEPROM1_CS) &&  SPI_EEPROM1_CS >= 0
  REPORT_NAME_DIGITAL(SPI_EEPROM1_CS, __LINE__ )
#endif
#if defined(SPI_EEPROM2_CS) &&  SPI_EEPROM2_CS >= 0
  REPORT_NAME_DIGITAL(SPI_EEPROM2_CS, __LINE__ )
#endif
#if defined(SPI_FLASH_CS) &&  SPI_FLASH_CS >= 0
  REPORT_NAME_DIGITAL(SPI_FLASH_CS, __LINE__ )
#endif
#if PIN_EXISTS(SPINDLE_DIR)
  REPORT_NAME_DIGITAL(SPINDLE_DIR_PIN, __LINE__ )
#endif
#if PIN_EXISTS(SPINDLE_ENABLE)
  REPORT_NAME_DIGITAL(SPINDLE_ENABLE_PIN, __LINE__ )
#endif
#if PIN_EXISTS(SPINDLE_LASER_ENABLE)
  REPORT_NAME_DIGITAL(SPINDLE_LASER_ENABLE_PIN, __LINE__ )
#endif
#if PIN_EXISTS(SPINDLE_LASER_PWM)
  REPORT_NAME_DIGITAL(SPINDLE_LASER_PWM_PIN, __LINE__ )
#endif
#if PIN_EXISTS(SR_CLK)
  REPORT_NAME_DIGITAL(SR_CLK_PIN, __LINE__ )
#endif
#if PIN_EXISTS(SR_DATA)
  REPORT_NAME_DIGITAL(SR_DATA_PIN, __LINE__ )
#endif
#if PIN_EXISTS(SR_STROBE)
  REPORT_NAME_DIGITAL(SR_STROBE_PIN, __LINE__ )
#endif
#if PIN_EXISTS(STAT_LED_BLUE)
  REPORT_NAME_DIGITAL(STAT_LED_BLUE_PIN, __LINE__ )
#endif
#if defined(STAT_LED_RED_LED) &&  STAT_LED_RED_LED >= 0
  REPORT_NAME_DIGITAL(STAT_LED_RED_LED, __LINE__ )
#endif
#if PIN_EXISTS(STAT_LED_RED)
  REPORT_NAME_DIGITAL(STAT_LED_RED_PIN, __LINE__ )
#endif
#if PIN_EXISTS(STEPPER_RESET)
  REPORT_NAME_DIGITAL(STEPPER_RESET_PIN, __LINE__ )
#endif
#if PIN_EXISTS(SUICIDE)
  REPORT_NAME_DIGITAL(SUICIDE_PIN, __LINE__ )
#endif
#if defined(THERMO_CS1) &&  THERMO_CS1 >= 0
  REPORT_NAME_DIGITAL(THERMO_CS1, __LINE__ )
#endif
#if defined(THERMO_CS2) &&  THERMO_CS2 >= 0
  REPORT_NAME_DIGITAL(THERMO_CS2, __LINE__ )
#endif
#if PIN_EXISTS(THERMO_DO)
  REPORT_NAME_DIGITAL(THERMO_DO_PIN, __LINE__ )
#endif
#if PIN_EXISTS(THERMO_SCK)
  REPORT_NAME_DIGITAL(THERMO_SCK_PIN, __LINE__ )
#endif
#if defined(TLC_BLANK_BIT) &&  TLC_BLANK_BIT >= 0
  REPORT_NAME_DIGITAL(TLC_BLANK_BIT, __LINE__ )
#endif
#if PIN_EXISTS(TLC_BLANK)
  REPORT_NAME_DIGITAL(TLC_BLANK_PIN, __LINE__ )
#endif
#if defined(TLC_BLANK_PORT) &&  TLC_BLANK_PORT >= 0
  REPORT_NAME_DIGITAL(TLC_BLANK_PORT, __LINE__ )
#endif
#if defined(TLC_CLOCK_BIT) &&  TLC_CLOCK_BIT >= 0
  REPORT_NAME_DIGITAL(TLC_CLOCK_BIT, __LINE__ )
#endif
#if PIN_EXISTS(TLC_CLOCK)
  REPORT_NAME_DIGITAL(TLC_CLOCK_PIN, __LINE__ )
#endif
#if defined(TLC_CLOCK_PORT) &&  TLC_CLOCK_PORT >= 0
  REPORT_NAME_DIGITAL(TLC_CLOCK_PORT, __LINE__ )
#endif
#if defined(TLC_DATA_BIT) &&  TLC_DATA_BIT >= 0
  REPORT_NAME_DIGITAL(TLC_DATA_BIT, __LINE__ )
#endif
#if PIN_EXISTS(TLC_DATA)
  REPORT_NAME_DIGITAL(TLC_DATA_PIN, __LINE__ )
#endif
#if defined(TLC_DATA_PORT) &&  TLC_DATA_PORT >= 0
  REPORT_NAME_DIGITAL(TLC_DATA_PORT, __LINE__ )
#endif
#if defined(TLC_XLAT_BIT) &&  TLC_XLAT_BIT >= 0
  REPORT_NAME_DIGITAL(TLC_XLAT_BIT, __LINE__ )
#endif
#if PIN_EXISTS(TLC_XLAT)
  REPORT_NAME_DIGITAL(TLC_XLAT_PIN, __LINE__ )
#endif
#if defined(TLC_XLAT_PORT) &&  TLC_XLAT_PORT >= 0
  REPORT_NAME_DIGITAL(TLC_XLAT_PORT, __LINE__ )
#endif
#if PIN_EXISTS(TOOL_0)
  REPORT_NAME_DIGITAL(TOOL_0_PIN, __LINE__ )
#endif
#if PIN_EXISTS(TOOL_0_PWM)
  REPORT_NAME_DIGITAL(TOOL_0_PWM_PIN, __LINE__ )
#endif
#if PIN_EXISTS(TOOL_1)
  REPORT_NAME_DIGITAL(TOOL_1_PIN, __LINE__ )
#endif
#if PIN_EXISTS(TOOL_1_PWM)
  REPORT_NAME_DIGITAL(TOOL_1_PWM_PIN, __LINE__ )
#endif
#if PIN_EXISTS(TOOL_2)
  REPORT_NAME_DIGITAL(TOOL_2_PIN, __LINE__ )
#endif
#if PIN_EXISTS(TOOL_2_PWM)
  REPORT_NAME_DIGITAL(TOOL_2_PWM_PIN, __LINE__ )
#endif
#if PIN_EXISTS(TOOL_3)
  REPORT_NAME_DIGITAL(TOOL_3_PIN, __LINE__ )
#endif
#if PIN_EXISTS(TOOL_3_PWM)
  REPORT_NAME_DIGITAL(TOOL_3_PWM_PIN, __LINE__ )
#endif
#if PIN_EXISTS(TOOL_PWM)
  REPORT_NAME_DIGITAL(TOOL_PWM_PIN, __LINE__ )
#endif
#if PIN_EXISTS(TX_ENABLE)
  REPORT_NAME_DIGITAL(TX_ENABLE_PIN, __LINE__ )
#endif
#if defined(UI1) &&  UI1 >= 0
  REPORT_NAME_DIGITAL(UI1, __LINE__ )
#endif
#if defined(UI2) &&  UI2 >= 0
  REPORT_NAME_DIGITAL(UI2, __LINE__ )
#endif
#if defined(UNUSED_PWM) &&  UNUSED_PWM >= 0
  REPORT_NAME_DIGITAL(UNUSED_PWM, __LINE__ )
#endif
#if PIN_EXISTS(X_ATT)
  REPORT_NAME_DIGITAL(X_ATT_PIN, __LINE__ )
#endif
#if PIN_EXISTS(X_CS)
  REPORT_NAME_DIGITAL(X_CS_PIN, __LINE__ )
#endif
#if PIN_EXISTS(X_DIR)
  REPORT_NAME_DIGITAL(X_DIR_PIN, __LINE__ )
#endif
#if PIN_EXISTS(X_ENABLE)
  REPORT_NAME_DIGITAL(X_ENABLE_PIN, __LINE__ )
#endif
#if PIN_EXISTS(X_MAX)
  REPORT_NAME_DIGITAL(X_MAX_PIN, __LINE__ )
#endif
#if PIN_EXISTS(X_MIN)
  REPORT_NAME_DIGITAL(X_MIN_PIN, __LINE__ )
#endif
#if PIN_EXISTS(X_MS1)
  REPORT_NAME_DIGITAL(X_MS1_PIN, __LINE__ )
#endif
#if PIN_EXISTS(X_MS2)
  REPORT_NAME_DIGITAL(X_MS2_PIN, __LINE__ )
#endif
#if PIN_EXISTS(X_STEP)
  REPORT_NAME_DIGITAL(X_STEP_PIN, __LINE__ )
#endif
#if PIN_EXISTS(X_STOP)
  REPORT_NAME_DIGITAL(X_STOP_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Y_ATT)
  REPORT_NAME_DIGITAL(Y_ATT_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Y_CS)
  REPORT_NAME_DIGITAL(Y_CS_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Y_DIR)
  REPORT_NAME_DIGITAL(Y_DIR_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Y_ENABLE)
  REPORT_NAME_DIGITAL(Y_ENABLE_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Y_MAX)
  REPORT_NAME_DIGITAL(Y_MAX_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Y_MIN)
  REPORT_NAME_DIGITAL(Y_MIN_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Y_MS1)
  REPORT_NAME_DIGITAL(Y_MS1_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Y_MS2)
  REPORT_NAME_DIGITAL(Y_MS2_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Y_STEP)
  REPORT_NAME_DIGITAL(Y_STEP_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Y_STOP)
  REPORT_NAME_DIGITAL(Y_STOP_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Z_ATT)
  REPORT_NAME_DIGITAL(Z_ATT_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Z_CS)
  REPORT_NAME_DIGITAL(Z_CS_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Z_DIR)
  REPORT_NAME_DIGITAL(Z_DIR_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Z_ENABLE)
  REPORT_NAME_DIGITAL(Z_ENABLE_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Z_MAX)
  REPORT_NAME_DIGITAL(Z_MAX_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Z_MIN)
  REPORT_NAME_DIGITAL(Z_MIN_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Z_MIN_PROBE)
  REPORT_NAME_DIGITAL(Z_MIN_PROBE_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Z_MS1)
  REPORT_NAME_DIGITAL(Z_MS1_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Z_MS2)
  REPORT_NAME_DIGITAL(Z_MS2_PIN, __LINE__ )
#endif
#if defined(Z_probe_pin) &&  Z_probe_pin >= 0
  REPORT_NAME_DIGITAL(Z_probe_pin, __LINE__ )
#endif
#if PIN_EXISTS(Z_STEP)
  REPORT_NAME_DIGITAL(Z_STEP_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Z_STOP)
  REPORT_NAME_DIGITAL(Z_STOP_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Z2_CS)
  REPORT_NAME_DIGITAL(Z2_CS_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Z2_DIR)
  REPORT_NAME_DIGITAL(Z2_DIR_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Z2_ENABLE)
  REPORT_NAME_DIGITAL(Z2_ENABLE_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Z2_MS1)
  REPORT_NAME_DIGITAL(Z2_MS1_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Z2_MS2)
  REPORT_NAME_DIGITAL(Z2_MS2_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Z2_MS3)
  REPORT_NAME_DIGITAL(Z2_MS3_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Z2_STEP)
  REPORT_NAME_DIGITAL(Z2_STEP_PIN, __LINE__ )
#endif
#if PIN_EXISTS(ZRIB_V20_D6)
  REPORT_NAME_DIGITAL(ZRIB_V20_D6_PIN, __LINE__ )
#endif
#if PIN_EXISTS(ZRIB_V20_D9)
  REPORT_NAME_DIGITAL(ZRIB_V20_D9_PIN, __LINE__ )
#endif
#if PIN_EXISTS(X_SERIAL_TX)
  REPORT_NAME_DIGITAL(X_SERIAL_TX_PIN, __LINE__ )
#endif
#if PIN_EXISTS(X_SERIAL_RX)
  REPORT_NAME_DIGITAL(X_SERIAL_RX_PIN, __LINE__ )
#endif
#if PIN_EXISTS(X2_SERIAL_TX)
  REPORT_NAME_DIGITAL(X2_SERIAL_TX_PIN, __LINE__ )
#endif
#if PIN_EXISTS(X2_SERIAL_RX)
  REPORT_NAME_DIGITAL(X2_SERIAL_RX_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Y_SERIAL_TX)
  REPORT_NAME_DIGITAL(Y_SERIAL_TX_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Y_SERIAL_RX)
  REPORT_NAME_DIGITAL(Y_SERIAL_RX_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Y2_SERIAL_TX)
  REPORT_NAME_DIGITAL(Y2_SERIAL_TX_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Y2_SERIAL_RX)
  REPORT_NAME_DIGITAL(Y2_SERIAL_RX_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Z_SERIAL_TX)
  REPORT_NAME_DIGITAL(Z_SERIAL_TX_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Z_SERIAL_RX)
  REPORT_NAME_DIGITAL(Z_SERIAL_RX_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Z2_SERIAL_TX)
  REPORT_NAME_DIGITAL(Z2_SERIAL_TX_PIN, __LINE__ )
#endif
#if PIN_EXISTS(Z2_SERIAL_RX)
  REPORT_NAME_DIGITAL(Z2_SERIAL_RX_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E0_SERIAL_TX)
  REPORT_NAME_DIGITAL(E0_SERIAL_TX_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E0_SERIAL_RX)
  REPORT_NAME_DIGITAL(E0_SERIAL_RX_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E1_SERIAL_TX)
  REPORT_NAME_DIGITAL(E1_SERIAL_TX_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E1_SERIAL_RX)
  REPORT_NAME_DIGITAL(E1_SERIAL_RX_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E2_SERIAL_TX)
  REPORT_NAME_DIGITAL(E2_SERIAL_TX_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E2_SERIAL_RX)
  REPORT_NAME_DIGITAL(E2_SERIAL_RX_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E3_SERIAL_TX)
  REPORT_NAME_DIGITAL(E3_SERIAL_TX_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E3_SERIAL_RX)
  REPORT_NAME_DIGITAL(E3_SERIAL_RX_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E4_SERIAL_TX)
  REPORT_NAME_DIGITAL(E4_SERIAL_TX_PIN, __LINE__ )
#endif
#if PIN_EXISTS(E4_SERIAL_RX)
  REPORT_NAME_DIGITAL(E4_SERIAL_RX_PIN, __LINE__ )
#endif
