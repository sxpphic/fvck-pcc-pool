/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:32:54 by vipereir          #+#    #+#             */
/*   Updated: 2023/07/01 08:04:56 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (size_t i = 0; i < 4; i++) {
		_mat[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	for (int i = 0; i < 4; i++)
		_mat[i] = other._mat[i]->clone();
}

MateriaSource::~MateriaSource() {
 	for (int i = 0; i < 4; i++) {
		if (_mat[i])  {
			delete _mat[i];
			_mat[i] = NULL;
		}
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
	for (int i = 0; i < 4; i++)
		_mat[i] = other._mat[i]->clone();
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m) {
	if (!m)
		return ;
	for (size_t i = 0; i < 4; i++) {
		if (!_mat[i]) {
			_mat[i] = m; // copia o addr ou cria uma copia nova;
			return ;
		}
	}
	// se não tiver slot, deleta a materia
	std::cout << "Materia Source is full! DELETING the materia" << std::endl;
	delete m;
}

AMateria* MateriaSource::createMateria(const std::string& type) {
	for (size_t i = 0; i < 4; i++) {
		if (_mat[i] && _mat[i]->getType() == type)
			return (_mat[i]->clone());
	}
	return (NULL);
}
