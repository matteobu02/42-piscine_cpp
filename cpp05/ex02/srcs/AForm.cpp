/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:10:28 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/25 16:35:03 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <iostream>

/////////////////
// Constructor //
/////////////////

AForm::AForm(void) : _name("default"), _signed(false), _signGrade(75), _execGrade(50)
{
	std::cout << "AForm: " << *this << std::endl;
	return ;
}

AForm::AForm(std::string name, int signGrade, int execGrade)
	: _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	try
	{
		if (signGrade > 150 || execGrade > 150)
			throw (AForm::GradeTooHighException());
		else if (signGrade < 1 || execGrade < 1)
			throw (AForm::GradeTooLowException());
		else if (signGrade < execGrade)
			throw (AForm::GradeTooHighException());
		else
			std::cout << "AForm: " << *this << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << this->getName() << "-err: " << e.what() << std::endl;
	}
	return ;
}

AForm::AForm(AForm const &cpy)
	: _name(cpy._name), _signed(cpy._signed), _signGrade(cpy._signGrade), _execGrade(cpy._execGrade)
{
	std::cout << "AForm: " << *this << std::endl;
	return ;
}

////////////////
// Destructor //
////////////////

AForm::~AForm(void)
{
	std::cout << "AForm: destructor called." << std::endl;
	return ;
}

/////////////
// Getters //
/////////////

std::string	AForm::getName(void) const
{
	return (this->_name);
}

bool		AForm::getSigned(void) const
{
	return (this->_signed);
}

int			AForm::getSignGrade(void) const
{
	return (this->_signGrade);
}

int			AForm::getExecGrade(void) const
{
	return (this->_execGrade);
}

//////////////////////////
// Overloaded Operators //
//////////////////////////

AForm	&AForm::operator= (AForm const &rhs)
{
	(void)rhs;
	return (*this);
}

//////////////////////
// Member Functions //
//////////////////////

void	AForm::beSigned(Bureaucrat const &bu) throw()
{
	if (!this->_signed)
	{
		try
		{
			if (bu.getGrade() > this->getSignGrade())
				throw (AForm::GradeTooLowException());
			else
				this->_signed = true;
		}
		catch (std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return ;
}

////////////////
// Exceptions //
////////////////

char const	*AForm::GradeTooHighException::what(void) const throw()
{
	return ("The form's grade is too high.");
}

char const	*AForm::GradeTooLowException::what(void) const throw()
{
	return ("The form's grade is too low.");
}

char const	*AForm::FormNotSignedException::what(void) const throw()
{
	return ("Form not signed so not executable");
}

/////////////////////////
/////////////////////////

std::ostream	&operator<< (std::ostream &o, AForm const &rhs)
{
	o << "name: " << rhs.getName() << ", signed: " << rhs.getSigned();
	o << ", sign grade: " << rhs.getSignGrade() << ", execution grade: ";
	o << rhs.getExecGrade();

	return (o);
}
