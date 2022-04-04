/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:25:35 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/04 15:06:58 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	std::cout << "simple zombie:" << std::endl;
	Zombie	z1("Albert");
	z1.announce();

	std::cout << std::endl << "zoombie sur le tas:" << std::endl;
	Zombie	*z2 = newZombie("Gilbert");
	z2->announce();

	std::cout << std::endl << "randomChump:" << std::endl;
	randomChump("Robert");

	delete (z2);
	return (0);
}
