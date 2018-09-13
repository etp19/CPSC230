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

int main()
{
	char yourletter, theirletter;
	int yourgrade, theirgrade;

	//Input
	cout << "Enter your grade\n";
	cin >> yourgrade;
	yourgrade /= 10;
	cout << "\n";
	cout << "Enter someone else grade\n";
	cin >> theirgrade;
	theirgrade /= 10;

	// Converting number to letter (yourgrade)

	if (yourgrade > 8 && yourgrade <= 10)
	{
		yourletter = 'A';
	}
	else if(yourgrade == 8)
	{
		yourletter = 'B';
	}
	else if (yourgrade == 7)
	{
		yourletter = 'C';
	}
	else if (yourgrade == 6)
	{
		yourletter = 'D';
	}
	else if (yourgrade >= 0 && yourgrade <= 5)
	{
		yourletter = 'F';
	}
	else
	{
		yourletter = 'E';
	}

	// Converting number to letter (some else grade)

	if (theirgrade > 8 && theirgrade <= 10)
	{
		theirletter = 'A';
	}
	else if (theirgrade == 8)
	{
		theirletter = 'B';
	}
	else if (theirgrade == 7)
	{
		theirletter = 'C';
	}
	else if (theirgrade == 6)
	{
		theirletter = 'D';
	}
	else if (theirgrade >= 0 && theirgrade <= 5)
	{
		theirletter = 'F';
	}
	else
	{
		theirletter = 'E';
	}

	// comparing
	if (yourletter == 'E' || theirgrade == 'E')
	{
		cout << " Invalid input data, cannot determine who did better in the test\n";
	}
	else if (yourletter < theirletter)
	{
		cout << "Your grade is better\n";
	}
	else if (yourletter > theirgrade)
	{ 
		cout << "Your grade is lower\n";
	}
	else if (yourletter == theirgrade)
	{
		cout << "Grades are the same\n";
	}

	system("pause");
	
	return  1;
}