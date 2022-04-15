/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:05:19 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/13 16:45:36 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap
{
	public:
		// Constructors
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & cpy);

		// Destructors
		~FragTrap(void);

		// Overloaded Operators
		FragTrap	& operator= (FragTrap const & rhs);

		// Member Functions
		void	highFivesGuys(void) const;
};

#endif
