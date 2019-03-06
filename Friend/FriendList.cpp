/*****************************************
*
* Project : M4c - Friend's List
* File : FriendList.cpp
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 06 / 20 / 18

******************************************/


#include "FriendList.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

FriendList::FriendList()
{

}

void FriendList::display(string first[], string last[],string phone[])
{

           for (int i = 0; i < sizeof(first); i++)
            {

                cout << i+1 << "  " <<  first[i] << "  " << last[i] << "  " << phone[i] << endl;
            }

            // order by last name but didn't have enough time
//            cout << "Display friends in alphabetical order by last name." << endl;
//
//            for (int i = 0; i  < 5; i++)
//            {
//                string smallest = last[i];
//                int smallestIndex = i;
//                for (int m = i; m < 5; m++)
//                {
//                    if (last[m]< smallest)
//                    {
//                        smallest = last[m];
//                        smallestIndex=m;
//                    }
//                }
//                swap(last[i], last[smallestIndex]);
//            }
//            for (int i =0; i < 5; i++)
//            {
//                cout << last[i] << ' , ';
//            }
//            cout << endl << endl;

            cout << "Press any key to continue..." << endl;
            cin.ignore();
            cin.get();

}

// Accessor Functions

string FriendList::getFirstName()
{

   return firstName;
}

string FriendList::getLastName()
{

   return lastName;
}

string FriendList::getCellPhone()
{
   return cellPhone;

}

// Mutator Functions

void FriendList::setFirstName(string fname)
{
  firstName = fname;
}
void FriendList::setLastName(string lname)
{
   lastName = lname;

}
void FriendList::setCellPhone(string phone)
{
   cellPhone = phone;

}


