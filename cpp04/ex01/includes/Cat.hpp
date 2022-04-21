/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:32:02 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/21 15:26:58 by mbucci           ###   ########.fr       */
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
		virtual ~Cat(void);

		// Getters - Setters
		Brain	* getBrain(void) const;

		// Overloaded Operators
		Cat	& operator= (Cat const & rhs);

		// Member Functions
		void	makeSound(void) const;

	private:
		Brain	* _brain;
};

#endif
