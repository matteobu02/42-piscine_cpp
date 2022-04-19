/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:32:02 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/16 18:49:57 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		// Constructors
		Cat(void);
		Cat(Cat const & cpy);

		// Destructors
		~Cat(void);

		// Getters - Setters
		Brain	* getBrain(void) const;

		// Overloaded Operators
		Cat	& operator= (Cat const & rhs);

		// Member Functions
		virtual void	makeSound(void) const;

	private:
		Brain	* _brain;
};

#endif
