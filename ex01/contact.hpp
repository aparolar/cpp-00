/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:25:06 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/07 14:12:43 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <iomanip>

class Contact
{
	private :
		std::string	name;
		std::string	lastName;
		std::string	nickName;
		std::string	phone;
		std::string	darkestSecret;
	
	public :
		void		showInfo();
		void		add();
		std::string	getStringToShow(std::string str);
	
	std::string	getName()
	{
		return (name);
	}

	std::string	getLastName()
	{
		return (lastName);
	}

	std::string	getNickName()
	{
		return (nickName);
	}
};

#endif
