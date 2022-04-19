/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 21:56:31 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/16 18:12:13 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
	public:
		// Constructors
		Brain(void);
		Brain(Brain const & cpy);

		// Destructors
		~Brain(void);

		// Getters - Setters
		std::string	getIdeas(int index) const;

		// Overloaded Operators
		Brain	& operator= (Brain const & rhs);
	
	private:
		std::string	_ideas[100];
};

#endif
