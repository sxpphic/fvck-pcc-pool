/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:32:54 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/30 20:02:16 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {}

MateriaSource::MateriaSource(const MateriaSource& other) {
	for (int i = 0; i < 4; i++)
		*_mat[i] = *other._mat[i];
}

MateriaSource::~MateriaSource() {}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
	for (int i = 0; i < 4; i++)
		*_mat[i] = *other._mat[i];
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m) {
	for (size_t i = 0; i < 4; i++) {
		if (_mat[i])
			*_mat[i] = *m; // copia o addr ou cria uma copia nova;
	}
}

AMateria* MateriaSource::createMateria(const std::string& type) {
	for (size_t i = 0; i < 4; i++) {
		if (_mat[i]->getType() == type)
			return (_mat[i]);
	}
	return (NULL);
}
