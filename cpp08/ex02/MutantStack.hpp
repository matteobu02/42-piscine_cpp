/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:52:52 by mbucci            #+#    #+#             */
/*   Updated: 2022/05/09 16:44:35 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:

        typedef typename std::stack<T>::container_type::iterator                iterator;
        typedef typename std::stack<T>::container_type::const_iterator          const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator        reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator  const_reverse_iterator;

		MutantStack(void) : std::stack<T>() {};
		MutantStack(MutantStack const &cpy) : std::stack<T>(cpy) {};

		virtual ~MutantStack(void) {};

		MutantStack	&operator= (MutantStack const &rhs)
		{
			if (this != &rhs)
				std::stack<T>::operator= (rhs);
			return (*this);
		}

		iterator				begin(void) {return (std::stack<T>::c.begin());}
		iterator				end(void) {return (std::stack<T>::c.end());}
		reverse_iterator		rbegin(void) {return (std::stack<T>::c.rbegin());}
		reverse_iterator		rend(void) {return (std::stack<T>::c.rend());}
		const_iterator			cbegin(void) const {return (std::stack<T>::e.cbegin());}
		const_iterator			cend(void) const {return (std::stack<T>::e.cend());}
		const_reverse_iterator	crbegin(void) const {return (std::stack<T>::e.crbegin());}
		const_reverse_iterator	crend(void) const {return (std::stack<T>::e.crend());}
};

#endif
