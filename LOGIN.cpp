#include"LOGIN.h"

using namespace std;


	LogIn() : Account()
	{
		userName = "";
		password = "";
	}
	LogIn(string _fname, string _lname, string _address, string _email, string _phone, int _ID, double _balance, string _userName, string _password) : Account(_fname, _lname, _address, _email, _phone, _ID, _balance)
	{
		userName = _userName;
		password = _password;
	}
	void registerUser(string _userName, string _password)
	{
		string _fname, _lname, _address, _email, _phone;
		double _balance = 0;
		int _ID = 0;
		userName = _userName;
		password = _password;
		cout << "Your username and password have been created. We only need a few more things from you to complete your account set-up." << endl;
		cout << "Enter First Name: ";
		cin >> _fname;
		cout << "Enter Last Name: ";
		cin >> _lname;
		cout << "Enter Address: ";
		cin.ignore();
		getline(cin, _address);
		cout << "Enter Email: ";
		cin >> _email;
		cout << "Enter Phone Number: ";
		cin >> _phone;
		setCustomer(_fname, _lname, _address, _email, _phone);
		setID(_ID);
		setBalance(_balance);
		cout << "Your acccount has successfully been created!" << endl;
	}

};
