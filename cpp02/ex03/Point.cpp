/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:17:52 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/09 14:13:18 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

//////////////////
// Constructors //
//////////////////

Point::Point(void)
	: _x(Fixed(0)), _y(Fixed(0))
{
	return ;
}

Point::Point(float const x, float const y)
	: _x(Fixed(x)), _y(Fixed(y))
{
	return ;
}

Point::Point(Point const & cpy)
	: _x(cpy._x), _y(cpy._y)
{
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

Fixed const	Point::getX(void) const
{
	return (this->_x);
}

Fixed const	Point::getY(void) const
{
	return (this->_y);
}

//////////////////////////
// Overloaded Operators //
//////////////////////////

Point	& Point::operator= (Point const & rhs)
{
	(void)rhs;
	return (*this);
}
