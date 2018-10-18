//**************************************************************************************************
// CPCS 230		Fall 2018		 hw # 4
// Eduardo Torres
//
// This program is a coin change calculator, it allows to chose from 1 to 99 cents,
// and it will return how many quarters, dimes and pennies can be obtain from the change.
// 
//**************************************************************************************************
// Imports
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <string>

using namespace std;

// function declarations
void compute_coins(int change);
void display_change(int change, int q, int d, int p);

// Constants, here will be the value of each coin plus the max amount
enum testChange {
	quarter = 25,
	dimes = 10,
	pennies = 1,
	maxAmount = 99
};

// main function
int main() {
	// sentinel
	char again = 'y';

	// variable declaration
	double change;

	// do while loop that will run at least one time
	do {
		// enter amount of change
		cout << "Please enter the change amount (0-99) cents" << endl;
		cin >> change;
		// validate if the change is in between 1 and 99
		// if true call the compute_coins function to make the change
		if((change >= pennies) && (change <= maxAmount)){
			compute_coins(change);
		}
		// if false, display a message that the amount of change was not in the range 1 to 99.
		else
		{
			cout << "The amount of change have to be between 1 and 99 cents" << endl;
		}
		// see if the user want to make another change, if so, the loop will again
		cout << "Do you want to make another change y/n? " << endl;
		cin >> again;
		// sentinel testing
	} while (tolower(again) == 'y');
	
	system("pause");
	return 0;
}

// Use this function to calculate the amount change.
void compute_coins(int change) {
	int change_quaters = change / quarter;
	int change_dimes = (change % quarter) / dimes;
	int change_pennies = ( (change %  quarter) % dimes);
	// after calculations are done, the display_change will be called.
	display_change(change, change_quaters, change_dimes, change_pennies);
	
}

// display the values that came from compute_coins() function.
void display_change(int change, int q, int d, int p){
	cout << change << " can be given as " <<  q << " quarter(s) , " << d << " dime(s)  and " << p << " penny(pennies) "  << endl;
	
}