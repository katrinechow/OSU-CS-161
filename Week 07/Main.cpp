/*******************************************************************************
** Author: Katrine Chow
** Date: November 1, 2017
** Description: This is the client code for Assignment 6a.
*******************************************************************************/

#include <iostream>
//#include <string>
#include "Player.hpp"
#include "Team.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	Player p1("Charlotte", 24, 10, 7);
 	Player p2("Emily", 21, 13, 9);
 	Player p3("Anne", 20, 10, 8);
 	Player p4("Jane", 19, 10, 10);
 	Player p5("Mary", 18, 11, 8);

 	p2.setRebounds(99);
	cout << "Rebounds is: " << p2.getRebounds() << endl;

	cout << p1.getName() << " " << p1.getPoints() 
		<< p1.getAssists() << endl;

	cout << p4.getName() << " " << p4.getPoints()
		<< p4.getAssists() << endl;

	cout << p3.getName() << " " << p3.getPoints()
		<< p3.getAssists() << endl;

 	Team team1(p1, p2, p3, p4, p5);

 	Player p = team1.getCenter();
 	cout << p.getName() << endl;

return 0;
}
