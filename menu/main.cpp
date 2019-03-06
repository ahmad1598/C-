/*****************************************
*
* Project : M3B - Menu Demo
* File : main.cpp
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 06 / 2 / 18

******************************************/

#include <iostream>
#include <cstdlib>

using namespace std;

//menu function prototype
void menuOption1();
void menuOption2();
void menuOption3();

int main()
{
    //initialize variables and other setup
    char choice;

    do{
            // clear screen
        system("cls");
        //display menu
        cout << "--[ Main Menu ]--\n\n"
             << "1. Option 1\n"
             << "2. Option 2\n"
             << "3. Option 3\n"
             << "4. Exit\n\n"
             << "Your choice: ";

        //get a menu choice
        cin >> choice;

        //switch choice
        switch(choice)
        {
            case '1': menuOption1(); break;
            case '2': menuOption2(); break;
            case '3': menuOption3(); break;
            case '4': break;
            default:
                cout << choice << "Is not a valid Choice!\n" << endl;
        }
    }while (choice != '4');

    return 0;
} // end main()

//menu function definitions
void menuOption1()
{
    system("cls");
    cout << "--[ Menu Option 1 ]--\n" <<endl;
    //other statements
    system("pause");
}

void menuOption2()
{
    system("cls");
    cout << "--[ Menu Option 2 ]--\n" <<endl;
    //other statements
    system("pause");
}

void menuOption3()
{
    system("cls");
    cout << "--[ Menu Option 3 ]--\n" <<endl;
    //other statements
    system("pause");
}
