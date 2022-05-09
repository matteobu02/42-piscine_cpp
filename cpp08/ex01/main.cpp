/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:05:26 by mbucci            #+#    #+#             */
/*   Updated: 2022/05/09 15:42:15 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <list>

/*int	main(void)
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return (0);
}*/

int	main(void)
{
	std::cout << "Test 1:" << std::endl;
	{
		Span			sp(20000);
		std::list<int>	tmp;

		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(3);
		sp.addNumber(4);
		sp.addNumber(5);

		for (int i = 0; i < 20000 - sp.size(); i++)
			tmp.push_back(i + 6);

		std::cout << "Adding a lot of numbers" << std::endl;
		sp.addNumbers(tmp.begin(), tmp.end());
		std::cout << "OK" << std::endl;

		std::cout << "Adding one more number" << std::endl;
		try
		{
			sp.addNumber(1);
		}
		catch (std::exception &e)
		{
			std::cerr << "err: " << e.what() << std::endl;
		}
	}
	std::cout << std::endl << "Test 2:" << std::endl;
	{
		Span			sp(20000);
		std::list<int>	tmp;

		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(3);
		sp.addNumber(4);
		sp.addNumber(5);

		for (int i = 0; i < 15000 - sp.size(); i++)
			tmp.push_back(i + 6);

		std::cout << "Adding a lot of numbers" << std::endl;
		sp.addNumbers(tmp.begin(), tmp.end());
		std::cout << "OK" << std::endl;

		std::cout << "Adding more numbers" << std::endl;
		try
		{
			sp.addNumbers(tmp.begin(), tmp.end());
		}
		catch (std::exception &e)
		{
			std::cerr << "err: " << e.what() << std::endl;
		}
	}
	std::cout << std::endl << "Test 3:" << std::endl;
	{
		Span sp = Span(5);		

		std::cout << "==No numbers==" << std::endl;
		try
		{
			std::cout << "shortest span: ";
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << "longest span: ";
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << "err: " << e.what() << std::endl;
		}
		std::cout << "==One number==" << std::endl;
		sp.addNumber(6);
		try
		{
			std::cout << "shortest span: ";
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << "longest span: ";
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << "err: " << e.what() << std::endl;
		}
		std::cout << "==enough numbers==" << std::endl;
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		try
		{
			std::cout << "shortest span: ";
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << "longest span: ";
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << "err: " << e.what() << std::endl;
		}
	}
	return (0);
}
