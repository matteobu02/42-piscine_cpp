/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:10:28 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/26 17:11:46 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

/////////////////
// Constructor //
/////////////////

Form::Form(void) : _name("default"), _signed(false), _signGrade(75), _execGrade(50)
{
}

Form::Form(std::string name, int signGrade, int execGrade)
	: _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	try
	{
		if (signGrade > 150 || execGrade > 150)
			throw (Form::GradeTooHighException());
		else if (signGrade < 1 || execGrade < 1)
			throw (Form::GradeTooLowException());
		else if (signGrade < execGrade)
			throw (Form::GradeTooHighException());
		else
			std::cout << *this << std::endl;
	}
	return ;
}

Form::Form(Form const &cpy)
	: _name(cpy._name), _signed(cpy._signed), _signGrade(cpy._signGrade), _execGrade(cpy._execGrade)
{
}

////////////////
// Destructor //
////////////////

Form::~Form(void)
{
	std::cout << "Form: " << this->_name << " has been thrown into the trash can." << std::endl;
	return ;
}

/////////////
// Getters //
/////////////

std::string	Form::getName(void) const
{
	return (this->_name);
}

bool		Form::getSigned(void) const
{
	return (this->_signed);
}

int			Form::getSignGrade(void) const
{
	return (this->_signGrade);
}

int			Form::getExecGrade(void) const
{
	return (this->_execGrade);
}

//////////////////////////
// Overloaded Operators //
//////////////////////////

Form	&Form::operator= (Form const &rhs)
{
	(void)rhs;
	return (*this);
}

//////////////////////
// Member Functions //
//////////////////////

void	Form::beSigned(Bureaucrat const &bu) throw()
{
	try
	{
		if (bu.getGrade() <= this->_signGrade)
			this->_signed = true;
		else
			throw (Form::GradeTooLowException());
	}
	return ;
}

////////////////
// Exceptions //
////////////////

char const	* Form::GradeTooHighException::what(void) const throw()
{
	return ("The form's grade is too high.");
}

char const	* Form::GradeTooLowException::what(void) const throw()
{
	return ("The form's grade is too low.");
}

/////////////////////////
/////////////////////////

std::ostream	& operator<< (std::ostream &o, Form const &rhs)
{
	o << "name: " << rhs.getName() << ", signed: " << rhs.getSigned();
	o << ", sign grade: " << rhs.getSignGrade() << ", execution grade: ";
	o << rhs.getExecGrade();

	return (o);
}
