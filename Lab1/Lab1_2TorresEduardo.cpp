#include <iostream>
#include <string>
using namespace std;
/* CPSC 230TR
 * Practice Lab
 * Rodger
 * Eduardo Torres
 * This Program will compile the amount of profit of selling bottles for a company.
 *
 * */

// Main Function
int main() {
    // algorithm
    // Get number of bottles
    // Get the number of cases
    // Get profit per bottle
    // get number of days
    // multiply profit per bottle by number of bottles per day
    // do the same per year
    // Finally the same per 10 years
    // Display


    // Variables
    int bottlesPerCase = 12;
    int cases;
    int daysInYear = 365;
    double bottlesSold;
    double profitPerDayPerBottle = 0.22;
    double profitPerDay;
    double profitPerYear;

    //Input how many cases
    cout << "Enter how many cases = ";
    cin >> cases;

    //Calculations
    bottlesSold = cases * bottlesPerCase;
    profitPerDay = bottlesSold * profitPerDayPerBottle;
    profitPerYear = profitPerDay * daysInYear;

    //Output
    cout << "Bottles sold\n";
    cout << bottlesSold;
    cout << "\n";
    cout << "Profit per day\n";
    cout << profitPerDay;
    cout << "\n";
    cout << "Profit Per Year\n";
    cout << profitPerYear;
    cout << "\n";
    cout << "Profit in 10 Years\n";
    cout << profitPerYear * 10;

    return 0;
}

