#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    constexpr float gravity = 9.8f;
    float angle, time, velocity;
    bool isActive = true;
    int option;

    while (isActive) {
        cout << "Enter the data to calculate the speed" << endl;
        cout << "Enter time in seconds: ";
        while (!(cin >> time) || time < 0) { 
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a positive number for time: ";
        }

        cout << "Enter the angle in degrees: ";
        while (!(cin >> angle) || angle < 0 || angle > 90) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter an angle between 0 and 90 degrees: ";
        }

        float angle_rad = angle * M_PI / 180.0f;
        velocity = (gravity * sin(angle_rad)) * time;

        cout << fixed << setprecision(2);
        cout << "The speed is " << velocity << " m/s" << endl;

        bool validOption = false;
        while (!validOption) {
            cout << "Enter 1 to use the program again or 2 to close it: ";
            while (!(cin >> option)) { 
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please enter 1 or 2: ";
            }

            switch (option) {
            case 1:
                validOption = true;
                break;
            case 2:
                isActive = false;
                validOption = true;
                break;
            default:
                cout << "Invalid number. Please enter 1 or 2." << endl;
                break;
            }
        }
    }

    return 0;
}