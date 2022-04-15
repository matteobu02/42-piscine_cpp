/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:04:50 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/13 16:49:47 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>


//////////////////
// Constructors //
//////////////////

FragTrap::FragTrap(void) : ClapTrap()
{
	this->setHP(100);
	this->setEP(100);
	this->setAD(30);

	std::cout << "FragTrap: \"\" has been created" << std::endl;

	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->setHP(100);
	this->setEP(100);
	this->setAD(30);

	std::cout << "FragTrap: " << name << " has been created" << std::endl;

	return ;
}

FragTrap::FragTrap(FragTrap const & cpy)
{
	this->setName(cpy.getName());
	this->setHP(cpy.getHP());
	this->setEP(cpy.getEP());
	this->setAD(cpy.getAD());

	std::cout << "FragTrap: a copy of " << cpy.getName() << " has been created" << std::endl;

	return ;
}

/////////////////
// Destructors //
/////////////////

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap: " << this->getName() << " has been destroyed" << std::endl;
	return ;
}

//////////////////////////
// Overloaded Operators //
//////////////////////////

FragTrap	& FragTrap::operator= (FragTrap const & rhs)
{
	this->setName(rhs.getName());
	this->setHP(rhs.getHP());
	this->setEP(rhs.getEP());
	this->setAD(rhs.getAD());

	return (*this);
}

//////////////////////
// Member Functions //
//////////////////////

void	FragTrap::highFivesGuys(void) const
{
	std::cout << "FragTrap: " << this->getName() << " wants highfives everyone!!" << std::endl;
	return ;
}
