/*****************************************
*
* Project : M3a - Parking Charges
* File : main.cpp
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 05 / 31 / 18

******************************************/

#include <iostream>
#include "ParkingCharges.cpp"

using namespace std;

double hours;
int main()
{

    double hours;
    cout << "Enter your hours or 0 to quit" << endl;
    cin >> hours;

    while (hours != 0)
    {
        showReport(hours);

        cout << "Enter your hours or 0 to quit" << endl;
        cin >> hours;
    }
}
