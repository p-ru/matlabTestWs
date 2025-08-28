#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "greenhouseHoverTest_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block greenhouseHoverTest/Subscribe
extern SimulinkSubscriber<geometry_msgs::Point, SL_Bus_greenhouseHoverTest_geometry_msgs_Point> Sub_greenhouseHoverTest_244;

// For Block greenhouseHoverTest/position reading
extern SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_greenhouseHoverTest_nav_msgs_Odometry> Sub_greenhouseHoverTest_1;

// For Block greenhouseHoverTest/Publish
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_greenhouseHoverTest_geometry_msgs_Twist> Pub_greenhouseHoverTest_11;

void slros_node_init(int argc, char** argv);

#endif
