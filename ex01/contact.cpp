/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:24:52 by aparolar          #+#    #+#             */
/*   Updated: 2022/09/16 11:28:40 by aparolar         ###   ########.fr       */
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
	std::getline(std::cin , name);
	std::cout << "Last Name: ";
	std::getline(std::cin, lastName);
	std::cout << "Nickname: ";
	std::getline(std::cin, nickName);
	std::cout << "Phone: ";
	std::getline(std::cin, phone);
	std::cout << "Your darkest secret: ";
	std::getline(std::cin, darkestSecret);
	std::cout << "----- Contact added -----" << std::endl << std::endl;
}

void	Contact::showInfo()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Last Name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickName << std::endl;
	std::cout << "Phone: " << phone << std::endl;
	std::cout << "Your darkest secret: " << darkestSecret << std::endl;
}
