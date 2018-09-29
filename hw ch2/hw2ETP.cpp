/*******************************************************************************************************************************************
*                      CPSC 230 TR Fall 2018               HW Ch02
* Eduardo Torres
* Gregory
*
* The program allows the user to guess a number 5 times and after each guess, it will display whether or not the user guessed the number.
*
********************************************************************************************************************************************
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>

using namespace std;
using namespace this_thread;
using namespace chrono;

// Constant
enum WEAPONS_DAMAGE {
	SWORD = 5000,
	WAND = 6000,
	BATTLE = 7000,
	RING = 8000
};
int const TIMES_TO_RUN = 5;
string const sword = "Sword of Greyskull";
int main()
{	

	// Seed Random
	srand(time(NULL));
		
	// Variables
	int counter = 0;
	string userName;
	char playAgain = 'y';
	int weaponType, monsterPoints, initialUserPoints;
	
	//Input your name
	cout << "Please enter your name:  ";
	cin >> userName;
	cout << "\n";
	
	while(playAgain == 'y'){
	// random points to user
	initialUserPoints = (rand() % 50000) + 1;
	// random points to monster
	monsterPoints = (rand() % 50000) + 1;
	// Display greetings and your points
	cout << "Greetings Sr " << userName << "\n\n";


	cout << "You have " << initialUserPoints << "  Points\n";


	for (int i = 1; i <= TIMES_TO_RUN; i++)
	{
		cout << "\nTry #  " << i << endl;
		// Choose your weapon
		cout << "\n ****** Choose a weapon from the following menu *******" << endl;
		cout << "1- Sword of Greyskull" << endl;
		cout << "2- Wand of Gandolf" << endl;
		cout << "3- Battle Axe of Grumpy" << endl;
		cout << "4- Ring of Gollum" << endl;
		cout << "Any key to exit the menu" << endl;
		cin >> weaponType;


		switch (weaponType)
		{
		case 1:
			initialUserPoints += SWORD;
			break;
		case 2:
			initialUserPoints += WAND;
			break;
		case 3:
			initialUserPoints += BATTLE;
			break;
		case 4:
			initialUserPoints += RING;
			break;
		default:
			cout << "No weapons was chosen, the game is ending ...." << endl;
			sleep_until(system_clock::now() + seconds(1));
			i = TIMES_TO_RUN + 1;
			continue;
			break;
		}
		cout <<	"																					************* Game Board ************" << endl;
		cout << "																					**  Monster points:  " << monsterPoints << "  **" << endl;
		cout << "																					**  User points:  "	   << initialUserPoints << "  **" << endl;
		cout << "You chose the weapon  " << weaponType << endl;
		if (initialUserPoints > monsterPoints) {
			initialUserPoints += (initialUserPoints * 0.15);
			monsterPoints += (initialUserPoints * 0.20);
			cout << "With the weapon  " << weaponType << "  you have defeated the Monster" << endl;
		}
		else
		{	
			initialUserPoints -= (initialUserPoints * 0.15);
			cout << "With the weapon  " << weaponType << "  you have lost" << endl;
		}
	}


	cout << "Do You want to play again? Enter y/n" << endl;
	cin >> playAgain;
	
	}
	system("pause");

	return  1;
}