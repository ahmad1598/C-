#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"
#include <iostream>


using namespace std;


Circle::Circle(double r)
{
    radius = r;
}

double Circle::calcArea(){
	return 3.14*radius*radius;Triangle::
}

 void Circle::setRadius(double r)
 {
     radius = r;
 }
 double Circle::getRadius( ) const
 {
     return radius;
 }

void Circle::print() const
 {
     cout << "Circle Area:" << setprecision(2) << calcArea();
 }
