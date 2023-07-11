/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:32:31 by vipereir          #+#    #+#             */
/*   Updated: 2023/07/11 11:41:02 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H
# include "ICharacter.hpp"

/*
class	ICharacter {

	public:
	virtual ~ICharacter() {};
	virtual const std::string& getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};
*/

class Character : public ICharacter {

	public:

		Character();
		Character(const std::string& name);
		Character(const Character& other);
		Character& operator=(const Character& other);
		virtual ~Character();

		const std::string& getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);

	private:
		std::string 	_name;
		AMateria		*_slot[4]; // lá fala q tem q ser empty qnd inicializa, será q vou ter q criar um array com ponteiro? 
		materia_addr	_dropped_materias;
		void			save_materia_addr(AMateria *to_discart);
	
};

class materia_addr {
	AMateria* 		gun; 
	materia_addr*	next;
};


#endif