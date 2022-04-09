/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:03:42 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/07 19:24:50 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"


/*
 * A point is inside a triangle if its X
 * coordinate is between the triangle's 
 * higher and lower X coordinates. Same
 * for the Y coordinate.
*/

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	maxX;
	Fixed	maxY;
	Fixed	minX;
	Fixed	minY;
	Fixed	tmp;

	tmp = Fixed::max(a.getX(), b.getX());
	maxX = Fixed::max(tmp, c.getX());

	tmp = Fixed::max(a.getY(), b.getY());
	maxY = Fixed::max(tmp, c.getY());

	tmp = Fixed::min(a.getX(), b.getX());
	minX = Fixed::min(tmp, c.getX());

	tmp = Fixed::min(a.getY(), b.getY());
	minY = Fixed::min(tmp, c.getY());

	if (point.getX() > minX && point.getX() < maxX)
		if (point.getY() > minY && point.getY() < maxY)
			return (true);
	return (false);
}
