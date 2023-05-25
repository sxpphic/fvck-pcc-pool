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

PhoneBook::PhoneBook(void) {
  return ;
}

PhoneBook::~PhoneBook(void) {
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
	std::cout << "thx!" << std::endl;
	if (this->contacts_number < 8)
		this->contacts_number++;
	this->it++;
	return ;
}

void PhoneBook::SearchContact(void)
{
	std::string input;

	if (this->contacts_number == 0)
	{
		std::cout << "no contacts to search 😞" << std::endl;
		return ;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|" << std::setw(10) << "index" << "|" << std::setw(10) << "first name" << "|" << std::setw(10) << "last name" << "|" << std::setw(10) << "nick name" << "|" << std::endl;
	for (int i = 0; i < this->contacts_number; i++)
	{
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "|";
		std::cout << std::setw(10) << i;
		std::cout << "|";
		std::cout << std::setw(10) << format_string(this->_ContactList[i].getFirstName());
		std::cout << "|";
		std::cout << std::setw(10) << format_string(this->_ContactList[i].getLastName());
		std::cout << "|";
		std::cout << std::setw(10) << format_string(this->_ContactList[i].getNickName());
		std::cout << "|";
		std::cout << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
	while (666)
	{
		std::cout << "select index: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
		if (!is_nubmer(input))
			std::cout << "numbers only 🔢 !!!" << std::endl;
		else if (fake_toi(input) > this->contacts_number - 1 || fake_toi(input) < 0)
			std::cout << "numbers too large 😮 or too small 🤏 " << std::endl;
		else
			break ;
	}
	int contact_index = fake_toi(input);
	std::cout << "- - - - - - - - - - - - - - - -" << std::endl;
	std::cout << "FIRST NAME 😇: " << this->_ContactList[contact_index].getFirstName() << std::endl;
	std::cout << "LAST NAME 👺: " << this->_ContactList[contact_index].getLastName() << std::endl;
	std::cout << "NICK NAME 👤: " << this->_ContactList[contact_index].getNickName() << std::endl;
	std::cout << "CONTACT NUMBER 📇: " << this->_ContactList[contact_index].getPhoneNumber() << std::endl;
	std::cout << "DARKEST SECRET 🚔: " << this->_ContactList[contact_index].getDarkestSecret() << std::endl;
	std::cout << "- - - - - - - - - - - - - - - -" << std::endl;
}
