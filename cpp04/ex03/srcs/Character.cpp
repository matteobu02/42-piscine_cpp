/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 01:57:04 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/19 12:51:58 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

//////////////////
// Constructors //
//////////////////

Character::Character(void) : _name("default")
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;

	return ;
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;

	return ;
}

Character::Character(Character const & cpy)
{
	for (int i = 0; i < 4; i++)
	{
		if (cpy._inventory[i])
			this->_inventory[i] = cpy._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	return ;
}

/////////////////
// Destructors //
/////////////////

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete (this->_inventory[i]);
	return ;
}

///////////////////////
// Getters / Setters //
///////////////////////

std::string const	& Character::getName(void) const
{
	return (this->_name);
}

//////////////////////////
// Overloaded Operators //
//////////////////////////

Character	& Character::operator= (Character const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();

		for (int i = 0; i < 4; i++)
			if (this->_inventory[i])
				delete (this->_inventory[i]);

		for (int i = 0; i < 4; i++)
		{
			if (rhs._inventory[i])
				this->_inventory[i] = rhs._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return (*this);
}

//////////////////////
// Member Functions //
//////////////////////

void	Character::equip(AMateria * m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			break ;
		}
	}
	return ;
}

void	Character::unequip(int idx)
{
	if (idx < 4 && idx > -1 && this->_inventory[idx])
		this->_inventory[idx] = NULL;
	return ;
}

void	Character::use(int idx, ICharacter & target)
{
	if (idx < 4 && idx > -1 && this->_inventory[idx])
	{
		this->_inventory[idx]->use(target);
		return ;
	}

	return ;
}
