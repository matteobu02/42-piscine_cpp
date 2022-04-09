/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:05:58 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/07 19:35:50 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

//////////////////
// Constructors //
//////////////////

Fixed::Fixed(void)
{
	this->_RawBits = 0;
	return ;
}

Fixed::Fixed(Fixed const & cpy)
{
	this->_RawBits = cpy.getRawBits();
	return ;
}

Fixed::Fixed(int const n)
{
	this->_RawBits = n << Fixed::_NbBits;
	return ;
}

Fixed::Fixed(float const n)
{
	this->_RawBits = n * (1 << Fixed::_NbBits);
	return ;
}

/////////////////
// Destructors //
/////////////////

Fixed::~Fixed(void)
{
	return ;
}

///////////////////////
// Getters / Setters //
///////////////////////

int	Fixed::getRawBits(void) const
{
	return (this->_RawBits);
}

//////////////////////////
// Overloaded Operators //
//////////////////////////

Fixed	& Fixed::operator= (Fixed const & rhs)
{
	this->_RawBits = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator> (Fixed const & rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator< (Fixed const & rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator>= (Fixed const & rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<= (Fixed const & rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator== (Fixed const & rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!= (Fixed const & rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

Fixed	Fixed::operator+ (Fixed const & rhs) const
{
	return (Fixed(this->getRawBits() + rhs.getRawBits()));
}

Fixed	Fixed::operator- (Fixed const & rhs) const
{
	return (Fixed(this->getRawBits() - rhs.getRawBits()));
}

Fixed	Fixed::operator* (Fixed const & rhs) const
{
	return (Fixed(this->getRawBits() * rhs.getRawBits()));
}

Fixed	Fixed::operator/ (Fixed const & rhs) const
{
	return (Fixed(this->getRawBits() / rhs.getRawBits()));
}

Fixed	& Fixed::operator++ (void)
{
	this->_RawBits++;
	return (*this);
}

Fixed	Fixed::operator++ (int)
{
	Fixed	tmp(*this);

	this->_RawBits++;
	return (tmp);
}

Fixed	& Fixed::operator-- (void)
{
	this->_RawBits--;
	return (*this);
}

Fixed	Fixed::operator-- (int)
{
	Fixed	tmp(*this);

	this->_RawBits--;
	return (tmp);
}

//////////////////////////
// Overloaded Functions //
//////////////////////////

Fixed	& Fixed::min(Fixed & f1, Fixed & f2)
{
	return (f1 <= f2 ? f1 : f2);
}

Fixed const	& Fixed::min(Fixed const & f1, Fixed const & f2)
{
	return (f1 <= f2 ? f1 : f2);
}

Fixed	& Fixed::max(Fixed & f1, Fixed & f2)
{
	return (f1 >= f2 ? f1 : f2);
}

Fixed const	& Fixed::max(Fixed const & f1, Fixed const & f2)
{
	return (f1 >= f2 ? f1 : f2);
}

//////////////////////
// Member Functions //
//////////////////////

float	Fixed::toFloat(void) const
{
	return ((float)(this->_RawBits) / (1 << Fixed::_NbBits));
}

///////////////////////////////////////
///////////////////////////////////////

std::ostream	& operator<< (std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}
