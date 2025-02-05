#include "vex.h"
#include "globals.h"
#include "ladyBrownPID.h"

void blueWP(){
default_constants();
  chassis.drive_max_voltage = 12;
  chassis.drive_distance(25);
    chassis.drive_max_voltage = 7;
  chassis.drive_distance(8);

  Piston=true;
  chassis.drive_max_voltage = 12;
  Intake.spin(fwd, 100,percent);
  Intake2.spin(fwd, 100,percent);
  task::sleep(100);
  chassis.turn_to_angle(290);
  chassis.drive_distance(-26);
    chassis.drive_distance(2);
  chassis.turn_to_angle(210);
  chassis.drive_distance(-20);
  chassis.turn_to_angle(245);
    chassis.drive_distance(-1.5);
  chassis.drive_distance (53);
   chassis.turn_to_angle(-240);
  Intake.stop(brakeType::coast);
  Intake2.stop(brakeType::coast);
  Piston=false;
 Piston2=true;
 moveArmToPosition(LADY_BROWN_LOAD);
 task::sleep(100);
  chassis.drive_max_voltage = 4;
  Intake2.spin(fwd, 100,percent);
  Intake.spin(fwd, 100,percent);
  chassis.drive_distance(-39);
  Piston2=false;
    task::sleep(500);
  chassis.drive_max_voltage = 8;
  chassis.turn_to_angle(-336);
  task::sleep(300);
  Intake.stop(brakeType::coast);
  Intake.spin(reverse, 5,percent);
  task::sleep(10);
  chassis.drive_distance(-13.5);
  moveArmToPosition(LADY_BROWN_STAKE);
task::sleep(100);
  Intake.stop(brakeType::coast);
      Intake2.spin(reverse, 100,percent);
  chassis.drive_distance(25);
 chassis.drive_max_voltage = 4;
  chassis.turn_to_angle(200);


  
}



