/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 12:31:27 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/19 12:46:21 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

//////////////////
// Constructors //
//////////////////

Cure::Cure(void) : AMateria("cure")
{
}

Cure::Cure(Cure const & cpy) : AMateria(cpy.getType())
{
}

/////////////////
// Destructors //
/////////////////

Cure::~Cure(void)
{
}

//////////////////////////
// Overloaded Operators //
//////////////////////////

Cure	& Cure::operator= (Cure const & rhs)
{
	(void)rhs;
	return (*this);
}

//////////////////////
// Member Functions //
//////////////////////

AMateria	* Cure::clone(void) const
{
	return (new Cure());
}

void		Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}
