//**************************************************************************************************
// CPCS 230		Fall 2018		 hw # 4
// Eduardo Torres
//
// This program will calculate the the surface of a cube and sphere, it contain 4 functions, the main function, 
// 2 functions to calculate each figure, the round_number and finally the square that will be used along with the surface of sphere formula. 
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

// Functions declarations
double calculate_surface_cube(double side);
double calculate_surface_sphere(double radius);
double round_number(double number_to_round);
double square(double number);

// Constants
double const PI = 3.141592;

int main()
{
	// Variables
	double side, radius, s_cube, s_sphere;

	// User input
	cout << "Enter the side of the cube" << endl;
	cin >> side;
	cout << "Enter radius of sphere :" << endl;
	cin >> radius;
	// call the functions and get the surfaces values as return
	s_cube = calculate_surface_cube(side);
	s_sphere = calculate_surface_sphere(radius);
	// use the above return to display the output to the user.
	// use the round_number function to also round the user input.
	cout << fixed << setprecision(2) << "The surface of a cube of sides " << round_number(side) << " is " << s_cube << endl;
	cout << fixed << setprecision(2) << "The surface of a sphere of radius " << round_number(radius) << " is " << s_sphere << endl;
	system("pause");
}

// calculates the surface of a cube and return the result as a double.
double calculate_surface_cube(double side)
{
	return round_number(6.0 * square(side));
}
// calculates the surface of a sphere and return the result as a double.
double calculate_surface_sphere(double radius)
{
	return round_number(4.0 * PI * square(radius));
}

// round the numbers to 2 decimal places.
double round_number(double number_to_round) {
	int new_number;
	number_to_round *= 100;
	number_to_round += 0.5;
	new_number = static_cast<int>(number_to_round);
	number_to_round = static_cast<double>(new_number) / 100;
	return number_to_round;
};

// square a number
double square(double number)
{
	return number * number;
}