/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:19:23 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/25 17:57:14 by mbucci           ###   ########.fr       */
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

AForm	*Intern::makeForm(std::string formName, std::string formTarget) const throw()
{
	std::string	tab[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	int	i;
	for (i = 0; i < 3; i++)
		if (tab[i] == formName)
			break ;
	try
	{	
		switch (i)
		{
			case (0):
				std::cout << "Intern creates " << tab[i] << " form" << std::endl;
				return (new ShrubberyCreationForm(formTarget));
			case (1):
				std::cout << "Intern creates " << tab[i] << " form" << std::endl;
				return (new RobotomyRequestForm(formTarget));
			case (2):
				std::cout << "Intern creates " << tab[i] << " form" << std::endl;
				return (new PresidentialPardonForm(formTarget));
			default:
				throw (Intern::FormDoesNotExistException());
		}
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (NULL);
}

////////////////
// Exceptions //
////////////////

char const	*Intern::FormDoesNotExistException::what(void) const throw()
{
	return ("The requested form doesn't exist");
}
