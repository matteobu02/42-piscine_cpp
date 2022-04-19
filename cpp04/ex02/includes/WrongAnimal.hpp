/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:39:50 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/16 12:47:35 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
	public:
		// Constructors
		WrongAnimal(void);
		WrongAnimal(std::string const & type);
		WrongAnimal(WrongAnimal const & cpy);

		// Destructors
		~WrongAnimal(void);

		// Getters - Setters
		std::string getType(void) const;
		void		setType(std::string const & type);

		// Overloaded Functions
		WrongAnimal	& operator= (WrongAnimal const & rhs);

		// Member Functions
		void	makeSound(void) const;

	private:
		std::string	_type;
};

#endif
