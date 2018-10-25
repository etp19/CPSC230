/*******************************************************************************************************************************************
*                      CPSC 230 TR Fall 2018               HW Ch03
* Eduardo Torres
* Gregory Louis
*
* This game will ask the user to chose a weapon and it will play against a monster, the monster as well as the user will have a random 
* amount of points given to them when the game starts, if the user wins it the game will give them points
* but at the same time the monster will also adquire points (making the game more challenging), on the other hand, if the user looses a battle 
* will loose points but the monster will not, the points of the weapons will be added every time for the 5 times the loop runs.
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

int main()
{	

	ofstream myfile;
	myfile.open("data.txt");
	int z;
	for(int i=1; i <= 20; i++){
		z = (i+5);
		myfile << z;
  
	}
	myfile.close();

	return  1;
}