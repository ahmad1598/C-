/*****************************************
*
* Project : M7 - Inheritance | Polymorphism
* File : main.cpp
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 07 / 20 / 18

******************************************/


/* The method call Is linked with the method body at compilation time.

* it is called as static binding or compile time polymorphism.

* In Dynamic Binding Jvm knows which method is called by the user at runtime.

* A method call is linked with the method body at the time of running the program.

* So it is also called as dynamic binding or runtime polymorphism.

*/


#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"
#include <iostream>


using namespace std;

int main()

{

    //setting the precision to two decimal places

    std::cout << std::setprecision(2) << std::fixed;
    const int NUM_SHAPES=5;
    int side1,side2,side3;
    double radius,length,width;

    //Creating an instances of Classes

    Triangle t1("Triangle",3,4,5);
    Triangle t2("Triangle",4,5,6);
    Circle c1("Circle",5.5);
    Rectangle r1("Rectangle",3,4);
    Rectangle r2("Rectangle",4,5);

    //Creating an array of ship pointers

    Shape* shapes[NUM_SHAPES] = { &t1, &t2, &c1, &r1, &r2};

    //calling print() method on each object

    for (int i = 0; i < NUM_SHAPES; i++)
    {
    cout<<"Description :"<<shapes[i]->getDescription()<<endl;
    cout<<"Area :"<<shapes[i]->calArea()<<endl;
    cout<<"_____________________________"<<endl;

    }

return 0;

}
