/*****************************************
*
* Project : M7 - Inheritance | Polymorphism
* File : Shape.h
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 07 / 20 / 18

******************************************/


#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.14159

using namespace std;

class Shape

{

private :

    string description;

public:

//Parameterized constructor

    Shape(string des)
    {

        this->description=des;
    }

    string getDescription()
    {
        return description;
    }

    void setDescription(string des)
    {
        this->description=des;
    }

    virtual double calArea()=0;

};
