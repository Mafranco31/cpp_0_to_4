/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafranco <mafranco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:10:24 by mafranco          #+#    #+#             */
/*   Updated: 2024/04/13 13:21:58 by mafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class	Fixed {
	private:
		int	_num;
		static const int	_fp = 8;

	public:
		Fixed();
		Fixed( const Fixed& f);
		Fixed( const int num);
		Fixed( const float fl);
		~Fixed();

		Fixed&	operator= ( const Fixed& f);

		bool	operator> ( const Fixed& f);
		bool	operator< ( const Fixed& f);
		bool	operator>= ( const Fixed& f);
		bool	operator<= ( const Fixed& f);
		bool	operator== ( const Fixed& f);
		bool	operator!= ( const Fixed& f);

		Fixed	operator+ ( const Fixed& f);
		Fixed	operator- ( const Fixed& f);
		Fixed	operator* ( const Fixed& f);
		Fixed	operator/ ( const Fixed& f);

		Fixed&	operator++( void );
		Fixed	operator++( int );
		Fixed&	operator--( void );
		Fixed	operator--( int );

		static Fixed&	min ( Fixed& f1, Fixed& f2 );
		static const Fixed&	min ( const Fixed& f1, const Fixed& f2 );
		static Fixed&	max ( Fixed& f1, Fixed& f2 );
		static const Fixed&	max ( const Fixed& f1, const Fixed& f2 );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

};

std::ostream & operator<<( std::ostream & o, Fixed const & i);

#endif
