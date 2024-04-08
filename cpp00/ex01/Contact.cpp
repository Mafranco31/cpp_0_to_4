/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafranco <mafranco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 17:01:07 by mafranco          #+#    #+#             */
/*   Updated: 2024/04/08 14:14:31 by mafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(std::string first_name, std::string last_name, std::string nick_name,
		std::string phone_nb, std::string dark_secret) : first_name(first_name),
		last_name(last_name), nick_name(nick_name), phone_nb(phone_nb), dark_secret(dark_secret) {
	/*this->first_name = first_name;
	this->last_name = last_name;
	this->nick_name = nick_name;
	this->phone_nb = phone_nb;
	this->dark_secret = dark_secret;*/
	return;
}

Contact::Contact()
{
	first_name = "";
	last_name = "";
	nick_name = "";
	phone_nb = "";
	dark_secret = "";
	return;
}

Contact::~Contact(void) {
	return;
}

std::string	Contact::get_first( void ) const {return (first_name); }

std::string	Contact::get_last( void ) const {return (last_name); }

std::string	Contact::get_nick( void ) const {return (nick_name); }

std::string	Contact::get_phone( void ) const {return (phone_nb); }

std::string	Contact::get_secret( void ) const {return (dark_secret); }
