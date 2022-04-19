/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:25:41 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/19 14:14:49 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>

class Bureaucrat
{
	public:
		// Constructors
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		
		// Getters - Setters
		std::string	getName(void) const;
		int			getGrade(void) const;

		// Member Functions
		void	increment(void);
		void	decrement(void);

	private:
		std::string	_name;
		int			_grade;
};

#endif
