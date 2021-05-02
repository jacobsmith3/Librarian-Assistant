#include <iostream>
using namespace std;

class BookProfile {
	
	public:
	// book name
	string bookName = "";
	// book ISBN
	int32_t bookISBN;
	// book quantity
	int32_t bookQuantity = 1;

	private:
		// book reserve status
		string bookStatus = "CLOSE";
		// number of book availible
		int32_t bookAvailibility = 0;

	// set method for book name
	void setBookName(string name) {
		bookName = name;
	}
	// set method for ISBN number
	void setBookISBN(int num) {
		bookISBN = num;
	}
	// set method for #copy of the book
	void setBookAvailibility(int num) {
		bookAvailibility = num;
	}

	//get the availibility of the book
	int getAvailibility() {
		return bookAvailibility;
	}
	string getStatus() {
		return bookStatus;
	}
		
	// change reserve status
	void changeRervStatus() {
		// if no more book available to borrow reserve status to no
		if (bookAvailibility > 0) {
			bookStatus == "OPEN";
		}
		else cout << "invalid" << endl;
	}

	// if checkout called, change number of book 
	// change availibility on book
	void changeAvailibility(int x) {
		// current number of book minus the book checked out
		// if checkout is valid
		bookAvailibility--;
	}

	// print bookprofile 
	void bookProfile() {
		cout << bookName << endl;
		cout << bookISBN << endl;
		cout << bookStatus << endl;
		cout << bookAvailibility << endl;
	}
		

};
