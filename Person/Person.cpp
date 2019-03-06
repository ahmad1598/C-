/*****************************************
*
* Project : M2d - Person class
* File : Person.cpp
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 05 / 24 / 18

******************************************/


#include "Person.h"

// ties the Person constructor with the Person class
Person :: Person()
{
    cout << "Person created" << endl;
}

// associate person class with this construction as well
// this parametrized constructor uses an initializer list for name and validate age > 0
Person :: Person(string n, int a) : name(n)
{
    if (a > 0)
        age = a;
    else
        age = 1;
}

// ties the display function with the Person class
void Person :: display()
{
    cout << name << " is " << age << " years old!" << endl;
}
