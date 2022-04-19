/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:10:35 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/19 16:14:11 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

//////////////////
// Constructors //
//////////////////

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150)
{
	std::cout << *this << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << *this << std::endl;
	return ;
}

///////////////////////
// Getters / Setters //
///////////////////////

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int			Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

////////////////
// Exceptions //
////////////////

//////////////////////
// Member Functions //
//////////////////////

void	Bureaucrat::increment(void) throw()
{
	try
	{
		if (this->_grade - 1 < 1)
			throw (Bureaucrat::GradeTooHighException);
	}
	return ;
}

void	Bureaucrat::decrement(void)
{
	this->_grade++;
	return ;
}
