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
	return ;
}

Contact::~Contact(void) {
	return ;
}




void	Contact::setFirstName(void)
{
	this->_FirstName = try_set("First Name 😃: ");
	return ;
}

void	Contact::setLastName(void)
{
	this->_LastName = try_set("Last Name 🙃: ");
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
	this->_DarkestSecret = try_set("Darkest Secret 😮: ");
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
	return (this->_FirstName);
}

std::string	Contact::getLastName(void)
{
	return (this->_LastName);
}

std::string	Contact::getNickName(void)
{
	return (this->_NickName);
}

std::string	Contact::getPhoneNumber(void)
{
	return (this->_PhoneNumber);
}

std::string	Contact::getDarkestSecret(void)
{
	return (this->_DarkestSecret);
}