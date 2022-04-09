/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:11:48 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/09 13:56:33 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	public:
		// Constructors
		Point(void);
		Point(float const x, float const y);
		Point(Point const & cpy);

		// Destructors
		~Point(void);

		// Setters / Getters
		Fixed const	getX(void) const;
		Fixed const	getY(void) const;

		// Overloaded Operators
		Point	& operator= (Point const & rhs);

	private:
		Fixed const	_x;
		Fixed const	_y;
};

#endif
