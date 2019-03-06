/*****************************************
*
* Project : M4c - Friend's List
* File : FriendList.h
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 06 / 20 / 18

******************************************/


#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

class FriendList
{
public:
   FriendList();
   void display(string[],string[],string[]);

   // Accessor Functions
   string getFirstName();
   string getLastName();
   string getCellPhone();


   // Mutator Functions
   void setFirstName(string fn);
   void setLastName(string ln);
   void setCellPhone(string cp);

private:
   string firstName;
   string lastName;
   string cellPhone;

};
