#include <iostream>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0; //amount all accounts
int	Account::_totalAmount = 0; //amount the cash all accounts
int	Account::_totalNbDeposits = 0; //amount the deposits all accounts
int	Account::_totalNbWithdrawals = 0; //amount the withdrawals all accounts

Account::Account(int initial_deposit) {
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit; // first amount on the account
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account(void) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
}

int		Account::getNbAccounts( void ) {
	return (_nbAccounts);
}

int		Account::getTotalAmount( void ) {
	return (_totalAmount);
}

int		Account::getNbDeposits( void ) {
	return (_totalNbDeposits);
}

int		Account::getNbWithdrawals( void ) {
	return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp(void) {
	std::time_t t = std::time(0);   // get time now
	std::tm* now = std::localtime(&t);
	std::cout << "[" << (now->tm_year + 1900)
	<< (now->tm_mon + 1) << now->tm_mday
	<< "_" << now->tm_hour << now->tm_min
	<< now->tm_sec << "] ";
}

void	Account::displayAccountsInfos() {
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << ";" << std::endl;
}

void	Account::displayStatus() const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << ";" << std::endl;
}

int		Account::checkAmount( void ) const {
	return (_amount);
}

void    Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << "amount:" << _amount << ";";
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "nb_deposits:" << _nbDeposits << ";" << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	if (_amount >= withdrawal)
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		std::cout << "amount:" << _amount << ";";
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "nb_withdrawals:" << _nbWithdrawals << ";" << std::endl;
		return (true);
	}
	else
		std::cout << "withdrawal:refused" << std::endl;
	return (false);
}
