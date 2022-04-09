/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:48:21 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/09 11:41:49 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int	main(void)
{
	Karen	k;

	std::cout << "DEBUG: ";
	k.complain("DEBUG");

	std::cout << std::endl << "INFO: ";
	k.complain("INFO");

	std::cout << std::endl << "WARNING: ";
	k.complain("WARNING");

	std::cout << std::endl << "ERROR: ";
	k.complain("ERROR");
	return (0);
}
