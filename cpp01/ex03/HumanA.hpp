/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 23:43:04 by mbucci            #+#    #+#             */
/*   Updated: 2022/03/17 17:03:45 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		void	attack(void) const;
		
	private:
		std::string	_name;
		Weapon		&_weapon;
};

#endif
