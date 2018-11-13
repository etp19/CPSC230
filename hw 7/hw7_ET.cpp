/*******************************************************************************************************************************************
*                      CPSC 230 TR Fall 2018               hw 6-7
* Eduardo Torres
*
* This program generate 20 random numbers and it will fill an array with it, then it will apply different algorithms such as bubble sort 
* and search, finally it will output the original array, the sorted one and the numbers found from the search as well as the sum and average of the array.
*
********************************************************************************************************************************************
*/
// Imports
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>

using namespace std;

// functions declaration
double average(int sum, int quantity);

double round_number(double number_to_round);

void sortArray(int originalArray[], int sortedArray[], int arrayLenght);

int searchInArrayAndDisplay(const int sortedArray[], int max , int SearchNum);

// Constants
int const MAX = 20;

int main()
{
	// Variable declarations.
	int numbersToSearch[4] = { 7, 25, 42, 91 };
	int original[MAX];
	int sorted[MAX];
	int sum = 0;
	int quantity = 0;
	int x = 0;
	double avg;

	// Seed Random
	srand(time(NULL));
	
	// get the sum
	cout << "Original Array List : " << endl;
	cout << "*************************" << endl;
	for (int i = 0; i < MAX; i++) {
		original[i] = (10 + (rand() % (int)(99 - 10 + 1)));
		cout << original[i] << endl;
	}
	cout << endl;

	cout << "Sorted Array List : " << endl;
	cout << "*************************" << endl;
	sortArray(original, sorted, MAX);
	for (int i = 0; i < MAX; i++) {
		cout << sorted[i] << endl;
		
		// find sum
		sum += sorted[i];
	}
	
	// find the average and display it.
	avg = average(sum, MAX);
	cout << fixed << setprecision(1);
	cout << "The sum of the sorted array is : " << sum << endl;
	cout << "The average of the sorted array is : " << avg << endl;
	for (int i = 0; i < 4; i++) {
		int numberFound = searchInArrayAndDisplay(sorted, MAX, numbersToSearch[i]);
		if (numberFound != -1) {
			cout << "The number  " << sorted[numberFound] << " was found at position " << numberFound << endl;
		}
	}
	system("pause");
}	

// this function finds the average of the grades
double average(int sum, int quantity) {
	if (quantity == 0) {
		return 0;
	}
	else
	{
		return round_number((sum / (double)quantity));
	}

}

// it will round the average to one decimal place.
double round_number(double number_to_round) {
	int new_number;
	number_to_round *= 10;
	number_to_round += 0.5;
	new_number = static_cast<int>(number_to_round);
	number_to_round = static_cast<double>(new_number) / 10;
	return number_to_round;
};

// Algorithm to sort the array and copy it to the new array.
void sortArray(int originalArray[], int sortedArray[], int arrayLenght) {

	for(int i = arrayLenght - 1; i > 0; i--)
		for(int j = 0; j < i; j++)
			if (originalArray[j] > originalArray[j + 1]) {
				int temp = originalArray[j + 1];
				originalArray[j + 1] = originalArray[j];
				originalArray[j] = temp;
			}
	
	for(int a = 0; a < arrayLenght; a++ ) {
		sortedArray[a] = originalArray[a];
	}
};

// Algorithm to search an array of numbers
int searchInArrayAndDisplay(const int sortedArray[], int max, int SearchNum) {
	int index = 0;
	bool found = false;
	while ((!found) && (index < max))
	{
		if (SearchNum == sortedArray[index]) {
			found = true;
		}
		else
		{
			index++;
		}
	}

	if (found) {
		return index;
	}
	else
	{
		return -1;
	}
}