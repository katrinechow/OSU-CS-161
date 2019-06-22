/*******************************************************************************
** Author: Katrine Chow
** Date: November 26, 2017
** Description: This is the implementation file for class Patron, including the
**              definition of its data members and member functions.
*******************************************************************************/

#include "Patron.hpp"
#include "Book.hpp"
#include <string>
#include <vector>

using std::string;
using std::vector;

/*******************************************************************************
**                     Patron::Patron(string idn, string n)
** Description: This constructor initializes Patron object with a unique id and
**              not unique name.
*******************************************************************************/

Patron::Patron(string idn, string n)
{
	idNum = idn;
	name = n;
	
	//Assuming every Patron starts off with $0 in fines
	fineAmount = 0.0;
}


/*******************************************************************************
**                     Patron::getIdNum()
** Description: This method gets the unique ID number assigned to the Patron.
*******************************************************************************/

string Patron::getIdNum()
{
	return idNum;
}


/*******************************************************************************
**                     Patron::getName()
** Description: This method gets the name of the Patron. Cannot assume it is
**              unique.
*******************************************************************************/

string Patron::getName()
{
	return name;
}


/*******************************************************************************
**                     Patron::getCheckedOutBooks()
** Description: This method returns a vector list of books currently checked out
**              by the Patron.
*******************************************************************************/

vector<Book*> Patron::getCheckedOutBooks()
{
	return checkedOutBooks;
}


/*******************************************************************************
**                     Patron::addBook(Book* b)
** Description: This method adds a book to the list of books checked out by
**              Patron.
*******************************************************************************/

void Patron::addBook(Book* b)
{
	checkedOutBooks.push_back(b);
}


/*******************************************************************************
**                     Patron::removeBook(Book* b)
** Description: This method removes a book from the list of books checked out by
**              Patron.
*******************************************************************************/

void Patron::removeBook(Book* b)
{
	int index = 0;
	int vectorsize = checkedOutBooks.size();

	//Setting bcode variable to keep code tidy below
	string bcode = b->getIdCode();

	//Loops through vector to find location of book we want to remove
	for (int i = 0; i < vectorsize; i++)
	{
		if (checkedOutBooks.at(i)->getIdCode() == bcode)
			index = i;
	}
	
	//vector::erase method requires begin position marker
	checkedOutBooks.erase(checkedOutBooks.begin() + index);
	
}


/*******************************************************************************
**                     Patron::getFineAmount()
** Description: This method returns the current fine amount accrued by the
**              Patron.
*******************************************************************************/

double Patron::getFineAmount()
{
	return fineAmount;
}


/*******************************************************************************
**                     Patron::amendFine(double amount)
** Description: This method adds fine parameter to the current fine amount.
*******************************************************************************/

void Patron::amendFine(double amount)
{
		fineAmount += amount;
}


