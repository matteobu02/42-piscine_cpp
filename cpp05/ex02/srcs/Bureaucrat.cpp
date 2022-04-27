/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:10:35 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/27 14:52:53 by mbucci           ###   ########.fr       */
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
	if (this->getGrade() > 150)
		throw (Bureaucrat::GradeTooHighException());
	else if (this->getGrade() < 1)
		throw (Bureaucrat::GradeTooLowException());
	else
		std::cout << *this << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &cpy) : _name(cpy._name), _grade(cpy._grade)
{
	std::cout << *this << std::endl;
	return ;
}

/////////////////
// Destructors //
/////////////////

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat: " << this->_name << " was fired." << std::endl;
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

/////////////////////////
// Overloaded Operator //
/////////////////////////

Bureaucrat	&Bureaucrat::operator= (Bureaucrat const &rhs)
{
	this->_name = rhs._name;
	this->_grade = rhs._grade;

	return (*this);
}

//////////////////////
// Member Functions //
//////////////////////

void	Bureaucrat::increment(void)
{
	if (this->_grade == 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->_grade -= 1;
	return ;
}

void	Bureaucrat::decrement(void)
{
	if (this->_grade == 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->_grade += 1;
	return ;
}

void	Bureaucrat::signForm(AForm &form) const
{
	if (form.getSigned())
	{
		std::cout << this->_name << " couldn't sign " << form.getName();
		std::cout << " because it's already been signed." << std::endl;
	}
	else
	{
		if (this->_grade <= form.getSignGrade())
		{
			form.beSigned(*this);
			std::cout << this->_name << " signed " << form.getName() << std::endl;
		}
		else
		{
			std::cout << this->_name << " couldn't sign " << form.getName();
			std::cout << " because they don't have the appropriate grade" << std::endl;
		}
	}
	return ;
}

void	Bureaucrat::executeForm(AForm const &form) const
{
	if (this->_grade <= form.getExecGrade())
	{
		if (form.getSigned())
		{
			form.execute(*this);
			std::cout << this->_name << " executed " << form.getName() << std::endl;
		}
		else
			throw (AForm::FormNotSignedException());
	}
	else
		throw (Bureaucrat::GradeTooLowException());

}

////////////////
// Exceptions //
////////////////

char const	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high and cannot be increased");
}

char const	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low and cannot be decreased");
}

/////////////////
/////////////////

std::ostream	&operator<< (std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return (o);
}
