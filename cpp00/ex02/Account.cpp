/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <rkhwaja@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 16:05:30 by rkhwaja           #+#    #+#             */
/*   Updated: 2026/07/19 18:46:02 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

//getters
/********************************************************* */
int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);	
}

int	Account::getTotalAmount(void)
{
	return(Account::_totalAmount);
}
int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}
/*----------------------------------------------------*/

void	Account::_displayTimestamp( void )
{
	std::time_t	now;
	std::tm		*timeinfo;
	char	buff[18];
	
	now = std::time(NULL);
	timeinfo = std::localtime(&now);
	std::strftime(buff, sizeof(buff), "[%Y%m%d_%H%M%S]", timeinfo);
	std::cout << buff;

//https://www.w3schools.com/cpp/cpp_date.asp
	
}
/********************************************************* */

//constructor -> means create new acc

Account::Account(int intial_deposite)
{
	this->_accountIndex = Account::_nbAccounts;
	this->_amount = intial_deposite;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	
	Account::_nbAccounts++;
	Account::_totalAmount += intial_deposite;
	Account::_displayTimestamp();

	std::cout<< " index:" << this->_accountIndex << ";amount:"
						 << this->_amount << ";created" << std::endl; 
}
// destructor
Account::~Account()
{
	Account::_displayTimestamp();
		std::cout << " index:" << this->_accountIndex 
		<< ";amount:" << this->_amount << ";closed" << std::endl;
}
/************************************************* */

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount  
			<< ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" 
			<< Account::_totalNbWithdrawals << std::endl;
}
/*-----------------------------------------------------------------------------------------------------------------------------*/



int	Account::checkAmount()const
{
	return (this->_amount);
}

void	Account::displayStatus()const
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:"
	<< this->_amount << ";deposits:" << this->_nbDeposits
	<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	int	previous;
	
	previous = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits ++;
	

	//printed info
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << previous << ";deposit:" << deposit
	<< ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int previous;
	
	previous = this->_amount;

	Account::_displayTimestamp();
	 std:: cout << " index:" << this->_accountIndex << ";p_amount:" << previous;
	
	if (withdrawal > this->_amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	this->_amount -=withdrawal;
	this->_nbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	this->_totalNbWithdrawals++;
	

	std::cout << ";withdrawal:" << withdrawal << ";amount:" << this->_amount
 				<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

	