/*******************************************************************************
** Author: Katrine Chow
** Date: November 8, 2017
** Description: This is the implementation code for class Person. This will
**              define the Person constructor which initializes the data members
**              Name and Age. It also defines the getName and getAge functions.
*******************************************************************************/

//Include class Person specification file
#include "Person.hpp"
#include <string>

using std::string;

/*******************************************************************************
** Description:           Person::Person(string name, double age)
**               This constructor receives two parameters, string name and
**               double age, and initialize the two Person class data members.
*******************************************************************************/

Person::Person(string name, double age)
{
	personName = name;
	personAge = age;
}

/*******************************************************************************
** Description:                   Person::getName()
**                This method gets the currently stored name of the Person.
*******************************************************************************/

string Person::getName()
{
	return personName;
}

/*******************************************************************************
** Description:                   Person::getAge()
**                This method gets the currently stored age of the Person.
*******************************************************************************/

double Person::getAge()
{
	return personAge;
}
	
