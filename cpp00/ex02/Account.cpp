#include "Account.hpp"
#include <iostream>

int	Account::getNbAccounts()
{
	return _nbAccounts;
}

int	Account::getTotalAmount()
{
	return _totalAmount;
}

int	Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "account:" << getNbAccounts() << ';'<< "total:" << getTotalAmount() << ';'
	<< "deposits:" << getNbDeposits() << ';'
	<< "withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account( int initial_deposit )
{
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';' << "amount:" << _amount << ';'
	<< "created" << std::endl;
}
Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:"<< deposit << ";amount:";
	_amount = _amount + deposit;
	_nbDeposits++;
	_totalAmount = _totalAmount + deposit;
	_totalNbDeposits++;
	std::cout << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int	saveAmount;

	saveAmount = _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	_amount = _amount - withdrawal;
	if (checkAmount() == 1)
	{
		_amount = saveAmount;
		_amount = _amount - withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount = _totalAmount - withdrawal;
		std::cout << ";withdrawal:" << withdrawal << ";amount:" << _amount
		<< ";nb_withdrawal:" << _nbWithdrawals << std::endl;
	}
	else
	{
		std::cout << ";withdrawal:refused" << std::endl;
		_amount = saveAmount;
	}
	return 0;
}

int	Account::checkAmount() const
{
	if (_amount < 0)
		return 0;
	return 1;
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount
	<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp()
{
	time_t time;
	time = std::time(0);
	tm *now = std::localtime(&time);
	std::cout << '[';
	std::cout << 1900 + now->tm_year << 1 + now->tm_mon << now->tm_mday <<
	'_' << now->tm_hour << now->tm_min << now->tm_sec;
	std::cout << "] ";
}