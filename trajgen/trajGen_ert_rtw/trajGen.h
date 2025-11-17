/*
 * trajGen.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "trajGen".
 *
 * Model version              : 1.12
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 * C++ source code generated on : Tue Nov 18 01:55:20 2025
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
  SL_Bus_trajGen_nav_msgs_Odometry In1;/* '<S172>/In1' */
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
  SL_Bus_trajGen_geometry_msgs_Point In1_c;/* '<S9>/In1' */
  SL_Bus_trajGen_geometry_msgs_Point rtb_SourceBlock_o2_c_m;
  real_T Transpose1[3];                /* '<S5>/Transpose1' */
  char_T b_zeroDelimTopic[23];
  char_T b_zeroDelimTopic_n[17];
  char_T b_zeroDelimTopic_p[16];
  real_T dv2[2];
  real_T timePoints[2];                /* '<S5>/MATLAB Function' */
  int8_T tmp_data_l[8];
  boolean_T x_tmp[8];
  real_T Sum;                          /* '<S59>/Sum' */
  real_T Sum_d;                        /* '<S111>/Sum' */
  real_T Sum_f;                        /* '<S163>/Sum' */
  real_T delT;
  real_T FilterCoefficient;            /* '<S53>/Filter Coefficient' */
  real_T IntegralGain;                 /* '<S47>/Integral Gain' */
  real_T FilterCoefficient_m;          /* '<S105>/Filter Coefficient' */
  real_T IntegralGain_j;               /* '<S99>/Integral Gain' */
  real_T FilterCoefficient_g;          /* '<S157>/Filter Coefficient' */
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
  real_T wj;
  real_T scale;
  real_T absxk;
  real_T t;
  real_T smax_d;
  real_T scale_l;
  real_T absxk_o;
  real_T t_b;
  real_T smax_n;
  real_T a;
  real_T smax_b;
  SL_Bus_trajGen_std_msgs_Bool In1_g;  /* '<S10>/In1' */
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
  int32_T loop_ub_l;
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
};

/* Block states (default storage) for system '<Root>' */
struct DW_trajGen_T {
  shared_uav_rst_sluav_internal_T obj;
                                 /* '<S5>/Minimum Jerk Polynomial Trajectory' */
  ros_slros_internal_block_GetP_T obj_d;/* '<Root>/Get Parameter' */
  ros_slroscpp_internal_block_P_T obj_k;/* '<S2>/SinkBlock' */
  ros_slroscpp_internal_block_S_T obj_o;/* '<S7>/SourceBlock' */
  ros_slroscpp_internal_block_S_T obj_g;/* '<S4>/SourceBlock' */
  ros_slroscpp_internal_block_S_T obj_e;/* '<S3>/SourceBlock' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S5>/Discrete-Time Integrator' */
  real_T Filter_DSTATE;                /* '<S45>/Filter' */
  real_T Integrator_DSTATE;            /* '<S50>/Integrator' */
  real_T Filter_DSTATE_m;              /* '<S97>/Filter' */
  real_T Integrator_DSTATE_p;          /* '<S102>/Integrator' */
  real_T Filter_DSTATE_d;              /* '<S149>/Filter' */
  real_T Integrator_DSTATE_g;          /* '<S154>/Integrator' */
  real_T freq;                   /* '<S5>/Minimum Jerk Polynomial Trajectory' */
  real_T startPosition[3];             /* '<S5>/MATLAB Function1' */
  boolean_T DelayInput1_DSTATE;        /* '<S1>/Delay Input1' */
  int8_T DiscreteTimeIntegrator_PrevRese;/* '<S5>/Discrete-Time Integrator' */
  boolean_T objisempty;                /* '<S7>/SourceBlock' */
  boolean_T objisempty_n;        /* '<S5>/Minimum Jerk Polynomial Trajectory' */
  boolean_T freq_not_empty;      /* '<S5>/Minimum Jerk Polynomial Trajectory' */
  boolean_T startPosition_not_empty;   /* '<S5>/MATLAB Function1' */
  boolean_T objisempty_d;              /* '<S4>/SourceBlock' */
  boolean_T objisempty_j;              /* '<S3>/SourceBlock' */
  boolean_T objisempty_l;              /* '<S2>/SinkBlock' */
  boolean_T objisempty_l0;             /* '<Root>/Get Parameter' */
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
 * '<S1>'   : 'trajGen/Detect Rise Positive'
 * '<S2>'   : 'trajGen/Publish'
 * '<S3>'   : 'trajGen/Subscribe'
 * '<S4>'   : 'trajGen/Subscribe1'
 * '<S5>'   : 'trajGen/Subsystem'
 * '<S6>'   : 'trajGen/control output'
 * '<S7>'   : 'trajGen/position reading'
 * '<S8>'   : 'trajGen/Detect Rise Positive/Positive'
 * '<S9>'   : 'trajGen/Subscribe/Enabled Subsystem'
 * '<S10>'  : 'trajGen/Subscribe1/Enabled Subsystem'
 * '<S11>'  : 'trajGen/Subsystem/MATLAB Function'
 * '<S12>'  : 'trajGen/Subsystem/MATLAB Function1'
 * '<S13>'  : 'trajGen/Subsystem/X'
 * '<S14>'  : 'trajGen/Subsystem/Y'
 * '<S15>'  : 'trajGen/Subsystem/Z'
 * '<S16>'  : 'trajGen/Subsystem/X/Anti-windup'
 * '<S17>'  : 'trajGen/Subsystem/X/D Gain'
 * '<S18>'  : 'trajGen/Subsystem/X/External Derivative'
 * '<S19>'  : 'trajGen/Subsystem/X/Filter'
 * '<S20>'  : 'trajGen/Subsystem/X/Filter ICs'
 * '<S21>'  : 'trajGen/Subsystem/X/I Gain'
 * '<S22>'  : 'trajGen/Subsystem/X/Ideal P Gain'
 * '<S23>'  : 'trajGen/Subsystem/X/Ideal P Gain Fdbk'
 * '<S24>'  : 'trajGen/Subsystem/X/Integrator'
 * '<S25>'  : 'trajGen/Subsystem/X/Integrator ICs'
 * '<S26>'  : 'trajGen/Subsystem/X/N Copy'
 * '<S27>'  : 'trajGen/Subsystem/X/N Gain'
 * '<S28>'  : 'trajGen/Subsystem/X/P Copy'
 * '<S29>'  : 'trajGen/Subsystem/X/Parallel P Gain'
 * '<S30>'  : 'trajGen/Subsystem/X/Reset Signal'
 * '<S31>'  : 'trajGen/Subsystem/X/Saturation'
 * '<S32>'  : 'trajGen/Subsystem/X/Saturation Fdbk'
 * '<S33>'  : 'trajGen/Subsystem/X/Sum'
 * '<S34>'  : 'trajGen/Subsystem/X/Sum Fdbk'
 * '<S35>'  : 'trajGen/Subsystem/X/Tracking Mode'
 * '<S36>'  : 'trajGen/Subsystem/X/Tracking Mode Sum'
 * '<S37>'  : 'trajGen/Subsystem/X/Tsamp - Integral'
 * '<S38>'  : 'trajGen/Subsystem/X/Tsamp - Ngain'
 * '<S39>'  : 'trajGen/Subsystem/X/postSat Signal'
 * '<S40>'  : 'trajGen/Subsystem/X/preInt Signal'
 * '<S41>'  : 'trajGen/Subsystem/X/preSat Signal'
 * '<S42>'  : 'trajGen/Subsystem/X/Anti-windup/Passthrough'
 * '<S43>'  : 'trajGen/Subsystem/X/D Gain/Internal Parameters'
 * '<S44>'  : 'trajGen/Subsystem/X/External Derivative/Error'
 * '<S45>'  : 'trajGen/Subsystem/X/Filter/Disc. Forward Euler Filter'
 * '<S46>'  : 'trajGen/Subsystem/X/Filter ICs/Internal IC - Filter'
 * '<S47>'  : 'trajGen/Subsystem/X/I Gain/Internal Parameters'
 * '<S48>'  : 'trajGen/Subsystem/X/Ideal P Gain/Passthrough'
 * '<S49>'  : 'trajGen/Subsystem/X/Ideal P Gain Fdbk/Disabled'
 * '<S50>'  : 'trajGen/Subsystem/X/Integrator/Discrete'
 * '<S51>'  : 'trajGen/Subsystem/X/Integrator ICs/Internal IC'
 * '<S52>'  : 'trajGen/Subsystem/X/N Copy/Disabled'
 * '<S53>'  : 'trajGen/Subsystem/X/N Gain/Internal Parameters'
 * '<S54>'  : 'trajGen/Subsystem/X/P Copy/Disabled'
 * '<S55>'  : 'trajGen/Subsystem/X/Parallel P Gain/Internal Parameters'
 * '<S56>'  : 'trajGen/Subsystem/X/Reset Signal/Disabled'
 * '<S57>'  : 'trajGen/Subsystem/X/Saturation/Passthrough'
 * '<S58>'  : 'trajGen/Subsystem/X/Saturation Fdbk/Disabled'
 * '<S59>'  : 'trajGen/Subsystem/X/Sum/Sum_PID'
 * '<S60>'  : 'trajGen/Subsystem/X/Sum Fdbk/Disabled'
 * '<S61>'  : 'trajGen/Subsystem/X/Tracking Mode/Disabled'
 * '<S62>'  : 'trajGen/Subsystem/X/Tracking Mode Sum/Passthrough'
 * '<S63>'  : 'trajGen/Subsystem/X/Tsamp - Integral/TsSignalSpecification'
 * '<S64>'  : 'trajGen/Subsystem/X/Tsamp - Ngain/Passthrough'
 * '<S65>'  : 'trajGen/Subsystem/X/postSat Signal/Forward_Path'
 * '<S66>'  : 'trajGen/Subsystem/X/preInt Signal/Internal PreInt'
 * '<S67>'  : 'trajGen/Subsystem/X/preSat Signal/Forward_Path'
 * '<S68>'  : 'trajGen/Subsystem/Y/Anti-windup'
 * '<S69>'  : 'trajGen/Subsystem/Y/D Gain'
 * '<S70>'  : 'trajGen/Subsystem/Y/External Derivative'
 * '<S71>'  : 'trajGen/Subsystem/Y/Filter'
 * '<S72>'  : 'trajGen/Subsystem/Y/Filter ICs'
 * '<S73>'  : 'trajGen/Subsystem/Y/I Gain'
 * '<S74>'  : 'trajGen/Subsystem/Y/Ideal P Gain'
 * '<S75>'  : 'trajGen/Subsystem/Y/Ideal P Gain Fdbk'
 * '<S76>'  : 'trajGen/Subsystem/Y/Integrator'
 * '<S77>'  : 'trajGen/Subsystem/Y/Integrator ICs'
 * '<S78>'  : 'trajGen/Subsystem/Y/N Copy'
 * '<S79>'  : 'trajGen/Subsystem/Y/N Gain'
 * '<S80>'  : 'trajGen/Subsystem/Y/P Copy'
 * '<S81>'  : 'trajGen/Subsystem/Y/Parallel P Gain'
 * '<S82>'  : 'trajGen/Subsystem/Y/Reset Signal'
 * '<S83>'  : 'trajGen/Subsystem/Y/Saturation'
 * '<S84>'  : 'trajGen/Subsystem/Y/Saturation Fdbk'
 * '<S85>'  : 'trajGen/Subsystem/Y/Sum'
 * '<S86>'  : 'trajGen/Subsystem/Y/Sum Fdbk'
 * '<S87>'  : 'trajGen/Subsystem/Y/Tracking Mode'
 * '<S88>'  : 'trajGen/Subsystem/Y/Tracking Mode Sum'
 * '<S89>'  : 'trajGen/Subsystem/Y/Tsamp - Integral'
 * '<S90>'  : 'trajGen/Subsystem/Y/Tsamp - Ngain'
 * '<S91>'  : 'trajGen/Subsystem/Y/postSat Signal'
 * '<S92>'  : 'trajGen/Subsystem/Y/preInt Signal'
 * '<S93>'  : 'trajGen/Subsystem/Y/preSat Signal'
 * '<S94>'  : 'trajGen/Subsystem/Y/Anti-windup/Passthrough'
 * '<S95>'  : 'trajGen/Subsystem/Y/D Gain/Internal Parameters'
 * '<S96>'  : 'trajGen/Subsystem/Y/External Derivative/Error'
 * '<S97>'  : 'trajGen/Subsystem/Y/Filter/Disc. Forward Euler Filter'
 * '<S98>'  : 'trajGen/Subsystem/Y/Filter ICs/Internal IC - Filter'
 * '<S99>'  : 'trajGen/Subsystem/Y/I Gain/Internal Parameters'
 * '<S100>' : 'trajGen/Subsystem/Y/Ideal P Gain/Passthrough'
 * '<S101>' : 'trajGen/Subsystem/Y/Ideal P Gain Fdbk/Disabled'
 * '<S102>' : 'trajGen/Subsystem/Y/Integrator/Discrete'
 * '<S103>' : 'trajGen/Subsystem/Y/Integrator ICs/Internal IC'
 * '<S104>' : 'trajGen/Subsystem/Y/N Copy/Disabled'
 * '<S105>' : 'trajGen/Subsystem/Y/N Gain/Internal Parameters'
 * '<S106>' : 'trajGen/Subsystem/Y/P Copy/Disabled'
 * '<S107>' : 'trajGen/Subsystem/Y/Parallel P Gain/Internal Parameters'
 * '<S108>' : 'trajGen/Subsystem/Y/Reset Signal/Disabled'
 * '<S109>' : 'trajGen/Subsystem/Y/Saturation/Passthrough'
 * '<S110>' : 'trajGen/Subsystem/Y/Saturation Fdbk/Disabled'
 * '<S111>' : 'trajGen/Subsystem/Y/Sum/Sum_PID'
 * '<S112>' : 'trajGen/Subsystem/Y/Sum Fdbk/Disabled'
 * '<S113>' : 'trajGen/Subsystem/Y/Tracking Mode/Disabled'
 * '<S114>' : 'trajGen/Subsystem/Y/Tracking Mode Sum/Passthrough'
 * '<S115>' : 'trajGen/Subsystem/Y/Tsamp - Integral/TsSignalSpecification'
 * '<S116>' : 'trajGen/Subsystem/Y/Tsamp - Ngain/Passthrough'
 * '<S117>' : 'trajGen/Subsystem/Y/postSat Signal/Forward_Path'
 * '<S118>' : 'trajGen/Subsystem/Y/preInt Signal/Internal PreInt'
 * '<S119>' : 'trajGen/Subsystem/Y/preSat Signal/Forward_Path'
 * '<S120>' : 'trajGen/Subsystem/Z/Anti-windup'
 * '<S121>' : 'trajGen/Subsystem/Z/D Gain'
 * '<S122>' : 'trajGen/Subsystem/Z/External Derivative'
 * '<S123>' : 'trajGen/Subsystem/Z/Filter'
 * '<S124>' : 'trajGen/Subsystem/Z/Filter ICs'
 * '<S125>' : 'trajGen/Subsystem/Z/I Gain'
 * '<S126>' : 'trajGen/Subsystem/Z/Ideal P Gain'
 * '<S127>' : 'trajGen/Subsystem/Z/Ideal P Gain Fdbk'
 * '<S128>' : 'trajGen/Subsystem/Z/Integrator'
 * '<S129>' : 'trajGen/Subsystem/Z/Integrator ICs'
 * '<S130>' : 'trajGen/Subsystem/Z/N Copy'
 * '<S131>' : 'trajGen/Subsystem/Z/N Gain'
 * '<S132>' : 'trajGen/Subsystem/Z/P Copy'
 * '<S133>' : 'trajGen/Subsystem/Z/Parallel P Gain'
 * '<S134>' : 'trajGen/Subsystem/Z/Reset Signal'
 * '<S135>' : 'trajGen/Subsystem/Z/Saturation'
 * '<S136>' : 'trajGen/Subsystem/Z/Saturation Fdbk'
 * '<S137>' : 'trajGen/Subsystem/Z/Sum'
 * '<S138>' : 'trajGen/Subsystem/Z/Sum Fdbk'
 * '<S139>' : 'trajGen/Subsystem/Z/Tracking Mode'
 * '<S140>' : 'trajGen/Subsystem/Z/Tracking Mode Sum'
 * '<S141>' : 'trajGen/Subsystem/Z/Tsamp - Integral'
 * '<S142>' : 'trajGen/Subsystem/Z/Tsamp - Ngain'
 * '<S143>' : 'trajGen/Subsystem/Z/postSat Signal'
 * '<S144>' : 'trajGen/Subsystem/Z/preInt Signal'
 * '<S145>' : 'trajGen/Subsystem/Z/preSat Signal'
 * '<S146>' : 'trajGen/Subsystem/Z/Anti-windup/Passthrough'
 * '<S147>' : 'trajGen/Subsystem/Z/D Gain/Internal Parameters'
 * '<S148>' : 'trajGen/Subsystem/Z/External Derivative/Error'
 * '<S149>' : 'trajGen/Subsystem/Z/Filter/Disc. Forward Euler Filter'
 * '<S150>' : 'trajGen/Subsystem/Z/Filter ICs/Internal IC - Filter'
 * '<S151>' : 'trajGen/Subsystem/Z/I Gain/Internal Parameters'
 * '<S152>' : 'trajGen/Subsystem/Z/Ideal P Gain/Passthrough'
 * '<S153>' : 'trajGen/Subsystem/Z/Ideal P Gain Fdbk/Disabled'
 * '<S154>' : 'trajGen/Subsystem/Z/Integrator/Discrete'
 * '<S155>' : 'trajGen/Subsystem/Z/Integrator ICs/Internal IC'
 * '<S156>' : 'trajGen/Subsystem/Z/N Copy/Disabled'
 * '<S157>' : 'trajGen/Subsystem/Z/N Gain/Internal Parameters'
 * '<S158>' : 'trajGen/Subsystem/Z/P Copy/Disabled'
 * '<S159>' : 'trajGen/Subsystem/Z/Parallel P Gain/Internal Parameters'
 * '<S160>' : 'trajGen/Subsystem/Z/Reset Signal/Disabled'
 * '<S161>' : 'trajGen/Subsystem/Z/Saturation/Passthrough'
 * '<S162>' : 'trajGen/Subsystem/Z/Saturation Fdbk/Disabled'
 * '<S163>' : 'trajGen/Subsystem/Z/Sum/Sum_PID'
 * '<S164>' : 'trajGen/Subsystem/Z/Sum Fdbk/Disabled'
 * '<S165>' : 'trajGen/Subsystem/Z/Tracking Mode/Disabled'
 * '<S166>' : 'trajGen/Subsystem/Z/Tracking Mode Sum/Passthrough'
 * '<S167>' : 'trajGen/Subsystem/Z/Tsamp - Integral/TsSignalSpecification'
 * '<S168>' : 'trajGen/Subsystem/Z/Tsamp - Ngain/Passthrough'
 * '<S169>' : 'trajGen/Subsystem/Z/postSat Signal/Forward_Path'
 * '<S170>' : 'trajGen/Subsystem/Z/preInt Signal/Internal PreInt'
 * '<S171>' : 'trajGen/Subsystem/Z/preSat Signal/Forward_Path'
 * '<S172>' : 'trajGen/position reading/Enabled Subsystem'
 */
#endif                                 /* trajGen_h_ */
