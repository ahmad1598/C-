/*****************************************
*
* Project : M2d - Person class
* File : PersonTest.cpp
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 05 / 24 / 18

******************************************/



#include <iostream>
#include "Person.cpp"

using namespace std;
int main()
{
    // create Person object and call it p
    // initializing the name to jack and the age to 39
    Person p ("jack" , 39);
    //invoke display function
    p.display();

}
