#include <iostream>
using namespace std;

int main() {
    // Variable to track which day we are on
    int days = 5;

    // Variables for soil moisture and rainfall input
    double soilMoisture;
    double rainfall;

    cout << "=== Irrigation Schedule (4 Days) ===" << endl;

    // Loop through 4 days
    while (days <= 4) {
        // Ask user for soil moisture percentage
        cout << "Enter soil moisture (%) for Day " << days << ": ";
        cin >> soilMoisture;

        // Ask user for rainfall in millimeters
        cout << "Enter rainfall (mm) for Day " << days << ": ";
        cin >> rainfall;

        // Branching (decision making)
        if (soilMoisture < 30 && rainfall < 10) {
            // If soil is dry AND little rain → irrigate
            cout << "Day " << days << ": Irrigation needed (20 L/m³)" << endl;
        }
        else {
            // Otherwise → no irrigation
            cout << "Day " << days << ": No irrigation needed" << endl;
        }

        // Move to the next day
        days++;
    }

    return 0;
}