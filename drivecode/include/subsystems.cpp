#include "subsystems.hpp"

static pros::Motor intake(7, pros::MotorGearset::blue);   // match  real port  
static pros::Motor flag(8, pros::MotorGearset::blue);       // match real real port  

static constexpr double FLAG_DOWN  = 0;
static constexpr double FLAG_UP    = 300;   // calibrate this
static constexpr int    FLAG_SPEED = 100;   // rpm

static bool flagUp = false;

void subsystemsInit() {
    flag.set_brake_mode(pros::MotorBrake::hold);
    flag.tare_position();   // start with the flag DOWN
}

void subsystemsUpdate(pros::Controller& controller) {
    // Intake: R1 = in, R2 = out
    if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R1)) {
        intake.move(127);
    } else if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2)) {
        intake.move(-127);
    } else {
        intake.move(0);
    }

    // Flag toggle: L1
    if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_L1)) {
        flagUp = !flagUp;
        flag.move_absolute(flagUp ? FLAG_UP : FLAG_DOWN, FLAG_SPEED);
    }
}