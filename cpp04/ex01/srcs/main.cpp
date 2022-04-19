/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 20:39:47 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/16 18:30:55 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>
#include <new>

int	main(void)
{
	Animal	* biZoo[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			biZoo[i] = new Cat;
		else
			biZoo[i] = new Dog;
	}

	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
		std::cout << "animal[" << i << "]: " << biZoo[i]->getType() << std::endl;

	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
		delete (biZoo[i]);

	return (0);
}
