/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:39:31 by mbucci            #+#    #+#             */
/*   Updated: 2022/05/04 13:57:53 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	std::vector<int>	vect;
	std::list<int>		lst;
	
	std::cout << "====== Vector ======" << std::endl;
	
	vect.push_back(35);
	vect.push_back(85);
	vect.push_back(1);
	vect.push_back(23);
	vect.push_back(65);
	vect.push_back(10);

	for (int i = 0; i < static_cast<int>(vect.size()); i++)
		std::cout << vect[i] << std::endl;
	try
	{
		std::cout << std::endl << "target: 23" << std::endl;
		std::cout << *easyfind(vect, 23) << std::endl;

		std::cout << std::endl << "target: 99" << std::endl;
		std::cout << *easyfind(vect, 99) << std::endl;
	}
	catch (ItemNotFoundException &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "====== List ======" << std::endl;

	lst.push_back(7);
	lst.push_back(900);
	lst.push_back(-45);
	lst.push_back(69);
	lst.push_back(65);
	lst.push_back(823);

	for (std::list<int>::iterator it = lst.begin(); it != lst.end(); it++)
		std::cout << *it << std::endl;
	try
	{
		std::cout << "target: 823" << std::endl;
		std::cout << *easyfind(lst, 823) << std::endl;

		std::cout << "target: 99" << std::endl;
		std::cout << *easyfind(lst, -1) << std::endl;
	}
	catch (ItemNotFoundException &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
