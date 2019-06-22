/*******************************************************************************
** Author: Katrine Chow
** Date: October 25, 2017
** Description: Box.cpp is the Box class function implementation file. This 
**              defines the member functions setHeight, setWidth, setLength,
**              calcVolume, and calcSurfaceArea. 
*******************************************************************************/

//Linking to Box.hpp
#include "Box.hpp"


/*******************************************************************************
** Description:                       Box::Box()
**               This is the default constructor that initializes each field to
**               1.0.
*******************************************************************************/

Box::Box()
{
	setHeight(1.0);
	setWidth(1.0);
	setLength(1.0);
}


/*******************************************************************************
** Description:                       Box::Box(1, 2, 3)
**              This constructor takes three double parameters and passes them
**              to class Box's member functions to initialize height, width,
**              and length.
*******************************************************************************/

Box::Box(double h, double w, double l)
{
	setHeight(h);
	setWidth(w);
	setLength(l);
}


/*******************************************************************************
** Description:                       Box::setHeight
**               This function checks for valid data (a positive value >= 1).
**               If valid, assigns value to height. If invalid, initialize to 1.
*******************************************************************************/

void Box::setHeight(double h)
{
	if (h > 0.0)
		height = h;
	else
		height = 1.0;
}


/*******************************************************************************
** Description:                        Box::setWidth
**               This function checks for valid data (a positive value >= 1).
**               If valid, assigns value to width, else initialize to 1.
*******************************************************************************/

void Box::setWidth(double w)
{
	if (w > 0.0)
		width = w;
	else
		width = 1.0;
}


/*******************************************************************************
** Description:                        Box::setLength
**                This function checks for valid data (a positive value >= 1).
**                If valid, assigns value to length, else initialize to 1.
*******************************************************************************/

void Box::setLength(double l)
{
	if (l > 0.0)
		length = l;
	else
		length = 1.0;
}


/*******************************************************************************
** Description:                        Box::calcVolume
**                This function calculates and returns the volume of the box.
*******************************************************************************/

double Box::calcVolume()
{
	return length * width * height;
}


/*******************************************************************************
** Description:                        Box::calcSurfaceArea
**                This function calculates and returns the surface area of the
**                box.
*******************************************************************************/

double Box::calcSurfaceArea()
{
	return 2 * (length * width) + 2 * (length * height) +
		2 * (height * width);
}

