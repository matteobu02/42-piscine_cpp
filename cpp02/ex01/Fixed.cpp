/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:05:13 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/09 12:06:43 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <fstream>
#include <cmath>

//////////////////
// Constructors //
//////////////////

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_RawBits = 0;
	return ;
}

Fixed::Fixed(int x)
{
	std::cout << "Int constructor called" << std::endl;
	this->_RawBits = x << Fixed::_NbBits;
	return ;
}

Fixed::Fixed(float const x)
{
	std::cout << "Float constructor called" << std::endl;
	this->_RawBits = int(roundf(x * (1 << Fixed::_NbBits)));
	return ;
}

Fixed::Fixed(Fixed const & obj)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_RawBits = obj.getRawbits();
	return ;
}

/////////////////
// Destructors //
/////////////////

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

//////////////////////////
// Overloaded operators //
//////////////////////////

Fixed	& Fixed::operator= (Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_RawBits = rhs.getRawbits();
	return (*this);
}

///////////////////////
// Memeber functions //
///////////////////////

int		Fixed::getRawbits(void) const
{
	return (this->_RawBits);
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->_RawBits) / (1 << Fixed::_NbBits));
}

int		Fixed::toInt(void) const
{
	return (this->_RawBits >> Fixed::_NbBits);
}

std::ostream	& operator<< (std::ostream & ofs, Fixed const & fixed)
{
	ofs << fixed.toFloat();
	return (ofs);
}
