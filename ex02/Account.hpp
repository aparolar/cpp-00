/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:46:49 by aparolar          #+#    #+#             */
/*   Updated: 2022/09/16 14:11:34 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACCOUNT_HPP
# define ACCOUNT_HPP

# include <iostream>
# include <streambuf>
# include <sstream>
# include <string>

# define TERM_RED     "\033[31m"
# define TERM_GREEN   "\033[32m"
# define TERM_ORANGE  "\033[33m"
# define TERM_BLUE    "\033[36m"
# define TERM_RST     "\033[0m"

class Account
{
	private:
		static int	nbAccounts;
		static int	totalAmount;
		static int	totalNbDeposits;
		static int	totalNbWhitdrawals;

		int p_amount;
		int	amount;
		int	nbDeposits;
		int	nbWithdrawals;
		int	index;

	public:
		typedef Account	t;

		Account(int initialDeposit);
		~Account();
		
		void	makeDeposit( int deposit );
		void	makeWithdrawal( int withdrawal );
		int		checkAmount( void ) const;
		void	displayStatus( void ) const;
		static std::string	getColumnAndValue(std::string column, int value);
		static std::string	getColumnAndValue(std::string column, std::string value);
		std::string	displayIndex( void ) const;
		std::string	displayAmount( void ) const;
		std::string	displayDeposits( void ) const;
		std::string	displayWihdrawals( void ) const;

		static std::string	displayTotalAmount( void );
		static std::string	displayTotalDeposits( void );
		static std::string displayTotalWithdrawals( void );
		static std::string	displayTotalAccounts( void );

		static int		getNbAccounts( void );
		static int		getTotalAmount( void );
		static int		getTotalNbDeposits( void );
		static int		getTotalNbWhitdrawals( void );
		
		static	void 		displayAccountsInfos( void );
		static	std::string	getTimestamp( void );
};

#endif
