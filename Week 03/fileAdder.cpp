/*******************************************************************************
** Author: Katrine Chow
** Date: October 9, 2017
** Description: This program asks user which file to read, then reads the
**              numbers stored in that file. The program then adds up all the
**              numbers, and prints the sum to a file called sum.txt.
*******************************************************************************/

//linking libraries needed. Note fstream is added to use ifstream and ofstream.
//string added as we need to store user-input filename into a string variable.

#include <iostream>
#include <fstream>
#include <string>

//Declaring all the names we will be using for this program.
using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;

int main()
{
	//inputFile holds the user entered filename.
	//outputFile holds the output filename sum.txt.
	
	ifstream inputFile;
	ofstream outputFile;

	//string variable to hold user-entered filename.
	string fileName;

	//value holds the value currently being read. double is used in case
	//user enters decimals.
	//sum holds the total thus far as the program adds all the numbers.
	double value;
	double sum = 0.0;

	//Prompts user to enter desired filename.
	//stores input into string var. fileName.
	cout << "Please enter your filename." << endl;
	cin >> fileName;

	//opens user-entered file.
	inputFile.open(fileName);

	//opens target file "sum.txt" in current directory.
	outputFile.open("./sum.txt");

	//Checks if entered filename exists or can be opened.
	if (inputFile)
	{

		//If filename check passes, loop through values and keep a 
		//running sum of all the values until EOF is reached.
		while (inputFile >> value)
		{
			sum += value;
		}

		//After all numbers are added, outputs result to outputFile
		//which is sum.txt.
		outputFile << sum << endl;

		//After successfully outputting to sum.txt, print message to
		//terminal to notify user.
		cout << "result written to sum.txt" << endl;

		//Closes both input and output files.
		inputFile.close();
		outputFile.close();
	}

	//If filename check fails, print error message to terminal.
	else
	{
		cout << "could not access file" << endl;
	}
	
	return 0;
}
