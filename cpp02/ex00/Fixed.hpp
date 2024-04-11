/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafranco <mafranco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:10:24 by mafranco          #+#    #+#             */
/*   Updated: 2024/04/11 20:38:37 by mafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class	Fixed {
	private:
		int	num;
		static const int	cs_num = 8;

	public:
		Fixed();
		Fixed( const Fixed& f);
		~Fixed();
		Fixed& operator= ( const Fixed& f);
		int	getRawBits( void ) const;
		void	setRawBits( int const raw );

};

#endif
