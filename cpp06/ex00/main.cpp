/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:35:15 by mbucci            #+#    #+#             */
/*   Updated: 2022/05/02 14:00:51 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conv.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 1)
		return (1);
	Conv	convertor(static_cast<std::string>(av[1]));
	std::cout << convertor;
	return (0);
}
