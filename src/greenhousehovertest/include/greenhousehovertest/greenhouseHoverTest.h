/*
 * greenhouseHoverTest.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "greenhouseHoverTest".
 *
 * Model version              : 1.30
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 * C++ source code generated on : Fri Aug 29 02:02:13 2025
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef greenhouseHoverTest_h_
#define greenhouseHoverTest_h_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "greenhouseHoverTest_types.h"
#include <string.h>
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
struct B_greenhouseHoverTest_T {
  SL_Bus_greenhouseHoverTest_nav_msgs_Odometry In1;/* '<S166>/In1' */
  SL_Bus_greenhouseHoverTest_nav_msgs_Odometry rtb_SourceBlock_o2_m;
  SL_Bus_greenhouseHoverTest_geometry_msgs_Twist BusAssignment;/* '<Root>/Bus Assignment' */
  SL_Bus_greenhouseHoverTest_geometry_msgs_Point rtb_SourceBlock_o2_i_c;
  real_T X;
  real_T Y;
  real_T Z;
  real_T Transpose[3];                 /* '<S3>/Transpose' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_greenhouseHoverTest_T {
  ros_slroscpp_internal_block_P_T obj; /* '<S1>/SinkBlock' */
  ros_slroscpp_internal_block_S_T obj_n;/* '<S8>/SourceBlock' */
  ros_slroscpp_internal_block_S_T obj_n0;/* '<S2>/SourceBlock' */
  real_T Filter_DSTATE;                /* '<S39>/Filter' */
  real_T Filter_DSTATE_a;              /* '<S91>/Filter' */
  real_T Filter_DSTATE_g;              /* '<S143>/Filter' */
  boolean_T objisempty;                /* '<S8>/SourceBlock' */
  boolean_T objisempty_p;              /* '<S2>/SourceBlock' */
  boolean_T objisempty_i;              /* '<S1>/SinkBlock' */
};

/* Real-time Model Data Structure */
struct tag_RTM_greenhouseHoverTest_T {
  const char_T *errorStatus;
};

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_greenhouseHoverTest_T greenhouseHoverTest_B;

#ifdef __cplusplus

}

#endif

/* Block states (default storage) */
extern struct DW_greenhouseHoverTest_T greenhouseHoverTest_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  /* Model entry point functions */
  extern void greenhouseHoverTest_initialize(void);
  extern void greenhouseHoverTest_step(void);
  extern void greenhouseHoverTest_terminate(void);

#ifdef __cplusplus

}

#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_greenhouseHoverTest_T *const greenhouseHoverTest_M;

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
 * '<Root>' : 'greenhouseHoverTest'
 * '<S1>'   : 'greenhouseHoverTest/Publish'
 * '<S2>'   : 'greenhouseHoverTest/Subscribe'
 * '<S3>'   : 'greenhouseHoverTest/Subsystem'
 * '<S4>'   : 'greenhouseHoverTest/X'
 * '<S5>'   : 'greenhouseHoverTest/Y'
 * '<S6>'   : 'greenhouseHoverTest/Z'
 * '<S7>'   : 'greenhouseHoverTest/control output'
 * '<S8>'   : 'greenhouseHoverTest/position reading'
 * '<S9>'   : 'greenhouseHoverTest/Subscribe/Enabled Subsystem'
 * '<S10>'  : 'greenhouseHoverTest/X/Anti-windup'
 * '<S11>'  : 'greenhouseHoverTest/X/D Gain'
 * '<S12>'  : 'greenhouseHoverTest/X/External Derivative'
 * '<S13>'  : 'greenhouseHoverTest/X/Filter'
 * '<S14>'  : 'greenhouseHoverTest/X/Filter ICs'
 * '<S15>'  : 'greenhouseHoverTest/X/I Gain'
 * '<S16>'  : 'greenhouseHoverTest/X/Ideal P Gain'
 * '<S17>'  : 'greenhouseHoverTest/X/Ideal P Gain Fdbk'
 * '<S18>'  : 'greenhouseHoverTest/X/Integrator'
 * '<S19>'  : 'greenhouseHoverTest/X/Integrator ICs'
 * '<S20>'  : 'greenhouseHoverTest/X/N Copy'
 * '<S21>'  : 'greenhouseHoverTest/X/N Gain'
 * '<S22>'  : 'greenhouseHoverTest/X/P Copy'
 * '<S23>'  : 'greenhouseHoverTest/X/Parallel P Gain'
 * '<S24>'  : 'greenhouseHoverTest/X/Reset Signal'
 * '<S25>'  : 'greenhouseHoverTest/X/Saturation'
 * '<S26>'  : 'greenhouseHoverTest/X/Saturation Fdbk'
 * '<S27>'  : 'greenhouseHoverTest/X/Sum'
 * '<S28>'  : 'greenhouseHoverTest/X/Sum Fdbk'
 * '<S29>'  : 'greenhouseHoverTest/X/Tracking Mode'
 * '<S30>'  : 'greenhouseHoverTest/X/Tracking Mode Sum'
 * '<S31>'  : 'greenhouseHoverTest/X/Tsamp - Integral'
 * '<S32>'  : 'greenhouseHoverTest/X/Tsamp - Ngain'
 * '<S33>'  : 'greenhouseHoverTest/X/postSat Signal'
 * '<S34>'  : 'greenhouseHoverTest/X/preInt Signal'
 * '<S35>'  : 'greenhouseHoverTest/X/preSat Signal'
 * '<S36>'  : 'greenhouseHoverTest/X/Anti-windup/Disabled'
 * '<S37>'  : 'greenhouseHoverTest/X/D Gain/Internal Parameters'
 * '<S38>'  : 'greenhouseHoverTest/X/External Derivative/Error'
 * '<S39>'  : 'greenhouseHoverTest/X/Filter/Disc. Forward Euler Filter'
 * '<S40>'  : 'greenhouseHoverTest/X/Filter ICs/Internal IC - Filter'
 * '<S41>'  : 'greenhouseHoverTest/X/I Gain/Disabled'
 * '<S42>'  : 'greenhouseHoverTest/X/Ideal P Gain/Passthrough'
 * '<S43>'  : 'greenhouseHoverTest/X/Ideal P Gain Fdbk/Disabled'
 * '<S44>'  : 'greenhouseHoverTest/X/Integrator/Disabled'
 * '<S45>'  : 'greenhouseHoverTest/X/Integrator ICs/Disabled'
 * '<S46>'  : 'greenhouseHoverTest/X/N Copy/Disabled'
 * '<S47>'  : 'greenhouseHoverTest/X/N Gain/Internal Parameters'
 * '<S48>'  : 'greenhouseHoverTest/X/P Copy/Disabled'
 * '<S49>'  : 'greenhouseHoverTest/X/Parallel P Gain/Internal Parameters'
 * '<S50>'  : 'greenhouseHoverTest/X/Reset Signal/Disabled'
 * '<S51>'  : 'greenhouseHoverTest/X/Saturation/Passthrough'
 * '<S52>'  : 'greenhouseHoverTest/X/Saturation Fdbk/Disabled'
 * '<S53>'  : 'greenhouseHoverTest/X/Sum/Sum_PD'
 * '<S54>'  : 'greenhouseHoverTest/X/Sum Fdbk/Disabled'
 * '<S55>'  : 'greenhouseHoverTest/X/Tracking Mode/Disabled'
 * '<S56>'  : 'greenhouseHoverTest/X/Tracking Mode Sum/Passthrough'
 * '<S57>'  : 'greenhouseHoverTest/X/Tsamp - Integral/TsSignalSpecification'
 * '<S58>'  : 'greenhouseHoverTest/X/Tsamp - Ngain/Passthrough'
 * '<S59>'  : 'greenhouseHoverTest/X/postSat Signal/Forward_Path'
 * '<S60>'  : 'greenhouseHoverTest/X/preInt Signal/Internal PreInt'
 * '<S61>'  : 'greenhouseHoverTest/X/preSat Signal/Forward_Path'
 * '<S62>'  : 'greenhouseHoverTest/Y/Anti-windup'
 * '<S63>'  : 'greenhouseHoverTest/Y/D Gain'
 * '<S64>'  : 'greenhouseHoverTest/Y/External Derivative'
 * '<S65>'  : 'greenhouseHoverTest/Y/Filter'
 * '<S66>'  : 'greenhouseHoverTest/Y/Filter ICs'
 * '<S67>'  : 'greenhouseHoverTest/Y/I Gain'
 * '<S68>'  : 'greenhouseHoverTest/Y/Ideal P Gain'
 * '<S69>'  : 'greenhouseHoverTest/Y/Ideal P Gain Fdbk'
 * '<S70>'  : 'greenhouseHoverTest/Y/Integrator'
 * '<S71>'  : 'greenhouseHoverTest/Y/Integrator ICs'
 * '<S72>'  : 'greenhouseHoverTest/Y/N Copy'
 * '<S73>'  : 'greenhouseHoverTest/Y/N Gain'
 * '<S74>'  : 'greenhouseHoverTest/Y/P Copy'
 * '<S75>'  : 'greenhouseHoverTest/Y/Parallel P Gain'
 * '<S76>'  : 'greenhouseHoverTest/Y/Reset Signal'
 * '<S77>'  : 'greenhouseHoverTest/Y/Saturation'
 * '<S78>'  : 'greenhouseHoverTest/Y/Saturation Fdbk'
 * '<S79>'  : 'greenhouseHoverTest/Y/Sum'
 * '<S80>'  : 'greenhouseHoverTest/Y/Sum Fdbk'
 * '<S81>'  : 'greenhouseHoverTest/Y/Tracking Mode'
 * '<S82>'  : 'greenhouseHoverTest/Y/Tracking Mode Sum'
 * '<S83>'  : 'greenhouseHoverTest/Y/Tsamp - Integral'
 * '<S84>'  : 'greenhouseHoverTest/Y/Tsamp - Ngain'
 * '<S85>'  : 'greenhouseHoverTest/Y/postSat Signal'
 * '<S86>'  : 'greenhouseHoverTest/Y/preInt Signal'
 * '<S87>'  : 'greenhouseHoverTest/Y/preSat Signal'
 * '<S88>'  : 'greenhouseHoverTest/Y/Anti-windup/Disabled'
 * '<S89>'  : 'greenhouseHoverTest/Y/D Gain/Internal Parameters'
 * '<S90>'  : 'greenhouseHoverTest/Y/External Derivative/Error'
 * '<S91>'  : 'greenhouseHoverTest/Y/Filter/Disc. Forward Euler Filter'
 * '<S92>'  : 'greenhouseHoverTest/Y/Filter ICs/Internal IC - Filter'
 * '<S93>'  : 'greenhouseHoverTest/Y/I Gain/Disabled'
 * '<S94>'  : 'greenhouseHoverTest/Y/Ideal P Gain/Passthrough'
 * '<S95>'  : 'greenhouseHoverTest/Y/Ideal P Gain Fdbk/Disabled'
 * '<S96>'  : 'greenhouseHoverTest/Y/Integrator/Disabled'
 * '<S97>'  : 'greenhouseHoverTest/Y/Integrator ICs/Disabled'
 * '<S98>'  : 'greenhouseHoverTest/Y/N Copy/Disabled'
 * '<S99>'  : 'greenhouseHoverTest/Y/N Gain/Internal Parameters'
 * '<S100>' : 'greenhouseHoverTest/Y/P Copy/Disabled'
 * '<S101>' : 'greenhouseHoverTest/Y/Parallel P Gain/Internal Parameters'
 * '<S102>' : 'greenhouseHoverTest/Y/Reset Signal/Disabled'
 * '<S103>' : 'greenhouseHoverTest/Y/Saturation/Passthrough'
 * '<S104>' : 'greenhouseHoverTest/Y/Saturation Fdbk/Disabled'
 * '<S105>' : 'greenhouseHoverTest/Y/Sum/Sum_PD'
 * '<S106>' : 'greenhouseHoverTest/Y/Sum Fdbk/Disabled'
 * '<S107>' : 'greenhouseHoverTest/Y/Tracking Mode/Disabled'
 * '<S108>' : 'greenhouseHoverTest/Y/Tracking Mode Sum/Passthrough'
 * '<S109>' : 'greenhouseHoverTest/Y/Tsamp - Integral/TsSignalSpecification'
 * '<S110>' : 'greenhouseHoverTest/Y/Tsamp - Ngain/Passthrough'
 * '<S111>' : 'greenhouseHoverTest/Y/postSat Signal/Forward_Path'
 * '<S112>' : 'greenhouseHoverTest/Y/preInt Signal/Internal PreInt'
 * '<S113>' : 'greenhouseHoverTest/Y/preSat Signal/Forward_Path'
 * '<S114>' : 'greenhouseHoverTest/Z/Anti-windup'
 * '<S115>' : 'greenhouseHoverTest/Z/D Gain'
 * '<S116>' : 'greenhouseHoverTest/Z/External Derivative'
 * '<S117>' : 'greenhouseHoverTest/Z/Filter'
 * '<S118>' : 'greenhouseHoverTest/Z/Filter ICs'
 * '<S119>' : 'greenhouseHoverTest/Z/I Gain'
 * '<S120>' : 'greenhouseHoverTest/Z/Ideal P Gain'
 * '<S121>' : 'greenhouseHoverTest/Z/Ideal P Gain Fdbk'
 * '<S122>' : 'greenhouseHoverTest/Z/Integrator'
 * '<S123>' : 'greenhouseHoverTest/Z/Integrator ICs'
 * '<S124>' : 'greenhouseHoverTest/Z/N Copy'
 * '<S125>' : 'greenhouseHoverTest/Z/N Gain'
 * '<S126>' : 'greenhouseHoverTest/Z/P Copy'
 * '<S127>' : 'greenhouseHoverTest/Z/Parallel P Gain'
 * '<S128>' : 'greenhouseHoverTest/Z/Reset Signal'
 * '<S129>' : 'greenhouseHoverTest/Z/Saturation'
 * '<S130>' : 'greenhouseHoverTest/Z/Saturation Fdbk'
 * '<S131>' : 'greenhouseHoverTest/Z/Sum'
 * '<S132>' : 'greenhouseHoverTest/Z/Sum Fdbk'
 * '<S133>' : 'greenhouseHoverTest/Z/Tracking Mode'
 * '<S134>' : 'greenhouseHoverTest/Z/Tracking Mode Sum'
 * '<S135>' : 'greenhouseHoverTest/Z/Tsamp - Integral'
 * '<S136>' : 'greenhouseHoverTest/Z/Tsamp - Ngain'
 * '<S137>' : 'greenhouseHoverTest/Z/postSat Signal'
 * '<S138>' : 'greenhouseHoverTest/Z/preInt Signal'
 * '<S139>' : 'greenhouseHoverTest/Z/preSat Signal'
 * '<S140>' : 'greenhouseHoverTest/Z/Anti-windup/Disabled'
 * '<S141>' : 'greenhouseHoverTest/Z/D Gain/Internal Parameters'
 * '<S142>' : 'greenhouseHoverTest/Z/External Derivative/Error'
 * '<S143>' : 'greenhouseHoverTest/Z/Filter/Disc. Forward Euler Filter'
 * '<S144>' : 'greenhouseHoverTest/Z/Filter ICs/Internal IC - Filter'
 * '<S145>' : 'greenhouseHoverTest/Z/I Gain/Disabled'
 * '<S146>' : 'greenhouseHoverTest/Z/Ideal P Gain/Passthrough'
 * '<S147>' : 'greenhouseHoverTest/Z/Ideal P Gain Fdbk/Disabled'
 * '<S148>' : 'greenhouseHoverTest/Z/Integrator/Disabled'
 * '<S149>' : 'greenhouseHoverTest/Z/Integrator ICs/Disabled'
 * '<S150>' : 'greenhouseHoverTest/Z/N Copy/Disabled'
 * '<S151>' : 'greenhouseHoverTest/Z/N Gain/Internal Parameters'
 * '<S152>' : 'greenhouseHoverTest/Z/P Copy/Disabled'
 * '<S153>' : 'greenhouseHoverTest/Z/Parallel P Gain/Internal Parameters'
 * '<S154>' : 'greenhouseHoverTest/Z/Reset Signal/Disabled'
 * '<S155>' : 'greenhouseHoverTest/Z/Saturation/Passthrough'
 * '<S156>' : 'greenhouseHoverTest/Z/Saturation Fdbk/Disabled'
 * '<S157>' : 'greenhouseHoverTest/Z/Sum/Sum_PD'
 * '<S158>' : 'greenhouseHoverTest/Z/Sum Fdbk/Disabled'
 * '<S159>' : 'greenhouseHoverTest/Z/Tracking Mode/Disabled'
 * '<S160>' : 'greenhouseHoverTest/Z/Tracking Mode Sum/Passthrough'
 * '<S161>' : 'greenhouseHoverTest/Z/Tsamp - Integral/TsSignalSpecification'
 * '<S162>' : 'greenhouseHoverTest/Z/Tsamp - Ngain/Passthrough'
 * '<S163>' : 'greenhouseHoverTest/Z/postSat Signal/Forward_Path'
 * '<S164>' : 'greenhouseHoverTest/Z/preInt Signal/Internal PreInt'
 * '<S165>' : 'greenhouseHoverTest/Z/preSat Signal/Forward_Path'
 * '<S166>' : 'greenhouseHoverTest/position reading/Enabled Subsystem'
 */
#endif                                 /* greenhouseHoverTest_h_ */
