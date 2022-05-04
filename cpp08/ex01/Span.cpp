/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:16:57 by mbucci            #+#    #+#             */
/*   Updated: 2022/05/04 16:19:41 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

//////////////////
// Constructors //
//////////////////

Span::Span(void)
{
}

Span::Span(unsigned int N) : _N(N)
{
}

Span::Span(Span const &cpy) : _N(cpy._N), _lst(cpy._lst)
{
}

////////////////
// Destructor //
////////////////

Span::~Span(void)
{
}

///////////////
// Accessors //
///////////////

unsigned int	Span::getN(void) const
{
	return (this->_N);
}

std::list<int>	Span::getLst(void) const
{
	return (this->_lst);
}

/////////////////////////
// Overloaded Operator //
/////////////////////////

Span	&Span::operator= (Span const &rhs)
{
	if (this != &rhs)
	{
		this->_N = rhs._N;
		this->_lst = rhs._lst;
	}
	return (*this);
}

//////////////////////
// Member Functions //
//////////////////////

void	Span::addNumber(int n)
{
	if (this->_lst.size() == this->_N)
		throw (Span::ListAlreadyFullException());
	this->_lst.push_back(n);
	return ;
}

void	Span::addNumbers(void)
{
	return ;
}

int		Span::shortestSpan(void) const
{
	if (!this->_lst.size())
		throw (Span::EmptyListException());
	else if (this->_lst.size() <= 2)
		throw (Span::TooFewItemsInListException());
	else
	{
		;
	}
	return (0);
}

int		Span::longestSpan(void) const
{
	if (!this->_lst.size())
		throw (Span::EmptyListException());
	else if (this->_lst.size() <= 2)
		throw (Span::TooFewItemsInListException());
	else
	{
		int	min = *std::min_element(this->_lst.begin(), this->_lst.end());
		int	max = *std::max_element(this->_lst.begin(), this->_lst.end());
		return (max - min);
	}
}

////////////////
// Exceptions //
////////////////

char const	*Span::EmptyListException::what(void) const throw()
{
	return ("List is empty");
}

char const	*Span::TooFewItemsInListException::what(void) const throw()
{
	return ("Too few items in list to produce a span");
}

char const	*Span::ListAlreadyFullException::what(void) const throw()
{
	return ("List is already full");
}
