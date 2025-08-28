/*
 * greenhouseHoverTest.cpp
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

#include "greenhouseHoverTest.h"
#include "rtwtypes.h"
#include <string.h>

/* Block signals (default storage) */
B_greenhouseHoverTest_T greenhouseHoverTest_B;

/* Block states (default storage) */
DW_greenhouseHoverTest_T greenhouseHoverTest_DW;

/* Real-time model */
RT_MODEL_greenhouseHoverTest_T greenhouseHoverTest_M_ =
  RT_MODEL_greenhouseHoverTest_T();
RT_MODEL_greenhouseHoverTest_T *const greenhouseHoverTest_M =
  &greenhouseHoverTest_M_;

/* Model step function */
void greenhouseHoverTest_step(void)
{
  real_T rtb_Filter;
  real_T rtb_FilterCoefficient;
  real_T rtb_FilterCoefficient_e;
  real_T rtb_FilterCoefficient_n;
  real_T rtb_Filter_m;
  real_T rtb_Filter_n;
  boolean_T b_varargout_1;

  /* BusAssignment: '<Root>/Bus Assignment' */
  memset(&greenhouseHoverTest_B.BusAssignment, 0, sizeof
         (SL_Bus_greenhouseHoverTest_geometry_msgs_Twist));

  /* Outputs for Atomic SubSystem: '<Root>/position reading' */
  /* MATLABSystem: '<S8>/SourceBlock' */
  b_varargout_1 = Sub_greenhouseHoverTest_1.getLatestMessage
    (&greenhouseHoverTest_B.rtb_SourceBlock_o2_m);

  /* Outputs for Enabled SubSystem: '<S8>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S166>/Enable'
   */
  /* Start for MATLABSystem: '<S8>/SourceBlock' */
  if (b_varargout_1) {
    /* SignalConversion generated from: '<S166>/In1' */
    greenhouseHoverTest_B.In1 = greenhouseHoverTest_B.rtb_SourceBlock_o2_m;
  }

  /* End of Start for MATLABSystem: '<S8>/SourceBlock' */
  /* End of Outputs for SubSystem: '<S8>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/position reading' */

  /* Outputs for Atomic SubSystem: '<Root>/Subscribe' */
  /* MATLABSystem: '<S2>/SourceBlock' */
  b_varargout_1 = Sub_greenhouseHoverTest_244.getLatestMessage
    (&greenhouseHoverTest_B.rtb_SourceBlock_o2_i_c);

  /* Outputs for Enabled SubSystem: '<Root>/Subsystem' incorporates:
   *  EnablePort: '<S3>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S2>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S9>/Enable'
   */
  /* Start for MATLABSystem: '<S2>/SourceBlock' */
  if (b_varargout_1) {
    /* Math: '<S3>/Transpose' incorporates:
     *  SignalConversion generated from: '<S3>/Transpose'
     */
    greenhouseHoverTest_B.Transpose[0] =
      greenhouseHoverTest_B.rtb_SourceBlock_o2_i_c.X;
    greenhouseHoverTest_B.Transpose[1] =
      greenhouseHoverTest_B.rtb_SourceBlock_o2_i_c.Y;
    greenhouseHoverTest_B.Transpose[2] =
      greenhouseHoverTest_B.rtb_SourceBlock_o2_i_c.Z;

    /* SignalConversion generated from: '<S3>/Bus Selector' */
    greenhouseHoverTest_B.X = greenhouseHoverTest_B.In1.Pose.Pose.Position.X;

    /* SignalConversion generated from: '<S3>/Bus Selector' */
    greenhouseHoverTest_B.Y = greenhouseHoverTest_B.In1.Pose.Pose.Position.Y;

    /* SignalConversion generated from: '<S3>/Bus Selector' */
    greenhouseHoverTest_B.Z = greenhouseHoverTest_B.In1.Pose.Pose.Position.Z;
  }

  /* End of Start for MATLABSystem: '<S2>/SourceBlock' */
  /* End of Outputs for SubSystem: '<S2>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subscribe' */

  /* Sum: '<Root>/Sum' */
  rtb_Filter = greenhouseHoverTest_B.Transpose[0] - greenhouseHoverTest_B.X;

  /* Gain: '<S47>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S39>/Filter'
   *  Gain: '<S37>/Derivative Gain'
   *  Sum: '<S39>/SumD'
   */
  rtb_FilterCoefficient = (0.08 * rtb_Filter -
    greenhouseHoverTest_DW.Filter_DSTATE) * 3.0;

  /* Sum: '<Root>/Sum1' */
  rtb_Filter_n = greenhouseHoverTest_B.Transpose[1] - greenhouseHoverTest_B.Y;

  /* Gain: '<S99>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S91>/Filter'
   *  Gain: '<S89>/Derivative Gain'
   *  Sum: '<S91>/SumD'
   */
  rtb_FilterCoefficient_n = (0.08 * rtb_Filter_n -
    greenhouseHoverTest_DW.Filter_DSTATE_a) * 3.0;

  /* Sum: '<Root>/Sum2' */
  rtb_Filter_m = greenhouseHoverTest_B.Transpose[2] - greenhouseHoverTest_B.Z;

  /* Gain: '<S151>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S143>/Filter'
   *  Gain: '<S141>/Derivative Gain'
   *  Sum: '<S143>/SumD'
   */
  rtb_FilterCoefficient_e = (0.08 * rtb_Filter_m -
    greenhouseHoverTest_DW.Filter_DSTATE_g) * 3.0;

  /* BusAssignment: '<Root>/Bus Assignment' incorporates:
   *  Gain: '<S101>/Proportional Gain'
   *  Gain: '<S153>/Proportional Gain'
   *  Gain: '<S49>/Proportional Gain'
   *  Sum: '<S105>/Sum'
   *  Sum: '<S157>/Sum'
   *  Sum: '<S53>/Sum'
   */
  greenhouseHoverTest_B.BusAssignment.Linear.X = 0.7 * rtb_Filter +
    rtb_FilterCoefficient;
  greenhouseHoverTest_B.BusAssignment.Linear.Y = 0.7 * rtb_Filter_n +
    rtb_FilterCoefficient_n;
  greenhouseHoverTest_B.BusAssignment.Linear.Z = 0.7 * rtb_Filter_m +
    rtb_FilterCoefficient_e;

  /* Outputs for Atomic SubSystem: '<Root>/Publish' */
  /* MATLABSystem: '<S1>/SinkBlock' */
  Pub_greenhouseHoverTest_11.publish(&greenhouseHoverTest_B.BusAssignment);

  /* End of Outputs for SubSystem: '<Root>/Publish' */

  /* Update for DiscreteIntegrator: '<S39>/Filter' */
  greenhouseHoverTest_DW.Filter_DSTATE += 0.01 * rtb_FilterCoefficient;

  /* Update for DiscreteIntegrator: '<S91>/Filter' */
  greenhouseHoverTest_DW.Filter_DSTATE_a += 0.01 * rtb_FilterCoefficient_n;

  /* Update for DiscreteIntegrator: '<S143>/Filter' */
  greenhouseHoverTest_DW.Filter_DSTATE_g += 0.01 * rtb_FilterCoefficient_e;
}

/* Model initialize function */
void greenhouseHoverTest_initialize(void)
{
  /* Registration code */

  /* block I/O */
  (void) memset((static_cast<void *>(&greenhouseHoverTest_B)), 0,
                sizeof(B_greenhouseHoverTest_T));

  /* states (dwork) */
  (void) memset(static_cast<void *>(&greenhouseHoverTest_DW), 0,
                sizeof(DW_greenhouseHoverTest_T));

  {
    char_T b_zeroDelimTopic[23];
    char_T b_zeroDelimTopic_1[17];
    char_T b_zeroDelimTopic_0[13];
    static const char_T b_zeroDelimTopic_2[23] = "/tagslam/odom/body_rig";
    static const char_T b_zeroDelimTopic_3[13] = "/chase_point";
    static const char_T b_zeroDelimTopic_4[17] = "/command/cmd_vel";

    /* Start for Atomic SubSystem: '<Root>/position reading' */
    /* Start for MATLABSystem: '<S8>/SourceBlock' */
    greenhouseHoverTest_DW.obj_n.matlabCodegenIsDeleted = false;
    greenhouseHoverTest_DW.objisempty = true;
    greenhouseHoverTest_DW.obj_n.isInitialized = 1;
    for (int32_T i = 0; i < 23; i++) {
      b_zeroDelimTopic[i] = b_zeroDelimTopic_2[i];
    }

    Sub_greenhouseHoverTest_1.createSubscriber(&b_zeroDelimTopic[0], 1);
    greenhouseHoverTest_DW.obj_n.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S8>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/position reading' */

    /* Start for Atomic SubSystem: '<Root>/Subscribe' */
    /* Start for MATLABSystem: '<S2>/SourceBlock' */
    greenhouseHoverTest_DW.obj_n0.matlabCodegenIsDeleted = false;
    greenhouseHoverTest_DW.objisempty_p = true;
    greenhouseHoverTest_DW.obj_n0.isInitialized = 1;
    for (int32_T i = 0; i < 13; i++) {
      b_zeroDelimTopic_0[i] = b_zeroDelimTopic_3[i];
    }

    Sub_greenhouseHoverTest_244.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    greenhouseHoverTest_DW.obj_n0.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S2>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe' */

    /* Start for Atomic SubSystem: '<Root>/Publish' */
    /* Start for MATLABSystem: '<S1>/SinkBlock' */
    greenhouseHoverTest_DW.obj.matlabCodegenIsDeleted = false;
    greenhouseHoverTest_DW.objisempty_i = true;
    greenhouseHoverTest_DW.obj.isInitialized = 1;
    for (int32_T i = 0; i < 17; i++) {
      b_zeroDelimTopic_1[i] = b_zeroDelimTopic_4[i];
    }

    Pub_greenhouseHoverTest_11.createPublisher(&b_zeroDelimTopic_1[0], 1);
    greenhouseHoverTest_DW.obj.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S1>/SinkBlock' */
    /* End of Start for SubSystem: '<Root>/Publish' */
  }

  /* InitializeConditions for DiscreteIntegrator: '<S39>/Filter' */
  greenhouseHoverTest_DW.Filter_DSTATE = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S91>/Filter' */
  greenhouseHoverTest_DW.Filter_DSTATE_a = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S143>/Filter' */
  greenhouseHoverTest_DW.Filter_DSTATE_g = 0.0;

  /* SystemInitialize for SignalConversion generated from: '<S166>/In1' */
  memset(&greenhouseHoverTest_B.In1, 0, sizeof
         (SL_Bus_greenhouseHoverTest_nav_msgs_Odometry));

  /* SystemInitialize for Enabled SubSystem: '<Root>/Subsystem' */
  /* SystemInitialize for SignalConversion generated from: '<S3>/Bus Selector' incorporates:
   *  Outport: '<S3>/<X>'
   */
  greenhouseHoverTest_B.X = 0.0;

  /* SystemInitialize for SignalConversion generated from: '<S3>/Bus Selector' incorporates:
   *  Outport: '<S3>/<Y>'
   */
  greenhouseHoverTest_B.Y = 0.0;

  /* SystemInitialize for Math: '<S3>/Transpose' incorporates:
   *  Outport: '<S3>/Out3'
   */
  greenhouseHoverTest_B.Transpose[0] = 0.0;
  greenhouseHoverTest_B.Transpose[1] = 0.0;
  greenhouseHoverTest_B.Transpose[2] = 0.0;

  /* SystemInitialize for SignalConversion generated from: '<S3>/Bus Selector' incorporates:
   *  Outport: '<S3>/<Z>'
   */
  greenhouseHoverTest_B.Z = 0.0;

  /* End of SystemInitialize for SubSystem: '<Root>/Subsystem' */
}

/* Model terminate function */
void greenhouseHoverTest_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/position reading' */
  /* Terminate for MATLABSystem: '<S8>/SourceBlock' */
  if (!greenhouseHoverTest_DW.obj_n.matlabCodegenIsDeleted) {
    greenhouseHoverTest_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S8>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/position reading' */

  /* Terminate for Atomic SubSystem: '<Root>/Subscribe' */
  /* Terminate for MATLABSystem: '<S2>/SourceBlock' */
  if (!greenhouseHoverTest_DW.obj_n0.matlabCodegenIsDeleted) {
    greenhouseHoverTest_DW.obj_n0.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S2>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/Subscribe' */

  /* Terminate for Atomic SubSystem: '<Root>/Publish' */
  /* Terminate for MATLABSystem: '<S1>/SinkBlock' */
  if (!greenhouseHoverTest_DW.obj.matlabCodegenIsDeleted) {
    greenhouseHoverTest_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S1>/SinkBlock' */
  /* End of Terminate for SubSystem: '<Root>/Publish' */
}
