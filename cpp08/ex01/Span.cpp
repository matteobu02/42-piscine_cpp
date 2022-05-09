/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:16:57 by mbucci            #+#    #+#             */
/*   Updated: 2022/05/09 15:24:41 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <numeric>

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

int		Span::size(void) const
{
	return (this->_lst.size());
}

void	Span::addNumber(int n)
{
	if (this->_lst.size() == this->_N)
		throw (Span::ListAlreadyFullException());
	this->_lst.push_back(n);
	return ;
}

void	Span::addNumbers(std::list<int>::iterator first, std::list<int>::iterator last)
{
	if (!this->_lst.size())
		throw (Span::EmptyListException());
	else if (this->_lst.size() == this->_N)
		throw (Span::ListAlreadyFullException());
	else
	{
		if (std::distance(first, last) + this->_lst.size() > this->_N)
			throw (Span::RangeTooBigException());
		else
			this->_lst.insert(this->_lst.end(), first, last);
	}
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
		std::list<int>	tmp;
		int				(*iabs)(int) = &std::abs;

		std::adjacent_difference(this->_lst.begin(), this->_lst.end(), std::back_inserter(tmp));
		std::transform(tmp.begin(), tmp.end(), tmp.begin(), iabs);
		return (*min_element(tmp.begin(), tmp.end()));
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

char const	*Span::RangeTooBigException::what(void) const throw()
{
	return ("Given range does not fit in the array");
}
