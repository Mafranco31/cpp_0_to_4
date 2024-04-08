/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafranco <mafranco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:13:40 by mafranco          #+#    #+#             */
/*   Updated: 2024/04/08 18:21:00 by mafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : weapon(weapon), name(name) { return; }

HumanA::~HumanA() {return;}

void	HumanA::attack( void ) {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
