#include <iostream>
using namespace std;

int main() {
    // Variable to track which day we are on
    int day = 5;

    // Variables for soil moisture and rainfall input
    float soilMoisture;
    float rainfall;

    cout << "=== Irrigation Schedule (5 Days) ===" << endl;

    // Loop through 5 days
    while (day <= 5) {
        // Ask user for soil moisture percentage
        cout << "Enter soil moisture (%) for Day " << day << ": ";
        cin >> soilMoisture;

        // Ask user for rainfall in millimeters
        cout << "Enter rainfall (mm) for Day " << day << ": ";
        cin >> rainfall;

        // Branching (decision making)
        if (soilMoisture < 30 && rainfall < 10) {
            // If soil is dry AND little rain → irrigate
            cout << "Day " << day << ": Irrigation needed (20 L/m³)" << endl;
        }
        else {
            // Otherwise → no irrigation
            cout << "Day " << day << ": No irrigation needed" << endl;
        }

        // Move to the next day
        day++;
    }

    return 0;
}