/*******************************************************************************
** Author: Katrine Chow
** Date: November 1, 2017
** Description: This is the implementation code for class Player's constructors,
**              get and set methods, as well as the hasMorePointsThan method.
*******************************************************************************/

//Includes the Player class specification file
#include "Player.hpp"
#include <string>

using std::string;

/*******************************************************************************
** Description:                      Player::Player()
**              This defines the default constructor which initializes Player
**              Name to the emptry string, and -1 to the other stats.
*******************************************************************************/
                   
Player::Player()
{
	pName = "";
	pPoints = -1;
	pRebounds = -1;
	pAssists = -1;
}

/*******************************************************************************
** Description:       Player::Player(string n, int p, int r, int a)
**              This defines the constructor which takes 4 parameters and
**              initializes the Player data members with these values.
*******************************************************************************/

Player::Player(string n, int p, int r, int a)
{
	pName = n;
	pPoints = p;
	pRebounds = r;
	pAssists = a;
}

/*******************************************************************************
** Description: Below are get methods that return each data member's value.
*******************************************************************************/

string Player::getName()
{
	return pName;
}

int Player::getPoints()
{
	return pPoints;
}

int Player::getRebounds()
{
	return pRebounds;
}

int Player::getAssists()
{
	return pAssists;
}

/*******************************************************************************
** Description: Below are set methods to set the values of each of the player
**              stats (Points, Rebounds, Assists).
*******************************************************************************/

void Player::setPoints(int points)
{
	pPoints = points;
}

void Player::setRebounds(int rebounds)
{
	pRebounds = rebounds;
}

void Player::setAssists(int assists)
{
	pAssists = assists;
}

/*******************************************************************************
** Description:           Player::hasMorePointsThan(Player)
**              This method takes in a Player class parameter. If the player
**              executing this function has more points than the player passed
**              in parameter, method returns true. Otherwise returns false.
*******************************************************************************/

bool Player::hasMorePointsThan(Player playerN)
{
	//Query for current player's points, and other player's points
	int currentPlayer = getPoints();
	int otherPlayer = playerN.getPoints();

	//Compares the two players' points
	if (currentPlayer > otherPlayer)
	{
		return true;
	}
	else
	{
		return false;
	}
}
