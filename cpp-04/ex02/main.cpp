/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 09:56:14 by vipereir          #+#    #+#             */
/*   Updated: 2023/07/14 11:28:22 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


/* int main (void)
{
	//const AAnimal* meta = new AAnimal;
	const AAnimal* c = new Cat;
	const AAnimal* d = new Dog;

	// derived cat class
	
	c->makeSound();
	std::cout << c->getType() << " " << std::endl;

	//derived dog class

	d->makeSound();
	std::cout << d->getType() << " " << std::endl;
	
	delete d;
	delete c;
} */

// deep copy;

int main (void)
{
	Cat a;

	a.setIdea("pukemon", 10);

	Cat b(a);
	
	std::cout << a.getIdea(10) << std::endl;
	std::cout << b.getIdea(10) << std::endl;
	
	a.setIdea("asdfasdf", 10);
	std::cout << a.getIdea(10) << std::endl;
	std::cout << b.getIdea(10) << std::endl;
	
	return (0);	
}