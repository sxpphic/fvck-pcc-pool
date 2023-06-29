/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 09:58:41 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/29 13:37:14 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// constructors

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal 🐀 constructor 🏗️ called" << std::endl;
	type = "generic WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	std::cout << "WrongAnimal 🐀 copy constructor 🏗️ called" << std::endl;
	type = other.type;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other) {
	std::cout << "WrongAnimal 🐀 assignment operator called" << std::endl;
	type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal() { std::cout << "WrongAnimal 🐀 destructor 💣 called" << std::endl; }

std::string WrongAnimal::getType(void) const {
	return (type);
}

void WrongAnimal::makeSound(void) const {
	std::cout << "* generic WrongAnimal sound *" << std::endl;
}

