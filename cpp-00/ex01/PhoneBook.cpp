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

void PhoneBook::SearchContact(void)
{
	int input;
	std::cout << "|   index  |   name   |   last   |   nick   |" << std::endl;
	for (int i = 0; i < this->contacts_number; i++)
	{
		std::cout << "|     ";
		std::cout << i;
		std::cout << "    |";
		std::cout << this->_ContactList[i].getFirstName();
		std::cout << "|";
		std::cout << this->_ContactList[i].getLastName();
		std::cout << "|";
		std::cout << this->_ContactList[i].getNickName();
		std::cout << "|";
		std::cout << std::endl;
	}
	std::cout << "select index: ";
	std::cin >> input;
	if (input > this->contacts_number)
		input = this->contacts_number;
	std::cout << input << std::endl;
}