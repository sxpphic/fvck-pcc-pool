/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 14:00:00 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/29 14:23:01 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain 🧠 constructor 🏗️ called" << std::endl;
}

Brain::Brain(const Brain &other) {
	std::cout << "Brain 🧠 copy constructor 🏗️ called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
}

Brain::~Brain() {
	std::cout << "Brain 🧠 destructor 💣 called" << std::endl;
}

Brain& Brain::operator=(const Brain &other) {
	std::cout << "Brain 🧠 assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	return (*this);
}