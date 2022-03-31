/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:38:07 by mbucci            #+#    #+#             */
/*   Updated: 2022/03/31 14:56:00 by mbucci           ###   ########.fr       */
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
	void		(Karen::*lvl_fnct[4]) (void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};

	std::string	lvl_nam[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++)
	{
		if (level == lvl_nam[i])
		(this->*lvl_fnct[i])();
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
