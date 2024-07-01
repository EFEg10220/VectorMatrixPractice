#pragma once
#include <iostream>

using namespace std;

class Temperature {
private:
    int maxTemperature;
    int minTemperature;

public:
    Temperature();
    ~Temperature();

    void setMaxTemperature(int temp);
    int getMaxTemperature() const;
    void setMinTemperature(int temp);
    int getMinTemperature() const;
    void showTemperatureOfDay() const;
    double calculateMiddleTemperature() const;
};