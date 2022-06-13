/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:47:53 by mbucci            #+#    #+#             */
/*   Updated: 2022/03/08 14:09:15 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

/*
SETTERS
*/

void	Contact::setFirstName(std::string fname)
{
	this->_first_name = fname;
	return ;
}

void	Contact::setLastName(std::string lname)
{
	this->_last_name = lname;
	return ;
}

void	Contact::setNickname(std::string nname)
{
	this->_nickname = nname;
	return ;
}

void	Contact::setPhone(std::string phone)
{
	this->_phone = phone;
	return ;
}

void	Contact::setSecret(std::string secret)
{
	this->_secret = secret;
	return ;
}

/*
GETTERS
*/

std::string	Contact::getFirstName(void) const
{
	return (this->_first_name);
}

std::string	Contact::getLastName(void) const
{
	return (this->_last_name);
}

std::string	Contact::getNickname(void) const
{
	return (this->_nickname);
}

std::string	Contact::getPhone(void) const
{
	return (this->_phone);
}

std::string	Contact::getSecret(void) const
{
	return (this->_secret);
}

/*
OTHER
*/

void	Contact::print_infos(void) const
{
	std::cout << "First name > " << this->getFirstName() << std::endl;
	std::cout << "Last name > " << this->getLastName() << std::endl;
	std::cout << "Nickname > " << this->getNickname() << std::endl;
	std::cout << "Phone number > " << this->getPhone() << std::endl;
	std::cout << "Darkest secret > " << this->getSecret() << std::endl;
}
