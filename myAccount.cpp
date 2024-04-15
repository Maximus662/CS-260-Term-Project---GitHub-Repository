#include "ACCOUNT.h"
#include "CUSTOMER.h"

using namespace std;

//default

Account::Account()
{
	accountCustomer.setCustomer("","","","","");
	ID = 0;
	balance = 0;
};


Account::Account(string _fname, string _lname, string _address, string _email, string _phone, int _ID, double _balance)
{
	accountCustomer.setCustomer(_fname, _lname, _address, _email, _phone);
	setID(_ID);
	setBalance(_balance);
	//accountCustomer.setCustomer() idr how to do this
}
//setter
void Account:: setAccount(string _fname, string _lname, string _address, string _email, string _phone, int _ID, double _balance)
{
	accountCustomer.setCustomer(_fname, _lname, _address, _email, _phone);
	setID(_ID);
	setBalance(_balance);
}
void Account::setID(int _ID)
{
	srand(time(nullptr));
	int randomNumber = rand() % 90000 + 1000; //generates random 5 digin number between 10000 and 99999
	ID = randomNumber;
}
void Account:: setBalance(double _balance)
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

Account operator++() //post-fix
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
int Account:: getID() const
{
	return ID;
}
//Functions
void Account::withdrawal(double _withdrawalAmmount)
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
void Account::deposit(double _depositAmmount)
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
void Account::printInfo()
{
	cout << "Name" << setw(20) << "Account ID Number" << setw(20) << "Balance" << endl;

	cout << Customer::getFname() << setw(20) << getID() << setw(20) << getBalance() << endl;
}


