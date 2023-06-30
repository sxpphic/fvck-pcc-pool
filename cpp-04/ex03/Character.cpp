/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:32:35 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/30 17:17:41 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {}

Character::Character(const std::string& name) {
	_name = name;
}

Character::Character(const Character& other) {
	_name = other._name;
	for (int i = 0; i < 4; i++)
		*_slot[i] = *other._slot[i]; // aa
}

Character& Character::operator=(const Character& other) {
	_name = other._name;
	for (int i = 0; i < 4; i++)
		*_slot[i] = *other._slot[i];
	return (*this);
}

Character::~Character() {}

// methods

const std::string& Character::getName() const {
	return (_name);
}

void	Character::equip(AMateria* m){
	for (size_t i = 0; i < 4; i++) {
		if (!_slot[i]) {
			_slot[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx) {
	if (idx >= 0 && idx < 4) {
		if (_slot[idx])
			_slot[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target) {
	if ((idx >= 0 && idx < 4) && _slot[idx]) {
		_slot[idx]->use(target);
	}
}