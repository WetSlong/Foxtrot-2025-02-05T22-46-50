#include "vex.h"
#include "globals.h"



int controllerMotorTempCheck(){
  while(1){
    Brain.Screen.clearScreen();
    Brain.Screen.clearScreen();
    Brain.Screen.setCursor(5, 5);
    Brain.Screen.print("Intake2 temp%f" , Intake2.temperature(percent) );
    Controller1.Screen.clearScreen();
    Controller2.Screen.clearScreen();
    Controller1.Screen.setCursor(1,1);
    Controller2.Screen.setCursor(1,1);
    Controller2.Screen.print("LeftWheel Temp%f", LeftWheel.temperature(percent) );     Controller1.Screen.print("LeftWheel2 Temp%f", LeftWheel2.temperature(percent) );
    Controller1.Screen.newLine(); 
    Controller2.Screen.newLine(); 
    Controller2.Screen.print("MiddLeft Temp%f", MiddleLeftWheel.temperature(percent) );     Controller1.Screen.print("MiddleRight Temp%f", MiddleRightWheel.temperature(percent) );
    Controller1.Screen.newLine(); 
    Controller2.Screen.newLine(); 
    Controller2.Screen.print("RightWheel Temp%f", RightWheel.temperature(percent) );     Controller1.Screen.print("RightWheel2 Temp%f", RightWheel2.temperature(percent) );

   Brain.Screen.print(Inertial.heading());
   task::sleep(1000);
  }
  return 1;
  task::sleep(20);
}