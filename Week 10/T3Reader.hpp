/*******************************************************************************
** Author: Katrine Chow
** Date: November 19, 2017
** Description: Class T3Reader reads moves from a text file and applies them to
**              a tic-tac-toe board created from class Board.
*******************************************************************************/

//Include guards
#ifndef T3READER_HPP
#define T3READER_HPP

#include "Board.hpp"

#include <fstream>
#include <iostream>
#include <string>

using std::string;

class T3Reader
{
	private:
		Board myBoard;
		char currentplayer;

	public:
		//Default constructor
		T3Reader();

		//Determines player X or O gets first move
		T3Reader(char x_or_o);

		//Determines which text file to read from
		bool readGameFile(string filename);

};
#endif
