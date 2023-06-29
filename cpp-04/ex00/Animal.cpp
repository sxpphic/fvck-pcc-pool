/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 09:58:41 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/29 12:21:23 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// constructors

Animal::Animal() {
	std::cout << "Animal 🐯 constructor 🏗️ called" << std::endl;
	type = "generic animal";
}

Animal::Animal(const Animal& other) {
	std::cout << "Animal 🐯 copy constructor 🏗️ called" << std::endl;
	type = other.type;
}

Animal&	Animal::operator=(const Animal& other) {
	std::cout << "Animal 🐯 assignment operator called" << std::endl;
	type = other.type;
	return (*this);
}

Animal::~Animal() { std::cout << "Animal 🐯 destructor 💣 called" << std::endl; }

std::string Animal::getType(void) const {
	return (type);
}

void Animal::makeSound(void) const {
	std::cout << "* generic animal sound *" << std::endl;
}

