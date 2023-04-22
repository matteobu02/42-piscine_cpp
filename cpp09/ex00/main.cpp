/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:14:04 by mbucci            #+#    #+#             */
/*   Updated: 2023/04/14 17:05:56 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error: could not open file." << std::endl;
		return 1;
	}

	std::ifstream input(av[1]);
	if (!input.is_open())
	{
		std::cerr << "Error: could not open file." << std::endl;
		return 1;
	}

	BitcoinExchange btc("data.csv");
	std::string line, date;
	float value;
	float result;

	std::getline(input, line); // skip first line
	while (std::getline(input, line))
	{
		std::stringstream ss(line);
		if (std::getline(ss, date, '|') && ss >> value)
		{
			date.erase(0, date.find_first_not_of(" \t\n\r\f\v"));
			date.erase(date.find_last_not_of(" \t\n\r\f\v") + 1);
			try
			{
				result = value * btc.getBtcValue(date, value);;
				std::cout << date << " => " << value << " = " << result << std::endl;
			}
			catch (const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
		else
			std::cerr << "Error: bad input => " << line << std::endl;
	}
	input.close();

	return 0;
}
