/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:25:49 by vipereir          #+#    #+#             */
/*   Updated: 2023/05/24 12:31:19 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
  std::cout << "contact constructor 🏗️" << std::endl;
}

Contact::~Contact(void) {
  std::cout << "contact destructor 💣💀" << std::endl;
}


void	Contact::setFirstName(void)
{
	std::string Name;

	while (666)
	{
		std::cout << "contact name: ";
		std::getline(std::cin, Name);
	//	std::cout << std::endl;
		if (Name.length() > 0)
			break ;
		else
		{
			std::cout << "empty field, please try again 😵‍💫" << std::endl;
			continue ;
		}
	}
	this->_FirstName = Name;
	return ;
}

void	Contact::getFirstName(void)
{
	std::cout << this->_FirstName << std::endl;
	return ;
}