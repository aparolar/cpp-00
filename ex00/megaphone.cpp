/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 17:34:20 by aparolar          #+#    #+#             */
/*   Updated: 2022/09/16 12:33:25 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

static void	print_upper(char *s)
{
		while (*s)
				std::cout << (char)toupper(*s++);
}

int	main(int argc, char **argv)
{
		int	i;

		if (argc > 1)
		{
				i = 1;
				while (i < argc)
				{
					print_upper(*(argv + i));
					i++;
					if (i < argc)
						std::cout << " ";
				}
				std::cout << std::endl;
		}
		else
				std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
}
