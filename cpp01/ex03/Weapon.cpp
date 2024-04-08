/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafranco <mafranco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:57:00 by mafranco          #+#    #+#             */
/*   Updated: 2024/04/08 18:16:32 by mafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : type(type) { return; }

Weapon::~Weapon( void ) { return; }

const std::string	&Weapon::getType( void ) const { return (this->type); }

void	Weapon::setType( const std::string newtype ) { type = newtype; }
