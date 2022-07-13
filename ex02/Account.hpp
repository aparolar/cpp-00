/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:46:49 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/13 17:53:10 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACCOUNT_HPP
# define ACCOUNT_HPP

# include <iostream>
# include <streambuf>

class Account
{
	private:
		int	nbAccounts;
		int	totalAmount;
		int	totalNbDeposits;
		int	totalNbWhitdrawals;

		int	nbDeposits;
		int	nbWithdrawals;
		int	accountIndex;

	public:
		typedef Account	t;

		Account(int initialDeposit);
		~Account();
		
		void	makeDeposit( int deposit );
		bool	makeWithdrawal( int withdrawal );
		int		checkAmount( void ) const;
		void	displayStatus( void ) const;

		int		getNbAccounts( void );
		int		getTotalAmount( void );
		int		getTotalNbDeposits( void );
		int		getTotalNbWhitdrawals( void );
		
		static	void 	displayAccountsInfos( void );
};

#endif
