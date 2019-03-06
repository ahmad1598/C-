/*****************************************
*
* Project : M2c - Account class
* File : Account.cpp
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 05 / 26 / 18

******************************************/

#include "Account.h"

//constructor/ receives an initial balance and uses it to initialize the balance data member.
//validate the initial balance, if not greater than zero, will set balance to 0 and display error
Account :: Account(double b)
{
    if (b <= 0.0)
    {
        balance = 0.0;
        cout << "invalid balance!";
    }
    else
        balance = b;
}

//adds an amount to the current balance
void Account :: credit(double amount)
{
    balance += amount;
}

//withdraws an amount from the current balance
void Account :: debit(double amount)
{
    if (balance - amount < 0.0 )
        cout << "insufficient balance. ";
    else
        balance -= amount;
}

//return the current balance
double Account :: getBalance()
{
    return balance;
}


