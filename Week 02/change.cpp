/******************************************************************************
** Author: Katrine Chow
** Date: October 3, 2017
** Description: This program asks the user for number of cents less than a dollar, and then outputs the amount of each type of coins that will make up the total number of cents. Note that the program will output the fewest total number of coins.
******************************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
//declaring int variables to store total number of cents, quarters, dimes, nickels, pennies, and remainder for each stage of calculation.
	int cents, quarters, dimes, nickels, pennies, remainder;
//Asks user for the amount of cents less than a dollar.
	cout << "Please enter an amount in cents less than a dollar." << endl;
//Stores input in the int variable cents
	cin >> cents;

//Calculates how many quarters in cents.
	quarters = cents/25;
//Stores remainder for next step.
	remainder = cents%25;
//Calculates how many dimes from the remainder.
	dimes = remainder/10;
//Stores current remainder for next step.
	remainder = remainder%10;
//Calculate how many nickels from the remainder.
	nickels = remainder/5;
//Stores current remainder for next step.
	remainder = remainder%5;
//Calculate how many pennies which should equal the remainder amount.
	pennies = remainder;

//Outputs results
	cout << "Your change will be:" << endl;
	cout << "Q: " << quarters << endl;
	cout << "D: " << dimes << endl;
	cout << "N: " << nickels << endl;
	cout << "P: " << pennies << endl;
	
	return 0;
}

