/********************************************************************************* Author: Katrine Chow
** Date: October 3, 2017
** Description: This program asks user for five numbers and then prints out the average of those numbers.
*******************************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
//Declaring double variables to store user input and average.
	double num1, num2, num3, num4, num5, average;

//Ask user for 5 numbers.
	cout << "Please enter five numbers." << endl;
//Stores numbers into variables.
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
//Get the average of the 5 numbers.
	average = (num1 + num2 + num3 + num4+ num5) / 5;
//Display the average.
	cout << "The average of those numbers is:" << endl;
	cout << average << endl;

	return 0;
}
