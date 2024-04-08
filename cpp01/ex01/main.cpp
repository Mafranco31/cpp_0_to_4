/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafranco <mafranco@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:31:53 by mafranco          #+#    #+#             */
/*   Updated: 2024/04/08 16:16:20 by mafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

int	main(void)
{
	Zombie	*z;

	z = zombieHorde(10, "pablo");
	for (int i = 0;i < 10;i++){
		z[i].announce();
	}
	delete[] z;
	return (0);
}
