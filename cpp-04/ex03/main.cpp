/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 10:07:45 by vipereir          #+#    #+#             */
/*   Updated: 2023/07/12 09:24:27 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob vance, vance refrigeration");
		
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);

// out of range
	me->use(4, *bob);
	
	me->unequip(1);
	me->unequip(0);

	delete bob;
	delete me;
	delete src;
	return 0;
}


/*
 // deep
	Character test("asdf");
	Character test1("asdf");
	tmp = src->createMateria("cure");
	test.equip(tmp);
	tmp = src->createMateria("ice");
	test1.equip(tmp);
	test1.use(0, *bob);
	test1 = test;

	test.unequip(0);
	test1.use(0, *bob);
*/