/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 23:10:34 by mbucci            #+#    #+#             */
/*   Updated: 2022/03/16 23:22:42 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string	txt = "HI THIS IS BRAIN";
	std::string	*stringPTR = &txt;
	std::string &stringREF = txt;

	std::cout << "adresse de la string en mémoire: " << &txt << std::endl;
	std::cout << "adresse stockée dans stringPTR: " << stringPTR << std::endl;
	std::cout << "adresse stockée dans stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "valeur de la string: " << txt << std::endl;
	std::cout << "valeur pointée par stringPTR: " << *stringPTR << std::endl;
	std::cout << "valeur pointée par stringREF: " << stringREF << std::endl;
	return (0);
}
