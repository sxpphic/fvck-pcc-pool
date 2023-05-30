/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 10:40:21 by vipereir          #+#    #+#             */
/*   Updated: 2023/05/30 12:51:57 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

int Zombie::_instances_number = 0;

Zombie::Zombie()
{
	std::cout << "[" << _instances_number << "]" << "contructor callled 🏗" << std::endl;
	_instances_number++;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Zombie::~Zombie()
{
	_instances_number--;
	std::cout << "[" << _instances_number << "]" << "destructor callled 💣" << std::endl;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ... 🧠" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

/* ************************************************************************** */