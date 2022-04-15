/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:32:02 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/15 14:37:18 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

class Dog : public Animal
{
	public:
		// Constructors
		Dog(void);
		Dog(Dog const & cpy);

		// Destructors
		~Dog(void);

		// Overloaded Operators
		Dog	& operator= (Dog const & rhs);
};

#endif
