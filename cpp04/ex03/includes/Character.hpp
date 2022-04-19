/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 21:15:38 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/17 15:05:11 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>

class Character : public ICharacter
{
	public:
		// Constructors
		Character(void);
		Character(std::string name);
		Character(Character const & cpy);

		// Destructors
		virtual ~Character(void);

		// Getters - Setters
		std::string const	& getName(void) const;

		// Overloaded Operators
		Character	& operator= (Character const & rhs);

		// Member Functions
		void	equip(AMateria * m);
		void	unequip(int idx);
		void	use(int idx, ICharacter & target);

	private:
		std::string	_name;
		AMateria	* _inventory[4];
};

#endif
