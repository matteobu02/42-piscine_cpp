/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 21:18:53 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/15 21:36:33 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

//////////////////
// Constructors //
//////////////////

WrongAnimal::WrongAnimal(void) : _type("undefined")
{
	std::cout << "WrongAnimal: un nouveau monstre de type indéfini est arrivé" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string const & type) : _type(type)
{
	std::cout << "WrongAnimal: un nouveau " << type << " est arrivé" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & cpy) : _type(cpy.getType())
{
	std::cout << "WrongAnimal: un " << cpy.getType() << " vient d'etre copié" << std::endl;
	return ;
}

/////////////////
// Destructors //
/////////////////

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal: notre cher animal de type \"" << this->getType() << "\" est mort :((" << std::endl;
	return ;
}

///////////////////////
// Getters / Setters //
///////////////////////

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

void		WrongAnimal::setType(std::string const & type)
{
	this->_type = type;
	return ;
}

//////////////////////////
// Overloaded Operators //
//////////////////////////

WrongAnimal	& WrongAnimal::operator= (WrongAnimal const & rhs)
{
	this->setType(rhs.getType());
	return (*this);
}

//////////////////////
// Member Functions //
//////////////////////

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal: ziiiiiiiiii" << std::endl;
	return ;
}
