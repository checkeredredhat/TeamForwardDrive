#include "objects.hpp";

pros::Controller controller(pros::E_CONTROLLER_MASTER);

pros::MotorGroup left({0, 0, 0});
pros::MotorGroup right({0, 0, 0});

lemlib::Drivetrain drivetrain(&left, &right, 9.658, 1.75, 360, 0);

