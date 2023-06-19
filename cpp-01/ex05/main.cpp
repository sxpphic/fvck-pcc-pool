/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:50:37 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/19 12:22:36 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main (int argc, char **argv)
{
	Harl		pearl;

	if (argc != 2) {
		std::cout << "Wrong input 🛑" << std::endl;
		return (0);
	}
	
	std::string input(argv[1]);
	pearl.complain(input);
	return (0);
}
