/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:32:35 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/30 13:18:29 by vipereir         ###   ########.fr       */
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
		_slot[i] = other._slot[i];
}

Character::~Character() {}