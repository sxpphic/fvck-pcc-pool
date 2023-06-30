/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:26:46 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/29 12:25:51 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat 🐈 constructor 🏗️ called" << std::endl;
	type = "WrongCat 🐈";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	std::cout << "WrongCat 🐈 copy constructor 🏗️ called" << std::endl;
	type = other.type;
}

WrongCat::~WrongCat() { std::cout << "WrongCat 🐈 destructor 💣 called" << std::endl; }

WrongCat& WrongCat::operator=(const WrongCat& other) {
	std::cout << "WrongCat 🐈 assignment operator called" << std::endl;
	type = other.type;
	return (*this);
}

void	WrongCat::makeSound(void) const {
	std::cout << "diabolic WrongCat 🐈 sounds * meow, meow *" << std::endl;
}
