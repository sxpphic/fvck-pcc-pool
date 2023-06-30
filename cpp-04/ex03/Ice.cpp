/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:33:56 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/30 20:04:25 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() { ; }

Ice::Ice(const Ice& other) : AMateria(other) {}

Ice::Ice(const std::string& type) : AMateria(type) {}

Ice::~Ice() {}

Ice&	Ice::operator=(const Ice& other) {
	type = other.type;
	return (*this);
}

AMateria* Ice::clone(void) const {
	AMateria* clone = new Ice(*this);
	return (clone);
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}