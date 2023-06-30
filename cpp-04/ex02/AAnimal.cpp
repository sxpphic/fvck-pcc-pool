/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 09:58:41 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/30 09:25:19 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// constructors

AAnimal::AAnimal() {
	std::cout << "AAnimal 🐯 constructor 🏗️ called" << std::endl;
	type = "generic AAnimal";
}

AAnimal::AAnimal(const AAnimal& other) {
	std::cout << "AAnimal 🐯 copy constructor 🏗️ called" << std::endl;
	type = other.type;
}

AAnimal&	AAnimal::operator=(const AAnimal& other) {
	std::cout << "AAnimal 🐯 assignment operator called" << std::endl;
	type = other.type;
	return (*this);
}

AAnimal::~AAnimal() { std::cout << "AAnimal 🐯 destructor 💣 called" << std::endl; }

std::string AAnimal::getType(void) const {
	return (type);
}