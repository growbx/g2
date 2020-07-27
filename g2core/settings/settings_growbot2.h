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

#define JUNCTION_INTEGRATION_TIME   0.75    // {jt: cornering - between 0.05 and 2.00 (max)
#define MOTOR_POWER_TIMEOUT         20.00   // {mt:  motor power timeout in seconds
#define SOFT_LIMIT_ENABLE           0       // {sl: 0=off, 1=on
#define HARD_LIMIT_ENABLE           1       // {lim: 0=off, 1=on
#define SAFETY_INTERLOCK_ENABLE     1       // {saf: 0=off, 1=on
#define SPINDLE_MODE                0       // {spmo; 0=disabled, 1=plan to stop, 2=continuous
#define FEEDHOLD_Z_LIFT             0       // {zl: mm to lift Z on feedhold
#define PROBE_REPORT_ENABLE         true    // {prbr: 
#define MANUAL_FEEDRATE_OVERRIDE_ENABLE true
#define MANUAL_FEEDRATE_OVERRIDE_PARAMETER 1.00

// *** Communications and Reporting Settings *** //

#define USB_SERIAL_PORTS_EXPOSED   1                        // Valid options are 1 or 2, only!
#define XIO_ENABLE_FLOW_CONTROL     FLOW_CONTROL_RTS        // {ex: FLOW_CONTROL_OFF, FLOW_CONTROL_XON, FLOW_CONTROL_RTS
#define COMM_MODE                   JSON_MODE               // {ej: TEXT_MODE, JSON_MODE
#define TEXT_VERBOSITY              TV_VERBOSE              // {tv: TV_SILENT, TV_VERBOSE
#define XIO_UART_MUTES_WHEN_USB_CONNECTED  0                // UART will be muted when USB connected (off by default)
#define JSON_VERBOSITY              JV_MESSAGES             // {jv: JV_SILENT, JV_FOOTER, JV_CONFIGS, JV_MESSAGES, JV_LINENUM, JV_VERBOSE
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
#define M1_MICROSTEPS               1                       // {1mi:  1,2,4,8,    16,32 (G2 ONLY)
#define M1_STEPS_PER_UNIT           2.491445001                     // {1su:  steps to issue per unit of length or degrees of rotation
#define M1_POLARITY                 0                       // {1po:  0=normal direction, 1=inverted direction
#define M1_ENABLE_POLARITY          ENABLE_POLARITY          // {1ep:  IO_ACTIVE_LOW or IO_ACTIVE_HIGH
#define M1_STEP_POLARITY            STEP_POLARITY          // {1ps:  IO_ACTIVE_LOW or IO_ACTIVE_HIGH
#define M1_POWER_MODE               POWER_MODE  // {1pm:  MOTOR_DISABLED, MOTOR_ALWAYS_POWERED, MOTOR_POWERED_IN_CYCLE, MOTOR_POWERED_ONLY_WHEN_MOVING
#define M1_POWER_LEVEL              1.0                     // {1pl:   0.0=no power, 1.0=max power

// MOTOR 2
#define M2_MOTOR_MAP                AXIS_X_EXTERNAL
#define M2_STEP_ANGLE               1.8
#define M2_TRAVEL_PER_REV           80.2747
#define M2_MICROSTEPS               1
#define M2_STEPS_PER_UNIT           2.491445001
#define M2_POLARITY                 0
#define M2_ENABLE_POLARITY          ENABLE_POLARITY
#define M2_STEP_POLARITY            STEP_POLARITY
#define M2_POWER_MODE               POWER_MODE
#define M2_POWER_LEVEL              1.0

// MOTOR 3
#define M3_MOTOR_MAP                AXIS_Y_EXTERNAL
#define M3_STEP_ANGLE               1.8
#define M3_TRAVEL_PER_REV           88.6755                    // 1.25 is a typical value for a screw axis
#define M3_MICROSTEPS               1
#define M3_STEPS_PER_UNIT           2.255414404
#define M3_POLARITY                 0
#define M3_ENABLE_POLARITY          ENABLE_POLARITY
#define M3_STEP_POLARITY            STEP_POLARITY
#define M3_POWER_MODE               POWER_MODE
#define M3_POWER_LEVEL              1.0

// MOTOR 4
#define M4_MOTOR_MAP                AXIS_Y_EXTERNAL
#define M4_STEP_ANGLE               1.8
#define M4_TRAVEL_PER_REV           88.6755                   // in degrees if rotary axis (ABC)
#define M4_MICROSTEPS               1
#define M4_STEPS_PER_UNIT           2.255414404
#define M4_POLARITY                 0
#define M4_ENABLE_POLARITY          ENABLE_POLARITY
#define M4_STEP_POLARITY            STEP_POLARITY
#define M4_POWER_MODE               POWER_MODE
#define M4_POWER_LEVEL              1.0

// MOTOR 5
#define M5_MOTOR_MAP                AXIS_Z_EXTERNAL
#define M5_STEP_ANGLE               1.8
#define M5_TRAVEL_PER_REV           15
#define M5_MICROSTEPS               1
#define M5_STEPS_PER_UNIT           0
#define M5_POLARITY                 0
#define M5_ENABLE_POLARITY          ENABLE_POLARITY
#define M5_STEP_POLARITY            STEP_POLARITY
#define M5_POWER_MODE               POWER_MODE
#define M5_POWER_LEVEL              1.0

//*****************************************************************************
//*** Axis Settings ***********************************************************
//*****************************************************************************

// X AXIS
#define X_AXIS_MODE                 AXIS_DISABLED           // {xam:  see canonical_machine.h cmAxisMode for valid values
#define X_VELOCITY_MAX              1000.0                  // {xvm:  G0 max velocity in mm/min
#define X_TRAVEL_MIN                0.0                     // {xtn:  minimum travel for soft limits
#define X_TRAVEL_MAX                0.0                     // {xtm:  travel between switches or crashes
#define X_JERK_MAX                  1000.0                  // {xjm:
#define X_JERK_HIGH_SPEED           1000.0                  // {xjh:
#define X_HOMING_INPUT              0                       // {xhi:  input used for homing or 0 to disable
#define X_HOMING_DIRECTION          0                       // {xhd:  0=search moves negative, 1= search moves positive
#define X_SEARCH_VELOCITY           500.0                   // {xsv:  minus means move to minimum switch
#define X_LATCH_VELOCITY            100.0                   // {xlv:  mm/min
#define X_LATCH_BACKOFF             4.0                     // {xlb:  mm
#define X_ZERO_BACKOFF              2.0                     // {xzb:  mm

// Y AXIS
#define Y_AXIS_MODE                 AXIS_DISABLED
#define Y_VELOCITY_MAX              1000.0
#define Y_TRAVEL_MIN                0.0
#define Y_TRAVEL_MAX                0.0
#define Y_JERK_MAX                  1000.0
#define Y_JERK_HIGH_SPEED           1000.0
#define Y_HOMING_INPUT              0
#define Y_HOMING_DIRECTION          0
#define Y_SEARCH_VELOCITY           500.0
#define Y_LATCH_VELOCITY            100.0
#define Y_LATCH_BACKOFF             4.0
#define Y_ZERO_BACKOFF              2.0

// Z AXIS
#define Z_AXIS_MODE                 AXIS_DISABLED
#define Z_VELOCITY_MAX              1000.0
#define Z_TRAVEL_MAX                0.0
#define Z_TRAVEL_MIN                0.0
#define Z_JERK_MAX                  500.0
#define Z_JERK_HIGH_SPEED           500.0
#define Z_HOMING_INPUT              0
#define Z_HOMING_DIRECTION          0
#define Z_SEARCH_VELOCITY           250.0
#define Z_LATCH_VELOCITY            25.0
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

// Xmin on v9 board
#define DI1_MODE                    IO_ACTIVE_LOW     // Normally open
#define DI1_ACTION                  INPUT_ACTION_NONE
#define DI1_FUNCTION                INPUT_FUNCTION_NONE

// Xmax
#define DI2_MODE                    IO_ACTIVE_LOW     // Normally open
#define DI2_ACTION                  INPUT_ACTION_NONE
#define DI2_FUNCTION                INPUT_FUNCTION_NONE

// Ymin
#define DI3_MODE                    IO_ACTIVE_LOW     // Normally open
#define DI3_ACTION                  INPUT_ACTION_NONE
#define DI3_FUNCTION                INPUT_FUNCTION_NONE

// Ymax
#define DI4_MODE                    IO_ACTIVE_LOW     // Normally open
#define DI4_ACTION                  INPUT_ACTION_NONE
#define DI4_FUNCTION                INPUT_FUNCTION_NONE

// Zmin
#define DI5_MODE                    IO_ACTIVE_LOW     // Normally open
#define DI5_ACTION                  INPUT_ACTION_NONE
#define DI5_FUNCTION                INPUT_FUNCTION_PROBE

// Zmax
#define DI6_MODE                    IO_ACTIVE_LOW     // Normally open
#define DI6_ACTION                  INPUT_ACTION_NONE
#define DI6_FUNCTION                INPUT_FUNCTION_NONE

// Amin
#define DI7_MODE                    IO_ACTIVE_LOW     // Normally open
#define DI7_ACTION                  INPUT_ACTION_NONE
#define DI7_FUNCTION                INPUT_FUNCTION_NONE

// Amax
#define DI8_MODE                    IO_ACTIVE_LOW     // Normally open
#define DI8_ACTION                  INPUT_ACTION_NONE
#define DI8_FUNCTION                INPUT_FUNCTION_NONE

// Safety line
#define DI9_MODE                    IO_ACTIVE_HIGH     // Normally closed
#define DI9_ACTION                  INPUT_ACTION_NONE
#define DI9_FUNCTION                INPUT_FUNCTION_NONE

#define DI10_MODE                   IO_ACTIVE_LOW     // Normally open
#define DI10_ACTION                 INPUT_ACTION_NONE
#define DI10_FUNCTION               INPUT_FUNCTION_NONE

#define DI11_MODE                   IO_ACTIVE_LOW     // Normally open
#define DI11_ACTION                 INPUT_ACTION_NONE
#define DI11_FUNCTION               INPUT_FUNCTION_NONE

#define DI12_MODE                   IO_ACTIVE_LOW     // Normally open
#define DI12_ACTION                 INPUT_ACTION_NONE
#define DI12_FUNCTION               INPUT_FUNCTION_NONE

// DIGITAL OUTPUTS - Currently these are hard-wired to extruders

//Extruder1_PWM
#define DO1_MODE                    IO_ACTIVE_HIGH

//Extruder2_PWM
#define DO2_MODE                    IO_ACTIVE_HIGH

//Fan1A_PWM
#define DO3_MODE                    IO_ACTIVE_HIGH

//Fan1B_PWM
#define DO4_MODE                    IO_ACTIVE_HIGH

#define DO5_MODE                    IO_ACTIVE_HIGH
#define DO6_MODE                    IO_ACTIVE_HIGH
#define DO7_MODE                    IO_ACTIVE_HIGH
#define DO8_MODE                    IO_ACTIVE_HIGH

//SAFEin (Output) signal
#define DO9_MODE                    IO_ACTIVE_HIGH

#define DO10_MODE                   IO_ACTIVE_HIGH

//Header Bed FET
#define DO11_MODE                   IO_ACTIVE_HIGH

//Indicator_LED
#define DO12_MODE                   IO_ACTIVE_HIGH

#define DO13_MODE                   IO_ACTIVE_HIGH

// *** PWM Settings *** //

#define P1_PWM_FREQUENCY            100                   // in Hz
#define P1_CW_SPEED_LO              7900                  // in RPM (arbitrary units)
#define P1_CW_SPEED_HI              12800
#define P1_CW_PHASE_LO              0.13                    // phase [0..1]
#define P1_CW_PHASE_HI              0.17
#define P1_CCW_SPEED_LO             7900    // 0.0
#define P1_CCW_SPEED_HI            12800    // 0.0
#define P1_CCW_PHASE_LO             0.13    // 0.1
#define P1_CCW_PHASE_HI             0.17    // 0.1
#define P1_PWM_PHASE_OFF            0.1

// *** Heater Settings - relevant to 3dp machines *** //


#define MIN_FAN_TEMP                40.0     // Temperature that the upper-extruder fan starts
#define MIN_FAN_VALUE               0.4      // Minimum output value (0.0-1.0) of the upper-extruder fan
#define MAX_FAN_VALUE               1.0      // Maximum output value (0.0-1.0) of the upper-extruder fan
#define MAX_FAN_TEMP                150.0    // Temperature at and above which the upper-extruder fan is at 1.0
#define H1_DEFAULT_ENABLE           false
#define H1_DEFAULT_P                9.0
#define H1_DEFAULT_I                0.12
#define H1_DEFAULT_D                400.0

#define H2_DEFAULT_ENABLE           false
#define H2_DEFAULT_P                9.0
#define H2_DEFAULT_I                0.12
#define H2_DEFAULT_D                400.0

#define H3_DEFAULT_ENABLE           false
#define H3_DEFAULT_P                9.0
#define H3_DEFAULT_I                0.12
#define H3_DEFAULT_D                400.0

// *** DEFAULT COORDINATE SYSTEM OFFSETS ***

#define G54_X_OFFSET 0    // G54 is often set to all zeros
#define G54_Y_OFFSET 0
#define G54_Z_OFFSET 0
#define G54_U_OFFSET 0
#define G54_V_OFFSET 0
#define G54_W_OFFSET 0
#define G54_A_OFFSET 0
#define G54_B_OFFSET 0
#define G54_C_OFFSET 0

#define G55_X_OFFSET 0
#define G55_Y_OFFSET 0
#define G55_Z_OFFSET 0
#define G55_U_OFFSET 0
#define G55_V_OFFSET 0
#define G55_W_OFFSET 0
#define G55_A_OFFSET 0
#define G55_B_OFFSET 0
#define G55_C_OFFSET 0

#define G56_X_OFFSET 0
#define G56_Y_OFFSET 0
#define G56_Z_OFFSET 0
#define G56_U_OFFSET 0
#define G56_V_OFFSET 0
#define G56_W_OFFSET 0
#define G56_A_OFFSET 0
#define G56_B_OFFSET 0
#define G56_C_OFFSET 0

#define G57_X_OFFSET 0
#define G57_Y_OFFSET 0
#define G57_Z_OFFSET 0
#define G57_U_OFFSET 0
#define G57_V_OFFSET 0
#define G57_W_OFFSET 0
#define G57_A_OFFSET 0
#define G57_B_OFFSET 0
#define G57_C_OFFSET 0

#define G58_X_OFFSET 0
#define G58_Y_OFFSET 0
#define G58_Z_OFFSET 0
#define G58_U_OFFSET 0
#define G58_V_OFFSET 0
#define G58_W_OFFSET 0
#define G58_A_OFFSET 0
#define G58_B_OFFSET 0
#define G58_C_OFFSET 0

#define G59_X_OFFSET 0
#define G59_Y_OFFSET 0
#define G59_Z_OFFSET 0
#define G59_U_OFFSET 0
#define G59_V_OFFSET 0
#define G59_W_OFFSET 0
#define G59_A_OFFSET 0
#define G59_B_OFFSET 0
#define G59_C_OFFSET 0

// *** Tool Table Defaults *** //

#define TT1_X_OFFSET 0
#define TT1_Y_OFFSET 0
#define TT1_Z_OFFSET 0
#define TT1_U_OFFSET 0
#define TT1_V_OFFSET 0
#define TT1_W_OFFSET 0
#define TT1_A_OFFSET 0
#define TT1_B_OFFSET 0
#define TT1_C_OFFSET 0

#define TT2_X_OFFSET 0
#define TT2_Y_OFFSET 0
#define TT2_Z_OFFSET 0
#define TT2_U_OFFSET 0
#define TT2_V_OFFSET 0
#define TT2_W_OFFSET 0
#define TT2_A_OFFSET 0
#define TT2_B_OFFSET 0
#define TT2_C_OFFSET 0

#define TT3_X_OFFSET 0
#define TT3_Y_OFFSET 0
#define TT3_Z_OFFSET 0
#define TT3_U_OFFSET 0
#define TT3_V_OFFSET 0
#define TT3_W_OFFSET 0
#define TT3_A_OFFSET 0
#define TT3_B_OFFSET 0
#define TT3_C_OFFSET 0

#define TT4_X_OFFSET 0
#define TT4_Y_OFFSET 0
#define TT4_Z_OFFSET 0
#define TT4_U_OFFSET 0
#define TT4_V_OFFSET 0
#define TT4_W_OFFSET 0
#define TT4_A_OFFSET 0
#define TT4_B_OFFSET 0
#define TT4_C_OFFSET 0

#define TT5_X_OFFSET 0
#define TT5_Y_OFFSET 0
#define TT5_Z_OFFSET 0
#define TT5_U_OFFSET 0
#define TT5_V_OFFSET 0
#define TT5_W_OFFSET 0
#define TT5_A_OFFSET 0
#define TT5_B_OFFSET 0
#define TT5_C_OFFSET 0

#define TT6_X_OFFSET 0
#define TT6_Y_OFFSET 0
#define TT6_Z_OFFSET 0
#define TT6_U_OFFSET 0
#define TT6_V_OFFSET 0
#define TT6_W_OFFSET 0
#define TT6_A_OFFSET 0
#define TT6_B_OFFSET 0
#define TT6_C_OFFSET 0

#define TT7_X_OFFSET 0
#define TT7_Y_OFFSET 0
#define TT7_Z_OFFSET 0
#define TT7_U_OFFSET 0
#define TT7_V_OFFSET 0
#define TT7_W_OFFSET 0
#define TT7_A_OFFSET 0
#define TT7_B_OFFSET 0
#define TT7_C_OFFSET 0

#define TT8_X_OFFSET 0
#define TT8_Y_OFFSET 0
#define TT8_U_OFFSET 0
#define TT8_V_OFFSET 0
#define TT8_W_OFFSET 0
#define TT8_Z_OFFSET 0
#define TT8_A_OFFSET 0
#define TT8_B_OFFSET 0
#define TT8_C_OFFSET 0

#define TT9_X_OFFSET 0
#define TT9_Y_OFFSET 0
#define TT9_Z_OFFSET 0
#define TT9_U_OFFSET 0
#define TT9_V_OFFSET 0
#define TT9_W_OFFSET 0
#define TT9_A_OFFSET 0
#define TT9_B_OFFSET 0
#define TT9_C_OFFSET 0

#define TT10_X_OFFSET 0
#define TT10_Y_OFFSET 0
#define TT10_Z_OFFSET 0
#define TT10_U_OFFSET 0
#define TT10_V_OFFSET 0
#define TT10_W_OFFSET 0
#define TT10_A_OFFSET 0
#define TT10_B_OFFSET 0
#define TT10_C_OFFSET 0

#define TT11_X_OFFSET 0
#define TT11_Y_OFFSET 0
#define TT11_Z_OFFSET 0
#define TT11_U_OFFSET 0
#define TT11_V_OFFSET 0
#define TT11_W_OFFSET 0
#define TT11_A_OFFSET 0
#define TT11_B_OFFSET 0
#define TT11_C_OFFSET 0

#define TT12_X_OFFSET 0
#define TT12_Y_OFFSET 0
#define TT12_Z_OFFSET 0
#define TT12_U_OFFSET 0
#define TT12_V_OFFSET 0
#define TT12_W_OFFSET 0
#define TT12_A_OFFSET 0
#define TT12_B_OFFSET 0
#define TT12_C_OFFSET 0

#define TT13_X_OFFSET 0
#define TT13_Y_OFFSET 0
#define TT13_Z_OFFSET 0
#define TT13_U_OFFSET 0
#define TT13_V_OFFSET 0
#define TT13_W_OFFSET 0
#define TT13_A_OFFSET 0
#define TT13_B_OFFSET 0
#define TT13_C_OFFSET 0

#define TT14_X_OFFSET 0
#define TT14_Y_OFFSET 0
#define TT14_Z_OFFSET 0
#define TT14_U_OFFSET 0
#define TT14_V_OFFSET 0
#define TT14_W_OFFSET 0
#define TT14_A_OFFSET 0
#define TT14_B_OFFSET 0
#define TT14_C_OFFSET 0

#define TT15_X_OFFSET 0
#define TT15_Y_OFFSET 0
#define TT15_Z_OFFSET 0
#define TT15_U_OFFSET 0
#define TT15_V_OFFSET 0
#define TT15_W_OFFSET 0
#define TT15_A_OFFSET 0
#define TT15_B_OFFSET 0
#define TT15_C_OFFSET 0

#define TT16_X_OFFSET 0
#define TT16_Y_OFFSET 0
#define TT16_Z_OFFSET 0
#define TT16_U_OFFSET 0
#define TT16_V_OFFSET 0
#define TT16_W_OFFSET 0
#define TT16_A_OFFSET 0
#define TT16_B_OFFSET 0
#define TT16_C_OFFSET 0

#define TT17_X_OFFSET 0
#define TT17_Y_OFFSET 0
#define TT17_Z_OFFSET 0
#define TT17_U_OFFSET 0
#define TT17_V_OFFSET 0
#define TT17_W_OFFSET 0
#define TT17_A_OFFSET 0
#define TT17_B_OFFSET 0
#define TT17_C_OFFSET 0

#define TT18_X_OFFSET 0
#define TT18_Y_OFFSET 0
#define TT18_Z_OFFSET 0
#define TT18_U_OFFSET 0
#define TT18_V_OFFSET 0
#define TT18_W_OFFSET 0
#define TT18_A_OFFSET 0
#define TT18_B_OFFSET 0
#define TT18_C_OFFSET 0

#define TT19_X_OFFSET 0
#define TT19_Y_OFFSET 0
#define TT19_Z_OFFSET 0
#define TT19_U_OFFSET 0
#define TT19_V_OFFSET 0
#define TT19_W_OFFSET 0
#define TT19_A_OFFSET 0
#define TT19_B_OFFSET 0
#define TT19_C_OFFSET 0

#define TT20_X_OFFSET 0
#define TT20_Y_OFFSET 0
#define TT20_Z_OFFSET 0
#define TT20_U_OFFSET 0
#define TT20_V_OFFSET 0
#define TT20_W_OFFSET 0
#define TT20_A_OFFSET 0
#define TT20_B_OFFSET 0
#define TT20_C_OFFSET 0

#define TT21_X_OFFSET 0
#define TT21_Y_OFFSET 0
#define TT21_Z_OFFSET 0
#define TT21_U_OFFSET 0
#define TT21_V_OFFSET 0
#define TT21_W_OFFSET 0
#define TT21_A_OFFSET 0
#define TT21_B_OFFSET 0
#define TT21_C_OFFSET 0

#define TT22_X_OFFSET 0
#define TT22_Y_OFFSET 0
#define TT22_Z_OFFSET 0
#define TT22_U_OFFSET 0
#define TT22_V_OFFSET 0
#define TT22_W_OFFSET 0
#define TT22_A_OFFSET 0
#define TT22_B_OFFSET 0
#define TT22_C_OFFSET 0

#define TT23_X_OFFSET 0
#define TT23_Y_OFFSET 0
#define TT23_Z_OFFSET 0
#define TT23_U_OFFSET 0
#define TT23_V_OFFSET 0
#define TT23_W_OFFSET 0
#define TT23_A_OFFSET 0
#define TT23_B_OFFSET 0
#define TT23_C_OFFSET 0

#define TT24_X_OFFSET 0
#define TT24_Y_OFFSET 0
#define TT24_Z_OFFSET 0
#define TT24_U_OFFSET 0
#define TT24_V_OFFSET 0
#define TT24_W_OFFSET 0
#define TT24_A_OFFSET 0
#define TT24_B_OFFSET 0
#define TT24_C_OFFSET 0

#define TT25_X_OFFSET 0
#define TT25_Y_OFFSET 0
#define TT25_Z_OFFSET 0
#define TT25_U_OFFSET 0
#define TT25_V_OFFSET 0
#define TT25_W_OFFSET 0
#define TT25_A_OFFSET 0
#define TT25_B_OFFSET 0
#define TT25_C_OFFSET 0

#define TT26_X_OFFSET 0
#define TT26_Y_OFFSET 0
#define TT26_Z_OFFSET 0
#define TT26_U_OFFSET 0
#define TT26_V_OFFSET 0
#define TT26_W_OFFSET 0
#define TT26_A_OFFSET 0
#define TT26_B_OFFSET 0
#define TT26_C_OFFSET 0

#define TT27_X_OFFSET 0
#define TT27_Y_OFFSET 0
#define TT27_Z_OFFSET 0
#define TT27_U_OFFSET 0
#define TT27_V_OFFSET 0
#define TT27_W_OFFSET 0
#define TT27_A_OFFSET 0
#define TT27_B_OFFSET 0
#define TT27_C_OFFSET 0

#define TT28_X_OFFSET 0
#define TT28_Y_OFFSET 0
#define TT28_Z_OFFSET 0
#define TT28_U_OFFSET 0
#define TT28_V_OFFSET 0
#define TT28_W_OFFSET 0
#define TT28_A_OFFSET 0
#define TT28_B_OFFSET 0
#define TT28_C_OFFSET 0

#define TT29_X_OFFSET 0
#define TT29_Y_OFFSET 0
#define TT29_Z_OFFSET 0
#define TT29_U_OFFSET 0
#define TT29_V_OFFSET 0
#define TT29_W_OFFSET 0
#define TT29_A_OFFSET 0
#define TT29_B_OFFSET 0
#define TT29_C_OFFSET 0

#define TT30_X_OFFSET 0
#define TT30_Y_OFFSET 0
#define TT30_Z_OFFSET 0
#define TT30_U_OFFSET 0
#define TT30_V_OFFSET 0
#define TT30_W_OFFSET 0
#define TT30_A_OFFSET 0
#define TT30_B_OFFSET 0
#define TT30_C_OFFSET 0

#define TT31_X_OFFSET 0
#define TT31_Y_OFFSET 0
#define TT31_Z_OFFSET 0
#define TT31_U_OFFSET 0
#define TT31_V_OFFSET 0
#define TT31_W_OFFSET 0
#define TT31_A_OFFSET 0
#define TT31_B_OFFSET 0
#define TT31_C_OFFSET 0

#define TT32_X_OFFSET 0
#define TT32_Y_OFFSET 0
#define TT32_Z_OFFSET 0
#define TT32_U_OFFSET 0
#define TT32_V_OFFSET 0
#define TT32_W_OFFSET 0
#define TT32_A_OFFSET 0
#define TT32_B_OFFSET 0
#define TT32_C_OFFSET 0

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
