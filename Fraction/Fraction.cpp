/*****************************************
*
* Project : M5 - Fraction Class
* File : Fraction.cpp
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 07 / 06 / 18

******************************************/
#include <iostream>
#include "Fraction.h"

using namespace std;

//addition
Fraction operator+(const Fraction& f1, const Fraction& f2)
{
   Fraction r;        // declare a Fraction to hold the result

   // load result Fraction with sum of adjusted numerators
   r.numerator = (f1.numerator*f2.denominator)
                  + (f2.numerator*f1.denominator);

   // load result with the common denominator
   r.denominator = f1.denominator * f2.denominator;

   return r;         // return the result Fraction
}

//subtraction
Fraction operator-(const Fraction& f1, const Fraction& f2)
{
   Fraction r;        // declare a Fraction to hold the result


   r.numerator = (f1.numerator*f2.denominator)
                  - (f2.numerator*f1.denominator);

   r.denominator = f1.denominator * f2.denominator;

   return r;         // return the result Fraction
}

//multiplication
Fraction operator*(const Fraction& f1, const Fraction& f2)
{
   Fraction r;        // declare a Fraction to hold the result


   r.numerator = (f1.numerator*f2.numerator);
                 // - (f1.denominator*f2.denominator);


   r.denominator = f1.denominator * f2.denominator;

   return r;         // return the result Fraction
}

//division
Fraction operator/(const Fraction& f1, const Fraction& f2)
{
   Fraction r;        // declare a Fraction to hold the result


   r.numerator = (f1.numerator*f2.denominator);
                 // - (f1.denominator*f2.denominator);


   r.denominator = f1.denominator * f2.numerator;

   return r;         // return the result Fraction
}


Fraction::Fraction()
// Default constructor.  Initializes fraction to 1/1
{
   numerator = 1;
   denominator = 1;
}

Fraction::Fraction(int n, int d)
// initializes fraction to n/d (defaults to 0/1 if invalid data)
{
   if (SetValue(n, d) == false)
	SetValue(1, 1);
}

void Fraction::Input()
// Get a fraction from standard input, in the form "numerator/denominator."
// what kind of error checking should be added?
{
   char divSign;	// used to consume the '/' character during input
   do
   {
      cin >> numerator >> divSign >> denominator;
      if (denominator <= 0)
	cout << "*** Denominator must be positive.  Try again: ";

   } while (denominator <= 0);
}

void Fraction::Show() const
// Display a fraction, in the form "numerator/denominator."
{
   cout << numerator << '/' << denominator;
}

int Fraction::GetNumerator() const
{
   return numerator;
}

int Fraction::GetDenominator() const
{
   return denominator;
}

bool Fraction::SetValue(int n, int d)
// sets fraction to n/d and returns true for success (good data)
// returns false and leaves fraction alone if bad data
{
   if (d <= 0)
	return false;

   numerator = n;
   denominator = d;
   return true;
}


double Fraction::Evaluate() const
// Calculates and returns the decimal value of a fraction
{
   return static_cast<double>(numerator) / denominator;
}
