/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:47:25 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/15 19:30:59 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

Base* generate(void) {
	std::srand(time(0));

	switch(std::rand() % 3) {
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
	}
	return (NULL);
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "type: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "type: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "type: C" << std::endl;
}

void identify(Base& p) {
	try {
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "type: A" << std::endl;
	}
	catch (std::exception& e) {}
	try {
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "type: B" << std::endl;
	}
	catch (std::exception& e) {}
	try {
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "type: C" << std::endl;
	}
	catch (std::exception& e) {}
}
