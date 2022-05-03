/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:55:38 by mbucci            #+#    #+#             */
/*   Updated: 2022/05/03 17:28:16 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Array.hpp"
#include "Array.tpp"

int main(void)
{
	{
		Array<int>	array1(6);

		for (int i = 0; i < 6; i++)
			array1[i] = i + 10;
		for (int i = 0; i < 6; i++)
			std::cout << "array1[" << i << "] = " << array1[i] << std::endl;

		std::cout << std::endl;
		Array<int>	array1Bis(array1);
		for (int i = 0; i < 6; i++)
			array1Bis[i] = 1;
		for (int i = 0; i < 6; i++)
			std::cout << "array1Bis[" << i << "] = " << array1Bis[i] << std::endl;
		std::cout << std::endl;

		for (int i = 0; i < 6; i++)
			std::cout << "array1[" << i << "] = " << array1[i] << std::endl;
	}
	std::cout << std::endl << "test 2:" << std::endl;
	{
		Array<char>	array2(4);

		try
		{
			for (int i = 0; i < 4; i++)
				array2[i] = i + 97;
			for (int i = 0; i < 7; i++)
				std::cout << "array2[" << i << "] = " << array2[i] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl << "test 3:" << std::endl;
	{
		Array<std::string>	array3(3);

		for (int i = 0; i < 3; i++)
			array3[i] = "github is bad";
		for (int i = 0; i < 3; i++)
			std::cout << "array3[" << i << "] = " << array3[i] << std::endl;
	}
	//system("leaks test");
	return 0;
}
