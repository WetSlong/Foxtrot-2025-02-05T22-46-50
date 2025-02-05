
#include "vex.h"
#include "globals.h"







const float Kp=0.5;   // const float Kp=0.5;
const float Ki=0.01;  // const float Ki=0.01; 
const float Kd=1.5;   // const float Kd=0.1;

const int POSITION_TOLERANCE= 5;
const int MAX_OUTPUT=100;  //const int MAX_OUTPUT=50;

void moveArmToPosition(int targetPosition){
int error= 0, lastError=0;
int integral=0;
int derivative=0;
LadyBrown1.setBrake(hold);

while(true){
    int currentPosition = RotationSensor.position(degrees);
    error= targetPosition - currentPosition;

    if(abs(error) <= POSITION_TOLERANCE){
        LadyBrown1.stop(hold);
        break;
    }

    integral += error;
    derivative =  error - lastError;
    lastError = error;

    int output = (Kp*error) + (Ki * integral) + (Kd * derivative);

    output= clamp(output, -MAX_OUTPUT, MAX_OUTPUT);

    LadyBrown1.spin(fwd,output,pct);
    

    task::sleep(20);

    }

  
}




void ladyBrownVariableCount(){
  if (ladyBrownBoolCounter==0){
    moveArmToPosition(LADY_BROWN_LOWERED);
  }

  if (ladyBrownBoolCounter==1){
    moveArmToPosition(LADY_BROWN_LOAD);
  }
/*
  if (ladyBrownBoolCounter==2){
    moveArmToPosition(LADY_BROWN_RAISED);
     task::sleep(50);
        Intakegroup.spin(reverse,100,pct);
        task::sleep(50);
        Intakegroup.stop(coast);
  }*/

  if (ladyBrownBoolCounter>1){
    ladyBrownBoolCounter=0;
    moveArmToPosition(0.0);

  }


}


