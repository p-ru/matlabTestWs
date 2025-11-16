/*
 * pid_v1.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "pid_v1".
 *
 * Model version              : 1.34
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 * C++ source code generated on : Fri Sep 12 18:04:43 2025
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef pid_v1_h_
#define pid_v1_h_
#include <cmath>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "pid_v1_types.h"
#include <cstring>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
struct B_pid_v1_T {
  SL_Bus_pid_v1_nav_msgs_Odometry In1; /* '<S165>/In1' */
  SL_Bus_pid_v1_nav_msgs_Odometry rtb_SourceBlock_o2_m;
  SL_Bus_pid_v1_geometry_msgs_Twist BusAssignment;/* '<Root>/Bus Assignment' */
  SL_Bus_pid_v1_geometry_msgs_Point In1_h;/* '<S8>/In1' */
  SL_Bus_pid_v1_geometry_msgs_Point rtb_SourceBlock_o2_i_c;
};

/* Block states (default storage) for system '<Root>' */
struct DW_pid_v1_T {
  ros_slroscpp_internal_block_P_T obj; /* '<S1>/SinkBlock' */
  ros_slroscpp_internal_block_S_T obj_n;/* '<S7>/SourceBlock' */
  ros_slroscpp_internal_block_S_T obj_n0;/* '<S2>/SourceBlock' */
  real_T Filter_DSTATE;                /* '<S38>/Filter' */
  real_T Filter_DSTATE_a;              /* '<S90>/Filter' */
  real_T Filter_DSTATE_g;              /* '<S142>/Filter' */
  boolean_T objisempty;                /* '<S7>/SourceBlock' */
  boolean_T objisempty_p;              /* '<S2>/SourceBlock' */
  boolean_T objisempty_i;              /* '<S1>/SinkBlock' */
};

/* External inputs (root inport signals with default storage) */
struct ExtU_pid_v1_T {
  real_T In_test_1;                    /* '<Root>/In_test_1' */
};

/* External outputs (root outports fed by signals with default storage) */
struct ExtY_pid_v1_T {
  real_T out_test_1;                   /* '<Root>/out_test_1' */
};

/* Parameters (default storage) */
struct P_pid_v1_T_ {
  real_T X_D;                          /* Mask Parameter: X_D
                                        * Referenced by: '<S36>/Derivative Gain'
                                        */
  real_T Y_D;                          /* Mask Parameter: Y_D
                                        * Referenced by: '<S88>/Derivative Gain'
                                        */
  real_T Z_D;                          /* Mask Parameter: Z_D
                                        * Referenced by: '<S140>/Derivative Gain'
                                        */
  real_T X_InitialConditionForFilter;
                                  /* Mask Parameter: X_InitialConditionForFilter
                                   * Referenced by: '<S38>/Filter'
                                   */
  real_T Y_InitialConditionForFilter;
                                  /* Mask Parameter: Y_InitialConditionForFilter
                                   * Referenced by: '<S90>/Filter'
                                   */
  real_T Z_InitialConditionForFilter;
                                  /* Mask Parameter: Z_InitialConditionForFilter
                                   * Referenced by: '<S142>/Filter'
                                   */
  real_T X_N;                          /* Mask Parameter: X_N
                                        * Referenced by: '<S46>/Filter Coefficient'
                                        */
  real_T Y_N;                          /* Mask Parameter: Y_N
                                        * Referenced by: '<S98>/Filter Coefficient'
                                        */
  real_T Z_N;                          /* Mask Parameter: Z_N
                                        * Referenced by: '<S150>/Filter Coefficient'
                                        */
  real_T X_P;                          /* Mask Parameter: X_P
                                        * Referenced by: '<S48>/Proportional Gain'
                                        */
  real_T Y_P;                          /* Mask Parameter: Y_P
                                        * Referenced by: '<S100>/Proportional Gain'
                                        */
  real_T Z_P;                          /* Mask Parameter: Z_P
                                        * Referenced by: '<S152>/Proportional Gain'
                                        */
  SL_Bus_pid_v1_nav_msgs_Odometry Out1_Y0;/* Computed Parameter: Out1_Y0
                                           * Referenced by: '<S165>/Out1'
                                           */
  SL_Bus_pid_v1_nav_msgs_Odometry Constant_Value;/* Computed Parameter: Constant_Value
                                                  * Referenced by: '<S7>/Constant'
                                                  */
  SL_Bus_pid_v1_geometry_msgs_Twist Constant_Value_o;/* Computed Parameter: Constant_Value_o
                                                      * Referenced by: '<S6>/Constant'
                                                      */
  SL_Bus_pid_v1_geometry_msgs_Point Out1_Y0_e;/* Computed Parameter: Out1_Y0_e
                                               * Referenced by: '<S8>/Out1'
                                               */
  SL_Bus_pid_v1_geometry_msgs_Point Constant_Value_g;/* Computed Parameter: Constant_Value_g
                                                      * Referenced by: '<S2>/Constant'
                                                      */
  real_T Filter_gainval;               /* Computed Parameter: Filter_gainval
                                        * Referenced by: '<S38>/Filter'
                                        */
  real_T Filter_gainval_l;             /* Computed Parameter: Filter_gainval_l
                                        * Referenced by: '<S90>/Filter'
                                        */
  real_T Filter_gainval_e;             /* Computed Parameter: Filter_gainval_e
                                        * Referenced by: '<S142>/Filter'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_pid_v1_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_pid_v1_T pid_v1_P;

#ifdef __cplusplus

}

#endif

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_pid_v1_T pid_v1_B;

#ifdef __cplusplus

}

#endif

/* Block states (default storage) */
extern struct DW_pid_v1_T pid_v1_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  /* External inputs (root inport signals with default storage) */
  extern struct ExtU_pid_v1_T pid_v1_U;

  /* External outputs (root outports fed by signals with default storage) */
  extern struct ExtY_pid_v1_T pid_v1_Y;

#ifdef __cplusplus

}

#endif

#ifdef __cplusplus

extern "C"
{

#endif

  /* Model entry point functions */
  extern void pid_v1_initialize(void);
  extern void pid_v1_step(void);
  extern void pid_v1_terminate(void);

#ifdef __cplusplus

}

#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_pid_v1_T *const pid_v1_M;

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
 * '<Root>' : 'pid_v1'
 * '<S1>'   : 'pid_v1/Publish'
 * '<S2>'   : 'pid_v1/Subscribe'
 * '<S3>'   : 'pid_v1/X'
 * '<S4>'   : 'pid_v1/Y'
 * '<S5>'   : 'pid_v1/Z'
 * '<S6>'   : 'pid_v1/control output'
 * '<S7>'   : 'pid_v1/position reading'
 * '<S8>'   : 'pid_v1/Subscribe/Enabled Subsystem'
 * '<S9>'   : 'pid_v1/X/Anti-windup'
 * '<S10>'  : 'pid_v1/X/D Gain'
 * '<S11>'  : 'pid_v1/X/External Derivative'
 * '<S12>'  : 'pid_v1/X/Filter'
 * '<S13>'  : 'pid_v1/X/Filter ICs'
 * '<S14>'  : 'pid_v1/X/I Gain'
 * '<S15>'  : 'pid_v1/X/Ideal P Gain'
 * '<S16>'  : 'pid_v1/X/Ideal P Gain Fdbk'
 * '<S17>'  : 'pid_v1/X/Integrator'
 * '<S18>'  : 'pid_v1/X/Integrator ICs'
 * '<S19>'  : 'pid_v1/X/N Copy'
 * '<S20>'  : 'pid_v1/X/N Gain'
 * '<S21>'  : 'pid_v1/X/P Copy'
 * '<S22>'  : 'pid_v1/X/Parallel P Gain'
 * '<S23>'  : 'pid_v1/X/Reset Signal'
 * '<S24>'  : 'pid_v1/X/Saturation'
 * '<S25>'  : 'pid_v1/X/Saturation Fdbk'
 * '<S26>'  : 'pid_v1/X/Sum'
 * '<S27>'  : 'pid_v1/X/Sum Fdbk'
 * '<S28>'  : 'pid_v1/X/Tracking Mode'
 * '<S29>'  : 'pid_v1/X/Tracking Mode Sum'
 * '<S30>'  : 'pid_v1/X/Tsamp - Integral'
 * '<S31>'  : 'pid_v1/X/Tsamp - Ngain'
 * '<S32>'  : 'pid_v1/X/postSat Signal'
 * '<S33>'  : 'pid_v1/X/preInt Signal'
 * '<S34>'  : 'pid_v1/X/preSat Signal'
 * '<S35>'  : 'pid_v1/X/Anti-windup/Disabled'
 * '<S36>'  : 'pid_v1/X/D Gain/Internal Parameters'
 * '<S37>'  : 'pid_v1/X/External Derivative/Error'
 * '<S38>'  : 'pid_v1/X/Filter/Disc. Forward Euler Filter'
 * '<S39>'  : 'pid_v1/X/Filter ICs/Internal IC - Filter'
 * '<S40>'  : 'pid_v1/X/I Gain/Disabled'
 * '<S41>'  : 'pid_v1/X/Ideal P Gain/Passthrough'
 * '<S42>'  : 'pid_v1/X/Ideal P Gain Fdbk/Disabled'
 * '<S43>'  : 'pid_v1/X/Integrator/Disabled'
 * '<S44>'  : 'pid_v1/X/Integrator ICs/Disabled'
 * '<S45>'  : 'pid_v1/X/N Copy/Disabled'
 * '<S46>'  : 'pid_v1/X/N Gain/Internal Parameters'
 * '<S47>'  : 'pid_v1/X/P Copy/Disabled'
 * '<S48>'  : 'pid_v1/X/Parallel P Gain/Internal Parameters'
 * '<S49>'  : 'pid_v1/X/Reset Signal/Disabled'
 * '<S50>'  : 'pid_v1/X/Saturation/Passthrough'
 * '<S51>'  : 'pid_v1/X/Saturation Fdbk/Disabled'
 * '<S52>'  : 'pid_v1/X/Sum/Sum_PD'
 * '<S53>'  : 'pid_v1/X/Sum Fdbk/Disabled'
 * '<S54>'  : 'pid_v1/X/Tracking Mode/Disabled'
 * '<S55>'  : 'pid_v1/X/Tracking Mode Sum/Passthrough'
 * '<S56>'  : 'pid_v1/X/Tsamp - Integral/TsSignalSpecification'
 * '<S57>'  : 'pid_v1/X/Tsamp - Ngain/Passthrough'
 * '<S58>'  : 'pid_v1/X/postSat Signal/Forward_Path'
 * '<S59>'  : 'pid_v1/X/preInt Signal/Internal PreInt'
 * '<S60>'  : 'pid_v1/X/preSat Signal/Forward_Path'
 * '<S61>'  : 'pid_v1/Y/Anti-windup'
 * '<S62>'  : 'pid_v1/Y/D Gain'
 * '<S63>'  : 'pid_v1/Y/External Derivative'
 * '<S64>'  : 'pid_v1/Y/Filter'
 * '<S65>'  : 'pid_v1/Y/Filter ICs'
 * '<S66>'  : 'pid_v1/Y/I Gain'
 * '<S67>'  : 'pid_v1/Y/Ideal P Gain'
 * '<S68>'  : 'pid_v1/Y/Ideal P Gain Fdbk'
 * '<S69>'  : 'pid_v1/Y/Integrator'
 * '<S70>'  : 'pid_v1/Y/Integrator ICs'
 * '<S71>'  : 'pid_v1/Y/N Copy'
 * '<S72>'  : 'pid_v1/Y/N Gain'
 * '<S73>'  : 'pid_v1/Y/P Copy'
 * '<S74>'  : 'pid_v1/Y/Parallel P Gain'
 * '<S75>'  : 'pid_v1/Y/Reset Signal'
 * '<S76>'  : 'pid_v1/Y/Saturation'
 * '<S77>'  : 'pid_v1/Y/Saturation Fdbk'
 * '<S78>'  : 'pid_v1/Y/Sum'
 * '<S79>'  : 'pid_v1/Y/Sum Fdbk'
 * '<S80>'  : 'pid_v1/Y/Tracking Mode'
 * '<S81>'  : 'pid_v1/Y/Tracking Mode Sum'
 * '<S82>'  : 'pid_v1/Y/Tsamp - Integral'
 * '<S83>'  : 'pid_v1/Y/Tsamp - Ngain'
 * '<S84>'  : 'pid_v1/Y/postSat Signal'
 * '<S85>'  : 'pid_v1/Y/preInt Signal'
 * '<S86>'  : 'pid_v1/Y/preSat Signal'
 * '<S87>'  : 'pid_v1/Y/Anti-windup/Disabled'
 * '<S88>'  : 'pid_v1/Y/D Gain/Internal Parameters'
 * '<S89>'  : 'pid_v1/Y/External Derivative/Error'
 * '<S90>'  : 'pid_v1/Y/Filter/Disc. Forward Euler Filter'
 * '<S91>'  : 'pid_v1/Y/Filter ICs/Internal IC - Filter'
 * '<S92>'  : 'pid_v1/Y/I Gain/Disabled'
 * '<S93>'  : 'pid_v1/Y/Ideal P Gain/Passthrough'
 * '<S94>'  : 'pid_v1/Y/Ideal P Gain Fdbk/Disabled'
 * '<S95>'  : 'pid_v1/Y/Integrator/Disabled'
 * '<S96>'  : 'pid_v1/Y/Integrator ICs/Disabled'
 * '<S97>'  : 'pid_v1/Y/N Copy/Disabled'
 * '<S98>'  : 'pid_v1/Y/N Gain/Internal Parameters'
 * '<S99>'  : 'pid_v1/Y/P Copy/Disabled'
 * '<S100>' : 'pid_v1/Y/Parallel P Gain/Internal Parameters'
 * '<S101>' : 'pid_v1/Y/Reset Signal/Disabled'
 * '<S102>' : 'pid_v1/Y/Saturation/Passthrough'
 * '<S103>' : 'pid_v1/Y/Saturation Fdbk/Disabled'
 * '<S104>' : 'pid_v1/Y/Sum/Sum_PD'
 * '<S105>' : 'pid_v1/Y/Sum Fdbk/Disabled'
 * '<S106>' : 'pid_v1/Y/Tracking Mode/Disabled'
 * '<S107>' : 'pid_v1/Y/Tracking Mode Sum/Passthrough'
 * '<S108>' : 'pid_v1/Y/Tsamp - Integral/TsSignalSpecification'
 * '<S109>' : 'pid_v1/Y/Tsamp - Ngain/Passthrough'
 * '<S110>' : 'pid_v1/Y/postSat Signal/Forward_Path'
 * '<S111>' : 'pid_v1/Y/preInt Signal/Internal PreInt'
 * '<S112>' : 'pid_v1/Y/preSat Signal/Forward_Path'
 * '<S113>' : 'pid_v1/Z/Anti-windup'
 * '<S114>' : 'pid_v1/Z/D Gain'
 * '<S115>' : 'pid_v1/Z/External Derivative'
 * '<S116>' : 'pid_v1/Z/Filter'
 * '<S117>' : 'pid_v1/Z/Filter ICs'
 * '<S118>' : 'pid_v1/Z/I Gain'
 * '<S119>' : 'pid_v1/Z/Ideal P Gain'
 * '<S120>' : 'pid_v1/Z/Ideal P Gain Fdbk'
 * '<S121>' : 'pid_v1/Z/Integrator'
 * '<S122>' : 'pid_v1/Z/Integrator ICs'
 * '<S123>' : 'pid_v1/Z/N Copy'
 * '<S124>' : 'pid_v1/Z/N Gain'
 * '<S125>' : 'pid_v1/Z/P Copy'
 * '<S126>' : 'pid_v1/Z/Parallel P Gain'
 * '<S127>' : 'pid_v1/Z/Reset Signal'
 * '<S128>' : 'pid_v1/Z/Saturation'
 * '<S129>' : 'pid_v1/Z/Saturation Fdbk'
 * '<S130>' : 'pid_v1/Z/Sum'
 * '<S131>' : 'pid_v1/Z/Sum Fdbk'
 * '<S132>' : 'pid_v1/Z/Tracking Mode'
 * '<S133>' : 'pid_v1/Z/Tracking Mode Sum'
 * '<S134>' : 'pid_v1/Z/Tsamp - Integral'
 * '<S135>' : 'pid_v1/Z/Tsamp - Ngain'
 * '<S136>' : 'pid_v1/Z/postSat Signal'
 * '<S137>' : 'pid_v1/Z/preInt Signal'
 * '<S138>' : 'pid_v1/Z/preSat Signal'
 * '<S139>' : 'pid_v1/Z/Anti-windup/Disabled'
 * '<S140>' : 'pid_v1/Z/D Gain/Internal Parameters'
 * '<S141>' : 'pid_v1/Z/External Derivative/Error'
 * '<S142>' : 'pid_v1/Z/Filter/Disc. Forward Euler Filter'
 * '<S143>' : 'pid_v1/Z/Filter ICs/Internal IC - Filter'
 * '<S144>' : 'pid_v1/Z/I Gain/Disabled'
 * '<S145>' : 'pid_v1/Z/Ideal P Gain/Passthrough'
 * '<S146>' : 'pid_v1/Z/Ideal P Gain Fdbk/Disabled'
 * '<S147>' : 'pid_v1/Z/Integrator/Disabled'
 * '<S148>' : 'pid_v1/Z/Integrator ICs/Disabled'
 * '<S149>' : 'pid_v1/Z/N Copy/Disabled'
 * '<S150>' : 'pid_v1/Z/N Gain/Internal Parameters'
 * '<S151>' : 'pid_v1/Z/P Copy/Disabled'
 * '<S152>' : 'pid_v1/Z/Parallel P Gain/Internal Parameters'
 * '<S153>' : 'pid_v1/Z/Reset Signal/Disabled'
 * '<S154>' : 'pid_v1/Z/Saturation/Passthrough'
 * '<S155>' : 'pid_v1/Z/Saturation Fdbk/Disabled'
 * '<S156>' : 'pid_v1/Z/Sum/Sum_PD'
 * '<S157>' : 'pid_v1/Z/Sum Fdbk/Disabled'
 * '<S158>' : 'pid_v1/Z/Tracking Mode/Disabled'
 * '<S159>' : 'pid_v1/Z/Tracking Mode Sum/Passthrough'
 * '<S160>' : 'pid_v1/Z/Tsamp - Integral/TsSignalSpecification'
 * '<S161>' : 'pid_v1/Z/Tsamp - Ngain/Passthrough'
 * '<S162>' : 'pid_v1/Z/postSat Signal/Forward_Path'
 * '<S163>' : 'pid_v1/Z/preInt Signal/Internal PreInt'
 * '<S164>' : 'pid_v1/Z/preSat Signal/Forward_Path'
 * '<S165>' : 'pid_v1/position reading/Enabled Subsystem'
 */
#endif                                 /* pid_v1_h_ */
