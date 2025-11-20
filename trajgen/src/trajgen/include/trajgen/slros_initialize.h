#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "slros_generic_service.h"
#include "trajGen_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block trajGen/Subscribe
extern SimulinkSubscriber<geometry_msgs::Point, SL_Bus_trajGen_geometry_msgs_Point> Sub_trajGen_180;

// For Block trajGen/Subscribe1
extern SimulinkSubscriber<std_msgs::Bool, SL_Bus_trajGen_std_msgs_Bool> Sub_trajGen_254;

// For Block trajGen/position reading
extern SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_trajGen_nav_msgs_Odometry> Sub_trajGen_229;

// For Block trajGen/Publish
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_trajGen_geometry_msgs_Twist> Pub_trajGen_43;

// For Block trajGen/Get Parameter
extern SimulinkParameterGetter<real64_T, double> ParamGet_trajGen_152;

// For Block trajGen/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_trajGen_279;

// For Block trajGen/Call Service
extern SimulinkServiceCaller<std_srvs::SetBool, SL_Bus_trajGen_std_srvs_SetBoolRequest, SL_Bus_trajGen_std_srvs_SetBoolResponse> ServCall_trajGen_307;

void slros_node_init(int argc, char** argv);

#endif
