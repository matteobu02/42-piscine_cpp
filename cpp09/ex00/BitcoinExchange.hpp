/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:09:24 by mbucci            #+#    #+#             */
/*   Updated: 2023/04/14 16:42:57 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <map>
#include <string>
#include <exception>

class BitcoinExchange
{
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange(const char* db_path);
		virtual ~BitcoinExchange();
		BitcoinExchange& operator= (const BitcoinExchange& other);

		float getBtcValue(const std::string& date, const float& amount) const;

		////////////////
		// EXCEPTIONS //
		////////////////

		class NoDbException : public std::exception 
		{
			const char* what() const throw()
			{
				return ("Erorr: could not read db.");
			}
		};

		class InvalidDateException : public std::exception 
		{
			const char* what() const throw()
			{
				return ("Erorr: date format not valid.");
			}
		};

		class NegativeAmountException : public std::exception 
		{
			const char* what() const throw()
			{
				return ("Erorr: not a positive number.");
			}
		};

		class TooLargeAmountException : public std::exception 
		{
			const char* what() const throw()
			{
				return ("Erorr: too large a number.");
			}
		};

	private:
		std::map<std::string, float> _m_db;

		bool _m_check_date(const std::string& date) const;
};
