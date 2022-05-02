/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:29:20 by mbucci            #+#    #+#             */
/*   Updated: 2022/05/02 16:18:05 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <cstdint>

class Data
{
	public:
		uintptr_t	serialize(Data *ptr);
		Data		*deserialize(uintptr_t raw);

		int	x;
};

#endif
