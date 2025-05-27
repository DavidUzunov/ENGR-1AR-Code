#include "SensorControl.h"
#include <Ultrasonic.h> // Include ultrasonic sensor library

void SensorControl::setupSensors() {
    // Set up ultrasonic sensors
    // Initialize pins and configure sensor library

    //init the pins - CHANGE TO WHAT THEY ACTUALLY ARE
    leftLowPin[0] = 4;  // Trigger
    leftLowPin[1] = 5;  // Echo
    rightLowPin[0] = 6; // Trigger
    rightLowPin[1] = 7; // Echo
    HighMid[0] = 8;
    HighMid[1] = 9;
    HighLeft[0] = 10;
    HighLeft[1] = 11;
    HighRight[0] = 12;
    HighRight[1] = 13;

        // Example: initialize pins for obstacle sensors
    for(int i = 0; i<6; i++){
        pinMode(Trigger[i], OUTPUT);
        pinMode(Echo[i], OUTPUT);
    }        
    // Add more sensor initializations as needed
}


void SensorControl::checkObstacles() {
    // Check distance to obstacles using low-mounted sensors
    // Handle movement logic based on obstacle distances
}

void SensorControl::findTarget() {
    // Use high-mounted ultrasonic sensors to locate the target box
    // Return or handle any target finding logic
}
