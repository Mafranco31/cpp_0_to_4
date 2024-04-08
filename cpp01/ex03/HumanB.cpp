/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafranco <mafranco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:45:29 by mafranco          #+#    #+#             */
/*   Updated: 2024/04/08 18:21:15 by mafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : name(name) {
	this->weapon = nullptr;
	return;
}

HumanB::~HumanB( void ) { return; }

void	HumanB::attack( void ) {
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon ) {
	this->weapon = &weapon;
}
