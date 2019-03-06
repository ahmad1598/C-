/*****************************************
*
* Project : M6 - Data Entry Functions
* File : DataEntryTest.cpp
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 07 / 13 / 18

******************************************/

#include "C:\\CSIS1600\\MyCPPUtils\\dataChecks.cpp";
using namespace dataChecks;

void validInt()
{
    int i;
    char result = 'Y';

    while(toupper(result) == 'Y')
    {
        system("cls");
        cout << "\nEnter an integer value: ";
        i = getInt();
        cout << "\n" << i << " is a valid integer!" <<endl;
        cout << "\n Again (Y/N): ";
        cin >> result;
    }
}

void validDouble()
{
    double d;
    char result = 'Y';
    while(toupper(result) == 'Y')
    {
        system("cls");
        cout << "\nEnter a valid double:";
        d = getDouble();
        cout << "\n" << d << " is a valid double!" << endl;
        cout << "\nAgain (Y/N): ";
        cin >> result;
    }
}

int main()
{
    int selection;
    do
    {
        system("cls");
        cout << "\n1. Test valid int\n2. Test valid double\n3. Exit\n\n Selection: ";
        cin >> selection;
        switch(selection)
        {
            case 1: validInt(); break;
            case 2: validDouble(); break;
            case 3: break;
            default:
                cout << "invalid choice..." << endl;
                system("pause");
        }

    } while(selection != 3);

    return 0;

}
