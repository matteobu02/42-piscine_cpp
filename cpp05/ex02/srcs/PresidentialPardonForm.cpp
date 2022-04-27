/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:43:48 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/27 14:26:55 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

//////////////////
// Constructors //
//////////////////

PresidentialPardonForm::PresidentialPardonForm(void)
	: AForm("PresidentialPardonForm", 25, 5), _target("VOID")
{
	std::cout << "PresidentialPardonForm: " << *this << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm: " << *this << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cpy)
	: AForm("PresidentialPardonForm", 25, 5), _target(cpy._target)
{
	std::cout << "PresidentialPardonForm: " << *this << std::endl;
	return ;
}

////////////////
// Destructor //
////////////////

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm: destructor called." << std::endl;
	return ;
}

////////////
// Getter //
////////////

std::string	PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

/////////////////////////
// Overloaded Operator //
/////////////////////////

PresidentialPardonForm	&PresidentialPardonForm::operator= (PresidentialPardonForm const &rhs)
{
	this->_target = rhs._target;
	return (*this);
}

//////////////////////
// Member Functions //
//////////////////////

void	PresidentialPardonForm::doTheThing(void) const
{
	std::cout << this->_target << " was pardoned by Zaphod Beeblebrox." << std::endl;
	return ;
}

///////////////////////
///////////////////////

std::ostream	&operator<< (std::ostream &o, PresidentialPardonForm const &rhs)
{
	o << "name: " << rhs.getName() << ", target: " << rhs.getTarget();
	o << ", signed: " << rhs.getSigned() << ", signGrade: " << rhs.getSignGrade();
	o << ", execGrade: " << rhs.getExecGrade();

	return (o);
}
