/*******************************************************************************
** Author: Katrine Chow
** Date: November 15, 2017
** Description: This function sorts three int variables in ascending order.
*******************************************************************************/

//Function smallSort2 takes in 3 int pointers
void smallSort2(int* aPtr, int* bPtr, int* cPtr)
{
	//Initializes a temp int variable to value of a.
	int temp = *aPtr;

	//Compare a and b, swap if a > b
	if(*aPtr > *bPtr)
	{
		temp = *bPtr;
		*bPtr = *aPtr;
		*aPtr = temp;
	}
	//Compare a and c, swap if a > c
	if (*aPtr > *cPtr)
	{
		temp = *cPtr;
		*cPtr = *aPtr;
		*aPtr = temp;
	}
	//Compare b and c, swap if b > c
	if (*bPtr > *cPtr)
	{
		temp = *bPtr;
		*bPtr = *cPtr;
		*cPtr = temp;
	}
}
