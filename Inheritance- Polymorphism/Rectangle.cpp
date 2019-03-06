#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"
#include <iostream>


using namespace std;


Rectangle::Rectangle(double w, double l){
	width = w;
	length = l;
}

float Rectangle::calcArea(){
	return width*length;
}

void Rectangle::print() const
 {
     cout << "Rectangle Area:" << setprecision(2) << calcArea();
 }
