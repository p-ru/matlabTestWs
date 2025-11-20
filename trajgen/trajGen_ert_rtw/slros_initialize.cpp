#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "trajGen";

// For Block trajGen/Subscribe
SimulinkSubscriber<geometry_msgs::Point, SL_Bus_trajGen_geometry_msgs_Point> Sub_trajGen_180;

// For Block trajGen/Subscribe1
SimulinkSubscriber<std_msgs::Bool, SL_Bus_trajGen_std_msgs_Bool> Sub_trajGen_254;

// For Block trajGen/position reading
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_trajGen_nav_msgs_Odometry> Sub_trajGen_229;

// For Block trajGen/Publish
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_trajGen_geometry_msgs_Twist> Pub_trajGen_43;

// For Block trajGen/Get Parameter
SimulinkParameterGetter<real64_T, double> ParamGet_trajGen_152;

// For Block trajGen/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_trajGen_279;

// For Block trajGen/Call Service
SimulinkServiceCaller<std_srvs::SetBool, SL_Bus_trajGen_std_srvs_SetBoolRequest, SL_Bus_trajGen_std_srvs_SetBoolResponse> ServCall_trajGen_307;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

