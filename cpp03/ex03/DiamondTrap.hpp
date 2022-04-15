/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:01:07 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/15 13:10:51 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		// Constructors
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & cpy);

		// Destructors
		~DiamondTrap(void);

		// Getters - Setters
		std::string	getName(void) const;

		// Overloaded Operators
		DiamondTrap	& operator= (DiamondTrap const & rhs);

		// Member Functions
		void	whoAmI(void) const;

		// Inheritance Stuff
		using	FragTrap::_hp;
		using	ScavTrap::_ep;
		using	FragTrap::_ad;
		using	ScavTrap::attack;

	private:
		std::string	_name;
};

#endif
