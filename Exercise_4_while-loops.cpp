/* Exercise 4
   Calculate Investment Amount
   This program exposes the programmer to: cin/cout, pow function (in math library), while loops
   Created by: Justin Russo
 */
                            		// Allows for cin/cout to be used:
 #include <iostream>
                            		// Allows pow() to be used:
 #include <cmath>
 using namespace std;
 int main(){
                            		// Defining the variable for the user to input
     	long int initialInvestment;
     	float interestRate, investmentBalance;
     	int investmentPeriod;
     	float monthlyRate;
                            		// Prompting the user for an initial investment
	cout << "Please enter the value of your initital investment, it must be atleast"
	<< " $10,000." << endl;
                            		// Allowing for the users input
	cin >> initialInvestment;
                            		// Checking if the investment is large enough:
    	while (initialInvestment < 10000){
                            		// Prompting the user to input an acceptable investment
    		cout << "The investment must be at least 10,000.\n";
    		cout << "Please enter your initial investment: ";
                            		// Allowing for user input
    		cin >> initialInvestment;
        }
                            		// Prompting the user for the annual interest rate:
	cout << "What is the annual interest rate?" << endl;
                            		// Allowing for the users input
	cin >> interestRate;
                            		// Checking if interest rate is positive:
    	while (interestRate < 0){
                            		// Prompting the user for an acceptable interest rate
        	cout << "The interest rate must be postive.\n";
        	cout << "Please enter the annual interest rate: ";
                            		// Allowing for user input
        	cin >> interestRate;
    	}
                            		// Calculating the monthly interest rate:
    	monthlyRate = (interestRate / 12) / (100);
                            		// Prompting the user for length of time of investment:
	cout << "For how many months will you invest?\n";
                            		// Allowing for user input
	cin >> investmentPeriod;

    	while (investmentPeriod < 0){
                            		// Prompting the user for an acceptable investment period:
        	cout << "The investment period must be positive.\n";
        	cout << "Please enter how long the investment period will be: ";
                            		// Allowing for user input
        	cin >> investmentPeriod;
    	}
                            		// Calculating balance after inflation:
    	investmentBalance = (initialInvestment) * (pow((1 + monthlyRate),investmentPeriod));
                            		// Displaying message with value for user:
	cout << "After " << investmentPeriod << " months your investment of " << initialInvestment <<
	"\nwill be worth: " << investmentBalance << endl;
	return 0;
}

