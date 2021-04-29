#include <iostream>
using namespace std;

class UserProfile {

	private:
		// User Login
		string username = "";
		string password = "";
		string accountStatus ;
		int32_t accountBalance = 0 ;

	// display user profile
	void viewProfile() {
		cout << username << endl;
		cout << accountStatus << endl;
		cout << accountBalance << endl;
	}

	// change username on database
	void editUser(string newUsername) {
		username = newUsername;
	}
	
	// change password on database
	void editPass(string newPassword) {
		password = newPassword;
	}
	
	// assign account stauts Admin or User
	void setAccountStatus(string status) {
		if (status == "Admin") {
			accountStatus = status;
		}
		else accountStatus = "User";
	}

	// set the account balance 
	void setBalance(int amount) {
		accountBalance = amount;
	}

	// the account balance minus the amount 
	void payBalance(int amount) {
		accountBalance = accountBalance - amount;
	}

	// get method for User Profile class
	string getUser() {
		return username;
	}
	string getStatus() {
		return accountStatus;
	}
	int32_t getBalance() {
		return accountBalance;
	}

};
