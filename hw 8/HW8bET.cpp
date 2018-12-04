/*****************************************************************************
// CPSC 230			Fall 2018			HW # 8b
// Eduardo Torres
// The program display a list of phone numbers, you can display each separately,
// as well as edit them or create new ones. 
//
****************************************************************************/


#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Prototypes
void showPhoneBook(vector<string> N, vector<int> P);
int toChoice(char c, vector<string> n);
void editNum(vector<string>& N, vector<int>& P, int c1);
void addContact(vector<string>& N, vector<int>& P);

int main()
{
	//variables
	string eleName;
	int elePhone;
	char choice;
	vector<string> name{ "Andrico", "Bonnie", "Charles",
						"Debbie", "Enrique"};
	vector<int> phone{ 5551234,
						5555678,
						5552468,
						5551379,
						5559876};

	

	do
	{
		//call function showPhoneBook
		showPhoneBook(name, phone);

		//get user request
		cout << "\n\nWho\'s phone number do you want to see?" << endl;
		cout << "remember, type \'a\' for add , \'e\' for edit and \'x\' for exit, otherwise just type the number of the person." << endl;
		cin >> choice;

		//call function toChoice
		elePhone = toChoice(choice, name);
		if (elePhone != -1 && elePhone != -2)
		{
			cout << "The phone number for " << name[elePhone] << " is " << phone[elePhone] << ".\n\n\n\n\n\n";
		}
		if (choice == 'e')
		{
			int choice1;
			cout << "Which entry do you want to edit?  ";
			cin >> choice1;
			editNum(name, phone, choice1);
		}
		
		if (choice == 'a') {
			
			addContact(name, phone);
			cout << "The contact has been added to the PhoneBook" << ".\n\n\n\n\n\n";
		}

		if (elePhone == -2) {
			cout << "The phone number you looking for does not exist or is not a number" << ".\n\n\n\n\n\n";
		}

	} while (choice != 'x');

	return 0;
}

//print function
void showPhoneBook(vector<string> N, vector<int> P)
{
	for (int i = 0; i < N.size(); i++)
	{
		cout << i << "  " << N[i] << "\t" << P[i] << endl;
	}
	return;
}

int toChoice(char c, vector<string> n)
{

	if (c != 'e' && c != 'x' && c != 'a')
	{
		// convert char to number
		int i = c - '0';
		
		// test if is letter or is bigger than the vector
		if (!isdigit(c) || i > n.size()) {
			return -2;
		}
		else
		{
			return i;
		}
		
	
	}
	else
		return -1;
	return -1;
}

// Function to edit
void editNum(vector<string>& N, vector<int>& P, int c1)
{
	string name;
	int number;
	cout << "What is the name for entry " << c1 << "?:  ";
	cin >> name;
	cout << "What is the number for entry " << c1 << "?:  ";
	cin >> number;

	N[c1] = name;
	P[c1] = number;
	return;
}

// function to add
void addContact(vector<string>& N, vector<int>& P) {
	string name;
	int number;
	cout << "What is the name for the new entry " << "?:  ";
	cin >> name;
	cout << endl;
	cout << "What is the number for the new entry " << "?:  ";
	cin >> number;
	N.push_back(name);
	P.push_back(number);
	return;
}