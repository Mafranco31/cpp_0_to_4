/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafranco <mafranco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:33:09 by mafranco          #+#    #+#             */
/*   Updated: 2024/04/08 16:18:52 by mafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {return;}

Zombie::Zombie() {return;}

Zombie::~Zombie(void) {
	std::cout << "Destroyer called for zombie : " << this->name << std::endl;
	return;
}

void	Zombie::set_name( std::string name ) {this->name = name;}

void	Zombie::announce( void ) const {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}
