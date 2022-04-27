/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 12:26:48 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/27 14:33:36 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <string>
#include <fstream>

class PresidentialPardonForm : public AForm
{
	public:
		// Constructors
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &cpy);

		// Destructor
		virtual ~PresidentialPardonForm(void);

		// Getter
		std::string	getTarget(void) const;

		// Overloaded Operator
		PresidentialPardonForm	&operator= (PresidentialPardonForm const &rhs);

		// Member Functions
		void	doTheThing(void) const;

	private:
		std::string	_target;
};

std::ostream	&operator<< (std::ostream &o, PresidentialPardonForm const &rhs);

#endif
