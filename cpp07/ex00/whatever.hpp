/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 18:48:42 by mbucci            #+#    #+#             */
/*   Updated: 2022/05/03 17:21:16 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void	swap(T &e1, T &e2)
{
	T	tmp;

	tmp = e1;
	e1 = e2;
	e2 = tmp;;

	return ;
}

template <typename T>
T		min(T &e1, T &e2)
{
	return (e1 < e2 ? e1 : e2);
}

template <typename T>
T		max(T &e1, T &e2)
{
	return (e1 > e2 ? e1 : e2);
}

#endif
