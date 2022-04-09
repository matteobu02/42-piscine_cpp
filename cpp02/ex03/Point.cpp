/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:17:52 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/07 19:32:32 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

//////////////////
// Constructors //
//////////////////

Point::Point(void)
{
	this->_x = Fixed(0);
	this->_y = Fixed(0);
	return ;
}

Point::Point(float const & x, float const & y)
{
	this->_x = Fixed(x);
	this->_y = Fixed(y);
	return ;
}

Point::Point(Point const & cpy)
{
	this->_x = cpy.getX();
	this->_y = cpy.getY();
	return ;
}

/////////////////
// Destructors //
/////////////////

Point::~Point(void)
{
	return ;
}

///////////////////////
// Setters / Getters //
///////////////////////

Fixed	Point::getX(void) const
{
	return (this->_x);
}

Fixed	Point::getY(void) const
{
	return (this->_y);
}

//////////////////////////
// Overloaded Operators //
//////////////////////////

Point	& Point::operator= (Point const & rhs)
{
	this->_x = rhs.getX();
	this->_y = rhs.getY();
	return (*this);
}
