/*******************************************************************************
** Author: Katrine Chow
** Date: November 20, 2017
** Description: This is the implementation code for class T3Reader. This code
**              focuses on reading moves from a text file and then uses class
**              Board's member functions to interpret each move of the game.
*******************************************************************************/

#include "Board.hpp"
#include "T3Reader.hpp"
#include <fstream>
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::ifstream;

/*******************************************************************************
**                        T3Reader::T3Reader()
** Description: Default constructor. Initializes a Board object
*******************************************************************************/

T3Reader::T3Reader()
{
	//Declares a Board object called currentboard
	Board currentboard;
	//Initializes the board with spaces
	T3Reader::myBoard = currentboard;

}

/*******************************************************************************
**                        T3Reader::T3Reader(char xo)
** Description: This function passes in a char parameter to determine which
**              player should go first. 
*******************************************************************************/

T3Reader::T3Reader(char xo)
{
	//Setting up initial player based on user input
	if (xo == 'o')
		T3Reader::currentplayer = 'o';
	else
		T3Reader::currentplayer = 'x';
}

/*******************************************************************************
**                        T3Reader::readGameFile(string fname)
** Description: This function takes in a filename to open and will keep reading
**              the moves in the textfile until the file ends or winning
**              condition/draw is achieved.
*******************************************************************************/

bool T3Reader::readGameFile(string fname)
{
	ifstream inputFile;

	//coordinates should be ints
	int coordinate;
	int rowcoord = 0;
	int colcoord = 0;
	int test = 0;
	bool readstatus = false;

	//Open file for reading
	inputFile.open(fname);

	//Reads from file until EOF reached
	while (inputFile >> coordinate)
	{
		//First number indicates row, second indicates column
		//inputFile >> coordinate;
		rowcoord = coordinate;

		inputFile >> coordinate;
		colcoord = coordinate;

		//Check if move was made in unoccupied space. If yes,
		//Board::makeMove should return true. readGameFile will also
		//return true. If false, returns false and ends game.
		if(T3Reader::myBoard.makeMove(rowcoord, colcoord,
			T3Reader::currentplayer))
		{
			if(currentplayer == 'o')
				currentplayer = 'x';
			else
				currentplayer = 'o';
		}
		else
			return false;
		
	}

	T3Reader::myBoard.printScreen();

	//Closing file after we finish reading from it
	inputFile.close();

}

