#include "lemlib/chassis/chassis.hpp"
#include "main.h"

extern pros::Controller controller;
extern pros::MotorGroup left; 
extern pros::MotorGroup right;

extern lemlib::Drivetrain drivetrain;

extern lemlib::OdomSensors odom;
extern lemlib::ControllerSettings latCon; //lateral controller object
extern lemlib::ControllerSettings angCon; //angular controller object
extern lemlib::Chassis chassis; 
