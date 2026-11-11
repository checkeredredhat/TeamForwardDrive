#include "main.h"
#include "objects.hpp"

void opcontrol(){
    while (true) {
        int throttle = controller.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
         int turn = controller.get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_X);

         chassis.arcade(throttle, turn);

         pros::delay(10);
    };
}
