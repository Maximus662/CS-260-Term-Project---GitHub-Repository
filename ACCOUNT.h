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

class Account : public Customer {
private:
	int ID;
	double balance;

protected:
	Customer accountCustomer;

public:
	int withdrawals = 0;
	int deposits = 0;
	//default
	Account() :Customer();

	Account(string _fname, string _lname, string _address, string _email, string _phone, int _ID, double _balance);
	//setter
	void setAccount(string _fname, string _lname, string _address, string _email, string _phone, int _ID, double _balance);
	void setID(int _ID);
	void setBalance(double _balance);

	//Overloader
	Account operator++();//post-fix

	//getter
	int getWithdrawals()const
	{
		return withdrawals;
	}
	double getBalance() const
	{
		return balance;
	}
	int getID() const
	{
		return ID;
	}
	//Functions
	void withdrawal(double _withdrawalAmmount);
	void deposit(double _depositAmmount);
	void printInfo();

};
#endif // !MYACCOUNT_H

