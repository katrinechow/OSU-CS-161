/*******************************************************************************
** Author: Katrine Chow
** Date: November 8, 2017
** Description: This function stdDev receives two parameters including an array
**              of Person objects and size of the array. It returns the standard
**		deviation of all the ages.
*******************************************************************************/

//Include Person class specification
#include "Person.hpp"
//#include <string>
#include <cmath> //Include cmath to use pow and sqrt functions

using std::string;

//Function stdDev definition.
double stdDev(Person peopleArray[], int arraySize)
{
	double totalAge = 0;

	//Get and total up each person's age
	for (int i=0; i<arraySize; i++)
	{
		totalAge += peopleArray[i].getAge();
	}

	//Find mean age by taking sum of all ages and divide by N (arraySize).
	double meanAge = totalAge/arraySize;

	//For each age, subtract mean age from it and then square the result.
	double numArray[arraySize]; //to store each result.
	
	double SecondSum = 0; //to store running total of result.

	for (int j=0; j<arraySize; j++)
	{
		numArray[j] = pow((peopleArray[j].getAge() - meanAge), 2);
		SecondSum += numArray[j];
	}
		
	
	//Find mean of the above calculated differences.
	double SecondMean = SecondSum/arraySize;

	//Take square root of the SecondMean
	double standardDeviation = sqrt(SecondMean);
}
