/*
*                      CPSC 230 TR Fall 2018               Lab 2A
* Eduardo Torres
*
* The program calculate compare the grades of two students (part B) Using a loop.
*
*/
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
		convert your grade
		use a while loop to input, assign letters and compare your partner's grade against yours
		within the loop there will be if statements to assign letters to "yourletter, theirletter"
		the loop will have a nested if else statement so when there is not winner it will check the letter 
		and display the message according to the Part C (lab2 B).
		Finally, If the user inputs something other than yes the loop will be terminated, 
		otherwise it will keep asking for the user to input for other students grade. 
	*/

	// Sentinel
	string keepGrading = "yes";
	// Variables
	char yourletter, theirletter;
	int yourgrade, theirgrade;

	//Input your grade
	cout << "Enter your grade\n";
	cin >> yourgrade;
	yourgrade /= 10;
	cout << "\n";
	

	// Converting number to letter (yourgrade)

	if (yourgrade > 8 && yourgrade <= 10)
	{
		yourletter = 'A';
	}
	else if (yourgrade == 8)
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

	// While loop
	while (keepGrading == "yes")
	{
		// Input your's partner's grade
		cout << "Enter your partner's grade\n";
		cin >> theirgrade;
		theirgrade /= 10;

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
			if (yourletter == 'A' || yourletter == 'B') {
				cout << "Both did very good, congratulations!\n";
			}
			else if (yourletter == 'C')
			{
				cout << "Not bad but could be better\n";
			}
			else if (yourletter == 'D')
			{
				cout << "Both should improve to avoid seeing me again next semester!\n";
			}
			else
			{
				cout << "Have you considered any other major?\n";
			}
		}
		cout << "Do you want to compared to another student?";
		cin >> keepGrading;
	}
	

	
	system("pause");

	return  1;
}