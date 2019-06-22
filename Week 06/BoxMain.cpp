/*******************************************************************************
** Author: Katrine Chow
** Date: October 25, 2017
** Description: This is the client code for 5a. Not for turning in, just for
**              testing.
*******************************************************************************/

#include <iostream>
#include "Box.hpp"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	Box box1; //Declares object box1 of class Box
	double boxHeight, boxWidth, boxLength; 
	//Declares doubles for height, width, length
	
	//Get Box dimensions from user
	cout << "This program will calculate the Volume and Surface Area of your box." << endl;
	cout << "What is the height? ";
	cin >> boxHeight;
	cout << "what is the width? ";
	cin >> boxWidth;
	cout << "What is the Length? ";
	cin >> boxLength;

	//Calling class Box member functions
	box1.setHeight(boxHeight);
	box1.setWidth(boxWidth);
	box1.setLength(boxLength);

	//Display Volume and Surface Area
	cout << "\nHere is the box's volume and surface area:\n";
	cout << "Volume: " << box1.calcVolume() << endl;
	cout << "Surface Area: " << box1.calcSurfaceArea() << endl;

return 0;
}
