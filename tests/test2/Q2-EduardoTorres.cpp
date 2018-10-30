/*
// CPSC 230
/ Eduardo Torres 
/ Test 2
/
/ This program act as a basic calculator, it allows the user to enter, two number and the operation they want to perform
/ and by using different functions it will calculate the answer and display it. 
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

// Funtion declarations
void displayInput(int& num1, int& num2, char& sign);
void displayOutput(int num1, int num2, char sign, int result);
int add(int a, int b);
int substract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main() {
	// variables
	int num1, num2;
	char sign;
	int result;

	// function for displaying input to user
	displayInput(num1, num2, sign);

	// this will check for what operator is being used.
	// then it will call a function according to the operation to be performed.
	switch (sign) {
	case '+':
		result = add(num1, num2);
		break;
	case '-':
		result = substract(num1, num2);
		break;
	case '*':
		result = multiply(num1, num2);
		break;
	case '/':
		result = divide(num1, num2);
		break;
	// Default statement for wrong operator.
	default:
		cout << "You have enter the wrong operator" << endl;
	}
	
	// Once you have the results back, display the information to the user.
	displayOutput(num1, num2, sign, result);

}

// display input, pass the values back as a reference to the main.
void displayInput(int& num1, int& num2, char& sign) {

	// input
	cout << " Please enter the 1st number: ";
	cin >> num1;
	cout << " Ok, now the operator: ";
	cin >> sign;
	cout << " Finally, the last number please: ";
	cin >> num2;	
}

// Next 4 functions are the basics calculations, add, subtract, multiply, divide,
// They will resturn the value back to main.
int add(int a, int b) {
	return a + b;
}

int substract(int a, int b) {
	return a - b;
}

int multiply(int a, int b) {
	return a * b;
}

int divide(int a, int b) {
	return a / b;
}

// display the result of the calculation.
void displayOutput(int num1, int num2, char sign, int result) {

	// output
	cout << "Your input " << num1 << " " << sign << " " << num2 << ". Your answer is " << result << endl;
}