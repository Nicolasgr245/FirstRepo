#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main() {

	const float Ga = 9.8;
	float An, Ti, Ve;

	cout << "Enter the data to calculate the speed" << endl;
	cout << endl;
	cout << "enter time in seconds: ";
	cin >> Ti;
	cout << endl;
	cout << "enter the angle: ";
	cin >> An;
	float An_rad = An * M_PI / 180.0;
	Ve = (Ga * sin(An_rad)) * Ti;
	cout << endl;
	cout << "the speed is " << Ve << "m/s";

	return 0;
}