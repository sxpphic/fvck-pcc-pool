/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:25:49 by vipereir          #+#    #+#             */
/*   Updated: 2023/05/24 18:44:55y vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


Contact::Contact(void) {
}

Contact::~Contact(void) {
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

std::string try_set_number(std::string msg)
{
	std::string buf;

//	std::getline(std::cin, buf);
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

void	Contact::setFirstName(void)
{
	this->_FirstName = try_set("First Name 😃: ");
	return ;
}

void	Contact::setLastName(void)
{
	this->_LastName = try_set("Last Name 👨‍👩‍👧‍👦: ");
	return ;
}

void	Contact::setNickName(void)
{
	this->_NickName = try_set("Nick Name 🕵️‍♀️: ");
	return ;
}

void	Contact::setPhoneNumber(void)
{
	this->_PhoneNumber = try_set_number("Phone Number 📞: ");
	return ;
}

void	Contact::setDarkestSecret(void)
{
	this->_DarkestSecret = try_set("Darkest Secret 😮🤫: ");
	return ;
}

std::string	format_string(std::string to_format)
{
	if (to_format.size() > 10)
	{
		to_format.resize(9);
		to_format.append(".");
	}
	return (to_format);
}

std::string	Contact::getFirstName(void)
{
	return (format_string(this->_FirstName));
}

std::string	Contact::getLastName(void)
{
	return (format_string(this->_LastName));
}

std::string	Contact::getNickName(void)
{
	return (format_string(this->_NickName));
}

std::string	Contact::getPhoneNumber(void)
{
	return (this->_PhoneNumber);
}