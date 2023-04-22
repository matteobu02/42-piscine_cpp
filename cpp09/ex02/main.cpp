/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:26:10 by mbucci            #+#    #+#             */
/*   Updated: 2023/04/20 16:44:31 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PmergeMe.hpp"

int main(const int ac, const char **av)
{
	if (ac < 2)
	{
		std::cerr << "Help: ./PmergeMe \"<range_of_uints>\"" << std::endl;
		return 1;
	}

	try
	{
		PmergeMe pm;

		pm.sort(ac, av);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
