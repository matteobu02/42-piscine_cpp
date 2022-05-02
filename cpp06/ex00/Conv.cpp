/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conv.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:17:00 by mbucci            #+#    #+#             */
/*   Updated: 2022/05/02 15:21:54 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conv.hpp"
#include <cctype>
#include <cmath>
#include <iostream>
#include <math.h>

//////////////////
// Constructors //
//////////////////

Conv::Conv(void)
{
}

Conv::Conv(std::string const &str)
{
	if (str.size() == 1)
	{
		if (isdigit(str[0]))
		{
			this->_type = 0; // --> type = int
			this->_intVal = static_cast<int>(str[0] - 48);
		}
		else
		{
			this->_type = 1; // --> type = char
			this->_charVal = str[0];
		}
	}
	else
	{	
		char	*longEndPtr;
		long	longVal = strtol(str.c_str(), &longEndPtr, 10);
		char	*doubleEndPtr;
		double	doubleVal = strtof(str.c_str(), &doubleEndPtr);

		if (*longEndPtr)
		{
			if (*doubleEndPtr)
			{
				if (*doubleEndPtr == 'f')
				{
					this->_floatVal = static_cast<float>(doubleVal);
					this->_type = 3;
				}
				else
					throw (Conv::InvalidInputException());
			}
			else
			{
				this->_doubleVal = doubleVal;
				this->_type = 2;
			}
		}
		else
		{
			this->_intVal = static_cast<int>(longVal);
			this->_type = 0;
		}
	}
	return ;
}

Conv::Conv(Conv const &cpy)
{
	this->_type = cpy._type;
	this->_intVal = cpy._intVal;
	this->_charVal = cpy._charVal;
	this->_doubleVal = cpy._doubleVal;
	this->_floatVal = cpy._floatVal;

	return ;
}

////////////////
// Destructor //
////////////////

Conv::~Conv(void)
{
}

///////////////
// Accessors //
///////////////

int		Conv::getType(void) const
{
	return (this->_type);
}

int		Conv::getIntVal(void) const
{
	return (this->_intVal);
}

char	Conv::getCharVal(void) const
{
	return (this->_charVal);
}

double	Conv::getDoubleVal(void) const
{
	return (this->_doubleVal);
}

float	Conv::getFloatVal(void) const
{
	return (this->_floatVal);
}

/////////////////////////
// Overloaded Operator //
/////////////////////////

Conv	&Conv::operator= (Conv const &rhs)
{
	this->_type = rhs._type;
	this->_intVal = rhs._intVal;
	this->_charVal = rhs._charVal;
	this->_doubleVal = rhs._doubleVal;
	this->_floatVal = rhs._floatVal;

	return (*this);
}

//////////////////////
// Member Functions //
//////////////////////

char	Conv::formatChar(void) const
{
	switch (this->_type)
	{
		char	ret;
		case 0:
			ret = static_cast<char>(this->_intVal);
			if (!isprint(ret))
				throw (Conv::NonDisplayableException());
			return (ret);
		case 1:
			return (this->_charVal);
		case 2:
			ret = static_cast<char>(this->_doubleVal);
			if (isnan(this->_doubleVal) || isinf(this->_doubleVal))
				throw (Conv::ImpossibleException());
			else if (!isprint(ret))
				throw (Conv::NonDisplayableException());
			else
				return (ret);
		case 3:
			ret = static_cast<char>(this->_doubleVal);
			if (isnan(this->_floatVal) || isinf(this->_floatVal))
				throw (Conv::ImpossibleException());
			else if (!isprint(ret))
				throw (Conv::NonDisplayableException());
			else
				return (ret);
		default:
			break ;
	}
	return (0);
}

int		Conv::formatInt(void) const
{
	switch (this->_type)
	{
		case 0:
			return (this->_intVal);
		case 1:
			return (static_cast<int>(this->_charVal));
		case 2:
			if (isnan(this->_doubleVal) || isinf(this->_doubleVal))
				throw (Conv::ImpossibleException());
			else
				return (static_cast<int>(this->_doubleVal));
		case 3:
			if (isnan(this->_floatVal) || isinf(this->_floatVal))
				throw (Conv::ImpossibleException());
			else
				return (static_cast<int>(this->_floatVal));
		default:
			break ;
	}
	return (0);
}

float	Conv::formatFloat(void) const
{
	switch (this->_type)
	{
		case 0:
			return (static_cast<float>(this->_intVal));
		case 1:
			return (static_cast<float>(this->_charVal));
		case 2:
			return (static_cast<float>(this->_doubleVal));
		case 3:
			return (this->_floatVal);
		default:
			break ;
	}
	return (0);
}

double	Conv::formatDouble(void) const
{
	switch (this->_type)
	{
		case 0:
			return (static_cast<double>(this->_intVal));
		case 1:
			return (static_cast<double>(this->_charVal));
		case 2:
			return (this->_doubleVal);
		case 3:
			return (static_cast<double>(this->_floatVal));
		default:
			break ;
	}
	return (0);
}

////////////////
// Exceptions //
////////////////

char const	*Conv::InvalidInputException::what(void) const throw()
{
	return ("Invalid input");
}

char const	*Conv::NonDisplayableException::what(void) const throw()
{
	return ("Non displayable");
}

char const	*Conv::ImpossibleException::what(void) const throw()
{
	return ("impossible");
}

//////////////////////
//////////////////////

std::ostream	&operator<< (std::ostream &o, Conv const &rhs)
{
	/*========= CHAR =========*/
	o << "char: ";
	try
	{
		char	c = rhs.formatChar();
		o << "\'" << c << "\'";
	}
	catch (std::exception &e)
	{
		o << e.what();
	}
	o << std::endl;

	/*========= INT =========*/
	o << "int: ";
	try
	{
		int	i = rhs.formatInt();
		o << i;
	}
	catch (std::exception &e)
	{
		o << e.what();
	}
	o << std::endl;
	
	/*========== FLOAT ==========*/
	o << "float: ";
	float	f = rhs.formatFloat();
	o << f;
	if (isnan(f) || isinf(f))
		o << "f";
	else
		o << ".0f";
	o << std::endl;

	/*========== DOUBLE ==========*/
	o << "double: ";
	double	d = rhs.formatDouble();
	o << d;
	if (!isinf(d) && !isnan(d))
		o << ".0";
	o << std::endl;

	return (o);
}
