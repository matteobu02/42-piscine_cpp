/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:24:43 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/16 18:43:50 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>

class AAnimal
{
	public:
		// Constructors
		AAnimal(void);
		AAnimal(std::string const & type);
		AAnimal(AAnimal const & cpy);
		
		// Destructors
		virtual ~AAnimal(void);

		// Getters - Setters
		std::string getType(void) const;
		void		setType(std::string const & type);

		// Overloaded Operators
		AAnimal	& operator= (AAnimal const & rhs);

		// Member Functions 
		virtual void	makeSound(void) const = 0;

	private:
		std::string	_type;
};

#endif
