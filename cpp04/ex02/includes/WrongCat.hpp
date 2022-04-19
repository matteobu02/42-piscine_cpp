/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 21:35:10 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/15 21:37:04 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		// Constructors
		WrongCat(void);
		WrongCat(WrongCat const & cpy);

		// Destructors
		~WrongCat(void);

		// Overloaded Operators
		WrongCat	& operator= (WrongCat const & rhs);

		// Member Functions
		void	makeSound(void) const;
};

#endif
