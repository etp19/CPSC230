#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <string>

using namespace std;

double calculate_surface_cube(double side);
double calculate_surface_sphere(double radius);
double round_number(double number_to_round);
double square(double number);
double const PI = 3.141592;

int main()
{
	
	double side, radius, s_cube, s_sphere;

	cout << "Enter the side of the cube" << endl;
	cin >> side;
	cout << "Enter radius of sphere :" << endl;
	cin >> radius;
	s_cube = calculate_surface_cube(side);
	s_sphere = calculate_surface_sphere(radius);
	cout << fixed << setprecision(2) << "The surface of a cube of sides " << round_number(side) << " is " << s_cube << endl;
	cout << fixed << setprecision(2) << "The surface of a sphere of radius " << round_number(radius) << " is " << s_sphere << endl;
}

double calculate_surface_cube(double side)
{
	return round_number(6.0 * square(side));
}

double calculate_surface_sphere(double radius)
{
	return round_number(4.0 * PI * square(radius));
}

double round_number(double number_to_round) {
	int new_number;
	number_to_round *= 100;
	number_to_round += 0.5;
	new_number = static_cast<int>(number_to_round);
	number_to_round = static_cast<double>(new_number) / 100;
	return number_to_round;
};

double square(double number)
{
	return number * number;
}