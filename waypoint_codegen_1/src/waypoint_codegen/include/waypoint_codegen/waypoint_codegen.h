/*
 * waypoint_codegen.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "waypoint_codegen".
 *
 * Model version              : 1.40
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 * C++ source code generated on : Fri Sep  5 01:01:11 2025
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef waypoint_codegen_h_
#define waypoint_codegen_h_
#include <cmath>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_nonfinite.h"
#include "slros_initialize.h"
#include "waypoint_codegen_types.h"
#include "coder_bounded_array.h"

extern "C"
{

#include "rtGetNaN.h"

}

#include <cstring>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
struct B_waypoint_codegen_T {
  SL_Bus_waypoint_codegen_nav_msgs_Odometry In1;/* '<S7>/In1' */
  SL_Bus_waypoint_codegen_nav_msgs_Odometry rtb_SourceBlock_o2_m;
  real_T b_waypointsIn_data[6];
  real_T mission[6];                   /* '<Root>/MATLAB Function' */
  SL_Bus_waypoint_codegen_geometry_msgs_Point BusAssignment1;/* '<Root>/Bus Assignment1' */
  real_T virtualWaypoint[3];
  real_T unitVectorUtoV_tmp[3];
  real_T rtb_VectorConcatenate_c[3];
  real_T x;
  real_T b;
  real_T dist;
  real_T y;
  real_T absx_tmp;
  real_T virtualWaypoint_k;
  real_T rtb_VectorConcatenate_idx_3;
  real_T y_idx_1;
  real_T y_idx_3;
  real_T d_tmp;
  real_T rtb_WaypointFollower_o1_idx_2_t;
};

/* Block states (default storage) for system '<Root>' */
struct DW_waypoint_codegen_T {
  uav_sluav_internal_system_Way_T obj; /* '<Root>/Waypoint Follower' */
  coder::bounded_array<real_T,9,2> prevWP;/* '<Root>/MATLAB Function' */
  ros_slroscpp_internal_block_P_T obj_o;/* '<S5>/SinkBlock' */
  ros_slroscpp_internal_block_S_T obj_n;/* '<S6>/SourceBlock' */
  real_T idx;                          /* '<Root>/MATLAB Function' */
  robotics_slcore_internal_bloc_T obj_j;
                             /* '<Root>/Coordinate Transformation Conversion' */
  uint8_T Delay_DSTATE[50];            /* '<Root>/Delay' */
  uint8_T Memory_PreviousInput;        /* '<Root>/Memory' */
  boolean_T objisempty;                /* '<S6>/SourceBlock' */
  boolean_T objisempty_h;              /* '<Root>/Waypoint Follower' */
  boolean_T objisempty_g;              /* '<S5>/SinkBlock' */
  boolean_T idx_not_empty;             /* '<Root>/MATLAB Function' */
  boolean_T prevDone;                  /* '<Root>/MATLAB Function' */
  boolean_T objisempty_l;    /* '<Root>/Coordinate Transformation Conversion' */
};

/* Constant parameters (default storage) */
struct ConstP_waypoint_codegen_T {
  /* Expression: [-3.22,-0.43,0.84; -4.69, -0.40, 1.00; -4.69, 0.54, 1.00; -3.35, 0.51, 0.91; -1.56,-0.74, 0.86]
   * Referenced by: '<Root>/Waypoints4'
   */
  real_T Waypoints4_Value[15];
};

/* Real-time Model Data Structure */
struct tag_RTM_waypoint_codegen_T {
  const char_T *errorStatus;
};

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_waypoint_codegen_T waypoint_codegen_B;

#ifdef __cplusplus

}

#endif

/* Block states (default storage) */
extern struct DW_waypoint_codegen_T waypoint_codegen_DW;

/* Constant parameters (default storage) */
extern const ConstP_waypoint_codegen_T waypoint_codegen_ConstP;

#ifdef __cplusplus

extern "C"
{

#endif

  /* Model entry point functions */
  extern void waypoint_codegen_initialize(void);
  extern void waypoint_codegen_step(void);
  extern void waypoint_codegen_terminate(void);

#ifdef __cplusplus

}

#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_waypoint_codegen_T *const waypoint_codegen_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'waypoint_codegen'
 * '<S1>'   : 'waypoint_codegen/Blank Message'
 * '<S2>'   : 'waypoint_codegen/Compare To Zero'
 * '<S3>'   : 'waypoint_codegen/MATLAB Function'
 * '<S4>'   : 'waypoint_codegen/MATLAB Function1'
 * '<S5>'   : 'waypoint_codegen/Publish1'
 * '<S6>'   : 'waypoint_codegen/position reading'
 * '<S7>'   : 'waypoint_codegen/position reading/Enabled Subsystem'
 */
#endif                                 /* waypoint_codegen_h_ */
