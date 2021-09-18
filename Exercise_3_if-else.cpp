/* Exercise 3 Alternate Implementation
   Convert to Roman Numeral
   This program exposes the programmer to: cin/cout, if-else statements
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
                            		// Starting the if statements to modify users input:
                            		// Checking if the number was 5
	if (number == 5)		// Outputs statement with Roman Numeral for 5:
    		cout << "The number you entered in Roman Numerals is: V";
                           		// Checking if the number was 4
    	else if (number == 4)		// Outputs statement with Roman Numeral for 4:
            	cout << "The number you entered in Roman Numerals is: IV";
                            		// Checking if the number was 3
        else if (number == 3)		// Outputs statement with Roman Numeral for 3:
                cout << "The number you entered in Roman Numerals is: III";
                            		// Checking if the number was 2
        else if (number == 2)		// Outputs statement with Roman Numeral for 2:
                cout << "The number you entered in Roman Numerals is: II";
                            		// Checking if the number was 1
        else if (number == 1)		// Outputs statement with Roman Numeral for 1:	
                cout << "The number you entered in Roman Numerals is: I";
                            		// Happens when a number between 1 and 5 is not used
	else				// Outputs error message:
    	cout << "Invalid number! It must be between 1 and 5!";

return 0;
}
