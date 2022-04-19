/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:41:36 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/16 19:13:27 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

//////////////////
// Constructors //
//////////////////

AAnimal::AAnimal(void) : _type("undefined")
{
	std::cout << "AAnimal: un nouvel animal de type indéfini est arrivé" << std::endl;
	return ;
}

AAnimal::AAnimal(std::string const & type) : _type(type)
{
	std::cout << "AAnimal: un nouveau " << type << " est arrivé" << std::endl;
	return ;
}

AAnimal::AAnimal(AAnimal const & cpy) : _type(cpy.getType())
{
	std::cout << "AAnimal: un " << cpy.getType() << " vient d'etre copié" << std::endl;
	return ;
}

/////////////////
// Destructors //
/////////////////

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal: notre cher animal de type \"" << this->getType() << "\" est mort :((" << std::endl;
	return ;
}

///////////////////////
// Getters / Setters //
///////////////////////

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}

void		AAnimal::setType(std::string const & type)
{
	this->_type = type;
	return ;
}

//////////////////////////
// Overloaded Operators //
//////////////////////////

AAnimal	& AAnimal::operator= (AAnimal const & rhs)
{
	this->setType(rhs.getType());
	return (*this);
}
