#ifndef SERVOCONTROL_H
#define SERVOCONTROL_H

class ServoControl {
public:
    void setupServo();
    void grab();
    void resetPosition();
private:
    int servoPin;  // Pin for controlling the servo
    int grabAngle; // Angle for grabbing the target
    int resetAngle; // Default angle to return to
};

#endif
