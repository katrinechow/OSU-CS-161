/*******************************************************************************
** Author: Katrine Chow
** Date: November 1, 2017
** Description: This is the implementation code for class Team. This defines the
**              constructor, get and set methods, as well as totalPoints, which
**              returns the sum of all players' points.
*******************************************************************************/

//Including class definition files.
#include "Team.hpp"
#include "Player.hpp"

/*******************************************************************************
** Description: Team::Team(Player pG, Player sG, Player sF, Player pF, Player c)
**              This constructor takes in 5 Player parameters and initializes 
**              the Team's player positions in the given order.
*******************************************************************************/

Team::Team(Player pG, Player sG, Player sF, Player pF, Player c)
{
	pointGuard = pG;
	shootingGuard = sG;
	smallForward = sF;
	powerForward = pF;
	centerPlayer = c;
}

/*******************************************************************************
** Description: Below are get methods for Team class data members.
*******************************************************************************/

Player Team::getPointGuard()
{
	return pointGuard;
}

Player Team::getShootingGuard()
{
	return shootingGuard;
}

Player Team::getSmallForward()
{
	return smallForward;
}

Player Team::getPowerForward()
{
	return powerForward;
}

Player Team::getCenter()
{
	return centerPlayer;
}

/*******************************************************************************
 ** Description: Below are set methods for Team class data members.
*******************************************************************************/

void Team::setPointGuard(Player pPG)
{
	pointGuard = pPG;
}

void Team::setShootingGuard(Player pSG)
{
	shootingGuard = pSG;
}

void Team::setSmallForward(Player pSF)
{
	smallForward = pSF;
}

void Team::setPowerForward(Player pPF)
{
	powerForward = pPF;
}

void Team::setCenter(Player pC)
{
	centerPlayer = pC;
}

/*******************************************************************************
** Description:                  Team::totalPoints()
**              This method returns the sume of all players' points.
*******************************************************************************/

int Team::totalPoints()
{

	//Get points from each player by calling their getPoints method.
	int PGPoints = pointGuard.getPoints();
	int SGPoints = shootingGuard.getPoints();
	int SFPoints = smallForward.getPoints();
	int PFPoints = powerForward.getPoints();
	int CPoints = centerPlayer.getPoints();

	int sum = PGPoints + SGPoints + SFPoints + PFPoints + CPoints;

	return sum;
}
