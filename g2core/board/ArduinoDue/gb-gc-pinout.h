/*
 * gb-gc-pinout.h - pin assignments
 * For: /board/ArduinoDue
 * This file is part of the g2core project
 *
 * Copyright (c) 2013 - 2018 Robert Giseburt
 * Copyright (c) 2013 - 2018 Alden S. Hart Jr.
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

#ifndef gb_gc_pinout_h
#define gb_gc_pinout_h

#include <MotatePins.h>

// NOTE: This is a terrible example of a *-pinout.h file!
// This one is assigned backward in order to match the numbering on the Due.
// When making your own board, please use one of the other boards as an example
// of how to assign names to the pins.

// We don't have all of the inputs, so we don't define them.
#define INPUT1_AVAILABLE 1
#define INPUT2_AVAILABLE 1
#define INPUT3_AVAILABLE 1
#define INPUT4_AVAILABLE 1
#define INPUT5_AVAILABLE 1
#define INPUT6_AVAILABLE 1
#define INPUT7_AVAILABLE 1
#define INPUT8_AVAILABLE 1
#define INPUT9_AVAILABLE 1
#define INPUT10_AVAILABLE 1
#define INPUT11_AVAILABLE 0
#define INPUT12_AVAILABLE 0
#define INPUT13_AVAILABLE 0

#define ADC0_AVAILABLE 0
#define ADC1_AVAILABLE 0
#define ADC2_AVAILABLE 0
#define ADC3_AVAILABLE 0

#define XIO_HAS_USB 1
#define XIO_HAS_UART 1
#define XIO_HAS_SPI 0
#define XIO_HAS_I2C 0

#define TEMPERATURE_OUTPUT_ON 0

// Some pins, if the PWM capability is turned on, it will cause timer conflicts.
// So we have to explicity enable them as PWM pins.
// Generated with:
// perl -e 'for($i=1;$i<14;$i++) { print "#define OUTPUT${i}_PWM 0\n";}'
#define OUTPUT1_PWM 0
#define OUTPUT2_PWM 0
#define OUTPUT3_PWM 0
#define OUTPUT4_PWM 0
#define OUTPUT5_PWM 0
#define OUTPUT6_PWM 0
#define OUTPUT7_PWM 0
#define OUTPUT8_PWM 0
#define OUTPUT9_PWM 0
#define OUTPUT10_PWM 0
#define OUTPUT11_PWM 0
#define OUTPUT12_PWM 0
#define OUTPUT13_PWM 0
#define OUTPUT14_PWM 0
#define OUTPUT15_PWM 0
#define OUTPUT16_PWM 0

namespace Motate {

// NOT ALL OF THESE PINS ARE ON ALL PLATFORMS
// Undefined pins will be equivalent to Motate::NullPin, and return 1 for Pin<>::isNull();

pin_number kSerial_RXPinNumber = 0; //15
pin_number kSerial_TXPinNumber = 1; //14
pin_number kSerial_RTSPinNumber = -1;   // added later 17
pin_number kSerial_CTSPinNumber = -1;   // added later 16

pin_number kSerial0_RX = 0;
pin_number kSerial0_TX = 1;
pin_number kSerial0_RTS = -1;   // added later
pin_number kSerial0_CTS = -1;   // added later

pin_number kI2C_SDAPinNumber = -1;
pin_number kI2C_SCLPinNumber = -1;

pin_number kI2C0_SDAPinNumber = -1;
pin_number kI2C0_SCLPinNumber = -1;

pin_number kSPI_SCKPinNumber  = -1;
pin_number kSPI_MISOPinNumber = -1;
pin_number kSPI_MOSIPinNumber = -1;

pin_number kSPI0_SCKPinNumber  = -1;
pin_number kSPI0_MISOPinNumber = -1;
pin_number kSPI0_MOSIPinNumber = -1;

pin_number kDebug1_PinNumber = -1; //unsure about these
pin_number kDebug2_PinNumber = -1;
pin_number kDebug3_PinNumber = -1;
pin_number kDebug4_PinNumber = -1;

pin_number kKinen_SyncPinNumber = -1; //unsure

pin_number kSocket1_SPISlaveSelectPinNumber = -1;  // 10;
pin_number kSocket1_InterruptPinNumber      = -1;
pin_number kSocket1_StepPinNumber           = 11;
pin_number kSocket1_DirPinNumber            = 10;
pin_number kSocket1_EnablePinNumber         = 9;
pin_number kSocket1_Microstep_0PinNumber    = -1;
pin_number kSocket1_Microstep_1PinNumber    = -1;
pin_number kSocket1_Microstep_2PinNumber    = -1;
pin_number kSocket1_VrefPinNumber           = -1;  // 34; //PWMTimer<0>

pin_number kSocket2_SPISlaveSelectPinNumber = -1;
pin_number kSocket2_InterruptPinNumber      = -1;
pin_number kSocket2_StepPinNumber           = 8;
pin_number kSocket2_DirPinNumber            = 7;
pin_number kSocket2_EnablePinNumber         = 6;
pin_number kSocket2_Microstep_0PinNumber    = -1;
pin_number kSocket2_Microstep_1PinNumber    = -1;
pin_number kSocket2_Microstep_2PinNumber    = -1;
pin_number kSocket2_VrefPinNumber           = -1;  // 62; //PWMTimer<1>

pin_number kSocket3_SPISlaveSelectPinNumber = -1;
pin_number kSocket3_InterruptPinNumber      = -1;
pin_number kSocket3_StepPinNumber           = 5;
pin_number kSocket3_DirPinNumber            = 4;
pin_number kSocket3_EnablePinNumber         = 3;
pin_number kSocket3_Microstep_0PinNumber    = -1;
pin_number kSocket3_Microstep_1PinNumber    = -1;
pin_number kSocket3_Microstep_2PinNumber    = -1;
pin_number kSocket3_VrefPinNumber           = -1;  // 63; //PWMTimer<2>

pin_number kSocket4_SPISlaveSelectPinNumber = -1;
pin_number kSocket4_InterruptPinNumber      = -1;
pin_number kSocket4_StepPinNumber           = 2;
pin_number kSocket4_DirPinNumber            = 23;
pin_number kSocket4_EnablePinNumber         = 25;
pin_number kSocket4_Microstep_0PinNumber    = -1;
pin_number kSocket4_Microstep_1PinNumber    = -1;
pin_number kSocket4_Microstep_2PinNumber    = -1;
pin_number kSocket4_VrefPinNumber           = -1;  // 64; //PWMTimer<3>

pin_number kSocket5_SPISlaveSelectPinNumber = -1;
pin_number kSocket5_InterruptPinNumber      = -1;
pin_number kSocket5_StepPinNumber           = 27;
pin_number kSocket5_DirPinNumber            = 29;
pin_number kSocket5_EnablePinNumber         = 31;
pin_number kSocket5_Microstep_0PinNumber    = -1;
pin_number kSocket5_Microstep_1PinNumber    = -1;
pin_number kSocket5_Microstep_2PinNumber    = -1;
pin_number kSocket5_VrefPinNumber           = -1;  // 66; //PWMTimer<3>

pin_number kSocket6_SPISlaveSelectPinNumber = -1;
pin_number kSocket6_InterruptPinNumber      = -1;
pin_number kSocket6_StepPinNumber           = -1;
pin_number kSocket6_DirPinNumber            = -1;
pin_number kSocket6_EnablePinNumber         = -1;
pin_number kSocket6_Microstep_0PinNumber    = -1;  // 45;
pin_number kSocket6_Microstep_1PinNumber    = -1;
pin_number kSocket6_Microstep_2PinNumber    = -1;
pin_number kSocket6_VrefPinNumber           = -1;  // 67; //PWMTimer<0>

pin_number kInput1_PinNumber  = 56; //EndStop xmin (left)
pin_number kInput2_PinNumber  = 57; //EndStop xmax (right)
pin_number kInput3_PinNumber  = 58; //EndStop y1min (left arm, back)
pin_number kInput4_PinNumber  = 59; //EndStop y1max (left arm, front)
pin_number kInput5_PinNumber  = 60; //EndStop y2min (right arm, back)
pin_number kInput6_PinNumber  = 61; //EndStop y2max (right arm, front)
pin_number kInput7_PinNumber  = 62; //EndStop zmin (bottom)
pin_number kInput8_PinNumber  = 63; //EndStop zmax (top)
pin_number kInput9_PinNumber  = 64; //Alarm X1
pin_number kInput10_PinNumber = 65; //Alarm X2
pin_number kInput11_PinNumber = 22; //Alarm Y1
pin_number kInput12_PinNumber = 24; //Alarm Y2
pin_number kInput13_PinNumber = 26; //Alarm Z
pin_number kInput14_PinNumber = -1; //Unassigned
pin_number kInput15_PinNumber = -1; //Unassigned
pin_number kInput16_PinNumber = -1; //Unassigned

pin_number kSpindle_EnablePinNumber = -1;
pin_number kSpindle_DirPinNumber    = -1;  
pin_number kSpindle_PwmPinNumber    = -1;
pin_number kSpindle_Pwm2PinNumber   = -1;
pin_number kCoolant_EnablePinNumber = -1;

pin_number kSD_CardDetectPinNumber = -1;
pin_number kInterlock_InPinNumber  = -1;
pin_number kOutputSAFE_PinNumber   = -1;  // SAFE signal

pin_number kLED_USBRXPinNumber = 72;
pin_number kLED_USBTXPinNumber = 73;


pin_number kOutput1_PinNumber = 52;  // Diagnostic LED
pin_number kOutput2_PinNumber = 50;  // Diagnostic LED
pin_number kOutput3_PinNumber = 48;  // Diagnostic LED
pin_number kOutput4_PinNumber = 46;  // Diagnostic LED
pin_number kOutput5_PinNumber = 44;  // Diagnostic LED

pin_number kOutput6_PinNumber  = 42;  // Diagnostic LED
pin_number kOutput7_PinNumber  = 40;  // Diagnostic LED
pin_number kOutput8_PinNumber  = 38;  // Diagnostic LED
pin_number kOutput9_PinNumber  = 36;  // Diagnostic LED
pin_number kOutput10_PinNumber = 34;  // Diagnostic LED

pin_number kOutput11_PinNumber = 32;  // Diagnostic LED
pin_number kOutput12_PinNumber = 30;  // Diagnostic LED
pin_number kOutput13_PinNumber = 12;  // 74ACT16244DGGR Output Enable
pin_number kOutput14_PinNumber = 13;  // 74ACT16244DGGR Output Enable
pin_number kOutput15_PinNumber = 35;  // 74ACT16244DGGR Output Enable
pin_number kOutput16_PinNumber = 37;  // 74ACT16244DGGR Output Enable

pin_number kADC0_PinNumber  = -1;  
pin_number kADC1_PinNumber  = -1;  
pin_number kADC2_PinNumber  = -1;  
pin_number kADC3_PinNumber  = -1;  
pin_number kADC4_PinNumber  = -1; 
pin_number kADC5_PinNumber  = -1;  
pin_number kADC6_PinNumber  = -1;  
pin_number kADC7_PinNumber  = -1;  
pin_number kADC8_PinNumber  = -1;  
pin_number kADC9_PinNumber  = -1; 
pin_number kADC10_PinNumber = -1;  
pin_number kADC11_PinNumber = -1;  
pin_number kADC12_PinNumber = -1;  
pin_number kADC13_PinNumber = -1;  
pin_number kADC14_PinNumber = -1;  

// GRBL / gShield compatibility pins -- Due board ONLY

pin_number kGRBL_ResetPinNumber      = -1;
pin_number kGRBL_FeedHoldPinNumber   = -1;
pin_number kGRBL_CycleStartPinNumber = -1;
pin_number kGRBL_CommonEnablePinNumber = -1;

/** NOTE: When adding pin definitions here, they must be
 *        added to ALL board pin assignment files, even if
 *        they are defined as -1.
 **/

}  // namespace Motate

#endif
