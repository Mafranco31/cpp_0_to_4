/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafranco <mafranco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:10:31 by mafranco          #+#    #+#             */
/*   Updated: 2024/04/11 19:29:41 by mafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed ( void ) num(0) {

	std::cout << "Default constructor called" << std::endl;

	return;
}

Fixed::Fixed ( const Fixed& f) num(f.num) {

	std::cout << "Copy constructor called" << std::endl;
	
	return;
}

~Fixed::Fixed ( void ) {

	std::cout << "Destructor called" << std::endl;

	return;
}

Fixed::& operator=( const Fixed& f) {


	std::cout << "Copy assignment operator called" << std::endl;

	return *this;
}
