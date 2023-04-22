/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:18:28 by mbucci            #+#    #+#             */
/*   Updated: 2023/04/20 13:15:58 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}
RPN::RPN(const RPN& other) : _m_stack(other._m_stack) {}
RPN::~RPN() {}

RPN RPN::operator= (const RPN& other)
{
	if (&other != this)
		_m_stack = other._m_stack;
	return *this;
}

int RPN::evaluate(const std::string& e)
{
	int n1, n2;

	for (size_t i = 0; i < e.length(); i++)
	{
		if (e[i] == ' ')
			continue;
		else if (isdigit(e[i]))
			_m_stack.push(e[i] - 48);
		else if (_m_is_operator(e[i]))
		{
			if (_m_stack.size() < 2)
				throw InvalidExprException();
			n2 = _m_stack.top();
			_m_stack.pop();
			n1 = _m_stack.top();
			_m_stack.pop();
			_m_stack.push(_m_do_op(n1, n2, e[i]));
		}
		else
			throw InvalidExprException();
	}

	if (_m_stack.size() != 1)
		throw InvalidExprException();

	int ret = _m_stack.top();
	_m_stack.pop();

	return ret;
}

bool RPN::_m_is_operator(const char c) const
{
	return ((c == '+') || (c == '-') || (c == '*') || (c == '/'));
}

int RPN::_m_do_op(const int n1, const int n2, const char c) const
{
	if (c == '+')
		return (n1 + n2);
	else if (c == '-')
		return (n1 - n2);
	else if (c == '*')
		return (n1 * n2);
	else
	{
		if (!n2)
			throw ZeroDevisionException();
		return (n1 / n2);
	}
}
