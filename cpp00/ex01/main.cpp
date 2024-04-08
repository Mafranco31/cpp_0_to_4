/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafranco <mafranco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 16:54:50 by mafranco          #+#    #+#             */
/*   Updated: 2024/04/08 14:17:18 by mafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <cstring>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"


int	solo_digit(std::string str, std::string const set)
{
	int	i = 0;
	int	j = 0;

	if (str.find_first_not_of(set) != std::string::npos)
	{
		std::cout << "Invalid format. Retype" << std::endl;
		return (1);
	}
	while (str[i])
	{
		if (!std::isspace(str[i]))
			j = 1;
		i++;
	}
	if (j == 0)
		return (1);
	return (0);
}

void	add_contact(PhoneBook *phonebook)
{
	std::string	word;
	std::string strings[5];
	std::string	input;
	int	i = 0;

	if (phonebook->get_len() == 8) {
		std::cout << "You have the maximum of contact the repertory can have (8)." << std::endl;
		std::cout << "The new contact you are going to add will delete your most ancient one :" << std::endl;
		std::cout << "Are you sure to add a new contact ? type 'YES' to continuee" << std::endl;
		std::getline(std::cin, input);
		if (input != "YES")
			return ;
	}
	while (i < 5)
	{
		switch (i) {
			case 0:
				word = "first name : ";
				break;
			case 1:
				word = "last name : ";
				break;
			case 2:
				word = "nickname : ";
				break;
			case 3:
				word = "phone number : ";
				break;
			case 4:
				word = "darkest secret : ";
				break;
		}
		std::cout << "Enter " << word << std::endl;
		std::getline(std::cin, strings[i]);
		if (strings[i] == "")
			continue;
		else if (strings[i] == "EXIT")
			return ;
		else if (i == 3 && solo_digit(strings[i], "0123456789 -"))
			continue;
		else if (i != 3 && solo_digit(strings[i], "qwertyuiopasdfghjklzxcvbnm 0123456789QWERTYUIOPASDFGHJKLZCVBNM-'"))
			continue;
		else
			i++;
	}
	Contact newcontact(strings[0], strings[1], strings[2], strings[3], strings[4]);
	phonebook->add_to_list(newcontact);
	std::cout << "Contact has been added." << std::endl;
	std::cout << "Avaible commands: ADD, SEARCH, EXIT." << std::endl;
}

void	search_contact(PhoneBook *phonebook)
{
	int	len = phonebook->get_len();

	if (len == 0) {
		std::cout << "Yo dont have any contact for the moment." << std::endl;
		return ;
	}
	std::string	input = "";

	phonebook->print_list();
	std::cout << "Enter the ID of the contact you are looking for"<< std::endl;
	while (input != "EXIT")
	{
		std::cin >> input;
		if (input.length() != 1)
			std::cout << "Enter an ID between 0 and " << len - 1 << std::endl;
		else if (input.at(0) > 47 && input.at(0) < (len + 48))
		{
			phonebook->get_num(input.at(0) - 48);
			std::cout << "Avaible commands: ADD, SEARCH, EXIT." << std::endl;
			return;
		}
		else
			std::cout << "Enter an ID between 0 and " << len - 1 << std::endl;
	}
}

int	main(int argc, char **argv)
{
	PhoneBook phonebook;
	std::string	input = "";

	(void)argv;
	if (argc != 1)
		return (0);
	std::cout << "Avaible commands: ADD, SEARCH, EXIT." << std::endl;
	while (input != "EXIT")
	{
		std::getline(std::cin, input);
		if (input == "ADD")
			add_contact(&phonebook);
		else if (input == "SEARCH")
			search_contact(&phonebook);
	}
	return 0;
}
