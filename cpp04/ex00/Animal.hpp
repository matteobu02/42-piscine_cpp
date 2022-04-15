/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:24:43 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/15 14:35:05 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
	public:
		// Constructors
		Animal(void);
		Animal(std::string const & type);
		Animal(Animal const & cpy);
		
		// Destructors
		~Animal(void);

		// Getters - Setters
		std::string getType(void) const;
		void		setType(std::string const & type);

		// Overloaded Operators
		Animal	& operator= (Animal const & rhs);

		// Member Functions 
		void	makeSound(void) const;

	private:
		std::string	type;
};

#endif
