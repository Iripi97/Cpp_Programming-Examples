/* Exercise 8
   Fun with Strings
   This program exposes the programmer to: for loops, arrays, strings
   Program by:   Justin Russo
 */
 #include <iostream>            		// Allows cin/cout to be used
 #include <string>              		// Allows strings to be used as variables
using namespace std;

int inputNames(string [], int );    		// Function prototype for function that allows users to input names
void displayNames(string [], int);   		// Function prototype for function that displays user input

int main(){
    	int newsize;     			// Size variable for actual used array
    	int oldsize = 10;    			// Size variable for string array
    	string names[oldsize];     		// Declaring the string array
    	newsize = inputNames(names, oldsize);   // Calling input function
    	displayNames(names, newsize);   	// Calling display function
}
//****************************************************************************
// Function that allows user to enter eight names into the array and returns *
// the number of elements used back to the main function.                    *
//****************************************************************************
int inputNames(string names[], int oldsize){
    	int index;  				// Variable for the index
    	string input;   			// String variable to allow user input
    	for (index = 1; index < 9; index++){
						// Prompting user for input
        	cout << "Enter in name " << index << " : "; 
        	cin >> input;   		// Allowing for input
        	names[index] = input;   	// Assigning the word to the corresponding element
    	}
    	return index;   			// Returning the number of elements used
}
//****************************************************************************
// Function that allows the user to see the eight names they entered into the*
// array.                                                                    *
//****************************************************************************
void displayNames(string names[], int newsize){
    	int index;  				// Variable for the index
    	for (index = 1; index < 9; index++){
        	cout << "Name " << index << " is " << names[index] << endl;
        					// Displaying the names to the user
    	}
}
