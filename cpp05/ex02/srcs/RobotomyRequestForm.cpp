/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:27:15 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/25 16:13:01 by mbucci           ###   ########.fr       */
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

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const throw()
{
	try
	{
		if (executor.getGrade() > this->getExecGrade())
			throw (AForm::GradeTooLowException());
		else if (!this->getSigned())
			throw (AForm::FormNotSignedException());
		else
		{
			std::cout << "VRRRRRRRRRR... " << std::endl;
			if (rand() % 2)
				std::cout << this->getName() << " was robotomized.";
			else
				std::cout << "Robotomization failed...";
			std::cout << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cerr << this->getName() << "-err: " << e.what() << std::endl;
	}
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
