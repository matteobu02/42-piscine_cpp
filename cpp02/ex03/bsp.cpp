/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:03:42 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/13 14:54:42 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed	triAire(Point const a, Point const b, Point const c)
{
	return ((a.getX() - c.getX()) * (b.getY() - c.getY()) - (b.getX() - c.getX()) * (a.getY() - c.getY()));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	A1 = triAire(point, a, b);
	Fixed	A2 = triAire(point, b, c);
	Fixed	A3 = triAire(point, c, a);

	if (A1 == 0 || A2 == 0 || A3 == 0)
		return (false);

	bool	n = A1 < 0 || A2 < 0 || A3 < 0;
	bool	p = A1 > 0 || A2 > 0 || A3 > 0;

	return !(n && p);
}
