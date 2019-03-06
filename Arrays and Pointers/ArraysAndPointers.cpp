/*****************************************
*
* Project : M4b - Arrays and Pointers
* File : ArraysAndPointers.cpp
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 06 / 17 / 18

******************************************/

#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(){
    int random[100];
    // Declare a pointer variable
    int *pointerArr;
    pointerArr = random;

    //create 1000 random number
    srand(time(0));
    for (int i= 0; i < 100; i++){
        random[i] = rand() % 999 + 2;
    }

    //Print array in 10x10 grid using array notation
    cout << "Array Notation:\n\n";
    int kk =0;
    for (int i = 0; i < 10; i++){

        for (int j = 0; j < 10; j++){

            cout << random[kk] << "\t";
            ++kk;
        } cout << endl;


    }

    //Print array in 10x10 grid using pointer notation
    cout << "Pointer Notation: \n\n";
   int k = 0;
   for (int i = 0; i < 10; ++i)
   {
      for (int j = 0; j < 10; ++j)
      {
         cout<< *(pointerArr + k)<< "\t";
         ++k;
      }   cout<< endl;
   }


}
