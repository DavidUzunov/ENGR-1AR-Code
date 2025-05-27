#ifndef SENSORCONTROL_H
#define SENSORCONTROL_H

class SensorControl {
public:
    void setupSensors();
    void checkObstacles();
    void findTarget();
private:
    // Pin configurations, thresholds, and sensor logic
    int leftLowPin[2];
    int rightLowPin[2];
    int HighMid[2];
    int HighLeft[2];
    int HighRight[2];
    const int* Trigger[5] = {
         &leftLowPin[0], &rightLowPin[0],
        &HighMid[0], &HighLeft[0], &HighRight[0]};
    const int* Echo[5] = {
        &leftLowPin[1], &rightLowPin[1],
        &HighMid[1], &HighLeft[1], &HighRight[1]};
    // Distance threshold variables and methods for detecting obstacles

};

#endif
