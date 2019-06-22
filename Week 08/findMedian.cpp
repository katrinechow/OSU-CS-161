/*******************************************************************************
** Author: Katrine Chow
** Date: November 8, 2017
** Description:           findMedian(int intArray[]. int size)
**              This fucntion takes an array of int and the size of the array,
**              and return the median of the array. 
*******************************************************************************/

//Using built-in sort function.

#include <algorithm>
using std::sort;

double findMedian(int intArray[], int size)
{
		//Sort the array in ascending order.
		sort(intArray, intArray+size);

		//If even elements, return average of the middle values.
		if(size%2==0)
		{
			double num1 = intArray[(size/2) - 1];
			double num2 = intArray[size/2];
			
			return (num1 + num2)/2;
		}
		//If total elements is odd, return the number in the middle.
		else
		{
			return intArray[(size-1)/2];
		}
}
