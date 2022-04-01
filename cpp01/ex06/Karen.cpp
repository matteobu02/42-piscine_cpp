/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:38:07 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/01 18:58:47 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

Karen::Karen(void)
{
	return ;
}

Karen::~Karen(void)
{
	return ;
}

void	Karen::complain(std::string level)
{
	std::string	lvl_nam[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	int i;
	for (i = 0; i < 4; i++)
	{
		if (level == lvl_nam[i])
			break ;
	}

	switch (i)
	{
		case (0):
			std::cout << "[ DEBUG ]" << std::endl;
			this->debug();
		case (1):
			std::cout << "[ INFO ]" << std::endl;
			this->info();
		case (2):
			std::cout << "[ WARNINIG ]" << std::endl;
			this->warning();
		case (3):
			std::cout << "[ ERROR ]" << std::endl;
			this->error();
		default:
			std::cout << "[ Probably complainig about insignificant problems ]" << std::endl;
			break ;
	}
	return ;
}

void	Karen::debug(void)
{
	std::cout << "debug" << std::endl;
	return ;
}

void	Karen::info(void)
{
	std::cout << "info" << std::endl;
	return ;
}

void	Karen::warning(void)
{
	std::cout << "warning" << std::endl;
	return ;
}

void	Karen::error(void)
{
	std::cout << "error" << std::endl;
	return ;
}
