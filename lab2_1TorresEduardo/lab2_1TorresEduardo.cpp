/*
 *                      CPSC 230 TR Fall 2018               Lab 2A
 * Eduardo Torres
 *
 * The program calculate the acceleration of a vehicle given the user's input of speed and time.
 * */
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
// Constant
const double MPH2MPS = (1609.0/3600.0);
int main() {

	/* Algorithm
	 *
	 * Set acceleration formula as a constant variable.
	 * Get input from the user (velocity and time) saved them in variables of type double
	 * Do the calculation
	 * Do the rounding as describe in lab 2 instruction. (change division by 10 instead of 100)
	 * Convert to int
	 * Convert the result back to double
	 * Output the desired result
	 * Use precision of 2 decimal digits as shown on lab 2A bellow of (Sample run of program, page 2)

	 * */

	// Variables
	double velocity, acceleration, time;
	int newAcceleration;

	// Input
	cout << "Please enter the velocity in miles per hour:  ";
	cin >> velocity;
	cout << "\n";
	cout << "Please enter the time in seconds:  ";
	cin >> time;
	cout << "\n";

	// Calculations
	acceleration = (MPH2MPS) * (velocity/time);

	// Rounding
	acceleration *= 10;
	acceleration += 0.5;
	newAcceleration = static_cast<int>(acceleration);

	acceleration = static_cast<double>(newAcceleration)/10;

	//Output
	cout << fixed << setprecision(2) << "The acceleration required by a vehicle to reach a velocity of  " << velocity << " miles per hour in  " << time << "  seconds is  " << acceleration <<"  meters per second \n\n";
	system("pause");
	return 0;
}