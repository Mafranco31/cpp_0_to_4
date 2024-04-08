/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafranco <mafranco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 17:00:10 by mafranco          #+#    #+#             */
/*   Updated: 2024/04/08 13:14:51 by mafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class Contact {

private:
	std::string	first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_nb;
	std::string dark_secret;

public:
	Contact(std::string first_name, std::string last_name, std::string nick_name,
			std::string phone_nb, std::string dark_secret);
	Contact();
	~Contact( void );
	std::string	get_first(void) const;
	std::string	get_last(void) const;
	std::string	get_nick(void) const;
	std::string	get_phone(void) const;
	std::string	get_secret(void) const;
};

#endif
