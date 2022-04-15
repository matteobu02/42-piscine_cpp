/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:36:26 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/15 12:45:30 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap	clap("clap2000");
	ScavTrap	scrav("scrav2000");
	FragTrap	frag("frag2000");

	clap.attack("scrav2000");
	scrav.takeDamage(clap.getAD());

	frag.attack("scrav2000");
	scrav.takeDamage(frag.getAD());

	scrav.beRepaired(frag.getAD() / 2);
	scrav.guardGate();

	frag.attack("clap2000");
	clap.takeDamage(frag.getAD());
	
	frag.highFivesGuys();

	return (0);
}
