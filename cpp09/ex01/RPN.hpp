/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:18:35 by mbucci            #+#    #+#             */
/*   Updated: 2023/04/19 18:05:06 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <string>
#include <exception>

class RPN
{
	public:
		RPN();
		RPN(const RPN& other);
		virtual ~RPN();
		RPN operator= (const RPN& other);

		int evaluate(const std::string& e);

		class InvalidExprException : public std::exception
		{
			const char* what() const throw()
			{
				return "Error";
			}
		};

		class ZeroDevisionException : public std::exception
		{
			const char* what() const throw()
			{
				return "Error: zero division is impossible.";
			}
		};

	private:
		bool _m_is_operator(const char c) const;
		int _m_do_op(const int n1, const int n2, const char c) const;

		std::stack<int> _m_stack;
};
