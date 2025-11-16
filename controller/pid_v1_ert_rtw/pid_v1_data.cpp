/*
 * pid_v1_data.cpp
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

/* Block parameters (default storage) */
P_pid_v1_T pid_v1_P{
  /* Mask Parameter: X_D
   * Referenced by: '<S36>/Derivative Gain'
   */
  0.08,

  /* Mask Parameter: Y_D
   * Referenced by: '<S88>/Derivative Gain'
   */
  0.08,

  /* Mask Parameter: Z_D
   * Referenced by: '<S140>/Derivative Gain'
   */
  0.08,

  /* Mask Parameter: X_InitialConditionForFilter
   * Referenced by: '<S38>/Filter'
   */
  0.0,

  /* Mask Parameter: Y_InitialConditionForFilter
   * Referenced by: '<S90>/Filter'
   */
  0.0,

  /* Mask Parameter: Z_InitialConditionForFilter
   * Referenced by: '<S142>/Filter'
   */
  0.0,

  /* Mask Parameter: X_N
   * Referenced by: '<S46>/Filter Coefficient'
   */
  3.0,

  /* Mask Parameter: Y_N
   * Referenced by: '<S98>/Filter Coefficient'
   */
  3.0,

  /* Mask Parameter: Z_N
   * Referenced by: '<S150>/Filter Coefficient'
   */
  3.0,

  /* Mask Parameter: X_P
   * Referenced by: '<S48>/Proportional Gain'
   */
  0.7,

  /* Mask Parameter: Y_P
   * Referenced by: '<S100>/Proportional Gain'
   */
  0.7,

  /* Mask Parameter: Z_P
   * Referenced by: '<S152>/Proportional Gain'
   */
  0.7,

  /* Computed Parameter: Out1_Y0
   * Referenced by: '<S165>/Out1'
   */
  {
    {
      0U,                              /* Seq */

      {
        0.0,                           /* Sec */
        0.0                            /* Nsec */
      },                               /* Stamp */

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                /* FrameId */

      {
        0U,                            /* CurrentLength */
        0U                             /* ReceivedLength */
      }                                /* FrameId_SL_Info */
    },                                 /* Header */

    {
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
    ,                                  /* ChildFrameId */

    {
      0U,                              /* CurrentLength */
      0U                               /* ReceivedLength */
    },                                 /* ChildFrameId_SL_Info */

    {
      {
        {
          0.0,                         /* X */
          0.0,                         /* Y */
          0.0                          /* Z */
        },                             /* Position */

        {
          0.0,                         /* X */
          0.0,                         /* Y */
          0.0,                         /* Z */
          0.0                          /* W */
        }                              /* Orientation */
      },                               /* Pose */

      {
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
      /* Covariance */
    },                                 /* Pose */

    {
      {
        {
          0.0,                         /* X */
          0.0,                         /* Y */
          0.0                          /* Z */
        },                             /* Linear */

        {
          0.0,                         /* X */
          0.0,                         /* Y */
          0.0                          /* Z */
        }                              /* Angular */
      },                               /* Twist */

      {
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
      /* Covariance */
    }                                  /* Twist */
  },

  /* Computed Parameter: Constant_Value
   * Referenced by: '<S7>/Constant'
   */
  {
    {
      0U,                              /* Seq */

      {
        0.0,                           /* Sec */
        0.0                            /* Nsec */
      },                               /* Stamp */

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                /* FrameId */

      {
        0U,                            /* CurrentLength */
        0U                             /* ReceivedLength */
      }                                /* FrameId_SL_Info */
    },                                 /* Header */

    {
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
    ,                                  /* ChildFrameId */

    {
      0U,                              /* CurrentLength */
      0U                               /* ReceivedLength */
    },                                 /* ChildFrameId_SL_Info */

    {
      {
        {
          0.0,                         /* X */
          0.0,                         /* Y */
          0.0                          /* Z */
        },                             /* Position */

        {
          0.0,                         /* X */
          0.0,                         /* Y */
          0.0,                         /* Z */
          0.0                          /* W */
        }                              /* Orientation */
      },                               /* Pose */

      {
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
      /* Covariance */
    },                                 /* Pose */

    {
      {
        {
          0.0,                         /* X */
          0.0,                         /* Y */
          0.0                          /* Z */
        },                             /* Linear */

        {
          0.0,                         /* X */
          0.0,                         /* Y */
          0.0                          /* Z */
        }                              /* Angular */
      },                               /* Twist */

      {
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
      /* Covariance */
    }                                  /* Twist */
  },

  /* Computed Parameter: Constant_Value_o
   * Referenced by: '<S6>/Constant'
   */
  {
    {
      0.0,                             /* X */
      0.0,                             /* Y */
      0.0                              /* Z */
    },                                 /* Linear */

    {
      0.0,                             /* X */
      0.0,                             /* Y */
      0.0                              /* Z */
    }                                  /* Angular */
  },

  /* Computed Parameter: Out1_Y0_e
   * Referenced by: '<S8>/Out1'
   */
  {
    0.0,                               /* X */
    0.0,                               /* Y */
    0.0                                /* Z */
  },

  /* Computed Parameter: Constant_Value_g
   * Referenced by: '<S2>/Constant'
   */
  {
    0.0,                               /* X */
    0.0,                               /* Y */
    0.0                                /* Z */
  },

  /* Computed Parameter: Filter_gainval
   * Referenced by: '<S38>/Filter'
   */
  0.01,

  /* Computed Parameter: Filter_gainval_l
   * Referenced by: '<S90>/Filter'
   */
  0.01,

  /* Computed Parameter: Filter_gainval_e
   * Referenced by: '<S142>/Filter'
   */
  0.01
};
