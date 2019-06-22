/*******************************************************************************
** Author: Katrine Chow
** Date:  November 15, 2017
** Description: This function takes in an array of doubles and its size, doubles
**              the size of the array and fill up the new array with repeated
**              content from the original array.
*******************************************************************************/
#include <iostream> //Need this in order to use NULL

void repeatArray(double* &dblPtr, int arraySize)
{
	//Create a pointer to new double array of doubled size
	double* newArray = new double[arraySize*2];
	
	//Fill new array with original array's elements, and then repeat them
	for (int i=0; i<arraySize; i++)
	{
		newArray[i] = dblPtr[i];
		newArray[i+arraySize] = dblPtr[i];
	}
	
	//Memory Leak guard
	delete [] dblPtr;
	dblPtr = NULL;

	//Points original pointer dblPtr to the new array
	dblPtr = newArray;
	
}
