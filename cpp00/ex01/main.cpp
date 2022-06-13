/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:33:29 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/04 15:01:17 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "PhoneBook.hpp"

std::string	get_and_check_input(void)
{
	std::string	str;

	while (!str.length())
		std::getline(std::cin, str);
	return (str);
}

void add_procedure(PhoneBook *phonebook)
{
	Contact 	contact;
	std::string str;

	std::cout << std::endl << "First name: ";
	str = get_and_check_input();
	contact.setFirstName(str);
	std::cout << "Last name: ";
	str = get_and_check_input();
	contact.setLastName(str);
	std::cout << "Nickname: ";
	str = get_and_check_input();
	contact.setNickname(str);
	std::cout << "Phone number: ";
	str = get_and_check_input();
	contact.setPhone(str);
	std::cout << "Darkest secret: ";
	str = get_and_check_input();
	contact.setSecret(str);
	phonebook->add_contact(contact);
	std::cout << std::endl << "Contact successfully addedd at index " << PhoneBook::getNumber() % 8 << "." << std::endl;
}

std::string	format_str(std::string str)
{
	if (str.length() < 11)
		return (str);
	str = str.substr(0, 9);
	str.push_back('.');
	return (str);
}

int		check_digit(std::string str)
{
	int i;

	if (str == "")
		return (0);
	i = -1;
	while (str[++i])
		if (!std::isdigit(str[i]))
			return (0);
	return (1);
}

void	print_row(std::string str)
{
	std::cout << "│" << std::setw(10) << std::internal << str;
}

void	print_contacts(PhoneBook *phonebook)
{
	int			num;
	std::string	input;

	num = PhoneBook::getNumber();
	if (num > 8)
		num = 8;
	std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
	print_row("index");
	print_row("first name");
	print_row("last name");
	print_row("nickname  │\n");
	std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
	for (int i = 0; i < num; i++)
	{
		std::cout << "|" << std::setw(10) << std::right << i + 1;
		std::cout << "|" << std::setw(10) << std::right << format_str(phonebook->getContact(i)->getFirstName());
		std::cout << "|" << std::setw(10) << std::right << format_str(phonebook->getContact(i)->getLastName());
		std::cout << "|" << std::setw(10) << std::right << format_str(phonebook->getContact(i)->getNickname());
		std::cout << "|" << std::endl;
	}
	std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl << std::endl;
	while (!check_digit(input) || std::stoi(input) > num || std::stoi(input) < 1)
	{
		std::cout << "Select contact (index): ";
		std::getline(std::cin, input);
	}
	std::cout << std::endl;
	phonebook->getContact(std::stoi(input) - 1)->print_infos();
	std::cout << std::endl << std::endl;
}

int		main(void)
{
	std::string	command;
	PhoneBook	friends;

	while (command != "EXIT")
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);
		if (command == "ADD")
			add_procedure(&friends);
		else if (command == "SEARCH")
			print_contacts(&friends);
		else
			if (command != "EXIT")
				std::cout << "Command not found.." << std::endl;
	}
	return (0);
}
