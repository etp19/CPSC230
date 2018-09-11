/*
 * CPSC 230TR        (MW)Fall 2018           Lab # 2
 * Eduardo Torres
 * Rodger Irish
 * convert fahrenheit to celsius
 */
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Algorithm
// get the person's name and save it in a variable
// get the Fahrenheit temperature from the user and save it as well
// Do the calculation based on the formula provided
// output the result using using cout.precision(2)


int main() {
    // Variables
    string name;
    double fahrenheit, celsius;

    // Input
    cout << "Please enter your name:  ";
    cin >> name;

    cout << "Now enter the temperature in Fahrenheit:  ";
    cin >> fahrenheit;

    // Calculations
    celsius = 5.0 / 9.0 * (fahrenheit - 32.0);

    // Output
    cout.precision(2);
    cout << "Hi " << name << "\n";
    cout << "The equivalent to  " << fahrenheit << " degrees fahrenheit is  " << celsius << "  degree Celsius.";
    return 0;
}