/* Exercise 6
   Determine if your heart beat rate is within
   your target heart rate.
   This program exposes the programmer to: cin/cout, while loops, nested if-else statements, functions
   Program by: Justin Russo
 */
                            		// Allows cin/cout to be used
#include <iostream>
using namespace std;
bool calc_heart_rate(float, float);
int main(){
                            		// Declaring variables to be used later
	float userAge, heartBPM;
	bool inTargetRange;

                            		// Starting the loop to continuously prompt
                            		// user for input
	while (userAge){
                            		// Prompting user for their age
    		cout << "Enter your age: ";
                            		// Allowing for user input
    		cin >> userAge;
    		if (userAge >= 0){
                            		// Prompting the user for their heart beats per
                            		// minute
    			cout << "Enter your heart beats per minute: ";
                            		// Allowing for user input
    			cin >> heartBPM;
                            		// Calling for the function to calculate the
                            		// heart rate and test it
 			inTargetRange = calc_heart_rate(userAge, heartBPM);
    			if (inTargetRange == false)
                            		// Displaying message saying the user is not
                            		// withing target heart rate range
        			cout << "You are not within your target heart rate range." << endl;
    			else if (inTargetRange == true)
                            		// Displaying message saying the user is
                            		// withing target heart range
        			cout << "You are  within your target heart rate range." << endl;
    		}
                            		// If user enters negative number program
                            		// terminates
    		else if (userAge < 0)
    			return 0;
	}
}

//*********************************************************************************
// Calculating heart rate function, takes the age entered and subtracts by 220 to *
// determine max heart rate. Then tests if user entered beats per min is within   *
// an acceptable age based on their age and max heart rate.                       *
//*********************************************************************************

bool calc_heart_rate(float Age,float BPM){
                            		// Declaring variable for max heart rate
	float maxHeartRate;
                            		// Calculating max heart rate
    	maxHeartRate = 220 - Age;
                            		// Declaring the max and min of range for
                            		// optimum heart range
	float maxTargetRange, minTargetRange;
                            		// Calculating max optimum heart rate
	maxTargetRange = (maxHeartRate * 0.7f);
                            		// Calculating min optimum heart rate
	minTargetRange = (maxHeartRate * 0.6f);
                            		// Determining if users heart rate is within
                            		// range of optimum heart rate
	if (BPM < minTargetRange || BPM > maxTargetRange)
                            		// If users input is not within range function returns
                            		// false
        	return false;
	else
                            		// If users input is within range function returns true
        	return true;
}