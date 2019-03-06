/*****************************************
*
* Project : M4c - Friend's List
* File : main.cpp
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 06 / 20 / 18

******************************************/


#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "FriendList.cpp"
using namespace std;

int main()
{

   int selection;
   int count = 0;
   FriendList f1;
   string fname[18], lname[18], cphone[18];
   do {
       system("cls");
       cout << "Welcome to the Friend's Manager!\n" << endl
           << "1) Add a Friend " << endl
           << "2) Remove a Friend " << endl
           << "3) Display all Friends" << endl
           << "4) Exit\n" << endl
           << "Enter selection: ";
       cin >> selection;

       // process the selection
       switch (selection)
       {
           case 1:
            {
               system("cls");
               cout << "--[ Add a Friend ]--: \n" << endl;
               cout << "First Name: ";
               cin >> fname[count];
               cout << "Last Name: ";
               cin >> lname[count];
               cout << "Cell Phone: ";
               cin >> cphone[count];
               count++;
               cout << "Press any key to continue..." << endl;
               cin.ignore();
               cin.get();
               break;
           }
           case 2:
            {
               system("cls");
               cout << "--[ Remove A Friend ]-- \n\n";
               //showing friends list before delete any of them
               for (int i = 0; i < 10; i++)
                {
                    cout << i+1 << "  " <<  fname[i] << "  " << lname[i] << "  " << cphone[i] << endl;
                }
                //asking user for enter line number to remove
                cout << "Enter  line number of friend to remove: ";
                int line;
                cin >> line;
                line--;
                for (int index = line; index< 5; index++)
                {
                    fname[index]= fname[index + 1];
                    lname[index] = lname [index + 1];
                    cphone[index]=cphone[index + 1];

                }

                //calling display function to show friends update list
                f1.display(fname, lname, cphone);
                break;
            }


           case 3:
            {
                system("cls");
                cout << "--[ These are my Friends ]--\n";
                //calling display function and Display all friends
                f1.display(fname, lname, cphone);
                break;
            }


           case 4:
               break;
           default:
               cout << "Invalid Choice! " << endl;
               cout << "Press any key to continue..." << endl;
               cin.ignore();
               cin.get();

       }



   } while (selection != 4);

   system("PAUSE");
   return 0;
}
