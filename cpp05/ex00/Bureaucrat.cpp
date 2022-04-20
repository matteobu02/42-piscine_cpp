/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:10:35 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/20 15:30:52 by mbucci           ###   ########.fr       */
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
	try
	{
		if (this->getGrade() > 150)
			throw (Bureaucrat::GradeTooHighException());
		else if (this->getGrade() < 1)
			throw (Bureaucrat::GradeTooLowException());
		else
			std::cout << *this << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << this->getName() << "-err: " << e.what() << std::endl;
	}
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

//////////////////////
// Member Functions //
//////////////////////

void	Bureaucrat::increment(void) throw()
{
	try
	{
		if (this->_grade == 1)
			throw (Bureaucrat::GradeTooHighException());
		else
			this->_grade -= 1;
	}
	catch (std::exception & e)
	{
		std::cerr << this->getName() << "-err: " << e.what() << std::endl;
	}
	return ;
}

void	Bureaucrat::decrement(void) throw()
{
	try
	{
		if (this->_grade == 150)
			throw (Bureaucrat::GradeTooLowException());
		else
			this->_grade += 1;
	}
	catch (std::exception & e)
	{
		std::cerr << this->getName() << "-err: " << e.what() << std::endl;
	}
	return ;
}

////////////////
// Exceptions //
////////////////

char const	* Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high and cannot be increased");
}

char const	* Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low and cannot be decreased");
}

/////////////////
/////////////////

std::ostream	& operator<< (std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return (o);
}
