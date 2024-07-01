#include "Temperature.h"

Temperature::Temperature() {
	maxTemperature = 0;
	minTemperature = 0;
}

Temperature::~Temperature() {

}

void Temperature::setMaxTemperature(int temp) {
    maxTemperature = temp;
}

int Temperature::getMaxTemperature() const {
    return maxTemperature;
}

void Temperature::setMinTemperature(int temp) {
    minTemperature = temp;
}

int Temperature::getMinTemperature() const {
    return minTemperature;
}

void Temperature::showTemperatureOfDay() const {
    cout << "Maximun temperature: " << maxTemperature << " degrees Celsius" << endl;
    cout << "Minimun temperature: " << minTemperature << " degrees Celsius" << endl;
}

double Temperature::calculateMiddleTemperature() const {
    return (maxTemperature + minTemperature) / 2.0;
}