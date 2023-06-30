/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:26:46 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/30 10:00:50 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat 😺 constructor 🏗️ called" << std::endl;
	type = "Cat 😺";
}

Cat::Cat(const Cat& other)  : Animal(other) {
	std::cout << "Cat 😺 copy constructor 🏗️ called" << std::endl;
}

Cat::~Cat() { std::cout << "Cat 😺 destructor 💣 called" << std::endl; }

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat 😺 assignment operator called" << std::endl;
	type = other.type;
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "diabolic cat 😺 sounds * meow, meow *" << std::endl;
}
