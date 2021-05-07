#include "UserProfile.cpp"
#include "BookProfile.cpp"
#include "Search.cpp"
#include "Checkout.cpp"
#include "SignUpPage.h"

int main()
{
    SignUpPage signUp;
    Search S;
    ifstream infile;
    infile.open("Books.txt", ios::in);
    S.initBookList(infile);
    return 0;
}