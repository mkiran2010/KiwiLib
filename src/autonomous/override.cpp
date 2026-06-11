#include "autonomous/autonomous.hpp"
#include "lemlib/chassis/chassis.hpp"

void override() {
    // beginning turn
    // intakeState = 1;
    chassis.setPose(-1, -1, 0);
    chassis.moveDistance(3, 500);
    chassis.turnToHeading(90, 500);
    chassis.setPose(1, -1, 90);
    chassis.distanceReset('R', 'F');

    // get the first pin
    chassis.moveToPoint(94, -64, 750);
    chassis.moveToPoint(111, -54, 600);
    

    // turn to the next pin and get it
    chassis.turnToHeading(-42, 500);
    chassis.moveToPoint(93, -29, 750);
    
    // outtake previous pin code
    // chassis.turnToHeading(3, 300);
    // intakeState = 2;
    // chassis.turnToHeading(-42, 300);
    // intakeState = 1;

    //go to the quart
    chassis.turnToHeading(-97, 750);
    chassis.moveToPoint(47.5, -27, 1500);
    chassis.moveDistance(7, 300);
    chassis.moveDistance(-10, 300, {.forwards = false});

    // wait a bit to calibrate
    pros::delay(500);
    chassis.moveToPoint(12, -7, 1800);
    chassis.turnToHeading(0, 500);

   
    // reset distance sensor 
    chassis.distanceReset('L', 'B');



    //go to the wall pin

     // go to the next pin




}
