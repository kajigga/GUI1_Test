#pragma once
#include "Person.h"
class Account
{

	int accountNumber;
	double accountBalance;
	Person accountOwner;
public:
	Account(int,double,Person);
	void makeDeposit(double amount);
	void makeWithdrawal(double amount);
	Person getOwner();
};

