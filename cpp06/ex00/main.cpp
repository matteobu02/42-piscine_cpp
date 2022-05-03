/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:35:15 by mbucci            #+#    #+#             */
/*   Updated: 2022/05/03 14:39:20 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conv.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 1)
		return (1);
	try
	{
		Conv	convertor(static_cast<std::string>(av[1]));
		std::cout << convertor;
	}
	catch (Conv::InvalidInputException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
