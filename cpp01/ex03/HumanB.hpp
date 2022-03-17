/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:45:54 by mbucci            #+#    #+#             */
/*   Updated: 2022/03/17 17:34:37 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB
{
	public:
		HumanB(std::string name);

		void	attack(void) const;
		void	setWeapon(Weapon &weapon);
		
	private:
		Weapon		*_weapon;
		std::string	_name;
};

#endif
