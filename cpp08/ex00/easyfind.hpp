/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:47:41 by mbucci            #+#    #+#             */
/*   Updated: 2022/05/04 13:26:07 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>
#include <list>

class ItemNotFoundException : public std::exception
{
	public:
		char const	*what(void) const throw()
		{
			return ("Item not found in container");
		}
};

template <typename T>
typename T::iterator	easyfind(T &cont, int num)
{
	typename T::iterator	it = std::find(cont.begin(), cont.end(), num);
	if (it != cont.end())
		return (it);
	else
		throw (ItemNotFoundException());
}

#endif
