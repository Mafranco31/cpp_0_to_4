/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafranco <mafranco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:42:07 by mafranco          #+#    #+#             */
/*   Updated: 2024/04/08 18:21:25 by mafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class	HumanB {
private:
	Weapon	*weapon;
	std::string	name;

public:
	HumanB( std::string name);
	~HumanB();
	void	attack( void );
	void	setWeapon( Weapon &weapon);
};

#endif
