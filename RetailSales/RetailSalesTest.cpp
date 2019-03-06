/*****************************************
*
* Project : M4a - Retail Sales
* File : RetailSalesTest.cpp
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 06 / 13 / 18

******************************************/

#include<iostream>
#include <iomanip>
#include "RetailSales.cpp"

using namespace std;

 int main()
{

    int menuChoice;
    menuOptions();
    cin >> menuChoice;
    mainMenu(menuChoice);


}
