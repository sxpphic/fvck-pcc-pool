/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:10:55 by vipereir          #+#    #+#             */
/*   Updated: 2023/05/25 14:14:45 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool	is_nubmer(std::string number)
{
	std::string::iterator i = number.begin();

	if (i == number.end())
		return (false);
	if (*number.begin() == '-' || *number.begin() == '+')
		i++;
	while (i < number.end())
	{
		if (!isdigit(*i))
			return (false);
		i++;
	}
	return (true);
}

int fake_toi(std::string number)
{
	std::string::iterator i = number.begin();
	int nb = 0;

	while (i < number.end())
	{
		nb += *i - 48;
		if (i < number.end() - 1)
			nb *= 10;
		i++;
	}
	if (*number.begin() == '-')
		return (nb * -1);
	return (nb);
}

std::string try_set_number(std::string msg)
{
	std::string buf;

	while (buf.empty())
	{
		std::cout << msg;
		std::getline(std::cin, buf);
		if (!is_nubmer(buf))
		{
			std::cout << "numbers only 🔢 !!!" << std::endl;
			buf.clear();
		}
		if (std::cin.eof())
			exit (0);
	}
	return (buf);
}

std::string try_set(std::string msg)
{
	std::string buf;

	while (buf.empty())
	{
		std::cout << msg;
		std::getline(std::cin, buf);
		if (std::cin.eof())
			exit (0);
	}
	return (buf);
}
