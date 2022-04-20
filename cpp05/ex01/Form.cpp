/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:10:28 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/20 16:49:58 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/////////////////
// Constructor //
/////////////////

From::Form(std::string name, int signGrade, int execGrade)
	: _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	try
	{
		if (signGrade > 150 || execGrade > 150)
			throw (Bureaucrat::GradeTooHighException());
		else if (signGrade < 1 || execGrade < 1)
			throw (Bureaucrat::GradeTooLowException());
		else if (signGrade > execGrade)
			throw (Form::GradeTooHighException());
		else
			std::cout << *this << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << this->getName() << "-err: " << e.what() << std::endl;
	}
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

//////////////////////
// Member Functions //
//////////////////////

void	Form::beSigned(Bureaucrat bu) throw()
{
	try
	{
		if (bu.getGrade < this->getSignGrade())
			throw (Form::GradeTooLowException());
		else
		{
			this->_signed = true;
			bu.signForm();
		}
	}
	catch (std::exception & e)
	{
		std::cerr << e.what()
	}
}

/////////////////////////
/////////////////////////

std::ostream	& operator<< (std::ostream &o, Form const &rhs)
{
	o << "name: " << this->getName() << ", signed: " << this->getSigned();
	o << ", sign grade: " << this->getSignGrade() << ", execution grade: ";
	o << this->getExecGrade();

	return (o);
}
