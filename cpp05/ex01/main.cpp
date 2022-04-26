/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:53:48 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/26 16:52:52 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int	main(void)
{
	std::cout << std::endl << "Valid:" << std::endl;
	Form		f4("15c", 81, 70);
	Form		f5("b6", 81, 70);
	Bureaucrat	b1("Bob", 80);
	Bureaucrat	b2("Carlos", 149);

	std::cout << std::endl << "Operations:" << std::endl;
	f4.beSigned(b1);
	b1.signForm(f4);
	std::cout << "Info: " << f4 << std::endl;
	f5.beSigned(b2);
	b2.signForm(f5);

	std::cout << std::endl;

	return (0);
}
