/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:06:00 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/15 21:03:21 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

//////////////////
// Constructors //
//////////////////

Cat::Cat(void) : Animal("cat")
{
	std::cout << "Cat: a new cat is born. Parise him !!" << std::endl;
	return ;
}

Cat::Cat(Cat const & cpy) : Animal(cpy.getType())
{
	std::cout << "Cat: a cat just duplicated itself OMG" << std::endl;
	return ;
}

/////////////////
// Destructors // 
/////////////////

Cat::~Cat(void)
{
	std::cout << "Cat: this is a sad day, a kitty just died" << std::endl;
	return ;
}

//////////////////////////
// Overloaded Operators //
//////////////////////////

Cat	& Cat::operator= (Cat const & rhs)
{
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
