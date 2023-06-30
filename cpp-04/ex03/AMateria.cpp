/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 10:12:30 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/30 19:07:50 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// constructors/destructor

AMateria::AMateria() {}

AMateria::AMateria(const std::string& type) {
	this->type = type;
}

AMateria::AMateria(const AMateria& other) {
	this->type = other.type;
}

AMateria::~AMateria() {}

// operator overload

AMateria& AMateria::operator=(const AMateria& other) {
	this->type = other.type;
	return (*this);
}

// member functions

const std::string& AMateria::getType(void) const {
	return (type);
}

void	AMateria::use(ICharacter& target) {
	std::cout << "* used nothing at " << target.getName() << " *" << std::endl;
}

