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

PhoneBook::PhoneBook(void)
{
  std::cout << "phonebook constructor 🏗️" << std::endl;
  return ;
}

PhoneBook::~PhoneBook(void)
{
  std::cout << "phonebook destructor 💣💀" << std::endl;
  return ;
}

void PhoneBook::AddContact(void)
{
	
	if (this->it == 8)
		this->it = 0;  
	this->_ContactList[this->it].setFirstName();
	this->it++;
	return ;
}
