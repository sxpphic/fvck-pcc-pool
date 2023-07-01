/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:33:53 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/30 21:53:41 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() { type = "cure"; }

Cure::Cure(const Cure& other) : AMateria(other) {}

Cure::Cure(const std::string& type) : AMateria(type) {}

Cure::~Cure() {}

Cure&	Cure::operator=(const Cure& other) {
	type = other.type;
	return (*this);
}

AMateria* Cure::clone(void) const {
	AMateria* clone = new Cure(*this);
	return (clone);
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
