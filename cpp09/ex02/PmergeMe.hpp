/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:36:42 by mbucci            #+#    #+#             */
/*   Updated: 2023/04/20 16:42:20 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <deque>
#include <string>
#include <exception>

class PmergeMe
{
	public:
		PmergeMe();
		PmergeMe(const PmergeMe& other);
		virtual ~PmergeMe();
		PmergeMe operator= (const PmergeMe& other);

		void sort(const int ac, const char **av);

		class DuplicatesInSetException : public std::exception
		{
			const char* what() const throw()
			{
				return "Error: found duplicate!";
			}
		};

		class NegativeNumberException : public std::exception
		{
			const char* what() const throw()
			{
				return "Error: found negative number!";
			}
		};

	private:
		std::vector<int> _m_vec;
		std::deque<int> _m_dq;

		template <class T>
		void _m_merge_insert(T& cont);

		std::vector<int> _m_fill_vec(const int ac, const char **av) const;
		void _m_print_vec() const;

		template <class T>
		void _m_print_time(const T& cont, const std::string& name, double t) const;

		double _m_get_ctime() const;
		double _m_get_delta(long long t) const;
};
