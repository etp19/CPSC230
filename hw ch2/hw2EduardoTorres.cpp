/*******************************************************************************************************************************************
*                      CPSC 230 TR Fall 2018               HW Ch02			Guess A Number
* Eduardo Torres
*
* The program allows the user to guess a number 5 times and after each guess, it will display whether or not the user guessed the number.
*
********************************************************************************************************************************************
*/
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


int main()
{	

	// Seed Random
	srand(time(NULL));

	// Constant
	int const TIMES_TO_RUN = 5;
	
	// Variables
	int counter = 0;
	string userName;
	int guessNumber;
	int randomNumber;
	

	//Input your name
	cout << "Please enter your name:  ";
	cin >> userName;
	cout << "\n";

	// Get a random number from 1 to 50.
	randomNumber = (rand() % 50) + 1;

	while(counter < TIMES_TO_RUN)
	{
		// Input number
		cout << "\nPlease guess a number from 1 to 50\n";
		cin >> guessNumber;

		// Compare the numbers and output a message to the user along with the username
		if (guessNumber == randomNumber) {
			cout << "Congratulations  " << userName << "  you won!\n";
			break;
		}
		else if (guessNumber < randomNumber)
		{
			cout << "Sorry  " << userName << "  your number was too low\n";
		}
		else
		{
			cout << "Sorry  " << userName << "  your number was too high\n";
		}
		counter += 1;

	}
			
	system("pause");

	return  1;
}