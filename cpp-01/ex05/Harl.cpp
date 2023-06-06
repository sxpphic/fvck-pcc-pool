/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:53:13 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/06 14:12:21 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Harl::Harl()
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Harl::~Harl()
{
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Harl::debug(void)
{
	std::cout << "I love 😍 having extra bacon 🥓 for my 7XL-double-cheese🧀-triple-pickle🥒-special-
ketchup🍅 burger🍔. I really do! 😋" << std::endl; 
}

void	Harl::info(void)
{
	std::cout << "I cannot believe😞 adding extra bacon🥓 costs more money💵. You didn’t put
enough bacon🥓 in my burger🍔! If you did, I wouldn’t be asking🗣️ for more!" << std::endl; 
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve😇 to have some extra bacon🥓 for free🤑. I’ve been coming for
years👴 whereas you started working👷 here since last month📆." << std::endl; 
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable🤬! I want to speak🗣️ to the manager🧑‍💼 now." << std::endl; 
}

void	Harl::complain(std::string level)
{
	
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */