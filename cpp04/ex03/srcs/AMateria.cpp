/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 01:43:33 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/19 15:26:46 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

//////////////////
// Constructors //
//////////////////

AMateria::AMateria(void) : _type("abstract")
{
}

AMateria::AMateria(std::string const & type) : _type(type)
{
}

AMateria::AMateria(AMateria const & cpy) : _type(cpy.getType())
{
}

/////////////////
// Destructors //
/////////////////

AMateria::~AMateria(void)
{
}

///////////////////////
// Getters / Setters //
///////////////////////

std::string const	& AMateria::getType(void) const
{
	return (this->_type);
}

//////////////////////////
// Overloaded Operators //
//////////////////////////

AMateria	& AMateria::operator= (AMateria const & rhs)
{
	(void)rhs;
	return (*this);
}

//////////////////////
// Member Functions //
//////////////////////

void		AMateria::use(ICharacter & target)
{
	(void)target;
	return ;
}
