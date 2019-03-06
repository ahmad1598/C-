/*****************************************
*
* Project : M5 - Fraction Class
* File : Fraction.h
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 07 / 06 / 18

******************************************/

class Fraction
{
   friend Fraction operator+(const Fraction& f1, const Fraction& f2);
   friend Fraction operator-(const Fraction& f1, const Fraction& f2);
   friend Fraction operator*(const Fraction& f1, const Fraction& f2);
   friend Fraction operator/(const Fraction& f1, const Fraction& f2);

public:
   Fraction();			// Set numerator = 1, denominator = 1.
   Fraction(int n, int d=1);	// constructor with parameters
				//  acts as conversion constructor

   // standard input/output routines
   void Input();		// input a fraction from keyboard.
   void Show() const;		// Display a fraction on screen

   // accessors
   int GetNumerator() const;
   int GetDenominator() const;

   // mutator
   bool SetValue(int n, int d=1); // set the fraction's value through parameters

   double Evaluate() const;	// Return the decimal value of a fraction

private:
   int numerator;		// may be any integer
   int denominator;		// should always be positive
};
