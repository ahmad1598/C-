#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"
#include <iostream>

using namespace std;


Triangle::Triangle(double b, double h){
	base = b;
	height = h;
}

double Triangle:: calcArea(){
	return (0.5 * base * height);
}

void Triangle::print() const
 {
     cout << "Triangle Area:" << setprecision(2) << calcArea();
 }
