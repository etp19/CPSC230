/************************************************************************
* Eduardo torres                        Test #3
* CSCP 230
* 
* Rodger Irish							12/4/2018
*
*************************************************************************/


#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

// function declarations
bool search(vector<int> myarray, int numberToFind);

void main() {

	// variable declarations
	ifstream fileInput;
	string username;
	string *usernameMemory;
	int count = 0;
	int randomNumber;
	bool found;

	// set random
	srand(time(NULL));

	// Username input
	cout << "Please enter you username: " << endl;
	cin >> username;
	// Use length function to get the size of the string.
	cout << "Your username contain: " << username.length() << endl;
	
	// get the memory address of the username variable
	usernameMemory = &username;

	// get a random number
	randomNumber = (10 + (rand() % (int)(99 - 10 + 1)));

	// vector declaration with item x amount of items based on randomNumber 
	vector<int> name(randomNumber);

	cout << "The vector size is: " << name.size() << endl;
	
	// open file
	fileInput.open("inText1.txt");

	// Error check for file
	if(fileInput.fail()) {
		cout << "Cannot open the file";
	}

	// fill vector with numbers from the file
	for (int i = 0; i < name.size(); i++)
	{
		fileInput >> name[i];
	}

	// function to search for the number 27.
	found = search(name, 27);
	// if the number is not found, added to the vector.
	if (!found) {
		cout << "the number 27 was not found and it has been added" << endl;
		name.push_back(27);
	}

	// Print the memory address being used.
	cout << "The username variable address being used is: " << usernameMemory << endl;

}

// search function
bool search(vector<int> myarray, int numberToFind) {
	for (int index = 0; index < myarray.size(); index++)
	{
		// if the number passed is found return true and say the index where it was found
		if (myarray.at(index) == numberToFind) {			
			cout << "The number 27 was found at index " << index << endl;
			return true;
		}
	}

	// return false if number is not found
	return false;
}
