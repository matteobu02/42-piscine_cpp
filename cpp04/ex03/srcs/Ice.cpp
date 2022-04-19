/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 12:47:35 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/17 15:13:29 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

//////////////////
// Constructors //
//////////////////

Ice::Ice(void) : AMateria("ice")
{
}

Ice::Ice(Ice const & cpy) : AMateria(cpy.getType())
{
}

/////////////////
// Destructors //
/////////////////

Ice::~Ice(void)
{
}

//////////////////////////
// Overloaded Operators //
//////////////////////////

Ice	& Ice::operator= (Ice const & rhs)
{
	(void)rhs;
	return (*this);
}

//////////////////////
// Member Functions //
//////////////////////

AMateria	* Ice::clone(void) const
{
	return (new Ice());
}

void		Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}
