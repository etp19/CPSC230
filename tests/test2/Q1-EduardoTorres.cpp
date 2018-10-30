/*
// CPSC 230
/ Eduardo Torres
/ Test 2
/
/ This program sort 3 numbers.
/
*/
// Imports
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <string>

using namespace std;

// Funtion declaration
void swapNums(int& a , int& b);

int main() {
	// variables
	int num1, num2, num3;
	int temp;
	
	// input
	cout << " Whatever three whole numbers you enter, we will put them in order\n";
	cout << " Please enter the 1st number: ";
	cin >> num1;
	cout << " Ok, now the 2st one: ";
	cin >> num2;
	cout << " Finally, the last number please: ";
	cin >> num3;

	// find the lowest number
	// in every if statement body, the function swapNums will be called to swap the numbers if neeeded.
	if (num1 > num2) {
		swapNums(num1, num2);
	}
	if (num2 > num3) {
		swapNums(num2, num3);
	}
	if (num1 > num2) {
		swapNums(num1, num2);
	}

	// output
	cout << " The numbers in order are: \n";
	cout << num1 << endl << num2 << endl << num3 << endl;

	return 0;
}

// this function is called to swap 2 numbers;
void swapNums(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
