#ifndef SEARCH_H
#define SEARCH_H

#include <iostream>
#include <list>
#include <iterator>
#include <string>
#include <stdlib.h>
#include <fstream>
//#include "UserProfile.h"
//#include "BookProfile.h"
using namespace std;

// not using graphics, so we are implementing a searching function and data structure 
// to hold the book database

class Search //container class for the BookProfiles and also searching functions
{
private:


public:

	list <BookProfile*> Books; // making public so other classes can access
	list <string> History; // will implement later

	void initBookList(ifstream& fin)
	{
		/* creates our database of books. Reading in from txt file. Then parsing the title and
		 ISBN numbers.*/

		string title;
		string bookISBN;
		char delim = ',', newline = '\n';


		while (getline(fin, title, delim))
		{
			BookProfile* Book = new BookProfile;
			getline(fin, bookISBN, newline);
			Book->bookName = title;
			Book->bookISBN = stoi(bookISBN);

			Books.push_front(Book);
		}

		//for (auto it = Books.begin(); it != Books.end(); it++)
		//{
		//	Book = *it;
		//	int myISBN = Book.bookISBN;
		//	for (auto it2 = Books.begin(); it2 != Books.end(); it2++)
		//	{
		//		BookProfile MyBook = new BookProfile;
		//		if (myISBN == MyBook.bookISBN && it != it2) // removing copies and adjusting amount for first found same book
		//		{
		//			Book.bookQuantity++;
		//			Books.erase(it2);
		//		}
		//	}
		//}
	}

	void SearchInput()
	{
		int isbn;
		cout << "Welcome to the Library Assistant Search\n";
		cout << "Enter Book ISBN number for search: \n";
		cin >> isbn;
		getBook(isbn);

	}

	BookProfile* getBook(int isbn) //search list for BookProfile.isbn == input
	{
		BookProfile* Book = new BookProfile;
		for (auto it = Books.begin(); it != Books.end(); it++)
		{
			Book = *it;
			if (Book->bookISBN == isbn)
			{
				cout << "Found Book!\n";
				return Book;
			}

		}
		cout << "couldn't find book\n";
	}

	void searchHistory();
	void printSearchHistory();
};

#endif