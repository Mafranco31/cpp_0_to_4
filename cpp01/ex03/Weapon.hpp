/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafranco <mafranco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:08:34 by mafranco          #+#    #+#             */
/*   Updated: 2024/04/08 18:16:19 by mafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class	Weapon {

private:
	std::string type;

public:
	Weapon( std::string type );
	~Weapon();
	const std::string &getType( void ) const;
	void	setType( std::string type);
};

#endif
