/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 13:06:41 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/19 12:53:13 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

//////////////////
// Constructors //
//////////////////

MateriaSource::MateriaSource(void) : IMateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_sources[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & cpy) : IMateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (cpy._sources[i])
			this->_sources[i] = cpy._sources[i]->clone();
		else
			this->_sources[i] = NULL;
	}
	return ;
}

/////////////////
// Destructors //
/////////////////

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		if (this->_sources[i])
			delete (this->_sources[i]);
	return ;
}

//////////////////////////
// Overloaded Operators //
//////////////////////////

MateriaSource	& MateriaSource::operator= (MateriaSource const & rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
			if (this->_sources[i])
				delete (this->_sources[i]);
		for (int i = 0; i < 4; i++)
		{
			if (rhs._sources[i])
				this->_sources[i] = rhs._sources[i]->clone();
			else
				this->_sources[i] = NULL;
		}
	}
	return (*this);
}

//////////////////////
// Member Functions //
//////////////////////

void		MateriaSource::learnMateria(AMateria * m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_sources[i])
		{
			this->_sources[i] = m->clone();
			break ;
		}
	}
	return ;
}

AMateria	* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_sources[i])
			;
		else if (this->_sources[i]->getType() == type)
			return (this->_sources[i]->clone());
	}
	return (0);
}
