/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:19:36 by mbucci            #+#    #+#             */
/*   Updated: 2022/03/08 13:29:27 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class	Contact
{
	public:
		void	setFirstName(std::string fname);
		void	setLastName(std::string lname);
		void	setNickname(std::string nname);
		void	setPhone(std::string phone);
		void	setSecret(std::string secret);

		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickname(void) const;
		std::string	getPhone(void) const;
		std::string	getSecret(void) const;

		void	print_infos(void) const;
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone;
		std::string	_secret;
};

#endif
