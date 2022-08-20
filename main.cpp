#include <iostream>

#include "savings.h"

using namespace std;

int main()

{

	while (1) {
		cout << "*************************************" << endl; //Print heading

		cout << "************* Data Input ************" << endl;

		cout << "Initial Investment Amount: " << endl;

		cout << "Monthly Deposit: " << endl;

		cout << "Annual Interest: " << endl;

		cout << "Number of years: " << endl;

		system("PAUSE"); //system("PAUSE");

		cout << endl;

		cout << "*************************************" << endl; 

		cout << "************* Data Input ************" << endl;

		cout << "Initial Investment Amount: $";

		double investment, monthlydeposit, interestrate;

		int years;

		cin >> investment; //Get the inputs from user

		cout << "Monthly Deposit: $";

		cin >> monthlydeposit;

		cout << "Annual Interest: %";

		cin >> interestrate;

		cout << "Number of years: ";

		cin >> years;

		
		system("PAUSE"); //system("PAUSE");

		savings mysavings = savings(investment, monthlydeposit, interestrate, years); //Create savings object using the given inputs

		cout << endl;

		mysavings.calculateBalanceWithoutMonthlyDeposit(); //Invoke the report methods

		cout << endl;

		if (monthlydeposit > 0) { //call monthly deposit report, if it has monthly deposit at least $1

			mysavings.balanceWithMonthlyDeposit();

		}

		cout << endl << "Do you want to try another? (y/n): "; //Get the user choice if they want to try another

		string choice;

		cin >> choice;

		if (choice != "y") { //If user doesnot want to try another, break the loop

			break;

		}

		cout << endl;

	}

	return 0;

}