/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 13:34:28 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/21 19:45:08 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main (void)
{
	Fixed a(1234.4321f);

	std::cout << a.toFloat() << std::endl;

	return (0);
}