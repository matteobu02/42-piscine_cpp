/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:53:48 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/25 16:38:40 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int	main(void)
{
	std::cout << std::endl << "============ ShrubberyCreationForm ============" << std::endl << std::endl;
	{
		ShrubberyCreationForm	f1("petit_jardin_fleuri");
		ShrubberyCreationForm	f2(f1);

		Bureaucrat	b1("Bob", 150);
		Bureaucrat	b2("Jules", 120);

		std::cout << std::endl;
		b1.signForm(f1);
		b1.executeForm(f1);
		f2.beSigned(b2);
		b2.signForm(f2);
		b2.executeForm(f2);
		f2.execute(b2);
		std::cout << std::endl;
	}

	std::cout << std::endl << "============ RobotomyRequestForm ============" << std::endl << std::endl;
	{
		RobotomyRequestForm	f1("tas de ferailles");
		RobotomyRequestForm	f2(f1);

		Bureaucrat	b1("Bob", 150);
		Bureaucrat	b2("Gaspard", 40);

		std::cout << std::endl;
		b1.signForm(f1);
		b1.executeForm(f1);
		f2.beSigned(b2);
		b2.signForm(f2);
		b2.executeForm(f2);
		f2.execute(b2);
		std::cout << std::endl;
	}

	std::cout << std::endl << "============ PresidentialPardonForm ============" << std::endl << std::endl;
	{
		PresidentialPardonForm	f1("Bennoit la Denne");
		PresidentialPardonForm	f2(f1);

		Bureaucrat	b1("Bob", 150);
		Bureaucrat	b2("Tarek", 1);

		std::cout << std::endl;
		b1.signForm(f1);
		b1.executeForm(f1);
		f2.beSigned(b2);
		b2.signForm(f2);
		b2.executeForm(f2);
		f2.execute(b2);
		std::cout << std::endl;
	}

	return (0);
}
