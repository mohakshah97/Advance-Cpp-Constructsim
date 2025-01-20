#include "robot_info/robot_info_class.h"
#include "ros/node_handle.h"
#include <iostream>
#include "robotinfo_msgs/RobotInfo10Fields.h"

RobotInfo::RobotInfo(ros::NodeHandle &nh, const std::string& topic_name): nh_(nh), topic_name_(topic_name){
    publisher_ = nh_.advertise<robotinfo_msgs::RobotInfo10Fields>(topic_name_,10);
}

void RobotInfo::publish_data(){
   robotinfo_msgs::RobotInfo10Fields msg;
   msg.data_field_01 = robot_descrption;
   msg.data_field_02 = serial_number; 
   msg.data_field_03 = ip_adress;
   msg.data_field_04 = firmware_version;
   publisher_.publish(msg);
}