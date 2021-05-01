#include <iostream>
#include <string>
#include "UserProfile.cpp"

class signIn
{
    private:
    // profile class
    UserProfile profile;

    public:
    // constructor
    signIn(std::string username, std::string password)
    {
        if(this->profile.getUser() == username && this->profile.getPass() == password)
        {
            this->profile.setAccountStatus("SIGNEDIN");
        }
        else
        {
            std::cout << "Incorrect username or password" << std::endl;
            this->profile.setAccountStatus("SIGNEDOUT");
        }
    }

    
    ~signIn();
};