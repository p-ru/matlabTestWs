#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "pid_v1";

// For Block pid_v1/Subscribe
SimulinkSubscriber<geometry_msgs::Point, SL_Bus_pid_v1_geometry_msgs_Point> Sub_pid_v1_244;

// For Block pid_v1/position reading
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_pid_v1_nav_msgs_Odometry> Sub_pid_v1_1;

// For Block pid_v1/Publish
SimulinkRTPublisher<geometry_msgs::Twist, SL_Bus_pid_v1_geometry_msgs_Twist> Pub_pid_v1_11;

