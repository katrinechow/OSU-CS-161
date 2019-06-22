/*******************************************************************************
** Author: Katrine Chow
** Date: october 25, 2017
** Description: This header file defines class Taxicab, which has three int
**		fields. 
*******************************************************************************/

//Include guards
#ifndef TAXICAB_HPP
#define TAXICAB_HPP

//Taxicab class declaration
class Taxicab
{
	//Declares member variables (int) xCoord, yCoord, totalDistance.
	private:
		int xCoord;
		int yCoord;
		int distanceTraveled;

	//Declare member functions
	public:
		int getXCoord();
		int getYCoord();
		int getDistanceTraveled();
		void moveX(int);
		void moveY(int);

		//Default constructor prototype
		Taxicab();

		//Constructor that initializes coordinates and distance
		Taxicab(int, int);
};
#endif
		 
