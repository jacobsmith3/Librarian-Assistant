#include "UserProfile.cpp"
#include "BookProfile.cpp"
#include "Search.cpp"
#include "Checkout.cpp"

int main()
{
    Search S;
    ifstream infile;
    infile.open("Books.txt", ios::in);
    S.initBookList(infile);
    return 0;
}