/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:12:34 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/27 14:23:15 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <string>
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	public:
		// Constructors
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &cpy);

		// Destructor
		virtual ~ShrubberyCreationForm(void);

		// Getter
		std::string	getTarget(void) const;

		// Overloaded Operator
		ShrubberyCreationForm	&operator= (ShrubberyCreationForm const &rhs);

		// Member Functions
		void	doTheThing(void) const;

	private:
		std::string	_target;
};

std::ostream	&operator<< (std::ostream &o, ShrubberyCreationForm const &rhs);

#endif
