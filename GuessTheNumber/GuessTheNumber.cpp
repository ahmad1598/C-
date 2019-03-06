/*****************************************
*
* Project : M2d - Person class
* File : GuessTheNumber.cpp
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 06 / 09 / 18

******************************************/


#include <iostream>
#include <cstdlib>
#include <ctime>
#include "GuessTheNumber.h"
using namespace std;

int number;
int guess; // User guess is stored in here.
int tries = 1; // Number of tries is stored here.
char answer; // User answer to question is stored here.


int randomNumber(){
    number = rand() % 999 + 2; // System number is stored in here.
    return number;
}

//this function getting number from user and checking if it is too high or too low of the random number
void checkNumber(){
    while(true) { // Get user number loop.
			// Get number.
			cout << "Enter a number between 1 and 1000 (" << "It is your " <<tries << " tries ): ";
			cin >> guess;

			// Check number.
			if(guess > number && guess <= 1000) {
				cout << "Too high! Try again.\n";
			} else if(guess < number && guess > 0 ) {
				cout << "Too low! Try again.\n";
			} else {
			    cout << "Incorrect number. Please enter between 1 and 1000" << endl;

			}
            // increment user's tries
			tries++;
		}
}
// this function check if user guessed the number
void guessedNumber(){
    if (guess == number){
			// Or, user won.
			cout<<"\nExcellent!! " << std::endl;
			cout<<"You guessed the number! in  " << tries << " tries!\n";
		}
}

//this function checking if user guessed the number under 10 tries or not
void luckyUser(){

     // If the player makes 10 or fewer guesses, print "Either you know the secret or you got lucky!"
    if ((guess == number) && (tries <= 10 && guess == number))
        {
            cout << "Either you know the secret or you got lucky!\n" << endl;

        } else{
        //If the player makes more than 10 guesses, print "You should be able to do better!"
            cout << "You should be able to do better!\n" << endl;

        }
}

// this function asking user if he/she would like to play again
void playAgain(){
    while(true) { // Loop to ask user is he/she would like to play again.
			// Get user response.
			cout << "Would you like to play again (Y/N)? ";
			cin >> answer;
			cin.ignore();

			// Check if proper response.
			if(answer == 'n' || answer == 'N' || answer == 'y' || answer == 'Y') {
				break;
			} else {
				cout << "Please enter \'Y\' or \'N\'...\n";
			}
		}


}
