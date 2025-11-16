#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "pid_v1_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block pid_v1/Subscribe
extern SimulinkSubscriber<geometry_msgs::Point, SL_Bus_pid_v1_geometry_msgs_Point> Sub_pid_v1_244;

// For Block pid_v1/position reading
extern SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_pid_v1_nav_msgs_Odometry> Sub_pid_v1_1;

// For Block pid_v1/Publish
extern SimulinkRTPublisher<geometry_msgs::Twist, SL_Bus_pid_v1_geometry_msgs_Twist> Pub_pid_v1_11;


#endif
