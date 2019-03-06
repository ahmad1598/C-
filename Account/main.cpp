/*****************************************
*
* Project : M2c - Account class
* File : main.cpp
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 05 / 26 / 18

******************************************/

#include <iostream>
#include "Account.cpp"

using namespace std;

int main()
{

    //create first account object
    cout << "Creating First Account with $50 " << endl;
    Account firstAccount(50);

    //create second account object
    cout << "Creating Second Account with 10" << "\n" << endl;
    Account secondAccount(10);

    //showing us the current balance
    cout << "Account First Balance is: " << firstAccount.getBalance() << endl;
    cout << "Account Second Balance is: " << secondAccount.getBalance() << "\n"<< endl;

    //adding $50 to the first account and showing balance after adding
    cout << "adding $50 To First Account. " << endl;
    firstAccount.credit(50);
    cout << "Account First, Balance is: " << firstAccount.getBalance() << "\n" << endl;

    //adding $20.20 to the second account and showing balance after adding
    cout << "adding $20.20 To Second Account. " << endl;
    secondAccount.credit(20.20);
    cout << "Account Second, Balance is: " << secondAccount.getBalance() << "\n" << endl;

    //withdrawal $50 from first account ans showing balance after withdrawn
    firstAccount.debit(50);
    cout << "$50 Withdrawal, First Account Balance is : " << firstAccount.getBalance() << endl;

    //withdrawal $20 from second account ans showing balance after withdrawn
    secondAccount.debit(20);
    cout << "$20 Withdrawal, Second Account Balance is : " << secondAccount.getBalance() << endl;

    //withdrawal another $70 from first account. testing if we are getting error insufficient balance.
    firstAccount.debit(70);
    cout << "$70 Withdrawal, First Account Balance is : " << firstAccount.getBalance() << endl;

    //withdrawal another $20 from second account. testing if we are getting error insufficient balance.
    secondAccount.debit(20);
    cout << "$20 Withdrawal, Second Account Balance is : " << secondAccount.getBalance() << endl;

}
