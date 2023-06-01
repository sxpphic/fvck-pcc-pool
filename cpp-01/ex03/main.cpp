/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:47:54 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/01 14:52:10 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	{
		Weapon club = Weapon("sadfasdf");

		HumanA bob("Bob", club);
		bob.attack();
		club.setType("metralhadora ak47 tatatatatta");
		bob.attack();
	}
	{
		Weapon	club = Weapon("Super weapon");
		
		HumanB	Joel("Joel");
		Joel.attack();
		Joel.setWeapon(club);
		Joel.attack();
		club.setType("zombie killer weapon 2000");
		Joel.attack();		
	}

	
	return 0;
}