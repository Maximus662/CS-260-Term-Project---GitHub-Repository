#include"CUSTOMER.h"

using namespace std;

	//default

Customer::Account() :Customer()
	{
		ID = 0;
		balance = 0;
	}

Customer::Account(string _fname, string _lname, string _address, string _email, string _phone, int _ID, double _balance)
	{
		setCustomer(_fname, _lname, _address, _email, _phone);
		setID(_ID);
		setBalance(_balance);
		//accountCustomer.setCustomer() idr how to do this
	}
	//setter
	void setAccount(string _fname, string _lname, string _address, string _email, string _phone, int _ID, double _balance)
	{
		setCustomer(_fname, _lname, _address, _email, _phone);
		setID(_ID);
		setBalance(_balance);
	}
	void setID(int _ID)
	{
		/*
		if (isdigit(_ID) && _ID > 0)
			ID = _ID;
		else
		{
			while (isalpha(_ID) || _ID <= 0)
			{
				cout << "You have entered an invalid character or number for ID number. Please enter a new ID number: ";
				cin >> _ID;
			}
			ID = _ID;
		}
		*/
		srand(time(nullptr));
		int randomNumber = rand() % 90000 + 1000; //generates random 5 digin number between 10000 and 99999
		ID = randomNumber;
	}
	void setBalance(double _balance)
	{
		if (isdigit(_balance) && _balance > 0)
		{
			balance = _balance;
		}
		else
		{
			while ((isalpha(_balance)) || (_balance <= 0))
			{
				cout << "You have entered an invalid character or number for balance. Please enter a new balance: ";
				cin >> _balance;
			}
			balance = _balance;
		}
	}
	//Overloader
	
	Account::Account operator++() //post-fix
	{

		withdrawals++;
		return *this;
	}
	//getter
	int	Account::getWithdrawals()const
	{
		return withdrawals;
	}
	double	Account::getBalance() const
	{
		return balance;
	}
	int getID() const
	{
		return ID;
	}
	//Functions
	void withdrawal(double _withdrawalAmmount)
	{
		//checks to make sure not below 0
		if (_withdrawalAmmount < 0)
		{
			cout << "Not a valid withdrawal ammount, please try again... " << endl;
			cout << "=========================================================================================================" << endl << endl;
		}
		//checks to make sure they have enough money 
		else if ((balance - _withdrawalAmmount) < 0)
		{
			cout << "The withdrawal ammount was greater than your balance. Please try again with a lesser value..." << endl;
			cout << "=========================================================================================================" << endl << endl;
		}
		else
		{
			balance = balance - _withdrawalAmmount;
			cout << "Withdrawal complete..." << endl;
			cout << "=========================================================================================================" << endl << endl;
			withdrawals++;
		}
	}
	void deposit(double _depositAmmount)
	{
		//checks to make sure amount is above 0
		if (_depositAmmount < 0)
		{
			cout << "Not a valid deposit ammount, please try again... " << endl;
			cout << "=========================================================================================================" << endl << endl;
		}
		else
		{
			balance = balance + _depositAmmount;
			cout << "Deposit complete..." << endl;
			cout << "=========================================================================================================" << endl << endl;
			deposits++;
		}
	}
	void printInfo()
	{
		cout << "Name" << setw(20) << "Account ID Number" << setw(20) << "Balance" << endl;

		cout << getFname() << setw(20) << getID() << setw(20) << getBalance() << endl;
	}


};
kjdfvblzehrbfvlkj efb
fd; fdbodfb
[f oubf;o d 
iooht vufibgb'
vu [boin of