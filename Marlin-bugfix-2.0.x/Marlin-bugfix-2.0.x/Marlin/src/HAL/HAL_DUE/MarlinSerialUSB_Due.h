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
 * MarlinSerialUSB_Due.h - Hardware Serial over USB (CDC) library for Arduino DUE
 * Copyright (c) 2017 Eduardo José Tagle. All right reserved
 */

#ifndef MARLINSERIALUSB_DUE_H
#define MARLINSERIALUSB_DUE_H

#include "../../inc/MarlinConfig.h"

#if SERIAL_PORT == -1

#include <WString.h>

#define DEC 10
#define HEX 16
#define OCT 8
#define BIN 2

class MarlinSerialUSB {

public:
  MarlinSerialUSB() {};
  static void begin(const long);
  static void end();
  static int peek(void);
  static int read(void);
  static void flush(void);
  static bool available(void);
  static void write(const uint8_t c);

  #if ENABLED(SERIAL_STATS_DROPPED_RX)
  FORCE_INLINE static uint32_t dropped() { return 0; }
  #endif

  #if ENABLED(SERIAL_STATS_MAX_RX_QUEUED)
  FORCE_INLINE static int rxMaxEnqueued() { return 0; }
  #endif

  static FORCE_INLINE void write(const char* str) { while (*str) write(*str++); }
  static FORCE_INLINE void write(const uint8_t* buffer, size_t size) { while (size--) write(*buffer++); }
  static FORCE_INLINE void print(const String& s) { for (int i = 0; i < (int)s.length(); i++) write(s[i]); }
  static FORCE_INLINE void print(const char* str) { write(str); }

  static void print(char, int = 0);
  static void print(unsigned char, int = 0);
  static void print(int, int = DEC);
  static void print(unsigned int, int = DEC);
  static void print(long, int = DEC);
  static void print(unsigned long, int = DEC);
  static void print(double, int = 2);

  static void println(const String& s);
  static void println(const char[]);
  static void println(char, int = 0);
  static void println(unsigned char, int = 0);
  static void println(int, int = DEC);
  static void println(unsigned int, int = DEC);
  static void println(long, int = DEC);
  static void println(unsigned long, int = DEC);
  static void println(double, int = 2);
  static void println(void);
  operator bool() { return true; }

private:
  static void printNumber(unsigned long, const uint8_t);
  static void printFloat(double, uint8_t);
};

extern MarlinSerialUSB customizedSerial;

#endif // SERIAL_PORT == -1
#endif // MARLINSERIAL_DUE_H
