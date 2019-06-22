/*******************************************************************************
** Name: Katrine Chow
** Date: October 9, 2017
** Description: This program asks user for an integer, then prompts a player to
**              guess the number. The program will display messages if the
**              guess is too high or too low. Once player correctly guesses
**              the number, the program will display the number of tries.
*******************************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	//Assuming users will only enter integers.
	int answer, guess;
	
	//Initializing counter to 1 since player must try at least once.
	int count = 1;

	//Ask user to enter a number and store in variable answer.
	cout << "Enter the number for the player to guess." << endl;
	cin >> answer;

	//Ask player to enter their guess and store in variable guess.
	cout << "Enter your guess." << endl;
	cin >> guess;

	//while guess is incorrect, do the following actions.
	while (guess != answer)
	{
		//If guess is higher, print message to terminal and capture
		//player's next guess. Increment counter to keep track of
		//number of tries.
		if (guess > answer)
		{
			count++;
			cout << "Too high - try again." << endl;
			cin >> guess;
		}

		//If guess is lower, print message to terminal and capture
		//player's next guess. Increment count to keep track of number
		//of tries.
		else if (guess < answer)
		{
			count++;
			cout << "Too low - try again." << endl;
			cin >> guess;
		}
	}

	//If guess is correct, there is no need to run through the while loop.
	//Display how many times player guessed until reaching correct answer.
	cout << "You guessed it in " << count << " tries." << endl;
		

	return 0;
	

}
