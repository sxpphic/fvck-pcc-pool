/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:53:13 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/09 13:07:13 by vipereir         ###   ########.fr       */
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
	std::cout << "👾 DEBUG 👾" << std::endl;
	std::cout << "I love 😍 having extra bacon 🥓 for my 7XL-double-cheese🧀-triple-pickle🥒-special-ketchup🍅 burger🍔. I really do! 😋" << std::endl << std::endl; 
}

void	Harl::info(void) 
{
	std::cout << "ℹ️ INFO ℹ️" << std::endl;
	std::cout << "I cannot believe😞 adding extra bacon🥓 costs more money💵. You didn’t put enough bacon🥓 in my burger🍔! If you did, I wouldn’t be asking🗣️ for more!" << std::endl << std::endl; 
}

void	Harl::warning(void) 
{
	std::cout << "❗️ WARNING ❗️" << std::endl;
	std::cout << "I think I deserve😇 to have some extra bacon🥓 for free🤑. I’ve been coming for years👴 whereas you started working👷 here since last month📆." << std::endl << std::endl; 
}

void	Harl::error(void) 
{
	std::cout << "💀 ERROR 💀" << std::endl;
	std::cout << "This is unacceptable🤬! I want to speak🗣️ to the manager🧑‍💼 now." << std::endl << std::endl; 
}

/* void	ptr2member(void (Harl::*mem_func)(void) const, Harl obj)
{
	(obj.*mem_func)();
	return ;
} */

void	Harl::complain(int i)
{
	Harl		obj;
	
 	void (Harl::*ptr_to_func_array[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	while (i < 4) {
		(obj.*ptr_to_func_array[i])();
		i++;
	}
}

// apenas pra guardar
/* 	void (Harl::*ptrToMemberFunc)();
	
	ptrToMemberFunc = &Harl::debug;
	(obj.*ptrToMemberFunc)(); */
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */