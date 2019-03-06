 /*****************************************
*
* Project : M8 - Contact List | File I/O
* File : main.cpp
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 07 / 28 / 18

******************************************/


#include "BusinessContact.cpp"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <limits>

using namespace std;
int main()
{
    BusinessContact bc[100]; // array to hold the contact details
    fstream file; // File stream
    string fnm, lnm, phone, email, c;
    int i, j, choice, count = 0; // count variable will keep track of number of contact
    file.open("contacts.txt", ios::in); //Open file for reading

    if(!file)
        cout<<"File does not exist... New file will be created"<<endl;

    //Reading content of file till end of file
    if(file)
    {
        while(!file.eof())
        {
        file>>bc[count]; // Reading contacts from txt file
        count++;

        }

    }

    file.close(); //Close file

    cout << count << " contacts read from contacts.txt" << endl;
    do
        {
            cout << '\n' << "Press a key to continue...";
        } while (cin.get() != '\n');

        system("cls");

    do {
        cout << "\n";
        cout << "--[ My Contact List ]--" << endl;
        //displaying the Menu on screen

        cout<<"1. Add a Contact"<<endl;
        cout<<"2. Delete a Contact"<<endl;
        cout<<"3. View a Contact"<<endl;
        cout<<"4. Display the Contact List"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice:";
        cin>>choice; //Input choice

        switch(choice) {
            case 1 : // To add contact in array

                cout<<"Enter the First Name : ";
                cin>>fnm; // taking input from user
                bc[count].setFirstName(fnm); // store it into array
                cout<<"Enter the Last Name : ";
                cin>>lnm;
                bc[count].setLastName(lnm);
                cout<<"Enter the Phone Number : ";
                cin>>phone;
                bc[count].setPhoneNumber(phone);
                cout<<"Enter the E-mail Address : ";
                cin>>email;
                bc[count].setEmailAddress(email);
                cout<<"Enter the Company Name : ";
                cin>>c;
                bc[count].setCompany(c);
                count++;
                break;



            case 2 : //To delete contact from array
                cout<<"Enter the phone-number of contact to be deleted : ";
                cin>>phone;
                for (i=0; i<count; i++)
                if (bc[i].getPhoneNumber() == phone)
                break;
                // If x found in array
                if (i < count) {
                // reduce size of array and move all
                // elements on space ahead
                    count = count - 1;
                    for (int j=i; j<count; j++)
                    bc[j] = bc[j+1];
                }
                else
                    cout<<"Phone number not found in list of contacts"<<endl;
                break;

            case 3 : // To view a particular contact
                cout<<"Enter the phone-number of contact to be viewed : ";
                cin>>phone;
                for (i=0; i<count; i++)

                if (bc[i].getPhoneNumber() == phone) {
                    cout<<left<<setw(15)<<"First Name"<<left<<setw(15)<<"Last Name"
                    <<left<<setw(15)<<"Phone-No"<<left<<setw(15)<<"E-mail Address"
                    <<left<<setw(15)<<"Company"<<endl;

                    cout<<left<<setw(15)<<bc[i].getFirstName()<<left<<setw(15)
                    <<bc[i].getLastName()<<left<<setw(15)<<bc[i].getPhoneNumber()
                    <<left<<setw(15)<<bc[i].getEmailAddress()<<left<<setw(15)<<bc[i].getCompany()<<endl;
                break;
                }

                if (i == count)
                    cout<<"Phone number not found in list of contacts"<<endl;
                break;

            case 4 : // To display the all contacts of array
                cout << "\n";
                cout<<left<<setw(15)<<"First Name"<<left<<setw(15)
                <<"Last Name"<<left<<setw(15)<<"Phone-No"<<left<<setw(15)
                <<"E-mail Address"<<left<<setw(15)<<"Company"<<endl;

                for (i=0; i<count; i++)
                cout<<left<<setw(15)<<bc[i].getFirstName()<<left<<setw(15)
                <<bc[i].getLastName()<<left<<setw(15)<<bc[i].getPhoneNumber()
                <<left<<setw(15)<<bc[i].getEmailAddress()<<left<<setw(15)<<bc[i].getCompany()<<endl;

                break;

        }
    }
                while(choice!=5); // loop will be executed till the option 5 is selected
                //Write content of array into txt file
                file.open("contacts.txt", ios::out); //Open file for writing

                if(!file) {
                    cout<<"File cannot be opened for reading"<<endl;
                    return 0;
                }

                for (i=0; i<count; i++)
                    file<<bc[i]; //Writing data into txt file

                file.close(); // close file
                return 1;

}

