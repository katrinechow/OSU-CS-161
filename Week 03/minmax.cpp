/*******************************************************************************
** Author: Katrine Chow
** Date: October 8, 2017
** Description: This program gets user input on how many integers they would
**              like to input. It will then wait for user to enter specified 
**              number of inputs and then display the maximum and minimum 
**              values within those numbers.
*******************************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	//Declaring count variables to store user desired number of input, and
	//to use in for loop
	//Declaring min, max to store minimum and  maximum value.
	//temp stores incoming input temporarily for comparison.
	
	int count, i;
	int min, max, temp;

	//Ask user how many integers to enter and store value in counter 
	//variable count. Then asks user to input desired amount of values.
	
	cout << "How many integers would you like to enter?" << endl;
	cin >> count;

	cout << "Please enter " << count << " integers." << endl;

	//Setting up for loop to capture user input up until desired amount of
	//integers.
	
	for (i = 1; i <= count; i++)
	{

		//Stores user input into temp for comparisons.
		cin >> temp;
		
		//This accounts for use case where user only wants to input 1
		//integer. Both max and min should show the same value.This also
		//initializes both min and max to the first input instead of 0.
		//I find that this helps when user enters all negative numbers.

		if (i == 1)
		{
			min = temp;
			max = temp;
		}

		//During loop 2, compare second input to the first.
		//If second input is less than current min value, assign it to
		//min. Otherwise, assign it to max.

		if (temp < min)
		{
			min = temp;
		}

		//I find that I have to be explicit here with an else if or the
		//code doesn't work.

		else if (temp > max)
		{
			max = temp;
		}
	}

	//Displays min and max values to terminal.
	
	cout << "min: " << min << endl;
	cout << "max: " << max << endl;

	return 0;
}

