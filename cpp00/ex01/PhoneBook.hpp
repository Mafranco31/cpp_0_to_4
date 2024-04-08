/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafranco <mafranco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 18:58:01 by mafranco          #+#    #+#             */
/*   Updated: 2024/04/08 14:07:53 by mafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include "Contact.hpp"

class PhoneBook {
private:
		Contact	list[8];
		int len;
		int num;

public:
		PhoneBook();
		~PhoneBook();
		void	add_to_list(Contact newcontact);
		void	get_num(int i) const;
		int	get_len(void) const;
		int	get_first(void) const;
		void	print_list(void)const;
};

#endif
