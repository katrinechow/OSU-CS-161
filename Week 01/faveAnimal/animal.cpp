/******************************************************************************
** Author: Katrine Chow
** Date: 9.24.2017
** Description: CS 161 Week 1 Assignment 1. This program receives input from user on their favorite animal, and then outputs the animal onto the screen.
*******************************************************************************/

#include <iostream>
#include <string>

// a simple example program
int main()
{
	std::string faveAnimal;
	std::cout << "Please enter your favorite animal." << std::endl;
	std::cin >> faveAnimal;
	std::cout << "Your favorite animal is the " << faveAnimal;
	std::cout << "." << std::endl;

	return 0;
}
