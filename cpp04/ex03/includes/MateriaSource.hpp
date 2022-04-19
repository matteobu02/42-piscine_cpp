/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 21:31:26 by mbucci            #+#    #+#             */
/*   Updated: 2022/04/17 15:16:54 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <string>

class MateriaSource : public IMateriaSource
{
	public:
		// Constructors
		MateriaSource(void);
		MateriaSource(MateriaSource const & cpy);

		// Destructors
		virtual ~MateriaSource(void);

		// Overloaded Operators
		MateriaSource	& operator= (MateriaSource const & rhs);

		// Member Functions
		void		learnMateria(AMateria * m);
		AMateria	* createMateria(std::string const & type);

	private:
		AMateria	* _sources[4];
};

#endif
