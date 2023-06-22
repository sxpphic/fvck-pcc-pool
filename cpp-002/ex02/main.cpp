/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 13:34:28 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/22 10:38:29 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::_fract_bits = 8;

int	main (void)
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 1234.4321f );

	a = Fixed( 1234.4321f );
	
 	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;

	std::cout << (a == b) << std::endl; 
	std::cout << (a != b) << std::endl; 
	std::cout << (a >= b) << std::endl; 
	std::cout << (a <= b) << std::endl; 
	std::cout << (a > b) << std::endl; 
	std::cout << (a < b) << std::endl; 

	Fixed d;

	d = a + b;
	std::cout << "d is " << d << std::endl;

	Fixed f(Fixed(5.5f) - Fixed(2));
	std::cout << "f is " << f << std::endl;

	std::cout << "result is " << (Fixed(5.5f) * Fixed(2)) << std::endl;


	return 0;
}