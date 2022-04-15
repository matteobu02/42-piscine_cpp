/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 22:08:09 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/11 14:15:56 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
	public:
		// Constructors
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & cpy);

		// Destructors
		~ClapTrap(void);

		// Getters - Setters
		std::string	getName(void) const;
		int			getHP(void) const;
		int			getEP(void) const;
		int			getAD(void) const;

		void		setName(std::string name);
		void		setHP(int amount);
		void		setEP(int amount);
		void		setAD(int amount);

		// Overloaded Operators
		ClapTrap	& operator= (ClapTrap const & rhs);

		// Member Functions
		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	protected:
		std::string	_name;
		int			_hp;
		int			_ep;
		int			_ad;
};

#endif
