/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:03:39 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/21 17:51:27 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// constructor
Fixed::Fixed() {
	std::cout << "default constructor called 🏗️" << std::endl;
	_fixed_point = 0;
}

// int constructor
Fixed::Fixed(const int num) {
	std::cout << "int constructor called 🔢" << std::endl;
	_fixed_point = num;
}

// float constructor
Fixed::Fixed(const float num) {
	std::cout << "float constructor called 🛟" << std::endl;

	float fixd;
	fixd = num;
//	std::cout << fixd << std::endl;

	while (fixd != roundf(fixd)) { fixd *= 10; }
	
//	std::cout << fixd << std::endl;
	_fixed_point = fixd;
}

// copy
Fixed::Fixed(const Fixed& other) {
	std::cout << "copy constructor called ✂️" << std::endl;
	_fixed_point = other._fixed_point;
}

// assignment copy
Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "copy assignment operator called 🟰" << std::endl;
	if (this != &other) {
		_fixed_point = other._fixed_point;
	}
	return (*this);
}

// destructor
Fixed::~Fixed() { std::cout << "destructor called 💣" << std::endl; }

// accessors

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits called 🥩" << std::endl;
	return (_fixed_point);
}

void	Fixed::setRawBits(int const raw) {
	_fixed_point = raw;
}

float	Fixed::toFloat(void) {
	int fraction;

	fraction = (_fixed_point & 255);
	std::cout << fraction << std::endl; 
	return (1);
}

int		Fixed::toInt(void) {
	return (1);
}