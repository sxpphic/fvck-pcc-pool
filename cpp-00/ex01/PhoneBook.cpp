/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:11:30 by vipereir          #+#    #+#             */
/*   Updated: 2023/05/24 11:53:19y vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int PhoneBook::it = 0;
int PhoneBook::contacts_number = 0;

PhoneBook::PhoneBook(void)
{
  //std::cout << "phonebook constructor 🏗️" << std::endl;
  return ;
}

PhoneBook::~PhoneBook(void)
{
//  std::cout << "phonebook destructor 💣💀" << std::endl;
  return ;
}

void PhoneBook::AddContact(void)
{
	
	if (this->it == 8)
		this->it = 0;  
	this->_ContactList[this->it].setFirstName();
	this->_ContactList[this->it].setLastName();
	this->_ContactList[this->it].setNickName();
	this->_ContactList[this->it].setPhoneNumber();
	this->_ContactList[this->it].setDarkestSecret();
	if (this->contacts_number < 8)
		this->contacts_number++;
	this->it++;
	return ;
}

bool	is_nubmer(std::string number)
{
	for (std::string::iterator i = number.begin(); i < number.end(); i++)
		if (!isdigit(*i))
			return (false);
	return (true);
}

/* int fake_toi(std::string number)
{
	int nb;

	nb = 0;

} */

void PhoneBook::SearchContact(void)
{
	std::string input;

	if (this->contacts_number == 0)
	{
		std::cout << "no contacts to search 😞" << std::endl;
		return ;
	}

	std::cout << "|" << std::setw(10) << "index" << "|" << std::setw(10) << "first name" << "|" << std::setw(10) << "last name" << "|" << std::setw(10) << "nick name" << "|" << std::endl;
	for (int i = 0; i < this->contacts_number; i++)
	{
		std::cout << "|";
		std::cout << std::setw(10) << i;
		std::cout << "|";
		std::cout << std::setw(10) << this->_ContactList[i].getFirstName();
		std::cout << "|";
		std::cout << std::setw(10) << this->_ContactList[i].getLastName();
		std::cout << "|";
		std::cout << std::setw(10) << this->_ContactList[i].getNickName();
		std::cout << "|";
		std::cout << std::endl;
	}
	std::cout << "select index: ";
	while (is_nubmer(input))
		std::cin >> input;

	std::cout << input << std::endl;
}