/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conv.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:17:09 by mbucci            #+#    #+#             */
/*   Updated: 2022/05/02 13:51:54 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONV_HPP
#define CONV_HPP

#include <string>
#include <fstream>

class Conv
{
	public:
		Conv(std::string const &str);
		Conv(Conv const &cpy);

		virtual ~Conv(void);

		int		getType(void) const;
		int		getIntVal(void) const;
		char	getCharVal(void) const;
		double	getDoubleVal(void) const;
		float	getFloatVal(void) const;

		Conv	&operator= (Conv const &rhs);

		int		formatInt(void) const;
		char	formatChar(void) const;
		double	formatDouble(void) const;
		float	formatFloat(void) const;

		class InvalidInputException : public std::exception
		{
			char const	*what(void) const throw();
		};

		class NonDisplayableException : public std::exception
		{
			char const	*what(void) const throw();
		};

		class ImpossibleException : public std::exception
		{
			char const	*what(void) const throw();
		};

	private:
		Conv(void);

		int		_type; // --> 0 = int, 1 = char, 2 = double, 3 = float
		int		_intVal;
		char	_charVal;
		double	_doubleVal;
		float	_floatVal;
};

std::ostream	&operator<< (std::ostream &o, Conv const &rhs);

#endif
