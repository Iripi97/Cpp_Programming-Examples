/* Exercise_1
   Calculate miles per hour, and kilometers per hour.
   This program exposes the programmer to: cin/cout, floating point values, arithmetic operators 
   Program by: Justin Russo
 */
#include <iostream>	// Enables use of cin/cout
#include <iomanip>	// Enables precision of floating-point variables
using namespace std;

int main(){
            		/* Defining variables for starting mileage and
             		  and ending mileage, time, and miles per hour.
             		*/
	float mileageBeg, mileageEnd, mileageDif, timeTotal, milesPerHour;
            		// Getting the initial mileage from user:
	cout << "Please input the mileage your trip started at: " << endl;
            		// Users input:
	cin >> mileageBeg;
            		// Getting the final mileage from user:
        cout << "Please input the mileage your trip ended at: " << endl;
            		// Users input:
    	cin >> mileageEnd;
            		// Calculating miles traveled:
    	mileageDif = (mileageEnd - mileageBeg);
            		// Getting the total time elapsed from user:
    	cout << "How many hours did it take to travel those miles? " << endl;
            		// Users input:
    	cin >> timeTotal;
            		//Calculating miles per hour:
    	milesPerHour = (mileageDif / timeTotal);
    	cout << "\n";
            		// 1 mile = 1.609 kilometers
            		// Defining mileage variables for kilometers:
    	float kiloBeg, kiloEnd, kiloDif, kilosPerHour;
            		// converting inputed values to kilometers:
    	kiloBeg = (mileageBeg * 1.60934);
    	kiloEnd = (mileageEnd * 1.60934);
    	kiloDif = (kiloEnd - kiloBeg);
    	kilosPerHour = (kiloDif / timeTotal);
            		/* Outputting the final values:
             		  the fixed operator is used to make the setprecision(1)
             		  work to make every number go to the tenths decimal place
             		  the setw() are used to fit the criteria of the assignment
             		  or in a real world situation it is used to make the output
            		  more readable.
             		*/
    	cout << fixed << setprecision(1) << "Total miles " << setw(15) <<
       	mileageDif << endl;
    	cout << " Miles/Hour " << setw(15) << milesPerHour << endl;
    	cout << "Total kilometers " << setw(10) << kiloDif << endl;
    	cout << " Kilometers/Hour " << setw(10) << kilosPerHour << endl;
    	return 0;
}
