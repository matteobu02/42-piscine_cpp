/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 01:26:38 by mbucci            #+#    #+#             */
/*   Updated: 2022/05/03 01:37:22 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename >
class Array
{
	public:
		Array(void);
		Array(Array const &cpy);
		Array(unsigned int n);

		virtual ~Array(void);
};

#endif
