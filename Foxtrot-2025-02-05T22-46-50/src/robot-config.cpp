#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
controller Controller2 = controller(partner);
motor LeftWheel = motor(PORT19, ratio6_1, true);
motor RightWheel = motor(PORT11, ratio6_1, false);
motor LeftWheel2 = motor(PORT20, ratio6_1, true);
motor RightWheel2 = motor(PORT1, ratio6_1, false);
motor Intake = motor(PORT12, ratio6_1, true);
motor Intake2 = motor(PORT16, ratio18_1, true);
digital_out Piston = digital_out(Brain.ThreeWirePort.A);
digital_out Piston2 = digital_out(Brain.ThreeWirePort.B);
motor MiddleLeftWheel = motor(PORT8, ratio6_1, true);
motor MiddleRightWheel = motor(PORT13, ratio6_1, false);
inertial Inertial = inertial(PORT18);
digital_out Piston3 = digital_out(Brain.ThreeWirePort.C);
rotation RotationSensor = rotation(PORT9, true);
motor LadyBrown1 = motor(PORT15, ratio18_1, true);
motor intake2 = motor(PORT10, ratio18_1, true);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}