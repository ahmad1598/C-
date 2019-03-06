
//#include "Fraction.h"
#include <iostream>
#include "Fraction.cpp"

using namespace std;

int main()
{
  Fraction f1(1,2);  //initalizing your object
  Fraction f2(2,3);

  cout<< "This is my numorator!"<< f1.getNum()  << endl;
  cout<< "Adding f1 and f2, my numerator should be 7!" << (f1+f2).getNum() <<endl;
  return 0;
}
