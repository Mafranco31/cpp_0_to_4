/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafranco <mafranco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:33:32 by mafranco          #+#    #+#             */
/*   Updated: 2024/04/08 15:55:23 by mafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {

private:
	std::string	name;

public:
	Zombie(std::string name);
	~Zombie();
	void	announce( void );

};

Zombie* newZombie( std::string name );

void	randomChump( std::string name );

#endif
