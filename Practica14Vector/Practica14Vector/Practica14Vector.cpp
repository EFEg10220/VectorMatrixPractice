#include "Temperature.h"

int main() {
    static const int NUM_OF_DAYS = 5;
    Temperature days[NUM_OF_DAYS];

    for (int i = 0; i < NUM_OF_DAYS; i++) {
        int max, min;

        cout << "Write maximum temperature of day " << i + 1 << ": "; cin >> max;
        cout << "Write minimum temperature of day " << i + 1 << ": "; cin >> min;

        days[i].setMaxTemperature(max);
        days[i].setMinTemperature(min);
    }

    cout << "\nTemperatures recorded for each day:\n";
    for (int i = 0; i < NUM_OF_DAYS; i++) {
        cout << "\nDay " << i + 1 << " temperatures:" << endl;
        days[i].showTemperatureOfDay();
    }

    cout << "\nAverage temperatures for each day:\n";
    for (int i = 0; i < NUM_OF_DAYS; i++) {
        double middleTemperature = days[i].calculateMiddleTemperature();
        cout << "Day " << i + 1 << ": Average temperature: " << middleTemperature << " degrees Celsius" << endl;
    }

    return 0;
}