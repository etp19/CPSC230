//******************************************************************************
// CPCS 230		Fall 2018		 Lab # 4
// Eduardo Torres
//
// This program will calculate the volume of a triangle, it contain 3 functions, the main function, 
// the calculate function which takes care of the calculations, and the round_number that will round the number to the nearest tenths. 
// 
//******************************************************************************


#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <string>

using namespace std;

//function declarion
double calculator(int radius, int height);
double round_number(double number_to_round);

int main()
{

	//Variables
	string name;
	int height, radius;
	double volume;
	char yes = 'y';

	//input
	cout << "May I get your full name please?:  ";
	getline(cin, name);
	while (yes == 'y') {
		cout << "Thanks, " << name << ", now enter the height of the cone:  ";
		cin >> height;
		cout << "OK, now enter the radius:  ";
		cin >> radius;
		// calculations
		volume = calculator(radius, height);

		//output
		cout << fixed << setprecision(2) << "OK, " << name << " the cone's volume is " << volume << " .\n";
		cout << "Do you want to calculate another volume y/n ";
		cin >> yes;
	}
	return 0;
}

// This function will calculate the volume of the triangle
double calculator(int radius, int height) {
	const double PI = 3.14159;
	// In the return I will call another function that will take care of the rounding
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