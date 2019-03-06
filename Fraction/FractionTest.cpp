/*****************************************
*
* Project : M5 - Fraction Class
* File : FractionTest.cpp
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 07 / 06 / 18

******************************************/

#include <iostream>
#include "Fraction.cpp"

using namespace std;

int main()
{
	// Try all three possible fraction constructors
	// and the input/output routines.

	// These declarations use the default constructor
	Fraction f1, f2;

	// These declarations use the constructor with parameters
	Fraction f3(3,4), f4(6);

// Attempts at calls with automatic type conversions (int -> Fraction)
        cout << "Attempting arithmetic calls\n";
        f2 = f1 + 5;
        cout << "Second arithmetic call\n";
        f4 = 2 + f3;

	// Use the objects

	cout << "\n The fraction f1 is ";
	f1.Show();

	cout << "\n The fraction f2 is ";
	f2.Show();

	cout << "\n The fraction f3 is ";
	f3.Show();

	cout << "\n The fraction f4 is ";
	f4.Show();

	cout << "\n\nNow enter first fraction: ";
	f1.Input();
	cout << "\nYou entered ";
	f1.Show();

	cout << "\n\nNow enter second fraction: ";
	f2.Input();
	cout << "\nYou entered ";
	f2.Show();

	cout << "\n\n* The sum of the first and second fraction is ";
	Fraction sumResult;
	sumResult = f1 + f2;
	sumResult.Show();
	cout << '\n';

    cout << "\n* The subtraction of the first and second fraction is ";
	Fraction subResult;
	subResult = f1 - f2;
	subResult.Show();
	cout << '\n';

    cout << "\n* The multiplication of the first and second fraction is ";
	Fraction multResult;
	multResult = f1 * f2;
	multResult.Show();
	cout << '\n';

    cout << "\n* The division of the first and second fraction is ";
	Fraction divResult;
	divResult = f1 / f2;
	divResult.Show();
	cout << '\n';



	// Finally, find the floating-point value of f1 and f2

	cout << "\n- The value of fraction 1 is " << f1.Evaluate() << '\n';
	cout << "\n- The value of fraction 2 is " << f2.Evaluate() << '\n';

	cout << "\nGoodbye!\n";

        return 0;
}
