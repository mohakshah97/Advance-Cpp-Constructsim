#ifndef ROBOT_INFO_CLASS_H
#define ROBOT_INFO_CLASS_H

#include <ros/ros.h>
#include <iostream>
#include <string>
//#include <robot_info_msg>

class RobotInfo {
public:
    //RobotInfo(){};
    RobotInfo(ros::NodeHandle &nh, const std::string& topic_name);
    virtual void publish_data();
    //virtual ~RobotInfo(){};
    

protected:
    std::string robot_descrption = "robot_description: Mir100";
    std::string serial_number = "serial_number: 567A359";
    std::string ip_adress = "ip_address: 169.254.5.180";
    std::string firmware_version = "firmware_version: 3.5.8";
    ros::NodeHandle nh_;
    std::string topic_name_;
    ros::Publisher publisher_;
};

#endif // ROBOT_INFO_CLASS_H