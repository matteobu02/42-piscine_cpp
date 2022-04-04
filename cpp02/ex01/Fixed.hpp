/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 01:42:07 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/05 00:19:43 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <fstream>

class Fixed
{
	public:
		// Constructors
		Fixed(void);
		Fixed(int x);
		Fixed(float const x);
		Fixed(Fixed const & obj);

		// Destructors
		~Fixed(void);

		// Overloaded operators
		Fixed	& operator= (Fixed const & rhs);

		// Member functions
		int		getRawbits(void) const;
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_RawBits;
		static int const	_NbBits = 8;
};

std::ostream	& operator<< (std::ostream & ofs, Fixed const & fixed);

#endif
