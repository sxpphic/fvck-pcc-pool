/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:26:48 by vipereir          #+#    #+#             */
/*   Updated: 2023/07/11 11:13:49 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog 🐶 constructor 🏗️ called" << std::endl;
	type = "Dog 🐶";
	_my_brain = new Brain;
}

Dog::Dog(const Dog& other) : AAnimal(other) {
	std::cout << "Dog 🐶 copy constructor 🏗️ called" << std::endl;
	delete _my_brain;
	_my_brain = new Brain(*other._my_brain);
//	type = other.type; // has already copied in the AAnimal cooy 
}

Dog::~Dog() {
	std::cout << "Dog 🐶 destructor 💣 called" << std::endl;
	delete _my_brain;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Dog 🐶 assignment operator called" << std::endl;
	type = other.type;
	delete _my_brain;
	_my_brain = new Brain(*other._my_brain);
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "Lovely Dog 🐶 sounds * woof, woof *" << std::endl;
}
