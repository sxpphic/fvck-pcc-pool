/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:19:25 by vipereir          #+#    #+#             */
/*   Updated: 2023/03/22 17:33:32 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream>

int	main (void)
{
	Sample	example;

	example.foo = 666;

	std::cout << example.foo << std::endl;

	example.bar();
	return (0);
}
