#include "vex.h"

int controllerMotorTempCheck();

task controllerTempCheck= task(controllerMotorTempCheck);