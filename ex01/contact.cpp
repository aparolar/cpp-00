/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:24:52 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/09 14:56:50 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

std::string	Contact::getStringToShow(std::string str)
{
	std::string	ret;

	if (str.length() > 10)
	{
		ret = str.substr(0, 9);
		ret += ".";
	}
	else
		ret = str;
	return (ret);
}

void	Contact::add()
{
	std::cout << "-----  Add contact  -----" << std::endl;
	std::cout << "Name: ";
	std::cin >> name;
	std::cout << "Last Name: ";
	std::cin >> lastName;
	std::cout << "Nickname: ";
	std::cin >> nickName;
	std::cout << "Phone: ";
	std::cin >> phone;
	std::cout << "Your darkest secret: ";
	std::cin >> darkestSecret;
	std::cout << "----- Contact added -----" << std::endl << std::endl;
}

void	Contact::showInfo()
{
	std::cout << std::setw(10) << "Name: " << name << std::endl;
	std::cout << std::setw(10) << "Last Name: " << lastName << std::endl;
	std::cout << std::setw(10) << "Nickname: " << nickName << std::endl;
	std::cout << std::setw(10) << "Phone: " << phone << std::endl;
	std::cout << std::setw(10) << "Your darkest seacret: " << darkestSecret << std::endl;
}
