/*****************************************
*
* Project : M2d - Person class
* File : GuessTheNumberTest.cpp
* Name : Ahmad Rasoulpour
* Professor : Robert Baird
* Date : 06 / 09 / 18

******************************************/


#include <iostream>
#include <cstdlib>
#include <ctime>
#include "GuessTheNumber.cpp"

using namespace std;

int main(void) {
	srand(time(NULL)); // To not have the same numbers over and over again.

	while(true) { // Main loop.
		// Initialize and allocate.
        int number = randomNumber();
        cout << "I have a number between 1 and 1000." << endl
                 << "Can you guess my number? " << endl
                 << "Please type your first guess.\n" << endl;

        //starting checkNumber function and Get number from user and checking if it is too high or too low
        checkNumber();
        //calling guessNumber function and check if user guessed the number
        guessedNumber();
        //calling luckyUser function and checking if user guessed the number under 10 tries or not
        luckyUser();
        //calling playAgain function and asking user if he/she would like to play again
        playAgain();

		// Check user's input and run again or exit;
		if(answer == 'n' || answer == 'N') {
			cout << "Thank you for playing!";
			break;
		} else {
			cout << "\n\n\n";
			tries = 1;
		}
	}
	// Safely exit.
	cout << "\n\nEnter anything to exit. . . ";
	return 0;
} //end main
