 /*****************************************
*
* Project : M8 - Contact List | File I/O
* File : BusinessContact.h
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 07 / 28 / 18

******************************************/




#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

//Class definition

class BusinessContact {

                //private data members

                string firstName;
                string lastName;
                string phoneNumber;
                string emailAddress;
                string company;

public:
                //member functions prototype

                //getter functions

                string getFirstName();
                string getLastName();
                string getPhoneNumber();
                string getEmailAddress();
                string getCompany();


                //setter functions

                void setFirstName(string fnm);
                void setLastName(string lnm);
                void setPhoneNumber(string phone);
                void setEmailAddress(string email);
                void setCompany(string c);

                //Overloaded friend functions

                friend ostream &operator<<( ostream &output, const BusinessContact &tbc );
                friend istream &operator>>( istream &input, BusinessContact &tbc );

};
