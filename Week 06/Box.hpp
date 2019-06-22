/*******************************************************************************
** Author: Katrine Chow
** Date: October 25, 2017
** Description: Box.hpp is the Box class specification file. This class contains
**              three double fields height, width, and length. Member functions
**              initializes these three fields and calculates Volume and Surface
**              area of a box. This serves as a header file.
*******************************************************************************/

// Include guards
#ifndef BOX_HPP
#define BOX_HPP

//Box class declaration
class Box
{
	//Declares member variables (double) height, width, length.
	private:
		double height;
		double width;
		double length;
	//Declare member functions which sets fields and calculate Volume and
	//Surface Area. Also setting up constructors to initialize the fields.
	public:
		void setHeight(double);
		void setWidth(double);
		void setLength(double);
		double calcVolume();
		double calcSurfaceArea();
		//Default constructor prototype
		Box();
		//Constructor for initializing member variables.
		Box(double, double, double);
};
#endif
