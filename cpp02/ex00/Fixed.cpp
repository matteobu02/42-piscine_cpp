/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 21:45:34 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/03 13:02:14 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_RawBits = 0;
	return ;
}

Fixed::Fixed(Fixed const & obj)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_RawBits = obj.getRawBits();
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Default destructor called" << std::endl;
	return ;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_RawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_RawBits = raw;
	return ;
}

Fixed	&Fixed::operator= (Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_RawBits = rhs.getRawBits();
	return (*this);
}
