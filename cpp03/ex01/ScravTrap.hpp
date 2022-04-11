/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:08:48 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/11 13:13:38 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRAVTRAP_HPP
#define SCRAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScravTrap : public ClapTrap
{
	public:
		// Constructors
		ScravTrap(void);
		ScravTrap(std::string name);
		ScravTrap(ScravTrap const & cpy);

		// Destructors
		~ScravTrap(void);

		// Overloaded Operators
		ScravTrap	& operator= (ScravTrap const & rhs);

		// Member Functions
		void	attack(std::string const & target);
		void	guardGate(void) const;
};

#endif
