/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 19:22:37 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/11 14:26:17 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScravTrap.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	ClapTrap	ct1("Augustin");
	ScravTrap	st2("Corentin");

	ct1.attack("Corentin");
	st2.takeDamage((unsigned int)ct1.getAD());
	st2.attack("Augustin");
	ct1.takeDamage((unsigned int)st2.getAD());

	ct1.attack("Corentin");
	st2.takeDamage((unsigned int)ct1.getAD());
	st2.beRepaired(5);

	return (0);
}
