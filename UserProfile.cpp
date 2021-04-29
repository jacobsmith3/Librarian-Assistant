#include <iostream>
using namespace std;

class UserProfile {

	private:
		// User Login
		string username = "";
		string password = "";
		string accountStatus = "Locked";
		int32_t accountBalance = 0 ;

	void viewProfile() {
		cout << username << endl;
		cout << accountStatus << endl;
		cout << accountBalance << endl;
	}
	// change password on database
	void editPass(string newPassword) {
		password = newPassword;
	}
	// change username on database
	void editUser(string newUsername) {
		username = newUsername;
	}
	// the account balance minus the amount 
	void payBalance(int amount) {
		accountBalance = accountBalance - amount;
	}
	// set the account balance 
	void setBalance(int amount) {
		accountBalance = amount;
	}

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
