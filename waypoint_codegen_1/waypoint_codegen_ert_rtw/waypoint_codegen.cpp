/*
 * waypoint_codegen.cpp
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

#include "waypoint_codegen.h"
#include "rtwtypes.h"
#include <cstring>
#include <cmath>
#include "waypoint_codegen_private.h"
#include "cmath"
#include "rt_defines.h"

/* Block signals (default storage) */
B_waypoint_codegen_T waypoint_codegen_B;

/* Block states (default storage) */
DW_waypoint_codegen_T waypoint_codegen_DW;

/* Real-time model */
RT_MODEL_waypoint_codegen_T waypoint_codegen_M_{ };

RT_MODEL_waypoint_codegen_T *const waypoint_codegen_M{ &waypoint_codegen_M_ };

/* Forward declaration for local functions */
static real_T waypoint_codegen_norm(const real_T x[3]);
static real_T waypoint_codegen_norm_n(const real_T x[3]);
int32_T div_nzp_s32_floor(int32_T numerator, int32_T denominator)
{
  uint32_T absDenominator;
  uint32_T absNumerator;
  uint32_T tempAbsQuotient;
  boolean_T quotientNeedsNegation;
  absNumerator = numerator < 0 ? ~static_cast<uint32_T>(numerator) + 1U :
    static_cast<uint32_T>(numerator);
  absDenominator = denominator < 0 ? ~static_cast<uint32_T>(denominator) + 1U :
    static_cast<uint32_T>(denominator);
  quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
  tempAbsQuotient = absNumerator / absDenominator;
  if (quotientNeedsNegation) {
    absNumerator %= absDenominator;
    if (absNumerator > 0U) {
      tempAbsQuotient++;
    }
  }

  return quotientNeedsNegation ? -static_cast<int32_T>(tempAbsQuotient) :
    static_cast<int32_T>(tempAbsQuotient);
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  if (std::isnan(u0) || std::isnan(u1)) {
    y = (rtNaN);
  } else if (std::isinf(u0) && std::isinf(u1)) {
    int32_T tmp;
    int32_T tmp_0;
    if (u0 > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    if (u1 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    y = std::atan2(static_cast<real_T>(tmp), static_cast<real_T>(tmp_0));
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = std::atan2(u0, u1);
  }

  return y;
}

/* Function for MATLAB Function: '<Root>/MATLAB Function1' */
static real_T waypoint_codegen_norm(const real_T x[3])
{
  real_T absxk;
  real_T scale;
  real_T t;
  real_T y;
  scale = 3.3121686421112381E-170;
  absxk = std::abs(x[0]);
  if (absxk > 3.3121686421112381E-170) {
    y = 1.0;
    scale = absxk;
  } else {
    t = absxk / 3.3121686421112381E-170;
    y = t * t;
  }

  absxk = std::abs(x[1]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  absxk = std::abs(x[2]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  return scale * std::sqrt(y);
}

static real_T waypoint_codegen_norm_n(const real_T x[3])
{
  real_T absxk;
  real_T scale;
  real_T t;
  real_T y;
  scale = 3.3121686421112381E-170;

  /* Start for MATLABSystem: '<Root>/Waypoint Follower' */
  absxk = std::abs(x[0]);
  if (absxk > 3.3121686421112381E-170) {
    y = 1.0;
    scale = absxk;
  } else {
    t = absxk / 3.3121686421112381E-170;
    y = t * t;
  }

  /* Start for MATLABSystem: '<Root>/Waypoint Follower' */
  absxk = std::abs(x[1]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  /* Start for MATLABSystem: '<Root>/Waypoint Follower' */
  absxk = std::abs(x[2]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  return scale * std::sqrt(y);
}

/* Model step function */
void waypoint_codegen_step(void)
{
  int32_T b_exponent;
  int32_T b_exponent_0;
  int32_T b_k;
  int32_T i;
  int32_T tmp_size_idx_1;
  int32_T waypoints_data_tmp;
  int32_T waypoints_size_idx_0;
  int8_T tmp_data[2];
  uint8_T rtb_Delay;
  uint8_T status;
  boolean_T x[3];
  boolean_T distinctWptsIdx[2];
  boolean_T exitg1;
  boolean_T guard1;
  boolean_T guard2;
  boolean_T p;
  boolean_T rtb_Compare;

  /* Delay: '<Root>/Delay' */
  rtb_Delay = waypoint_codegen_DW.Delay_DSTATE[0];

  /* Outputs for Atomic SubSystem: '<Root>/position reading' */
  /* MATLABSystem: '<S6>/SourceBlock' */
  rtb_Compare = Sub_waypoint_codegen_1.getLatestMessage
    (&waypoint_codegen_B.rtb_SourceBlock_o2_m);

  /* Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S7>/Enable'
   */
  /* Start for MATLABSystem: '<S6>/SourceBlock' */
  if (rtb_Compare) {
    /* SignalConversion generated from: '<S7>/In1' */
    waypoint_codegen_B.In1 = waypoint_codegen_B.rtb_SourceBlock_o2_m;
  }

  /* End of Start for MATLABSystem: '<S6>/SourceBlock' */
  /* End of Outputs for SubSystem: '<S6>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/position reading' */

  /* MATLABSystem: '<Root>/Coordinate Transformation Conversion' incorporates:
   *  SignalConversion generated from: '<Root>/Coordinate Transformation Conversion'
   */
  waypoint_codegen_B.b = 1.0 / std::sqrt
    (((waypoint_codegen_B.In1.Pose.Pose.Orientation.X *
       waypoint_codegen_B.In1.Pose.Pose.Orientation.X +
       waypoint_codegen_B.In1.Pose.Pose.Orientation.Y *
       waypoint_codegen_B.In1.Pose.Pose.Orientation.Y) +
      waypoint_codegen_B.In1.Pose.Pose.Orientation.Z *
      waypoint_codegen_B.In1.Pose.Pose.Orientation.Z) +
     waypoint_codegen_B.In1.Pose.Pose.Orientation.W *
     waypoint_codegen_B.In1.Pose.Pose.Orientation.W);
  waypoint_codegen_B.rtb_VectorConcatenate_idx_3 =
    waypoint_codegen_B.In1.Pose.Pose.Orientation.X * waypoint_codegen_B.b;
  waypoint_codegen_B.y_idx_1 = waypoint_codegen_B.In1.Pose.Pose.Orientation.Y *
    waypoint_codegen_B.b;
  waypoint_codegen_B.x = waypoint_codegen_B.In1.Pose.Pose.Orientation.Z *
    waypoint_codegen_B.b;
  waypoint_codegen_B.y_idx_3 = waypoint_codegen_B.In1.Pose.Pose.Orientation.W *
    waypoint_codegen_B.b;
  waypoint_codegen_B.d_tmp = waypoint_codegen_B.y_idx_1 *
    waypoint_codegen_B.y_idx_3 * 2.0 -
    waypoint_codegen_B.rtb_VectorConcatenate_idx_3 * waypoint_codegen_B.x * 2.0;
  if (waypoint_codegen_B.d_tmp > 1.0) {
    waypoint_codegen_B.d_tmp = 1.0;
  }

  if (waypoint_codegen_B.d_tmp < -1.0) {
    waypoint_codegen_B.d_tmp = -1.0;
  }

  if ((waypoint_codegen_B.d_tmp < 0.0) && (std::abs(waypoint_codegen_B.d_tmp +
        1.0) < 2.2204460492503131E-15)) {
    /* SignalConversion generated from: '<Root>/Vector Concatenate' */
    waypoint_codegen_B.rtb_VectorConcatenate_idx_3 = 0.0;
  } else if ((waypoint_codegen_B.d_tmp > 0.0) && (std::abs
              (waypoint_codegen_B.d_tmp - 1.0) < 2.2204460492503131E-15)) {
    /* SignalConversion generated from: '<Root>/Vector Concatenate' */
    waypoint_codegen_B.rtb_VectorConcatenate_idx_3 = 0.0;
  } else {
    /* SignalConversion generated from: '<Root>/Vector Concatenate' */
    waypoint_codegen_B.rtb_VectorConcatenate_idx_3 = rt_atan2d_snf
      (waypoint_codegen_B.rtb_VectorConcatenate_idx_3 *
       waypoint_codegen_B.y_idx_1 * 2.0 + waypoint_codegen_B.x *
       waypoint_codegen_B.y_idx_3 * 2.0,
       (waypoint_codegen_B.rtb_VectorConcatenate_idx_3 *
        waypoint_codegen_B.rtb_VectorConcatenate_idx_3 * 2.0 - 1.0) +
       waypoint_codegen_B.y_idx_3 * waypoint_codegen_B.y_idx_3 * 2.0);
  }

  /* End of MATLABSystem: '<Root>/Coordinate Transformation Conversion' */

  /* RelationalOperator: '<S2>/Compare' incorporates:
   *  Constant: '<S2>/Constant'
   *  Memory: '<Root>/Memory'
   */
  rtb_Compare = (waypoint_codegen_DW.Memory_PreviousInput != 0);

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Constant: '<Root>/Waypoints4'
   *  SignalConversion generated from: '<Root>/Vector Concatenate'
   */
  if (!waypoint_codegen_DW.idx_not_empty) {
    waypoint_codegen_DW.idx_not_empty = true;
    waypoint_codegen_DW.prevWP.size[0] = 3;
    waypoint_codegen_DW.prevWP.size[1] = 1;
    waypoint_codegen_DW.prevWP.data[0] =
      waypoint_codegen_B.In1.Pose.Pose.Position.X;
    waypoint_codegen_DW.prevWP.data[1] =
      waypoint_codegen_B.In1.Pose.Pose.Position.Y;
    waypoint_codegen_DW.prevWP.data[2] =
      waypoint_codegen_B.In1.Pose.Pose.Position.Z;
  }

  if (rtb_Compare && (!waypoint_codegen_DW.prevDone)) {
    waypoint_codegen_DW.prevWP.size[0] = 1;
    waypoint_codegen_DW.prevWP.size[1] = 3;
    waypoint_codegen_DW.prevWP.data[0] =
      waypoint_codegen_ConstP.Waypoints4_Value[static_cast<int32_T>
      (waypoint_codegen_DW.idx) - 1];
    waypoint_codegen_DW.prevWP.data[waypoint_codegen_DW.prevWP.size[0]] =
      waypoint_codegen_ConstP.Waypoints4_Value[static_cast<int32_T>
      (waypoint_codegen_DW.idx) + 4];
    waypoint_codegen_DW.prevWP.data[waypoint_codegen_DW.prevWP.size[0] << 1] =
      waypoint_codegen_ConstP.Waypoints4_Value[static_cast<int32_T>
      (waypoint_codegen_DW.idx) + 9];
    waypoint_codegen_DW.idx = std::fmin(waypoint_codegen_DW.idx + 1.0, 5.0);
  }

  waypoint_codegen_DW.prevDone = rtb_Compare;
  waypoint_codegen_B.mission[0] = waypoint_codegen_DW.prevWP.data[0];
  waypoint_codegen_B.y_idx_1 = waypoint_codegen_ConstP.Waypoints4_Value[
    static_cast<int32_T>(waypoint_codegen_DW.idx) - 1];
  waypoint_codegen_B.mission[1] = waypoint_codegen_B.y_idx_1;

  /* MATLAB Function: '<Root>/MATLAB Function1' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function'
   *  Math: '<Root>/Transpose1'
   *  SignalConversion generated from: '<Root>/Vector Concatenate'
   */
  waypoint_codegen_B.virtualWaypoint[0] =
    waypoint_codegen_B.In1.Pose.Pose.Position.X -
    waypoint_codegen_DW.prevWP.data[0];
  waypoint_codegen_B.rtb_VectorConcatenate_c[0] =
    waypoint_codegen_B.In1.Pose.Pose.Position.X - waypoint_codegen_B.y_idx_1;

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Constant: '<Root>/Waypoints4'
   */
  waypoint_codegen_B.mission[2] = waypoint_codegen_DW.prevWP.data[1];
  waypoint_codegen_B.y_idx_1 = waypoint_codegen_ConstP.Waypoints4_Value[
    static_cast<int32_T>(waypoint_codegen_DW.idx) + 4];
  waypoint_codegen_B.mission[3] = waypoint_codegen_B.y_idx_1;

  /* MATLAB Function: '<Root>/MATLAB Function1' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function'
   *  Math: '<Root>/Transpose1'
   *  SignalConversion generated from: '<Root>/Vector Concatenate'
   */
  waypoint_codegen_B.virtualWaypoint[1] =
    waypoint_codegen_B.In1.Pose.Pose.Position.Y -
    waypoint_codegen_DW.prevWP.data[1];
  waypoint_codegen_B.rtb_VectorConcatenate_c[1] =
    waypoint_codegen_B.In1.Pose.Pose.Position.Y - waypoint_codegen_B.y_idx_1;

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Constant: '<Root>/Waypoints4'
   */
  waypoint_codegen_B.mission[4] = waypoint_codegen_DW.prevWP.data[2];
  waypoint_codegen_B.y_idx_1 = waypoint_codegen_ConstP.Waypoints4_Value[
    static_cast<int32_T>(waypoint_codegen_DW.idx) + 9];
  waypoint_codegen_B.mission[5] = waypoint_codegen_B.y_idx_1;

  /* MATLAB Function: '<Root>/MATLAB Function1' incorporates:
   *  Constant: '<Root>/Constant4'
   *  MATLAB Function: '<Root>/MATLAB Function'
   *  Math: '<Root>/Transpose1'
   *  SignalConversion generated from: '<Root>/Vector Concatenate'
   */
  waypoint_codegen_B.virtualWaypoint[2] =
    waypoint_codegen_B.In1.Pose.Pose.Position.Z -
    waypoint_codegen_DW.prevWP.data[2];
  waypoint_codegen_B.rtb_VectorConcatenate_c[2] =
    waypoint_codegen_B.In1.Pose.Pose.Position.Z - waypoint_codegen_B.y_idx_1;
  waypoint_codegen_B.x = std::fmin(waypoint_codegen_norm
    (waypoint_codegen_B.virtualWaypoint), waypoint_codegen_norm
    (waypoint_codegen_B.rtb_VectorConcatenate_c));
  if (waypoint_codegen_B.x <= 0.2) {
    waypoint_codegen_B.x += 0.02;
  } else {
    waypoint_codegen_B.x = 0.2;
  }

  /* MATLABSystem: '<Root>/Waypoint Follower' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function'
   */
  waypoint_codegen_DW.obj.LookaheadDistFlag = 0U;
  if (waypoint_codegen_B.x < 0.01) {
    waypoint_codegen_B.x = 0.01;
    waypoint_codegen_DW.obj.LookaheadDistFlag = 1U;
  }

  waypoint_codegen_DW.obj.InitialPose[0] = 0.0;
  waypoint_codegen_DW.obj.InitialPose[1] = 0.0;
  waypoint_codegen_DW.obj.InitialPose[2] = 0.0;
  waypoint_codegen_DW.obj.InitialPose[3] = 0.0;
  waypoint_codegen_DW.obj.NumWaypoints = 2.0;
  rtb_Compare = false;
  p = true;
  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k <= 5)) {
    i = b_k % 2 + (div_nzp_s32_floor(b_k, 2) << 1);
    if (!(waypoint_codegen_DW.obj.WaypointsInternal[i] ==
          waypoint_codegen_B.mission[i])) {
      p = false;
      exitg1 = true;
    } else {
      b_k++;
    }
  }

  if (p) {
    rtb_Compare = true;
  }

  if (!rtb_Compare) {
    for (i = 0; i < 6; i++) {
      waypoint_codegen_DW.obj.WaypointsInternal[i] =
        waypoint_codegen_B.mission[i];
    }

    waypoint_codegen_DW.obj.WaypointIndex = 1.0;
  }

  distinctWptsIdx[1] = true;
  x[0] = (waypoint_codegen_DW.prevWP.data[0] != waypoint_codegen_B.mission[1]);
  x[1] = (waypoint_codegen_DW.prevWP.data[1] != waypoint_codegen_B.mission[3]);
  x[2] = (waypoint_codegen_DW.prevWP.data[2] != waypoint_codegen_B.y_idx_1);
  distinctWptsIdx[0] = false;
  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 3)) {
    if (x[b_k]) {
      distinctWptsIdx[0] = true;
      exitg1 = true;
    } else {
      b_k++;
    }
  }

  b_k = 0;
  for (i = 0; i < 2; i++) {
    /* MATLABSystem: '<Root>/Waypoint Follower' */
    if (distinctWptsIdx[i]) {
      b_k++;
    }
  }

  tmp_size_idx_1 = b_k;
  b_k = 0;
  for (i = 0; i < 2; i++) {
    /* MATLABSystem: '<Root>/Waypoint Follower' */
    if (distinctWptsIdx[i]) {
      /* Start for MATLABSystem: '<Root>/Waypoint Follower' */
      tmp_data[b_k] = static_cast<int8_T>(i);
      b_k++;
    }
  }

  /* MATLABSystem: '<Root>/Waypoint Follower' incorporates:
   *  SignalConversion generated from: '<Root>/Vector Concatenate'
   */
  for (i = 0; i < 3; i++) {
    for (b_k = 0; b_k < tmp_size_idx_1; b_k++) {
      waypoint_codegen_B.b_waypointsIn_data[b_k + tmp_size_idx_1 * i] =
        waypoint_codegen_B.mission[(i << 1) + tmp_data[b_k]];
    }
  }

  waypoint_codegen_DW.obj.LookaheadDistance = waypoint_codegen_B.x;
  if (tmp_size_idx_1 == 0) {
    waypoint_codegen_B.y_idx_1 = waypoint_codegen_B.In1.Pose.Pose.Position.X;
    waypoint_codegen_B.y_idx_3 = waypoint_codegen_B.In1.Pose.Pose.Position.Y;
    waypoint_codegen_B.rtb_WaypointFollower_o1_idx_2_t =
      waypoint_codegen_B.In1.Pose.Pose.Position.Z;
    status = 1U;
  } else {
    guard1 = false;
    if (tmp_size_idx_1 == 1) {
      if (waypoint_codegen_DW.obj.StartFlag) {
        waypoint_codegen_DW.obj.InitialPose[0] =
          waypoint_codegen_B.In1.Pose.Pose.Position.X;
        waypoint_codegen_DW.obj.InitialPose[1] =
          waypoint_codegen_B.In1.Pose.Pose.Position.Y;
        waypoint_codegen_DW.obj.InitialPose[2] =
          waypoint_codegen_B.In1.Pose.Pose.Position.Z;
        waypoint_codegen_DW.obj.InitialPose[3] =
          waypoint_codegen_B.rtb_VectorConcatenate_idx_3;
      }

      waypoint_codegen_B.virtualWaypoint[0] =
        waypoint_codegen_B.b_waypointsIn_data[0] -
        waypoint_codegen_B.In1.Pose.Pose.Position.X;
      waypoint_codegen_B.virtualWaypoint[1] =
        waypoint_codegen_B.b_waypointsIn_data[1] -
        waypoint_codegen_B.In1.Pose.Pose.Position.Y;
      waypoint_codegen_B.virtualWaypoint[2] =
        waypoint_codegen_B.b_waypointsIn_data[2] -
        waypoint_codegen_B.In1.Pose.Pose.Position.Z;
      if (waypoint_codegen_norm_n(waypoint_codegen_B.virtualWaypoint) <
          1.4901161193847656E-8) {
        waypoint_codegen_B.y_idx_1 = waypoint_codegen_B.In1.Pose.Pose.Position.X;
        waypoint_codegen_B.y_idx_3 = waypoint_codegen_B.In1.Pose.Pose.Position.Y;
        waypoint_codegen_B.rtb_WaypointFollower_o1_idx_2_t =
          waypoint_codegen_B.In1.Pose.Pose.Position.Z;
        status = 1U;
        waypoint_codegen_DW.obj.StartFlag = false;
      } else {
        waypoint_codegen_DW.obj.StartFlag = false;
        waypoint_codegen_DW.obj.NumWaypoints = 2.0;
        waypoints_size_idx_0 = tmp_size_idx_1 + 1;
        for (i = 0; i < 3; i++) {
          waypoints_data_tmp = (tmp_size_idx_1 + 1) * i;
          waypoint_codegen_B.mission[waypoints_data_tmp] =
            waypoint_codegen_DW.obj.InitialPose[i];
          for (b_k = 0; b_k < tmp_size_idx_1; b_k++) {
            waypoint_codegen_B.mission[(b_k + waypoints_data_tmp) + 1] =
              waypoint_codegen_B.b_waypointsIn_data[tmp_size_idx_1 * i + b_k];
          }
        }

        guard1 = true;
      }
    } else {
      waypoints_size_idx_0 = tmp_size_idx_1;
      b_k = tmp_size_idx_1 * 3;
      if (b_k - 1 >= 0) {
        std::memcpy(&waypoint_codegen_B.mission[0],
                    &waypoint_codegen_B.b_waypointsIn_data[0],
                    static_cast<uint32_T>(b_k) * sizeof(real_T));
      }

      guard1 = true;
    }

    if (guard1) {
      rtb_Compare = false;
      if (waypoint_codegen_DW.obj.WaypointIndex == 2.0) {
        rtb_Compare = true;
      }

      if (rtb_Compare) {
        waypoint_codegen_DW.obj.LastWaypointFlag = true;
        waypoint_codegen_DW.obj.WaypointIndex--;
      }

      waypoint_codegen_B.rtb_VectorConcatenate_idx_3 =
        waypoint_codegen_B.mission[static_cast<int32_T>
        (waypoint_codegen_DW.obj.WaypointIndex) - 1];
      waypoint_codegen_B.y_idx_1 = waypoint_codegen_B.mission
        [static_cast<int32_T>(waypoint_codegen_DW.obj.WaypointIndex + 1.0) - 1];
      waypoint_codegen_B.y = waypoint_codegen_B.In1.Pose.Pose.Position.X -
        waypoint_codegen_B.y_idx_1;
      waypoint_codegen_B.virtualWaypoint[0] = waypoint_codegen_B.y;
      waypoint_codegen_B.x = waypoint_codegen_B.mission[(static_cast<int32_T>
        (waypoint_codegen_DW.obj.WaypointIndex) + waypoints_size_idx_0) - 1];
      waypoint_codegen_B.y_idx_3 = waypoint_codegen_B.mission
        [(static_cast<int32_T>(waypoint_codegen_DW.obj.WaypointIndex + 1.0) +
          waypoints_size_idx_0) - 1];
      waypoint_codegen_B.virtualWaypoint[1] =
        waypoint_codegen_B.In1.Pose.Pose.Position.Y - waypoint_codegen_B.y_idx_3;
      waypoint_codegen_B.d_tmp = waypoint_codegen_B.mission
        [((waypoints_size_idx_0 << 1) + static_cast<int32_T>
          (waypoint_codegen_DW.obj.WaypointIndex)) - 1];
      waypoint_codegen_B.rtb_WaypointFollower_o1_idx_2_t =
        waypoint_codegen_B.mission[(static_cast<int32_T>
        (waypoint_codegen_DW.obj.WaypointIndex + 1.0) + (waypoints_size_idx_0 <<
        1)) - 1];
      waypoint_codegen_B.b = waypoint_codegen_B.In1.Pose.Pose.Position.Z -
        waypoint_codegen_B.rtb_WaypointFollower_o1_idx_2_t;
      waypoint_codegen_B.virtualWaypoint[2] = waypoint_codegen_B.b;
      waypoint_codegen_B.dist = waypoint_codegen_norm_n
        (waypoint_codegen_B.virtualWaypoint);
      guard2 = false;
      if (waypoint_codegen_B.dist <= 0.03) {
        guard2 = true;
      } else {
        waypoint_codegen_B.unitVectorUtoV_tmp[0] = waypoint_codegen_B.y_idx_1 -
          waypoint_codegen_B.rtb_VectorConcatenate_idx_3;
        waypoint_codegen_B.unitVectorUtoV_tmp[1] = waypoint_codegen_B.y_idx_3 -
          waypoint_codegen_B.x;
        waypoint_codegen_B.unitVectorUtoV_tmp[2] =
          waypoint_codegen_B.rtb_WaypointFollower_o1_idx_2_t -
          waypoint_codegen_B.d_tmp;
        waypoint_codegen_B.virtualWaypoint_k = waypoint_codegen_norm_n
          (waypoint_codegen_B.unitVectorUtoV_tmp);
        waypoint_codegen_B.b = (waypoint_codegen_B.y / waypoint_codegen_B.dist *
          (waypoint_codegen_B.unitVectorUtoV_tmp[0] /
           waypoint_codegen_B.virtualWaypoint_k) +
          waypoint_codegen_B.unitVectorUtoV_tmp[1] /
          waypoint_codegen_B.virtualWaypoint_k *
          (waypoint_codegen_B.virtualWaypoint[1] / waypoint_codegen_B.dist)) +
          waypoint_codegen_B.b / waypoint_codegen_B.dist *
          (waypoint_codegen_B.unitVectorUtoV_tmp[2] /
           waypoint_codegen_B.virtualWaypoint_k);
        if (std::isnan(waypoint_codegen_B.b) || (waypoint_codegen_B.b < 0.0)) {
        } else {
          guard2 = true;
        }
      }

      if (guard2) {
        waypoint_codegen_DW.obj.WaypointIndex++;
        rtb_Compare = false;
        if (waypoint_codegen_DW.obj.WaypointIndex == 2.0) {
          rtb_Compare = true;
        }

        if (rtb_Compare) {
          waypoint_codegen_DW.obj.LastWaypointFlag = true;
          waypoint_codegen_DW.obj.WaypointIndex--;
        }

        waypoint_codegen_B.rtb_VectorConcatenate_idx_3 =
          waypoint_codegen_B.mission[static_cast<int32_T>
          (waypoint_codegen_DW.obj.WaypointIndex) - 1];
        waypoint_codegen_B.y_idx_1 = waypoint_codegen_B.mission
          [static_cast<int32_T>(waypoint_codegen_DW.obj.WaypointIndex + 1.0) - 1];
        waypoint_codegen_B.x = waypoint_codegen_B.mission[(static_cast<int32_T>
          (waypoint_codegen_DW.obj.WaypointIndex) + waypoints_size_idx_0) - 1];
        waypoint_codegen_B.y_idx_3 = waypoint_codegen_B.mission
          [(static_cast<int32_T>(waypoint_codegen_DW.obj.WaypointIndex + 1.0) +
            waypoints_size_idx_0) - 1];
        waypoint_codegen_B.d_tmp = waypoint_codegen_B.mission
          [((waypoints_size_idx_0 << 1) + static_cast<int32_T>
            (waypoint_codegen_DW.obj.WaypointIndex)) - 1];
        waypoint_codegen_B.rtb_WaypointFollower_o1_idx_2_t =
          waypoint_codegen_B.mission[(static_cast<int32_T>
          (waypoint_codegen_DW.obj.WaypointIndex + 1.0) + (waypoints_size_idx_0 <<
          1)) - 1];
      }

      waypoint_codegen_B.dist = waypoint_codegen_B.In1.Pose.Pose.Position.X -
        waypoint_codegen_B.rtb_VectorConcatenate_idx_3;
      waypoint_codegen_B.virtualWaypoint[0] = waypoint_codegen_B.dist;
      waypoint_codegen_B.b = waypoint_codegen_B.y_idx_1 -
        waypoint_codegen_B.rtb_VectorConcatenate_idx_3;
      waypoint_codegen_B.unitVectorUtoV_tmp[0] = waypoint_codegen_B.b;
      waypoint_codegen_B.virtualWaypoint_k = waypoint_codegen_B.dist *
        waypoint_codegen_B.b;
      waypoint_codegen_B.y = waypoint_codegen_B.b * waypoint_codegen_B.b;
      waypoint_codegen_B.dist = waypoint_codegen_B.In1.Pose.Pose.Position.Y -
        waypoint_codegen_B.x;
      waypoint_codegen_B.virtualWaypoint[1] = waypoint_codegen_B.dist;
      waypoint_codegen_B.b = waypoint_codegen_B.y_idx_3 - waypoint_codegen_B.x;
      waypoint_codegen_B.unitVectorUtoV_tmp[1] = waypoint_codegen_B.b;
      waypoint_codegen_B.virtualWaypoint_k += waypoint_codegen_B.dist *
        waypoint_codegen_B.b;
      waypoint_codegen_B.y += waypoint_codegen_B.b * waypoint_codegen_B.b;
      waypoint_codegen_B.dist = waypoint_codegen_B.In1.Pose.Pose.Position.Z -
        waypoint_codegen_B.d_tmp;
      waypoint_codegen_B.virtualWaypoint[2] = waypoint_codegen_B.dist;
      waypoint_codegen_B.b = waypoint_codegen_B.rtb_WaypointFollower_o1_idx_2_t
        - waypoint_codegen_B.d_tmp;
      waypoint_codegen_B.y += waypoint_codegen_B.b * waypoint_codegen_B.b;
      waypoint_codegen_B.virtualWaypoint_k = (waypoint_codegen_B.dist *
        waypoint_codegen_B.b + waypoint_codegen_B.virtualWaypoint_k) /
        waypoint_codegen_B.y;
      if (waypoint_codegen_B.virtualWaypoint_k < 0.0) {
        waypoint_codegen_B.dist = waypoint_codegen_norm_n
          (waypoint_codegen_B.virtualWaypoint);
      } else if (waypoint_codegen_B.virtualWaypoint_k > 1.0) {
        waypoint_codegen_B.virtualWaypoint[0] =
          waypoint_codegen_B.In1.Pose.Pose.Position.X -
          waypoint_codegen_B.y_idx_1;
        waypoint_codegen_B.virtualWaypoint[1] =
          waypoint_codegen_B.In1.Pose.Pose.Position.Y -
          waypoint_codegen_B.y_idx_3;
        waypoint_codegen_B.virtualWaypoint[2] =
          waypoint_codegen_B.In1.Pose.Pose.Position.Z -
          waypoint_codegen_B.rtb_WaypointFollower_o1_idx_2_t;
        waypoint_codegen_B.dist = waypoint_codegen_norm_n
          (waypoint_codegen_B.virtualWaypoint);
      } else {
        waypoint_codegen_B.virtualWaypoint[0] =
          waypoint_codegen_B.In1.Pose.Pose.Position.X -
          (waypoint_codegen_B.virtualWaypoint_k *
           waypoint_codegen_B.unitVectorUtoV_tmp[0] +
           waypoint_codegen_B.rtb_VectorConcatenate_idx_3);
        waypoint_codegen_B.virtualWaypoint[1] =
          waypoint_codegen_B.In1.Pose.Pose.Position.Y -
          (waypoint_codegen_B.virtualWaypoint_k *
           waypoint_codegen_B.unitVectorUtoV_tmp[1] + waypoint_codegen_B.x);
        waypoint_codegen_B.virtualWaypoint[2] =
          waypoint_codegen_B.In1.Pose.Pose.Position.Z -
          (waypoint_codegen_B.virtualWaypoint_k * waypoint_codegen_B.b +
           waypoint_codegen_B.d_tmp);
        waypoint_codegen_B.dist = waypoint_codegen_norm_n
          (waypoint_codegen_B.virtualWaypoint);
      }

      if (waypoint_codegen_DW.obj.LastWaypointFlag) {
        waypoint_codegen_B.virtualWaypoint[0] =
          waypoint_codegen_B.In1.Pose.Pose.Position.X -
          (waypoint_codegen_B.virtualWaypoint_k *
           waypoint_codegen_B.unitVectorUtoV_tmp[0] +
           waypoint_codegen_B.rtb_VectorConcatenate_idx_3);
        waypoint_codegen_B.virtualWaypoint[1] =
          waypoint_codegen_B.In1.Pose.Pose.Position.Y -
          (waypoint_codegen_B.virtualWaypoint_k *
           waypoint_codegen_B.unitVectorUtoV_tmp[1] + waypoint_codegen_B.x);
        waypoint_codegen_B.virtualWaypoint[2] =
          waypoint_codegen_B.In1.Pose.Pose.Position.Z -
          (waypoint_codegen_B.virtualWaypoint_k * waypoint_codegen_B.b +
           waypoint_codegen_B.d_tmp);
        waypoint_codegen_B.dist = waypoint_codegen_norm_n
          (waypoint_codegen_B.virtualWaypoint);
      }

      waypoint_codegen_B.absx_tmp = std::abs(waypoint_codegen_B.dist);
      if (std::isinf(waypoint_codegen_B.absx_tmp) || std::isnan
          (waypoint_codegen_B.absx_tmp)) {
        waypoint_codegen_B.virtualWaypoint_k = (rtNaN);
        waypoint_codegen_B.absx_tmp = (rtNaN);
      } else if (waypoint_codegen_B.absx_tmp < 4.4501477170144028E-308) {
        waypoint_codegen_B.virtualWaypoint_k = 4.94065645841247E-324;
        waypoint_codegen_B.absx_tmp = 4.94065645841247E-324;
      } else {
        std::frexp(waypoint_codegen_B.absx_tmp, &b_exponent);
        waypoint_codegen_B.virtualWaypoint_k = std::ldexp(1.0, b_exponent - 53);
        std::frexp(waypoint_codegen_B.absx_tmp, &b_exponent_0);
        waypoint_codegen_B.absx_tmp = std::ldexp(1.0, b_exponent_0 - 53);
      }

      if (waypoint_codegen_DW.obj.LookaheadDistance <= std::fmax(std::sqrt
           (waypoint_codegen_B.virtualWaypoint_k), 5.0 *
           waypoint_codegen_B.absx_tmp) + waypoint_codegen_B.dist) {
        waypoint_codegen_DW.obj.LookaheadDistance =
          waypoint_codegen_DW.obj.LookaheadFactor * waypoint_codegen_B.dist;
      }

      if (!waypoint_codegen_DW.obj.LastWaypointFlag) {
        waypoint_codegen_B.virtualWaypoint[0] =
          waypoint_codegen_B.unitVectorUtoV_tmp[0];
        waypoint_codegen_B.unitVectorUtoV_tmp[0] =
          waypoint_codegen_B.rtb_VectorConcatenate_idx_3 -
          waypoint_codegen_B.In1.Pose.Pose.Position.X;
        waypoint_codegen_B.virtualWaypoint[1] =
          waypoint_codegen_B.unitVectorUtoV_tmp[1];
        waypoint_codegen_B.unitVectorUtoV_tmp[1] = waypoint_codegen_B.x -
          waypoint_codegen_B.In1.Pose.Pose.Position.Y;
        waypoint_codegen_B.unitVectorUtoV_tmp[2] = waypoint_codegen_B.d_tmp -
          waypoint_codegen_B.In1.Pose.Pose.Position.Z;
        waypoint_codegen_B.b = ((waypoint_codegen_B.virtualWaypoint[0] *
          waypoint_codegen_B.unitVectorUtoV_tmp[0] +
          waypoint_codegen_B.virtualWaypoint[1] *
          waypoint_codegen_B.unitVectorUtoV_tmp[1]) + waypoint_codegen_B.b *
          waypoint_codegen_B.unitVectorUtoV_tmp[2]) * 2.0;
        waypoint_codegen_B.dist = std::sqrt(waypoint_codegen_B.b *
          waypoint_codegen_B.b - (((waypoint_codegen_B.unitVectorUtoV_tmp[0] *
          waypoint_codegen_B.unitVectorUtoV_tmp[0] +
          waypoint_codegen_B.unitVectorUtoV_tmp[1] *
          waypoint_codegen_B.unitVectorUtoV_tmp[1]) +
          waypoint_codegen_B.unitVectorUtoV_tmp[2] *
          waypoint_codegen_B.unitVectorUtoV_tmp[2]) -
          waypoint_codegen_DW.obj.LookaheadDistance *
          waypoint_codegen_DW.obj.LookaheadDistance) * (4.0 *
          waypoint_codegen_B.y));
        waypoint_codegen_B.y = std::fmax((-waypoint_codegen_B.b +
          waypoint_codegen_B.dist) / 2.0 / waypoint_codegen_B.y,
          (-waypoint_codegen_B.b - waypoint_codegen_B.dist) / 2.0 /
          waypoint_codegen_B.y);
        waypoint_codegen_B.y_idx_1 = (1.0 - waypoint_codegen_B.y) *
          waypoint_codegen_B.rtb_VectorConcatenate_idx_3 + waypoint_codegen_B.y *
          waypoint_codegen_B.y_idx_1;
        waypoint_codegen_B.y_idx_3 = (1.0 - waypoint_codegen_B.y) *
          waypoint_codegen_B.x + waypoint_codegen_B.y *
          waypoint_codegen_B.y_idx_3;
        waypoint_codegen_B.rtb_WaypointFollower_o1_idx_2_t = (1.0 -
          waypoint_codegen_B.y) * waypoint_codegen_B.d_tmp +
          waypoint_codegen_B.y *
          waypoint_codegen_B.rtb_WaypointFollower_o1_idx_2_t;
      }

      status = 0U;
      rtb_Compare = false;
      if (waypoint_codegen_DW.obj.LastWaypointFlag) {
        rtb_Compare = true;
      }

      if (rtb_Compare) {
        status = 1U;
      }

      waypoint_codegen_DW.obj.LastWaypointFlag = false;
    }
  }

  /* BusAssignment: '<Root>/Bus Assignment1' incorporates:
   *  MATLABSystem: '<Root>/Waypoint Follower'
   */
  waypoint_codegen_B.BusAssignment1.X = waypoint_codegen_B.y_idx_1;
  waypoint_codegen_B.BusAssignment1.Y = waypoint_codegen_B.y_idx_3;
  waypoint_codegen_B.BusAssignment1.Z =
    waypoint_codegen_B.rtb_WaypointFollower_o1_idx_2_t;

  /* Outputs for Atomic SubSystem: '<Root>/Publish1' */
  /* MATLABSystem: '<S5>/SinkBlock' */
  Pub_waypoint_codegen_253.publish(&waypoint_codegen_B.BusAssignment1);

  /* End of Outputs for SubSystem: '<Root>/Publish1' */

  /* Update for Delay: '<Root>/Delay' incorporates:
   *  MATLABSystem: '<Root>/Waypoint Follower'
   * */
  for (b_exponent = 0; b_exponent < 49; b_exponent++) {
    waypoint_codegen_DW.Delay_DSTATE[b_exponent] =
      waypoint_codegen_DW.Delay_DSTATE[b_exponent + 1];
  }

  waypoint_codegen_DW.Delay_DSTATE[49] = status;

  /* End of Update for Delay: '<Root>/Delay' */

  /* Update for Memory: '<Root>/Memory' */
  waypoint_codegen_DW.Memory_PreviousInput = rtb_Delay;
}

/* Model initialize function */
void waypoint_codegen_initialize(void)
{
  /* Registration code */

  /* block I/O */
  (void) std::memset((static_cast<void *>(&waypoint_codegen_B)), 0,
                     sizeof(B_waypoint_codegen_T));

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&waypoint_codegen_DW), 0,
                     sizeof(DW_waypoint_codegen_T));

  {
    static const char_T b_zeroDelimTopic_1[23]{ "/tagslam/odom/body_rig" };

    static const char_T b_zeroDelimTopic_2[13]{ "/chase_point" };

    char_T b_zeroDelimTopic[23];
    char_T b_zeroDelimTopic_0[13];

    /* Start for Atomic SubSystem: '<Root>/position reading' */
    /* Start for MATLABSystem: '<S6>/SourceBlock' */
    waypoint_codegen_DW.obj_n.matlabCodegenIsDeleted = false;
    waypoint_codegen_DW.objisempty = true;
    waypoint_codegen_DW.obj_n.isInitialized = 1;
    for (int32_T i{0}; i < 23; i++) {
      b_zeroDelimTopic[i] = b_zeroDelimTopic_1[i];
    }

    Sub_waypoint_codegen_1.createSubscriber(&b_zeroDelimTopic[0], 1);
    waypoint_codegen_DW.obj_n.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S6>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/position reading' */

    /* Start for MATLABSystem: '<Root>/Coordinate Transformation Conversion' */
    waypoint_codegen_DW.objisempty_l = true;
    waypoint_codegen_DW.obj_j.isInitialized = 1;

    /* Start for MATLABSystem: '<Root>/Waypoint Follower' */
    waypoint_codegen_DW.obj.LastWaypointFlag = false;
    waypoint_codegen_DW.obj.StartFlag = true;
    waypoint_codegen_DW.obj.LookaheadFactor = 1.01;
    waypoint_codegen_DW.objisempty_h = true;
    waypoint_codegen_DW.obj.isInitialized = 1;
    for (int32_T i{0}; i < 6; i++) {
      waypoint_codegen_DW.obj.WaypointsInternal[i] = 0.0;
    }

    waypoint_codegen_DW.obj.NumWaypoints = 0.0;

    /* End of Start for MATLABSystem: '<Root>/Waypoint Follower' */

    /* Start for Atomic SubSystem: '<Root>/Publish1' */
    /* Start for MATLABSystem: '<S5>/SinkBlock' */
    waypoint_codegen_DW.obj_o.matlabCodegenIsDeleted = false;
    waypoint_codegen_DW.objisempty_g = true;
    waypoint_codegen_DW.obj_o.isInitialized = 1;
    for (int32_T i{0}; i < 13; i++) {
      b_zeroDelimTopic_0[i] = b_zeroDelimTopic_2[i];
    }

    Pub_waypoint_codegen_253.createPublisher(&b_zeroDelimTopic_0[0], 1);
    waypoint_codegen_DW.obj_o.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S5>/SinkBlock' */
    /* End of Start for SubSystem: '<Root>/Publish1' */
  }

  /* InitializeConditions for Delay: '<Root>/Delay' */
  for (int32_T i{0}; i < 50; i++) {
    waypoint_codegen_DW.Delay_DSTATE[i] = 0U;
  }

  /* End of InitializeConditions for Delay: '<Root>/Delay' */

  /* InitializeConditions for Memory: '<Root>/Memory' */
  waypoint_codegen_DW.Memory_PreviousInput = 0U;

  /* SystemInitialize for SignalConversion generated from: '<S7>/In1' */
  std::memset(&waypoint_codegen_B.In1, 0, sizeof
              (SL_Bus_waypoint_codegen_nav_msgs_Odometry));

  /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function' */
  waypoint_codegen_DW.idx_not_empty = false;
  waypoint_codegen_DW.idx = 1.0;
  waypoint_codegen_DW.prevDone = false;

  /* InitializeConditions for MATLABSystem: '<Root>/Waypoint Follower' */
  waypoint_codegen_DW.obj.WaypointIndex = 1.0;
  for (int32_T i{0}; i < 6; i++) {
    waypoint_codegen_DW.obj.WaypointsInternal[i] *= 0.0;
  }

  /* End of InitializeConditions for MATLABSystem: '<Root>/Waypoint Follower' */
}

/* Model terminate function */
void waypoint_codegen_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/position reading' */
  /* Terminate for MATLABSystem: '<S6>/SourceBlock' */
  if (!waypoint_codegen_DW.obj_n.matlabCodegenIsDeleted) {
    waypoint_codegen_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S6>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/position reading' */

  /* Terminate for Atomic SubSystem: '<Root>/Publish1' */
  /* Terminate for MATLABSystem: '<S5>/SinkBlock' */
  if (!waypoint_codegen_DW.obj_o.matlabCodegenIsDeleted) {
    waypoint_codegen_DW.obj_o.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S5>/SinkBlock' */
  /* End of Terminate for SubSystem: '<Root>/Publish1' */
}
