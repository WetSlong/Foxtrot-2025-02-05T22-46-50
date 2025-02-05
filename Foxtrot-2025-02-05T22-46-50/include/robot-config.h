using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller1;
extern controller Controller2;
extern motor LeftWheel;
extern motor RightWheel;
extern motor LeftWheel2;
extern motor RightWheel2;
extern motor Intake;
extern motor Intake2;
extern digital_out Piston;
extern digital_out Piston2;
extern motor MiddleLeftWheel;
extern motor MiddleRightWheel;
extern inertial Inertial;
extern digital_out Piston3;
extern rotation RotationSensor;
extern motor LadyBrown1;
extern motor intake2;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );