/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 22:06:03 by mbucci            #+#    #+#             */
/*   Updated: 2022/03/16 23:03:58 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie	*zombieHorde(int N, std::string);

int	main(void)
{
	Zombie	*horde = zombieHorde(5, "Colbert");
	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete [] (horde);
	return (0);
}
