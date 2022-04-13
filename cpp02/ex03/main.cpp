/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:10:58 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/13 14:45:45 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

bool	bsp(Point const a, Point const b, Point const c, Point const point);

void	print_res(bool res)
{
	if (res)
		std::cout << "Le point P est dans le triangle ABC." << std::endl;
	else
		std::cout << "Le point P n'est pas dans le triangle ABC." << std::endl;
	std::cout << std::endl;
	return ;
}

int	main(void)
{
	bool	res;

	// Dans le triangle
	std::cout << "Triangle 1: A(1, 3), B(3, 6), C(7, 1) => P(4, 3)" << std::endl;
	res = bsp(Point(1, 3), Point(3, 6), Point(7, 1), Point(4, 3));
	print_res(res);

	// Pas dans les triangle
	std::cout << "Triangle 2: A(-3, 1), B(0, 2), C(1, -4) => P(0, 2)" << std::endl;
	res = bsp(Point(-3, 1), Point(0, 2), Point(1, -4), Point(0, 2));
	print_res(res);

	// Dans le triangle
	std::cout << "Triangle 3: A(1.4, 4.2), B(2.7, -1.6), C(9.1, 5.4) => P(3.9, 1.7)" << std::endl;
	res = bsp(Point(1.4, 4.2), Point(2.7, -1.6), Point(9.1, 5.4), Point(3.9, 1.7));
	print_res(res);

	// Pas dans le triangle	
	std::cout << "Triangle 3: A(0, 0), B(0.2, 0), C(0, 0.2) => P(0.1205, 0.10069)" << std::endl;
	res = bsp(Point(0, 0), Point(0.2, 0), Point(0, 0.2), Point(0.1205, 0.10069));
	print_res(res);

	return (0);
}
