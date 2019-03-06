#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"
#include <iostream>

using namespace std;

Shape::Shape()
{
    area = 0;
}

float Shape::calcArea(){
	return area;
}

double Shape::Gettriangle()
{
return triangle;
}

void Shape::Settriangle(double val)
{
triangle = val;
}

double Shape::Getcircle()
{
return circle;
}

void Shape::Setcircle(double val)
{
circle = val;
}

double Shape::Getrectangle()
{
return rectangle;
}


void Shape::Setrectangle(double val)
{
rectangle = val;
}
