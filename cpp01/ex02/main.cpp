/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafranco <mafranco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:31:53 by mafranco          #+#    #+#             */
/*   Updated: 2024/04/08 16:53:59 by mafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*ptr = &str;
	std::string	&ref = str;

	std::cout << "The memory address of the string variable : " << &str<< std::endl;
	std::cout << "The memory address held by stringPTR : " << ptr << std::endl;
	std::cout << "The memory address held by stringREF : " << &ref << std::endl;

	std::cout << std::endl;
	std::cout << "The value of the string variable : " << str << std::endl;
	std::cout << "The value pointed to by stringPTR : " << *ptr << std::endl;
	std::cout << "The value pointed to by stringREF : " << ref << std::endl;

	return (0);
}
