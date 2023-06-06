/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:53:13 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/06 15:08:28 by vipereir         ###   ########.fr       */
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

void	Harl::debug(void) const
{
	std::cout << "I love 😍 having extra bacon 🥓 for my 7XL-double-cheese🧀-triple-pickle🥒-special-ketchup🍅 burger🍔. I really do! 😋" << std::endl; 
}

void	Harl::info(void) const
{
	std::cout << "I cannot believe😞 adding extra bacon🥓 costs more money💵. You didn’t put enough bacon🥓 in my burger🍔! If you did, I wouldn’t be asking🗣️ for more!" << std::endl; 
}

void	Harl::warning(void) const
{
	std::cout << "I think I deserve😇 to have some extra bacon🥓 for free🤑. I’ve been coming for years👴 whereas you started working👷 here since last month📆." << std::endl; 
}

void	Harl::error(void) const
{
	std::cout << "This is unacceptable🤬! I want to speak🗣️ to the manager🧑‍💼 now." << std::endl; 
}

void	ptr2member(void (Harl::*mem_func)(void) const, Harl obj)
{
	(obj.*mem_func)();
	return ;
}

void	Harl::complain(std::string level) const
{
	ptr2member(&Harl::debug);
	(void)level;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */