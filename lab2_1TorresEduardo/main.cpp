/*
 * CPSC 230 TR Fall 2018 Lab 2A
 * Eduardo Torres
 *
 * The program calculate the acceleration of a vehicle given the speed.
 * */
#include <iostream>
#include <string>

using namespace std;
// Constant
const double MPH2MPS = (1609.0/3600.0);
int main() {

    // Variables
    double velocity, acceleration, time;
    int newAcceleration;

    // Input
    cout << "Please enter the velocity in miles per hour:";
    cin >> velocity;
    cout << "\n";
    cout << "Please enter the time in seconds:";
    cin >> time;

    // Calculation
    acceleration = (MPH2MPS) * (velocity/time);

    // Rounding
    acceleration *= 10;
    acceleration += 0.5;
    newAcceleration = static_cast<int>(acceleration);

    acceleration = static_cast<double>(newAcceleration)/10;

    //Output
    cout << "The acceleration required by a vehicle to reach a velocity of  " << velocity << " miles per hour in  " << time << "  seconds is  " << acceleration <<"  meters per second";

    return 0;
}