/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:56:35 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/19 15:26:50 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <string>

class AMateria
{
	public:
		// Constructors
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const & cpy);

		// Destructors
		virtual ~AMateria(void);

		// Getters - Setters
		std::string const	& getType(void) const;

		// Overloaded Operators
		AMateria	& operator= (AMateria const & rhs);

		// Member Functions
		virtual AMateria	* clone(void) const = 0;
		virtual void		use(ICharacter & target);

	protected:
		std::string	_type;
};

#endif
