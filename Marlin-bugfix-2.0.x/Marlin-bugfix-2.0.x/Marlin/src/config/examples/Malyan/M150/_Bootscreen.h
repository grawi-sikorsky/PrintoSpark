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
 * Custom Boot Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable SHOW_CUSTOM_BOOTSCREEN in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * http://marlinfw.org/tools/u8glib/converter.html
 */
#include <avr/pgmspace.h>

#define CUSTOM_BOOTSCREEN_TIMEOUT   1000
#define CUSTOM_BOOTSCREEN_BMPWIDTH  128

const unsigned char custom_start_bmp[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000111,B00000000,B00000000,B00000011,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00011111,B11000000,B00000000,B00001111,B11100000,B01111100,B00000011,B11100000,B01111000,B00011100,B00000111,B10000001,B11100000,B11110000,B00111110,B00001110,
  B01111111,B11100000,B00000000,B00111111,B11110000,B01111110,B00000111,B11100000,B11111100,B00011100,B00000011,B10000001,B11000001,B11111000,B00111111,B00001110,
  B01111111,B11111000,B00000000,B01111111,B11110000,B01111110,B00000111,B11100000,B11111100,B00011100,B00000011,B11000011,B11000001,B11111000,B00111111,B00001110,
  B01111011,B11111110,B00000001,B11111110,B11110000,B01111111,B00001111,B11100001,B11111110,B00011100,B00000001,B11000011,B10000011,B11111100,B00111111,B10001110,
  B01111100,B11111111,B10000111,B11111001,B11110000,B01110111,B00001110,B11100001,B11111110,B00011100,B00000001,B11100111,B10000011,B11111100,B00111011,B10001110,
  B01111111,B01111111,B11001111,B11110111,B11110000,B01110111,B10011110,B11100001,B11001110,B00011100,B00000000,B11100111,B00000011,B10011100,B00111011,B11001110,
  B01111111,B10011111,B11111111,B11001111,B11110000,B01110011,B10011100,B11100011,B11001111,B00011100,B00000000,B11111111,B00000111,B10011110,B00111001,B11001110,
  B01111111,B11100111,B11111111,B00111111,B11110000,B01110011,B11111100,B11100011,B10000111,B00011100,B00000000,B01111110,B00000111,B00001110,B00111001,B11101110,
  B01111111,B11111011,B11111110,B11111111,B11110000,B01110001,B11111000,B11100011,B10000111,B00011100,B00000000,B01111110,B00001111,B00001111,B00111000,B11101110,
  B01111111,B11111100,B11111001,B11111111,B11110000,B01110001,B11111000,B11100111,B11111111,B10011100,B00000000,B00111100,B00001111,B11111111,B00111000,B11111110,
  B01111111,B11111111,B00100111,B11111111,B11110000,B01110000,B11110000,B11100111,B11111111,B10011100,B00000000,B00111100,B00001111,B11111111,B00111000,B01111110,
  B01111111,B11111111,B11011111,B11111111,B11110000,B01110000,B11110000,B11101111,B11111111,B11011100,B00000000,B00111100,B00011111,B11111111,B10111000,B01111110,
  B01111111,B11011111,B11111111,B11011111,B11110000,B01110000,B01100000,B11101111,B00000011,B11011111,B11111000,B00111100,B00011110,B00000111,B10111000,B00111110,
  B01111111,B11000111,B11111111,B00011111,B11110000,B01110000,B01100000,B11101110,B00000001,B11011111,B11111000,B00111100,B00011100,B00000011,B10111000,B00111110,
  B01111111,B11000011,B11111110,B00011111,B11110000,B01110000,B00000000,B11101110,B00000001,B11011111,B11111000,B00111100,B00011100,B00000011,B10111000,B00011110,
  B01111111,B11000011,B11111110,B00011111,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B01111111,B11000011,B11011110,B00011111,B11110000,B01111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111110,
  B01111111,B11000011,B11011110,B00011111,B11110000,B01111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111110,
  B01111111,B11000011,B11011110,B00011111,B11110000,B01111100,B00111111,B11111010,B11111011,B11111111,B11111111,B11111111,B11111101,B01111010,B10111111,B11111110,
  B01111111,B11000011,B11011110,B00011111,B11110000,B01111101,B10011111,B11111011,B11111111,B11111111,B11111111,B11111111,B11111111,B01111110,B11110111,B11111110,
  B01111111,B11000011,B11011110,B00011111,B11110000,B01111101,B10010011,B00011010,B10001010,B00011000,B11100011,B10001100,B01000101,B00011010,B10100010,B11011110,
  B00111111,B11000011,B11011110,B00001111,B11110000,B01111100,B00101101,B11001010,B11001010,B11010110,B11101001,B00100100,B11001101,B01101010,B10110110,B10111110,
  B00011111,B10000011,B11011110,B00000111,B11100000,B01111101,B10100011,B01101010,B10011010,B11010110,B11101001,B00100110,B01100101,B01101010,B10110110,B00111110,
  B00000110,B00000011,B11011110,B00000001,B10000000,B01111101,B10010001,B00001010,B10001010,B11011000,B11100011,B10001100,B01000101,B00011010,B10110011,B01111110,
  B00000000,B00000011,B11011110,B00000000,B00000000,B01111111,B11111111,B11111111,B11111111,B11111110,B11101111,B11111111,B11111111,B11111111,B11111111,B01111110,
  B00000000,B00000011,B11011110,B00000000,B00000000,B01111111,B11111111,B11111111,B11111111,B11110001,B11101111,B11111111,B11111111,B11111111,B11111110,B11111110,
  B00000000,B00000011,B11011110,B00000000,B00000000,B01111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111110,
  B00000000,B00000011,B11011110,B00000000,B00000000,B01111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111110,
  B00000000,B00000011,B11011110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000001,B11011100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B01010000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
};
