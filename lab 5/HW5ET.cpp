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
// Constants
enum testChange {
	quarter = 25,
	dimes = 10,
	nickel = 5,
	pennies = 1
};


int main() {
	int again= 'y';
	double change;
	do {
		
		cout << "Please enter the change" << endl;
		cin >> change;
		compute_coins(change);
		cout << "Do you want to make another change? " << endl;
		cin >> again;
	} while (tolower(again) == 'y');
	
	system("pause");
	return 0;
}

void compute_coins(int change) {
	int change_quaters = change / quarter;
	int change_dimes = (change % quarter) / dimes;
	int change_pennies = ( (change %  quarter) % dimes);

	cout << "quarters: " << change_quaters << " dimes: " << change_dimes << " pennies: " << change_pennies << endl;
	
}