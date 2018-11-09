/*******************************************************************************************************************************************
*                      CPSC 230 TR Fall 2018               Lab 6-7
* Eduardo Torres
*
* This program will take a file as an input that contains student's names and their grades, then it will find the average and create another 
* file (result.tx) that will contain a table with the names of the students, their grades and if the grades are bellow, above or average.
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

// Constants
int const MAX = 600;

int main()
{
	// Variable declarations.
	ifstream inFile;
	ofstream outFile;
	string name[MAX];
	int grade[MAX];
	int sum = 0;
	int quantity = 0;
	int x = 0;
	double avg;
	
	// open a file
	inFile.open("data7.txt");
	
	// If unable to open, leave a message.
	if (!inFile.is_open()) {
		cout << "file is already open, use function close() at the end";
		exit(1);
	}


	// Otherwise, take each line until the end and put the names and numbers into the arrays.
	while (!inFile.eof()) {
		inFile >> name[x] >> grade[x];
		x++;
	}

	// Close File
	inFile.close();

	// Select how many grades to process
	cout << "Enter quatity of grades to be processed (0 - ", x, "): ";
	cin >> quantity;
	
	// get the sum
	for (int i = 0; i < quantity; i++) {
		sum += grade[i];
	}
	
	// find the average and display it.
	avg = average(sum, quantity);
	cout << fixed << setprecision(1);
	cout << "The average is " << avg << endl;
	
	// create a file
	outFile.open("Result.txt");
	
	// Create the column headers
	outFile << left << setw(15) << "Name";
	outFile << right << setw(12) << "Grade";
	outFile << right << setw(22) << "Average";
	outFile << endl;
	
	// loop ever the arrays and determine which is above, bellow or average
	// output those into the file created (result.txt)
	for (int i = 0; i < quantity; i++) {
	if (grade[i] == avg) {
		outFile << left << setw(15) << name[i];
		outFile << right << setw(12) << grade[i];
		outFile << right << setw(22) << "Average";
		outFile << endl;
	}
	else if (grade[i] > avg) {
		outFile << left << setw(15) << name[i];
		outFile << right << setw(12) << grade[i];
		outFile << right << setw(22) << "Above Average";
		outFile << endl;
	}
	else {
		outFile << left << setw(15) << name[i];
		outFile << right << setw(12) << grade[i];
		outFile << right << setw(22) << "Bellow Average";
		outFile << endl;
	}
}	

// close result.txt
outFile.close();

// display message to the user
cout << "Result.txt is ready";;
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