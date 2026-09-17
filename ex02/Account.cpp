#include "Account.hpp"

/*
index:0;amount:42;created
*/
//variables estaticas
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

//manejo data tiempo
void Account::_displayTimestamp( void ) {
    std::time_t now = std::time(NULL);
    std::tm* tm_now = std::localtime(&now);

    std::cout << "[" 
              << (tm_now->tm_year + 1900)
              << std::setfill('0')
              << std::setw(2) << (tm_now->tm_mon + 1)
              << std::setw(2) << tm_now->tm_mday << "_"
              << std::setw(2) << tm_now->tm_hour
              << std::setw(2) << tm_now->tm_min
              << std::setw(2) << tm_now->tm_sec
              << "] ";
}
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

Account::~Account(void) {
	_displayTimestamp();
	std::cout << "index" << this->_accountIndex << ";"
			  << "amount" << this->_amount << ";"
			  << "closed" << std::endl;
}

//[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
void Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";"
			  << "total:" << _totalAmount << ";"
			  << "deposits:" << _totalNbDeposits << ";"
			  << "withdrawals:" << _totalNbWithdrawals
			  << std::endl;
}

int Account::getNbAccounts(void) {
	return _nbAccounts;
}

int Account::getTotalAmount(void) {
	return _totalAmount;
}

int Account::getNbDeposits(void) {
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
	return _totalNbWithdrawals;
}

//[19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
void Account::makeDeposit(int deposit) {
	int p_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
	          << "p_amount:" << p_amount << ";"
			  << "deposit:" << deposit << ";"
			  << "amount:" << this->_amount << ";"
			  << "nb_deposits:" << this->_nbDeposits
			  << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	
}

