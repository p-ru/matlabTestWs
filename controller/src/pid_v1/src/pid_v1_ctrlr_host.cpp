//
// Code generated for Simulink model 'pid_v1'.
//
// Model version                  : 1.34
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Fri Sep 12 18:04:47 2025
//

#include "pid_v1_ctrlr_host.h"
#include <pluginlib/class_list_macros.h>
#include <ros/ros.h>

// Model Includes
#include "pid_v1.h"

extern ros::NodeHandle * SLROSNodePtr;
namespace pid_v1
{
  bool ControllerHost::init(hardware_interface::RobotHW* hw, ros::NodeHandle& nh)
  {
    // Get joint interface handles
    hardware_interface::EffortJointInterface *eff_joint_if = hw->get<
      hardware_interface::EffortJointInterface>();
    hardware_interface::PositionJointInterface *pos_joint_if = hw->get<
      hardware_interface::PositionJointInterface>();

    // Retrieve command handles from robot hardware interface
    try {
      ROS_INFO_STREAM_NAMED("init", "Retrieving '" << "in_test_1" <<
                            "' from interface");
      joint_handle0_ = pos_joint_if->getHandle("in_test_1");
      ROS_INFO_STREAM_NAMED("init", "Retrieving '" << "out_test_1" <<
                            "' from interface");
      joint_handle1_ = eff_joint_if->getHandle("out_test_1");
    } catch (hardware_interface::HardwareInterfaceException const& e) {
      ROS_ERROR_STREAM_NAMED("init", "Error retrieving joint: " << e.what());
      return false;
    }

    // Assign global Simulink ROS Node handle
    SLROSNodePtr = &nh;

    // Dynamic reconfigure RT storage buffer
    DynamicParams dynamic_params;
    dynamic_params.X_P = pid_v1_P.X_P;
    dynamic_params.Y_P = pid_v1_P.Y_P;
    dynamic_params.Z_P = pid_v1_P.Z_P;
    dyn_reconf_server_ = std::make_shared<ReconfigureServer>
      (dyn_reconf_server_mutex_, nh);
    ControllerHostConfig config;
    config.X_P = pid_v1_P.X_P;
    config.Y_P = pid_v1_P.Y_P;
    config.Z_P = pid_v1_P.Z_P;
    dyn_reconf_server_mutex_.lock();
    dyn_reconf_server_->updateConfig(config);
    dyn_reconf_server_mutex_.unlock();

    // enable processing incoming reconfiguration requests
    dyn_reconf_server_->setCallback(boost::bind(&ControllerHost::reconfCallback,
      this, _1, _2));

    // Initialize Simulink controller
    pid_v1_initialize();

    // done
    return true;
  }

  void ControllerHost::reset()
  {
    // Set output velocity and effort interface commands to zero
    // for other intefaces default output values depend on controller status
    joint_handle0_.setCommand(0.0);
  }

  void ControllerHost::starting(const ros::Time& time)
  {
    ROS_INFO_STREAM_NAMED("starting", "Starting at time " << time);
    reset();
  }

  void ControllerHost::stopping(const ros::Time& time)
  {
    ROS_INFO_STREAM_NAMED("stopping", "Stopping at time " << time);
    reset();
  }

  void ControllerHost::update(const ros::Time& time, const ros::Duration& period)
  {
    updateDynamicParams();

    // Get model inputs from resources
    pid_v1_U.In_test_1 = joint_handle0_.getCommand();

    // trigger Simulink tick/update
    pid_v1_step();

    // Write model output to resources
    joint_handle1_.setCommand(pid_v1_Y.out_test_1);
  }

  void ControllerHost::reconfCallback(ControllerHostConfig& config, uint32_t /*level*/
    )
  {
    // copy incoming data to RT buffer
    DynamicParams dynamic_params;
    dynamic_params.X_P = config.X_P;
    dynamic_params.Y_P = config.Y_P;
    dynamic_params.Z_P = config.Z_P;
    dynamic_params_.writeFromNonRT(dynamic_params);

    // Print dynamic parameters when changed
    ROS_INFO_STREAM_NAMED("reconfigure", "Dynamic Reconfigure:\n" <<
                          dynamic_params);
  }

  void ControllerHost::updateDynamicParams()
  {
    // update internal config based on data in RT buffer
    const auto dynamic_params = *(dynamic_params_.readFromRT());
    pid_v1_P.X_P = dynamic_params.X_P;
    pid_v1_P.Y_P = dynamic_params.Y_P;
    pid_v1_P.Z_P = dynamic_params.Z_P;
  }
}                                      // ~namespace pid_v1

PLUGINLIB_EXPORT_CLASS(pid_v1::ControllerHost, controller_interface::
  ControllerBase)
//
// File trailer for generated code.
//
// [EOF]
//
