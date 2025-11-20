/*
 * trajGen.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "trajGen".
 *
 * Model version              : 1.16
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 * C++ source code generated on : Fri Nov 21 00:51:34 2025
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef trajGen_h_
#define trajGen_h_
#include <cmath>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_nonfinite.h"
#include "slros_initialize.h"
#include "coder_posix_time.h"
#include "trajGen_types.h"
#include "coder_array.h"

extern "C"
{

#include "rtGetInf.h"

}

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
struct B_trajGen_T {
  coder::array<real_T,2> r;
  coder::array<real_T,2> R_data;
  coder::array<real_T,2> R_data_m;
  coder::array<real_T,2> b_A;
  coder::array<real_T,1> r1;
  coder::array<real_T,1> r2;
  coder::array<real_T,1> constraints_data;
  coder::array<real_T,1> tau;
  coder::array<real_T,1> B;
  coder::array<real_T,1> work;
  coder::array<real_T,1> vn1;
  coder::array<real_T,1> vn2;
  coder::array<int32_T,2> jpvt;
  SL_Bus_trajGen_nav_msgs_Odometry In1;/* '<S176>/In1' */
  SL_Bus_trajGen_nav_msgs_Odometry rtb_SourceBlock_o2_cl;
  real_T M[64];
  real_T AInv[64];
  real_T Q[64];
  real_T Qsum[64];
  real_T R_tmp[64];
  real_T AInv_k[64];
  real_T AInv_c[64];
  real_T c_A[64];
  real_T c_A_b[64];
  real_T A0[32];
  real_T AT[32];
  real_T ppMatrix[24];
  real_T constraints[24];
  SL_Bus_trajGen_std_srvs_SetBoolResponse r3;
  real_T upperleft[16];
  real_T lowerright[16];
  real_T Q_p[16];
  real_T lowerright_c[16];
  real_T lowerright_f[16];
  real_T c_A_g[16];
  real_T waypoints[12];
  int8_T M1[64];
  int8_T Mcontinuity[64];
  real_T b_p[8];
  real_T x[8];
  SL_Bus_trajGen_geometry_msgs_Twist BusAssignment;/* '<Root>/Bus Assignment' */
  real_T rtb_Transpose_tmp[6];
  real_T dv[6];
  real_T waypoints_g[6];
  real_T dv1[6];
  int32_T ipiv[8];
  int32_T b_ipiv[8];
  int32_T fixedBCIdx_data[8];
  int32_T freeBCIdx_data[8];
  int32_T tmp_data[8];
  SL_Bus_trajGen_geometry_msgs_Point In1_c;/* '<S11>/In1' */
  SL_Bus_trajGen_geometry_msgs_Point rtb_SourceBlock_o2_c_m;
  real_T Transpose1[3];                /* '<S7>/Transpose1' */
  char_T b_zeroDelimTopic[23];
  char_T b_zeroDelimName[20];
  char_T b_zeroDelimTopic_n[17];
  char_T b_zeroDelimTopic_p[16];
  real_T dv2[2];
  real_T timePoints[2];                /* '<S7>/MATLAB Function' */
  char_T b_zeroDelimServiceName[14];
  int8_T tmp_data_l[8];
  boolean_T x_tmp[8];
  real_T Sum;                          /* '<S63>/Sum' */
  real_T Sum_d;                        /* '<S115>/Sum' */
  real_T Sum_f;                        /* '<S167>/Sum' */
  real_T b_value;
  real_T myNorm;
  real_T scale;
  real_T absxk;
  real_T t;
  real_T delT;
  real_T IntegralGain;                 /* '<S155>/Integral Gain' */
  real_T UngainTsProdOut_k;            /* '<S120>/Ungain*Ts Prod Out' */
  real_T FilterCoefficient;            /* '<S161>/Filter Coefficient' */
  real_T tmp1;
  real_T prod;
  real_T lowerright_d;
  real_T lowerright_g;
  real_T lowerright_l;
  real_T normA;
  real_T absrexk;
  real_T temp;
  real_T s;
  real_T smax;
  real_T s_d;
  real_T temp_d;
  real_T wj;
  real_T scale_l;
  real_T absxk_o;
  real_T t_b;
  real_T smax_n;
  real_T scale_b;
  real_T absxk_l;
  real_T t_h;
  real_T smax_b;
  real_T smax_d;
  real_T a;
  SL_Bus_trajGen_std_msgs_Bool In1_g;  /* '<S12>/In1' */
  int32_T R_size[2];
  int32_T R_size_j[2];
  int32_T b_k;
  int32_T loop_ub;
  int32_T b;
  int32_T c;
  int32_T e;
  int32_T nz;
  int32_T row;
  int32_T col;
  int32_T powerTerm;
  int32_T loop_ub_e;
  int32_T waypoints_tmp;
  int32_T tmp_size_idx_0;
  int32_T iter;
  int32_T kase;
  int32_T jump;
  int32_T j;
  int32_T jA;
  int32_T rankA;
  int32_T mn;
  int32_T m;
  int32_T i;
  int32_T kAcol;
  int32_T k;
  int32_T ii;
  int32_T nmi;
  int32_T pvt;
  boolean_T FixPtRelationalOperator;   /* '<S13>/FixPt Relational Operator' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_trajGen_T {
  shared_uav_rst_sluav_internal_T obj;
                                 /* '<S7>/Minimum Jerk Polynomial Trajectory' */
  ros_slros_internal_block_GetP_T obj_p;/* '<Root>/Get Parameter1' */
  ros_slros_internal_block_GetP_T obj_d;/* '<Root>/Get Parameter' */
  ros_slroscpp_internal_block_S_T obj_a;/* '<S2>/ServiceCaller' */
  ros_slroscpp_internal_block_P_T obj_k;/* '<S4>/SinkBlock' */
  ros_slroscpp_internal_block_p_T obj_o;/* '<S9>/SourceBlock' */
  ros_slroscpp_internal_block_p_T obj_g;/* '<S6>/SourceBlock' */
  ros_slroscpp_internal_block_p_T obj_e;/* '<S5>/SourceBlock' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S7>/Discrete-Time Integrator' */
  real_T Filter_DSTATE;                /* '<S49>/Filter' */
  real_T Integrator_DSTATE;            /* '<S54>/Integrator' */
  real_T Filter_DSTATE_m;              /* '<S101>/Filter' */
  real_T Integrator_DSTATE_p;          /* '<S106>/Integrator' */
  real_T Filter_DSTATE_d;              /* '<S153>/Filter' */
  real_T Integrator_DSTATE_g;          /* '<S158>/Integrator' */
  real_T freq;                   /* '<S7>/Minimum Jerk Polynomial Trajectory' */
  real_T startPosition[3];             /* '<S7>/MATLAB Function1' */
  boolean_T DelayInput1_DSTATE;        /* '<S3>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_i;      /* '<S13>/Delay Input1' */
  int8_T DiscreteTimeIntegrator_PrevRese;/* '<S7>/Discrete-Time Integrator' */
  boolean_T objisempty;                /* '<S9>/SourceBlock' */
  boolean_T objisempty_n;        /* '<S7>/Minimum Jerk Polynomial Trajectory' */
  boolean_T freq_not_empty;      /* '<S7>/Minimum Jerk Polynomial Trajectory' */
  boolean_T startPosition_not_empty;   /* '<S7>/MATLAB Function1' */
  boolean_T objisempty_d;              /* '<S6>/SourceBlock' */
  boolean_T objisempty_j;              /* '<S5>/SourceBlock' */
  boolean_T objisempty_l;              /* '<S4>/SinkBlock' */
  boolean_T objisempty_lb;             /* '<Root>/Get Parameter1' */
  boolean_T objisempty_l0;             /* '<Root>/Get Parameter' */
  boolean_T objisempty_h;              /* '<S2>/ServiceCaller' */
  boolean_T Subsystem_MODE;            /* '<Root>/Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_trajGen_T {
  const char_T *errorStatus;
};

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_trajGen_T trajGen_B;

#ifdef __cplusplus

}

#endif

/* Block states (default storage) */
extern struct DW_trajGen_T trajGen_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  /* Model entry point functions */
  extern void trajGen_initialize(void);
  extern void trajGen_step(void);
  extern void trajGen_terminate(void);

#ifdef __cplusplus

}

#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_trajGen_T *const trajGen_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S7>/Constant2' : Unused code path elimination
 * Block '<Root>/Cast To Boolean' : Eliminate redundant data type conversion
 */

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
 * '<Root>' : 'trajGen'
 * '<S1>'   : 'trajGen/Blank Message'
 * '<S2>'   : 'trajGen/Call Service'
 * '<S3>'   : 'trajGen/Detect Rise Positive'
 * '<S4>'   : 'trajGen/Publish'
 * '<S5>'   : 'trajGen/Subscribe'
 * '<S6>'   : 'trajGen/Subscribe1'
 * '<S7>'   : 'trajGen/Subsystem'
 * '<S8>'   : 'trajGen/control output'
 * '<S9>'   : 'trajGen/position reading'
 * '<S10>'  : 'trajGen/Detect Rise Positive/Positive'
 * '<S11>'  : 'trajGen/Subscribe/Enabled Subsystem'
 * '<S12>'  : 'trajGen/Subscribe1/Enabled Subsystem'
 * '<S13>'  : 'trajGen/Subsystem/Detect Rise Positive'
 * '<S14>'  : 'trajGen/Subsystem/MATLAB Function'
 * '<S15>'  : 'trajGen/Subsystem/MATLAB Function1'
 * '<S16>'  : 'trajGen/Subsystem/X'
 * '<S17>'  : 'trajGen/Subsystem/Y'
 * '<S18>'  : 'trajGen/Subsystem/Z'
 * '<S19>'  : 'trajGen/Subsystem/Detect Rise Positive/Positive'
 * '<S20>'  : 'trajGen/Subsystem/X/Anti-windup'
 * '<S21>'  : 'trajGen/Subsystem/X/D Gain'
 * '<S22>'  : 'trajGen/Subsystem/X/External Derivative'
 * '<S23>'  : 'trajGen/Subsystem/X/Filter'
 * '<S24>'  : 'trajGen/Subsystem/X/Filter ICs'
 * '<S25>'  : 'trajGen/Subsystem/X/I Gain'
 * '<S26>'  : 'trajGen/Subsystem/X/Ideal P Gain'
 * '<S27>'  : 'trajGen/Subsystem/X/Ideal P Gain Fdbk'
 * '<S28>'  : 'trajGen/Subsystem/X/Integrator'
 * '<S29>'  : 'trajGen/Subsystem/X/Integrator ICs'
 * '<S30>'  : 'trajGen/Subsystem/X/N Copy'
 * '<S31>'  : 'trajGen/Subsystem/X/N Gain'
 * '<S32>'  : 'trajGen/Subsystem/X/P Copy'
 * '<S33>'  : 'trajGen/Subsystem/X/Parallel P Gain'
 * '<S34>'  : 'trajGen/Subsystem/X/Reset Signal'
 * '<S35>'  : 'trajGen/Subsystem/X/Saturation'
 * '<S36>'  : 'trajGen/Subsystem/X/Saturation Fdbk'
 * '<S37>'  : 'trajGen/Subsystem/X/Sum'
 * '<S38>'  : 'trajGen/Subsystem/X/Sum Fdbk'
 * '<S39>'  : 'trajGen/Subsystem/X/Tracking Mode'
 * '<S40>'  : 'trajGen/Subsystem/X/Tracking Mode Sum'
 * '<S41>'  : 'trajGen/Subsystem/X/Tsamp - Integral'
 * '<S42>'  : 'trajGen/Subsystem/X/Tsamp - Ngain'
 * '<S43>'  : 'trajGen/Subsystem/X/postSat Signal'
 * '<S44>'  : 'trajGen/Subsystem/X/preInt Signal'
 * '<S45>'  : 'trajGen/Subsystem/X/preSat Signal'
 * '<S46>'  : 'trajGen/Subsystem/X/Anti-windup/Passthrough'
 * '<S47>'  : 'trajGen/Subsystem/X/D Gain/Internal Parameters'
 * '<S48>'  : 'trajGen/Subsystem/X/External Derivative/Error'
 * '<S49>'  : 'trajGen/Subsystem/X/Filter/Disc. Forward Euler Filter'
 * '<S50>'  : 'trajGen/Subsystem/X/Filter ICs/Internal IC - Filter'
 * '<S51>'  : 'trajGen/Subsystem/X/I Gain/Internal Parameters'
 * '<S52>'  : 'trajGen/Subsystem/X/Ideal P Gain/Passthrough'
 * '<S53>'  : 'trajGen/Subsystem/X/Ideal P Gain Fdbk/Disabled'
 * '<S54>'  : 'trajGen/Subsystem/X/Integrator/Discrete'
 * '<S55>'  : 'trajGen/Subsystem/X/Integrator ICs/Internal IC'
 * '<S56>'  : 'trajGen/Subsystem/X/N Copy/Disabled'
 * '<S57>'  : 'trajGen/Subsystem/X/N Gain/Internal Parameters'
 * '<S58>'  : 'trajGen/Subsystem/X/P Copy/Disabled'
 * '<S59>'  : 'trajGen/Subsystem/X/Parallel P Gain/Internal Parameters'
 * '<S60>'  : 'trajGen/Subsystem/X/Reset Signal/Disabled'
 * '<S61>'  : 'trajGen/Subsystem/X/Saturation/Passthrough'
 * '<S62>'  : 'trajGen/Subsystem/X/Saturation Fdbk/Disabled'
 * '<S63>'  : 'trajGen/Subsystem/X/Sum/Sum_PID'
 * '<S64>'  : 'trajGen/Subsystem/X/Sum Fdbk/Disabled'
 * '<S65>'  : 'trajGen/Subsystem/X/Tracking Mode/Disabled'
 * '<S66>'  : 'trajGen/Subsystem/X/Tracking Mode Sum/Passthrough'
 * '<S67>'  : 'trajGen/Subsystem/X/Tsamp - Integral/External Ts'
 * '<S68>'  : 'trajGen/Subsystem/X/Tsamp - Ngain/External Ts'
 * '<S69>'  : 'trajGen/Subsystem/X/postSat Signal/Forward_Path'
 * '<S70>'  : 'trajGen/Subsystem/X/preInt Signal/Internal PreInt'
 * '<S71>'  : 'trajGen/Subsystem/X/preSat Signal/Forward_Path'
 * '<S72>'  : 'trajGen/Subsystem/Y/Anti-windup'
 * '<S73>'  : 'trajGen/Subsystem/Y/D Gain'
 * '<S74>'  : 'trajGen/Subsystem/Y/External Derivative'
 * '<S75>'  : 'trajGen/Subsystem/Y/Filter'
 * '<S76>'  : 'trajGen/Subsystem/Y/Filter ICs'
 * '<S77>'  : 'trajGen/Subsystem/Y/I Gain'
 * '<S78>'  : 'trajGen/Subsystem/Y/Ideal P Gain'
 * '<S79>'  : 'trajGen/Subsystem/Y/Ideal P Gain Fdbk'
 * '<S80>'  : 'trajGen/Subsystem/Y/Integrator'
 * '<S81>'  : 'trajGen/Subsystem/Y/Integrator ICs'
 * '<S82>'  : 'trajGen/Subsystem/Y/N Copy'
 * '<S83>'  : 'trajGen/Subsystem/Y/N Gain'
 * '<S84>'  : 'trajGen/Subsystem/Y/P Copy'
 * '<S85>'  : 'trajGen/Subsystem/Y/Parallel P Gain'
 * '<S86>'  : 'trajGen/Subsystem/Y/Reset Signal'
 * '<S87>'  : 'trajGen/Subsystem/Y/Saturation'
 * '<S88>'  : 'trajGen/Subsystem/Y/Saturation Fdbk'
 * '<S89>'  : 'trajGen/Subsystem/Y/Sum'
 * '<S90>'  : 'trajGen/Subsystem/Y/Sum Fdbk'
 * '<S91>'  : 'trajGen/Subsystem/Y/Tracking Mode'
 * '<S92>'  : 'trajGen/Subsystem/Y/Tracking Mode Sum'
 * '<S93>'  : 'trajGen/Subsystem/Y/Tsamp - Integral'
 * '<S94>'  : 'trajGen/Subsystem/Y/Tsamp - Ngain'
 * '<S95>'  : 'trajGen/Subsystem/Y/postSat Signal'
 * '<S96>'  : 'trajGen/Subsystem/Y/preInt Signal'
 * '<S97>'  : 'trajGen/Subsystem/Y/preSat Signal'
 * '<S98>'  : 'trajGen/Subsystem/Y/Anti-windup/Passthrough'
 * '<S99>'  : 'trajGen/Subsystem/Y/D Gain/Internal Parameters'
 * '<S100>' : 'trajGen/Subsystem/Y/External Derivative/Error'
 * '<S101>' : 'trajGen/Subsystem/Y/Filter/Disc. Forward Euler Filter'
 * '<S102>' : 'trajGen/Subsystem/Y/Filter ICs/Internal IC - Filter'
 * '<S103>' : 'trajGen/Subsystem/Y/I Gain/Internal Parameters'
 * '<S104>' : 'trajGen/Subsystem/Y/Ideal P Gain/Passthrough'
 * '<S105>' : 'trajGen/Subsystem/Y/Ideal P Gain Fdbk/Disabled'
 * '<S106>' : 'trajGen/Subsystem/Y/Integrator/Discrete'
 * '<S107>' : 'trajGen/Subsystem/Y/Integrator ICs/Internal IC'
 * '<S108>' : 'trajGen/Subsystem/Y/N Copy/Disabled'
 * '<S109>' : 'trajGen/Subsystem/Y/N Gain/Internal Parameters'
 * '<S110>' : 'trajGen/Subsystem/Y/P Copy/Disabled'
 * '<S111>' : 'trajGen/Subsystem/Y/Parallel P Gain/Internal Parameters'
 * '<S112>' : 'trajGen/Subsystem/Y/Reset Signal/Disabled'
 * '<S113>' : 'trajGen/Subsystem/Y/Saturation/Passthrough'
 * '<S114>' : 'trajGen/Subsystem/Y/Saturation Fdbk/Disabled'
 * '<S115>' : 'trajGen/Subsystem/Y/Sum/Sum_PID'
 * '<S116>' : 'trajGen/Subsystem/Y/Sum Fdbk/Disabled'
 * '<S117>' : 'trajGen/Subsystem/Y/Tracking Mode/Disabled'
 * '<S118>' : 'trajGen/Subsystem/Y/Tracking Mode Sum/Passthrough'
 * '<S119>' : 'trajGen/Subsystem/Y/Tsamp - Integral/External Ts'
 * '<S120>' : 'trajGen/Subsystem/Y/Tsamp - Ngain/External Ts'
 * '<S121>' : 'trajGen/Subsystem/Y/postSat Signal/Forward_Path'
 * '<S122>' : 'trajGen/Subsystem/Y/preInt Signal/Internal PreInt'
 * '<S123>' : 'trajGen/Subsystem/Y/preSat Signal/Forward_Path'
 * '<S124>' : 'trajGen/Subsystem/Z/Anti-windup'
 * '<S125>' : 'trajGen/Subsystem/Z/D Gain'
 * '<S126>' : 'trajGen/Subsystem/Z/External Derivative'
 * '<S127>' : 'trajGen/Subsystem/Z/Filter'
 * '<S128>' : 'trajGen/Subsystem/Z/Filter ICs'
 * '<S129>' : 'trajGen/Subsystem/Z/I Gain'
 * '<S130>' : 'trajGen/Subsystem/Z/Ideal P Gain'
 * '<S131>' : 'trajGen/Subsystem/Z/Ideal P Gain Fdbk'
 * '<S132>' : 'trajGen/Subsystem/Z/Integrator'
 * '<S133>' : 'trajGen/Subsystem/Z/Integrator ICs'
 * '<S134>' : 'trajGen/Subsystem/Z/N Copy'
 * '<S135>' : 'trajGen/Subsystem/Z/N Gain'
 * '<S136>' : 'trajGen/Subsystem/Z/P Copy'
 * '<S137>' : 'trajGen/Subsystem/Z/Parallel P Gain'
 * '<S138>' : 'trajGen/Subsystem/Z/Reset Signal'
 * '<S139>' : 'trajGen/Subsystem/Z/Saturation'
 * '<S140>' : 'trajGen/Subsystem/Z/Saturation Fdbk'
 * '<S141>' : 'trajGen/Subsystem/Z/Sum'
 * '<S142>' : 'trajGen/Subsystem/Z/Sum Fdbk'
 * '<S143>' : 'trajGen/Subsystem/Z/Tracking Mode'
 * '<S144>' : 'trajGen/Subsystem/Z/Tracking Mode Sum'
 * '<S145>' : 'trajGen/Subsystem/Z/Tsamp - Integral'
 * '<S146>' : 'trajGen/Subsystem/Z/Tsamp - Ngain'
 * '<S147>' : 'trajGen/Subsystem/Z/postSat Signal'
 * '<S148>' : 'trajGen/Subsystem/Z/preInt Signal'
 * '<S149>' : 'trajGen/Subsystem/Z/preSat Signal'
 * '<S150>' : 'trajGen/Subsystem/Z/Anti-windup/Passthrough'
 * '<S151>' : 'trajGen/Subsystem/Z/D Gain/Internal Parameters'
 * '<S152>' : 'trajGen/Subsystem/Z/External Derivative/Error'
 * '<S153>' : 'trajGen/Subsystem/Z/Filter/Disc. Forward Euler Filter'
 * '<S154>' : 'trajGen/Subsystem/Z/Filter ICs/Internal IC - Filter'
 * '<S155>' : 'trajGen/Subsystem/Z/I Gain/Internal Parameters'
 * '<S156>' : 'trajGen/Subsystem/Z/Ideal P Gain/Passthrough'
 * '<S157>' : 'trajGen/Subsystem/Z/Ideal P Gain Fdbk/Disabled'
 * '<S158>' : 'trajGen/Subsystem/Z/Integrator/Discrete'
 * '<S159>' : 'trajGen/Subsystem/Z/Integrator ICs/Internal IC'
 * '<S160>' : 'trajGen/Subsystem/Z/N Copy/Disabled'
 * '<S161>' : 'trajGen/Subsystem/Z/N Gain/Internal Parameters'
 * '<S162>' : 'trajGen/Subsystem/Z/P Copy/Disabled'
 * '<S163>' : 'trajGen/Subsystem/Z/Parallel P Gain/Internal Parameters'
 * '<S164>' : 'trajGen/Subsystem/Z/Reset Signal/Disabled'
 * '<S165>' : 'trajGen/Subsystem/Z/Saturation/Passthrough'
 * '<S166>' : 'trajGen/Subsystem/Z/Saturation Fdbk/Disabled'
 * '<S167>' : 'trajGen/Subsystem/Z/Sum/Sum_PID'
 * '<S168>' : 'trajGen/Subsystem/Z/Sum Fdbk/Disabled'
 * '<S169>' : 'trajGen/Subsystem/Z/Tracking Mode/Disabled'
 * '<S170>' : 'trajGen/Subsystem/Z/Tracking Mode Sum/Passthrough'
 * '<S171>' : 'trajGen/Subsystem/Z/Tsamp - Integral/External Ts'
 * '<S172>' : 'trajGen/Subsystem/Z/Tsamp - Ngain/External Ts'
 * '<S173>' : 'trajGen/Subsystem/Z/postSat Signal/Forward_Path'
 * '<S174>' : 'trajGen/Subsystem/Z/preInt Signal/Internal PreInt'
 * '<S175>' : 'trajGen/Subsystem/Z/preSat Signal/Forward_Path'
 * '<S176>' : 'trajGen/position reading/Enabled Subsystem'
 */
#endif                                 /* trajGen_h_ */
