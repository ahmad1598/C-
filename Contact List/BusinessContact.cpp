 /*****************************************
*
* Project : M8 - Contact List | File I/O
* File : BusinessContact.cpp
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 07 / 28 / 18

******************************************/



#include <iostream>
#include "BusinessContact.h"
using namespace std;


// Definition of BusinessContact class memeber functions

string BusinessContact::getFirstName() {

                return(firstName);
}

string BusinessContact::getLastName() {

                return(lastName);
}

string BusinessContact::getPhoneNumber() {

                return(phoneNumber);
}

string BusinessContact::getEmailAddress() {

                return(emailAddress);
}

string BusinessContact::getCompany() {

                return(company);
}

void BusinessContact::setFirstName(string fnm) {

                firstName = fnm;
}

void BusinessContact::setLastName(string lnm) {

                lastName = lnm;
}

void BusinessContact::setPhoneNumber(string phone) {

                phoneNumber = phone;
}

void BusinessContact::setEmailAddress(string email) {

                emailAddress = email;
}

void BusinessContact::setCompany(string c) {

                company = c;
}

// Overloaded inseration operator function

//Will be used writing data into txt file

ostream &operator<<( ostream &output, const BusinessContact &tbc ) {

                output << tbc.firstName<<" "<<tbc.lastName<<" "<<tbc.phoneNumber<<" "<<tbc.emailAddress<<"  "<<tbc.company<<endl;

                return output;

}

// Overloaded extraction operator function

//Will be used raeding data from txt file

istream &operator>>( istream &input, BusinessContact &tbc ) {

                input >>tbc.firstName>>tbc.lastName>>tbc.phoneNumber>>tbc.emailAddress>>tbc.company;

                return input;

}
