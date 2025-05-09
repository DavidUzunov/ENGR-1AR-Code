#include "ServoControl.h"
#include <Servo.h>

Servo servoMotor;

ServoControl::ServoControl() {
    grabAngle = 90;  // For example, grabbing at 90 degrees
    resetAngle = 0;  // Default resting angle
}

void ServoControl::setupServo() {
    servoMotor.attach(servoPin);
    servoMotor.write(resetAngle);  // Start at resting position
}

void ServoControl::grab() {
    servoMotor.write(grabAngle);  // Move to grab position
}

void ServoControl::resetPosition() {
    servoMotor.write(resetAngle);  // Return to default state
}
