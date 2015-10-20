#include "Account.h"
#include "Person.h"


Account::Account(int newAccountNumber, double balance, Person newOwner)
{
	accountNumber = newAccountNumber;
	accountBalance = balance;
	accountOwner = newOwner;
}
