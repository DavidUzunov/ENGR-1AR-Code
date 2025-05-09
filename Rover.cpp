#include "Rover.h"

Rover::Rover() {}

void Rover::setup() {
    sensorControl.setupSensors();
    servoControl.setupServo();
    // Initialize any other hardware components (motors, etc.)
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
