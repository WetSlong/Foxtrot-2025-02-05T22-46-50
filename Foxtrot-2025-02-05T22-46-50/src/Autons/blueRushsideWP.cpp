#include "vex.h"
#include "globals.h"
#include "ladyBrownPID.h"


void blueRushsideWP(){
default_constants();
chassis.drive_max_voltage = 8;
////////////////////////////////////////////////////////////////////
//                         Drive Constants
////////////////////////////////////////////////////////////////////



chassis.drive_distance(24);
chassis.turn_to_angle(-320);
chassis.drive_max_voltage = 4;
chassis.drive_distance(14);
Piston=true;
task::sleep(100);
Intake.spin(fwd, 100,percent);
Intake2.spin(fwd, 100,percent);
chassis.turn_to_angle(90);
chassis.drive_max_voltage = 8;
chassis.drive_distance(-18);
chassis.turn_to_angle(-66);
task::sleep(100);
Piston=false;
chassis.drive_distance(-39);
chassis.drive_max_voltage = 4;
 moveArmToPosition(LADY_BROWN_LOAD);
Piston2=true;
chassis.drive_distance(-20);
Piston2=false;
task::sleep(600);
chassis.turn_to_angle(-360);
task::sleep(200);
 Intake.stop(brakeType::coast);
  Intake.spin(reverse, 5,percent);
  task::sleep(10);
chassis.drive_distance(-13.5);
  moveArmToPosition(LADY_BROWN_STAKE);
task::sleep(100);
  Intake.stop(brakeType::coast);
    Intake2.stop(brakeType::coast);
  Intake2.spin(reverse, 100,percent);
chassis.drive_distance(22);
  chassis.drive_max_voltage = 4;
  chassis.turn_to_angle(174);








}



 


