/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 18:24:36 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/24 12:33:18 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main (void)
{
	ScavTrap b("jurujuba");
	ScavTrap a(b);


	a.attack("asdf");
	a.guardGate();
	a.takeDamage(666);
	a.attack("asdf");
	return (0);
}