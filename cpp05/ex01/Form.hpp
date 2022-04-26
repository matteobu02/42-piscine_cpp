/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:33:17 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/26 16:58:54 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <fstream>

class Bureaucrat;

class Form
{
	public:
		// Constructors
		Form(void);
		Form(std::string name, int signGrade, int execGrade);
		Form(Form const &cpy);

		// Destructor
		~Form(void);

		// Getters
		std::string	getName(void) const;
		bool		getSigned(void) const;
		int			getSignGrade(void) const;
		int			getExecGrade(void) const;

		// Overloaded Operators
		Form	& operator= (Form const &rhs);

		// Member Functions
		void	beSigned(Bureaucrat const &bu) throw();

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
		std::string const	_name;
		bool				_signed;
		int const			_signGrade;
		int const			_execGrade;
};

std::ostream	& operator<< (std::ostream &o, Form const &rhs);

#endif
