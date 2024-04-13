/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafranco <mafranco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:10:31 by mafranco          #+#    #+#             */
/*   Updated: 2024/04/13 13:20:59 by mafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*	------------	Constructors	----------	*/

Fixed::Fixed( void ) : _num(0) {

	std::cout << "Default constructor called" << std::endl;

	return;
}

Fixed::Fixed( const Fixed& f) {

	std::cout << "Copy constructor called" << std::endl;
	
	*this = f;

	return;
}

Fixed::Fixed( const int nb ) : _num(nb << _fp) { 

	std::cout << "Int constructor called" << std::endl;

	return ;
}

Fixed::Fixed( const float fl ) {
	
	std::cout << "Float constructor called" << std::endl;

	_num = roundf(fl * (1 << _fp));
}

Fixed::~Fixed ( void ) {

	std::cout << "Destructor called" << std::endl;

	return;
}


/*	------------	Operator overloading	----------	*/

Fixed& Fixed::operator=( const Fixed& f) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_num = f.getRawBits();
	return *this;
}

std::ostream& operator<<( std::ostream& out, Fixed const& Fixed) {
	out << Fixed.toFloat();
	return out;
}

/*	------------	Functions	----------	*/

float	Fixed::toFloat( void ) const {
	return float(this->getRawBits()) / (1 << this->_fp);
}

int	Fixed::toInt( void ) const {
	return this->_num >> this->_fp;
}

int	Fixed::getRawBits( void ) const {
	return this->_num ;
}

void	Fixed::setRawBits( int const row ) {
	this->_num = row;
}
