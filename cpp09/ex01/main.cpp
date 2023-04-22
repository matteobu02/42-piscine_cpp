/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:14:28 by mbucci            #+#    #+#             */
/*   Updated: 2023/04/19 18:07:25 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "RPN.hpp"

int ft_error(const std::string& msg)
{
	std::cerr << msg << std::endl;
	return 1;
}

int main(int ac, char **av)
{
	if (ac != 2)
		return ft_error("Error: invalid number of arguments");

	RPN calculator;

	try
	{
		std::cout << calculator.evaluate(std::string(av[1])) << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
