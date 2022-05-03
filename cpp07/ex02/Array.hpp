/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 01:26:38 by mbucci            #+#    #+#             */
/*   Updated: 2022/05/03 13:48:49 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>

template <typename T>
class Array
{
	public:
		Array<T>(Array<T> const &cpy);
		Array<T>(unsigned int n);

		virtual ~Array<T>(void);

		Array<T>	&operator= (Array<T> const &rhs);
		T			&operator[] (int const &index);

		unsigned int	size(void) const;

		class OutOfRangeException : public std::exception
		{
			char const	*what(void) const throw();
		};

	private:
		Array<T>(void);

		unsigned int	_size;
		T				*_array;
};

#endif
