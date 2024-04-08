/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafranco <mafranco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 16:31:35 by mafranco          #+#    #+#             */
/*   Updated: 2024/04/07 17:13:38 by mafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <cctype>
#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else {
		for (int i = 1; i < argc; i++) {
			for (unsigned long j = 0; j < strlen(argv[i]); j++) {
				std::cout << char(std::toupper(argv[i][j]));
			}
		}
	}
	std::cout << std::endl;
	return (0);
}
