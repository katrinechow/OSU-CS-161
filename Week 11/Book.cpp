/*******************************************************************************
** Author: Katrine CHow
** Date: November 26, 2017
** Description: This is the implementation file for Book.hpp. It defines the
**              constructors and member methods of class Book.
*******************************************************************************/

#include "Book.hpp"
#include <vector> //Needed for vectors
#include <string>

using std::string;

/*******************************************************************************
**           Book::Book(std::string idc, std::string t, std::string a)
** Description: This constructor initializes a Book object with its idCode,
**              Title, and Author.
*******************************************************************************/

Book::Book(string idc, string t, string a)
{
	idCode = idc;
	title = t;
	author = a;

	//Initializes dateCheckedOut to -1 since check out date could be day 0
	dateCheckedOut = -1;
	
	//Assuming that new books are put onto shelves immediately after
	//being added to the catalog
	location = ON_SHELF;

	//Initializing checkedOutBy and requestedBy pointers to NULL
	checkedOutBy = NULL;
	requestedBy = NULL;
}


/*******************************************************************************
**                            Book::getCheckOutLength()
** Description: This method gets and returns the value of CHECK_OUT_LENGTH.
*******************************************************************************/

int Book::getCheckOutLength()
{
	return CHECK_OUT_LENGTH;
}


/*******************************************************************************
**                              Book::getIdCode()
** Description: This method gets the Book object's ID code and returns it.
*******************************************************************************/

string Book::getIdCode()
{
	return idCode;
}


/*******************************************************************************
**                              Book::getTitle()
** Description: This method gets the Book object's title and returns it.
*******************************************************************************/

string Book::getTitle()
{
	return title;
}


/*******************************************************************************
**                              Book::getAuthor()
** Description: This method gets the Book object's author and returns it.
*******************************************************************************/

string Book::getAuthor()
{
	return author;
}


/*******************************************************************************
**                              Book:getLocation()
** Description: this method gets the Book object's current location.
*******************************************************************************/

Locale Book::getLocation()
{
	return location;
}


/*******************************************************************************
**                              Book::setLocation(Locale)
** Description: This method sets the current location of the Book object.
*******************************************************************************/

void Book::setLocation(Locale lcode)
{
	location = lcode;
}

/*******************************************************************************
**                              Book::getCheckedOutBy()
** Description: This method returns the pointer to the Patron object who has
**              checked out the book.
*******************************************************************************/

Patron* Book::getCheckedOutBy()
{
	return checkedOutBy;
}


/*******************************************************************************
**                         Book::setCheckedOutBy(Patron*)
** Description: This method sets the pointer to the Patron who has checked out
**              the book.
*******************************************************************************/

void Book::setCheckedOutBy(Patron* cptr)
{
	checkedOutBy = cptr;
}


/*******************************************************************************
**                         Book::getRequestedBy()
** Description: This method returns which Patron requested the Book object.
*******************************************************************************/

Patron* Book::getRequestedBy()
{
	return requestedBy;
}


/*******************************************************************************
**                         Book::setRequestedBy(Patron*)
** Description: This method sets the Patron who is requesting this Book object.
*******************************************************************************/

void Book::setRequestedBy(Patron* rptr)
{
	requestedBy = rptr;
}


/*******************************************************************************
**                         Book::getDateCheckedOut()
** Description: This method gets the date the Book object was checked out.
*******************************************************************************/

int Book::getDateCheckedOut()
{
	return dateCheckedOut;
}


/*******************************************************************************
**                         Book::setDateCheckedOut(int)
** Description: This method sets the date the Book object is checked out.
*******************************************************************************/

void Book::setDateCheckedOut(int date)
{
	dateCheckedOut = date;
} 
