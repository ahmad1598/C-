/*****************************************
*
* Project : M7 - Inheritance | Polymorphism
* File : Rectangle.h
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 07 / 20 / 18

******************************************/

#include <iostream>


using namespace std;

//Derived class from Shape

class Rectangle :public Shape

{

private:

    double length,width;

public:

//Parameterized constructor

Rectangle(string des,double len,double wid):Shape(des)

{
    this->length=len;
    this->width=wid;

}

//This method is used to calculate the area of the Rectangle

double calArea()
{
    return length*width;
}

};
