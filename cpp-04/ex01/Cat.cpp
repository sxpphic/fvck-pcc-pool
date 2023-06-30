/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:26:46 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/30 10:01:59 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat 😺 constructor 🏗️ called" << std::endl;
	type = "Cat 😺";
	_my_brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Cat 😺 copy constructor 🏗️ called" << std::endl;
	_my_brain = new Brain(*other._my_brain);
}

Cat::~Cat() {
	std::cout << "Cat 😺 destructor 💣 called" << std::endl;
	delete _my_brain;
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat 😺 assignment operator called" << std::endl;
	type = other.type;
	_my_brain = new Brain(*other._my_brain);
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "diabolic cat 😺 sounds * meow, meow *" << std::endl;
}

void	Cat::setIdea(const std::string newIdea, int x) {
	if (x < 100 && x >= 0)
		_my_brain->ideas[x] = newIdea;
}

std::string	Cat::getIdea(int x) {
	if (x < 100 && x >= 0)
		return (_my_brain->ideas[x]);
	return ("out of range idea");
}
