#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "greenhouseHoverTest";

// For Block greenhouseHoverTest/Subscribe
SimulinkSubscriber<geometry_msgs::Point, SL_Bus_greenhouseHoverTest_geometry_msgs_Point> Sub_greenhouseHoverTest_244;

// For Block greenhouseHoverTest/position reading
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_greenhouseHoverTest_nav_msgs_Odometry> Sub_greenhouseHoverTest_1;

// For Block greenhouseHoverTest/Publish
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_greenhouseHoverTest_geometry_msgs_Twist> Pub_greenhouseHoverTest_11;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

