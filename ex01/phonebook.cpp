/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 17:34:20 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/09 14:58:40 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	PhoneBook::add()
{
	if (index > 7)
	{
		contactList[oldIndex].add();
		oldIndex++;
		if(oldIndex > 7)
			oldIndex = 0;
	}
	else
	{
		contactList[index] = Contact();
		contactList[index].add();
		index++;
	}
}

void	PhoneBook::showList()
{
	int i;
	Contact	contact;

	i = 0;
	std::cout << std::setw(10) << "Index: " << i << "|";
	std::cout << std::setw(10) << "Name: " << "|";
	std::cout << std::setw(10) << "LastName: " << "|";
	std::cout << std::setw(10) << "Nickname: " << std::endl;
	while (i < index)
	{
		contact = contactList[i];
		std::cout << std::setw(10) << "Contact: " << i << "|";
		std::cout << std::setw(10) << contact.getStringToShow(contact.getName()) << "|";
		std::cout << std::setw(10) << contact.getStringToShow(contact.getLastName()) << "|";
		std::cout << std::setw(10) << contact.getStringToShow(contact.getNickName()) << std::endl;
		i++;
	}
}

void	PhoneBook::showContact(int index)
{
	if (contactList[index].getName().empty())
		std::cout << "Contact empty" << std::endl;
	else
	{
		std::cout << "Contact " << index << std::endl;
		contactList[index].showInfo();
	}
}
