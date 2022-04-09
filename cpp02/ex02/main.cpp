/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:24:11 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/09 15:01:41 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main(void)
{
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << "a = " << a << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;

	std::cout << "b = " << b << std::endl;

	std::cout << "max(a, b) = " << Fixed::max(a, b) << std::endl;

	std::cout << std::endl << "My tests: " << std::endl;

	Fixed	c;
	std::cout << "c = " << c << std::endl;
	c = a + b;
	std::cout << "c = a + b = " << c << std::endl;

	if (c > b)
		std::cout << "c > b" << std::endl;
	else
		std::cout << "c <= b" << std::endl;
	std::cout << "c--: " << c-- << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "c / a = " << c / a << std::endl;

	return (0);
}
