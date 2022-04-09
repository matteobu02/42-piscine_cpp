/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 00:34:22 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/07 12:18:06 by mbucci           ###   ########.fr       */
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
		Fixed(Fixed const & cpy);
		Fixed(int const n);
		Fixed(float const n);

		// Destructors
		~Fixed(void);

		// Getters / Setters
		int		getRawBits(void) const;

		// Overloaded operators
		Fixed	& operator= (Fixed const & rhs);

		bool	operator> (Fixed const & rhs) const;
		bool	operator< (Fixed const & rhs) const;
		bool	operator>= (Fixed const & rhs) const;
		bool	operator<= (Fixed const & rhs) const;
		bool	operator== (Fixed const & rhs) const;
		bool	operator!= (Fixed const & rhs) const;

		Fixed	operator+ (Fixed const & rhs) const;
		Fixed	operator- (Fixed const & rhs) const;
		Fixed	operator* (Fixed const & rhs) const;
		Fixed	operator/ (Fixed const & rhs) const;

		Fixed	& operator++ (void);
		Fixed	operator++ (int);
		Fixed	& operator-- (void);
		Fixed	operator-- (int);

		// Overloaded Functions
		Fixed static		& min(Fixed & f1, Fixed & f2);
		Fixed static const	& min(Fixed const & f1, Fixed const & f2);
		Fixed static		& max(Fixed & f1, Fixed & f2);
		Fixed static const	& max(Fixed const & f1, Fixed const & f2);

		// Member Functions
		float	toFloat(void) const;

	private:
		int					_RawBits;
		int static const	_NbBits = 8;
};

std::ostream	& operator<< (std::ostream & o, Fixed const & rhs);

#endif
