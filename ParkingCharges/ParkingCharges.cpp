/*****************************************
*
* Project : M3a - Parking Charges
* File : ParkingCharges.cpp
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 05 / 31 / 18

******************************************/

#include <iostream>
#include "ParkingCharges.h"

using namespace std;
double runningTotal = 0.0;

//Parking Charges function, after getting hours it will calculate the charges for parking
double ParkingCharges(double hours)
{
    double minFee = 2.00;
    double maxFee = 10.00;
    double calcCharge;


    if (hours > 3)
    {
        calcCharge = 6 + ((hours - 3)  * 0.5) ;
    }
    else
        {
            calcCharge = minFee;
        }
    if (calcCharge > 10.00)
    {
        calcCharge = maxFee;
    }

runningTotal = runningTotal + calcCharge;
    return calcCharge;

}

// function for showing us the report and print it
void showReport (double c1)
{
    double c1Charges = ParkingCharges(c1);
    cout << "Hours\tCharge" << endl
         << c1 << "\t$" << c1Charges << "\n" << endl;
    cout << "Running Total: " << "\t$" << runningTotal << "\n" << endl;
}
