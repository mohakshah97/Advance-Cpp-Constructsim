#ifndef AGV_ROBOT_INFO_CLASS_H
#define AGV_ROBOT_INFO_CLASS_H

#include "robot_info/robot_info_class.h"
#include "robot_info/hydraulic_system_monitor_class.h"
#include <ros/ros.h>
#include <iostream>
#include <string>

class AGVRobotInfo: public RobotInfo{

public:
    AGVRobotInfo(ros::NodeHandle &nh, const std::string& topic_name);
    void publish_data() override;
    HydraulicSystemMonitor hydraulicsystemmonitor;

protected:
    std::string maximum_payload = "maximum_payload: 100 Kg";
    std::string oil_pressure;
    std::string oil_tank_fill_level;
    std::string oil_temperature;
    void oil_system_info();

private:
    ros::NodeHandle _nh_;
    std::string _topic_name_;
    ros::Publisher _publisher_;
};

#endif // AGV_ROBOT_INFO_CLASS_H