/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:36:48 by mbucci            #+#    #+#             */
/*   Updated: 2022/05/02 17:35:13 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>

Base	*generate(void)
{
	int	choice = rand() % 3;

	switch(choice)
	{
		case 0:
			return (dynamic_cast<Base *>(new A));
		case 1:
			return (dynamic_cast<Base *>(new B));
		case 2:
			return (dynamic_cast<Base *>(new C));
		default:
			break ;
	}
	return (NULL);
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	return ;
}

void	identify(Base &p)
{
	try
	{
		A	a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (std::bad_cast &bc)
	{
		std::cerr << "Not type A: " << bc.what() << std::endl;
	}
	try
	{
		B	b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (std::bad_cast &bc)
	{
		std::cerr << "Not type B: " << bc.what() << std::endl;
	}
	try
	{
		C	c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch (std::bad_cast &bc)
	{
		std::cerr << "Not type C: " << bc.what() << std::endl;
	}
	return ;
}
