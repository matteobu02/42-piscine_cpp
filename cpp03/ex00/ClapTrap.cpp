/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 22:17:28 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/10 22:39:31 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

//////////////////
// Constructors //
//////////////////

ClapTrap::ClapTrap(void) : _name(""), _hp(10), _ep(10), _ad(0)
{
	std::cout << "ClapTrap: \"\" has been created" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _ad(0)
{
	std::cout << "ClapTrap: " << name <<  " has been created" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & cpy)
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

ClapTrap::~ClapTrap(void)
{
	std::cout << this->getName() << "has been destroyed" << std::endl;
	return ;
}

///////////////////////
// Getters / Setters //
///////////////////////

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

int			ClapTrap::getHP(void) const
{
	return (this->_hp);
}

int			ClapTrap::getEP(void) const
{
	return (this->_ep);
}

int			ClapTrap::getAD(void) const
{
	return (this->_ad);
}


void		ClapTrap::setName(std::string name)
{
	this->_name = name;
	return ;
}

void		ClapTrap::setHP(int amount)
{
	this->_hp = amount;
	return ;
}

void		ClapTrap::setEP(int amount)
{
	this->_ep = amount;
	return ;
}

void		ClapTrap::setAD(int amount)
{
	this->_ad = amount;
	return ;
}

//////////////////////////
// Overloaded Operators //
//////////////////////////

ClapTrap	& ClapTrap::operator= (ClapTrap const & rhs)
{
	this->_name = rhs.getName();
	this->_hp = rhs.getHP();
	this->_ep = rhs.getEP();
	this->_ad = rhs.getAD();
	
	return (*this);

}

//////////////////////
// Member Functions //
//////////////////////

void	ClapTrap::attack(std::string const & target)
{
	if (this->getEP())
	{
		this->setEP(this->getEP() - 1);
		std::cout << "ClapTrap " << this->getName() << " attacks" << target;
		std::cout << ", causing " << this->getAD() << " points of damage!" << std::endl;
	}
	else
		std::cout << this->getName() << " doesn't have any ep left..." << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHP() <= 0)
	{
		std::cout << "ClapTrap " << this->getName() << " is already dead" << std::endl;
		return ;
	}
	
	this->setHP(this->getHP() - amount);
	
	if (this->getHP() <= 0)
		std::cout << "ClapTrap " << this->getName() << " just died" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->getName() << " is now at ";
		std::cout << this->_hp << " hp..." << std::endl;

	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getEP())
	{
		this->setHP(this->getHP() + amount);
		this->setEP(this->getEP() - 1);
		std::cout << "ClapTrap " << this->getName() << " is now at " << this->getHP();
		std::cout << " hp and has " << this->getEP() << "ep left" << std::endl;
	}
	else
		std::cout << this->getName() << " doesn't have any ep left..." << std::endl;
	return ;
}
