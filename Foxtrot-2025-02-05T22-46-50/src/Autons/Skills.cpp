#include "vex.h"
#include "globals.h"
#include "ladyBrownPID.h"


void Skills(){
 default_constants();
  chassis.drive_max_voltage = 3;
  chassis.drive_distance(8);
  Piston=true;
  task::sleep(200);
  chassis.drive_max_voltage = 3;
  chassis.turn_to_angle(155);
   Intake.spin(fwd, 100,percent);
  Intake2.spin(fwd, 100,percent);
  task::sleep(100);
    chassis.drive_max_voltage =8;
    chassis.drive_distance(-36);
task::sleep(100);
    chassis.turn_to_angle(240);
         chassis.drive_max_voltage = 8;
       chassis.drive_distance(-33);
       task::sleep(200);
           chassis.drive_max_voltage =6;
      chassis.turn_to_angle(332);
    chassis.drive_max_voltage =4;
      chassis.drive_distance(-40);
          chassis.drive_distance(-28);
              chassis.drive_max_voltage =8;
    chassis.drive_distance(27);
    chassis.turn_to_angle(285);
    chassis.drive_distance(-24);
    task::sleep(300);
      chassis.turn_to_angle(120);
      chassis.drive_distance(20);
      Intake.stop(brakeType::coast);
    Intake.spin(reverse, 100,percent);
    task::sleep(200);
          Intake.stop(brakeType::coast);
  Piston=false;
      chassis.drive_max_voltage =10;
  chassis.drive_distance(-12);
  chassis.turn_to_angle(240);
    chassis.drive_max_voltage =4;
  chassis.drive_distance(-14);
      chassis.drive_max_voltage =8;
     chassis.drive_distance(60);
     chassis.drive_distance(50);
      chassis.drive_max_voltage =3;
     chassis.drive_distance(14);
    Piston=true;
  task::sleep(100);
      Intake.spin(fwd, 100,percent);
        chassis.drive_max_voltage =8;
   chassis.turn_to_angle(138);
      chassis.drive_distance(-32);
     chassis.turn_to_angle(60);
      chassis.drive_distance(-40);
       chassis.drive_distance(6);
      chassis.turn_to_angle(120);
       chassis.drive_distance(-42);
        chassis.drive_distance(26);
        chassis.turn_to_angle(330);
      chassis.drive_max_voltage =5;
        chassis.drive_distance(-45);
      chassis.drive_distance(-45);
    chassis.drive_distance(12);
   chassis.turn_to_angle(60);
    chassis.drive_distance(-10);
    chassis.turn_to_angle(180);
      chassis.drive_distance(15);
Intake2.stop(brakeType::coast);
    Intake2.spin(reverse, 100,percent);
    task::sleep(200);
          Intake2.stop(brakeType::coast);
  Piston=false;
  chassis.drive_distance(-15);




}