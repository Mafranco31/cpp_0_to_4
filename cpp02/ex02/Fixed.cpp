/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafranco <mafranco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:10:31 by mafranco          #+#    #+#             */
/*   Updated: 2024/04/13 13:21:57 by mafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*	------------	Constructors	----------	*/

Fixed::Fixed( void ) : _num(0) {

	//std::cout << "Default constructor called" << std::endl;

	return;
}

Fixed::Fixed( const Fixed& f) {

	//std::cout << "Copy constructor called" << std::endl;
	
	*this = f;

	return;
}

Fixed::Fixed( const int nb ) : _num(nb << _fp) { 

	//std::cout << "Int constructor called" << std::endl;

	return ;
}

Fixed::Fixed( const float fl ) {
	
	//std::cout << "Float constructor called" << std::endl;

	_num = roundf(fl * (1 << _fp));
}

Fixed::~Fixed ( void ) {

	//std::cout << "Destructor called" << std::endl;

	return;
}


/*	------------	Operator overloading	----------	*/

bool	Fixed::operator> ( const Fixed& f) {
	return this->getRawBits() > f.getRawBits() ;
}

bool	Fixed::operator< ( const Fixed& f) {
	return this->getRawBits() < f.getRawBits() ;
}

bool	Fixed::operator>= ( const Fixed& f) {
	return this->getRawBits() >= f.getRawBits() ;
}

bool	Fixed::operator<= ( const Fixed& f) {
	return this->getRawBits() <= f.getRawBits() ;
}

bool	Fixed::operator== ( const Fixed& f) {
	return this->getRawBits() == f.getRawBits() ;
}

bool	Fixed::operator!= ( const Fixed& f) {
	return this->getRawBits() != f.getRawBits() ;
}

Fixed	Fixed::operator+ ( const Fixed& f) {
	return Fixed ( this->toFloat() + f.toFloat() );
}

Fixed	Fixed::operator- ( const Fixed& f) {
	return Fixed ( this->toFloat() - f.toFloat() );
}

Fixed	Fixed::operator* ( const Fixed& f) {
	return Fixed ( this->toFloat() * f.toFloat() );
}

Fixed	Fixed::operator/ ( const Fixed& f) {
	return Fixed ( this->toFloat() / f.toFloat() );
}

Fixed&	Fixed::operator++ ( void ) {
	++this->_num;
	return *this;
}

Fixed&	Fixed::operator-- ( void ) {
	--this->_num;
	return *this;
}

Fixed	Fixed::operator++ ( int ) {
	Fixed	temp( *this );
	this->_num = this->_num + 1;
	return temp;
}

Fixed	Fixed::operator-- ( int ) {
	Fixed	temp( *this );
	this->_num = this->_num + 1;
	return temp;
}

Fixed&	Fixed::operator=( const Fixed& f) {
	//std::cout << "Copy assignment operator called" << std::endl;
	this->_num = f.getRawBits();
	return *this;
}

std::ostream& operator<<( std::ostream& out, Fixed const& Fixed) {
	out << Fixed.toFloat();
	return out;
}

/*	------------	Functions	----------	*/

Fixed&	Fixed::min ( Fixed& f1, Fixed& f2 ){
	if (f1.getRawBits() < f2.getRawBits())
		return f1;
	return f2;
}

const Fixed&	Fixed::min ( const Fixed& f1, const Fixed& f2 ){
	if (f1.getRawBits() < f2.getRawBits())
		return f1;
	return f2;
}

Fixed&	Fixed::max ( Fixed& f1, Fixed& f2 ){
	if (f1.getRawBits() > f2.getRawBits())
		return f1;
	return f2;
}

const Fixed&	Fixed::max ( const Fixed& f1, const Fixed& f2 ){
	if (f1.getRawBits() > f2.getRawBits())
		return f1;
	return f2;
}

float	Fixed::toFloat( void ) const {
	return static_cast<float>(this->_num) / (1 << this->_fp);
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
