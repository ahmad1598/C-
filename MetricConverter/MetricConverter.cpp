/*****************************************
*
* Project : M3c - Metric Converter
* File : MetricConverter.cpp
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 06 / 6 / 18

******************************************/

#include "MetricConverter.h"

using namespace std;

//1 kilogram = 2.2046 pounds
const double pounds = 2.2046;

//1 kilometer =  0.621371 miles
const double miles = 0.621371;

//1 liter = 1.05668821 quarts
const double quarts = 1.05668821;

static double KG_lbs(double kilog)
{

    //implement the Convert Kilogram to Lbs
    return (kilog * pounds);
}

//implement the Convert Kilometer to miles
static double KM_miles(double km)
{

    return km * miles;
}

//Convert Liters to quarts
static double Liters_quarts(double liters)
{

    return liters * quarts;
}

//Convert Celsius to Fahrenheit
static double Celsius_fahrenheit(double celsius)
{

    return (1.8 * celsius) + 32;
}
