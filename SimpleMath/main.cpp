/*****************************************
* Project : M1d - Simple Math
*

******************************************/


#include <iostream>

using namespace std;

int main()
{
    //create five integer variable
    int number1 , number2 , number3 , number4 , number5;
    int sum , product , smallest , largest;

    //prompt user to enter integer numbers
    cout << "Please Enter First Numbers: ";
    cin >> number1;
    cout << "Please Enter Second Numbers: ";
    cin >> number2;
    cout << "Please Enter Third Numbers: ";
    cin >> number3;
    cout << "Please Enter Fourth Numbers: ";
    cin >> number4;
    cout << "Please Enter Fifth Numbers: ";
    cin >> number5;

    //calculate and print sum of the numbers
    sum  = number1 + number2 + number3 + number4 + number5;
    cout << "Sum is: " << sum << "\n";

    //calculate and print average of the numbers
    cout << "Average is: " << sum / 5 << "\n";

    //calculate and print product of the numbers
    product = number1 * number2 * number3 * number4 * number5;
    cout << "The product is: " << product << "\n";

    //finding smallest of the numbers
    smallest = number1;
    if (smallest > number2)
    {
        smallest = number2;
    }
    if (smallest > number3)
    {
        smallest = number3;
    }
    if (smallest > number4)
    {
        smallest = number4;
    }
    if (smallest > number5)
    {
        smallest = number5;
    }
    cout << "The Smallest Number is: " << smallest << "\n";

    //finding largest of the numbers
    largest = number1;
    if (largest < number2)
    {
        largest = number2;
    }
    if (largest < number3)
    {
        largest = number3;
    }
    if (largest < number4)
    {
        largest = number4;
    }
    if (largest < number5)
    {
        largest = number5;
    }
    cout << "The Largest Number is: " << largest << "\n";

    //calculate the quotient of the first number divided by the second
    cout << "The Quotient of the First number Divided by the Second is: " << number1 / number2 << "\n";

    //calculate the reminder of the fourth number divided by the fifth
    cout << "The Reminder of the Fourth number Divided by the Fifth is: " << number4 % number5 << "\n";

    return 0;
}
