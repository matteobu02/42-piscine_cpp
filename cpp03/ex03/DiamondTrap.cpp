/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 14:18:49 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/15 13:01:07 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

//////////////////
// Constructors //
//////////////////

DiamondTrap::DiamondTrap(void)
	: ClapTrap("default_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap: \"default\" has been created" << std::endl;

	return ;
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
	this->_name = name;
	std::cout << "DiamondTrap: " << this->getName() << " has been created" << std::endl;

	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & cpy)
{
	*this = cpy;

	std::cout << "DiamondTrap: a copy of " << cpy.getName() << " has been created" << std::endl;
	return ;
}

////////////////
// Destructors//
////////////////

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap: " << this->getName() << " has been destroyed" << std::endl;
	return ;
}

///////////////////////
// Getters / Setters //
///////////////////////

std::string	DiamondTrap::getName(void) const
{
	return (this->_name);
}

//////////////////////////
// Overloaded Functions //
//////////////////////////

DiamondTrap	& DiamondTrap::operator= (DiamondTrap const & rhs)
{
	this->setName(rhs.getName());
	this->ClapTrap::setName(rhs.ClapTrap::getName());
	this->setHP(rhs.getHP());
	this->setEP(rhs.getEP());
	this->setAD(rhs.getAD());

	std::cout << "DiamondTrap: " << rhs.getName() << " has been copyied" << std::endl;

	return (*this);
}

//////////////////////
// Member Functions // 
//////////////////////

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "DiamondTrap: hi, my name is " << this->getName();
	std::cout << " but people also call me " << this->ClapTrap::getName() << std::endl;
	return ;
}
