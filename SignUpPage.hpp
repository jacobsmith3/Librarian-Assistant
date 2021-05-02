#ifndef SIGNUPPAGE_HPP
#define SIGNUPPAGE_HPP

#include <unordered_map>
#include <iostream>
#include <string>

// sign up page class
template <class T>
class SignUpPage
{
public:
    // constructor
    SignUpPage(std::unordered_map <std::string, T> &uMap);

    // sign in function
    void signIn(std::string inputUsername, std::string inputPassword, std::unordered_map <std::string, T> &uMap);

    // sign up function
    void signUp(std::string inputUsername, std::string inputPassword, std::unordered_map <std::string, T> &uMap);

    // destructor
    ~SignUpPage();
};

template <class T>
SignUpPage<T>::SignUpPage(std::unordered_map <std::string, T> &uMap)
{
    // constructs the sign up page class
    // display Sign up page
    int choice;
    do
    {
        std::cout << "Welcome to Tajat Library Assistant" << std::endl;
        std::cout << "1. Sign in" << std::endl;
        std::cout << "2. Sign up" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cin << choice;
        while (choice < 1 && choice > 3)
        {
            std::cout << "Welcome to Tajat Library Assistant" << std::endl;
            std::cout << "1. Sign in" << std::endl;
            std::cout << "2. Sign up" << std::endl;
            std::cout << "3. Exit" << std::endl;
            std::cin << choice;
        }
        switch (choice)
        {
        case 1: // sign in
            std::string username, password;
            std::cout << "Sign in" << std::endl;
            std::cout << "Enter your username and password" << std::endl;
            signIn(username, password, uMap);
        break;
    
        case 2: // sign up
            std::string username, password;
            std::cout << "Sign up" << std::endl;
            std::cout << "Enter your username and password" << std::endl;
            signUp(username, password, uMap);
        break;
    default: // exit
        break;
    }
        
    } while (choice >=1 && choice <= 3);
    
    
     
}

// signIn function
template <class T>
void SignUpPage<T>::signIn(std::string inputUsername, std::string inputPassword, std::unordered_map <std::string, T> &uMap)
{
    for(auto & itr : uMap)
    {
        // find the matching username and password
        if(itr.first == inputUsername && itr.second == inputPassword)
        {
            // set status to active
            return std::cout << "Welcome " << inputUsername << std::endl;
        }
        return std::cout << "Incorrect username or password" << std::endl;
    }
    // to do:
    // if present, set status to active
    // if not, error message
}

// signUp function
template <class T>
void SignUpPage<T>::signUp(std::string inputUsername, std::string inputPassword, std::unordered_map <std::string, T> &uMap)
{
    // instantiate UserProfile class here
    // userProfile.setUser(inputUsername);
    // userProfile.setPass(inputPasword);
    // insert user profile class to map
    // uMap.insert(std::pair<inputUsername, userProfile>(inputUsername, userProfile));
}

// destructor
template <class T>
SignUpPage<T>::~SignUpPage()
{
}

#endif