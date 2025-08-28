/*
 * greenhouseHoverTest_types.h
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

#ifndef greenhouseHoverTest_types_h_
#define greenhouseHoverTest_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_greenhouseHoverTest_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_greenhouseHoverTest_geometry_msgs_Vector3_

struct SL_Bus_greenhouseHoverTest_geometry_msgs_Vector3
{
  real_T X;
  real_T Y;
  real_T Z;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_greenhouseHoverTest_geometry_msgs_Twist_
#define DEFINED_TYPEDEF_FOR_SL_Bus_greenhouseHoverTest_geometry_msgs_Twist_

struct SL_Bus_greenhouseHoverTest_geometry_msgs_Twist
{
  SL_Bus_greenhouseHoverTest_geometry_msgs_Vector3 Linear;
  SL_Bus_greenhouseHoverTest_geometry_msgs_Vector3 Angular;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_greenhouseHoverTest_geometry_msgs_Point_
#define DEFINED_TYPEDEF_FOR_SL_Bus_greenhouseHoverTest_geometry_msgs_Point_

struct SL_Bus_greenhouseHoverTest_geometry_msgs_Point
{
  real_T X;
  real_T Y;
  real_T Z;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_greenhouseHoverTest_ros_time_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_greenhouseHoverTest_ros_time_Time_

struct SL_Bus_greenhouseHoverTest_ros_time_Time
{
  real_T Sec;
  real_T Nsec;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

struct SL_Bus_ROSVariableLengthArrayInfo
{
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_greenhouseHoverTest_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_greenhouseHoverTest_std_msgs_Header_

struct SL_Bus_greenhouseHoverTest_std_msgs_Header
{
  uint32_T Seq;
  SL_Bus_greenhouseHoverTest_ros_time_Time Stamp;
  uint8_T FrameId[128];
  SL_Bus_ROSVariableLengthArrayInfo FrameId_SL_Info;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_greenhouseHoverTest_geometry_msgs_Quaternion_
#define DEFINED_TYPEDEF_FOR_SL_Bus_greenhouseHoverTest_geometry_msgs_Quaternion_

struct SL_Bus_greenhouseHoverTest_geometry_msgs_Quaternion
{
  real_T X;
  real_T Y;
  real_T Z;
  real_T W;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_greenhouseHoverTest_geometry_msgs_Pose_
#define DEFINED_TYPEDEF_FOR_SL_Bus_greenhouseHoverTest_geometry_msgs_Pose_

struct SL_Bus_greenhouseHoverTest_geometry_msgs_Pose
{
  SL_Bus_greenhouseHoverTest_geometry_msgs_Point Position;
  SL_Bus_greenhouseHoverTest_geometry_msgs_Quaternion Orientation;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_greenhouseHoverTest_geometry_msgs_PoseWithCovariance_
#define DEFINED_TYPEDEF_FOR_SL_Bus_greenhouseHoverTest_geometry_msgs_PoseWithCovariance_

struct SL_Bus_greenhouseHoverTest_geometry_msgs_PoseWithCovariance
{
  SL_Bus_greenhouseHoverTest_geometry_msgs_Pose Pose;
  real_T Covariance[36];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_greenhouseHoverTest_TwistWithCovariance_9kt6rd_
#define DEFINED_TYPEDEF_FOR_SL_Bus_greenhouseHoverTest_TwistWithCovariance_9kt6rd_

struct SL_Bus_greenhouseHoverTest_TwistWithCovariance_9kt6rd
{
  SL_Bus_greenhouseHoverTest_geometry_msgs_Twist Twist;
  real_T Covariance[36];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_greenhouseHoverTest_nav_msgs_Odometry_
#define DEFINED_TYPEDEF_FOR_SL_Bus_greenhouseHoverTest_nav_msgs_Odometry_

struct SL_Bus_greenhouseHoverTest_nav_msgs_Odometry
{
  SL_Bus_greenhouseHoverTest_std_msgs_Header Header;
  uint8_T ChildFrameId[128];
  SL_Bus_ROSVariableLengthArrayInfo ChildFrameId_SL_Info;
  SL_Bus_greenhouseHoverTest_geometry_msgs_PoseWithCovariance Pose;
  SL_Bus_greenhouseHoverTest_TwistWithCovariance_9kt6rd Twist;
};

#endif

#ifndef struct_ros_slroscpp_internal_block_P_T
#define struct_ros_slroscpp_internal_block_P_T

struct ros_slroscpp_internal_block_P_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                              /* struct_ros_slroscpp_internal_block_P_T */

#ifndef struct_ros_slroscpp_internal_block_S_T
#define struct_ros_slroscpp_internal_block_S_T

struct ros_slroscpp_internal_block_S_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                              /* struct_ros_slroscpp_internal_block_S_T */

/* Forward declaration for rtModel */
typedef struct tag_RTM_greenhouseHoverTest_T RT_MODEL_greenhouseHoverTest_T;

#endif                                 /* greenhouseHoverTest_types_h_ */
