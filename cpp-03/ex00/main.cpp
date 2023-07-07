/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 18:24:36 by vipereir          #+#    #+#             */
/*   Updated: 2023/07/07 10:00:10 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void)
{
	ClapTrap a("npc");
	ClapTrap b;

	b.attack("adsf");
	b = a;
	b.attack("asdf");
	ClapTrap	c(b);
	c.attack("robot");
	c.attack("robot");
	c.attack("robot");
	c.attack("robot");
	c.attack("robot");
	c.attack("robot");
	c.attack("robot");
	c.attack("robot");
	c.attack("robot");
	c.attack("robot");
	c.attack("robot");
	
	return (0);
}