//**************************************************************************************************
// CPCS 230		Fall 2018		 hw # 8A
// Eduardo Torres
//
// This program will decrypt a message by inversing the algorithm used to create it. 
// The program will try using 0-100 keys for every letter of the message.
//
// 
//**************************************************************************************************

// imports
#include<iostream>
using namespace std;
int main()
{
	// variable declarations
	char decrypted;
	string message = ":mmZ\dxZmx]Zpgy";

	// loop through every key
	for (int key = 1; key <= 100; key++)
	{
		cout << "Using Key " << key << " : ";
		// using one key at a time loop through every word
		for (int index = 0; message[index] != '\0'; index++)
		{
			// see if ascii number -key is less than 32
			if ((message[index] - key) < 32){
				// inverse the algorithm used when encrypting
				decrypted = message[index] - key - 32 + 127;
				// display output
				cout << decrypted;
			}
			else{
				// if greater than, use the inverse of the second algorithm used when encrypting
				decrypted = message[index] - key;
				// display output
				cout << decrypted;
			}
		}
		// this is used to divide every attempt to decrypt the message one per line.
		cout << endl;
	}
	system("pause");
	return 0;
}