#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <string>

using namespace std;

int calculate_surface_cube(int side);
int calculate_surface_sphere(int radius);
int display_output(double cube, double sphere);
double const PI = 3.141592;
int main()
{
	
	int side, radius, s_cube, s_sphere;

	cout << "Enter the side of the cube" << endl;
	cin >> side;
	cout << "Enter radius of sphere :" << endl;
	cin >> radius;
	s_cube = calculate_surface_cube(side);
	s_sphere = calculate_surface_sphere(radius);

	display_output(s_cube, s_sphere);
}

int calculate_surface_cube(int side)
{
	return 6 * side * side;
}

int calculate_surface_sphere(int radius)
{
	return 4 * PI * radius * radius;
}

int display_output(double cube, double sphere)
{
	cout << "The surface of a cube of sides " << cube << endl;
	cout << "The surface of a sphere of sides " << sphere << endl;
	return 0;
}