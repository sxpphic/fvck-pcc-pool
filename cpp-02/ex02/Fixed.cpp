/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:03:39 by vipereir          #+#    #+#             */
/*   Updated: 2023/07/09 16:10:56 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// constructor
Fixed::Fixed() : _fixed_point(0) {
	std::cout << "default constructor called 🏗️" << std::endl;
}

// int constructor
Fixed::Fixed(const int num) {
	std::cout << "int constructor called 🔢" << std::endl;
	_fixed_point = num * (1 << _fract_bits);
}

// float constructor
Fixed::Fixed(const float num) {
	std::cout << "float constructor called 🛟" << std::endl;
	_fixed_point = roundf((num * (1 << _fract_bits)));
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

bool	Fixed::operator==(const Fixed& other) const {
	return (_fixed_point == other._fixed_point);
}

bool	Fixed::operator!=(const Fixed& other) const {
	return (_fixed_point != other._fixed_point);
}

bool	Fixed::operator>=(const Fixed& other) const{
	return (_fixed_point >= other._fixed_point);
}

bool	Fixed::operator<=(const Fixed& other) const{
	return (_fixed_point <= other._fixed_point);
}

bool	Fixed::operator>(const Fixed& other) const {
	return (_fixed_point > other._fixed_point);
}

bool	Fixed::operator<(const Fixed& other) const {
	return (_fixed_point < other._fixed_point);
}

// arithmetics operations 

Fixed	Fixed::operator+(const Fixed& other) const {
	Fixed	ret;

	ret.setRawBits(_fixed_point  + other._fixed_point); // converter os frectinais bits awcho q n 
	return (ret);
}

Fixed	Fixed::operator-(const Fixed& other) const {
	Fixed	ret;

	ret.setRawBits(_fixed_point - other._fixed_point);
	return (ret);
}

Fixed	Fixed::operator*(const Fixed& other) const{
	Fixed	ret;

	ret.setRawBits((_fixed_point * other._fixed_point) >> _fract_bits);
	return (ret);
}

Fixed	Fixed::operator/(const Fixed& other) const {
	Fixed	ret;

	ret.setRawBits((_fixed_point << _fract_bits) / other._fixed_point);
	return (ret);
}

Fixed	Fixed::operator++(int) {
	Fixed temp(*this);
	_fixed_point++;
	return (temp);
}

Fixed	Fixed::operator--(int) {
	Fixed temp(*this);
	_fixed_point--;
	return (temp);
}

Fixed&	Fixed::operator++() {
	_fixed_point++;
	return (*this);
}

Fixed&	Fixed::operator--() {
	_fixed_point--;
	return (*this);
}

/* END OVERLOADS*/

Fixed&	Fixed::max(Fixed& a, Fixed& b) {
	return (a >= b ? a : b);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b) {
	return (a >= b ? a : b);
}

Fixed&	Fixed::min(Fixed& a, Fixed& b) {
	return (a <= b ? a : b);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b) {
	return (a <= b ? a : b);
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

float	Fixed::toFloat(void) const {
	return ((float)_fixed_point / (1 << _fract_bits));
}

int		Fixed::toInt(void) const {
	return (_fixed_point / (1 << _fract_bits));
}