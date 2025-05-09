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

/*


const int triggerPins[] = {2, 4, 6, 8, 10, 12};//transmit the ultrasonic ping
const int echoPins[] =    {3, 5, 7, 9, 11, 13};//receive the ultrasonic echo
// Index: 0 = front-low, 1 = left-low, 2 = right-low,
//        3 = high-center, 4 = high-left, 5 = high-right



void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

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
