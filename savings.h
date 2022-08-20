#ifndef SAVINGS_H_

#define SAVINGS_H_

class savings {  //define class

public:  //public variables

	savings(double investment, double monthDeposit, double rate, int years);

	virtual ~savings();

	void calculateBalanceWithoutMonthlyDeposit();  //with no monthly deposit

	void balanceWithMonthlyDeposit();  //with a montly deposit

private:  //private variables

	double initialDeposit;

	double monthlyDeposit;

	double interestRate;

	int numYears;

};

#endif
