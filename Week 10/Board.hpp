/*******************************************************************************
** Author: Katrine Chow
** Date: November 19, 2017
** Description: Class Board sets up a 3x3 tic-tac-toe board and initializes it
**              with empty spaces. It records each player's moves on the board
**              via a member function. 
*******************************************************************************/
//Include guards
#ifndef BOARD_HPP
#define BOARD_HPP

//Constant to ensure board size of 3x3
const int SIZE = 3;

//Enum data type State to hold various state of the game
enum State {X_WON, O_WON, DRAW, UNFINISHED};

class Board
{
	//Member variable
	private:
		char board[SIZE][SIZE];
		int xcount = 0;
		int ocount = 0;

	//Member functions
	public:
		//Default constructor
		Board();
		
		//Records player's moves
		bool makeMove(int xcoord, int ycoord, char xo);
	
		//Returns state of game
		State gameState();
		
		//Prints the board
		void printScreen();
};
#endif
