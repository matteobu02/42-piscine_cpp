/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:21:18 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/16 18:53:02 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

//////////////////
// Constructors //
//////////////////

Dog::Dog(void) : AAnimal("dog")
{
	this->_brain = new Brain();

	std::cout << "Dog: a strange dog strated following me wtf.." << std::endl;

	return ;
}

Dog::Dog(Dog const & cpy) : AAnimal(cpy.getType())
{
	this->_brain = new Brain();

	std::cout << "Dog: mmmh this new dog is very similar to that other one.." << std::endl;

	return ;
}

/////////////////
// Destructors //
/////////////////

Dog::~Dog(void)
{
	delete (this->_brain);

	std::cout << "Dog: \"the man lost his best friend..\"" << std::endl;

	return ;
}

///////////////////////
// Getters / Setters //
///////////////////////

Brain	* Dog::getBrain(void) const
{
	return (this->_brain);
}

//////////////////////////
// Overloaded Operators //
//////////////////////////

Dog	& Dog::operator= (Dog const & rhs)
{
	this->setType(rhs.getType());
	return (*this);
}

//////////////////////
// Member Functions //
//////////////////////

void	Dog::makeSound(void) const
{
	std::cout << "Dog: GRRRRRRRGRGRGRRRRR" << std::endl;
	return ;
}
