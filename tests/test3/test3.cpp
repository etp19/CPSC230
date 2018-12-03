/*****************************************************************************
// CPSC 230			Fall 2018			HW # 8b
// Eduardo Torres
// The program display a list of phone numbers, you can display each separately,
// as well as edit them or create new ones. 
//
****************************************************************************/


#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

// function declarations
int* sizeOfArray(int size);
void addItems(int *result, int size);

int main()
{
	// declare variables:
	ifstream fileInput;
	int userRow;
	int sum = 0;
	int numbersArray[3][3];
	// dynamic arrays
	int* result;

	fileInput.open("numbers.txt");

	if (fileInput.fail()) {
		cout << "Cannot open the file";
	}

	cout << "Please enter what row you want the sum and average from ";
	cin >> userRow;

	for (int row = 0; row < 3; row++) {
		for (int column = 0; column < 3; column++)
		{
			fileInput >> numbersArray[row][column];
			if (row == userRow) {
				sum += numbersArray[row][column];
			};
			cout << numbersArray[row][column] << " ";
		}

		cout << endl;
	}

	cout << "The sum of row " << userRow << " is " << sum << endl;
	fileInput.close();

	result = sizeOfArray(5);
	cout << result << endl;

	addItems(result, 5);
	cout << "Number inside index 1:  " << result[1] << endl;

	delete[] result;
	result = nullptr;

	system("pause");
}

int* sizeOfArray(int size) {
	int *dynamicArray = new int[size];
	return dynamicArray;
}

void addItems(int *result, int size) {
	for (int i = 0; i < size; i++)
	{
		result[i] = (i + 1);
	}
}
