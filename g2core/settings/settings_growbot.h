// /*
//  * settings_growbot.h -  Set for Growbot
//  * This file is part of the g2core project
//  *
//  * Copyright (c) 2012 - 2018 Alden S. Hart, Jr.
//  *
//  * This file ("the software") is free software: you can redistribute it and/or modify
//  * it under the terms of the GNU General Public License, version 2 as published by the
//  * Free Software Foundation. You should have received a copy of the GNU General Public
//  * License, version 2 along with the software.  If not, see <http://www.gnu.org/licenses/>.
//  *
//  * As a special exception, you may use this file as part of a software library without
//  * restriction. Specifically, if other files instantiate templates or use macros or
//  * inline functions from this file, or you compile this file and link it with  other
//  * files to produce an executable, this file does not by itself cause the resulting
//  * executable to be covered by the GNU General Public License. This exception does not
//  * however invalidate any other reasons why the executable file might be covered by the
//  * GNU General Public License.
//  *
//  * THE SOFTWARE IS DISTRIBUTED IN THE HOPE THAT IT WILL BE USEFUL, BUT WITHOUT ANY
//  * WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
//  * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT
//  * SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
//  * OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//  */
// /* Note: The values in this file are the default settings that are loaded
//  *       into a virgin EEPROM, and can be changed using the config commands.
//  *       After initial load the EEPROM values (or changed values) are used.
//  *
//  *       System and hardware settings that you shouldn't need to change
//  *       are in hardware.h  Application settings that also shouldn't need
//  *       to be changed are in g2core.h
//  */
// /*
//  * This file is included to define settings that were not present in the
//  * SETTINGS_FILE, or if SETTINGS_FILE was omitted.
//  *
//  * It does the following for each section
//  *
//  *  - Define rational machine defaults and Gcode power-on defaults
//  *  - Define rational communications and reporting settings
//  *  - Disable all motors. Motors used must be enabled in other settings file
//  *  - Disable all axes. Axes used must be enabled in other settings file
//  */
// /***********************************************************************/
// /**** Default profile for screw driven machines ************************/
// /***********************************************************************/

// // ***> NOTE: The init message must be a single line with no CRs or LFs
// #define INIT_MESSAGE "Initializing configs to Growbot settings"

// //*****************************************************************************
// //**** GLOBAL / GENERAL SETTINGS **********************************************
// //*****************************************************************************

// // *** Machine configuration settings *** //

// #define JUNCTION_INTEGRATION_TIME   0.75    // {jt: cornering - between 0.05 and 2.00 (max)
// #define CHORDAL_TOLERANCE           0.01    // {ct: chordal tolerance for arcs (in mm)
#define MOTOR_POWER_TIMEOUT         20.00   // {mt:  motor power timeout in seconds
// #define SOFT_LIMIT_ENABLE           0       // {sl: 0=off, 1=on
// #define HARD_LIMIT_ENABLE           1       // {lim: 0=off, 1=on
// #define SAFETY_INTERLOCK_ENABLE     1       // {saf: 0=off, 1=on
// #define FEEDHOLD_Z_LIFT             0       // {zl: mm to lift Z on feedhold
// #define PROBE_REPORT_ENABLE         true    // {prbr: 
// #define MANUAL_FEEDRATE_OVERRIDE_ENABLE false
// #define MANUAL_FEEDRATE_OVERRIDE_PARAMETER 1.00

// // *** Communications and Reporting Settings *** //

#define USB_SERIAL_PORTS_EXPOSED    1                       // Valid options are 1 or 2, only!
// #define XIO_ENABLE_FLOW_CONTROL     FLOW_CONTROL_RTS        // {ex: FLOW_CONTROL_OFF, FLOW_CONTROL_XON, FLOW_CONTROL_RTS
// #define COMM_MODE                   JSON_MODE               // {ej: TEXT_MODE, JSON_MODE
// #define TEXT_VERBOSITY              TV_VERBOSE              // {tv: TV_SILENT, TV_VERBOSE
// #define XIO_UART_MUTES_WHEN_USB_CONNECTED  0                // UART will be muted when USB connected (off by default)
// #define JSON_VERBOSITY              JV_MESSAGES             // {jv: JV_SILENT, JV_FOOTER, JV_CONFIGS, JV_MESSAGES, JV_LINENUM, JV_VERBOSE
// #define QUEUE_REPORT_VERBOSITY      QR_OFF                  // {qv: QR_OFF, QR_SINGLE, QR_TRIPLE
// #define STATUS_REPORT_VERBOSITY     SR_FILTERED             // {sv: SR_OFF, SR_FILTERED, SR_VERBOSE
// #define STATUS_REPORT_MIN_MS        100                     // (no JSON) milliseconds - enforces a viable minimum
// #define STATUS_REPORT_INTERVAL_MS   250                     // {si: milliseconds - set $SV=0 to disable

// #ifndef STATUS_REPORT_DEFAULTS                              // {sr: See Status Reports wiki page
// #define STATUS_REPORT_DEFAULTS "line","posx","posy","posz","posa","feed","vel","unit","coor","dist","admo","frmo","momo","stat"
// // Alternate SRs that report in drawable units
// //#define STATUS_REPORT_DEFAULTS "line","vel","mpox","mpoy","mpoz","mpoa","coor","ofsa","ofsx","ofsy","ofsz","dist","unit","stat","homz","homy","homx","momo"
// #endif

// #define MARLIN_COMPAT_ENABLED       false                   // boolean, either true or false

// // *** Gcode Startup Defaults *** //

#define GCODE_DEFAULT_UNITS         MILLIMETERS                  // {gun: MILLIMETERS or INCHES
// #define GCODE_DEFAULT_PLANE         CANON_PLANE_XY          // {gpl: CANON_PLANE_XY, CANON_PLANE_XZ, or CANON_PLANE_YZ
// #define GCODE_DEFAULT_COORD_SYSTEM  G54                     // {gco: G54, G55, G56, G57, G58 or G59
// #define GCODE_DEFAULT_PATH_CONTROL  PATH_CONTINUOUS         // {gpa: PATH_EXACT_PATH, PATH_EXACT_STOP, PATH_CONTINUOUS
// #define GCODE_DEFAULT_DISTANCE_MODE ABSOLUTE_DISTANCE_MODE  // {gdi: ABSOLUTE_DISTANCE_MODE, INCREMENTAL_DISTANCE_MODE


// //*****************************************************************************
// //*** Motor Settings **********************************************************
// //*****************************************************************************

#define ENABLE_POLARITY IO_ACTIVE_HIGH
#define STEP_POLARITY   IO_ACTIVE_LOW
#define POWER_MODE      MOTOR_POWERED_ONLY_WHEN_MOVING

// MOTOR 1
#define M1_MOTOR_MAP                AXIS_X_EXTERNAL                // {1ma: AXIS_X, AXIS_Y...
#define M1_STEP_ANGLE               1.8                     // {1sa: degrees per step
#define M1_TRAVEL_PER_REV           40                       // {1tr:  1.25 is a typical value for a screw axis
#define M1_MICROSTEPS               8                       // {1mi:  1,2,4,8,    16,32 (G2 ONLY)
#define M1_STEPS_PER_UNIT           0                     // {1su:  steps to issue per unit of length or degrees of rotation
#define M1_POLARITY                 0                       // {1po:  0=normal direction, 1=inverted direction
#define M1_ENABLE_POLARITY          ENABLE_POLARITY          // {1ep:  IO_ACTIVE_LOW or IO_ACTIVE_HIGH
#define M1_STEP_POLARITY            STEP_POLARITY          // {1ps:  IO_ACTIVE_LOW or IO_ACTIVE_HIGH
#define M1_POWER_MODE               POWER_MODE  // {1pm:  MOTOR_DISABLED, MOTOR_ALWAYS_POWERED, MOTOR_POWERED_IN_CYCLE, MOTOR_POWERED_ONLY_WHEN_MOVING
#define M1_POWER_LEVEL              1.0                     // {1pl:   0.0=no power, 1.0=max power

// MOTOR 2
#define M2_MOTOR_MAP                AXIS_Y_EXTERNAL
#define M2_STEP_ANGLE               1.8
#define M2_TRAVEL_PER_REV           40.00
#define M2_MICROSTEPS               8
#define M2_STEPS_PER_UNIT           0
#define M2_POLARITY                 0
#define M2_ENABLE_POLARITY          ENABLE_POLARITY
#define M2_STEP_POLARITY            STEP_POLARITY
#define M2_POWER_MODE               POWER_MODE
#define M2_POWER_LEVEL              0.0

// MOTOR 3
#define M3_MOTOR_MAP                AXIS_Y_EXTERNAL
#define M3_STEP_ANGLE               1.8
#define M3_TRAVEL_PER_REV           60.0                    // 1.25 is a typical value for a screw axis
#define M3_MICROSTEPS               8
#define M3_STEPS_PER_UNIT           0
#define M3_POLARITY                 0
#define M3_ENABLE_POLARITY          ENABLE_POLARITY
#define M3_STEP_POLARITY            STEP_POLARITY
#define M3_POWER_MODE               POWER_MODE
#define M3_POWER_LEVEL              0.0

// MOTOR 4
#define M4_MOTOR_MAP                AXIS_Z_EXTERNAL
#define M4_STEP_ANGLE               1.8
#define M4_TRAVEL_PER_REV           60.0                   // in degrees if rotary axis (ABC)
#define M4_MICROSTEPS               8
#define M4_STEPS_PER_UNIT           0
#define M4_POLARITY                 0
#define M4_ENABLE_POLARITY          ENABLE_POLARITY
#define M4_STEP_POLARITY            STEP_POLARITY
#define M4_POWER_MODE               POWER_MODE
#define M4_POWER_LEVEL              0.0

// MOTOR 5
#define M5_MOTOR_MAP                AXIS_Z_EXTERNAL
#define M5_STEP_ANGLE               1.8
#define M5_TRAVEL_PER_REV           60.0
#define M5_MICROSTEPS               8
#define M5_STEPS_PER_UNIT           0
#define M5_POLARITY                 0
#define M5_ENABLE_POLARITY          ENABLE_POLARITY
#define M5_STEP_POLARITY            STEP_POLARITY
#define M5_POWER_MODE               POWER_MODE
#define M5_POWER_LEVEL              0.0

// //*****************************************************************************
// //*** Axis Settings ***********************************************************
// //*****************************************************************************

// X AXIS
#define X_AXIS_MODE                 AXIS_STANDARD           // {xam:  see canonical_machine.h cmAxisMode for valid values
// #define X_VELOCITY_MAX              1000.0                  // {xvm:  G0 max velocity in mm/min
// #define X_FEEDRATE_MAX              1000.0                  // {xfr:  G1 max feed rate in mm/min
// #define X_TRAVEL_MIN                0.0                     // {xtn:  minimum travel for soft limits
#define X_TRAVEL_MAX                5000.0                     // {xtm:  travel between switches or crashes
// #define X_JERK_MAX                  1000.0                  // {xjm:
// #define X_JERK_HIGH_SPEED           1000.0                  // {xjh:
// #define X_HOMING_INPUT              0                       // {xhi:  input used for homing or 0 to disable
// #define X_HOMING_DIRECTION          0                       // {xhd:  0=search moves negative, 1= search moves positive
// #define X_SEARCH_VELOCITY           500.0                   // {xsv:  minus means move to minimum switch
// #define X_LATCH_VELOCITY            100.0                   // {xlv:  mm/min
// #define X_LATCH_BACKOFF             4.0                     // {xlb:  mm
// #define X_ZERO_BACKOFF              2.0                     // {xzb:  mm

// Y AXIS
#define Y_AXIS_MODE                 AXIS_STANDARD
// #define Y_VELOCITY_MAX              1000.0
// #define Y_FEEDRATE_MAX              1000.0
// #define Y_TRAVEL_MIN                0.0
#define Y_TRAVEL_MAX                5000.0
// #define Y_JERK_MAX                  1000.0
// #define Y_JERK_HIGH_SPEED           1000.0
// #define Y_HOMING_INPUT              0
// #define Y_HOMING_DIRECTION          0
// #define Y_SEARCH_VELOCITY           500.0
// #define Y_LATCH_VELOCITY            100.0
// #define Y_LATCH_BACKOFF             4.0
// #define Y_ZERO_BACKOFF              2.0

// Z AXIS
#define Z_AXIS_MODE                 AXIS_STANDARD
// #define Z_VELOCITY_MAX              1000.0
// #define Z_FEEDRATE_MAX              1000.0
#define Z_TRAVEL_MAX                5000.0
// #define Z_TRAVEL_MIN                0.0
// #define Z_JERK_MAX                  500.0
// #define Z_JERK_HIGH_SPEED           500.0
// #define Z_HOMING_INPUT              0
// #define Z_HOMING_DIRECTION          0
// #define Z_SEARCH_VELOCITY           250.0
// #define Z_LATCH_VELOCITY            25.0
// #define Z_LATCH_BACKOFF             4.0
// #define Z_ZERO_BACKOFF              2.0

// //*****************************************************************************
// //*** GPIO Input / Output Settings ********************************************
// //*****************************************************************************

// // DIGITAL INPUTS
// // Set to allow the board to function if not otherwise set up
// // (least disruptive settings)

// /* Legend:
//     IO_MODE_DISABLED
//     IO_ACTIVE_LOW    aka NORMALLY_OPEN
//     IO_ACTIVE_HIGH   aka NORMALLY_CLOSED

//     INPUT_ACTION_NONE
//     INPUT_ACTION_STOP
//     INPUT_ACTION_FAST_STOP
//     INPUT_ACTION_HALT
//     INPUT_ACTION_RESET

//     INPUT_FUNCTION_NONE
//     INPUT_FUNCTION_LIMIT
//     INPUT_FUNCTION_INTERLOCK
//     INPUT_FUNCTION_SHUTDOWN
//     INPUT_FUNCTION_PANIC
// */

// // Xmin
// #define DI1_MODE                    IO_ACTIVE_LOW     // Normally open
// #define DI1_ACTION                  INPUT_ACTION_NONE
// #define DI1_FUNCTION                INPUT_FUNCTION_NONE

// // Xmax
// #define DI2_MODE                    IO_ACTIVE_LOW     // Normally open
// #define DI2_ACTION                  INPUT_ACTION_NONE
// #define DI2_FUNCTION                INPUT_FUNCTION_NONE

// // Ymin
// #define DI3_MODE                    IO_ACTIVE_LOW     // Normally open
// #define DI3_ACTION                  INPUT_ACTION_NONE
// #define DI3_FUNCTION                INPUT_FUNCTION_NONE

// // Ymax
// #define DI4_MODE                    IO_ACTIVE_LOW     // Normally open
// #define DI4_ACTION                  INPUT_ACTION_NONE
// #define DI4_FUNCTION                INPUT_FUNCTION_NONE

// // Zmin
// #define DI5_MODE                    IO_ACTIVE_LOW     // Normally open
// #define DI5_ACTION                  INPUT_ACTION_NONE
// #define DI5_FUNCTION                INPUT_FUNCTION_PROBE

// // Zmax
// #define DI6_MODE                    IO_ACTIVE_LOW     // Normally open
// #define DI6_ACTION                  INPUT_ACTION_NONE
// #define DI6_FUNCTION                INPUT_FUNCTION_NONE

// // Safety line
// #define DI9_MODE                    IO_ACTIVE_HIGH     // Normally closed
// #define DI9_ACTION                  INPUT_ACTION_NONE
// #define DI9_FUNCTION                INPUT_FUNCTION_NONE
// #define DI10_MODE                   IO_ACTIVE_LOW     // Normally open
// #define DI10_ACTION                 INPUT_ACTION_NONE
// #define DI10_FUNCTION               INPUT_FUNCTION_NONE
// #define DI11_MODE                   IO_ACTIVE_LOW     // Normally open
// #define DI11_ACTION                 INPUT_ACTION_NONE
// #define DI11_FUNCTION               INPUT_FUNCTION_NONE
// #define DI12_MODE                   IO_ACTIVE_LOW     // Normally open
// #define DI12_ACTION                 INPUT_ACTION_NONE
// #define DI12_FUNCTION               INPUT_FUNCTION_NONE

// // DIGITAL OUTPUTS - Currently these are hard-wired to extruders

// //Extruder1_PWM
// #define DO1_MODE                    IO_ACTIVE_HIGH

// //Extruder2_PWM
// #define DO2_MODE                    IO_ACTIVE_HIGH

// //SAFEin (Output) signal
// #define DO9_MODE                    IO_ACTIVE_HIGH
// #define DO10_MODE                   IO_ACTIVE_HIGH

// //Header Bed FET
// #define DO11_MODE                   IO_ACTIVE_HIGH

// //Indicator_LED
// #define DO12_MODE                   IO_ACTIVE_HIGH
// #define DO13_MODE                   IO_ACTIVE_HIGH

// // *** PWM Settings *** //

// #define P1_PWM_FREQUENCY            100                   // in Hz
// #define P1_CW_SPEED_LO              7900                  // in RPM (arbitrary units)
// #define P1_CW_SPEED_HI              12800
// #define P1_CW_PHASE_LO              0.13                    // phase [0..1]
// #define P1_CW_PHASE_HI              0.17
// #define P1_CCW_SPEED_LO             7900    // 0.0
// #define P1_CCW_SPEED_HI            12800    // 0.0
// #define P1_CCW_PHASE_LO             0.13    // 0.1
// #define P1_CCW_PHASE_HI             0.17    // 0.1
// #define P1_PWM_PHASE_OFF            0.1

// // *** DEFAULT COORDINATE SYSTEM OFFSETS ***

// #define G54_X_OFFSET 0            // G54 is traditionally set to all zeros
// #define G54_Y_OFFSET 0
// #define G54_Z_OFFSET 0

// #define G55_X_OFFSET 0
// #define G55_Y_OFFSET 0
// #define G55_Z_OFFSET 0

// #define G56_X_OFFSET 0
// #define G56_Y_OFFSET 0
// #define G56_Z_OFFSET 0

// #define G57_X_OFFSET 0
// #define G57_Y_OFFSET 0
// #define G57_Z_OFFSET 0

// #define G58_X_OFFSET 0
// #define G58_Y_OFFSET 0
// #define G58_Z_OFFSET 0

// #define G59_X_OFFSET 0
// #define G59_Y_OFFSET 0
// #define G59_Z_OFFSET 0