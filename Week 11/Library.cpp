/*******************************************************************************
** Author: Katrine Chow
** Date: November 26, 2017
** Description: This is the implementation file for class Library. It defines
**              the data members and member functions that builds a database of
**              books and Patrons and perform circulation activities.
*******************************************************************************/

#include <string>
#include <vector>
#include <cmath>
#include "Library.hpp"
#include "Book.hpp"
#include "Patron.hpp"

using std::string;
using std::vector;
using std::abs;

/*******************************************************************************
**                              Library::Library()
** Description: This is the default constructor of class Library. It initializes
**              currentDate to zero.
*******************************************************************************/

Library::Library()
{
	currentDate = 0;
}



/*******************************************************************************
**                         Library::addBook(Book *bptr)
** Description: This method adds a book to the holdings database.
*******************************************************************************/

void Library::addBook(Book *bptr)
{
        holdings.push_back(bptr);
}



/*******************************************************************************
**                        Library::addPatron(Patron *pptr)
** Description: This method adds a Patron to the members database.
*******************************************************************************/

void Library::addPatron(Patron *pptr)
{
         members.push_back(pptr);
}



/*******************************************************************************
**                 Library::checkOutBook(string pID, string bID)
** Description: This function checks Book status and records loans and requests
**              by Patrons.
*******************************************************************************/

string Library::checkOutBook(string pID, string bID)
{
	Book* bptr =  NULL;

	Patron* pptr = NULL;
	Patron* requestedby = NULL;
	
	//Setting up a NULL Patron as placeholder for when nobody is reserving
      	//or checked out the book
        Patron nullpat("NULL", "NULL");
        Patron* nullperson = &nullpat;

	pptr = getPatron(pID);
	bptr = getBook(bID);

		if (bptr == NULL)
			return "book not found";
	
		if (pptr == NULL)
			return "patron not found";
	

	if (bptr->getLocation() == CHECKED_OUT)
		 return "book already checked out";
	
	if (bptr->getLocation() == ON_HOLD_SHELF)
	{
		//Find out who requested the Book, if any
		requestedby = bptr->getRequestedBy();

		if (requestedby->getIdNum() == pID)
		{
			//If Patron already on reserve list, update
			//requestedBy to null Patron then perform check out
			//tasks.
			bptr->setCheckedOutBy(pptr);
			bptr->setDateCheckedOut(currentDate);
			bptr->setLocation(CHECKED_OUT);
			pptr->addBook(bptr);
			bptr->setRequestedBy(nullperson);
			return "check out successful";
		}
		else
			return "book on hold by other patron";
	}

	
	//If Location is ON_SHELF. Perform check out tasks
	else
	{
		bptr->setCheckedOutBy(pptr);
		bptr->setDateCheckedOut(currentDate);
		bptr->setLocation(CHECKED_OUT);
		pptr->addBook(bptr);
		return "check out successful";
	}

}



/*******************************************************************************
**                      Library::returnBook(string bID)
** Description: This method checks and updates loan status to record return.
*******************************************************************************/

string Library::returnBook(string bID)
{
//	Setting up a NULL Patron as placeholder for when nobody is reserving
//	or checked out the book
	Patron nullpatron("NULL", "NULL");
	Patron* nperson = &nullpatron;

	Patron* pptr = NULL;
	Book* bptr = NULL;
	
	//Point to the specified Book object
	bptr = getBook(bID);
	
	//Check if Book is currently ON_SHELF or ON_HOLD_SHELF
	if (bptr->getLocation() == ON_SHELF || bptr->getLocation()
		== ON_HOLD_SHELF)
		return "book already in library";

	else //Assuming Location is CHECKED_OUT
	{
		//Find who checked this book out, then remove from his/her
		//checked out queue
		pptr = bptr->getCheckedOutBy();
		pptr->removeBook(bptr);

		//If nobody else requested the book
		if (bptr->getRequestedBy()== NULL)
		{
			//Set book status to ON_SHELF, and set checked out by
			//to NULL
			bptr->setLocation(ON_SHELF);
			bptr->setCheckedOutBy(nperson);
		}

		//If someone else requested the book
		else
		{
			//Find who else reserved it
			Patron* reservedby = bptr->getRequestedBy();

			//Set requestedBy to the next Patron, place book
			//on hold, set checkedOutBy to NULL
			bptr->setRequestedBy(reservedby);
			bptr->setLocation(ON_HOLD_SHELF);
			bptr->setCheckedOutBy(nperson);
		}
		
		return "return successful";
	}
}



/*******************************************************************************
**                   Library::requestBook(string pID, string bID)
** Description: This method checks and updates book status to record requests.
*******************************************************************************/

string Library::requestBook(string pID, string bID)
{
	Book* bptr = NULL;
	Patron* pptr = NULL;

	bptr = getBook(bID);
	if (bptr == NULL)
		return "book not found";

	pptr = getPatron(pID);
	if (pptr == NULL)
		return "patron not found";

	if (bptr->getLocation() == ON_HOLD_SHELF)
		return "book already on hold";


	//Request book if it is ON_SHELF or CHECKED_OUT but not requested yet	
	else if(bptr->getRequestedBy() == NULL)
	{
		bptr->setRequestedBy(pptr);
		
		if (bptr->getLocation() == ON_SHELF)
			bptr->setLocation(ON_HOLD_SHELF);
			
		return "request successful";
	}
	
	//If CHECKED_OUT and also requested, return book already on hold.
	else
		return "book already on hold";
}



/*******************************************************************************
**                  Library::payFine(string pID, double payment)
** Description: This method accepts a parameter for fine to be paid and updates
**              Patron's record when fine is paid.
*******************************************************************************/

string Library::payFine(string pID, double payment)
{

	Patron* pptr = NULL;
	//Get Patron info tied to the pID
	pptr = getPatron(pID);

	if (pptr == NULL)		
		return "patron not found";
	
	//Since this is a payment, amount passed to amendFine should be
	//negative
	pptr->amendFine(-payment); 
	return "payment successful";
}



/*******************************************************************************
**                  Library::incrementCurrentDate()
** Description: This method tracks days loaned and fines 10 cent per book per
**              late day. Patrons may hold book for 21 days. On 22nd day,
**              patron will be charged the overdue fine.
*******************************************************************************/

void Library::incrementCurrentDate()
{
	int dayOverdue = 0;
	int holdingsSize = 0;
	double fineDue = 0.0;

	Patron* overduePatron = NULL;
	//holdingsSize to store the size/amount of books currently available
	holdingsSize = holdings.size();
	
	//Increment day count here to check for overdue books for the day
	currentDate ++;

	for (int i = 0; i < holdingsSize; i++)
	{

		if(holdings.at(i)->getLocation() == CHECKED_OUT)
		{	
			//Below formula gets days overdue for that particular
			//book
			dayOverdue = currentDate - 
				holdings.at(i)->getDateCheckedOut();

			//Fine starts on day 22
			if(dayOverdue > 21)
			{
				//A variable to store daily fine to make it
				//easier to update this value in future.
				fineDue = 0.1;
			
				//Amend fine here	
				overduePatron = holdings.at(i)->
					getCheckedOutBy();
				overduePatron->amendFine(fineDue);
			}
		}
	}
				

}



/*******************************************************************************
**                        Library::getPatron(string pID)
** Description: This method returns pointer to Patron identified by the pID.
*******************************************************************************/

Patron* Library::getPatron(string pID)
{
	//Set to -1 as first actual Patron will be at position 0
	//Accounting for scenario where there is no Patron
	int patronindex = -1;
	
	Patron* pptr = NULL;

	for (int j = 0; j < members.size(); j++)
	{
		if (members.at(j)->getIdNum() == pID)
		{
			patronindex = j;
			pptr = members.at(j);
			return pptr;
		}
	}

}



/*******************************************************************************
**                       Library::getBook(string bID)
** Description: This method returns pointer to Book identified by bID.
*******************************************************************************/

Book* Library::getBook(string bID)
{
	//Set to -1 as first actual Book will be at position 0
	//Accounting for scenario where there is no Book
	int bookindex = -1;

        Book* bptr = NULL;
	
        for (int i = 0; i < holdings.size(); i++)
        {
		if (holdings.at(i)->getIdCode() == bID)
		{
			bookindex = i;
			bptr = holdings.at(i);
			return bptr;
         	}
     
	}
}
