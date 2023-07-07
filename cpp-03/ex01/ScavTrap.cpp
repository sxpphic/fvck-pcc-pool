/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 10:33:54 by vipereir          #+#    #+#             */
/*   Updated: 2023/07/07 10:15:35 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	_init();
}

ScavTrap::ScavTrap(const std::string name) {
	_init();
	_name = name;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	std::cout << "ScavTrap 🚜 copy constructor called ✂️" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	std::cout << "ScavTrap 🚜 copy assignment operator called 🟰" << std::endl;
	_copy(other);
	return (*this);
}

ScavTrap::~ScavTrap() { std::cout << "ScavTrap 🚜 destructor called 💣" << std::endl; }

void	ScavTrap::attack(const std::string target) {
	if (!_useEnergy())	
		return ;
	std::cout << "ScavTrap 🚜 " << _name << " attacks 🤺 " << target << ", causing " << _atack_damage << " points of damage! 🩸" << std::endl;
}

void ScavTrap::guardGate() {

	if (_hit_points <= 0) {
		std::cout << "you're dead 💀" << std::endl;
		return ;
	}

	std::cout << "ScavTrap 🚜 " << _name << " is now in Gate 🚪 keeper 🔐 mode"  << std::endl;
}



/* auxiliary functions */

void	ScavTrap::_init() {
	std::cout << "ScavTrap 🚜 default constructor called 🏗️" << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_atack_damage = 20;
}

void	ScavTrap::_copy(const ScavTrap& other) {
	_name = other._name;
	_hit_points = other._hit_points;
	_energy_points = other._energy_points;
	_atack_damage = other._atack_damage;
}