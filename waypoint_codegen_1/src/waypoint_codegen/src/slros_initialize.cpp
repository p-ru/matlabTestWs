#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "waypoint_codegen";

// For Block waypoint_codegen/position reading
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_waypoint_codegen_nav_msgs_Odometry> Sub_waypoint_codegen_1;

// For Block waypoint_codegen/Publish1
SimulinkPublisher<geometry_msgs::Point, SL_Bus_waypoint_codegen_geometry_msgs_Point> Pub_waypoint_codegen_253;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

