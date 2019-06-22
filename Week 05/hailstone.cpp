/*******************************************************************************
** Author: Katrine Chow
** Date: October 17, 2017
** Description: This program takes a positive integer and passes it to a
**              function hailstone. The function would perform a hailstone
**              sequence until the integer ends up being 1. The function returns
**              the total number of times mathematical operations were performed
**              on the sequence until it reaches 1.
*******************************************************************************/

#include <iostream>

using std::cout;

//Function prototype
int hailstone (int);

/*int main()
{
	//Initializing num to a positive integer.
	int  num = 3;

	//Declaring var value to store the total count returned by function
	//hailstone.
	int value;
	
	//Calls function hailstone, passing integer num. Function will return
	//total count value, to be stored in "value".
	value = hailstone(num);

	//cout test to make sure count is correct.
	cout << value;

	return 0;
}
*/

/*******************************************************************************
** Description: The hailstone functions receives a positive integer as its
**              parameter. It first checks if the number is even. If even, we 
**              will divide it by two and use the result as our new value. If
**              odd, we will multiply value by three and then add 1 to get the
**              next value in the sequence. This continues until we reach one.
**              If the initial value is one, the function returns count 0.
**              Otherwise, the count will increment once after a mathematical
**              operation is performed.
*******************************************************************************/


int hailstone (int originalNum)
{
	//Initializing count to 0 to account for 1 as starting value.
	int count = 0;

	//Sets a while loop to check whether current value is 1.
	while (originalNum != 1)
	{
		//Check if value is even.
		if (originalNum % 2 == 0)
		{
			//Divide originalNum by 2 and use as next value
			originalNum /= 2;

			//Increment count after this operation.
			count++;
		}

		//If odd, multiply by 3 then add 1 for next value.
		else
		{
			originalNum = (originalNum * 3) + 1;
			count++;
		}
	}

	//At the end of function, returns the total count of turns it took to
	//reach 1.
	return count;
}
