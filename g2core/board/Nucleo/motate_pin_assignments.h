/*
 * motate_pin_assignments.h - pin assignments
 * For: /board/Nucleo
 * This file is part of the g2core project
 *
 * Copyright (c) 2013-2016 Robert Giseburt
 * Copyright (c) 2013-2016 Alden S. Hart Jr.
 *
 * This file is part of the Motate Library.
 *
 * This file ("the software") is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2 as published by the
 * Free Software Foundation. You should have received a copy of the GNU General Public
 * License, version 2 along with the software. If not, see <http://www.gnu.org/licenses/>.
 *
 * As a special exception, you may use this file as part of a software library without
 * restriction. Specifically, if other files instantiate templates or use macros or
 * inline functions from this file, or you compile this file and link it with  other
 * files to produce an executable, this file does not by itself cause the resulting
 * executable to be covered by the GNU General Public License. This exception does not
 * however invalidate any other reasons why the executable file might be covered by the
 * GNU General Public License.
 *
 * THE SOFTWARE IS DISTRIBUTED IN THE HOPE THAT IT WILL BE USEFUL, BUT WITHOUT ANY
 * WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT
 * SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
 * OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */

#ifndef motate_pin_assignments_h
#define motate_pin_assignments_h

#include <MotateTimers.h>

// NOTE: This is a terrible example of a motate_pin_assignments.h file!
// This one is assigned backward in order to match the numbering on the Due.
// When making your own board, please use one of the other boards as an example
// of how to assign names to the pins.

namespace Motate {

// Nucleo pin name & function

/******
  CN10
 ******/
_MAKE_MOTATE_PIN(0, 'A', 8);  // D0, RX0
_MAKE_MOTATE_PIN(1, 'A', 9);  // D1, TX0
_MAKE_MOTATE_PIN(2, 'B', 25);  // D2, PWM2
_MAKE_MOTATE_PIN(3, 'C', 28);  // D3, PWM3
_MAKE_MOTATE_PIN(4, 'C', 26);  // D4, PWM4
_MAKE_MOTATE_PIN(5, 'C', 25);  // D5, PWM5
_MAKE_MOTATE_PIN(6, 'C', 24);  // D6, PWM6
_MAKE_MOTATE_PIN(7, 'C', 23);  // D7, PWM7

/******
  CN7
 ******/
_MAKE_MOTATE_PIN(8, 'F', 12);   // D8
_MAKE_MOTATE_PIN(9, 'D', 15);   // D9, TIMER_B_PWM2
_MAKE_MOTATE_PIN(10, 'D', 14);  // D10, SPI_A_CS/TIM_B_PWM3
_MAKE_MOTATE_PIN(11, 'A', 7);   // D11, SPI_A_MOSI/TIM_E_PWM1
_MAKE_MOTATE_PIN(12, 'A', 6);   // D12, SPI_A_MISO
_MAKE_MOTATE_PIN(13, 'A', 5);   // D13, SPI_A_SCK
_MAKE_MOTATE_PIN(14, 'B', 9);   // D14, I2C_A_SDA
_MAKE_MOTATE_PIN(15, 'B', 8);   // D15, I2C_A_SCL
_MAKE_MOTATE_PIN(16, 'C', 6);   // D16, I2S_A_MCK
_MAKE_MOTATE_PIN(17, 'B', 15);  // D17, I2S_A_SD
_MAKE_MOTATE_PIN(18, 'B', 13);  // D18, I2S_A_CK
_MAKE_MOTATE_PIN(19, 'B', 12);  // D19, I2S_A_WS
_MAKE_MOTATE_PIN(20, 'A', 15);  // D20, I2S_B_WS
_MAKE_MOTATE_PIN(21, 'C', 7);   // D21, I2S_B_MCK
_MAKE_MOTATE_PIN(22, 'B', 5);   // D22, I2S_B_SD/SPI_B_MOSI
_MAKE_MOTATE_PIN(23, 'B', 3);   // D23, I2S_B_CK/SPI_B_SCK
_MAKE_MOTATE_PIN(24, 'A', 4);   // D24, SPI_B_NSS
_MAKE_MOTATE_PIN(25, 'B', 4);   // D25, SPI_B_MISO

/******
  CN10
 ******/
_MAKE_MOTATE_PIN(26, 'D', 1);   // D26
_MAKE_MOTATE_PIN(27, 'D', 2);   // D27
_MAKE_MOTATE_PIN(28, 'D', 3);   // D28
_MAKE_MOTATE_PIN(29, 'D', 6);   // D29
_MAKE_MOTATE_PIN(30, 'D', 9);   // D30
_MAKE_MOTATE_PIN(31, 'A', 7);   // D31
_MAKE_MOTATE_PIN(32, 'D', 10);  // D32
_MAKE_MOTATE_PIN(33, 'C', 1);   // D33
_MAKE_MOTATE_PIN(34, 'C', 2);   // D34
_MAKE_MOTATE_PIN(35, 'C', 3);   // D35
_MAKE_MOTATE_PIN(36, 'C', 4);  // D36
_MAKE_MOTATE_PIN(37, 'C', 5);  // D37
_MAKE_MOTATE_PIN(38, 'C', 6);  // D38
_MAKE_MOTATE_PIN(39, 'C', 7);  // D39
_MAKE_MOTATE_PIN(40, 'C', 8);  // D40
_MAKE_MOTATE_PIN(41, 'C', 9);  // D41
_MAKE_MOTATE_PIN(42, 'A', 19);  // D42

/******
  CN8
 ******/
_MAKE_MOTATE_PIN(43, 'C', 8);  // D43, SDMMC_D0
_MAKE_MOTATE_PIN(44, 'C', 9);  // D44, SDMMC_D1/I2S_A_CKIN
_MAKE_MOTATE_PIN(45, 'C', 10); // D45, SDMMC_D2
_MAKE_MOTATE_PIN(46, 'C', 11); // D46, SDMMC_D3
_MAKE_MOTATE_PIN(47, 'C', 12); // D47, SDMMC_CK
_MAKE_MOTATE_PIN(48, 'D', 2);  // D48, SDMMC_CMD
_MAKE_MOTATE_PIN(49, 'G', 2);  // D49
_MAKE_MOTATE_PIN(50, 'G', 3);  // D50

/******
  CN9
 ******/
_MAKE_MOTATE_PIN(51, 'D', 7);  // D51, USART_B_SCLK
_MAKE_MOTATE_PIN(52, 'D', 6);  // D52, USART_B_RX
_MAKE_MOTATE_PIN(53, 'D', 5);  // D53, USART_B_TX
_MAKE_MOTATE_PIN(54, 'D', 4);  // D54, USART_B_RTS
_MAKE_MOTATE_PIN(55, 'D', 3);  // D55, USART_B_CTS
_MAKE_MOTATE_PIN(56, 'E', 2);  // D56, SAI_A_MCLK
_MAKE_MOTATE_PIN(57, 'E', 4);  // D57, SAI_A_FS
_MAKE_MOTATE_PIN(58, 'E', 5);  // D58, SAI_A_SCK
_MAKE_MOTATE_PIN(59, 'E', 6);  // D59, SAI_A_SD
_MAKE_MOTATE_PIN(60, 'E', 3);  // D60, SAI_B_SD
_MAKE_MOTATE_PIN(61, 'F', 8);  // D61, SAI_B_SCK
_MAKE_MOTATE_PIN(62, 'F', 7);  // D62, SAI_B_MCLK
_MAKE_MOTATE_PIN(63, 'F', 9);  // D63, SAI_B_FS
_MAKE_MOTATE_PIN(64, 'G', 1);  // D64
_MAKE_MOTATE_PIN(65, 'G', 0);  // D65
_MAKE_MOTATE_PIN(66, 'D', 1);  // D66, CAN_TX
_MAKE_MOTATE_PIN(67, 'D', 0);  // D67, CAN_RX
_MAKE_MOTATE_PIN(68, 'F', 0);  // D68, I2C_B_SDA
_MAKE_MOTATE_PIN(69, 'F', 1);  // D69, I2C_B_SCL
_MAKE_MOTATE_PIN(70, 'F', 2);  // D70, I2C_B_SMBA
_MAKE_MOTATE_PIN(71, 'A', 7);  // D71

// _MAKE_MOTATE_PIN(73, 'A', 21);  // TXL, LED Indicator
// _MAKE_MOTATE_PIN(74, 'A', 25);  // SPI-MISO (on ICSP header only)
// _MAKE_MOTATE_PIN(75, 'A', 26);  // SPI-MOSI (on ICSP header only)
// _MAKE_MOTATE_PIN(76, 'A', 27);  // SPI-SCK  (on ICSP header only)
// _MAKE_MOTATE_PIN(77, 'A', 28);  // SS0
// _MAKE_MOTATE_PIN(78, 'B', 23);  // SS1

}  // namespace Motate

// We then allow each chip-type to have it's own function definitions
// that will refer to these pin assignments.
#include "motate_chip_pin_functions.h"


// We're putting this in to make the autocomplete work for XCode,
// since it doesn't understand the special syntax coming up.
#ifdef XCODE_INDEX
#include <Due-pinout.h>
#endif

#ifdef MOTATE_BOARD
#define MOTATE_BOARD_PINOUT < MOTATE_BOARD-pinout.h >
#include MOTATE_BOARD_PINOUT
#else
#error Unknown board layout
#endif

#endif

// motate_pin_assignments_h
