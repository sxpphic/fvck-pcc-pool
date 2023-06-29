/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 09:56:14 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/29 13:46:26 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


int main (void)
{
	const Animal* meta = new Animal;
	const Animal* c = new Cat;
	const Animal* d = new Dog;
	
	// base class	
	meta->makeSound();
	std::cout << meta->getType() << " " << std::endl;

	// derived cat class
	
	c->makeSound();
	std::cout << c->getType() << " " << std::endl;

	//derived dog class

	d->makeSound();
	std::cout << d->getType() << " " << std::endl;
	
	delete d;
	delete c;
	delete meta;
	
	return (0);	
}