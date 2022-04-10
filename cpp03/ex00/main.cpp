/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 19:22:37 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/10 22:36:35 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	ClapTrap	ct1("Augustin");
	ClapTrap	ct2("Corentin");

	ct1.attack("Corentin");
	ct2.takeDamage((unsigned int)ct1.getAD());
	ct2.attack("Augustin");
	ct1.takeDamage((unsigned int)ct2.getAD());

	ct1.attack("Corentin");
	ct2.takeDamage((unsigned int)ct1.getAD());
	ct2.beRepaired(5);

	return (0);
}
