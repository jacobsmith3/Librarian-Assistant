#include <iostream>
#include <list>
#include <iterator>
#include "UserProfile.cpp"
#include "BookProfile.cpp"
#include ".cpp"

using namespace std;

class Checkout {
    private:
    list:<BookProfile> Books;  //this will be an array with BookProfile data types inside
    User = UserProfile();
    lookup = Search();
    
    public:
    bool BookLimit()
    {
        if(Books.size()<=3)
        {
            return true;
        }
        else
        {
            cout<<"Cant checkout more than three books"<<endl;
            return false;
        }
    }
    
    void setSearch(Search set)
    {
        lookup = set;
    }
    
    void printBooks()
    {
        list<BookProfile> :: iterator it;
        for(it = Books.begins(); it != Books.end();++it)
        {
            *it.bookProfile();
            cout<<endl;
        }
    }
    void checkout()
    {
        if((User.getBalance()-(2.5*Books.size())) < 0)
        {
            cout<<"Not enought funds";
            return;
        }
        list<BookProfile> :: iterator it;
        for(it = Books.begins(); it != Books.end();++it)
        {
            int temp = *it.getAvailability();
            if(temp == 0)
            {
                cout<<"None in stock"<<endl;
            }
            BookProfile holder = lookup.find(*it.bookISBN);
            holder.setAvailability(temp-1);
            lookup.erase(temp);
            lookup.inserrt(holder.bookISBN, holder);
        }
        cout<<"thank you, enjoy the books!"<<endl;    
       
    }
};
