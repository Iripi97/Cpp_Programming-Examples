/* Exercise 3
   Convert to Roman Numeral
   This program exposes the programmer to: cin/cout, case statements
   Created by: Justin Russo
 */
#include <iostream>
                            		// Allows for cin/cout to be used
using namespace std;
int main(){
                            		// Defining variable as int so numbers can be entered
	int number;
                            		// Prompting the user to enter a number between 1 and 5:
	cout << "Please enter a number between 1 and 5: " << endl;
                            		// Allowing for user input:
	cin >> number;
                            		// Starting the switch sequence to modify users input:
	switch(number){
                            		// Outputs statement with Roman Numeral for 1:
    		case 1: cout << "The number you entered in Roman Numerals is: I";
                            		// Prevents all cases from displaying
        	break;
                            		// Outputs statement with Roman Numeral for 2:
    		case 2: cout << "The number you entered in Roman Numerals is: II";
                            		// Prevents all cases from displaying
        	break;
                            		// Outputs statement with Roman Numeral for 3:
    		case 3: cout << "The number you entered in Roman Numerals is: III";
                            		// Prevents all cases from displaying
        	break;
                            		// Outputs statement with Roman Numeral for 4:
    		case 4: cout << "The number you entered in Roman Numerals is: IV";
                            		// Prevents all cases from displaying
        	break;
                            		// Outputs statement with Roman Numeral for 5:
    		case 5: cout << "The number you entered in Roman Numerals is: V";
                            		// Prevents all cases from displaying
        	break;
                            		// Outputs error message if a number not between 1 and 5 is entered:
    		default: cout << "That is an invalid number! It must be between 1 and 5!";
	}
	return 0;
}
