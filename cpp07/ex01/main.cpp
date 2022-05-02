/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 23:40:07 by mbucci            #+#    #+#             */
/*   Updated: 2022/05/03 01:14:33 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>
#include <iostream>

template <typename T>
void	print_arg(T const &arg)
{
	std::cout << arg << std::endl;
	return ;
}

int	main(void)
{
	std::string	strTab[10];
	int			intTab[7];
	
	for (int i = 0; i < 10; i++)
		strTab[i] = "github is bad";

	for (int i = 0; i < 7; i++)
		intTab[i] = i + 1;

	std::cout << "first test: " << std::endl;
	iter(strTab, 10, print_arg);

	std::cout << std::endl << "second test: " << std::endl;
	iter(intTab, 7, print_arg);

	return (0);
}
