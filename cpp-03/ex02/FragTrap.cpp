/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 10:58:59 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/27 14:20:42 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap() {
	_init();
}

FragTrap::FragTrap(std::string name) {
	_init();
	_name = name;
}

FragTrap::FragTrap(FragTrap& other) : ClapTrap(other) {
	std::cout << "FragTrap 🐸 copy constructor called ✂️" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap& other) {
	std::cout << "FragTrap 🐸 copy assignment operator called 🟰" << std::endl;
	_copy(other);
	return (*this);
}

FragTrap::~FragTrap() { std::cout << "FragTrap 🐸 destructor called 💣" << std::endl; }

void FragTrap::highFivesGuys(void) {
	static unsigned int high_fives_count;

	high_fives_count++;
	std::cout << "HIGH FIVE 🙏 🙌" << std::endl;
	std::cout << "current high five counter: " << high_fives_count << std::endl;
}

/* auxiliary functions */

void	FragTrap::_init() {
	std::cout << "FragTrap 🐸 default constructor called 🏗️" << std::endl;
	_hit_points = 100;
	_energy_points = 100;
	_atack_damage = 30;
}

void	FragTrap::_copy(const FragTrap& other) {
	_name = other._name;
	_hit_points = other._hit_points;
	_energy_points = other._energy_points;
	_atack_damage = other._atack_damage;
}