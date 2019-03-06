/*****************************************
*
* Project : M2c - Account class
* File : Account.h
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 05 / 26 / 18

******************************************/


#include <iostream>
#include <string>

using namespace std;

class Account
{
public:
     // create parametrized constructor with one parameter
    Account(double);
    //credit function
    void credit(double amt);
    //debit function
    void debit(double amt);
    //getBalance function
    double getBalance();

private:
    //balance data member
    double balance;
};
