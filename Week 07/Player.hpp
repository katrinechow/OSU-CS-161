/*******************************************************************************
** Author: Katrine Chow
** Date: November 1, 2017
** Description: This defines class Player which has four data members, a default
**              constructor that initializes the name variable to the empty
**              string, and set other attributes to -1. This class also has a
**              constructor that receives four parameters and uses them to 
**              initialize each data member. There are get and set methods for
**              each data member, as well as a function that compares two
**              players and see who has more points.
*******************************************************************************/

//include guard
#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <string>

using std::string;

//defines class called Player
class Player
{
	//defines data member of this class
	private:
		string pName;
		int pPoints;
		int pRebounds;
		int pAssists;

	//defines member functions
	public:
		//Default constructor. Initializes pName to empty string, and
		//-1 to other data members.
		Player();

		//Constructor that receives 4 parameters and initializes the
		//data members with these values.
		Player(string n, int p, int r, int a);

		//Get methods returns value of each data member
		string getName();
		int getPoints();
		int getRebounds();
		int getAssists();

		//Set methods sets stats to value received.
		void setPoints(int);
		void setRebounds(int);
		void setAssists(int);

		//This method receives a Player parameter. It returns true if
		//Player executing function has more points than the Player
		//passed into the method. False otherwise.
		bool hasMorePointsThan(Player);

};
#endif
		
