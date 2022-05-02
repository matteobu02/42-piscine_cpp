/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:24:54 by mbucci            #+#    #+#             */
/*   Updated: 2022/05/02 17:42:22 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>

int	main(void)
{
	srand(time(0));

	Base	*bptr;

	std::cout << "new ptr generated" << std::endl;
	bptr = generate();
	std::cout << "type: ";
	identify(bptr);
	std::cout << std::endl << "type: " << std::endl;
	identify(*bptr);
	delete (bptr);

	std::cout << "new ptr generated" << std::endl;
	bptr = generate();
	std::cout << "type: ";
	identify(bptr);
	std::cout << std::endl << "type: " << std::endl;
	identify(*bptr);
	delete (bptr);

	return (0);
}
