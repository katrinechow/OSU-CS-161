/*******************************************************************************
** Author: Katrine Chow
** Date: October 17, 2017
** Description: This program includes function smallSort which takes three int
**              parameters from main by reference. The function sorts the three
**              values into ascending order. 
*******************************************************************************/

#include <iostream>

using std::cout;
using std::endl;

//Function prototype
void smallSort(int &num1, int &num2, int &num3);

/*
int main()
{
	//Declares the three int values
	int a = 4;
	int b = 5;
	int c = 3;

	//Calls smallSort
	smallSort(a, b, c);

	//Displays sorted values
	cout << a << ", " << b << ", " << c << endl;

	return 0;
}
*/

/*******************************************************************************
** Description: Function smallSort receives three int parameters from main by
**              reference. The three values are then compared to each other
**              and sorted in ascending order. For example, if a is larger than
**              b, the two references swap so that a is now referencing the
**              larger value.
*******************************************************************************/

void smallSort(int &num1, int &num2, int &num3)
{
	//Declaring a temp int variable to assist with sort.
	int tempNum;

	//Compare num1 and num3 and swap if num1 is greater than num3.
	if (num1 > num3)
	{
		tempNum = num1;
		num1 = num3;
		num3 = tempNum;
	}

	//If num1 is greater than num2, swap them.
	if (num1 > num2)
	{
		tempNum = num1;
		num1 = num2;
		num2 = tempNum;
	}

	//If num2 is greater than num3, we swap the two.
	if (num2 > num3)
	{
		tempNum = num2;
		num2 = num3;
		num3 = tempNum;
	}
}
