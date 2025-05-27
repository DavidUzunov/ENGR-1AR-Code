#include "ServoControl.h"
#include <Servo.h>

Servo servoMotor;

ServoControl::ServoControl() {
    servoPin = 9; //Example pin - this would use digital pin 9 on the arduino
    grabAngle = 90;  // For example, grabbing at 90 degrees
    resetAngle = 0;  // Default resting angle
}

void ServoControl::setupServo() {
    // Example: attach servo to pin
    servoMotor.attach(servoPin);
    // Set initial position if needed
    servoMotor.write(resetAngle);
}

void ServoControl::grab() {
    servoMotor.write(grabAngle);  // Move to grab position
}

void ServoControl::resetPosition() {
    servoMotor.write(resetAngle);  // Return to default state
}
