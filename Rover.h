#ifndef ROVER_H
#define ROVER_H

#include "SensorControl.h"
#include "ServoControl.h"

class Rover {
public:
    Rover();
    void setup();
    void setupMotors();
    void navigate();
    void checkForTarget();
    void grabTarget();
    bool TargetFound();


private:
    SensorControl sensorControl;
    ServoControl servoControl;
    int LeftMotorPin;
    int RightMotorPin;
    // Additional rover configuration variables (speed, position, etc.)
};

#endif
