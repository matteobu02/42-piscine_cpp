/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 19:11:07 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/17 12:41:20 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		// Constructors
		Cure(void);
		Cure(Cure const & cpy);

		// Destructors
		virtual ~Cure(void);

		// Overloaded Operators
		Cure	& operator= (Cure const & rhs);

		// Member Functions
		AMateria	*clone(void) const;
		void		use(ICharacter & target);
};

#endif
