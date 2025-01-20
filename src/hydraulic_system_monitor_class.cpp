#include "robot_info/robot_info_class.h"
#include "robot_info/hydraulic_system_monitor_class.h"
#include "ros/ros.h"
#include <iostream>
#include <ostream>
#include <string>

HydraulicSystemMonitor::HydraulicSystemMonitor(){
    temperature = "hydraulic_oil_temperature: 45C";
    fill_level = "hydraulic_oil_tank_fill_level: 100%";
    pressure = "hydraulic_oil_pressure: 250 bar";
}

std::string HydraulicSystemMonitor::get_oil_temperature(){
    return temperature;
}

std::string HydraulicSystemMonitor::get_oil_pressure(){
    return pressure;
}

std::string HydraulicSystemMonitor::get_oil_tank_fill_level(){
    return fill_level;
}

void HydraulicSystemMonitor::get_oil_system_info(){

    std::cout << temperature << std::endl;
    std::cout << fill_level << std::endl;
    std::cout << pressure << std::endl;
}