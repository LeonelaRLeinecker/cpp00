#include "Account.hpp"

/*
index:0;amount:42;created
*/

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) {
	this-> _accountIndex = _nbAccounts;
	_nbAccounts++;
	this-> _amount = initial_deposit;
	this-> _nbDeposits = 0;
	this-> _nbWithdrawals = 0;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl; 
	this->_totalAmount += _amount;
}
