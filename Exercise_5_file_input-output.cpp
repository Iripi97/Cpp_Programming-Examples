/* Lab 7 Exercise 2
   Percentages of numbers input from a file
   This program exposes the programmer to: cin/cout, while loops, file input-output
   Program: Justin Russo
 */
                                		// Allows for cin/cout to be used
#include <iostream>
                                		// Allows for files to be used
#include <fstream>
#include <iomanip>
using namespace std;
int main(){

                                		// Variables declared now to be used later
    	int number, counter = 0;
    	double posTracker, negTracker, zeroTracker;
    	double percPos = 0, percNeg = 0, percZero = 0;
                                		// Declaring inputFile as a file stream object
    	ifstream inputFile;
                                		// Opening the file "numbers.txt"
    	inputFile.open("Exercise_5_numbers.txt");
                                		// A while loop which allows all elements to be read
    	while (inputFile >> number){
                                		// Counter variable designed to keep track of number of
                                		// total elements in file
        	counter++;
                                		// Reading the values from the file
                                		// Checking if the number is positive
        	if (number > 0)
                                		// Increasing the tracker that tells how
                                		// many numbers are positive
            		posTracker++;
                                		// Checking if the number is negative
        	else if (number < 0)
                                		// Increasing the tracker that tells how
                                		// many numbers are negative
            		negTracker++;
        	else
                                		// Increasing the tracker that tells how
                                		// many numbers are negative
            		zeroTracker++;
    	}
                                		// Calculating the percentage of positive numbers
    	percPos = (posTracker / counter) * 100;
                                		// Calculating the percentage of negative numbers
    	percNeg = (negTracker / counter) * 100;
                                		// Calculating the percentage of numbers equal to zero
    	percZero = (zeroTracker / counter) * 100;
                                		// Outputting the percentage of positive numbers to the screen
    	cout << setprecision(1) << fixed << "There were " <<
    	percPos << "% positive numbers." << endl;
                                		// Outputting the percentage of numbers equal to zero to the screen
    	cout << setprecision(1) << fixed << "There were " <<
    	percZero << "% numbers equal to zero." << endl;
                                		// Outputting the percentage of negative numbers to the screen
    	cout << setprecision(1) << fixed << "There were " <<
    	percNeg << "% negative numbers." << endl;
                                		// Closing the file "numbers.txt"

    	return 0;
}

