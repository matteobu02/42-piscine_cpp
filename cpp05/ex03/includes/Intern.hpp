/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:42:47 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/25 17:45:29 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include <string>

class Intern
{
	public:
		// Constructors
		Intern(void);
		Intern(Intern const &cpy);

		// Destructor
		virtual ~Intern(void);

		// Overloaded Operator
		Intern	&operator= (Intern const &rhs);

		// Member Function
		AForm	*makeForm(std::string formName, std::string formTarget) const throw();

		// Exceptions
		class FormDoesNotExistException : public std::exception
		{
			char const	*what(void) const throw();
		};
};

#endif
