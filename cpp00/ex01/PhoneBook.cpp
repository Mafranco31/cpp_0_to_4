/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafranco <mafranco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 18:57:36 by mafranco          #+#    #+#             */
/*   Updated: 2024/04/08 14:18:23 by mafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook (void) {
	Contact newcontact("          ","          ","          ","         ","         ");
	for (int i = 0;i < 8;i++)
		this->list[i] = newcontact;
	this->len = 0;
	this->num = 0;
	return;
}

PhoneBook::~PhoneBook(void) { return; }

void PhoneBook::add_to_list(Contact newcontact)
{
	list[this->num] = newcontact;
	this->num++;
	if (this->num == 8)
		this->num = 0;
	if (this->len < 8)
		this->len++;
}

void	PhoneBook::get_num(int i) const {
	std::cout << "First name : " << this->list[i].get_first() << std::endl;
	std::cout << "Last name : " << this->list[i].get_last() << std::endl;
	std::cout << "Nickname : " << this->list[i].get_nick() << std::endl;
	std::cout << "Phone number : " << this->list[i].get_phone() << std::endl;
	std::cout << "Darkest secret : " << this->list[i].get_secret() << std::endl;
}

int	PhoneBook::get_len(void) const {return this->len;}
int	PhoneBook::get_first(void) const {return this->len;}

void PhoneBook::print_list(void) const {
	std::string	table[4];

	std::cout << " id       |first name| last name| nick name|" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	for (int i = 0; i < 8; i++) {
		table[0] = char(i + 48);
		table[1] = this->list[i].get_first();
		table[2] = this->list[i].get_last();
		table[3] = this->list[i].get_nick();
		
		for (int j = 0; j < 4; j++) {
			for (unsigned long k = 0; k < 10; k++) {
				if (k == 9 && table[j].length() > 10)
					std::cout << '.';
				else if (table[j][k] && k < table[j].length() + 1)
					std::cout << table[j][k];
				else
					std::cout << ' ';
			}
			std::cout << '|';
		}
		std::cout << std::endl << "--------------------------------------------" << std::endl;
	}
}
