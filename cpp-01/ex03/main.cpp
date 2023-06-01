/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:47:54 by vipereir          #+#    #+#             */
/*   Updated: 2023/05/30 17:21:33 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	Weapon club = Weapon("sadfasdf");
	
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("metralhadora ak47 tatatatatta");
	bob.attack();

	
	return 0;
}