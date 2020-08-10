/*
 * settings_growbot.h - default machine profile - Set for Shapeoko2
 * This file is part of the g2core project
 *
 * Copyright (c) 2012 - 2018 Alden S. Hart, Jr.
 *
 * This file ("the software") is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2 as published by the
 * Free Software Foundation. You should have received a copy of the GNU General Public
 * License, version 2 along with the software.  If not, see <http://www.gnu.org/licenses/>.
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
 */

/***********************************************************************/
/****************** Profile for screw driven machines ******************/
/***********************************************************************/

// ***> NOTE: The init message must be a single line with no CRs or LFs
#define INIT_MESSAGE "Initializing configs to growbot settings"

//*****************************************************************************
//**** GLOBAL / GENERAL SETTINGS **********************************************
//*****************************************************************************

// *** Machine configuration settings *** //

#define JUNCTION_INTEGRATION_TIME   0.05    // {jt: cornering - between 0.05 and 2.00 (max)
#define MOTOR_POWER_TIMEOUT         20.00   // {mt:  motor power timeout in seconds
#define SOFT_LIMIT_ENABLE           0       // {sl: 0=off, 1=on
#define HARD_LIMIT_ENABLE           1       // {lim: 0=off, 1=on
// #define SAFETY_INTERLOCK_ENABLE     1       // {saf: 0=off, 1=on
#define SPINDLE_MODE                0       // {spmo; 0=disabled, 1=plan to stop, 2=continuous
#define PROBE_REPORT_ENABLE         true    // {prbr: 

// *** Communications and Reporting Settings *** //

#define USB_SERIAL_PORTS_EXPOSED    1                       // Valid options are 1 or 2, only!
// #define XIO_ENABLE_FLOW_CONTROL     FLOW_CONTROL_RTS        // {ex: FLOW_CONTROL_OFF, FLOW_CONTROL_XON, FLOW_CONTROL_RTS
#define COMM_MODE                   JSON_MODE               // {ej: TEXT_MODE, JSON_MODE
#define TEXT_VERBOSITY              TV_VERBOSE              // {tv: TV_SILENT, TV_VERBOSE
#define XIO_UART_MUTES_WHEN_USB_CONNECTED  0                // UART will be muted when USB connected (off by default)
// #define JSON_VERBOSITY              JV_MESSAGES             // {jv: JV_SILENT, JV_FOOTER, JV_CONFIGS, JV_MESSAGES, JV_LINENUM, JV_VERBOSE
#define QUEUE_REPORT_VERBOSITY      QR_OFF                  // {qv: QR_OFF, QR_SINGLE, QR_TRIPLE
#define STATUS_REPORT_VERBOSITY     SR_FILTERED             // {sv: SR_OFF, SR_FILTERED, SR_VERBOSE
#define STATUS_REPORT_MIN_MS        100                     // (no JSON) milliseconds - enforces a viable minimum
#define STATUS_REPORT_INTERVAL_MS   250                     // {si: milliseconds - set $SV=0 to disable
#define STATUS_REPORT_DEFAULTS "line","posx","posy","posz","posa","feed","vel","unit","coor","dist","admo","frmo","momo","stat"
// Alternate SRs that report in drawable units
//#define STATUS_REPORT_DEFAULTS "line","vel","mpox","mpoy","mpoz","mpoa","coor","ofsa","ofsx","ofsy","ofsz","dist","unit","stat","homz","homy","homx","momo"
#define MARLIN_COMPAT_ENABLED       true                    // boolean, either true or false

// *** Gcode Startup Defaults *** //

#define GCODE_DEFAULT_UNITS         MILLIMETERS             // {gun: MILLIMETERS or INCHES
#define GCODE_DEFAULT_COORD_SYSTEM  G54                     // {gco: G54, G55, G56, G57, G58 or G59
#define GCODE_DEFAULT_PATH_CONTROL  PATH_EXACT_PATH         // {gpa: PATH_EXACT_PATH, PATH_EXACT_STOP, PATH_CONTINUOUS
#define GCODE_DEFAULT_DISTANCE_MODE ABSOLUTE_DISTANCE_MODE  // {gdi: ABSOLUTE_DISTANCE_MODE, INCREMENTAL_DISTANCE_MODE

//*****************************************************************************
//*** Motor Settings **********************************************************
//*****************************************************************************

#define ENABLE_POLARITY IO_ACTIVE_HIGH
#define STEP_POLARITY   IO_ACTIVE_LOW
#define POWER_MODE      MOTOR_POWERED_ONLY_WHEN_MOVING

// MOTOR 1
#define M1_MOTOR_MAP                AXIS_X_EXTERNAL                // {1ma: AXIS_X, AXIS_Y...
#define M1_STEP_ANGLE               1.8                     // {1sa: degrees per step
#define M1_TRAVEL_PER_REV           80.2747                       // {1tr:  1.25 is a typical value for a screw axis
#define M1_MICROSTEPS               16                       // {1mi:  1,2,4,8,    16,32 (G2 ONLY)
#define M1_POLARITY                 0                       // {1po:  0=normal direction, 1=inverted direction
#define M1_ENABLE_POLARITY          ENABLE_POLARITY          // {1ep:  IO_ACTIVE_LOW or IO_ACTIVE_HIGH
#define M1_STEP_POLARITY            STEP_POLARITY          // {1ps:  IO_ACTIVE_LOW or IO_ACTIVE_HIGH
#define M1_POWER_MODE               POWER_MODE  // {1pm:  MOTOR_DISABLED, MOTOR_ALWAYS_POWERED, MOTOR_POWERED_IN_CYCLE, MOTOR_POWERED_ONLY_WHEN_MOVING

// MOTOR 2
#define M2_MOTOR_MAP                AXIS_X_EXTERNAL
#define M2_STEP_ANGLE               1.8
#define M2_TRAVEL_PER_REV           80.2747
#define M2_MICROSTEPS               16
#define M2_POLARITY                 0
#define M2_ENABLE_POLARITY          ENABLE_POLARITY
#define M2_STEP_POLARITY            STEP_POLARITY
#define M2_POWER_MODE               POWER_MODE

// MOTOR 3
#define M3_MOTOR_MAP                AXIS_Y_EXTERNAL
#define M3_STEP_ANGLE               1.8
#define M3_TRAVEL_PER_REV           88.6755                    // 1.25 is a typical value for a screw axis
#define M3_MICROSTEPS               16
#define M3_POLARITY                 0
#define M3_ENABLE_POLARITY          ENABLE_POLARITY
#define M3_STEP_POLARITY            STEP_POLARITY
#define M3_POWER_MODE               POWER_MODE

// MOTOR 4
#define M4_MOTOR_MAP                AXIS_Y_EXTERNAL
#define M4_STEP_ANGLE               1.8
#define M4_TRAVEL_PER_REV           88.6755               
#define M4_MICROSTEPS               16
#define M4_POLARITY                 0
#define M4_ENABLE_POLARITY          ENABLE_POLARITY
#define M4_STEP_POLARITY            STEP_POLARITY
#define M4_POWER_MODE               POWER_MODE

// MOTOR 5
#define M5_MOTOR_MAP                AXIS_Z_EXTERNAL
#define M5_STEP_ANGLE               1.8
#define M5_TRAVEL_PER_REV           15.0
#define M5_MICROSTEPS               16
#define M5_POLARITY                 1
#define M5_ENABLE_POLARITY          ENABLE_POLARITY
#define M5_STEP_POLARITY            STEP_POLARITY
#define M5_POWER_MODE               POWER_MODE

//*****************************************************************************
//*** Axis Settings ***********************************************************
//*****************************************************************************

// X AXIS
#define X_AXIS_MODE                 AXIS_STANDARD           // {xam:  see canonical_machine.h cmAxisMode for valid values
#define X_VELOCITY_MAX              3000.0                  // {xvm:  G0 max velocity in mm/min
// #define X_TRAVEL_MIN                0.0                     // {xtn:  minimum travel for soft limits
#define X_TRAVEL_MAX                3000.0                    // {xtm:  travel between switches or crashes
// #define X_JERK_MAX                  1000.0                  // {xjm:
// #define X_JERK_HIGH_SPEED           1000.0                  // {xjh:
#define X_HOMING_INPUT              1                       // {xhi:  input used for homing or 0 to disable
#define X_HOMING_DIRECTION          0                       // {xhd:  0=search moves negative, 1= search moves positive
#define X_SEARCH_VELOCITY           X_VELOCITY_MAX/2                   // {xsv:  minus means move to minimum switch
#define X_LATCH_VELOCITY            X_VELOCITY_MAX/10                   // {xlv:  mm/min
#define X_LATCH_BACKOFF             4.0                     // {xlb:  mm
#define X_ZERO_BACKOFF              2.0                     // {xzb:  mm

// Y AXIS
#define Y_AXIS_MODE                 AXIS_STANDARD
#define Y_VELOCITY_MAX              1400.0
// #define Y_TRAVEL_MIN                0.0
#define Y_TRAVEL_MAX                700.0
// #define Y_JERK_MAX                  1000.0
// #define Y_JERK_HIGH_SPEED           1000.0
#define Y_HOMING_INPUT              3
#define Y_HOMING_DIRECTION          0
#define Y_SEARCH_VELOCITY           Y_VELOCITY_MAX/2
#define Y_LATCH_VELOCITY            Y_VELOCITY_MAX/10
#define Y_LATCH_BACKOFF             4.0
#define Y_ZERO_BACKOFF              2.0

// Z AXIS
#define Z_AXIS_MODE                 AXIS_STANDARD
#define Z_VELOCITY_MAX              2000.0
// #define Z_TRAVEL_MIN                0.0
#define Z_TRAVEL_MAX                2000.0
// #define Z_JERK_MAX                  500.0
// #define Z_JERK_HIGH_SPEED           500.0
#define Z_HOMING_INPUT              7
#define Z_HOMING_DIRECTION          0
#define Z_SEARCH_VELOCITY           Z_VELOCITY_MAX/2
#define Z_LATCH_VELOCITY            Z_VELOCITY_MAX/10
#define Z_LATCH_BACKOFF             4.0
#define Z_ZERO_BACKOFF              2.0

//*****************************************************************************
//*** GPIO Input / Output Settings ********************************************
//*****************************************************************************

// DIGITAL INPUTS
// Set to allow the board to function if not otherwise set up
// (least disruptive settings)

/* Legend:
    IO_MODE_DISABLED
    IO_ACTIVE_LOW    aka NORMALLY_OPEN
    IO_ACTIVE_HIGH   aka NORMALLY_CLOSED

    INPUT_ACTION_NONE
    INPUT_ACTION_STOP
    INPUT_ACTION_FAST_STOP
    INPUT_ACTION_HALT
    INPUT_ACTION_RESET

    INPUT_FUNCTION_NONE
    INPUT_FUNCTION_LIMIT
    INPUT_FUNCTION_INTERLOCK
    INPUT_FUNCTION_SHUTDOWN
    INPUT_FUNCTION_PANIC
*/

// Xmin
#define DI1_MODE                    IO_ACTIVE_LOW     // Normally open
#define DI1_ACTION                  INPUT_ACTION_NONE
#define DI1_FUNCTION                INPUT_FUNCTION_LIMIT

// Xmax
#define DI2_MODE                    IO_ACTIVE_LOW     // Normally open
#define DI2_ACTION                  INPUT_ACTION_NONE
#define DI2_FUNCTION                INPUT_FUNCTION_LIMIT

// Y1min
#define DI3_MODE                    IO_ACTIVE_LOW     // Normally open
#define DI3_ACTION                  INPUT_ACTION_NONE
#define DI3_FUNCTION                INPUT_FUNCTION_LIMIT

// Y1max
#define DI4_MODE                    IO_ACTIVE_LOW     // Normally open
#define DI4_ACTION                  INPUT_ACTION_NONE
#define DI4_FUNCTION                INPUT_FUNCTION_LIMIT

// Y2min
#define DI5_MODE                    IO_ACTIVE_LOW     // Normally open
#define DI5_ACTION                  INPUT_ACTION_NONE
#define DI5_FUNCTION                INPUT_FUNCTION_LIMIT

// Y2max
#define DI6_MODE                    IO_ACTIVE_LOW     // Normally open
#define DI6_ACTION                  INPUT_ACTION_NONE
#define DI6_FUNCTION                INPUT_FUNCTION_LIMIT

// Zmin
#define DI7_MODE                    IO_ACTIVE_LOW     // Normally open
#define DI7_ACTION                  INPUT_ACTION_NONE
#define DI7_FUNCTION                INPUT_FUNCTION_LIMIT

// Zmax
#define DI8_MODE                    IO_ACTIVE_LOW     // Normally open
#define DI8_ACTION                  INPUT_ACTION_NONE
#define DI8_FUNCTION                INPUT_FUNCTION_LIMIT

// Alarm X1
#define DI9_MODE                    IO_ACTIVE_HIGH     // Normally closed
#define DI9_ACTION                  INPUT_ACTION_ALARM
#define DI9_FUNCTION                INPUT_FUNCTION_NONE

// Alarm X2
#define DI10_MODE                   IO_ACTIVE_LOW     // Normally open
#define DI10_ACTION                 INPUT_ACTION_ALARM
#define DI10_FUNCTION               INPUT_FUNCTION_NONE

// Alarm Y1
#define DI11_MODE                    IO_ACTIVE_LOW     // Normally open
#define DI11_ACTION                  INPUT_ACTION_ALARM
#define DI11_FUNCTION                INPUT_FUNCTION_NONE

// Alarm Y2
#define DI12_MODE                    IO_ACTIVE_LOW     // Normally open
#define DI12_ACTION                  INPUT_ACTION_ALARM
#define DI12_FUNCTION                INPUT_FUNCTION_NONE

// Alarm Z
#define DI13_MODE                    IO_ACTIVE_LOW     // Normally open
#define DI13_ACTION                  INPUT_ACTION_ALARM
#define DI13_FUNCTION                INPUT_FUNCTION_NONE

// Unassigned
#define DI14_MODE                    IO_ACTIVE_LOW     // Normally open
#define DI14_ACTION                  INPUT_ACTION_NONE
#define DI14_FUNCTION                INPUT_FUNCTION_NONE

// Unassigned
#define DI15_MODE                    IO_ACTIVE_HIGH     // Normally closed
#define DI15_ACTION                  INPUT_ACTION_NONE
#define DI15_FUNCTION                INPUT_FUNCTION_NONE

// Unassigned
#define DI16_MODE                   IO_ACTIVE_LOW     // Normally open
#define DI16_ACTION                 INPUT_ACTION_NONE
#define DI16_FUNCTION               INPUT_FUNCTION_NONE

// DIGITAL OUTPUTS

#define DO1_MODE                    IO_ACTIVE_HIGH
#define DO2_MODE                    IO_ACTIVE_HIGH
#define DO3_MODE                    IO_ACTIVE_HIGH
#define DO4_MODE                    IO_ACTIVE_HIGH
#define DO5_MODE                    IO_ACTIVE_HIGH
#define DO6_MODE                    IO_ACTIVE_HIGH
#define DO7_MODE                    IO_ACTIVE_HIGH
#define DO8_MODE                    IO_ACTIVE_HIGH
#define DO9_MODE                    IO_ACTIVE_HIGH
#define DO10_MODE                   IO_ACTIVE_HIGH
#define DO11_MODE                   IO_ACTIVE_HIGH
#define DO12_MODE                   IO_ACTIVE_HIGH

//These need to always be pulled low
#define DO13_MODE                   IO_ACTIVE_HIGH // 74ACT16244DGGR Output Enable
#define DO14_MODE                   IO_ACTIVE_HIGH // 74ACT16244DGGR Output Enable
#define DO15_MODE                   IO_ACTIVE_HIGH // 74ACT16244DGGR Output Enable
#define DO16_MODE                   IO_ACTIVE_HIGH // 74ACT16244DGGR Output Enable

// *** DEFAULT COORDINATE SYSTEM OFFSETS ***

#define G54_X_OFFSET 0    // G54 is often set to all zeros
#define G54_Y_OFFSET 0
#define G54_Z_OFFSET 0

#define G55_X_OFFSET 0
#define G55_Y_OFFSET 0
#define G55_Z_OFFSET 100

// *** User-Defined Data Defaults *** //

#define USER_DATA_A0 0
#define USER_DATA_A1 0
#define USER_DATA_A2 0
#define USER_DATA_A3 0

#define USER_DATA_B0 0
#define USER_DATA_B1 0
#define USER_DATA_B2 0
#define USER_DATA_B3 0

#define USER_DATA_C0 0
#define USER_DATA_C1 0
#define USER_DATA_C2 0
#define USER_DATA_C3 0

#define USER_DATA_D0 0
#define USER_DATA_D1 0
#define USER_DATA_D2 0
#define USER_DATA_D3 0
