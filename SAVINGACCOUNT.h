#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <cctype>
#include <ostream>
#include<ctime>
#include"CUSTOMER.h"
using namespace std;

#ifndef SAVINGACCOUNT_H
#define SAVINGACCOUNT_H

class SavingAccount : public Account {
private:
	double interestRate;
	Account* accountCustomer;

public:

	//Constructors
	SavingAccount(): Account() {};
	SavingAccount(Account* accountCustomer, string _fname, string _lname, string _address, string _email, string _phone, int _ID, double _balance, double _interestRate);

	//Functions
	void depositSaving();
	double payInterest();
	void printInfo();
};

#endif //!SAVINGACCOUNT_H
