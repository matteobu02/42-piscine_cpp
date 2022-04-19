/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:06:00 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/16 17:40:33 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

//////////////////
// Constructors //
//////////////////

Cat::Cat(void) : Animal("cat")
{
	this->_brain = new Brain();

	std::cout << "Cat: a new cat is born. Parise him !!" << std::endl;

	return ;
}

Cat::Cat(Cat const & cpy) : Animal(cpy.getType())
{
	delete (this->_brain);
	this->_brain = new Brain(*cpy.getBrain());

	std::cout << "Cat: a cat just duplicated itself OMG" << std::endl;

	return ;
}

/////////////////
// Destructors // 
/////////////////

Cat::~Cat(void)
{
	delete (this->_brain);

	std::cout << "Cat: this is a sad day, a kitty just died" << std::endl;

	return ;
}

///////////////////////
// Getters / Setters //
///////////////////////

Brain	* Cat::getBrain(void) const
{
	return (this->_brain);
}

//////////////////////////
// Overloaded Operators //
//////////////////////////

Cat	& Cat::operator= (Cat const & rhs)
{
	delete (this->_brain);
	this->_brain = new Brain(*rhs.getBrain());

	this->setType(rhs.getType());
	return (*this);
}

//////////////////////
// Member Functions //
//////////////////////

void	Cat::makeSound(void) const
{
	std::cout << "Cat: MEEEEEEOOOWWWWWWWW" << std::endl;
	return ;
}
