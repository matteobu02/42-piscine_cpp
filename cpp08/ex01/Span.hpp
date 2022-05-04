/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:59:33 by mbucci            #+#    #+#             */
/*   Updated: 2022/05/04 16:09:45 by mbucci           ###   ########.fr       */
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

		void	addNumber(int n);
		void	addNumbers(void);
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

	private:
		Span(void);

		unsigned int	_N;
		std::list<int>	_lst;
};

#endif
