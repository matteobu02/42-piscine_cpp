/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:49:46 by mbucci            #+#    #+#             */
/*   Updated: 2023/04/17 13:42:51 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <sstream>
#include <fstream>

BitcoinExchange::BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) : _m_db(other._m_db)
{}

BitcoinExchange::BitcoinExchange(const char* db_path)
{
	std::ifstream db(db_path);
	if (!db.is_open())
		throw NoDbException();

	std::string line;
	std::string date;
	float value;

	while (std::getline(db, line))
	{
		std::stringstream ss(line);
		if (std::getline(ss, date, ',') && ss >> value)
			_m_db[date] = value;
	}
	db.close();
}

BitcoinExchange::~BitcoinExchange()
{}

BitcoinExchange& BitcoinExchange::operator= (const BitcoinExchange& other)
{
	if (&other != this)
		_m_db = other._m_db;
	return *this;
}

float BitcoinExchange::getBtcValue(const std::string& date, const float& amount) const
{
	if (amount < 0)
		throw NegativeAmountException();
	if (amount > 1000)
		throw TooLargeAmountException();
	if (!_m_check_date(date))
		throw InvalidDateException();

	std::map<std::string, float>::const_iterator found = _m_db.find(date);
	if (found == _m_db.end())
	{
		found = _m_db.upper_bound(date);
		if (found != _m_db.begin())
			--found;
	}

	return found->second;
}

bool BitcoinExchange::_m_check_date(const std::string& date) const
{
	int year, month, day;
	char separator;
	std::istringstream ss(date);
	ss >> year >> separator >> month >> separator >> day;

	if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
		return false;
	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (day > 30)
			return false;
	}
	else if (month == 2)
	{
		if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
		{
			if (day > 29)
				return false;
		}
		else
		{
			if (day > 28)
				return false;
		}
	}
	return true;
}
