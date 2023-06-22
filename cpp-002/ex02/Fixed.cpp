/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:03:39 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/22 09:28:04 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// constructor
Fixed::Fixed() {
	std::cout << "default constructor called 🏗️" << std::endl;
	_fixed_point = 0;
}

// int constructor
Fixed::Fixed(const int num) : _fixed_point(num * (1 << _fract_bits)) {
	std::cout << "int constructor called 🔢" << std::endl;
}

// float constructor
Fixed::Fixed(const float num) : _fixed_point(roundf((num * (1 << _fract_bits)))) {
	std::cout << "float constructor called 🛟" << std::endl;
}

// copy
Fixed::Fixed(const Fixed& other) {
	std::cout << "copy constructor called ✂️" << std::endl;
	_fixed_point = other._fixed_point;
}

/* OVERLOADS */

// assignment copy
Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "copy assignment operator called 🟰" << std::endl;
	if (this != &other) {
		_fixed_point = other._fixed_point;
	}
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}

bool	Fixed::operator==(const Fixed& other) {
	return (_fixed_point == other._fixed_point);
}


/* END OVERLOADS*/

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

float	Fixed::toFloat(void) const {
	return ((float)_fixed_point / (1 << _fract_bits));
}

int		Fixed::toInt(void) const {
	return (_fixed_point / (1 << _fract_bits));
}