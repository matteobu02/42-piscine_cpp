/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 23:35:42 by mbucci            #+#    #+#             */
/*   Updated: 2022/03/16 23:41:04 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string const	&Weapon::getType(void) const
{
	return (this->_type);
}

void	setType(std::string type)
{
	this->_type = type;
}
