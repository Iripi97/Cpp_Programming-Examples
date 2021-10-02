/* Exercise 2
   History grading project
   This program exposes the programmer to: cin/cout, integer values, arithmetic operators, if-else statements, constants
   Program by: Justin Russo
 */
#include <iostream>
            		// Allows the use of cout/cin
#include <iomanip>
            		// Allows the use of setw()
using namespace std;

int main(){
            		// Defining variables for each test, stored as integers.
	int testOneScore, testTwoScore, testThreeScore, testScoreFinal;
            		// Prompting the user for first test score:
    	cout << "Enter the score for test #1: ";
            		// Input for test one:
    	cin >> testOneScore;
            		// Prompting the user for second test score:
    	cout << "Enter the score for test #2: ";
            		// Input for test two:
    	cin >> testTwoScore;
            		// Prompting the user for the third test score:
    	cout << "Enter the score for test #3: ";
            		// Input for test three:
    	cin >> testThreeScore;
            		// Outputting the inputted score for test #1:
    	cout << left << setw(17) << "First test :" << testOneScore << endl;
            		// Outputting the inputted score for test #2:
    	cout << setw(17) << "Second test:" << testTwoScore << endl;
    		        // Outputting the inputted score for test #3:
    	cout << setw(17) << "Third test :" << testThreeScore << endl;
            		// If statement determining which test to be dropped:
        if (testOneScore > testTwoScore){
            		// Calculating the final points earned by adding remaining tests together:
        	testScoreFinal = (testOneScore + testThreeScore)/2;
            	cout << "After dropping test #2, the points earned are: ";
            		// Outputting final points earned:
            	cout << testScoreFinal << endl;
        }
            		// What is used if the first test needs to be dropped:
        else {
            		// Calculating the final points earned by adding remaining tests together:
        	testScoreFinal = (testTwoScore + testThreeScore)/2;
            	cout << "After dropping test #1, the points earned are: ";
            		// Outputting final points earned:
            	cout << testScoreFinal << endl;
        }
             		// Defining constants to assign a letter grade to:
        const int A_SCORE = 92,
                  B_SCORE = 82,
                  C_SCORE = 72;
            		// Determining if the score was greater than 92:
        if (testScoreFinal >= A_SCORE)
            		// If it was, outputting the letter grade A.
        	cout << "The letter grade is an A.";
            		// Determining if the score was greater than 82:
        else if (testScoreFinal >= B_SCORE)
            		// If it was, outputting the letter grade B.
            	cout << "The letter grade is a B.";
            		// Determining if the score was greater than 72:
        else if (testScoreFinal >= C_SCORE)
            		// If it was, outputting the letter grade C.
            	cout << "The letter grade is a C.";
            		// Grade is failing if all of the previous if statements fail.
        else
            		// Outputting the letter grade F.
            	cout << "The letter grade is a F.";
    return 0;
}

