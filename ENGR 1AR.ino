//Instructions: 
/*
two functions: 
arduino obstacle detection
  * use ultrasonic sensor to detect obstacles and the target box - 3 higher 
  sensors are used to find the target, lower are used to detect the obstacles
  * autonomous - uses sensor ultrasonic input to determine which way to move 
  and pathfind through a track


arduino servo grabbing
  * 1 servo motor rotates x degrees to grab and has a default state of y degrees. 
  * automatically grabs when the  rover arrives at the target
  * claw is on the back, turns in place and grabs the target

*/


#include "Rover.h"

Rover rover;

void setup() {
  rover.setup();
}

void loop() {
  rover.navigate();
  rover.checkForTarget();
  rover.grabTarget();
}
