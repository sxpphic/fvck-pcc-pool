/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 10:58:59 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/27 11:08:43 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap() {
	
}

/* auxiliary functions */

void	FragTrap::_init() {
	std::cout << "FragTrap 🐸 default constructor called 🏗️" << std::endl;
	_hit_points = 100;
	_energy_points = 50;
	_atack_damage = 20;
}

void	FragTrap::_copy(const FragTrap& other) {
	_name = other._name;
	_hit_points = other._hit_points;
	_energy_points = other._energy_points;
	_atack_damage = other._atack_damage;
}