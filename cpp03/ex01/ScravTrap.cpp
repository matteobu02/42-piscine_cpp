/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:08:09 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/11 13:29:28 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"
#include <iostream>

//////////////////
// Constructors //
//////////////////

ScravTrap::ScravTrap(void) : ClapTrap()
{
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
	
	std::cout << "ScravTrap: \"\" has been created." << std::endl;

	return ;
}

ScravTrap::ScravTrap(std::string name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;

	std::cout << "ScravTrap: " << this->_name << " has been created." << std::endl;

	return ;
}

ScravTrap::ScravTrap(ScravTrap const & cpy)
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

ScravTrap::~ScravTrap(void)
{
	std::cout << "ScravTrap: " << this->getName() << " was just destroyed." << std::endl;
	return ;
}

//////////////////////////
// Overloaded Operators //
//////////////////////////

ScravTrap	& ScravTrap::operator= (ScravTrap const & cpy)
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

void	ScravTrap::attack(std::string const & target)
{
	if (this->getEP())
	{
		this->setEP(this->getEP() - 1);
		std::cout << "ScravTrap: " << this->getName() << " attacks " << target;
		std::cout << ", causing " << this->getAD() << " points of damage!" << std::endl;
	}
	else
		std::cout << this->getName() << " doesn't have any ep left..." << std::endl;
	return ;
}

void	ScravTrap::guardGate(void) const
{
	std::cout << "ScravTrap: entered \"Gate Keeper\" mode." << std::endl;
	return ;
}
