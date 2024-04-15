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

#ifndef LOGIN_H
#define LOGIN_H



class LogIn : public Account
{
private:
	string userName, password;
public:
	LogIn() : Account() {};
	LogIn(string _fname, string _lname, string _address, string _email, string _phone, int _ID, double _balance, string _userName, string _password) : Account(_fname, _lname, _address, _email, _phone, _ID, _balance) {};
	void registerUser(string _userName, string _password);
};
#endif //!LOGIN_H
