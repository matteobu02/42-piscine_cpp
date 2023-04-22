/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:40:13 by mbucci            #+#    #+#             */
/*   Updated: 2023/04/22 23:04:44 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <stdlib.h>
#include <sys/time.h>
#include <algorithm>
#include <iostream>

PmergeMe::PmergeMe() {}
PmergeMe::PmergeMe(const PmergeMe& other) : _m_vec(other._m_vec) {}
PmergeMe::~PmergeMe() {}

PmergeMe PmergeMe::operator= (const PmergeMe& other)
{
	if (&other != this)
	{
		_m_vec = other._m_vec;
	}
	return *this;
}

void PmergeMe::sort(const int ac, const char **av)
{
	_m_vec = _m_fill_vec(ac, av);
	_m_dq = std::deque<int>(_m_vec.begin(), _m_vec.end());

	std::cout << "Before: ";
	_m_print_vec();

	double stime = _m_get_ctime();
	_m_merge_insert(_m_vec);
	double t = _m_get_delta(stime);

	std::cout << "After: ";
	_m_print_vec();

	_m_print_time(_m_vec, "vector", t);

	stime = _m_get_ctime();
	_m_merge_insert(_m_dq);
	t = _m_get_delta(stime);

	_m_print_time(_m_dq, "deque", t);

	_m_vec.clear();
	_m_dq.clear();
}

template <class T>
void PmergeMe::_m_merge_insert(T& cont)
{
    const int threshold = 2;

    if (cont.size() < threshold) {
        std::sort(cont.begin(), cont.end());
        return;
    }

    typename T::iterator mid = cont.begin() + cont.size() / 2;
    T left(cont.begin(), mid);
    T right(mid, cont.end());

    _m_merge_insert(left);
    _m_merge_insert(right);

    std::merge(left.begin(), left.end(), right.begin(), right.end(), cont.begin());
}

std::vector<int> PmergeMe::_m_fill_vec(const int ac, const char **av) const
{
	std::vector<int> ret;

	for (int i = 1; i < ac; i++)
	{
		int elem = atoi(av[i]);
		if (std::find(ret.begin(), ret.end(), elem) != ret.end())
			throw DuplicatesInSetException();
		if (elem < 0)
			throw NegativeNumberException();
		ret.push_back(elem);
	}
	return ret;
}

void PmergeMe::_m_print_vec() const
{
	for (std::vector<int>::const_iterator it = _m_vec.begin(); it != _m_vec.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

template <class T>
void PmergeMe::_m_print_time(const T& cont, const std::string& name, double t) const
{
	std::cout << "Time to process a range of " << cont.size() << " elements with std::";
	std::cout << name << " : " << t << " us";
	std::cout << std::endl;
}

double PmergeMe::_m_get_ctime() const
{
	struct timeval t;
	gettimeofday(&t, NULL);
	return ((t.tv_sec * 1000) + (t.tv_usec * 0.001));
}

double PmergeMe::_m_get_delta(long long t) const
{
	if (t > 0)
		return (_m_get_ctime() - t);
	return 0;
}
