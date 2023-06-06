/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:50:37 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/06 15:22:55 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main (void)
{
	std::string	input;
	Harl		pearl;
	
	while (666)
	{
		std::getline(std::cin, input);
		pearl.complain(input);
	}
	return (0);
}
