#include <iomanip>
#include <iostream>
#include "savings.h"
using namespace std;


savings::savings(double investment, double monthDeposit, double rate, int years) { //constructor

	this->initialDeposit = investment;

	this->monthlyDeposit = monthDeposit;

	this->interestRate = rate;

	this->numYears = years;

}

savings::~savings() { //Destructor

}

void savings::calculateBalanceWithoutMonthlyDeposit() { //Prints report not considering monthly deposit
	cout << "     Balance and Interest without additional Monthly Deposits" << endl;  //Print heading

	cout << "==========================================================================" << endl;

	cout << setw(5) << "Year"

		<< setw(25) << "Year End Balance"

		<< setw(30) << "Year End Earned Interest" << endl;

	cout << "--------------------------------------------------------------------------" << endl;

	int currentyear = 1; //Iterate for given years and calculate interest earned

	double yearendBalance = this->initialDeposit;

	while (currentyear <= this->numYears) {

		double interestearned = yearendBalance * this->interestRate / 100; //Calculate interest

		yearendBalance += interestearned; //Add it to year end Balance

		cout << right << setw(5) << currentyear << fixed << setprecision(2) //Print the results for each year

			<< setw(20) << "$" << yearendBalance

			<< setw(27) << "$" << interestearned << endl << endl;

		currentyear++;

	}

}
void savings::balanceWithMonthlyDeposit() { //Prints report considering monthly deposit
	cout << "     Balance and Interest without additional Monthly Deposits" << endl; //Print heading

	cout << "==========================================================================" << endl;

	cout << setw(5) << "Year"

		<< setw(25) << "Year End Balance"

		<< setw(30) << "Year End Earned Interest" << endl;

	cout << "--------------------------------------------------------------------------" << endl;

	int currentyear = 1; //Iterate for given years and calculate interest earned

	double yearendBalance = this->initialDeposit;

	while (currentyear <= this->numYears) {

		int month = 1; //calulate interest monthly and find compoud interest

		double interestearned = 0.0;

		double monthendbalance = yearendBalance;

		while (month <= 12) {

			monthendbalance += this->monthlyDeposit; //Add monthly deposit

			double monthlyinterest = monthendbalance * this->interestRate / (100 * 12); //Calculate monthly interest

			interestearned += monthlyinterest; //Add the monthly interest to yearly interest earned

			monthendbalance += monthlyinterest; // add the interest to monthend balance

			month++; 

		}

		yearendBalance = monthendbalance; //After 12 months

		cout << right << setw(5) << currentyear << fixed << setprecision(2) //Print the results

			<< setw(20) << "$" << yearendBalance

			<< setw(23) << "$" << interestearned << endl << endl;

		currentyear++;

	}

}