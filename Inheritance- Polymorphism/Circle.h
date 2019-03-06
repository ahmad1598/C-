/*****************************************
*
* Project : M7 - Inheritance | Polymorphism
* File : Circle.h
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 07 / 20 / 18

******************************************/


#include <iostream>

using namespace std;


class Circle :public Shape //Derived class from Shape

{

private :

    double radius;
    double area;

public:

    //Parameterized constructor
    Circle(string des,double radius):Shape(des)
    {

        this->radius=radius;

    }

//This method is used to calculate the area of the Circle
    double calArea()
    {
    //calculating the area of the circle
        area=PI*radius*radius;
        return area;
    }

};
