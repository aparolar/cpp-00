/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:46:30 by aparolar          #+#    #+#             */
/*   Updated: 2022/08/08 18:46:37 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account::nbAccounts = 0;
int	Account::totalAmount = 0;
int	Account::totalNbDeposits = 0;
int	Account::totalNbWhitdrawals = 0;

Account::Account(int initialDeposit)
{
	this->p_amount = 0;
	this->nbDeposits = 0;
	this->nbWithdrawals = 0;
	this->index = this->nbAccounts++;
	this->amount = initialDeposit;
	this->totalAmount += initialDeposit;
	std::cout << getTimestamp();
	std::cout << displayIndex() << ";";
	std::cout << displayAmount() << ";";
	std::cout << TERM_GREEN << "created" << TERM_RST << std::endl;
}

Account::~Account()
{
	std::cout << getTimestamp();
	std::cout << displayIndex() << ";";
	std::cout << displayAmount() << ";";
	std::cout << TERM_RED << "closed" << TERM_RST << std::endl;
}

std::string	Account::getTimestamp( void )
{
	return ("[19920104_091532] ");
}

void	Account::displayAccountsInfos( void )
{
	std::cout << Account::getTimestamp();
	std::cout << Account::displayTotalAccounts() << ";";
	std::cout << Account::displayTotalAmount() << ";";
	std::cout << Account::displayTotalDeposits() << ";";
	std::cout << Account::displayTotalWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const
{
	std::cout << Account::getTimestamp();
	std::cout << displayIndex() << ";";
	std::cout << displayAmount() << ";";
	std::cout << displayDeposits() << ";";
	std::cout << displayWihdrawals() << std::endl;
}

std::string	Account::getColumnAndValue(std::string column, int value)
{
	std::string			ret;
	std::stringstream	ss;

	ss << TERM_ORANGE << column << ":" << TERM_BLUE << value << TERM_RST;
	ss >> ret;
	return (ret);
}

std::string	Account::getColumnAndValue(std::string column, std::string value)
{
	std::string			ret;
	std::stringstream	ss;

	ss << TERM_ORANGE << column << ":" << TERM_BLUE << value << TERM_RST;
	ss >> ret;
	return (ret);
}

std::string	Account::displayIndex( void ) const
{
	return (getColumnAndValue("index", this->index));
}

std::string	Account::displayAmount( void ) const
{
	return (getColumnAndValue("amount", this->amount));
}

std::string	Account::displayDeposits( void ) const
{
	return (getColumnAndValue("deposits", this->nbDeposits));
}

std::string Account::displayWihdrawals( void ) const
{
	return (getColumnAndValue("withdrawals", this->nbWithdrawals));
}

std::string	Account::displayTotalAmount( void )
{
	return (getColumnAndValue("total", Account::getTotalAmount()));
}

std::string	Account::displayTotalDeposits( void )
{
	return (getColumnAndValue("deposits", Account::getTotalNbDeposits()));
}

std::string Account::displayTotalWithdrawals( void )
{
	return (getColumnAndValue("withdrawals", Account::getTotalNbWhitdrawals()));
}

std::string Account::displayTotalAccounts( void )
{
	return (getColumnAndValue("accounts", Account::getNbAccounts()));
}

int		Account::checkAmount( void ) const
{
	return (this->amount);	
}

void	Account::makeDeposit( int deposit )
{
	this->p_amount = this->amount;
	std::cout << Account::getTimestamp();
	std::cout << displayIndex() << ";";
	std::cout << getColumnAndValue("p_amount", this->p_amount) << ";";
	if (deposit > 0)
	{
		this->amount += deposit;
		this->totalAmount += deposit;
		this->nbDeposits++;
		this->totalNbDeposits++;
		std::cout << getColumnAndValue("deposit", deposit) << ";";
		std::cout << displayAmount() << ";";
		std::cout << getColumnAndValue("nb_deposits", nbDeposits);
	}
	else
		std::cout << getColumnAndValue("deposit", "refused");
	std::cout << std::endl;
}

void	Account::makeWithdrawal( int withdrawal )
{

	std::cout << Account::getTimestamp();
	std::cout << displayIndex() << ";";
	std::cout << getColumnAndValue("p_amount", amount) << ";";
	if (amount >= withdrawal)
	{
		amount -= withdrawal;
		totalAmount -= withdrawal;
		nbWithdrawals++;
		totalNbWhitdrawals++;
		std::cout << getColumnAndValue("withdrawal", withdrawal) << ";";
		std::cout << displayAmount() << ";";
		std::cout << getColumnAndValue("nb_withdrawals", nbWithdrawals);
	}
	else
		std::cout << getColumnAndValue("withdrawal", "refused");
	std::cout << std::endl;
}

int		Account::getNbAccounts()
{
	return (Account::nbAccounts);
}

int		Account::getTotalAmount()
{
	return (Account::totalAmount);
}

int		Account::getTotalNbDeposits()
{
	return (Account::totalNbDeposits);
}

int		Account::getTotalNbWhitdrawals()
{
	return (Account::totalNbWhitdrawals);
}
