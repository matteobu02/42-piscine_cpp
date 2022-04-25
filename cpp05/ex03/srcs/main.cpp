/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:53:48 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/25 18:01:33 by mbucci           ###   ########.fr       */
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
	AForm		*rrf;
	AForm		*nf;
	Bureaucrat	bob("Bob", 1);

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	nf = someRandomIntern.makeForm("hello", "wolrd");
	
	rrf->beSigned(bob);
	bob.signForm(*rrf);

	return (0);
}
