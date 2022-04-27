/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:19:23 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/27 16:16:55 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

//////////////////
// Constructors //
//////////////////

Intern::Intern(void)
{
	std::cout << "inetrn was just recruted" << std::endl;
}

Intern::Intern(Intern const &cpy)
{
	(void)cpy;
	std::cout << "inetrn was just recruted" << std::endl;
	return ;
}

////////////////
// Destructor //
////////////////

Intern::~Intern(void)
{
	std::cout << "intern was just fired" << std::endl;
}

/////////////////////////
// Overloaded Operator //
/////////////////////////

Intern	&Intern::operator= (Intern const &rhs)
{
	(void)rhs;
	return (*this);
}

/////////////////////
// Member Function //
/////////////////////
static AForm	*newShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

static AForm	*newRobotmyRequest(std::string target)
{
	return (new RobotomyRequestForm(target));
}

static AForm	*newPresidentialPardon(std::string target)
{
	return (new PresidentialPardonForm(target));
}
AForm	*Intern::makeForm(std::string formName, std::string formTarget) const
{
	std::string	tab[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	AForm*	(*fctPtrs[3])(std::string target) = {
		&newShrubbery,
		&newRobotmyRequest,
		&newPresidentialPardon
	};

	for (int i = 0; i < 3; i++)
		if (tab[i] == formName)
			return ((*fctPtrs[i])(formTarget));

	throw (Intern::FormDoesNotExistException());
	return (NULL);
}

////////////////
// Exceptions //
////////////////

char const	*Intern::FormDoesNotExistException::what(void) const throw()
{
	return ("The requested form doesn't exist");
}

/////////////////
/////////////////

