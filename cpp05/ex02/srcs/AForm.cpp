/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:10:28 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/27 14:36:05 by mbucci           ###   ########.fr       */
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
	if (signGrade > 150 || execGrade > 150)
		throw (AForm::GradeTooHighException());
	else if (signGrade < 1 || execGrade < 1)
		throw (AForm::GradeTooLowException());
	else if (signGrade < execGrade)
		throw (AForm::GradeTooHighException());
	else
		std::cout << "AForm: " << *this << std::endl;
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
	if (&rhs != this)
		this->_signed = rhs._signed;

	return (*this);
}

//////////////////////
// Member Functions //
//////////////////////

void	AForm::beSigned(Bureaucrat const &bu)
{
	if (!this->_signed)
	{
		if (bu.getGrade() <= this->_signGrade)
			this->_signed = true;
		else
			throw (AForm::GradeTooLowException());
	}
	else
		throw (AForm::FormAlreadySignedException());
	return ;
}

void	AForm::execute(Bureaucrat const &executor) const
{
	if (!this->_signed)
		throw (AForm::FormNotSignedException());
	else if (this->_execGrade < executor.getGrade())
		throw (AForm::GradeTooLowException());
	else
		this->doTheThing();
	return ;
}

////////////////
// Exceptions //
////////////////

char const	*AForm::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high for this form.");
}

char const	*AForm::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low for this form.");
}

char const	*AForm::FormAlreadySignedException::what(void) const throw()
{
	return ("Form already signed: it cannot be signed again.");
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
