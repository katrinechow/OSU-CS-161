/******************************************************************************
** Author: Katrine Chow
** Date: October 3, 2017
** Description: This program asks user for a Celsius temperature, converts it to Fahrenheit, and then outputs the result.
******************************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
//Declares double variables celsius and fahrenheit to store those values.
	double celsius, fahrenheit;

//Asks user to input a Celsius temperature.
	cout << "Please enter a Celsius temperature." << endl;

//Assigns value to variable celsius.
	cin >> celsius;

//Converts value to Fahrenheit.
	fahrenheit = ((9 * celsius)/ 5)+ 32;

//Displays temperature in Fahrenheit.
	cout << "The equivalent Fahrenheit temperature is:" << endl;
	cout << fahrenheit << endl;
	
	return 0;
}
