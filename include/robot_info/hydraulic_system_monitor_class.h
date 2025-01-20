#ifndef HYDRAULIC_SYSTEM_MONITOR_CLASS_H
#define HYDRAULIC_SYSTEM_MONITOR_CLASS_H

#include "robot_info/robot_info_class.h"
#include <ros/ros.h>
#include <iostream>
#include <string>

class HydraulicSystemMonitor{


public:
    HydraulicSystemMonitor();
    std::string temperature;
    std::string fill_level;
    std::string pressure;
    std::string get_oil_temperature();
    std::string get_oil_pressure();
    std::string get_oil_tank_fill_level();
    void get_oil_system_info();

};

#endif //