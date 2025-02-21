/*
Copyright 2021 treelzebub

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4B50 // "KP"
#define PRODUCT_ID      0xEF8C
#define DEVICE_VER      0x0001
#define MANUFACTURER    KP Republic
#define PRODUCT         BM60EC
#define DESCRIPTION     KP Republic BM60EC

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */

//                         0   1   2   3   4   5   6   7   8   9   A   B   C   D
#define MATRIX_ROW_PINS { B0, B1, B2, B3, E6 }
#define MATRIX_COL_PINS { D0, D1, D2, D3, D5, D4, D6, D7, B4, B5, B6, C6, C7, F7 }

#define DIODE_DIRECTION COL2ROW

#define RGB_DI_PIN E2
#define DRIVER_LED_TOTAL 69
#ifdef RGB_DI_PIN
    #define RGBLED_NUM 69
    #define RGB_MATRIX_KEYPRESSES
#endif

#define ENCODERS_PAD_A { F5 }
#define ENCODERS_PAD_B { F6 }
