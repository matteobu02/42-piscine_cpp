/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:59:33 by mbucci            #+#    #+#             */
/*   Updated: 2022/05/09 15:21:17 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <list>

class Span
{
	public:
		Span(unsigned int N);
		Span(Span const &cpy);

		virtual ~Span(void);

		unsigned int	getN(void) const;
		std::list<int>	getLst(void) const;

		Span	&operator= (Span const &rhs);

		int		size(void) const;
		void	addNumber(int n);
		void	addNumbers(std::list<int>::iterator start, std::list<int>::iterator last);
		int		shortestSpan(void) const;
		int		longestSpan(void) const;

		class EmptyListException : public std::exception
		{
			char const	*what(void) const throw();
		};
		class TooFewItemsInListException : public std::exception
		{
			char const	*what(void) const throw();
		};
		class ListAlreadyFullException : public std::exception
		{
			char const	*what(void) const throw();
		};
		class RangeTooBigException : public std::exception
		{
			char const	*what(void) const throw();
		};

	private:
		Span(void);

		unsigned int	_N;
		std::list<int>	_lst;
};

#endif
