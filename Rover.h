#ifndef ROVER_H
#define ROVER_H

#include "SensorControl.h"
#include "ServoControl.h"

class Rover {
public:
    Rover();
    void setup();
    void navigate();
    void checkForTarget();
    void grabTarget();

private:
    SensorControl sensorControl;
    ServoControl servoControl;
    // Additional rover configuration variables (speed, position, etc.)
};

#endif
