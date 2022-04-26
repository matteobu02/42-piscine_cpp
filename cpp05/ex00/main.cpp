/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:53:48 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/26 16:13:19 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "Invalid:" << std::endl;
	try
	{
		Bureaucrat	b1("Frank", -1);
	}
	catch (std::exception &e)
	{
		std::cerr << "err: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	b2("Julie", 151);
	}
	catch (std::exception &e)
	{
		std::cerr << "err: " << e.what() << std::endl;
	}
	
	std::cout << std::endl << "Valid:" << std::endl;
	Bureaucrat	b4("Gwendoline", 1);
	Bureaucrat	b5("Jean", 150);

	std::cout << std::endl << "Operations:" << std::endl;
	
	try
	{
		b4.increment();
	}
	catch (std::exception &e)
	{
		std::cerr << "err: " << e.what() << std::endl;
	}
	try
	{
		b4.decrement();
	}
	catch (std::exception &e)
	{
		std::cerr << "err: " << e.what() << std::endl;
	}

	std::cout << b4 << std::endl;
	
	try
	{
		b5.decrement();
	}
	catch (std::exception &e)
	{
		std::cerr << "err: " << e.what() << std::endl;
	}
	try
	{
		b5.increment();
	}
	catch (std::exception &e)
	{
		std::cerr << "err: " << e.what() << std::endl;
	}
	
	std::cout << b5 << std::endl;

	return (0);
}
