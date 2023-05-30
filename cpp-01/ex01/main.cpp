/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:26:55 by vipereir          #+#    #+#             */
/*   Updated: 2023/05/30 12:25:32 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N = 10;
	
	Zombie	*aLotOfZombies = zombieHorde(N, "generic zombie");
	
	for (int i = 0; i < N; i++)
		aLotOfZombies[i].announce();
		
	delete[] aLotOfZombies;
	return (0);
}
