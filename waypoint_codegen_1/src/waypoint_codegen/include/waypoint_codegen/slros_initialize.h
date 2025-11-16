#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "waypoint_codegen_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block waypoint_codegen/position reading
extern SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_waypoint_codegen_nav_msgs_Odometry> Sub_waypoint_codegen_1;

// For Block waypoint_codegen/Publish1
extern SimulinkPublisher<geometry_msgs::Point, SL_Bus_waypoint_codegen_geometry_msgs_Point> Pub_waypoint_codegen_253;

void slros_node_init(int argc, char** argv);

#endif
