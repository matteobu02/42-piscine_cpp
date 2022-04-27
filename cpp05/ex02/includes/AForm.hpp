/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:33:17 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/27 14:35:28 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <fstream>

class Bureaucrat;

class AForm
{
	public:
		// Constructors
		AForm(void);
		AForm(std::string name, int signGrade, int execGrade);
		AForm(AForm const &cpy);

		// Destructor
		virtual ~AForm(void);

		// Getters
		std::string	getName(void) const;
		bool		getSigned(void) const;
		int			getSignGrade(void) const;
		int			getExecGrade(void) const;

		// Overloaded Operators
		AForm	&operator= (AForm const &rhs);

		// Member Functions
		void			beSigned(Bureaucrat const &bu);
		void 			execute(Bureaucrat const &executor) const; 
		void virtual	doTheThing(void) const = 0;

		// Exceptions
		class GradeTooHighException : public std::exception
		{
			char const	*what(void) const throw();
		};

		class GradeTooLowException : public std::exception
		{
			char const	*what(void) const throw();
		};

		class FormAlreadySignedException : public std::exception
		{
			char const	*what(void) const throw();
		};

		class FormNotSignedException : public std::exception
		{
			char const	*what(void) const throw();
		};

	private:
		std::string const	_name;
		bool				_signed;
		int const			_signGrade;
		int const			_execGrade;
};

std::ostream	& operator<< (std::ostream &o, AForm const &rhs);

#endif
