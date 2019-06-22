/*******************************************************************************
** Author: Katrine Chow
** Date: November 1, 2017
** Description: This is the specification code for class Team. It defines the
**              data members, the constructor, the get and set methods, and a
**              method that calculates the sum of all players' points.
*******************************************************************************/

//Include guard
#ifndef TEAM_HPP
#define TEAM_HPP

#include "Player.hpp"

//Team class declaration
class Team
{
	private:
		Player pointGuard;
		Player shootingGuard;
		Player smallForward;
		Player powerForward;
		Player centerPlayer;

	public:
		//Constructor that takes 5 Player parameters for initialization.
		Team(Player pGuard, Player sGuard, Player sForward,
		Player pForward, Player cPlayer);
		
		//get methods that return current data member values
		Player getPointGuard();
		Player getShootingGuard();
		Player getSmallForward();
		Player getPowerForward();
		Player getCenter();

		//set methods that sets value to parameter received.
		void setPointGuard(Player);
		void setShootingGuard(Player);
		void setSmallForward(Player);
		void setPowerForward(Player);
		void setCenter(Player);

		//totalPoints method returns the sum of all players' points.
		int totalPoints();
};
#endif
