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

#include "../gcode.h"
#include "../../module/motion.h"

#include "../../Marlin.h"

#if ENABLED(FWRETRACT)
  #include "../../feature/fwretract.h"
#endif

#include "../../sd/cardreader.h"

#if ENABLED(NANODLP_Z_SYNC)
  #include "../../module/stepper.h"
#endif

extern float destination[XYZE];

#if ENABLED(NO_MOTION_BEFORE_HOMING)
  #define G0_G1_CONDITION !axis_unhomed_error(parser.seen('X'), parser.seen('Y'), parser.seen('Z'))
#else
  #define G0_G1_CONDITION true
#endif

/**
 * G0, G1: Coordinated movement of X Y Z E axes
 */
void GcodeSuite::G0_G1(
  #if IS_SCARA
    bool fast_move/*=false*/
  #endif
) {
  if (IsRunning() && G0_G1_CONDITION) {
    get_destination_from_command(); // For X Y Z E F // E na L

    #if ENABLED(FWRETRACT)

      if (MIN_AUTORETRACT <= MAX_AUTORETRACT) {
        // When M209 Autoretract is enabled, convert E-only moves to firmware retract/recover moves
        if (fwretract.autoretract_enabled && parser.seen('E') && !(parser.seen('X') || parser.seen('Y') || parser.seen('Z'))) {
          const float echange = destination[E_AXIS] - current_position[E_AXIS];
          // Is this a retract or recover move?
          if (WITHIN(FABS(echange), MIN_AUTORETRACT, MAX_AUTORETRACT) && fwretract.retracted[active_extruder] == (echange > 0.0)) {
            current_position[E_AXIS] = destination[E_AXIS]; // Hide a G1-based retract/recover from calculations
            sync_plan_position_e();                         // AND from the planner
            return fwretract.retract(echange < 0.0);        // Firmware-based retract/recover (double-retract ignored)
          }
        }
      }

    #endif // FWRETRACT

    #if IS_SCARA
      fast_move ? prepare_uninterpolated_move_to_destination() : prepare_move_to_destination();
    #else
      prepare_move_to_destination();
    #endif

    #if ENABLED(NANODLP_Z_SYNC)
      #if ENABLED(NANODLP_ALL_AXIS)
        #define _MOVE_SYNC true                 // For any move wait and output sync message
      #else
        #define _MOVE_SYNC parser.seenval('Z')  // Only for Z move
      #endif
      if (_MOVE_SYNC) {
        stepper.synchronize();
        SERIAL_ECHOLNPGM(MSG_Z_MOVE_COMP);
      }
    #endif
  }
}
