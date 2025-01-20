#ifndef AGV_ROBOT_INFO_CLASS_H
#define AGV_ROBOT_INFO_CLASS_H

#include "robot_info/robot_info_class.h"
#include <ros/ros.h>
#include <iostream>
#include <string>

class AGVRobotInfo: public RobotInfo{

public:
    AGVRobotInfo(ros::NodeHandle &nh, const std::string& topic_name);
    void publish_data() override;

protected:
    std::string maximum_payload = "maximum_payload: 100 Kg";

private:
    ros::NodeHandle _nh_;
    std::string _topic_name_;
    ros::Publisher _publisher_;
};

#endif // AGV_ROBOT_INFO_CLASS_H