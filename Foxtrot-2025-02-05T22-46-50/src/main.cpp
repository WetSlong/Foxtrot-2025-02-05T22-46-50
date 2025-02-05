#include "vex.h"
#include "globals.h"
#include "ladyBrownPID.h"
#include "controllerTempCheck.h"
#include "autons.h"

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// Controller2          controller                    
// LeftWheel            motor         19              
// RightWheel           motor         11              
// LeftWheel2           motor         20              
// RightWheel2          motor         1               
// Intake               motor         12              
// Intake2              motor         16              
// Piston               digital_out   A               
// Piston2              digital_out   B               
// MiddleLeftWheel      motor         8               
// MiddleRightWheel     motor         13              
// Inertial             inertial      18              
// Piston3              digital_out   C               
// RotationSensor       rotation      9               
// LadyBrown1           motor         15              
// intake2              motor         10              
// ---- END VEXCODE CONFIGURED DEVICES ----

using namespace vex;
competition Competition;

Drive chassis(

//Specify your drive setup below. There are seven options:
//ZERO_TRACKER_NO_ODOM, ZERO_TRACKER_ODOM, TANK_ONE_ENCODER, TANK_ONE_ROTATION, TANK_TWO_ENCODER, TANK_TWO_ROTATION, HOLONOMIC_TWO_ENCODER, and HOLONOMIC_TWO_ROTATION
//For example, if you are not using odometry, put ZERO_TRACKER_NO_ODOM below:
ZERO_TRACKER_NO_ODOM,

//Add the names of your Drive motors into the motor groups below, separated by commas, i.e. motor_group(Motor1,Motor2,Motor3).
//You will input whatever motor names you chose when you configured your robot using the sidebar configurer, they don't have to be "Motor1" and "Motor2".

//Left Motors:
motor_group(LeftWheel,LeftWheel2,MiddleLeftWheel),

//Right Motors:
motor_group(RightWheel,RightWheel2,MiddleRightWheel),


//Specify the PORT NUMBER of your inertial sensor, in PORT format (i.e. "PORT1", not simply "1"):
PORT18,

//Input your wheel diameter. (4" omnis are actually closer to 4.125"):
3.25,

//External ratio, must be in decimal, in the format of input teeth/output teeth.
//If your motor has an 84-tooth gear and your wheel has a 60-tooth gear, this value will be 1.4.
//If the motor drives the wheel directly, this value is 1:
1,

//Gyro scale, this is what your gyro reads when you spin the robot 360 degrees.
//For most cases 360 will do fine here, but this scale factor can be very helpful when precision is necessary.
360,

/*---------------------------------------------------------------------------*/
/*                                  PAUSE!                                   */
/*                                                                           */
/*  The rest of the drive constructor is for robots using POSITION TRACKING. */
/*  If you are not using position tracking, leave the rest of the values as  */
/*  they are.                                                                */
/*---------------------------------------------------------------------------*/

//If you are using ZERO_TRACKER_ODOM, you ONLY need to adjust the FORWARD TRACKER CENTER DISTANCE.

//FOR HOLONOMIC DRIVES ONLY: Input your drive motors by position. This is only necessary for holonomic drives, otherwise this section can be left alone.
//LF:      //RF:    
PORT1,     -PORT2,

//LB:      //RB: 
PORT3,     -PORT4,

//If you are using position tracking, this is the Forward Tracker port (the tracker which runs parallel to the direction of the chassis).
//If this is a rotation sensor, enter it in "PORT1" format, inputting the port below.
//If this is an encoder, enter the port as an integer. Triport A will be a "1", Triport B will be a "2", etc.
3,

//Input the Forward Tracker diameter (reverse it to make the direction switch):
2.75,

//Input Forward Tracker center distance (a positive distance corresponds to a tracker on the right side of the robot, negative is left.)
//For a zero tracker tank drive with odom, put the positive distance from the center of the robot to the right side of the drive.
//This distance is in inches:
-2,

//Input the Sideways Tracker Port, following the same steps as the Forward Tracker Port:
1,

//Sideways tracker diameter (reverse to make the direction switch):
-2.75,

//Sideways tracker center distance (positive distance is behind the center of the robot, negative is in front):
5.5

);

/*---------------------------------------------------------------------------*/
/*                             VEXcode Config                                */
/*                                                                           */
/*  Before you do anything else, start by configuring your motors and        */
/*  sensors using the V5 port icon in the top right of the screen. Doing     */
/*  so will update robot-config.cpp and robot-config.h automatically, so     */
/*  you don't have to. Ensure that your motors are reversed properly. For    */
/*  the drive, spinning all motors forward should drive the robot forward.   */
/*---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------*/
/*                             JAR-Template Config                           */
/*                                                                           */
/*  Where all the magic happens. Follow the instructions below to input      */
/*  all the physical constants and values for your robot. You should         */
/*  already have configured your robot manually with the sidebar configurer. */
/*---------------------------------------------------------------------------*/



void pre_auton(void) {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  default_constants();
  Inertial.startCalibration();
  Inertial.calibrate();
  RotationSensor.resetPosition();

}

void autonomous(void) {
//redRushsideWP();
 //Skills();
//blueRushsideWP(); 
//redWP();
blueWP();

}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void usercontrol(void) {

int Intakemotor1SpeedPCT = 100;


   while (1) {

    if(Controller2.ButtonR2.pressing()) {
    Intake.spin(vex::directionType::fwd,Intakemotor1SpeedPCT,vex::velocityUnits::pct);
    Intake2.spin(vex::directionType::fwd,Intakemotor1SpeedPCT,vex::velocityUnits::pct);
   }
   else if
   (Controller2.ButtonR1.pressing()){
    Intake.spin(vex::directionType::rev,Intakemotor1SpeedPCT,vex::velocityUnits::pct);
    Intake2.spin(vex::directionType::rev,Intakemotor1SpeedPCT,vex::velocityUnits::pct);
   }
   else{
    Intake.stop(vex::brakeType::coast);
    Intake2.stop(vex::brakeType::coast);
   
   }

if(Controller2.ButtonA.pressing()) {
   
   //ladyBrownVariableCount();

   //ladyBrownBoolCounter++;
   }
if(Controller2.ButtonL1.pressing()) {
    LadyBrown1.spin(vex::directionType::rev,Intakemotor1SpeedPCT,vex::velocityUnits::pct);

   }
   else if
   (Controller2.ButtonL2.pressing()){
    LadyBrown1.spin(vex::directionType::fwd,Intakemotor1SpeedPCT,vex::velocityUnits::pct);
   }
   else{
    LadyBrown1.stop(vex::brakeType::hold);

   }
   if(Controller1.ButtonL1.pressing()) {
     Piston=true;
   }
   if(Controller1.ButtonL2.pressing()) {
     Piston=false;
   }
  if(Controller2.ButtonX.pressing()) {
     Piston2=true;
   }
   if(Controller2.ButtonY.pressing()) {
     Piston2=false;
   }

   
   if(Controller2.ButtonUp.pressing()) {
     Piston3=true;
   }
      if(Controller2.ButtonDown.pressing()) {
     Piston3=false;
      }
    
    // This is the main execution loop for the user control program.
    // Each time through the loop your program should update motor + servo
    // values based on feedback from the joysticks.

    // ........................................................................
    // Insert user code here. This is where you use the joystick values to
    // update your motors, etc.
    // ........................................................................

    //Replace this line with chassis.control_tank(); for tank drive 
    //or chassis.control_holonomic(); for holo drive.
    chassis.control_tank();

    wait(20, msec); // Sleep the task for a short amount of time to
                    // prevent wasted resources.
  }
}

//
// Main will set up the competition functions and callbacks.
//
int main() {
  // Set up callbacks for autonomous and driver control periods.
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);

  // Run the pre-autonomous function.
  pre_auton();
 
  // Prevent main from exiting with an infinite loop.
  while (true) {
    wait(100, msec);
  }
}
