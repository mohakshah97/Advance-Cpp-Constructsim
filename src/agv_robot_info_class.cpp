#include "robot_info/agv_robot_info_class.h"
#include "robot_info/robot_info_class.h"
#include "ros/ros.h"
#include <iostream>
#include "robotinfo_msgs/RobotInfo10Fields.h"

AGVRobotInfo::AGVRobotInfo(ros::NodeHandle &nh, const std::string& topic_name):RobotInfo(nh, topic_name){
    nh_ = nh;
    topic_name_ = topic_name;
    //_publisher_ = nh_.advertise<robotinfo_msgs::RobotInfo10Fields>(topic_name_,10);
    _publisher_ = publisher_;
}


void AGVRobotInfo::publish_data(){
   robotinfo_msgs::RobotInfo10Fields msg;
   msg.data_field_01 = robot_descrption;
   msg.data_field_02 = serial_number; 
   msg.data_field_03 = ip_adress;
   msg.data_field_04 = firmware_version;
   msg.data_field_05 = maximum_payload;
   _publisher_.publish(msg);
}