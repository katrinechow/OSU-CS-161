/*******************************************************************************
** Author: Katrine Chow
** Date: October 25, 2017
** Description: This is the client code for project 5b. This program will
**              move a Taxicab per user input and keeps track of the total
**              distance traveled.
*******************************************************************************/

#include <iostream>
#include "Taxicab.hpp"
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::abs;

int main()
{
	Taxicab cab1;

	cout << cab1.getDistanceTraveled() << endl;
	cout << cab1.getXCoord() << endl;
	cout << cab1.getYCoord() << endl;

	Taxicab cab2(5, -8);
	
	//cout << cab2.getDistanceTraveled() << endl;
	//cout << cab2.getXCoord() << endl;
	//cout << cab2.getYCoord() << endl;

	cab1.moveX(3);
	cab1.moveY(-4);
	cab1.moveX(-1);

	cout << cab1.getDistanceTraveled() << endl;
	cout << cab1.getXCoord() << endl;
	cout << cab1.getYCoord() << endl;

	cout << cab2.getDistanceTraveled() << endl;
	cout << cab2.getXCoord() << endl;
	cout << cab2.getYCoord() << endl;

	cab2.moveY(7);
	
	cout << cab2.getDistanceTraveled() << endl;
	cout << cab2.getXCoord() << endl;
	cout << cab2.getYCoord() << endl;

	return 0;
}
