/*******************************************************************************
** Author: Katrine Chow
** Date: October 25, 2017
** Description: Taxicab.cpp is the Taxicab class function implementation file.
**              This defines the member functions getXCoord, getYCoord, 
**              getDistanceTraveled, moveX, and moveY.
*******************************************************************************/

//Linking to Taxicab.hpp
#include "Taxicab.hpp"
//To use the abs() function for calculating distance.
#include <cmath>
using std::abs;

/*******************************************************************************
** Description:                      Taxicab::Taxicab()
**              This is the default constructor which initializes the three
**              fields to zero. (xCoord, yCoord, distanceTraveled).
*******************************************************************************/

Taxicab::Taxicab()
{
	xCoord = 0;
	yCoord = 0;
	distanceTraveled = 0;
}

/*******************************************************************************
** Descirption:                      Taxicab::Taxicab(int, int)
**               This constructor takes 2 int parameters to initialize the
**               xCoord and yCoord fields. It also initializes distanceTraveled
**               to zero.
*******************************************************************************/

Taxicab::Taxicab(int x, int y)
{
	xCoord = x;
	yCoord = y;
	distanceTraveled = 0;
}

/*******************************************************************************
** Description:                      Taxicab::getXCoord
**               This function returns the x coordinate.
*******************************************************************************/

int Taxicab::getXCoord()
{
	return xCoord;
}


/*******************************************************************************
** Description:                      Taxicab::getYCoord
**               This function returns the y coordinate.
*******************************************************************************/

int Taxicab::getYCoord()
{
	return yCoord;
}


/*******************************************************************************
** Description:                      Taxicab::getDistanceTraveled
**               This function returns the distance traveled.
*******************************************************************************/

int Taxicab::getDistanceTraveled()
{
	return distanceTraveled;
}


/*******************************************************************************
** Description:                       moveX
**               This function takes 1 int parameter. It moves the Taxicab to
**               the left or right, then increments DistanceTraveled by the
**               absolute value of units shifted.
*******************************************************************************/

void Taxicab::moveX(int mx)
{
	//Updates xCoord and add to our distance counter.
	xCoord += mx;
	distanceTraveled += abs(mx);
	
}


/*******************************************************************************
** Description:                       moveY
**                This function takes 1 int parameter. It moves the Taxicab 
**                up or down, then increments DistanceTraveled by the absolute
**                value of units shifted.
*******************************************************************************/

void Taxicab::moveY(int my)
{

	//Updates yCoord and add to our distance counter.
	yCoord += my;
	distanceTraveled += abs(my);	
}

