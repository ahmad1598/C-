/*****************************************
*
* Project : M2d - Person class
* File : Person.h
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 05 / 24 / 18

******************************************/


#include <iostream>
#include<string>

using namespace std;

class Person
{
public:
    //create default constructor without any parameter
  Person();
    // create parametrized constructor. with two parameter (string for name ,  int for age)
  Person(string, int);
  string getName();
  int getAge();
  void setName(string newName);
  void setAge(int newAge);
  void display();

private:
  string name;
  int age;
};
