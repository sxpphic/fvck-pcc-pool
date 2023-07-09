/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 13:34:28 by vipereir          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/07/05 13:56:51 by vipereir         ###   ########.fr       */
=======
/*   Updated: 2023/07/09 16:11:10 by vipereir         ###   ########.fr       */
>>>>>>> 6672c67 (fix: arithmetic op)
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main (void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ));

	Fixed c(100), d(10), e(10);
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;
	std::cout << "res" << std::endl;
	std::cout << (c / d) << std::endl;
	std::cout << "res" << std::endl;
	
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;
	
	std::cout << "add" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;
}