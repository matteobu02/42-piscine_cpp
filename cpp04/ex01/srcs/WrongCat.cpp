/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 21:31:22 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/15 21:37:40 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

//////////////////
// Constructors //
//////////////////

WrongCat::WrongCat(void) : WrongAnimal("cat")
{
	std::cout << "WrongCat: a new weird cat is born. Parise him !!" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const & cpy) : WrongAnimal(cpy.getType())
{
	std::cout << "WrongCat: a cat just duplicated itself OMG THAT'S SO WEIRD" << std::endl;
	return ;
}

/////////////////
// Destructors // 
/////////////////

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat: this is a sad day, a kitty just died" << std::endl;
	return ;
}

//////////////////////////
// Overloaded Operators //
//////////////////////////

WrongCat	& WrongCat::operator= (WrongCat const & rhs)
{
	this->setType(rhs.getType());
	return (*this);
}

//////////////////////
// Member Functions //
//////////////////////

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat: WWWWWWWOOOOOOOOOEEEEEEMM" << std::endl;
	return ;
}
