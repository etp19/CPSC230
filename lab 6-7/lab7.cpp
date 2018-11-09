/*******************************************************************************************************************************************
*                      CPSC 230 TR Fall 2018               Lab 6-7
* Eduardo Torres
*
* This program will take a file as an input and get each number within the file transfered into an array, then it will make some calculations
* such as the sum, counting the elements and the average. Finally, it will take the date and print it out to a file called result.txt
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

// Constants
int const MAX = 100;

int main()
{
	// Variable declarations.
	int sum = 0;
	int average = 0;
	int index = 0;
	int numArray[MAX];
	ifstream openFile;
	ofstream createFile;

	// Open the file
	openFile.open("data.txt");
	// if unable to open, leave a message.
	if (openFile.fail()) {
		cout << "Cannot open the file";
		exit(1);
	}
	// Otherwise, take each line until the end and put the numbers into the array.
	// Also get the sum of every element in the array.
	else
	{
		while (!openFile.eof()) {
			openFile >> numArray[index];
			sum += numArray[index];
			index++;
		}
		}
		openFile.close();
		
		// Find the average
		average = sum / index;

	// Create a new file
	createFile.open("Result.txt");

	// Loop over the array and determine which numbers are bellow, above and average.
	// Print those numbers to the file Result.txt previously opened.
	for (int i = 0; i < index; i++) {
		if (numArray[i] == average) {
			createFile << numArray[i] << " is average" << endl;
		}
		else if (numArray[i] > average) {
			createFile << numArray[i] << " is above average" << endl;
		}
		else {
			createFile << numArray[i] << " is bellow average" << endl;
		}
	}
	// Print how many numbers were processed
	createFile << endl << "Numbers processed = " << index << endl;
	createFile.close();

}