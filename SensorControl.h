#ifndef SENSORCONTROL_H
#define SENSORCONTROL_H

class SensorControl {
public:
    void setupSensors();
    void checkObstacles();
    void findTarget();
    bool isPathClear();
    bool targetDetected();
private:
    // Pin configurations, thresholds, and sensor logic
    int leftLowPin[2];
    int rightLowPin[2];
    int HighMidPin[2];
    int HighLeftPin[2];
    int HighRightPin[2];
    // Distance threshold variables and methods for detecting obstacles
    int LLDist, RLDist;//two variables to check the distance to obstacles
    //three targeting variables
    int HMDist, HLDist, HRDist;
};

#endif
