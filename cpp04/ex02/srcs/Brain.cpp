/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 23:40:08 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/16 17:17:38 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

//////////////////
// Constructors //
//////////////////

Brain::Brain(void)
{
	std::cout << "Cerveau fonctionnel et prêt à l'utilisation" << std::endl;
	return ;
}

Brain::Brain(Brain const & cpy)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = cpy.getIdeas(i);

	std::cout << "Synchronisation cerveaux terminée,";
	std::cout << "données copiées sur ce cerveau" << std::endl;

	return ;
}

/////////////////
// Destructors //
/////////////////

Brain::~Brain(void)
{
	std::cout << "le cerveau a été réduit en bouillie" << std::endl;
	return ;
}

///////////////////////
// Getters / Setters //
///////////////////////

std::string	 Brain::getIdeas(int index) const
{
	return (this->_ideas[index]);
}

//////////////////////////
// Overloaded Operators //
//////////////////////////

Brain	& Brain::operator= (Brain const & rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs.getIdeas(i);
	}
	return (*this);
}
