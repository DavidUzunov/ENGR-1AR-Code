#include "SensorControl.h"
#include <Ultrasonic.h> // Include ultrasonic sensor library

//Create ultrasonic objects for each sensor
Ultrasonic leftLow(LeftLowPin[0], LeftLowPin[1]);    // Trigger, Echo
Ultrasonic rightLow(RightLowPin[0], RightLowPin[1]);   // Trigger, Echo
Ultrasonic highMid(HighMidPin[0], HighMidPin[1]);
Ultrasonic highLeft(HighLeftPin[0], HighLeftPin[1]);
Ultrasonic highRight(HighRightPin[0], HighRightPin[1]);


void SensorControl::setupSensors() {
    // Set up ultrasonic sensors
    // Initialize pins and configure sensor library

    //init the pins - CHANGE TO WHAT THEY ACTUALLY ARE
    leftLowPin[0] = 4;  // Trigger
    leftLowPin[1] = 5;  // Echo
    rightLowPin[0] = 6; // Trigger
    rightLowPin[1] = 7; // Echo
    HighMidPin[0] = 8;
    HighMidPin[1] = 9;
    HighLeftPin[0] = 10;
    HighLeftPin[1] = 11;
    HighRightPin[0] = 12;
    HighRightPin[1] = 13;

    //initialize pins
    pinMode(leftLowPin[0], OUTPUT); pinMode(leftLowPin[1], INPUT);
    pinMode(rightLowPin[0], OUTPUT); pinMode(rightLowPin[1], INPUT);
    pinMode(HighMidPin[0], OUTPUT); pinMode(HighMidPin[1], INPUT);
    pinMode(HighLeftPin[0], OUTPUT); pinMode(HighLeftPin[1], INPUT);
    pinMode(HighRightPin[0], OUTPUT); pinMode(HighRightPin[1], INPUT);
    // Add more sensor initializations as needed
}


void SensorControl::checkObstacles() {
    // Check distance to obstacles using low-mounted sensors
    // Handle movement logic based on obstacle distances
    LLDist = leftLow.read();
    RLDist = rightLow.read();
}

void SensorControl::findTarget() {
    // Use high-mounted ultrasonic sensors to locate the target box
    // Return or handle any target finding logic
    HMDist = highMid.read();
    HMDist = highLeft.read();
    HMDist = highRight.read();

}

bool SensorControl::isPathClear() {
    // Example: path is clear if both low sensors see more than 20 cm
    return (LLDist > 20 && RLDist > 20);
}

bool SensorControl::targetDetected() {
    // Example: target detected if high mid sensor sees something close
    return (HMDist < 30); // adjust threshold as needed
}