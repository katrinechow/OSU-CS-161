/*******************************************************************************
** Author: Katrine Chow
** Date: November 20, 2017
** Description: Implementation code for class Board which initializes a 3x3
**              board with empty spaces and records each player's moves. Member
**              methods also checks for game state and prints the current board.
**              gameState checks for winnng condition.
*******************************************************************************/

#include "Board.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//Setting constant to control board size (size can be changed in future)
const int MAX_NUM = 3;

/*******************************************************************************
**                                  Board::Board()
** Description: Default constructor. Initializes board with empty spaces.
*******************************************************************************/

Board::Board()
{
	for (int i = 0; i < MAX_NUM; i++ )
		for (int j =0; j < MAX_NUM; j++)
			board[i][j] = ' ';
}


/*******************************************************************************
**                 Board::makeMove(int rowx, int coly, char xo)
** Description:  This function checks to see if a space on the board already
**               contains a player's move. If not, will record player's move.
**               If space is already occupied, function returns false.
*******************************************************************************/

bool Board::makeMove(int rowx, int coly, char currentplayer)
{

	//If space unoccupied/' ', input current player's symbol
	if (board[rowx][coly] == ' ')
	{
		board[rowx][coly] = currentplayer;

		//Updates to the next player
		if(currentplayer == 'o')
			currentplayer = 'x';
		else
			currentplayer = 'o';
		
		//return true if operation was successful
		return true;
	}

	else
		return false;

}


/*******************************************************************************
**                          Board::gameState()
** Description: This function checks for winning condition and determines if
**              it should announce winner, draw, or unfinished status.
*******************************************************************************/

State Board::gameState()
{

int xcount = 0; //Counts occurrences of 'x'
int ocount = 0; //Counts occurrences of 'o'
int spacecount = 9; //Counts how many spaces are still unchecked
char enumcode; //Stores game status

	//This checks for 3 in a row
	for (int r = 0; r < MAX_NUM; r++)
 	{
		for (int c = 0; c < MAX_NUM; c++)
		{
			if (board[r][c] == 'x')
			{
				//If 'x' exists, add to xcount and
				//decrease checked spacecount by 1
				xcount = xcount + 1;
				spacecount = spacecount - 1;
			}

			else if (board[r][c] == 'o')
			{
				//If 'o' exists, add to ocount and
				//decrease checked spacecount by 1
				ocount = ocount + 1;
				spacecount = spacecount - 1;
			}
		}

		//If we have 3 'x', record X as winner
		//enumcode will trigger enum status return in later section.
		if (xcount == MAX_NUM)
			enumcode = 'x';
		
		else if (ocount == MAX_NUM)
			enumcode = 'o';

	}



	//Resets counters for next set of loops.
	xcount = 0;
	ocount = 0;
	spacecount = 9;

	//This checks for 3 in a column. Similar to section above.
	for (int c = 0; c < MAX_NUM; c++)
	{
		for (int r = 0; r < MAX_NUM; r++)
		{
			if (board[c][r] == 'x')
			{
				xcount = xcount + 1;
				spacecount = spacecount - 1;
			}

			else if (board[c][r] == 'o')
			{
				ocount = ocount + 1;
				spacecount = spacecount -1;
			}

		}
	

		if (xcount == MAX_NUM)
			enumcode = 'x';

		else if (ocount == MAX_NUM)
			enumcode = 'o';
	}



	
	//Resets counters for next set of tests
	xcount = 0;
	ocount = 0;
	spacecount = 9;	

	//This checks for 3 in diagonal
	//Haven't figured out how to incorporate the for loop so I am using
	//manual subscript numbers for now.
	//Sonam: any suggestion on how to pull this off with a loop?
	
		if (board[0][2] == 'x' || board[0][0] == 'x')
		{
			xcount = xcount + 1;
			spacecount = spacecount - 1;
		}
		else if (board[0][2] == 'o' || board[0][0] == 'o')
		{
			ocount = ocount + 1;
			spacecount = spacecount - 1;
		}	
		if (board[1][1] == 'x')
		{
			xcount = xcount + 1;
			spacecount = spacecount - 1;
		}		
		else if (board[1][1] == 'o')
		{
			ocount = ocount + 1;
			spacecount = spacecount - 1;
		}	
		if (board[2][0] == 'x' || board[2][2] == 'x')
		{
			xcount = xcount + 1;
			spacecount = spacecount - 1;
		}
		else if (board[2][0] == 'o' || board[2][2] == 'o')
		{
			ocount = ocount + 1;
			spacecount = spacecount - 1;
		}

	//Check winning condition after diagonal tests
	//Note that if there are still spaces left unchecked, that means the
	//game is either won/lost or unfinished.
	if (spacecount > 0)
	{
		if (xcount == MAX_NUM)
			enumcode = 'x';
	
		else if (ocount == MAX_NUM)
			enumcode = 'o';
		else
			enumcode = 'u';
	}
	//If no winners after all spaces checked, then it is a draw.
	if (spacecount == 0)
		enumcode = 'd';

	cout << "enumcode is: " << enumcode << endl;


	//Determine enum returns for each status
	if (enumcode == 'x')
		return X_WON;

	else if (enumcode == 'o')
		return O_WON;

	else if (enumcode == 'd')
		return DRAW;
	
	else
		return UNFINISHED;

}



/*******************************************************************************
**                               printScreen()
** Description: This is a helper function that prints the current board to 
**              screen.
*******************************************************************************/

void Board::printScreen()
{
	for (int row = 0; row < MAX_NUM; row++)
	{
		for (int col = 0; col < MAX_NUM; col++)
		{
			cout << board[row][col] << " ";
		}
		cout << endl;
	}
}
