/*****************************************
*
* Project : M3c - Metric Converter
* File : MetricConverterTest.cpp
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 06 / 6 / 18

******************************************/

#include "MetricConverter.cpp"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <math.h>
using namespace std;

void convert_KG_lbs();
void convert_KM_miles();
void convert_Liters_quarts();
void convert_Celsius_fahrenheit();

int main()
{
    //initialize variables and other setup
    char choice;

    do{

        //display menu
        cout << "--[ Main Menu ]--\n\n"
             << "1. KG to lbs\n"
             << "2. KM to Miles\n"
             << "3. Liters to Quarts\n"
             << "4. Celsius to Fahrenheit\n"
             << "5. Exit\n\n"
             << "Your choice: ";

        //get a menu choice
        cin >> choice;

        //switch choice
        switch(choice)
        {
            case '1': convert_KG_lbs(); break;
            case '2': convert_KM_miles(); break;
            case '3': convert_Liters_quarts(); break;
            case '4': convert_Celsius_fahrenheit(); break;
            case '5': break;
            default:
                cout << choice << " Is not a valid Choice!\n" << endl;
        }

    }while (choice != '5');

    return 0;
} // end main()


//menu function definitions
void convert_KG_lbs()
{
    //get input from the user

    double kg = 0.0;
    cout << "Please Enter the Kilogram value: " <<  endl;
    cin >> kg;
    //showing number with two decimal places
    cout << fixed << setprecision(2);
    cout << "\n";
    cout << "The lbs is: " << KG_lbs(kg)<< "\n" << endl;

}

void convert_KM_miles()
{
    //get input from the userMetricConverter::
    double Km = 0.0;
    cout << "Please Enter the Kilometer value: " << endl;
    cin >> Km;
    //showing number with two decimal places
    cout << fixed << setprecision(2);
    cout << "\n";
    cout << "The Miles is: " << KM_miles(Km)<< "\n" << endl;
}

void convert_Liters_quarts()
{
    //get input from the user
    double Liters;
    cout << "Please Enter the Liter value: " << endl;
    cin >> Liters;
    //showing number with two decimal places
    cout << fixed << setprecision(2);
    cout << "\n";
    cout << "The Quarts is: " << Liters_quarts(Liters) << "\n" << endl;

}

void convert_Celsius_fahrenheit()
{
    //get input from the user
    double Celsius;
    cout << "Please Enter the Celsius value: " << endl;
    cin >> Celsius;
    cout << "\n";
    cout << "The Fahrenheit is:" << Celsius_fahrenheit(Celsius) << "\n" << endl;
}
