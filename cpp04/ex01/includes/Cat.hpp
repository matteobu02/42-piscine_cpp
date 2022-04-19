/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:32:02 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/15 23:39:37 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
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
