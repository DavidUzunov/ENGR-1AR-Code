#ifndef SENSORCONTROL_H
#define SENSORCONTROL_H

class SensorControl {
public:
    void setupSensors();
    void checkObstacles();
    void findTarget();
private:
    // Pin configurations, thresholds, and sensor logic
    int frontLowPin[2];  // Trigger, Echo pins
    int leftLowPin[2];
    int rightLowPin[2];
    int highSensorPins[6];  // For the target sensors
    // Distance threshold variables and methods for detecting obstacles
};

#endif
