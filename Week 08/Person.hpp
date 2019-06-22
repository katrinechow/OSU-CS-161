/*******************************************************************************
** Author: Katrine Chow
** Date: November 8, 2017
** Description: This is the class Person specification. Person has two data
**              members including a string variable "name" and a double "age".
**              A constructor initializes these two variables. This class also
**              has get methods for the two data members.
*******************************************************************************/

//Include guards
#ifndef PERSON_HPP
#define PERSON_HPP

//Class Person has a string variable.
#include <string>
using std::string;

//Class Person specs.
class Person
{

	//2 data members
	private:
		string personName;
		double personAge;

	//Member function prototypes include a constructor and get methods.
	public:
		//Default constructor
		Person();

		//Constructor that takes 2 values to initialize variables.
		Person(string personName, double personAge);

		//Get methods to get Name and get Age
		string getName();
		double getAge();
};
#endif
