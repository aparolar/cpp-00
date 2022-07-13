/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:46:30 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/13 17:54:43 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account(int initialDeposit)
{
	nbAccounts = 0;
	totalAmount = 0;
	totalNbDeposits = 0;
	totalNbWhitdrawals = 0;
}

Account::~Account()
{
}

void	Account::displayAccountsInfos( void )
{
	
}

void	Account::displayStatus( void ) const
{
	//Account::_displayTimestamp();
	std::cout << "index:" << this->accountIndex << ";";
	std::cout << "amount:" << Account::checkAmount() << ";";
	std::cout << "deposits:" << this->nbDeposits << ";";
	std::cout << "withdrawals:" << this->nbWithdrawals << std::endl;
}

int		Account::checkAmount( void ) const
{
	
}

void	Account::makeDeposit( int deposit )
{
	
}

bool	Account::makeWithdrawal( int withdrawal )
{
	return (true);
}

int		Account::getNbAccounts()
{
	return (this->nbAccounts);
}

int		Account::getTotalAmount()
{
	return (this->totalAmount);
}

int		Account::getTotalNbDeposits()
{
	return (this->totalNbDeposits);
}

int		Account::getTotalNbWhitdrawals()
{
	return (this->totalNbWhitdrawals);
}
