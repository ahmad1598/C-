/*****************************************
*
* Project : M4d - Grades
* File : grades.cpp
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 06 / 23 / 18

******************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main ( )
{

cout << "\n Student" << setw(9) << "Grade 1"<< setw(9) << "Grade 2"<< setw(9)
    <<"Grade 3"<< setw(9)<< "Grade 4"<< setw(9)<< "Average"<< setw(9)<<"Wt Ave"<<endl;

cout << " -------" << setw(9) << "-------"<< setw(9) << "-------"<< setw(9)
    <<"-------"<< setw(9)<< "-------"<< setw(9)<< "-------"<< setw(9)<<"-------"<<endl;

int array1 [5] [7] = { {1, 85 , 88 , 90 , 81}, {2, 73 , 68 , 75 , 77},{3, 94 , 89 , 82 , 91},
                        {4, 88 , 79 , 81 , 84},{5, 71 , 65 , 78 , 73}};

    //doing rows
    for (int row = 0; row < 5; row++)
    {
        //doing columns 0 - 4
        for (int column= 0;column<= 4; column++)
        {
            cout << setw(5) << array1[row][column] << setw(4)<< "" ;
        }
        // calculate and filling the average column
        for (int column = 5; column <= 5; column++)
        {
            cout << fixed << setprecision(1);
            cout << setw(7) << double ((array1[row][1]) + (array1[row][2]) + (array1[row][3]) + (array1[row][4]))  / 4 <<setw(4)<< "";
            array1[row][column] = double(double(array1[row][1]) + double(array1[row][2]) + double(array1[row][3]) + double(array1[row][4]))  / 4 ;
        }

        //calculate and filling the weighted average
        for (int column = 6; column <= 6; column++)
        {
           cout << setw(5) << (double(array1[row][1] * 0.2)  + double(array1[row][2] * .3) + double(array1[row][3] * .3)+ double(array1[row][4] * .2))<<setw(4)<< "";
            array1[row][column] = (double(array1[row][1] * 0.2)  + double(array1[row][2] * .3) + double(array1[row][3] * .3)+ double(array1[row][4] * .2));
        }
        cout << endl;
    }

    cout << "Sort by weighted average (Y/N)? ";
    char input;
    cin >> input;
    if (input == 'y' || input =='Y')
    {

    // sort the grades by weighted average.
// if will sort the weighted average but not the entire array. will sort only weighted average part.
// I know that the sort algorithm is correct but I was working on moving all the other element with the weighted average
// column.
        for(int i = 0; i < 10; i++)
        {
            for (int row = 1; row < 5; row++)
                {
                        if (array1[row][6] < array1[row - 1][6])
                        {
                            int temp = array1[row][6];
                            array1[row][6]= array1[row-1][6];
                            array1[row - 1][6] = temp;

                        }
                }
        }
    }

    cout << "\n";

cout << "\n Student" << setw(9) << "Grade 1"<< setw(9) << "Grade 2"<< setw(9)
    <<"Grade 3"<< setw(9)<< "Grade 4"<< setw(9)<< "Average"<< setw(9)<<"Wt Ave"<<endl;

cout << " -------" << setw(9) << "-------"<< setw(9) << "-------"<< setw(9)
    <<"-------"<< setw(9)<< "-------"<< setw(9)<< "-------"<< setw(9)<<"-------"<<endl;


    for (int row = 0; row < 5; row++)
    {
        for (int column= 0;column< 7; column++)
        {
            cout << setw(5) << array1[row][column] << setw(4)<< "" ;
            cout << fixed << setprecision(1);
        }

        cout << endl;
    }

return 0;
}

