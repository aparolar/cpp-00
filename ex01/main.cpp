/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 17:34:20 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/06 17:08:10 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctype.h>

int	main(int argc, char **argv)
{
	std::string	str;

	while (42)
	{
		//std::getline(std::cin, str);
		std::cin >> str;
		if (str.compare("ADD"))
		{}
		else if (str.compare("SEARCH"))
		{}
		else if (str.compare("EXIT"))
			break ;
	}
	return (0);
}
