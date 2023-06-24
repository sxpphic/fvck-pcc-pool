/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 13:27:47 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/23 13:55:53y vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* constructors */

ClapTrap::ClapTrap() : _name("sem_nome"), _hit_points(10), _energy_points(10), _atack_damage(0) {
	std::cout << "ClapTrap 🤖 default constructor called 🏗️" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name),_hit_points(10), _energy_points(10), _atack_damage(0) {
	std::cout << "ClapTrap 🤖 default constructor called 🏗️" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& other) {
	std::cout << "ClapTrap 🤖 copy constructor called ✂️" << std::endl;
	_name = other._name;
	_hit_points = other._hit_points;
	_energy_points = other._energy_points;
	_atack_damage = other._atack_damage;
}

ClapTrap& ClapTrap::operator=(ClapTrap& other) {	
	std::cout << "ClapTrap 🤖 copy assignment operator called 🟰" << std::endl;
	_name = other._name;
	_hit_points = other._hit_points;
	_energy_points = other._energy_points;
	_atack_damage = other._atack_damage;
	return (*this);
}

ClapTrap::~ClapTrap() { std::cout << "ClapTrap 🤖 destructor called 💣" << std::endl; }

/* member functions*/

bool	ClapTrap::_useEnergy() {
	if (_hit_points <= 0) {
		std::cout << "you're dead 💀" << std::endl;
		return (false);
	} else if (_energy_points <= 0) {
		std::cout << "not enough energy points 🥵" << std::endl;
		return (false);
	} else {
		_energy_points--;
		return (true);
	}
}

void	ClapTrap::attack(const std::string& target) {
	if (!_useEnergy())	
		return ;
	// if para os sem nome ???
	std::cout << "ClapTrap 🤖 " << _name << " attacks 🤺 " << target << ", causing " << _atack_damage << " points of damage! 🩸" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	_hit_points -= amount;
	std::cout << "ClapTrap 🤖 " << _name << " took " << amount << " points of damage! 🩸" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (!_useEnergy())	
		return ;
	_hit_points += amount;
	std::cout << "ClapTrap 🤖 " << _name << " repaired 🔧 himself in " << amount << " hit points! 💖" << std::endl;
}


