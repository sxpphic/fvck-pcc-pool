/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:25:49 by vipereir          #+#    #+#             */
/*   Updated: 2023/05/24 16:57:36 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
  //std::cout << "contact constructor 🏗️" << std::endl;
}

Contact::~Contact(void) {
 // std::cout << "contact destructor 💣💀" << std::endl;
}

std::string try_set(std::string msg)
{
	std::string buf;

	while (666)
	{
		std::cout << msg;
		std::cin.clear();
		std::getline(std::cin, buf);
	//	std::cout << std::endl;
		if (!buf.empty())
			break ;
		else
		{
			std::cout << "empty field, please try again 😵‍💫" << std::endl;
			continue ;
		}
	}
	return (buf);
}

void	Contact::setFirstName(void)
{
	this->_FirstName = try_set("Name 😃: ");
	return ;
}

void	Contact::setLastName(void)
{
	this->_LastName = try_set("Last Name 🫥: ");
	return ;
}

void	Contact::setNickName(void)
{
	this->_NickName = try_set("Nick Name 🕵️‍♀️: ");
	return ;
}

void	Contact::setPhoneNumber(void)
{
	this->_PhoneNumber = try_set("Phone Number 📞: ");
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
		to_format.append("."); // += 
	}
	if (to_format.size() < 10)
	{
		to_format.resize(10, ' ');
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
	return (format_string(this->_PhoneNumber));
}