/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:59:21 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/25 16:12:42 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>

//////////////////
// Constructors //
//////////////////

ShrubberyCreationForm::ShrubberyCreationForm(void)
	: AForm("ShrubberyCreationForm", 145, 137), _target("VOID")
{
	std::cout << "ShrubberyCreationForm: " << *this << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm: " << *this << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cpy)
	: AForm("ShrubberyCreationForm", 145, 137), _target(cpy._target)
{
	std::cout << "ShrubberyCreationForm: " << *this << std::endl;
	return ;
}

////////////////
// Desructors //
////////////////

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm: destructor called" << std::endl;
	return ;
}

////////////
// Getter //
////////////

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

/////////////////////////
// Overloaded Operator //
/////////////////////////

ShrubberyCreationForm	&ShrubberyCreationForm::operator= (ShrubberyCreationForm const &rhs)
{
	this->_target = rhs._target;
	return (*this);
}

//////////////////////
// Member Functions //
//////////////////////

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const throw()
{
	try
	{
		if (executor.getGrade() > this->getExecGrade())
			throw (AForm::GradeTooLowException());
		else if (!this->getSigned())
			throw (AForm::FormNotSignedException());
		else
		{
			std::ofstream	ofs(this->_target + "_shrubbery");
			ofs << "       _-_" << std::endl; // ---> https://ascii.co.uk/art/tree
			ofs << "    /~~   ~~\\" << std::endl;
			ofs << " /~~         ~~\\" << std::endl;
			ofs << "{               }" << std::endl;
			ofs << " \\  _-     -_  /" << std::endl;
			ofs << "   ~  \\\\ //  ~" << std::endl;
			ofs << "_- -   | | _- _" << std::endl;
			ofs << "  _ -  | |   -_" << std::endl;
			ofs << "      // \\\\" << std::endl;
			ofs.close();
		}
	}
	catch (std::exception &e)
	{
		std::cerr << this->getName() << "-err: " << e.what() << std::endl;
	}
	return ;
}

/////////////////
/////////////////

std::ostream	&operator<< (std::ostream &o, ShrubberyCreationForm const &rhs)
{
	o << "name: " << rhs.getName() << ", target: " << rhs.getTarget();
	o << ", signed: " << rhs.getSigned() << ", signGrade: " << rhs.getSignGrade();
	o << ", execGrade: " << rhs.getExecGrade();

	return (o);
}
