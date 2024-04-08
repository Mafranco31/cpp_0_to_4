/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafranco <mafranco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:13:53 by mafranco          #+#    #+#             */
/*   Updated: 2024/04/08 18:18:39 by mafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class	HumanA {
private:
	Weapon	&weapon;
	std::string	name;

public:
	HumanA( std::string name, Weapon &weapon);
	~HumanA();
	void	attack( void );
};

#endif
