/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:41:36 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/15 20:59:02 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

//////////////////
// Constructors //
//////////////////

Animal::Animal(void) : _type("undefined")
{
	std::cout << "Animal: un nouvel animal de type indéfini est arrivé" << std::endl;
	return ;
}

Animal::Animal(std::string const & type) : _type(type)
{
	std::cout << "Animal: un nouveau " << type << " est arrivé" << std::endl;
	return ;
}

Animal::Animal(Animal const & cpy) : _type(cpy.getType())
{
	std::cout << "Animal: un " << cpy.getType() << " vient d'etre copié" << std::endl;
	return ;
}

/////////////////
// Destructors //
/////////////////

Animal::~Animal(void)
{
	std::cout << "Animal: notre cher animal de type \"" << this->getType() << "\" est mort :((" << std::endl;
	return ;
}

///////////////////////
// Getters / Setters //
///////////////////////

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void		Animal::setType(std::string const & type)
{
	this->_type = type;
	return ;
}

//////////////////////////
// Overloaded Operators //
//////////////////////////

Animal	& Animal::operator= (Animal const & rhs)
{
	this->setType(rhs.getType());
	return (*this);
}

//////////////////////
// Member Functions //
//////////////////////

void	Animal::makeSound(void) const
{
	std::cout << "Animal: ..............................." << std::endl;
	return ;
}
