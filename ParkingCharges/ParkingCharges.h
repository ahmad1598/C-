/*****************************************
*
* Project : M3a - Parking Charges
* File : ParkingCharges.h
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 05 / 31 / 18

******************************************/


#include <iostream>
#include <string>

using namespace std;

class ParkingCharges
{
    public:

        double parkingCharges(double hours);
        void showReport (double car);


    private:
        double hours;
};
