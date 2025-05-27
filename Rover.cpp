#include <Arduino.h>
#include "Rover.h"

Rover::Rover() {}

void Rover::setup() {
    RightMotorPin = 0;//Example pins
    LeftMotorPin = 1;
    sensorControl.setupSensors();
    servoControl.setupServo();
    setupMotors();
    // Initialize any other hardware components (motors, etc.)
}

void Rover::setupMotors() {
    // Example: initialize motor control pins
    pinMode(LeftMotorPin, OUTPUT);
    pinMode(RightMotorPin, OUTPUT);
    // Set initial motor states if needed
    digitalWrite(LeftMotorPin, LOW);
    digitalWrite(RightMotorPin, LOW);
}

void Rover::navigate() {
    // Check obstacle sensors and determine direction
    sensorControl.checkObstacles();
    // Use logic to move based on sensor data
}

void Rover::checkForTarget() {
    // Use high-mounted sensors to find the target
    sensorControl.findTarget();
}

void Rover::grabTarget() {
    // Move servo to grab the target when in range
    servoControl.grab();
}

bool TargetFound(){
    //checks if you're at the target, returns true if yes, false if no
}
