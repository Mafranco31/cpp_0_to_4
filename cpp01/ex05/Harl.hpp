/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafranco <mafranco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:13:53 by mafranco          #+#    #+#             */
/*   Updated: 2024/04/08 18:18:39 by mafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class	Harl {
private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

public:
	Harl();
	~Harl();
	void complain( std::string level );
};

#endif
