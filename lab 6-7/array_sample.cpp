//
//
//

#include <iostream>

using namespace std;

int main()
{
	double sales [10];
	int index, maxIndex;
	double largestSale, sum, average;
	sum = 0;

	//initializing array
	for (index = 0; index < 10; index ++)
	{	
		sales[index] = 10.0;
	}

	// reading data into an array
	
	for (index = 0; index < 10; index ++)
	{	
		cout << "Please input sale #" << (index + 1) << ": ";
		cin >> sales[index];
		cout << endl;
	}

	//Printing an array
	for (index = 0; index < 10; index++)
	{
		cout << sales[index] << endl;
	}
	
		//finding sum and average of an array
		for (index = 0; index < 10; index ++)
	{	
		sum = sum + sales[index];
		cout << "The sum is " << sum << " so far." << endl;
	}
	average = sum / 10;
	cout << "The average of all 10 is " << average << endl;
	
	//finding the largest in the array
	maxIndex = 0;
	for (index = 1; index < 10; index++)
	{
		if (sales[maxIndex] < sales[index])
		{
			maxIndex = index;
		}
	}
	largestSale = sales[maxIndex];
	cout << "The largest sale was "<< largestSale << endl;

return 0;
}