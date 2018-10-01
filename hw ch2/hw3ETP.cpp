/*******************************************************************************************************************************************
*                      CPSC 230 TR Fall 2018               HW Ch03
* Eduardo Torres
* Gregory Louis
*
* This game will ask the user to chose a weapon and it will play against a monster, the monster as well as the user will have a random 
* amount of points given to them when the game starts, if the user wins it the game will give them points
* but at the same time the monster will also adquire points (making the game more challenging), on the other hand, if the user looses a battle 
* will loose points but the monster will not, the points of the weapons will be added every time for the 5 times the loop runs.
*
********************************************************************************************************************************************
*/
// Imports
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

// Constants
enum WEAPONS_DAMAGE {
	SWORD = 5000,
	WAND = 6000,
	BATTLE = 7000,
	RING = 8000
};
int const TIMES_TO_RUN = 5;
int main()
{	

	// Seed Random
	srand(time(NULL));
		
	// Variables
	int min = 30000;
	int max = 50000;
	string userName;
	string userWeapon;
	char playAgain = 'y';
	int weaponType, monsterPoints, initialUserPoints;
	
	//Input your name
	cout << "Please enter your name:  ";
	cin >> userName;
	cout << "\n";
	
	while(playAgain == 'y'){
	// random points to user
	initialUserPoints = (min + (rand() % (int)(max - min + 1)));
	// random points to monster
	monsterPoints = (min + (rand() % (int)(max - min + 1)));
	// Display greetings and your points
	cout << "Greetings Sr " << userName << "\n\n";


	cout << "You have " << initialUserPoints << "  Points\n";

	// Run this game five times or by choosing the menu number 5 you will exit back to the while loop.
	for (int i = 1; i <= TIMES_TO_RUN; i++)
	{
		cout << "\nTry #  " << i << endl;
		// Display menu
		cout << "\n ****** Choose a weapon from the following menu *******" << endl;
		cout << "1- Sword of Greyskull" << endl;
		cout << "2- Wand of Gandolf" << endl;
		cout << "3- Battle Axe of Grumpy" << endl;
		cout << "4- Ring of Gollum" << endl;
		cout << "5- To exit the weapons menu" << endl;	
		// User input
		cin >> weaponType;

		// Choose the weapon and add weapon damage points to the initial user points
		switch (weaponType)
		{
		case 1:
			userWeapon = "Sword of Greyskull";
			initialUserPoints += SWORD;
			break;
		case 2:
			userWeapon = "Wand of Gandolf";
			initialUserPoints += WAND;
			break;
		case 3:
			userWeapon = "Battle Axe of Grumpy";
			initialUserPoints += BATTLE;
			break;
		case 4:
			userWeapon = "Ring of Gollum";
			initialUserPoints += RING;
			break;
		default:
			cout << "No weapons were chosen, the game is ending ...." << endl;
			sleep_until(system_clock::now() + seconds(2));
			break;
		}
		// If you choose a menu number equal or greater than 5 the for loop will exit
		if (weaponType >= 5) {
			break;
		}
		else
		{
																										// Keep record of points
			cout << "																					************* Game Board ************" << endl;
			cout << "																					**  Monster points:  " << monsterPoints << "  **" << endl;
			cout << "																					**  User points:  " << initialUserPoints << "  **" << endl;
			cout << "You chose the weapon  " << userWeapon << endl;
			// if user has more points he defeated the monster and it will have a 15% increase in points
			// Monster will have a 30 % increase.
			if (initialUserPoints > monsterPoints) {
				initialUserPoints += (initialUserPoints * 0.15);
				monsterPoints += (initialUserPoints * 0.30);
				cout << "With the weapon  " << userWeapon << "  you have defeated the Monster" << endl;
			}
			// If monster wins user points will be reduce by 15%
			else
			{
				initialUserPoints -= (initialUserPoints * 0.15);
				cout << "With the weapon  " << userWeapon << "  you have lost" << endl;
			}
		}
		
	}
	// Exit the program or not.
	cout << "Do You want to play again? Enter y/n" << endl;
	cin >> playAgain;
	
	}
	cout << "Good Bye" << endl;
	system("pause");

	return  1;
}