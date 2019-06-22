/************************************************************************************************************************
** Author: Katrine Chow
** Date: 9.24.2017
** Description: This program calculates how much a garden center needs to spend on a flower garden display. The program asks users to input cost of soil, seeds, and fence. It then outputs the total cost to the screen.
************************************************************************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	double soil, seeds, fence, total;

	//Gets the cost of soil.
	cout << "What does the soil cost?" << endl;
	cin >> soil;

	//Gets the cost of flower seeds.
	cout << "What do the flower seeds cost?" << endl;
	cin >> seeds;

	//Gets the cost of the fence.
	cout << "What does the fence cost?" << endl;
	cin >> fence;

	//Calculate the total by adding value of soil, seeds, and fence.
	total = soil + seeds + fence;

	//Display the total cost.
	cout << "The total cost is " << total << endl;

	return 0;
}
