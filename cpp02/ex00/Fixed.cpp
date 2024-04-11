/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafranco <mafranco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:10:31 by mafranco          #+#    #+#             */
/*   Updated: 2024/04/11 20:38:36 by mafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : num(0) {

	std::cout << "Default constructor called" << std::endl;

	return;
}

Fixed& Fixed::operator=( const Fixed& f) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->num = f.getRawBits();
	return *this;
}

Fixed::Fixed( const Fixed& f) {

	std::cout << "Copy constructor called" << std::endl;
	
	*this = f;

	return;
}

Fixed::~Fixed ( void ) {

	std::cout << "Destructor called" << std::endl;

	return;
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return ( this->num );
}

void	Fixed::setRawBits( int const row ) {
	this->num = row;
	std::cout << "setRawBits member function called" << std::endl;
}
