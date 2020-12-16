#pragma once

/* USB Device descriptor parameter */
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0002

/* key matrix size */
#define MATRIX_ROWS 15
#define MATRIX_COLS  7 

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
#define MATRIX_ROW_PINS { A7, B0, B1, B10, B11, B8, A8, B15, B14, B13, A9, A10, A0, C14, C15 }
/*                        R0  R1  R2  R3   R4   R5  R6  R7   R8   R9   RA  RB   RC  RD   RE */
#define MATRIX_COL_PINS { A1, A2, A3, A4, A5, A6, B12 }
/*                        C0  C1  C2  C3  C4  C5  C6 */

#define NUM_LOCK_LED_PIN B4
#define CAPS_LOCK_LED_PIN B5
#define SCROLL_LOCK_LED_PIN B3
#define KEYPAD_LED_PIN A15

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define I2C_DRIVER I2CD1
#define EEPROM_I2C_24LC128

