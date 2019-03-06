/*
 * CSIS1600
 * dataChecks.cpp
 * personal namespace dataChecks
 */

 /*****************************************
*
* Project : M6 - Data Entry Functions
* File : dataChecks.cpp
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 07 / 13 / 18

******************************************/



#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

namespace dataChecks
{
  /*
   * parameter str - the string to parse into an int
   * returns true if str can be parsed into an int value
   *   false otherwise
   */
   bool isvalidInt(string str)
   {
     int start = 0;
     int i; //index of one character in the string
     bool valid = true;  // assume a valid string
     bool sign = false;  // assume no sign

      // if the length of the string is 0
     //set valid to false
     //return valid
     if (int (str.length()) == 0) valid = false;



		 // if the first character is '-' or '+'
		 		//set sign to true and start to 1
     if (str.at(0) == '-' || str.at(0) == '+')
     {
         sign = true;
         start = 1;
     }

     // if there is not at least one character after the sign
     		//set valid to false
     		//return valid

     if (sign && int(str.length() == 1)) valid = false;


 		// check if each character in the string is a digit - isdigit(str.at(i))
			 // if a character is not a digit, set valid to false

		// return valid;
     i = start;
     while (valid && i < int(str.length()))
     {
         if (!isdigit(str.at(i))) valid = false; // found a non-digit character
         i++; // move to next character.
     }
     return valid;

  }

  /*
   * returns the int value entered from the keyboard
   * throws an exception of the value entered
   *   cannot be converted to an int
   *   allows the user to enter another value
   */
  int getInt()
  {
    bool notanint = true;
    string svalue;

    while (notanint)
    {
      try
      {
        // get a string from the keyboard
        // if it is not a valid int throw an excepetion

        cin >> svalue; // accept a string input
        if (!isvalidInt(svalue)) throw svalue;
      }
      catch (string e)
      {
        // print an error messag
        // send control back to the while statement
        cout << "Invalid integer [ " << svalue << " ] \nPlease reenter: ";
        continue; // send the control to the while statement
      }
      notanint = false;
    }
    return atoi(svalue.c_str());  // convert to an integer
  }


  /*
   * parameter str - the string to parse into a double
   * returns true if str can be parsed into a double value
   *   false otherwise
   */
  bool isValidDouble(string str)
  {

    // return false if an empty string
    if(str.length() == 0) return false;



     if (str.at(0) == '-' || str.at(0) == '+')   // check for a leading sign
     {
         if(!str.at(1))  // start checking for digits after the sign
            return false;
     }
     int counter= 0;
     for (int n = 0; n < str.length(); n++)
     {
      // now check the string, which you know
      // has at least one non-sign character
      // allow for only one decimal point (.)
         if (str.at(n) == '.')
           {
               counter++;
           }
           else if(!isdigit(str.at(n)))
           {
             return false;
           }
     }
     if (counter > 1) return false;
    // return false if there is not at least one character after the sign


    return true;
    //return true;
  }//end isValidDouble()


  /*
   * returns the double value entered from the keyboard
   * throws an exception of the value entered
   *   cannot be converted to a double
   *   allows the user to enter another value
   */
  double getDouble()
  {
    bool notadouble = true;
    string svalue;

    LOOP: while (notadouble)
    {
      try
      {
           // get a string from the keyboard
        // if it is not a valid double throw an exception
          cin >> svalue;
          if (!isValidDouble(svalue)) throw svalue;
      }
      catch (string e)
      {
          cout << "Invalid Double [ " << svalue << " ] \nPlease reenter: ";   // print an error messag
          goto LOOP; // send control back to the while statement
      }
      notadouble = false;
    }
    return atof(svalue.c_str());  // convert to a double
  }//end getAReal()

}  // end of dataChecks namespace

