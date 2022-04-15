/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:08:09 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/15 12:40:49 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

//////////////////
// Constructors //
//////////////////

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
	
	std::cout << "ScavTrap: \"\" has been created." << std::endl;

	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;

	std::cout << "ScavTrap: " << this->_name << " has been created." << std::endl;

	return ;
}

ScavTrap::ScavTrap(ScavTrap const & cpy)
{
	this->_name = cpy.getName();
	this->_hp = cpy.getHP();
	this->_ep = cpy.getEP();
	this->_ad = cpy.getAD();
	
	std::cout << "ClapTrap: a new " << cpy.getName() << " has been created" << std::endl;
	return ;
}

/////////////////
// Destructors //
/////////////////

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap: " << this->getName() << " has been destroyed." << std::endl;
	return ;
}

//////////////////////////
// Overloaded Operators //
//////////////////////////

ScavTrap	& ScavTrap::operator= (ScavTrap const & cpy)
{
	this->setName(cpy.getName());
	this->setHP(cpy.getHP());
	this->setEP(cpy.getEP());
	this->setAD(cpy.getAD());
	
	return (*this);
}

//////////////////////
// Member Functions //
//////////////////////

void	ScavTrap::attack(std::string const & target)
{
	if (this->getEP())
	{
		this->setEP(this->getEP() - 1);
		std::cout << "ScavTrap: " << this->getName() << " attacks " << target;
		std::cout << ", causing " << this->getAD() << " points of damage!" << std::endl;
	}
	else
		std::cout << this->getName() << " doesn't have any ep left..." << std::endl;
	return ;
}

void	ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap: entered \"Gate Keeper\" mode." << std::endl;
	return ;
}
