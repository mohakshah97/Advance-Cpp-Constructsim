#include "robot_info/robot_info_class.h"
#include "robotinfo_msgs/RobotInfo10Fields.h"
#include <ros/ros.h>

int main(int argc, char** argv){

    ros::init(argc,argv,"robot_info_node"); // node name= robot_info_node
    ros::NodeHandle nh;
    //ros::Publisher pub = nh.advertise(nh,"robot_info");
    ros::Rate loop_rate(10);
    RobotInfo robot1 = RobotInfo(nh,"robot_info"); // topic name = robot_info
    
    while (ros::ok()){
        robot1.publish_data();
        ros::spinOnce();
        loop_rate.sleep();
    }
    
    return 0;
}