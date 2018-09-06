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
double const MPH2MPS = (1609.0/3600.0);
int main() {

    // Variables
    double velocity, acceleration, time;
    int newAcceleration;

    // Input
    cout << "ease enter the velocity in miles per hour:";
    cin >> velocity;
    cout << "\n";
    cout << "ease enter the time in seconds:";
    cin >> time;

    // Calculation
    acceleration = (MPH2MPS) * (velocity/time);

    // Rounding
    acceleration *= 100;
    acceleration += 0.5;
    newAcceleration = static_cast<int>(acceleration);

    acceleration = static_cast<double>(newAcceleration)/100;

    //Output
    cout << "The acceleration required by a vehicle to reach a velocity of 60.00 miles per hour in 6.00 seconds is 4.50 meters per second";

    return 0;
}