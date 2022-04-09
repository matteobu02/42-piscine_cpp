/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:38:07 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/09 11:47:52 by mbucci           ###   ########.fr       */
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
		default:
			std::cout << "[ Probably complainig about insignificant problems ]" << std::endl;
			break ;
		case (0):
			std::cout << "[ DEBUG ]" << std::endl;
			this->debug();
			std::cout << std::endl;
		case (1):
			std::cout << "[ INFO ]" << std::endl;
			this->info();
			std::cout << std::endl;
		case (2):
			std::cout << "[ WARNINIG ]" << std::endl;
			this->warning();
			std::cout << std::endl;
		case (3):
			std::cout << "[ ERROR ]" << std::endl;
			this->error();
			std::cout << std::endl;
	}
	return ;
}

void	Karen::debug(void)
{
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup ";
	std::cout << "burger. I really do!" << std::endl;
	return ;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn't put enough bacon in my burger! If you did, ";
	std::cout << "I wouldn't be asking for more!" << std::endl;
	return ;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I've been coming for years whereas you started working ";
	std::cout << "here since last month." << std::endl;
	return ;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}
