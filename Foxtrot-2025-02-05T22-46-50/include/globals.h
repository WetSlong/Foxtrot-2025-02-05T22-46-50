#include "vex.h"

/////////////////////////////////////////////
//              Motor Groups
///////////////////////////////////////////////

 


///////////////////////////////////////////
//   Lady Brown Position Values
/////////////////////////////////////////
const int LADY_BROWN_LOWERED= 0;
const int LADY_BROWN_LOAD= 21;
const int LADY_BROWN_RAISED= 135;
const int LADY_BROWN_STAKE= 180;


//////////////////////////////////////
//          Other Globals
//////////////////////////////////////
 int ladyBrownBoolCounter=0;


////////////////////////////////////////////////////////////////
//                        Default and Odom Constants
////////////////////////////////////////////////////////////////
inline void default_constants(){
  chassis.set_drive_constants(10, 1.5, 0, 10, 0);
  chassis.set_heading_constants(6, .4, 0, 1, 0);
  chassis.set_turn_constants(12, .4, .03, 3, 15);
  chassis.set_swing_constants(12, .3, .001, 2, 15);
  chassis.set_drive_exit_conditions(1.5, 300, 800);
  chassis.set_turn_exit_conditions(1, 300, 800);
  chassis.set_swing_exit_conditions(1, 300, 800);
}

inline void odom_constants(){
  default_constants();
  chassis.drive_max_voltage = 12;
  chassis.drive_settle_error = 12;
}