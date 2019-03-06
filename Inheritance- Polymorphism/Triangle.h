/*****************************************
*
* Project : M7 - Inheritance | Polymorphism
* File : Triangle.h
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 07 / 20 / 18

******************************************/


#include <iostream>


using namespace std;

class Triangle : public Shape //Derived class from Base class

{

//Declaring variables

private :

    double side1,side2,side3,s;
    double area,perimeter;

public:

//Parameterized constructor

    Triangle(string des,int side1,int side2,int side3):Shape(des)

    {

        this->side1=side1;
        this->side2=side2;
        this->side3=side3;

    }

    //This method is used to calculate the area of the Triangle

    double calArea()

    {
        s=(side1+side2+side3)/2;

        //calculating the area of the Triangle
        area=sqrt(s*(s-side1)*(s-side2)*(s-side3));
        return area;

    }





};
