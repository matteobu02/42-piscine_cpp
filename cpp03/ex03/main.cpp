/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:36:26 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/15 13:05:46 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap	ct("vieux");
	ScavTrap	st("papa");
	FragTrap	ft("maman");
	DiamondTrap	dt("baby");

	std::cout << std::endl;
	dt.whoAmI();
	
	ct.attack("papa");
	st.takeDamage(ct.getAD());

	ft.attack("papa");
	st.takeDamage(ft.getAD());

	st.guardGate();
	st.attack("vieux");

	ft.highFivesGuys();

	dt.attack("maman");
	ft.takeDamage(dt.getAD());
	std::cout << std::endl;
	return (0);
}
