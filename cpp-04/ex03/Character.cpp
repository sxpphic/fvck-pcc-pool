/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:32:35 by vipereir          #+#    #+#             */
/*   Updated: 2023/07/12 09:14:13 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	for (size_t i = 0; i < 4; i++) {
		_slot[i] = NULL;
	}
}

Character::Character(const std::string& name) {
	for (size_t i = 0; i < 4; i++) {
		_slot[i] = NULL;
	}
	_name = name;
}

Character::Character(const Character& other) {
	_name = other._name;
	for (int i = 0; i < 4; i++) {
		if (_slot[i])
			delete _slot[i];
	}
	for (int i = 0; i < 4; i++) {
		if (other._slot[i])
			_slot[i] = other._slot[i]->clone();
	}
}

Character& Character::operator=(const Character& other) {
	_name = other._name;
	for (int i = 0; i < 4; i++) {
		if (_slot[i])
			delete _slot[i];
	}
	for (int i = 0; i < 4; i++) {
		if (other._slot[i])
			_slot[i] = other._slot[i]->clone();
	}
	return (*this);
}

Character::~Character() {
 	for (int i = 0; i < 4; i++) {
		if (_slot[i])  {
			delete _slot[i];
			_slot[i] = NULL;
		}
	} 
}

// methods

const std::string& Character::getName() const {
	return (_name);
}

void	Character::equip(AMateria* m){
	if (!m)
		return ;
	for (size_t i = 0; i < 4; i++) {
		if (!_slot[i]) {
			_slot[i] = m;
			return ;
		}
	}
	std::cout << "Inventory is full! DELETING the materia" << std::endl;
	delete m;
}

void	Character::unequip(int idx) {
	if (idx >= 0 && idx < 4) {
		if (_slot[idx]) {
			dropped.push(_slot[idx]);
			_slot[idx] = NULL;
		}
	}
}

void	Character::use(int idx, ICharacter& target) {
	if ((idx >= 0 && idx < 4) && _slot[idx]) {
		_slot[idx]->use(target);
	}
}
