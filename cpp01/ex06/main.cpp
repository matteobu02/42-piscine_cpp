/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:08:01 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/01 15:17:37 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>
#include <string>

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cerr << "One string argument needed" << std::endl;
		return (1);
	}

	Karen	employee;

	employee.complain((std::string)av[1]);
	return (0);
}
