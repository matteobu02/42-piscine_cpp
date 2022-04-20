/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:53:48 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/20 15:12:01 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "Invalid:" << std::endl;
	Bureaucrat	b1("Frank", -1);
	Bureaucrat	b2("Julie", 151);

	std::cout << std::endl << "Valid:" << std::endl;
	Bureaucrat	b3;
	Bureaucrat	b4("Gwendoline", 1);
	Bureaucrat	b5("Jean", 150);

	std::cout << std::endl << "Operations:" << std::endl;
	b4.increment();
	b4.decrement();
	std::cout << b4 << std::endl;
	b5.decrement();
	b5.increment();
	std::cout << b5 << std::endl;

	return (0);
}
