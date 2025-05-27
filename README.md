# Code for an Autonomous Rover with Obstacle Avoidance

This project implements an Arduino-powered autonomous rover capable of:

* Detecting and avoiding obstacles using ultrasonic sensors
* Locating a designated target box using high-mounted ultrasonic sensors
* Grabbing the target using a rear-mounted servo claw

---

## Features

* **Obstacle avoidance** with 2 low-mounted ultrasonic sensors (left, right) attached at an angle
* **Target detection** with 3 high-mounted ultrasonic sensors (center, left, right)
* **Servo-controlled claw** automatically grabs the target when in range
* Fully autonomous logic for navigating a simple track

---

## Hardware Requirements

* Arduino Uno (or compatible board)
* 6× HC-SR04 ultrasonic distance sensors
* 1× Servo motor (for the claw)
* Motor driver (L298N or similar)
* 2× DC motors + wheels
* Power supply (battery pack)
* Chassis and mounting components

---

## Pin Configuration(For Reference)

### Sensors

| Sensor               | Trigger Pin | Echo Pin |
| -------------------- | ----------- | -------- |
| Left-Low             | 4           | 5        |
| Right-Low            | 6           | 7        |
| High-Center (target) | 8           | 9        |
| High-Left (target)   | 10          | 11       |
| High-Right (target)  | 12          | 13       |

### Motors

| Motor       | Pin     | 
| ----------- | ------- | 
| Right Motor | 2       |
| Left Motor  | 3       |
| Servo       | 16(A2)  |


---

## Setup Instructions

1. Wire all ultrasonic sensors to the pins shown above.
2. Connect the servo to a PWM-capable digital pin (e.g., pin 9 or 10).
3. Upload the Arduino sketch using the Arduino IDE.
4. Power the Arduino and motors with an external battery pack (do **not** power motors via USB). Ideally, power them separately, but use your discretion. 
5. Place the rover on a test track with obstacles and a target object.
6. The rover should begin navigating and attempt to find and grab the target.

---

## Libraries Used
- **Servo**: To control the servo motor.
- **Ultrasonic**: To interface with the ultrasonic sensors.

---

## Notes

* Avoid using digital pins 0 and 1 (used by Serial).
* Ensure all sensors are securely mounted and angled appropriately.
* If using an L298N driver, be sure to connect `EN` pins and set proper direction control in code(Let me know and I can help).
* You may fine-tune distances and angles in code for better accuracy.
