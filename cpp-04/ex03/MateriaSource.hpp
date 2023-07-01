/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:32:50 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/30 21:45:30 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_H
# define MATERIA_SOURCE_H
# include "IMateriaSource.hpp"
# include "Ice.hpp"

class MateriaSource : public IMateriaSource {
	
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& other);
		~MateriaSource();
		MateriaSource& operator=(const MateriaSource& other);

		void		learnMateria(AMateria* m);
		AMateria* 	createMateria(const std::string& type);
	
	private:
		
		AMateria*	_mat[4];
		
};




#endif