/*
 * pid_v1.cpp
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

#include "pid_v1.h"
#include "rtwtypes.h"
#include <cstring>

/* Block signals (default storage) */
B_pid_v1_T pid_v1_B;

/* Block states (default storage) */
DW_pid_v1_T pid_v1_DW;

/* External inputs (root inport signals with default storage) */
ExtU_pid_v1_T pid_v1_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_pid_v1_T pid_v1_Y;

/* Real-time model */
RT_MODEL_pid_v1_T pid_v1_M_{ };

RT_MODEL_pid_v1_T *const pid_v1_M{ &pid_v1_M_ };

/* Model step function */
void pid_v1_step(void)
{
  real_T rtb_Filter;
  real_T rtb_FilterCoefficient;
  real_T rtb_FilterCoefficient_e;
  real_T rtb_FilterCoefficient_n;
  real_T rtb_Filter_m;
  real_T rtb_Filter_n;
  boolean_T b_varargout_1;

  /* BusAssignment: '<Root>/Bus Assignment' incorporates:
   *  Constant: '<S6>/Constant'
   */
  pid_v1_B.BusAssignment = pid_v1_P.Constant_Value_o;

  /* Outputs for Atomic SubSystem: '<Root>/Subscribe' */
  /* MATLABSystem: '<S2>/SourceBlock' */
  b_varargout_1 = Sub_pid_v1_244.getLatestMessage
    (&pid_v1_B.rtb_SourceBlock_o2_i_c);

  /* Outputs for Enabled SubSystem: '<S2>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S8>/Enable'
   */
  /* Start for MATLABSystem: '<S2>/SourceBlock' */
  if (b_varargout_1) {
    /* SignalConversion generated from: '<S8>/In1' */
    pid_v1_B.In1_h = pid_v1_B.rtb_SourceBlock_o2_i_c;
  }

  /* End of Start for MATLABSystem: '<S2>/SourceBlock' */
  /* End of Outputs for SubSystem: '<S2>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subscribe' */

  /* Outputs for Atomic SubSystem: '<Root>/position reading' */
  /* MATLABSystem: '<S7>/SourceBlock' */
  b_varargout_1 = Sub_pid_v1_1.getLatestMessage(&pid_v1_B.rtb_SourceBlock_o2_m);

  /* Outputs for Enabled SubSystem: '<S7>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S165>/Enable'
   */
  /* Start for MATLABSystem: '<S7>/SourceBlock' */
  if (b_varargout_1) {
    /* SignalConversion generated from: '<S165>/In1' */
    pid_v1_B.In1 = pid_v1_B.rtb_SourceBlock_o2_m;
  }

  /* End of Start for MATLABSystem: '<S7>/SourceBlock' */
  /* End of Outputs for SubSystem: '<S7>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/position reading' */

  /* Sum: '<Root>/Sum' incorporates:
   *  SignalConversion generated from: '<Root>/Transpose'
   */
  rtb_Filter = pid_v1_B.In1_h.X - pid_v1_B.In1.Pose.Pose.Position.X;

  /* Gain: '<S46>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S38>/Filter'
   *  Gain: '<S36>/Derivative Gain'
   *  Sum: '<S38>/SumD'
   */
  rtb_FilterCoefficient = (pid_v1_P.X_D * rtb_Filter - pid_v1_DW.Filter_DSTATE) *
    pid_v1_P.X_N;

  /* Sum: '<Root>/Sum1' incorporates:
   *  SignalConversion generated from: '<Root>/Transpose'
   */
  rtb_Filter_n = pid_v1_B.In1_h.Y - pid_v1_B.In1.Pose.Pose.Position.Y;

  /* Gain: '<S98>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S90>/Filter'
   *  Gain: '<S88>/Derivative Gain'
   *  Sum: '<S90>/SumD'
   */
  rtb_FilterCoefficient_n = (pid_v1_P.Y_D * rtb_Filter_n -
    pid_v1_DW.Filter_DSTATE_a) * pid_v1_P.Y_N;

  /* Sum: '<Root>/Sum2' incorporates:
   *  SignalConversion generated from: '<Root>/Transpose'
   */
  rtb_Filter_m = pid_v1_B.In1_h.Z - pid_v1_B.In1.Pose.Pose.Position.Z;

  /* Gain: '<S150>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S142>/Filter'
   *  Gain: '<S140>/Derivative Gain'
   *  Sum: '<S142>/SumD'
   */
  rtb_FilterCoefficient_e = (pid_v1_P.Z_D * rtb_Filter_m -
    pid_v1_DW.Filter_DSTATE_g) * pid_v1_P.Z_N;

  /* BusAssignment: '<Root>/Bus Assignment' incorporates:
   *  Gain: '<S100>/Proportional Gain'
   *  Gain: '<S152>/Proportional Gain'
   *  Gain: '<S48>/Proportional Gain'
   *  Sum: '<S104>/Sum'
   *  Sum: '<S156>/Sum'
   *  Sum: '<S52>/Sum'
   */
  pid_v1_B.BusAssignment.Linear.X = pid_v1_P.X_P * rtb_Filter +
    rtb_FilterCoefficient;
  pid_v1_B.BusAssignment.Linear.Y = pid_v1_P.Y_P * rtb_Filter_n +
    rtb_FilterCoefficient_n;
  pid_v1_B.BusAssignment.Linear.Z = pid_v1_P.Z_P * rtb_Filter_m +
    rtb_FilterCoefficient_e;

  /* Outputs for Atomic SubSystem: '<Root>/Publish' */
  /* MATLABSystem: '<S1>/SinkBlock' */
  Pub_pid_v1_11.publish(&pid_v1_B.BusAssignment);

  /* End of Outputs for SubSystem: '<Root>/Publish' */

  /* Update for DiscreteIntegrator: '<S38>/Filter' */
  pid_v1_DW.Filter_DSTATE += pid_v1_P.Filter_gainval * rtb_FilterCoefficient;

  /* Update for DiscreteIntegrator: '<S90>/Filter' */
  pid_v1_DW.Filter_DSTATE_a += pid_v1_P.Filter_gainval_l *
    rtb_FilterCoefficient_n;

  /* Update for DiscreteIntegrator: '<S142>/Filter' */
  pid_v1_DW.Filter_DSTATE_g += pid_v1_P.Filter_gainval_e *
    rtb_FilterCoefficient_e;
}

/* Model initialize function */
void pid_v1_initialize(void)
{
  /* Registration code */

  /* block I/O */
  (void) std::memset((static_cast<void *>(&pid_v1_B)), 0,
                     sizeof(B_pid_v1_T));

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&pid_v1_DW), 0,
                     sizeof(DW_pid_v1_T));

  /* external inputs */
  pid_v1_U.In_test_1 = 0.0;

  /* external outputs */
  pid_v1_Y.out_test_1 = 0.0;

  {
    static const char_T b_zeroDelimTopic_3[23]{ "/tagslam/odom/body_rig" };

    static const char_T b_zeroDelimTopic_4[17]{ "/command/cmd_vel" };

    static const char_T b_zeroDelimTopic_2[13]{ "/chase_point" };

    int32_T i;
    char_T b_zeroDelimTopic_0[23];
    char_T b_zeroDelimTopic_1[17];
    char_T b_zeroDelimTopic[13];

    /* Start for Atomic SubSystem: '<Root>/Subscribe' */
    /* Start for MATLABSystem: '<S2>/SourceBlock' */
    pid_v1_DW.obj_n0.matlabCodegenIsDeleted = false;
    pid_v1_DW.objisempty_p = true;
    pid_v1_DW.obj_n0.isInitialized = 1;
    for (i = 0; i < 13; i++) {
      b_zeroDelimTopic[i] = b_zeroDelimTopic_2[i];
    }

    Sub_pid_v1_244.createSubscriber(&b_zeroDelimTopic[0], 1);
    pid_v1_DW.obj_n0.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S2>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe' */

    /* Start for Atomic SubSystem: '<Root>/position reading' */
    /* Start for MATLABSystem: '<S7>/SourceBlock' */
    pid_v1_DW.obj_n.matlabCodegenIsDeleted = false;
    pid_v1_DW.objisempty = true;
    pid_v1_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 23; i++) {
      b_zeroDelimTopic_0[i] = b_zeroDelimTopic_3[i];
    }

    Sub_pid_v1_1.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    pid_v1_DW.obj_n.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S7>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/position reading' */

    /* Start for Atomic SubSystem: '<Root>/Publish' */
    /* Start for MATLABSystem: '<S1>/SinkBlock' */
    pid_v1_DW.obj.matlabCodegenIsDeleted = false;
    pid_v1_DW.objisempty_i = true;
    pid_v1_DW.obj.isInitialized = 1;
    for (i = 0; i < 17; i++) {
      b_zeroDelimTopic_1[i] = b_zeroDelimTopic_4[i];
    }

    Pub_pid_v1_11.createPublisher(&b_zeroDelimTopic_1[0], 1);
    pid_v1_DW.obj.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S1>/SinkBlock' */
    /* End of Start for SubSystem: '<Root>/Publish' */

    /* ConstCode for Outport: '<Root>/out_test_1' */
    pid_v1_Y.out_test_1 = 0.0;
  }

  /* InitializeConditions for DiscreteIntegrator: '<S38>/Filter' */
  pid_v1_DW.Filter_DSTATE = pid_v1_P.X_InitialConditionForFilter;

  /* InitializeConditions for DiscreteIntegrator: '<S90>/Filter' */
  pid_v1_DW.Filter_DSTATE_a = pid_v1_P.Y_InitialConditionForFilter;

  /* InitializeConditions for DiscreteIntegrator: '<S142>/Filter' */
  pid_v1_DW.Filter_DSTATE_g = pid_v1_P.Z_InitialConditionForFilter;

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe' */
  /* SystemInitialize for Enabled SubSystem: '<S2>/Enabled Subsystem' */
  /* SystemInitialize for SignalConversion generated from: '<S8>/In1' incorporates:
   *  Outport: '<S8>/Out1'
   */
  pid_v1_B.In1_h = pid_v1_P.Out1_Y0_e;

  /* End of SystemInitialize for SubSystem: '<S2>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/position reading' */
  /* SystemInitialize for Enabled SubSystem: '<S7>/Enabled Subsystem' */
  /* SystemInitialize for SignalConversion generated from: '<S165>/In1' incorporates:
   *  Outport: '<S165>/Out1'
   */
  pid_v1_B.In1 = pid_v1_P.Out1_Y0;

  /* End of SystemInitialize for SubSystem: '<S7>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/position reading' */
}

/* Model terminate function */
void pid_v1_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/Subscribe' */
  /* Terminate for MATLABSystem: '<S2>/SourceBlock' */
  if (!pid_v1_DW.obj_n0.matlabCodegenIsDeleted) {
    pid_v1_DW.obj_n0.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S2>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/Subscribe' */

  /* Terminate for Atomic SubSystem: '<Root>/position reading' */
  /* Terminate for MATLABSystem: '<S7>/SourceBlock' */
  if (!pid_v1_DW.obj_n.matlabCodegenIsDeleted) {
    pid_v1_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S7>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/position reading' */

  /* Terminate for Atomic SubSystem: '<Root>/Publish' */
  /* Terminate for MATLABSystem: '<S1>/SinkBlock' */
  if (!pid_v1_DW.obj.matlabCodegenIsDeleted) {
    pid_v1_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S1>/SinkBlock' */
  /* End of Terminate for SubSystem: '<Root>/Publish' */
}
