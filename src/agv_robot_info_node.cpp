#include "robot_info/agv_robot_info_class.h"
#include "robotinfo_msgs/RobotInfo10Fields.h"
#include <ros/ros.h>

int main(int argc, char** argv){

    ros::init(argc,argv,"agv_robot_info_node"); // node name= robot_info_node
    ros::NodeHandle nh1;
    ros::Rate loop_rate(10);
    AGVRobotInfo agv_robot1 = AGVRobotInfo(nh1,"robot_info"); // topic name = robot_info
    
    while (ros::ok()){
        agv_robot1.publish_data();
        ros::spinOnce();
        loop_rate.sleep();
    }
    
    return 0;
}