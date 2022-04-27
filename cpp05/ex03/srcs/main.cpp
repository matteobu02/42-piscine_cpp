/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:53:48 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/27 16:32:40 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int	main(void)
{
	Intern		someRandomIntern;
	AForm		*scf;
	AForm		*rrf;
	AForm		*ppf;
	AForm		*nf;
	Bureaucrat	bob("Bob", 1);

	std::cout << std::endl;
	scf = someRandomIntern.makeForm("shrubbery creation", "parc nationnnnnnnnal");
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	ppf = someRandomIntern.makeForm("presidential pardon", "dieu");

	try
	{
		nf = someRandomIntern.makeForm("hello", "wolrd");
	}
	catch (std::exception &e)
	{
		std::cerr << "err: " << e.what() << std::endl;
	}
	
	rrf->beSigned(bob);
	bob.signForm(*rrf);
	std::cout << std::endl;

	return (0);
}
