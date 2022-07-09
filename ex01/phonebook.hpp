/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:02:34 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/09 12:10:49 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "contact.hpp"

class PhoneBook
{
	private :

		int		index;
		int		oldIndex;
		Contact	contactList[8];

	public :
	
		PhoneBook(void)
		{
			index = 0;
			oldIndex = 0;
		}

		~PhoneBook(void)
		{
		}

		void	add();
		void	showList();
		void	showContact(int index);
};

#endif
