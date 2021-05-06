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
 * servo.cpp - Interrupt driven Servo library for Arduino using 16 bit timers- Version 2
 * Copyright (c) 2009 Michael Margolis.  All right reserved.
 */

/**
 * A servo is activated by creating an instance of the Servo class passing the desired pin to the attach() method.
 * The servos are pulsed in the background using the value most recently written using the write() method
 *
 * Note that analogWrite of PWM on pins associated with the timer are disabled when the first servo is attached.
 * Timers are seized as needed in groups of 12 servos - 24 servos use two timers, 48 servos will use four.
 *
 * The methods are:
 *
 * Servo - Class for manipulating servo motors connected to Arduino pins.
 *
 * attach(pin)           - Attach a servo motor to an i/o pin.
 * attach(pin, min, max) - Attach to a pin, setting min and max values in microseconds
 *                         Default min is 544, max is 2400
 *
 * write()               - Set the servo angle in degrees. (Invalid angles —over MIN_PULSE_WIDTH— are treated as µs.)
 * writeMicroseconds()   - Set the servo pulse width in microseconds.
 * move(pin, angle)      - Sequence of attach(pin), write(angle), delay(SERVO_DELAY).
 *                         With DEACTIVATE_SERVOS_AFTER_MOVE it detaches after SERVO_DELAY.
 * read()                - Get the last-written servo pulse width as an angle between 0 and 180.
 * readMicroseconds()    - Get the last-written servo pulse width in microseconds.
 * attached()            - Return true if a servo is attached.
 * detach()              - Stop an attached servo from pulsing its i/o pin.
 *
 */


#include "../inc/MarlinConfig.h"

#include "HAL.h"

#if HAS_SERVOS && !(IS_32BIT_TEENSY || defined(TARGET_LPC1768))

//#include <Arduino.h>

#include "servo.h"
#include "servo_private.h"

ServoInfo_t servo_info[MAX_SERVOS];                  // static array of servo info structures
uint8_t ServoCount = 0;                              // the total number of attached servos


#define SERVO_MIN() (MIN_PULSE_WIDTH - this->min * 4)  // minimum value in uS for this servo
#define SERVO_MAX() (MAX_PULSE_WIDTH - this->max * 4)  // maximum value in uS for this servo

/************ static functions common to all instances ***********************/

static boolean isTimerActive(timer16_Sequence_t timer) {
  // returns true if any servo is active on this timer
  for (uint8_t channel = 0; channel < SERVOS_PER_TIMER; channel++) {
    if (SERVO(timer, channel).Pin.isActive)
      return true;
  }
  return false;
}

/****************** end of static functions ******************************/

Servo::Servo() {
  if (ServoCount < MAX_SERVOS) {
    this->servoIndex = ServoCount++;                    // assign a servo index to this instance
    servo_info[this->servoIndex].ticks = usToTicks(DEFAULT_PULSE_WIDTH);   // store default values  - 12 Aug 2009
  }
  else
    this->servoIndex = INVALID_SERVO;  // too many servos
}

int8_t Servo::attach(int pin) {
  return this->attach(pin, MIN_PULSE_WIDTH, MAX_PULSE_WIDTH);
}

int8_t Servo::attach(int pin, int min, int max) {

  if (this->servoIndex >= MAX_SERVOS) return -1;

  if (pin > 0) servo_info[this->servoIndex].Pin.nbr = pin;
  pinMode(servo_info[this->servoIndex].Pin.nbr, OUTPUT); // set servo pin to output

  // todo min/max check: abs(min - MIN_PULSE_WIDTH) /4 < 128
  this->min = (MIN_PULSE_WIDTH - min) / 4; //resolution of min/max is 4 uS
  this->max = (MAX_PULSE_WIDTH - max) / 4;

  // initialize the timer if it has not already been initialized
  timer16_Sequence_t timer = SERVO_INDEX_TO_TIMER(servoIndex);
  if (!isTimerActive(timer)) initISR(timer);
  servo_info[this->servoIndex].Pin.isActive = true;  // this must be set after the check for isTimerActive

  return this->servoIndex;
}

void Servo::detach() {
  servo_info[this->servoIndex].Pin.isActive = false;
  timer16_Sequence_t timer = SERVO_INDEX_TO_TIMER(servoIndex);
  if (!isTimerActive(timer)) finISR(timer);
}

void Servo::write(int value) {
  if (value < MIN_PULSE_WIDTH) { // treat values less than 544 as angles in degrees (valid values in microseconds are handled as microseconds)
    value = map(constrain(value, 0, 180), 0, 180, SERVO_MIN(), SERVO_MAX());
  }
  this->writeMicroseconds(value);
}

void Servo::writeMicroseconds(int value) {
  // calculate and store the values for the given channel
  byte channel = this->servoIndex;
  if (channel < MAX_SERVOS) {  // ensure channel is valid
    // ensure pulse width is valid
    value = constrain(value, SERVO_MIN(), SERVO_MAX()) - (TRIM_DURATION);
    value = usToTicks(value);  // convert to ticks after compensating for interrupt overhead - 12 Aug 2009

    CRITICAL_SECTION_START;
    servo_info[channel].ticks = value;
    CRITICAL_SECTION_END;
  }
}

// return the value as degrees
int Servo::read() { return map(this->readMicroseconds() + 1, SERVO_MIN(), SERVO_MAX(), 0, 180); }

int Servo::readMicroseconds() {
  return (this->servoIndex == INVALID_SERVO) ? 0 : ticksToUs(servo_info[this->servoIndex].ticks) + TRIM_DURATION;
}

bool Servo::attached() { return servo_info[this->servoIndex].Pin.isActive; }

void Servo::move(int value) {
  constexpr uint16_t servo_delay[] = SERVO_DELAY;
  static_assert(COUNT(servo_delay) == NUM_SERVOS, "SERVO_DELAY must be an array NUM_SERVOS long.");
  if (this->attach(0) >= 0) {
    this->write(value);
    delay(servo_delay[this->servoIndex]);
    #if ENABLED(DEACTIVATE_SERVOS_AFTER_MOVE)
      this->detach();
    #endif
  }
}

#endif // HAS_SERVOS

