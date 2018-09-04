/*
 * Eduardo Torres
 * Lab 2
 * Rodger Irish
 * */
#include <iostream>
#include <string>

using namespace std;

// Algorithm
// get the person's name and save it in a variable
// get the Fahrenheit temperature from the user and save it as well
// Do the calculation based on the formula provided
// output the result using using cout.precision(2)


int main() {
    // Variables
    string name;
    double fahrenheit;
    double celsius;

    // Input
    cout << "Please enter your name:  ";
    cin >> name;
    cout << "enter the temperature in Fahrenheit:  ";
    cin >> fahrenheit;

    // Calculations
    celsius = 5.0/9.0 * (fahrenheit - 32.0);

    // Output
    cout.precision(2);
    cout << "Hi " << name << "\n";
    cout << "The equivalent to  " << fahrenheit << " degrees fahrenheit is  " << celsius << "  degree Celsius";
    return 0;
}