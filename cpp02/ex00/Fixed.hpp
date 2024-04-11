/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafranco <mafranco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:10:24 by mafranco          #+#    #+#             */
/*   Updated: 2024/04/11 19:29:42 by mafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class	Fixed {
	private:
		int	num;
		const static int	cs_num = 8;

	public:
		Fixed();
		Fixed( Fixed& f);
		~Fixed();
		int	getRawBits( void ) const;
		void	setRawBits( int const raw );

}

#endif
