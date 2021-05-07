#ifndef SIGNUPPAGE_H
#define SIGNUPPAGE_H

#include "UserProfile.cpp"
#include <list>
#include <fstream>

// sign up page class
class SignUpPage
{
private:
    std::list<UserProfile> menu;
    int size;
public:
    // constructor
    SignUpPage();

    // sign up
    void signUp(std::string inputUsername, std::string inputPassword);

    // sign in
    bool signIn(std::string inputUsername, std::string inputPassword);

    // check if the list is empty
    bool isEmpty();

    // destructor
    ~SignUpPage();
};

SignUpPage::SignUpPage()
{
    // constructs the sign up page class and overall sign up loop
    this->size = 0;
    int choice = 0;
    bool loginStatus = false;
    std::string username;
    std::string password;
    do
    {
        std::cout << "Welcome to Tajat Library Assistant" << std::endl;
        std::cout << "1. Sign in" << std::endl;
        std::cout << "2. Sign up" << std::endl;
        std::cout << "3. Exit" << std::endl;

        // check if the choice is within the range
        std::cin >> choice;
        while (choice < 1 && choice > 2)
        {
            std::cout << "Welcome to Tajat Library Assistant" << std::endl;
            std::cout << "1. Sign in" << std::endl;
            std::cout << "2. Sign up" << std::endl;
            std::cout << "3. Exit" << std::endl;
            std::cin >> choice;
        }
        switch (choice)
        {
        case 1: // sign in
            std::cout << "Sign in" << std::endl;
            std::cout << "Enter your username" << std::endl;
            std::cin >> username;
            std::cout << "Enter your password" << std::endl;
            std::cin >> password;
            loginStatus = signIn(username, password);
            if(loginStatus = true)
            {
                std::cout << "Welcome " << username << std::endl;
                return;
            }
            break;
    
        case 2: // sign up
            std::cout << "Sign up" << std::endl;
            std::cout << "Enter your username" << std::endl;
            std::cin >> username;
            std::cout << "Enter your password" << std::endl;
            std::cin >> password;
            signUp(username, password);
            break;
        
        default: // exit
            break;
        }
        
    } while (choice >= 1 && choice <= 2);
}

// sign up 
void SignUpPage::signUp(std::string inputUsername, std::string inputPassword)
{
    UserProfile a;
    a.editUser(inputUsername);
    a.editPass(inputPassword);
    this->menu.push_front(a);
    this->size++;
}

// sign in 
bool SignUpPage::signIn(std::string inputUsername, std::string inputPassword)
{
    for(int i = 0; i < size; i++)
    {
        if(this->menu.front().getUser() == inputUsername && this->menu.front().getPassword() == inputPassword)
        {
            std::cout << "Successful login" << std::endl;
            return true;
        }
        else
        {
            std::cout << "Incorrect login credentials" << std::endl;
            return false;
        }
    }

    
}

// check if the list is empty
bool SignUpPage::isEmpty()
{
    if(this->size == 0)
    {
        return true;
    }
    return false;
}

// destructor
SignUpPage::~SignUpPage()
{
    this->menu.clear();
}

#endif