/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:50:37 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/09 13:09:59 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main (int argc, char **argv)
{
	std::string	possible_options[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	Harl		pearl;
	int 		i;
	
	if (argc != 2){
		std::cout << "[❗️ WRONG INPUT ❗️]" << std::endl;
		return (0);
	}
	for (i = 0; i < 4; i++){
		if (argv[1] == possible_options[i])
			break ;
	}
	if (i == 4) {
		std::cout << "[ Probably complaining 📢 about insignificant problems😅 ]" << std::endl;
		return (0);
	}
	switch (i) {
		case (0):
			pearl.complain(0);
			break ;
		case (1):
			pearl.complain(1);
			break ;
		case (2):
			pearl.complain(2);
			break ;
		case (3):
			pearl.complain(3);
			break ;
		default:
			break ;
	}

	return (0);
}
