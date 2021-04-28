#include <iostream>
using namespace std;

class UserProfile {


	// User Login
	string username = "";
	string password = "";
	string accountStatus = "Locked";
	int32_t accountBalance;

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