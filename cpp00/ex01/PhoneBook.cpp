/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:34:00 by mbucci            #+#    #+#             */
/*   Updated: 2022/03/07 13:24:43 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int		PhoneBook::getNumber(void)
{
	return (PhoneBook::_number);
}

void	PhoneBook::add_contact(Contact contact)
{
	this->_contacts[PhoneBook::_number % 8] = contact;
	PhoneBook::_number++;
	return ;
}

Contact	*PhoneBook::getContact(int i)
{
	return (&(this->_contacts[i]));
}

int	PhoneBook::_number = 0;
