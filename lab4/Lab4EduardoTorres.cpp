//**************************************************************************************************
// CPCS 230		Fall 2018		 Lab # 4
// Eduardo Torres
//
// This program will calculate the volume of a cone, it contain 3 functions, the main function, 
// the calculate function, and the round_number that will round the number to the nearest tenths. 
// 
//**************************************************************************************************

// Imports
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <string>

using namespace std;

// declare constant
const double PI = 3.14159;

//function declarion
double calculator(int radius, int height);
double round_number(double number_to_round);

int main()
{

	//Variables
	string name;
	int height, radius;
	double volume;
	// sentinel
	char keepCalculating = 'y';

	//input
	cout << "May I get your full name please?:  ";
	getline(cin, name);
	// Keep calculating if the user want.
	while (tolower(keepCalculating) == 'y') {
		cout << "Thanks, " << name << ", now enter the height of the cone:  ";
		cin >> height;
		cout << "OK, now enter the radius:  ";
		cin >> radius;
		// call the calculator function with the radius and height as parameters
		volume = calculator(radius, height);

		//output, it is fixed to 2 decimal places.
		cout << fixed << setprecision(2) << "OK, " << name << " the cone's volume is " << volume << " .\n";
		cout << "Do you want to calculate another volume y/n ";
		cin >> keepCalculating;
	}
	return 0;
}

// This function will calculate the volume of the cone
double calculator(int radius, int height) {
	// In the return I will call another function that will handle the rounding before returning the number.
	return  round_number(((1.0 / 3.0) * PI * radius * radius * height));
}

// This function will be called to round the result from the calculator function. 
double round_number(double number_to_round) {
	int new_number;
	number_to_round *= 10;
	number_to_round += 0.5;
	new_number = static_cast<int>(number_to_round);
	number_to_round = static_cast<double>(new_number) / 10;
	return number_to_round;
};