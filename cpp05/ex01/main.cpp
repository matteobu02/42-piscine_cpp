/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:53:48 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/27 13:07:51 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int	main(void)
{
	Form		form("15c", 81, 70);
	Bureaucrat	b1("Bob", 80);
	Bureaucrat	b2("Carlos", 149);
	std::cout << std::endl;

	try
	{
		Form	invalid("dshkdsf", 151, -1);
	}
	catch (std::exception &e)
	{
		std::cerr << "err: " << e.what() << std::endl;
	}

	try
	{
		form.beSigned(b2);
	}
	catch (std::exception &e)
	{
		std::cerr << "err: " << e.what() << std::endl;
	}

	b2.signForm(form);
	b1.signForm(form);
	b2.signForm(form);

	std::cout << std::endl;
	return (0);
}
