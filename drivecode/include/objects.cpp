#include "objects.hpp";

float trackWidth = 0; // temp placeholder bc idk what our track width is (note to self: measure in cad asap)

pros::Controller controller(pros::E_CONTROLLER_MASTER);

pros::MotorGroup left({0, 0, 0});
pros::MotorGroup right({0, 0, 0});

lemlib::Drivetrain drivetrain(&left, &right, trackWidth, 1.75, 360, 0);

