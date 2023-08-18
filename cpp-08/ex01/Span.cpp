/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 11:11:56 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/18 14:06:45 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// constructors and destructor 🏗️💣

Span::Span() {
	throw std::runtime_error("cannot without parameters!");
}

Span::Span(unsigned int N) : _max_size(N), _size(0) {}


Span::Span(const Span& other) {
	(void)other;
}

Span::~Span() {}

//getters 🫳

// overloads 💯

Span& Span::operator=(const Span& other) {
	if (this == &other)
		return (*this);
	// copy
	return (*this);
}

// methods

void 	Span::check_conditions() {
	if (_size <= 1)
		throw std::runtime_error("SIZE too small, try add more numbers !!!");
}

void Span::addNumber(int num) {
	_my_set.insert(num);
	_size++;

	if (_size > _max_size)
		throw std::runtime_error("MAX_SIZE exceeded!");
}

int  Span::longestSpan() {
	check_conditions();
	
	return (*--_my_set.end() - *_my_set.begin());
}

int	Span::shortestSpan() {
	check_conditions();
	std::multiset<int>::iterator it = _my_set.begin();
	std::multiset<int>::iterator ite = _my_set.end();
	int						last = *it++;
	// int						shortest = it == ite ? 0 : *it - last;
	int						shortest = *it - last;


	for (; it != ite; it++) {
		if (*it - last < shortest) 
			shortest = *it - last;
		last = *it;
	}
	return (shortest);
}

void	Span::addRange(int start, int end) {
	
	
	for (int num = start; num <= end; num++) {
		addNumber(num);
	}
}
