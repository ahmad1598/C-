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
#include <cstdlib>
#include "RetailSales.h"

using namespace std;

int ProductNumber;
double QuantitySold;
double Calculate;
double retailPrice[5] = {2.98 , 4.50 , 3.98 , 4.49 , 6.87}; //array for retail prices
double sum[5] = {}; // double array for saving calculate the products
double totalSale[5] = {}; // this array will save total sale for products.
int productQuantity[5] = {};

//function for showing main menu
void menuOptions(){
            cout << "--[Retail Sales - Main Menu ]--\n" << endl;
        cout << "1. Enter products sold \n"
             << "2. Display total retail value \n"
             << "3. Exit\n\n"
             << "Selection: ";
}

int mainMenu( int menuChoice)
{       // loop for the main menu, will be exit if user enter number 3
        while (menuChoice != 3){

            switch(menuChoice){
                case 1:

                   system("cls");
                   cout << "-- [ Sales Transaction ]--\n\n";
                   cout<<"Enter the product number (1-5) (0 to Stop): ";
                   cin>>ProductNumber;
                   cout<<"Enter quantity sold: ";
                   cin>>QuantitySold;
                    // this loop will work until user press 0 to stop
                    while (ProductNumber != 0 )
                    {
                        // switch statement for products and calculate them
                        switch (ProductNumber)
                            {
                               case 1:
                               sum[0] = (retailPrice[0] * QuantitySold);
                               cout<<"\nRetail value =  "<<sum[0]<<endl;
                               totalSale[0] += sum[0];
                               productQuantity[0] += QuantitySold;
                               break;

                               case 2:
                               sum[1]=(retailPrice[1]*QuantitySold);
                               cout<<"\nRetail value =  "<<sum[1]<<endl;
                               totalSale[1] += sum[1];
                               productQuantity[1] += QuantitySold;
                               break;

                               case 3:
                               sum[2] =(retailPrice[2]*QuantitySold);
                               cout<<"\nRetail value =  "<<sum[2]<<endl;
                               productQuantity[2] += QuantitySold;
                               totalSale[2] += sum[2];
                               break;

                               case 4:
                               sum[3] =(retailPrice[3]*QuantitySold);
                               cout<<"\nRetail value =  "<<sum[3]<<endl;
                               productQuantity[3] += QuantitySold;
                               totalSale[3] += sum[3];
                               break;

                               case 5:
                               sum[4] =(retailPrice[4]*QuantitySold);
                               cout<<"\nRetail value =  "<<sum[4]<<endl;
                               productQuantity[4] += QuantitySold;
                               totalSale[4] += sum[4];
                               break;

                               default:
                               cout << "Invalid product code \n" << "Please try again..." << endl;

                               break;


                            }
                        cout<<"\nEnter the product number (1-5) (0 to Stop): ";
                        cin>>ProductNumber;
                        if (ProductNumber == 0){
                            break;
                        }else
                        cout<<"Enter quantity sold: ";
                        cin>>QuantitySold;

                    } break;

                case 2:
                    system("cls");
                    cout << "--[ Sales Summary ]--\n\n";
                    cout << "Product # - " << "Qty Sold - " << "Total Sales" << endl;
                    //for loop for print total Qty and total sale for each product
                    for (int i= 1; i<= 5; i++)
                    {
                        cout << setw(4) << i << setw(13)
                                        << productQuantity[i-1] << setw(13)
                                        << totalSale[i-1] <<endl;
                    }
                        //print out total retail for all products
                        cout << "Total retail value of all products sold: "
                             << totalSale[0] + totalSale[1] +totalSale[2]
                             +totalSale[3] + totalSale[4] << endl;
                                // user can press any key for going back to main menu
                                cout << "Press any key to continue...";
                                cin.ignore();
                                cin.get();
                                break;

        }
        cout << "\n";
        system("cls");
        menuOptions();
        cin >> menuChoice;
    }
    return 0;

}


