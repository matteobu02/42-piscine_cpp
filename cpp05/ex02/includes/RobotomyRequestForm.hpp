/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:26:52 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/27 14:24:10 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <string>
#include <fstream>

class RobotomyRequestForm : public AForm
{
	public:
		// Constructors
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &cpy);

		// Destructor
		virtual ~RobotomyRequestForm(void);

		// Getter
		std::string	getTarget(void) const;

		// Overloaded Operators
		RobotomyRequestForm	&operator= (RobotomyRequestForm const &rhs);

		// Member Functions
		void	doTheThing(void) const;

	private:
		std::string	_target;
};

std::ostream	&operator<< (std::ostream &o, RobotomyRequestForm const &rhs);

#endif
