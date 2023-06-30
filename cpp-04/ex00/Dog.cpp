/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:26:48 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/30 10:00:25 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog 🐶 constructor 🏗️ called" << std::endl;
	type = "Dog 🐶";
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "Dog 🐶 copy constructor 🏗️ called" << std::endl;
}

Dog::~Dog() { std::cout << "Dog 🐶 destructor 💣 called" << std::endl; }

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Dog 🐶 assignment operator called" << std::endl;
	type = other.type;
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "Lovely Dog 🐶 sounds * woof, woof *" << std::endl;
}