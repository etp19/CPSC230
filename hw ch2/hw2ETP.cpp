/*
*                      CPSC 230 TR Fall 2018               HW Ch02
* Eduardo Torres
*
* The program allows the user to guess a number 5 times and after each guess, it will display whether or not the user guessed the number.
*
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{	

	// Seed Random
	srand(time(NULL));

	// Constant
	int const TIMES_TO_RUN = 5;
	
	// Variables
	string userName;
	int guessNumber;
	int randomNumber;
	

	//Input your name
	cout << "Please enter your name:  ";
	cin >> userName;
	cout << "\n";
	
	for (int i = 0; i < TIMES_TO_RUN; i++)
	{
		// Input number
		cout << "\nPlease guess a number from 1 to 50\n";
		cin >> guessNumber;

		// Get a random number from 1 to 50.
		randomNumber = (rand() % 50) + 1;

		// Compare the numbers and output a message to the user
		if (guessNumber == randomNumber) {
			cout << "Congratilations" << userName << "  you just guessed the number!\n";			
		}
		else if (guessNumber < randomNumber)
		{
			cout << "Sorry  " << userName << "  your number was too low\n";
		}
		else
		{
			cout << "Sorry  " << userName << "  your number was too high\n";
		}

	}
			
	system("pause");

	return  1;
}