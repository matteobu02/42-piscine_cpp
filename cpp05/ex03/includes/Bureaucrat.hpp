/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:25:41 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/25 15:50:12 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "AForm.hpp"
#include <string>
#include <fstream>

class AForm;

class Bureaucrat
{
	public:
		// Constructors
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &cpy);

		// Destructor
		virtual ~Bureaucrat(void);

		// Getters
		std::string	getName(void) const;
		int			getGrade(void) const;

		// Overloaded Operator
		Bureaucrat	&operator= (Bureaucrat const &rhs);

		// Member Functions
		void	increment(void) throw();
		void	decrement(void) throw();
		void	signForm(AForm &form) const;
		void	executeForm(AForm const &form) const;

		// Exceptions
		class GradeTooHighException : public std::exception
		{
			char const	* what(void) const throw();
		};

		class GradeTooLowException : public std::exception
		{
			char const	* what(void) const throw();
		};

	private:
		std::string	_name;
		int			_grade;
};

std::ostream	&operator<< (std::ostream &o, Bureaucrat const & rhs);

#endif
