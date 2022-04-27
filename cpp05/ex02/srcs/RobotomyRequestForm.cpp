/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:27:15 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/27 14:25:50 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>

//////////////////
// Constructors //
//////////////////

RobotomyRequestForm::RobotomyRequestForm(void)
	: AForm("RobotomyRequestForm", 72, 45), _target("VOID")
{
	std::cout << "RobotomyRequestForm: " << *this << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm: " << *this << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy)
	: AForm("RobotomyRequestForm", 72, 45), _target(cpy._target)
{
	std::cout << "RobotomyRequestForm: " << *this << std::endl;
	return ;
}

////////////////
// Destructor //
////////////////

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm: destructor called." << std::endl;
	return ;
}

////////////
// Getter //
////////////

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

/////////////////////////
// Overloaded Operator //
/////////////////////////

RobotomyRequestForm	&RobotomyRequestForm::operator= (RobotomyRequestForm const &rhs)
{
	this->_target = rhs._target;
	return (*this);
}

//////////////////////
// Member Functions //
//////////////////////

void	RobotomyRequestForm::doTheThing(void) const
{
	std::cout << "VRRRRRRRRRR... " << std::endl;
	if (rand() % 2)
		std::cout << this->getName() << " was robotomized.";
	else
		std::cout << "Robotomization failed...";
	std::cout << std::endl;

	return ;
}

///////////////////////
///////////////////////

std::ostream	&operator<< (std::ostream &o, RobotomyRequestForm const &rhs)
{
	o << "name: " << rhs.getName() << ", target: " << rhs.getTarget();
	o << ", signed: " << rhs.getSigned() << ", signGrade: " << rhs.getSignGrade();
	o << ", execGrade: " << rhs.getExecGrade();

	return (o);
}
