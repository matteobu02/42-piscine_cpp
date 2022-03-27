/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:50:37 by mbucci            #+#    #+#             */
/*   Updated: 2022/03/27 17:40:38 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int	ft_error(std::string message)
{
	std::cerr << message << std::endl;
	return (1);
}

std::string	ft_replace(std::string str, std::string s1, std::string s2)
{
	size_t	pos = str.find(s1);
	while (pos != std::string::npos)
	{
		str.erase(pos, s1.length());
		str = str.insert(pos, s2);
		pos = str.find(s1);
	}
	return (str);
}

int	main(int ac, char **av)
{
	if (ac != 4)
		return (ft_error("Invalid number of arguments"));
	else if (!*av[1] || !*av[2] || !*av[3])
		return (ft_error("Invalid argument(s)"));

	std::ifstream	ifs(av[1]);
	if (!ifs.is_open())
		return (ft_error("File error"));

	std::string		line;
	std::ofstream	ofs((std::string)av[1] + ".replace");
	while (std::getline(ifs, line))
		ofs << ft_replace(line, av[2], av[3]) << std::endl;
	ifs.close();
	ofs.close();
	return (0);
}
