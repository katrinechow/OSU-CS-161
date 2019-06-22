/*******************************************************************************
** Author: Katrine Chow
** Date: October 17, 2017
** Description: This program calls function fallDistance which calculates
**              the distance an object falls in meters. fallDistance uses
**              the formula d=1/2 * g * t^2 where d is the distance fell,
**              g is gravity at 9.8, and t is the time in seconds that the
**              object has been falling. User will be asked to enter the time
**              and the program returns the distance.
******************************************************************************/

#include <iostream>
#include <cmath> //to use the pow() function

using std::cout;
using std::cin;
using std::endl;

//Here is the function prototype
double fallDistance(double);

/*
//Here is our main function
int main()
{
	//Declaring double variables fallTime to hold user input, distance to
	//hold value returned by function fallDistance.
	double fallTime, distance;

	//Asks user to input time in seconds and stores in fallTime.
	cout << "Enter the falling time in seconds." << endl;
	cin >> fallTime;

	//Calling fallDistance to run fallTime through the distance equation.
	distance = fallDistance(fallTime);

	//Prints distance to display.
	cout << distance << endl;

	return 0;
}
*/


/*******************************************************************************
** Description: This function fallDistance takes a double value entered by the
**              user, and calculates the distance in meters an object falls.
**              The function returns the value of meters to main.
*******************************************************************************/

double fallDistance(double timeInSec)
{

	//Declaring double g and set it to gravity, 9.8.
	//Declaring double meters to store the result of calculation.
	double g = 9.8;
	double meters;

	//Performs calculatin of the distance equation.
	meters = 0.5 * g * pow(timeInSec, 2);

	//Returns value of meters to main.
	return meters;

}
