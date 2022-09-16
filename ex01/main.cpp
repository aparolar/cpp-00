/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 17:34:20 by aparolar          #+#    #+#             */
/*   Updated: 2022/09/16 11:15:47 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>
#include <ctype.h>
#include "phonebook.hpp"

int	main(void)
{
	std::string			str;
	std::stringstream	ss;
	int					index;
	PhoneBook			phonebook;

	std::cout <<" WELCOME TO PHONEBOOK" << std::endl;
	while (42)
	{
		std::cout << "Choose an option (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, str);
		if (!str.compare("ADD"))
		{
			phonebook.add();
		}
		else if (!str.compare("SEARCH"))
		{
			index = -1;
			phonebook.showList();
			std::cout << "Chose a index : ";
			std::cin >> str;
			ss <<  str;
			ss >> index;
			if (str.length() == 1 && isdigit(*str.data()) && index >= 0 && index <= 7)
			{
				phonebook.showContact(index);
			}
			else
				std::cout << "WRONG INDEX" << std::endl;
			ss.clear();
		}
		else if (!str.compare("EXIT"))
			break ;
	}
	return (0);
}
