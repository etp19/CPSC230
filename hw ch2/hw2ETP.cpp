/*******************************************************************************************************************************************
*                      CPSC 230 TR Fall 2018               HW Ch02
* Eduardo Torres
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

using namespace std;

// Constant
enum WEAPONS {
	A = 1,
	B = 2,
	C = 3,
	D = 4
};

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
	int counter = 0;
	string userName;
	int weaponType, weaponDamage, monsterPoints, initialUserPoints;
	

	//Input your name
	cout << "Please enter your name:  ";
	cin >> userName;
	cout << "\n";
	
	// random points to user
	initialUserPoints = (rand() % 50000) + 1;
	// Display greetings and your points
	cout << "Greetings Sr " << userName << "\n\n";


	cout << "You have " << initialUserPoints << "  Points\n";

	// Choose your weapon
	cout << "/n Choose a weapon from the following:\n\n";
	cout << "/n1 = Sword of Greyskull/n";
	cout << "/n2 = Wand of Gandolf/n";
	cout << "/n3 = Battle Axe of Grumpy/n";
	cout << "/n4 = Ring of Gollum/n";
	cin >> weaponType;

	

	switch (weaponType)
	{
	case A:
		cout << "You choose weapon A";
		weaponDamage = SWORD;
		initialUserPoints += weaponDamage;
	case B:
		cout << "You choose weapon B";
		weaponDamage = WAND;
		initialUserPoints += weaponDamage;
	case C:
		cout << "You choose weapon B";
		weaponDamage = BATTLE;
		initialUserPoints += weaponDamage;
	case D:
		cout << "You choose weapon B";
		weaponDamage = RING;
		initialUserPoints += weaponDamage;
	}

    // Get a random number from 1 to 50.
	monsterPoints = (rand() % 10000) + 1;

	for (int i = 0; i < TIMES_TO_RUN; i++)
	{
		
	}

	
	system("pause");

	return  1;
}