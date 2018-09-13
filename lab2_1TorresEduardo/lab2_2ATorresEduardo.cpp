/*
*                      CPSC 230 TR Fall 2018               Lab 2A
* Eduardo Torres
*
* The program calculate compare the grades of two students (part A).
* */
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	// Algorithm
	/*
	declare all variables (including sentinel)
	input your grade
	input your partner's grade
	convert both grades
	round both grades
	use if else statements to assign letters based on the numbers entered for each user.
	use a if else statement to compare the grades
	*/

	char yourletter, theirletter;
	int yourgrade, theirgrade;

	//Input
	cout << "Enter your grade\n";
	cin >> yourgrade;
	yourgrade /= 10;
	cout << "\n";
	cout << "Enter your partner's grade\n";
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

	// Converting number to letter (your partner's grade)

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
	if (yourletter == 'E' || theirletter == 'E')
	{
		cout << " Invalid input data, cannot determine who did better in the test!\n";
	}
	else if (yourletter < theirletter)
	{
		cout << "You did better on the test, you need to help your partner\n";
	}
	else if (yourletter > theirletter)
	{ 
		cout << "Your partner did better in the test, he needs to help you\n";
	}
	else if (yourletter == theirletter)
	{
		cout << "There is no winner\n";
	}

	system("pause");
	
	return  1;
}