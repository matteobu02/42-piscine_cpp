/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 19:07:34 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/17 12:55:27 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		// Constructors
		Ice(void);
		Ice(Ice const & cpy);

		// Destructors
		virtual ~Ice(void);

		// Overloaded Operators
		Ice	& operator= (Ice const & rhs);
		
		// Member Functions
		AMateria	* clone(void) const;
		void		use(ICharacter & target);
};

#endif
