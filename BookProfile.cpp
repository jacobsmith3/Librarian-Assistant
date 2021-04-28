#include <iostream>
using namespace std;

class BookProfile {
	
	public:
		// book name
		string bookName = "";
		// book ISBN
		int32_t bookISBN;
	private:
		// book reserve status
		string bookStatus = "CLOSE";
		// book availibility
		int32_t bookAvailibility = 0;

	// all the method 
	public:
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
		else cout << "invalid " << endl;
	}

	// if checkout update number of book 
	// change availibility on book
	void changeAvailibility(int x) {
		// current number of book minus the book checked out
		
	}

	// print bookprofile 
	void bookProfile() {
		cout << bookName << endl;
		cout << bookISBN << endl;
		cout << bookStatus << endl;
		cout << bookAvailibility << endl;
	}
		

};