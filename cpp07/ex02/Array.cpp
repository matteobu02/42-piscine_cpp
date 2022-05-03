/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 12:20:22 by mbucci            #+#    #+#             */
/*   Updated: 2022/05/03 14:53:49 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

//////////////////
// Constructors //
//////////////////

template <typename T>
Array<T>::Array(void) : _size(0), _array(NULL)
{
}

template <typename T>
Array<T>::Array(Array<T> const &cpy) : _size(cpy._size)
{
	if (this->_size)
	{
		this->_array = new T [this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = cpy._array[i];
	}
	return ;
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	if (this->_size)
	{
		this->_array = new T [this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = 0;
	}
	else
		this->_array = NULL;
	return ;
}

////////////////
// Destructor //
////////////////

template <typename T>
Array<T>::~Array(void)
{
	if (this->_size)
		delete [] this->_array;
	return ;
}

//////////////////////////
// Overloaded Operators //
//////////////////////////

template <typename T>
Array<T>	&Array<T>::operator= (Array<T> const &rhs)
{
	if (this->_array)
		delete [] this->_array;

	this->_size = rhs._size;
	if (this->_size)
	{
		this->_array = new T [this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = rhs._array[i];
	}
	return (*this);
}

template <typename T>
T			&Array<T>::operator[] (int const &index)
{
	if (index < 0 || static_cast<unsigned int>(index) >= this->_size)
		throw (Array<T>::OutOfRangeException());
	return (this->_array[index]);
}

/////////////////////
// Member Function //
/////////////////////

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return (this->_size);
}

////////////////
// Exceptions //
////////////////

template <typename T>
char const	*Array<T>::OutOfRangeException::what(void) const throw()
{
	return ("Index out of range");
}
