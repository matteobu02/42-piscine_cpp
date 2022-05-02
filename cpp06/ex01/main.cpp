/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:50:27 by mbucci            #+#    #+#             */
/*   Updated: 2022/05/02 16:23:18 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

int	main(void)
{
	Data		*start = new Data;
	Data		*end;
	uintptr_t	middle;
	
	std::cout << "start: " << start << std::endl;
	
	middle = start->serialize(start);
	std::cout << "middle: " << middle << std::endl;
	
	end = start->deserialize(middle);
	std::cout << "end: " << end << std::endl;

	delete (start);
	return (0);
}
