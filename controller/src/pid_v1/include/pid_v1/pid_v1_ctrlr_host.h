//
// Code generated for Simulink model 'pid_v1'.
//
// Model version                  : 1.34
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Fri Sep 12 18:04:47 2025
//

#pragma once

#include <controller_interface/controller.h>
#include <controller_interface/multi_interface_controller.h>
#include <hardware_interface/joint_command_interface.h>
#include <hardware_interface/joint_command_interface.h>
#include <realtime_tools/realtime_buffer.h>
#include <realtime_tools/realtime_publisher.h>

// Declare dynamic reconf server and configuration header
#include <dynamic_reconfigure/server.h>
#include <pid_v1/ControllerHostConfig.h>
#include <ros/node_handle.h>
#include <ros/time.h>
#include "pid_v1.h"
#include "slros_initialize.h"

// Extern declaration for Simulink model input structure
extern ExtU_pid_v1_T pid_v1_U;

// Extern declaration for Simulink model output structure
extern ExtY_pid_v1_T pid_v1_Y;
namespace pid_v1
{
  class ControllerHost : public controller_interface::MultiInterfaceController<
    hardware_interface::EffortJointInterface
    ,
    hardware_interface::PositionJointInterface
    >
  {
   public:
    ControllerHost()
    {
    }

    ~ControllerHost()
    {
      pid_v1_terminate();
    }

    bool init(hardware_interface::RobotHW* hw, ros::NodeHandle& nh) override;
    void starting(const ros::Time& time) override;
    void update(const ros::Time& time, const ros::Duration& period) override;
    void stopping (const ros::Time& time) override;
   private:
    void reset();

    // Declare the hardware interfaces
    hardware_interface::JointHandle joint_handle0_;
    hardware_interface::JointHandle joint_handle1_;

    // Declare a struct to hold dynamic parameters set from dynamic_reconfigure server
    struct DynamicParams
    {
      double X_P;
      double Y_P;
      double Z_P;
      DynamicParams():
        X_P(0.7),
        Y_P(0.7),
        Z_P(0.7)
      {
      }
    };

    friend std::ostream& operator<<(std::ostream& os, const DynamicParams&
      params)
    {
      os << "DynamicParams:\n"
        //
        << "\tX_P: " << params.X_P << "\n"
        << "\tY_P: " << params.Y_P << "\n"
        << "\tZ_P: " << params.Z_P << "\n"
        ;
      return os;
    }

    // RT safe buffer for dynamic reconfigure request data
    realtime_tools::RealtimeBuffer<DynamicParams> dynamic_params_;

    // Dynamic Reconfigure server
    typedef dynamic_reconfigure::Server<ControllerHostConfig> ReconfigureServer;
    std::shared_ptr<ReconfigureServer> dyn_reconf_server_;
    boost::recursive_mutex dyn_reconf_server_mutex_;
    void reconfCallback(ControllerHostConfig& config, uint32_t /*level*/
                        );
    void updateDynamicParams();
  };
}                                      // namespace pid_v1

//
// File trailer for generated code.
//
// [EOF]
//
