#ifndef SIGNUPPAGE_HPP
#define SIGNUPPAGE_HPP

#include <unordered_map>
#include <iostream>
#include <string>

template <class T>
class SignUpPage
{
public:
    SignUpPage(std::unordered_map <std::string, T> &uMap);

    void signIn(std::string inputUsername, std::string inputPassword, std::unordered_map <std::string, T> &uMap);

    void signUp(std::string inputUsername, std::string inputPassword, std::unordered_map <std::string, T> &uMap);

    ~SignUpPage();
};

template <class T>
SignUpPage<T>::SignUpPage(std::unordered_map <std::string, T> &uMap)
{
    // constructs the sign up page class
}

template <class T>
void SignUpPage<T>::signIn(std::string inputUsername, std::string inputPassword, std::unordered_map <std::string, T> &uMap)
{
    // sign in
    // take input
    // search for data
    for(auto & itr : uMap)
    {
        if(itr.first == inputUsername && itr.second == inputPassword)
        {
            // set status to active
            // exit
            return std::cout << "Welcome " << inputUsername << std::endl;
        }
        return std::cout << "Incorrect username or password" << std::endl;
    }
    // if present, set status to active
    // if not, error message
}

template <class T>
void SignUpPage<T>::signUp(std::string inputUsername, std::string inputPassword, std::unordered_map <std::string, T> &uMap)
{
    // take input
    
    // insert user profile class to map
}

template <class T>
SignUpPage<T>::~SignUpPage()
{
}

#endif