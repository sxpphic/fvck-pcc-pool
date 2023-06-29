/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 09:56:14 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/29 15:13:05 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


int main (void)
{
	Animal* forest[50];

	for(int i = 0; i < 50; i++)
	{
		if (i < 25)
			forest[i] = new Cat;
		else
			forest[i] = new Dog;
	}		

	for (int i = 0; i < 50; i++)
		delete forest[i];
	return (0);	
}



// deep copy;
/* 
int main (void)
{
	Cat a;
	Cat b;

	

	a.setIdea("pukemon", 10);

	b = a;
	
	std::cout << a.getIdea(10) << std::endl;
	std::cout << b.getIdea(10) << std::endl;
	
	a.setIdea("asdfasdf", 10);
	std::cout << a.getIdea(10) << std::endl;
	std::cout << b.getIdea(10) << std::endl;

	
	return (0);	
} */