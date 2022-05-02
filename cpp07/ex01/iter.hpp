/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 19:28:38 by mbucci            #+#    #+#             */
/*   Updated: 2022/05/03 01:11:24 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template <typename T, typename S>
void	iter(T *tab, S const &size, void (*f)(T const &arg))
{
	for (S iterator = 0; iterator < size; iterator++)
		f(tab[iterator]);
	return ;
}

#endif
