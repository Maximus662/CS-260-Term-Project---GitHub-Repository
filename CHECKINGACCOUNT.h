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

#ifndef MYCUSTOMER_H
#define MYCUSTOMER_H

class CheckingAccount : public Account {
private:
	double overDraftLimit;

public:
	CheckingAccount() :Account();
	CheckingAccount(string _fname, string _lname, string _address, string _email, string _phone, int _ID, double _balance, double _overDraftLimit) : Account(_fname, _lname, _address, _email, _phone, _ID, _balance);
	void setOverDraftLimit(double _overDraftLimit);

	//over load
	void withdrawal(double _withdrawalAmount);
	void depositChecking();
};

#endif //!MYCUSTOMER_H
