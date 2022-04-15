/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:08:48 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/15 12:47:39 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRAVTRAP_HPP
#define SCRAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap
{
	public:
		// Constructors
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & cpy);

		// Destructors
		~ScavTrap(void);

		// Overloaded Operators
		ScavTrap	& operator= (ScavTrap const & rhs);

		// Member Functions
		void	attack(std::string const & target);
		void	guardGate(void) const;
};

#endif
